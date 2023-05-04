from sympy import *
from numpy import matrix
from numpy import linalg
from sympy import Matrix



class VBFHHSample:
    def __init__(self, val_CV, val_C2V, val_kl, val_xs, label):
        self.val_CV  = val_CV
        self.val_C2V = val_C2V
        self.val_kl  = val_kl
        self.val_xs  = val_xs
        self.label   = label

class VBFHHModel:
    """ Models the VBF HH production as linear sum of 6 components """
    
    def __init__(self,sample_list, name):
        
        
        if len(sample_list) != 6:
            raise RuntimeError("malformed input sample list - expect 6 samples")
        if not isinstance(sample_list, list) and not isinstance(sample_list, tuple):
            raise RuntimeError("malformed input sample list - expect list or tuple")
        for s in sample_list:
            if not isinstance(s, VBFHHSample):
                raise RuntimeError("malformed input sample list - each element must be a VBFHHSample")
        self.sample_list = sample_list
        self.name = name
        # print what is being done
        
        print ("---" , self.name, "---- This VBF HH model is built with:")
        for i,s in enumerate(self.sample_list):
            print (" {0:<3} ... CV : {1:<3}, C2V : {2:<3}, kl : {3:<3}, xs : {4:<8} pb, label : {5}".format(i, s.val_CV, s.val_C2V, s.val_kl, s.val_xs, s.label))

        self.build_matrix()
        self.calculatecoeffients()

    def build_matrix(self):    
        """ create the matrix M in this object """

        if len(self.sample_list) != 6:
            print ("[ERROR] : expecting 6 samples in input")
            raise RuntimeError("malformed input sample list")
        M_tofill = [
            [None,None,None,None,None,None],
            [None,None,None,None,None,None],
            [None,None,None,None,None,None],
            [None,None,None,None,None,None],
            [None,None,None,None,None,None],
            [None,None,None,None,None,None]
        ]

        for isample, sample in enumerate(self.sample_list):
            # print isample, " CV, C2V, kl = ", sample.val_CV, sample.val_C2V, sample.val_kl
            
            ## implement the 6 scalings
            M_tofill[isample][0] = sample.val_CV**2 * sample.val_kl**2
            M_tofill[isample][1] = sample.val_CV**4
            M_tofill[isample][2] = sample.val_C2V**2
            M_tofill[isample][3] = sample.val_CV**3 * sample.val_kl
            M_tofill[isample][4] = sample.val_CV    * sample.val_C2V    * sample.val_kl
            M_tofill[isample][5] = sample.val_CV**2 * sample.val_C2V
        
        # print M_tofill
        self.M = Matrix(M_tofill)


    def calculatecoeffients(self):
        """ create the function sigma and the six coefficients in this object """

        try: self.M
        except AttributeError: self.build_matrix()
        
        ##############################################    
        CV, C2V, kl, a, b, c, iab, iac, ibc, s1, s2, s3, s4, s5, s6 = symbols('CV C2V kl a b c iab iac ibc s1 s2 s3 s4 s5 s6')    
        ### the vector of couplings
        c = Matrix([
            [CV**2 * kl**2] ,
            [CV**4]         ,
            [C2V**2]        ,
            [CV**3 * kl]    ,
            [CV * C2V * kl] ,
            [CV**2 * C2V]   
        ])
        ### the vector of components
        v = Matrix([
            [a]   ,
            [b]   ,
            [c]   ,
            [iab] ,
            [iac] ,
            [ibc]  
        ])    
        ### the vector of samples (i.e. cross sections)
        s = Matrix([
            [s1] ,
            [s2] ,
            [s3] ,
            [s4] ,
            [s5] ,
            [s6] 
        ])    
       
 ####    
        Minv   = self.M.inv()
        self.coeffs = c.transpose() * Minv # coeffs * s is the sigma, accessing per component gives each sample scaling
        self.sigma  = self.coeffs*s
        self.vc = Minv*s

## create the objects that will be called in combine

## the expected default - NOTE : the field "label" identifies the way the sample is expected to start in the datacard
sample_list = [
    VBFHHSample(1,0,-3,   val_xs = 0.05727, label = 'qqHH_CV_1_C2V_0_C3_-3'  ),
    VBFHHSample(1,1,1,   val_xs = 0.001226, label = 'qqHH_CV_1_C2V_1_C3_1'  ),
    VBFHHSample(1,2,1,   val_xs =0.009959, label = 'qqHH_CV_1_C2V_2_C3_1'  ),
    VBFHHSample(1,0,3,   val_xs = 0.01067, label = 'qqHH_CV_1_C2V_0_C3_3'  ),
    VBFHHSample(1,0,4, val_xs = 0.00945, label = 'qqHH_CV_0p5_C2V_0_C3_4'),
    VBFHHSample(1.5,1,1, val_xs = 0.04531, label = 'qqHH_CV_1p5_C2V_1_C3_1'),
]
VBFHHdefault = VBFHHModel(sample_list, 'VBFHHdefault')