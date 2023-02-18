/* Include files */

#include "flightControlSystem_sfun.h"
#include "c6_flightControlSystem.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c6_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c6_b_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c6_c_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c6_d_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c6_e_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c6_f_emlrtMCI = { 40,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c6_g_emlrtMCI = { 275,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c6_h_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c6_i_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c6_j_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c6_k_emlrtMCI = { 42,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c6_l_emlrtMCI = { 32,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c6_m_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c6_n_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c6_o_emlrtMCI = { 1442,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtMCInfo c6_p_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c6_q_emlrtMCI = { 81,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtMCInfo c6_r_emlrtMCI = { 297,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtMCInfo c6_s_emlrtMCI = { 81,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c6_t_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRSInfo c6_emlrtRSI = { 12, /* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_b_emlrtRSI = { 22,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_c_emlrtRSI = { 32,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_d_emlrtRSI = { 33,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_e_emlrtRSI = { 34,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_f_emlrtRSI = { 35,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_g_emlrtRSI = { 36,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2694"          /* pathName */
};

static emlrtRSInfo c6_h_emlrtRSI = { 79,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_i_emlrtRSI = { 97,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_j_emlrtRSI = { 99,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_k_emlrtRSI = { 140,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_l_emlrtRSI = { 142,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_m_emlrtRSI = { 368,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_n_emlrtRSI = { 92,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c6_o_emlrtRSI = { 1464,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_p_emlrtRSI = { 1639,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_q_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c6_r_emlrtRSI = { 2011,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_s_emlrtRSI = { 466,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_t_emlrtRSI = { 405,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_u_emlrtRSI = { 404,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_v_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c6_w_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c6_x_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c6_y_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c6_ab_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_bb_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_cb_emlrtRSI = { 57,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_db_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_eb_emlrtRSI = { 182,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_fb_emlrtRSI = { 184,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_gb_emlrtRSI = { 189,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_hb_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_ib_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c6_jb_emlrtRSI = { 14,/* lineNo */
  "cumsum",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"/* pathName */
};

static emlrtRSInfo c6_kb_emlrtRSI = { 16,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_lb_emlrtRSI = { 32,/* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo c6_mb_emlrtRSI = { 99,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_nb_emlrtRSI = { 125,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_ob_emlrtRSI = { 290,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_pb_emlrtRSI = { 596,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_qb_emlrtRSI = { 592,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_rb_emlrtRSI = { 944,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_sb_emlrtRSI = { 942,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_tb_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_ub_emlrtRSI = { 26,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c6_vb_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c6_wb_emlrtRSI = { 49,/* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo c6_xb_emlrtRSI = { 205,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_yb_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_ac_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_bc_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_cc_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_dc_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_ec_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_fc_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c6_gc_emlrtRSI = { 163,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_hc_emlrtRSI = { 164,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_ic_emlrtRSI = { 41,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c6_jc_emlrtRSI = { 188,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c6_kc_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c6_lc_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_mc_emlrtRSI = { 207,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_nc_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_oc_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c6_pc_emlrtRSI = { 33,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c6_qc_emlrtRSI = { 43,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c6_rc_emlrtRSI = { 51,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c6_sc_emlrtRSI = { 24,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_tc_emlrtRSI = { 28,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_uc_emlrtRSI = { 31,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_vc_emlrtRSI = { 32,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_wc_emlrtRSI = { 78,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_xc_emlrtRSI = { 139,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_yc_emlrtRSI = { 179,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_ad_emlrtRSI = { 184,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_bd_emlrtRSI = { 43,/* lineNo */
  "graythresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\graythresh.m"/* pathName */
};

static emlrtRSInfo c6_cd_emlrtRSI = { 45,/* lineNo */
  "graythresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\graythresh.m"/* pathName */
};

static emlrtRSInfo c6_dd_emlrtRSI = { 48,/* lineNo */
  "graythresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\graythresh.m"/* pathName */
};

static emlrtRSInfo c6_ed_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c6_fd_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c6_gd_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c6_hd_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c6_id_emlrtRSI = { 35,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_jd_emlrtRSI = { 138,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_kd_emlrtRSI = { 255,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_ld_emlrtRSI = { 254,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_md_emlrtRSI = { 253,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_nd_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c6_od_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c6_pd_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_qd_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_rd_emlrtRSI = { 328,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_sd_emlrtRSI = { 150,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_td_emlrtRSI = { 37,/* lineNo */
  "medfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\medfilt2.m"/* pathName */
};

static emlrtRSInfo c6_ud_emlrtRSI = { 25,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c6_vd_emlrtRSI = { 155,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c6_wd_emlrtRSI = { 179,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c6_xd_emlrtRSI = { 29,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_yd_emlrtRSI = { 34,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_ae_emlrtRSI = { 35,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_be_emlrtRSI = { 36,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_ce_emlrtRSI = { 48,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_de_emlrtRSI = { 53,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_ee_emlrtRSI = { 55,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_fe_emlrtRSI = { 66,/* lineNo */
  "imhmax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\imhmax.m"/* pathName */
};

static emlrtRSInfo c6_ge_emlrtRSI = { 10,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c6_he_emlrtRSI = { 14,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c6_ie_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c6_je_emlrtRSI = { 14,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c6_ke_emlrtRSI = { 35,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c6_le_emlrtRSI = { 37,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c6_me_emlrtRSI = { 41,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ne_emlrtRSI = { 304,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_oe_emlrtRSI = { 306,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_pe_emlrtRSI = { 79,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_qe_emlrtRSI = { 71,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_re_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_se_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_te_emlrtRSI = { 57,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_ue_emlrtRSI = { 44,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_ve_emlrtRSI = { 23,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_we_emlrtRSI = { 51,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_xe_emlrtRSI = { 114,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_ye_emlrtRSI = { 149,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_af_emlrtRSI = { 150,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_bf_emlrtRSI = { 153,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_cf_emlrtRSI = { 1454,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_df_emlrtRSI = { 1324,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ef_emlrtRSI = { 1315,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ff_emlrtRSI = { 1310,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_gf_emlrtRSI = { 1307,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_hf_emlrtRSI = { 1293,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_if_emlrtRSI = { 22,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c6_jf_emlrtRSI = { 26,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c6_kf_emlrtRSI = { 274,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c6_lf_emlrtRSI = { 275,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c6_mf_emlrtRSI = { 10,/* lineNo */
  "round",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pathName */
};

static emlrtRSInfo c6_nf_emlrtRSI = { 33,/* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo c6_of_emlrtRSI = { 27,/* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtRSInfo c6_pf_emlrtRSI = { 72,/* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo c6_qf_emlrtRSI = { 104,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_rf_emlrtRSI = { 105,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_sf_emlrtRSI = { 308,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_tf_emlrtRSI = { 316,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_uf_emlrtRSI = { 317,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_vf_emlrtRSI = { 325,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_wf_emlrtRSI = { 333,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_xf_emlrtRSI = { 340,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_yf_emlrtRSI = { 392,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_ag_emlrtRSI = { 420,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_bg_emlrtRSI = { 427,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_cg_emlrtRSI = { 587,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_dg_emlrtRSI = { 589,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_eg_emlrtRSI = { 617,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_fg_emlrtRSI = { 499,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_gg_emlrtRSI = { 506,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_hg_emlrtRSI = { 507,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_ig_emlrtRSI = { 514,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_jg_emlrtRSI = { 561,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_kg_emlrtRSI = { 530,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_lg_emlrtRSI = { 354,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_mg_emlrtRSI = { 363,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c6_ng_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_og_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_pg_emlrtRSI = { 382,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_qg_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRTEInfo c6_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694"          /* pName */
};

static emlrtRTEInfo c6_b_emlrtRTEI = { 32,/* lineNo */
  2,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694"          /* pName */
};

static emlrtRTEInfo c6_c_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694"          /* pName */
};

static emlrtRTEInfo c6_d_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694"          /* pName */
};

static emlrtRTEInfo c6_e_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694"          /* pName */
};

static emlrtRTEInfo c6_f_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694"          /* pName */
};

static emlrtRTEInfo c6_g_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c6_h_emlrtRTEI = { 1464,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_i_emlrtRTEI = { 391,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_j_emlrtRTEI = { 1,/* lineNo */
  23,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_k_emlrtRTEI = { 142,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_l_emlrtRTEI = { 404,/* lineNo */
  48,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_m_emlrtRTEI = { 405,/* lineNo */
  62,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_n_emlrtRTEI = { 17,/* lineNo */
  25,                                  /* colNo */
  "cumop",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pName */
};

static emlrtRTEInfo c6_o_emlrtRTEI = { 405,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_p_emlrtRTEI = { 466,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_q_emlrtRTEI = { 469,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_r_emlrtRTEI = { 99,/* lineNo */
  2,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_s_emlrtRTEI = { 404,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_t_emlrtRTEI = { 2011,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_u_emlrtRTEI = { 1890,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_v_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "useConstantDim",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pName */
};

static emlrtRTEInfo c6_w_emlrtRTEI = { 586,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_x_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_y_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_ab_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_bb_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_cb_emlrtRTEI = { 46,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_db_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_eb_emlrtRTEI = { 48,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_fb_emlrtRTEI = { 43,/* lineNo */
  6,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c6_gb_emlrtRTEI = { 51,/* lineNo */
  21,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c6_hb_emlrtRTEI = { 51,/* lineNo */
  5,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c6_ib_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c6_jb_emlrtRTEI = { 1,/* lineNo */
  43,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c6_kb_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_lb_emlrtRTEI = { 128,/* lineNo */
  57,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtRTEInfo c6_mb_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_nb_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_ob_emlrtRTEI = { 32,/* lineNo */
  35,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_pb_emlrtRTEI = { 32,/* lineNo */
  39,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_qb_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c6_rb_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_sb_emlrtRTEI = { 78,/* lineNo */
  23,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_tb_emlrtRTEI = { 79,/* lineNo */
  31,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_ub_emlrtRTEI = { 80,/* lineNo */
  31,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_vb_emlrtRTEI = { 81,/* lineNo */
  33,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_wb_emlrtRTEI = { 93,/* lineNo */
  25,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_xb_emlrtRTEI = { 94,/* lineNo */
  25,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_yb_emlrtRTEI = { 96,/* lineNo */
  24,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_ac_emlrtRTEI = { 97,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_bc_emlrtRTEI = { 100,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_cc_emlrtRTEI = { 123,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_dc_emlrtRTEI = { 124,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_ec_emlrtRTEI = { 125,/* lineNo */
  28,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_fc_emlrtRTEI = { 139,/* lineNo */
  49,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_gc_emlrtRTEI = { 139,/* lineNo */
  57,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_hc_emlrtRTEI = { 139,/* lineNo */
  74,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_ic_emlrtRTEI = { 79,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_jc_emlrtRTEI = { 80,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_kc_emlrtRTEI = { 81,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_lc_emlrtRTEI = { 93,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_mc_emlrtRTEI = { 94,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_nc_emlrtRTEI = { 96,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_oc_emlrtRTEI = { 97,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_pc_emlrtRTEI = { 123,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_qc_emlrtRTEI = { 124,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_rc_emlrtRTEI = { 125,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_sc_emlrtRTEI = { 1,/* lineNo */
  39,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_tc_emlrtRTEI = { 32,/* lineNo */
  8,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c6_uc_emlrtRTEI = { 16,/* lineNo */
  14,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c6_vc_emlrtRTEI = { 195,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_wc_emlrtRTEI = { 197,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_xc_emlrtRTEI = { 253,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_yc_emlrtRTEI = { 254,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_ad_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c6_bd_emlrtRTEI = { 49,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c6_cd_emlrtRTEI = { 49,/* lineNo */
  17,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c6_dd_emlrtRTEI = { 49,/* lineNo */
  5,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c6_ed_emlrtRTEI = { 320,/* lineNo */
  20,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c6_fd_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_gd_emlrtRTEI = { 42,/* lineNo */
  21,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_hd_emlrtRTEI = { 1,/* lineNo */
  30,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_id_emlrtRTEI = { 48,/* lineNo */
  13,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_jd_emlrtRTEI = { 53,/* lineNo */
  38,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_kd_emlrtRTEI = { 53,/* lineNo */
  58,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_ld_emlrtRTEI = { 53,/* lineNo */
  18,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_md_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_nd_emlrtRTEI = { 26,/* lineNo */
  13,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo c6_od_emlrtRTEI = { 55,/* lineNo */
  33,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_pd_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c6_qd_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c6_rd_emlrtRTEI = { 55,/* lineNo */
  10,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_sd_emlrtRTEI = { 56,/* lineNo */
  19,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_td_emlrtRTEI = { 56,/* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_ud_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_vd_emlrtRTEI = { 53,/* lineNo */
  21,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_wd_emlrtRTEI = { 1454,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_xd_emlrtRTEI = { 462,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_yd_emlrtRTEI = { 463,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ae_emlrtRTEI = { 941,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_be_emlrtRTEI = { 1292,/* lineNo */
  57,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ce_emlrtRTEI = { 942,/* lineNo */
  41,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_de_emlrtRTEI = { 946,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ee_emlrtRTEI = { 1314,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_fe_emlrtRTEI = { 1292,/* lineNo */
  47,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ge_emlrtRTEI = { 1293,/* lineNo */
  33,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_he_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_ie_emlrtRTEI = { 1324,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_je_emlrtRTEI = { 1294,/* lineNo */
  27,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ke_emlrtRTEI = { 108,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c6_le_emlrtRTEI = { 115,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c6_me_emlrtRTEI = { 944,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ne_emlrtRTEI = { 35,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_oe_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c6_pe_emlrtRTEI = { 942,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_qe_emlrtRTEI = { 48,/* lineNo */
  27,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_re_emlrtRTEI = { 49,/* lineNo */
  25,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_se_emlrtRTEI = { 50,/* lineNo */
  28,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_te_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_ue_emlrtRTEI = { 39,/* lineNo */
  35,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ve_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_we_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_xe_emlrtRTEI = { 69,/* lineNo */
  31,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ye_emlrtRTEI = { 70,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_af_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_bf_emlrtRTEI = { 89,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_cf_emlrtRTEI = { 90,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_df_emlrtRTEI = { 11,/* lineNo */
  6,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ef_emlrtRTEI = { 11,/* lineNo */
  19,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ff_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_gf_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_hf_emlrtRTEI = { 51,/* lineNo */
  57,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_if_emlrtRTEI = { 51,/* lineNo */
  64,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_jf_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "round",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pName */
};

static emlrtRTEInfo c6_kf_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c6_lf_emlrtRTEI = { 572,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_mf_emlrtRTEI = { 482,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_nf_emlrtRTEI = { 520,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_of_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_pf_emlrtRTEI = { 144,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_qf_emlrtRTEI = { 596,/* lineNo */
  34,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_rf_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_sf_emlrtRTEI = { 267,/* lineNo */
  24,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_tf_emlrtRTEI = { 385,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_uf_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_vf_emlrtRTEI = { 274,/* lineNo */
  24,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_wf_emlrtRTEI = { 387,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_xf_emlrtRTEI = { 388,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_yf_emlrtRTEI = { 333,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_ag_emlrtRTEI = { 317,/* lineNo */
  17,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c6_bg_emlrtRTEI = { 325,/* lineNo */
  17,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtBCInfo c6_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  14,                                  /* colNo */
  "centroids",                         /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  18,                                  /* colNo */
  "centroids",                         /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  13,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  24,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  18,                                  /* colNo */
  "centers1",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  30,                                  /* colNo */
  "centers1",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_g_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "landmark",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c6_emlrtDCI = { 62, /* lineNo */
  14,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_h_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  62,                                  /* lineNo */
  31,                                  /* colNo */
  "landmark",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c6_b_emlrtDCI = { 62,/* lineNo */
  31,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  22,                                  /* colNo */
  "centers2",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  34,                                  /* colNo */
  "centers2",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  26,                                  /* colNo */
  "centers3",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  38,                                  /* colNo */
  "centers3",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  29,                                  /* colNo */
  "centers4",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  41,                                  /* colNo */
  "centers4",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2694",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  69,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2067,                                /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2069,                                /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2070,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2070,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_c_emlrtDCI = { 391,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_d_emlrtDCI = { 404,/* lineNo */
  54,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  413,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  413,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  414,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  414,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_eb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c6_cg_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtBCInfo c6_ib_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_lb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  110,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  110,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ec_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  151,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  151,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_jc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  151,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c6_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_lc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  151,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c6_mc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_nc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_oc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  84,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_sc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  107,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_tc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  111,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_vc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_wc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1049,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_xc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1050,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_yc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ad_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c6_emlrtECI = { -1, /* nDims */
  42,                                  /* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c6_dg_emlrtRTEI = { 46,/* lineNo */
  15,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtBCInfo c6_cd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_dd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ed_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fd_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  53,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c6_b_emlrtECI = { 1,/* nDims */
  1324,                                /* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtBCInfo c6_hd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1316,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_id_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_jd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1292,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_kd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  946,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ld_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1324,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_md_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1328,                                /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_nd_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  1295,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_od_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_rd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  944,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_sd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  941,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_td_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1292,                                /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ud_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  942,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_vd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1314,                                /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_wd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1314,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_xd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1293,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_yd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1294,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_e_emlrtDCI = { 48,/* lineNo */
  33,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c6_ae_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_be_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ce_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_de_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_f_emlrtDCI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_ee_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ge_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_he_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ie_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_je_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ke_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_le_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_me_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ne_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_oe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_re_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_se_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_te_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ue_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ve_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_we_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_xe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ye_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_af_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_cf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  76,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_df_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ef_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ff_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_hf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_g_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c6_h_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c6_if_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_jf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_kf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_lf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_mf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  82,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_nf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_of_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_rf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_sf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_tf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_uf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_vf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c6_rg_emlrtRSI = { 81,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_sg_emlrtRSI = { 80,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_tg_emlrtRSI = { 79,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_ug_emlrtRSI = { 52,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c6_vg_emlrtRSI = { 56,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_wg_emlrtRSI = { 40,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c6_xg_emlrtRSI = { 320,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_yg_emlrtRSI = { 124,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_ah_emlrtRSI = { 123,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_bh_emlrtRSI = { 55,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_ch_emlrtRSI = { 39,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_dh_emlrtRSI = { 49,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c6_eh_emlrtRSI = { 47,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c6_fh_emlrtRSI = { 48,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_gh_emlrtRSI = { 46,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_hh_emlrtRSI = { 45,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_ih_emlrtRSI = { 42,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_jh_emlrtRSI = { 32,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_kh_emlrtRSI = { 97,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_lh_emlrtRSI = { 94,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_mh_emlrtRSI = { 93,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_nh_emlrtRSI = { 96,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_oh_emlrtRSI = { 125,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c6_ph_emlrtRSI = { 37,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static char_T c6_cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
  'x', 's', 'i', 'z', 'e' };

static char_T c6_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
  'n', 'i', 't', 'e' };

static char_T c6_cv2[36] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
  'A', 'B', ':', 'i', 'n', 'd', '2', 's', 'u', 'b', '_', 'I', 'n', 'd', 'e', 'x',
  'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

static char_T c6_cv3[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

static char_T c6_cv4[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
  'n', 'N', 'a', 'N' };

static char_T c6_cv5[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
  'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm', 'e',
  'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

/* Function Declarations */
static void initialize_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void enable_c6_flightControlSystem(SFc6_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void c6_update_jit_animation_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void c6_do_animation_call_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const mxArray *c6_st);
static void initSimStructsc6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static real_T c6_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_x[19200], int32_T c6_col);
static real_T c6_b_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_x[160]);
static void c6_regionprops(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real_T c6_b_varargin_1[19200],
  c6_emxArray_s8812E1qfIkP21aQTfYt8i *c6_outstats);
static void c6_assertValidSizeArg(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_b_varargin_1);
static void c6_initializeStatsStruct(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_numObjs,
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2
  *c6_statsAlreadyComputed);
static real_T c6_sumMatrixColumns(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_vlen);
static real_T c6_c_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_vlen);
static void c6_check_forloop_overflow_error
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp);
static real_T c6_sumColumnB4(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T *c6_x, int32_T c6_vstart);
static real_T c6_d_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_vlen, int32_T c6_vstart);
static void c6_useConstantDim(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_varargin_2,
  int32_T c6_varargin_3, c6_emxArray_real_T *c6_varargout_1);
static boolean_T c6_allinrange(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_int32_T *c6_x, int32_T c6_hi);
static void c6_ComputeCentroid(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49
  *c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed,
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_b_stats, c6_sHtk0WM4OMtyqkehwQYcq2
  *c6_b_statsAlreadyComputed);
static void c6_ind2sub_indexClass(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_ndx,
  c6_emxArray_int32_T *c6_varargout_1, c6_emxArray_int32_T *c6_varargout_2);
static real_T c6_e_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_col, int32_T c6_vlen);
static real_T c6_b_sumColumnB4(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T *c6_x, int32_T c6_col, int32_T c6_vstart);
static real_T c6_f_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_col, int32_T c6_vlen, int32_T c6_vstart);
static void c6_imfilter(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_b_varargin_1[19200], real32_T c6_b[19200]);
static void c6_b_imfilter(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_b_varargin_1[19200], real32_T c6_b[19200]);
static void c6_padImage(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_a_tmp[19200], real32_T c6_d_a[19764]);
static void c6_c_imfilter(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_b_varargin_1[19200], real32_T c6_b[19200]);
static real32_T c6_maximum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  real32_T c6_x[19200]);
static void c6_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers);
static void c6_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200]);
static real_T c6_graythresh(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real32_T c6_I[19200]);
static void c6_eml_find(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_x[19200], c6_emxArray_int32_T *c6_i,
  c6_emxArray_int32_T *c6_j);
static void c6_indexShapeCheck(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, int32_T c6_matrixSize, int32_T
  c6_indexSize[2]);
static boolean_T c6_b_allinrange(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T *c6_x, int32_T c6_hi);
static void c6_eml_sub2ind(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_b_varargin_1,
  c6_emxArray_real_T *c6_varargin_2, c6_emxArray_int32_T *c6_idx);
static void c6_eml_float_colon(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_d_a, real_T c6_b,
  c6_emxArray_real_T *c6_y);
static boolean_T c6_any(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, creal_T c6_x[19200]);
static void c6_chcenters(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, creal_T c6_b_varargin_1[19200], c6_emxArray_real_T
  *c6_centers, c6_emxArray_real_T *c6_metric);
static void c6_validateattributes(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_d_a[19200]);
static void c6_b_regionprops(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  real_T c6_varargin_2[19200], c6_emxArray_sOA5t73y81YtFHGIDxk0fK *c6_outstats);
static void c6_bwconncomp(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_s_vX9LV7M75v5ZNol5H5URkE *c6_CC);
static real_T c6_g_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_x, int32_T
  c6_vlen);
static real_T c6_c_sumColumnB4(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_int32_T *c6_x, int32_T c6_vstart);
static real_T c6_h_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_x, int32_T
  c6_vlen, int32_T c6_vstart);
static void c6_b_useConstantDim(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_varargin_2,
  int32_T c6_varargin_3, c6_emxArray_int32_T *c6_varargout_1);
static real_T c6_sum(SFc6_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x);
static void c6_round(SFc6_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x,
                     c6_emxArray_real_T *c6_b_x);
static void c6_sort(SFc6_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c6_sp, c6_emxArray_real_T *c6_x,
                    c6_emxArray_real_T *c6_b_x, c6_emxArray_int32_T *c6_idx);
static void c6_merge_pow2_block(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
  c6_emxArray_real_T *c6_x, int32_T c6_offset, c6_emxArray_int32_T *c6_b_idx,
  c6_emxArray_real_T *c6_b_x);
static void c6_merge_block(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx, c6_emxArray_real_T *c6_x,
  int32_T c6_offset, int32_T c6_n, int32_T c6_preSortLevel, c6_emxArray_int32_T *
  c6_iwork, c6_emxArray_real_T *c6_xwork, c6_emxArray_int32_T *c6_b_idx,
  c6_emxArray_real_T *c6_b_x, c6_emxArray_int32_T *c6_b_iwork,
  c6_emxArray_real_T *c6_b_xwork);
static void c6_merge(SFc6_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
                     c6_emxArray_real_T *c6_x, int32_T c6_offset, int32_T c6_np,
                     int32_T c6_nq, c6_emxArray_int32_T *c6_iwork,
                     c6_emxArray_real_T *c6_xwork, c6_emxArray_int32_T *c6_b_idx,
                     c6_emxArray_real_T *c6_b_x, c6_emxArray_int32_T *c6_b_iwork,
                     c6_emxArray_real_T *c6_b_xwork);
static void c6_b_eml_find(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_x, c6_emxArray_int32_T
  *c6_i);
static void c6_b_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers);
static void c6_b_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200]);
static void c6_c_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers);
static void c6_c_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200]);
static void c6_d_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers);
static void c6_d_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200]);
static void c6_e_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers);
static void c6_e_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200]);
static real_T c6_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_area_l, const char_T *c6_identifier);
static real_T c6_b_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_c_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_blkroi, const char_T *c6_identifier,
  real_T c6_y[19200]);
static void c6_d_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  real_T c6_y[19200]);
static void c6_e_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_center, const char_T *c6_identifier,
  real_T c6_y[2]);
static void c6_f_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  real_T c6_y[2]);
static uint8_T c6_g_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_flightControlSystem, const
  char_T *c6_identifier);
static uint8_T c6_h_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_slStringInitializeDynamicBuffers
  (SFc6_flightControlSystemInstanceStruct *chartInstance);
static void c6_chart_data_browse_helper(SFc6_flightControlSystemInstanceStruct
  *chartInstance, int32_T c6_ssIdNumber, const mxArray **c6_mxData, uint8_T
  *c6_isValueTooBig);
static void c6_b_ComputeCentroid(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49
  *c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 *c6_statsAlreadyComputed);
static void c6_b_round(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x);
static void c6_b_sort(SFc6_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x,
                      c6_emxArray_int32_T *c6_idx);
static void c6_b_merge_pow2_block(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
  c6_emxArray_real_T *c6_x, int32_T c6_offset);
static void c6_b_merge_block(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
  c6_emxArray_real_T *c6_x, int32_T c6_offset, int32_T c6_n, int32_T
  c6_preSortLevel, c6_emxArray_int32_T *c6_iwork, c6_emxArray_real_T *c6_xwork);
static void c6_b_merge(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx, c6_emxArray_real_T *c6_x,
  int32_T c6_offset, int32_T c6_np, int32_T c6_nq, c6_emxArray_int32_T *c6_iwork,
  c6_emxArray_real_T *c6_xwork);
static real_T c6_binary_expand_op(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, emlrtRSInfo c6_in1,
  c6_emxArray_real_T *c6_in2, c6_emxArray_real_T *c6_in3);
static void c6_emxInit_s8812E1qfIkP21aQTfYt8iB
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s8812E1qfIkP21aQTfYt8i **c6_pEmxArray, int32_T
   c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFree_s8812E1qfIkP21aQTfYt8iB
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_s8812E1qfIkP21aQTfYt8i **c6_pEmxArray);
static void c6_emxFree_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T **c6_pEmxArray);
static void c6_emxEnsureCapacity_boolean_T
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_boolean_T *c6_emxArray, int32_T c6_oldNumel, const
   emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_s8812E1qfIkP2
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s8812E1qfIkP21aQTfYt8i *c6_emxArray, int32_T c6_oldNumel,
   const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFreeStruct_s_R6Og1x0kmqQXSF9
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_pStruct);
static void c6_emxTrim_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray, int32_T c6_fromIndex,
   int32_T c6_toIndex);
static void c6_emxInitStruct_s_R6Og1x0kmqQXSF9
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_pStruct, const emlrtRTEInfo
   *c6_srcLocation);
static void c6_emxInit_real_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxExpand_s_R6Og1x0kmqQXSF9Pwa4
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray, int32_T c6_fromIndex,
   int32_T c6_toIndex, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_s_R6Og1x0kmqQ
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray, int32_T c6_oldNumel,
   const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopyStruct_s_R6Og1x0kmqQXSF9
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_dst, const
   c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopyMatrix_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_dst[2], const real_T c6_src[2]);
static void c6_emxCopyMatrix_real_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_dst[4], const real_T c6_src[4]);
static void c6_emxCopy_boolean_T_0x0(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_boolean_T_0x0 *c6_dst, const
  c6_emxArray_boolean_T_0x0 *c6_src);
static void c6_emxCopyMatrix_real_T2(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_dst[16], const real_T c6_src[16]);
static void c6_emxCopy_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst,
  c6_emxArray_real_T * const *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopy_real_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst,
  c6_emxArray_real_T * const *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_real_T1(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopy_real_T_1x0(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T_1x0 *c6_dst, const c6_emxArray_real_T_1x0
  *c6_src);
static void c6_emxEnsureCapacity_int32_T(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c6_pEmxArray, int32_T
   c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_boolean_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_int32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFree_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c6_pEmxArray);
static void c6_emxFree_boolean_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_boolean_T **c6_pEmxArray);
static void c6_emxFree_int32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_int32_T **c6_pEmxArray);
static void c6_emxEnsureCapacity_boolean_T1
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_boolean_T *c6_emxArray, int32_T c6_oldNumel, const
   emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_boolean_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_real32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_creal_T(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_creal_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_real32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real32_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_creal_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_creal_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFree_real32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real32_T **c6_pEmxArray);
static void c6_emxFree_creal_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_creal_T **c6_pEmxArray);
static void c6_emxInit_sOA5t73y81YtFHGIDxk0fKF
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_sOA5t73y81YtFHGIDxk0fK **c6_pEmxArray, int32_T
   c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_int32_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFree_sOA5t73y81YtFHGIDxk0fKF
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_sOA5t73y81YtFHGIDxk0fK **c6_pEmxArray);
static void c6_emxEnsureCapacity_sOA5t73y81YtF
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_sOA5t73y81YtFHGIDxk0fK *c6_emxArray, int32_T c6_oldNumel,
   const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInitStruct_s_vX9LV7M75v5ZNol
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_s_vX9LV7M75v5ZNol5H5URkE *c6_pStruct, const emlrtRTEInfo
   *c6_srcLocation);
static void c6_emxInitMatrix_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_6 c6_pMatrix[2], const
  emlrtRTEInfo *c6_srcLocation);
static void c6_emxInitStruct_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_6 *c6_pStruct, const
  emlrtRTEInfo *c6_srcLocation);
static void c6_emxFreeStruct_s_vX9LV7M75v5ZNol
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_s_vX9LV7M75v5ZNol5H5URkE *c6_pStruct);
static void c6_emxFreeMatrix_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, c6_cell_wrap_6 c6_pMatrix[2]);
static void c6_emxFreeStruct_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, c6_cell_wrap_6 *c6_pStruct);
static void c6_emxEnsureCapacity_int32_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static int32_T c6_div_nzp_s32(SFc6_flightControlSystemInstanceStruct
  *chartInstance, int32_T c6_numerator, int32_T c6_denominator, int32_T
  c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc, int32_T c6_offset_src_loc,
  int32_T c6_length_src_loc);
static int32_T c6__s32_s64_(SFc6_flightControlSystemInstanceStruct
  *chartInstance, int64_T c6_b, int32_T c6_EMLOvCount_src_loc, uint32_T
  c6_ssid_src_loc, int32_T c6_offset_src_loc, int32_T c6_length_src_loc);
static void init_dsm_address_info(SFc6_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc6_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c6_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c6_st.tls = chartInstance->c6_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c6_st, (const char_T *)
    "EMLRT:runTime:MexFunctionNeedsLicense", (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_is_active_c6_flightControlSystem = 0U;
}

static void initialize_params_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c6_decisionTxtEndIdx = 0U;
  static const uint32_T c6_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c6_chart_data_browse_helper);
  chartInstance->c6_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c6_RuntimeVar,
    &chartInstance->c6_IsDebuggerActive,
    &chartInstance->c6_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c6_mlFcnLineNumber, &chartInstance->c6_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c6_covrtInstance, 1U, 0U, 1U,
    69U);
  covrtChartInitFcn(chartInstance->c6_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c6_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c6_decisionTxtStartIdx, &c6_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c6_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c6_covrtInstance, "", 4U, 0U, 1U, 0U, 11U, 0U,
                  2U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1700);
  covrtEmlSaturationInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U, 1573,
    -1, 1589);
  covrtEmlSaturationInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 1U, 1590,
    -1, 1606);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U, 287, 311, 334,
                    432, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 1U, 334, 363, 400,
                    432, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 2U, 479, 503, 530,
                    636, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 3U, 530, 559, 600,
                    636, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 4U, 959, 981, 1470,
                    1514, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 5U, 986, 1009, 1413,
                    1468, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 6U, 1018, 1041,
                    1344, 1407, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 7U, 1054, 1077,
                    1263, 1334, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 8U, 1094, 1117,
                    1172, 1250, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 9U, 1542, 1559, -1,
                    1614, false);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 10U, 1674, 1683, -1,
                    1699, false);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U, 290,
    311, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 1U, 341,
    363, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 2U, 482,
    503, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 3U, 537,
    559, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 4U, 962,
    981, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 5U, 989,
    1009, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 6U, 1021,
    1041, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 7U, 1057,
    1077, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 8U, 1097,
    1117, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 9U, 1545,
    1559, -1, 1U);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 10U, 1677,
    1683, -1, 4U);
}

static void mdl_cleanup_runtime_resources_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c6_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c6_covrtInstance);
}

static void enable_c6_flightControlSystem(SFc6_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  c6_emxArray_real_T *c6_centers;
  c6_emxArray_real_T *c6_centers1;
  c6_emxArray_real_T *c6_centers2;
  c6_emxArray_real_T *c6_centers3;
  c6_emxArray_real_T *c6_centers4;
  c6_emxArray_s8812E1qfIkP21aQTfYt8i *c6_centroids;
  emlrtStack c6_b_st;
  emlrtStack c6_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c6_y[160];
  real_T c6_b_center[2];
  real_T c6_b_centroid[2];
  real_T c6_b_centroid_blk[2];
  real_T c6_b_area_l;
  real_T c6_b_area_r;
  real_T c6_b_land;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d3;
  int32_T c6_b_col;
  int32_T c6_c_col;
  int32_T c6_col;
  int32_T c6_d_col;
  int32_T c6_e_col;
  int32_T c6_f_col;
  int32_T c6_g_col;
  int32_T c6_h_col;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  uint8_T c6_u;
  uint8_T c6_u1;
  boolean_T c6_b_bw[19200];
  boolean_T c6_c_bw[19200];
  boolean_T c6_d_bw[19200];
  boolean_T c6_e_bw[19200];
  boolean_T c6_f_bw[19200];
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b5;
  boolean_T c6_b6;
  boolean_T c6_b7;
  boolean_T c6_b8;
  boolean_T c6_b9;
  boolean_T c6_b_covSaturation;
  boolean_T c6_covSaturation;
  c6_st.tls = chartInstance->c6_fEmlrtCtx;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  chartInstance->c6_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 4U, (real_T)
                      (*chartInstance->c6_blk_r)[c6_i]);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 3U, (real_T)
                      (*chartInstance->c6_blk_l)[c6_i1]);
  }

  for (c6_i2 = 0; c6_i2 < 19200; c6_i2++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 2U,
                      (*chartInstance->c6_b_roi_r)[c6_i2]);
  }

  for (c6_i3 = 0; c6_i3 < 19200; c6_i3++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 1U,
                      (*chartInstance->c6_b_roi_l)[c6_i3]);
  }

  for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 0U, (real_T)
                      (*chartInstance->c6_bw)[c6_i4]);
  }

  chartInstance->c6_sfEvent = CALL_EVENT;
  for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
    c6_b_bw[c6_i5] = (*chartInstance->c6_bw)[c6_i5];
  }

  for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
    chartInstance->c6_roi_l[c6_i6] = (*chartInstance->c6_b_roi_l)[c6_i6];
  }

  for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
    chartInstance->c6_roi_r[c6_i7] = (*chartInstance->c6_b_roi_r)[c6_i7];
  }

  covrtEmlFcnEval(chartInstance->c6_covrtInstance, 4U, 0, 0);
  for (c6_i8 = 0; c6_i8 < 19200; c6_i8++) {
    chartInstance->c6_bw_l[c6_i8] = chartInstance->c6_roi_l[c6_i8] * (real_T)
      c6_b_bw[c6_i8];
  }

  for (c6_i9 = 0; c6_i9 < 19200; c6_i9++) {
    chartInstance->c6_bw_r[c6_i9] = chartInstance->c6_roi_r[c6_i9] * (real_T)
      c6_b_bw[c6_i9];
  }

  for (c6_col = 0; c6_col < 160; c6_col++) {
    c6_b_col = c6_col;
    c6_y[c6_b_col] = c6_sumColumnB(chartInstance, chartInstance->c6_bw_l,
      c6_b_col + 1);
  }

  c6_b_area_l = c6_b_sumColumnB(chartInstance, c6_y);
  for (c6_c_col = 0; c6_c_col < 160; c6_c_col++) {
    c6_d_col = c6_c_col;
    c6_y[c6_d_col] = c6_sumColumnB(chartInstance, chartInstance->c6_bw_r,
      c6_d_col + 1);
  }

  c6_b_area_r = c6_b_sumColumnB(chartInstance, c6_y);
  for (c6_i10 = 0; c6_i10 < 19200; c6_i10++) {
    chartInstance->c6_bw_l[c6_i10] += chartInstance->c6_bw_r[c6_i10];
  }

  for (c6_i11 = 0; c6_i11 < 19200; c6_i11++) {
    chartInstance->c6_bw_r[c6_i11] = (real_T)(*chartInstance->c6_blk_l)[c6_i11] *
      (real_T)(*chartInstance->c6_blk_r)[c6_i11];
  }

  for (c6_i12 = 0; c6_i12 < 19200; c6_i12++) {
    chartInstance->c6_bw_r[c6_i12] *= (real_T)c6_b_bw[c6_i12];
  }

  c6_emxInit_s8812E1qfIkP21aQTfYt8iB(chartInstance, &c6_st, &c6_centroids, 1,
    &c6_emlrtRTEI);
  c6_b_st.site = &c6_emlrtRSI;
  for (c6_i13 = 0; c6_i13 < 19200; c6_i13++) {
    chartInstance->c6_b_bw_l[c6_i13] = chartInstance->c6_bw_l[c6_i13];
  }

  c6_regionprops(chartInstance, &c6_b_st, chartInstance->c6_b_bw_l, c6_centroids);
  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        4U, 0U, 0U, (real_T)(c6_centroids->size[0] == 0), 1.0, -1, 0U,
        c6_centroids->size[0] == 0))) {
    for (c6_i14 = 0; c6_i14 < 2; c6_i14++) {
      c6_b_centroid[c6_i14] = 81.0 + -21.0 * (real_T)c6_i14;
    }
  } else {
    covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 1,
                   covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
      4U, 0U, 1U, 1.0, 1.0, -1, 0U, 1));
    for (c6_i15 = 0; c6_i15 < 2; c6_i15++) {
      c6_i16 = c6_centroids->size[0];
      c6_i17 = 1;
      if ((c6_i17 < 1) || (c6_i17 > c6_i16)) {
        emlrtDynamicBoundsCheckR2012b(c6_i17, 1, c6_i16, &c6_emlrtBCI, &c6_st);
      }

      c6_b_centroid[c6_i15] = c6_centroids->data[c6_i17 - 1].Centroid[c6_i15];
    }
  }

  c6_b_st.site = &c6_b_emlrtRSI;
  for (c6_i18 = 0; c6_i18 < 19200; c6_i18++) {
    chartInstance->c6_b_bw_r[c6_i18] = chartInstance->c6_bw_r[c6_i18];
  }

  c6_regionprops(chartInstance, &c6_b_st, chartInstance->c6_b_bw_r, c6_centroids);
  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 2,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        4U, 0U, 2U, (real_T)(c6_centroids->size[0] == 0), 1.0, -1, 0U,
        c6_centroids->size[0] == 0))) {
    for (c6_i19 = 0; c6_i19 < 2; c6_i19++) {
      c6_b_centroid_blk[c6_i19] = 81.0 + -21.0 * (real_T)c6_i19;
    }
  } else {
    covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 3,
                   covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
      4U, 0U, 3U, 1.0, 1.0, -1, 0U, 1));
    for (c6_i20 = 0; c6_i20 < 2; c6_i20++) {
      c6_i21 = c6_centroids->size[0];
      c6_i22 = 1;
      if ((c6_i22 < 1) || (c6_i22 > c6_i21)) {
        emlrtDynamicBoundsCheckR2012b(c6_i22, 1, c6_i21, &c6_b_emlrtBCI, &c6_st);
      }

      c6_b_centroid_blk[c6_i20] = c6_centroids->data[c6_i22 - 1].Centroid[c6_i20];
    }
  }

  c6_emxFree_s8812E1qfIkP21aQTfYt8iB(chartInstance, &c6_centroids);
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_centers, 2, &c6_b_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_centers1, 2, &c6_c_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_centers2, 2, &c6_d_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_centers3, 2, &c6_e_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_centers4, 2, &c6_f_emlrtRTEI);
  c6_b_st.site = &c6_c_emlrtRSI;
  for (c6_i23 = 0; c6_i23 < 19200; c6_i23++) {
    c6_c_bw[c6_i23] = c6_b_bw[c6_i23];
  }

  c6_imfindcircles(chartInstance, &c6_b_st, c6_c_bw, c6_centers);
  c6_b_st.site = &c6_d_emlrtRSI;
  for (c6_i24 = 0; c6_i24 < 19200; c6_i24++) {
    c6_d_bw[c6_i24] = c6_b_bw[c6_i24];
  }

  c6_b_imfindcircles(chartInstance, &c6_b_st, c6_d_bw, c6_centers1);
  c6_b_st.site = &c6_e_emlrtRSI;
  for (c6_i25 = 0; c6_i25 < 19200; c6_i25++) {
    c6_e_bw[c6_i25] = c6_b_bw[c6_i25];
  }

  c6_c_imfindcircles(chartInstance, &c6_b_st, c6_e_bw, c6_centers2);
  c6_b_st.site = &c6_f_emlrtRSI;
  for (c6_i26 = 0; c6_i26 < 19200; c6_i26++) {
    c6_f_bw[c6_i26] = c6_b_bw[c6_i26];
  }

  c6_d_imfindcircles(chartInstance, &c6_b_st, c6_f_bw, c6_centers3);
  c6_b_st.site = &c6_g_emlrtRSI;
  c6_e_imfindcircles(chartInstance, &c6_b_st, c6_b_bw, c6_centers4);
  c6_b = (c6_centers->size[0] == 0);
  c6_b1 = (c6_centers->size[1] == 0);
  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 4,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        4U, 0U, 4U, (real_T)(c6_b || c6_b1), 1.0, -1, 0U, c6_b || c6_b1))) {
    c6_b2 = (c6_centers1->size[0] == 0);
    c6_b3 = (c6_centers1->size[1] == 0);
    if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 5,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c6_covrtInstance, 4U, 0U, 5U, (real_T)
                        (c6_b2 || c6_b3), 1.0, -1, 0U, c6_b2 || c6_b3))) {
      c6_b4 = (c6_centers2->size[0] == 0);
      c6_b5 = (c6_centers2->size[1] == 0);
      if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 6,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c6_covrtInstance, 4U, 0U, 6U, (real_T)
                          (c6_b4 || c6_b5), 1.0, -1, 0U, c6_b4 || c6_b5))) {
        c6_b6 = (c6_centers3->size[0] == 0);
        c6_b7 = (c6_centers3->size[1] == 0);
        if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 7,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c6_covrtInstance, 4U, 0U, 7U, (real_T)
                            (c6_b6 || c6_b7), 1.0, -1, 0U, c6_b6 || c6_b7))) {
          c6_b8 = (c6_centers4->size[0] == 0);
          c6_b9 = (c6_centers4->size[1] == 0);
          if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 8,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c6_covrtInstance, 4U, 0U, 8U,
                              (real_T)(c6_b8 || c6_b9), 1.0, -1, 0U, c6_b8 ||
                              c6_b9))) {
            for (c6_i42 = 0; c6_i42 < 2; c6_i42++) {
              c6_b_center[c6_i42] = 200.0;
            }
          } else {
            c6_i41 = c6__s32_s64_(chartInstance, (int64_T)c6_centers4->size[0] *
                                  (int64_T)c6_centers4->size[1], 0, 1U, 1205, 8);
            c6_i43 = 1;
            if ((c6_i43 < 1) || (c6_i43 > c6_i41)) {
              emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i41, &c6_m_emlrtBCI,
                &c6_st);
            }

            c6_b_center[0] = c6_centers4->data[c6_i43 - 1];
            c6_i47 = c6__s32_s64_(chartInstance, (int64_T)c6_centers4->size[0] *
                                  (int64_T)c6_centers4->size[1], 0, 1U, 1217, 8);
            c6_i48 = 2;
            if ((c6_i48 < 1) || (c6_i48 > c6_i47)) {
              emlrtDynamicBoundsCheckR2012b(c6_i48, 1, c6_i47, &c6_n_emlrtBCI,
                &c6_st);
            }

            c6_b_center[1] = c6_centers4->data[c6_i48 - 1];
          }
        } else {
          c6_i37 = c6__s32_s64_(chartInstance, (int64_T)c6_centers3->size[0] *
                                (int64_T)c6_centers3->size[1], 0, 1U, 1293, 8);
          c6_i38 = 1;
          if ((c6_i38 < 1) || (c6_i38 > c6_i37)) {
            emlrtDynamicBoundsCheckR2012b(c6_i38, 1, c6_i37, &c6_k_emlrtBCI,
              &c6_st);
          }

          c6_b_center[0] = c6_centers3->data[c6_i38 - 1];
          c6_i44 = c6__s32_s64_(chartInstance, (int64_T)c6_centers3->size[0] *
                                (int64_T)c6_centers3->size[1], 0, 1U, 1305, 8);
          c6_i45 = 2;
          if ((c6_i45 < 1) || (c6_i45 > c6_i44)) {
            emlrtDynamicBoundsCheckR2012b(c6_i45, 1, c6_i44, &c6_l_emlrtBCI,
              &c6_st);
          }

          c6_b_center[1] = c6_centers3->data[c6_i45 - 1];
        }
      } else {
        c6_i33 = c6__s32_s64_(chartInstance, (int64_T)c6_centers2->size[0] *
                              (int64_T)c6_centers2->size[1], 0, 1U, 1370, 8);
        c6_i34 = 1;
        if ((c6_i34 < 1) || (c6_i34 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i34, 1, c6_i33, &c6_i_emlrtBCI,
            &c6_st);
        }

        c6_b_center[0] = c6_centers2->data[c6_i34 - 1];
        c6_i39 = c6__s32_s64_(chartInstance, (int64_T)c6_centers2->size[0] *
                              (int64_T)c6_centers2->size[1], 0, 1U, 1382, 8);
        c6_i40 = 2;
        if ((c6_i40 < 1) || (c6_i40 > c6_i39)) {
          emlrtDynamicBoundsCheckR2012b(c6_i40, 1, c6_i39, &c6_j_emlrtBCI,
            &c6_st);
        }

        c6_b_center[1] = c6_centers2->data[c6_i40 - 1];
      }
    } else {
      c6_i29 = c6__s32_s64_(chartInstance, (int64_T)c6_centers1->size[0] *
                            (int64_T)c6_centers1->size[1], 0, 1U, 1435, 8);
      c6_i30 = 1;
      if ((c6_i30 < 1) || (c6_i30 > c6_i29)) {
        emlrtDynamicBoundsCheckR2012b(c6_i30, 1, c6_i29, &c6_e_emlrtBCI, &c6_st);
      }

      c6_b_center[0] = c6_centers1->data[c6_i30 - 1];
      c6_i35 = c6__s32_s64_(chartInstance, (int64_T)c6_centers1->size[0] *
                            (int64_T)c6_centers1->size[1], 0, 1U, 1447, 8);
      c6_i36 = 2;
      if ((c6_i36 < 1) || (c6_i36 > c6_i35)) {
        emlrtDynamicBoundsCheckR2012b(c6_i36, 1, c6_i35, &c6_f_emlrtBCI, &c6_st);
      }

      c6_b_center[1] = c6_centers1->data[c6_i36 - 1];
    }
  } else {
    c6_i27 = c6__s32_s64_(chartInstance, (int64_T)c6_centers->size[0] * (int64_T)
                          c6_centers->size[1], 0, 1U, 1487, 7);
    c6_i28 = 1;
    if ((c6_i28 < 1) || (c6_i28 > c6_i27)) {
      emlrtDynamicBoundsCheckR2012b(c6_i28, 1, c6_i27, &c6_c_emlrtBCI, &c6_st);
    }

    c6_b_center[0] = c6_centers->data[c6_i28 - 1];
    c6_i31 = c6__s32_s64_(chartInstance, (int64_T)c6_centers->size[0] * (int64_T)
                          c6_centers->size[1], 0, 1U, 1498, 7);
    c6_i32 = 2;
    if ((c6_i32 < 1) || (c6_i32 > c6_i31)) {
      emlrtDynamicBoundsCheckR2012b(c6_i32, 1, c6_i31, &c6_d_emlrtBCI, &c6_st);
    }

    c6_b_center[1] = c6_centers->data[c6_i32 - 1];
  }

  c6_emxFree_real_T(chartInstance, &c6_centers4);
  c6_emxFree_real_T(chartInstance, &c6_centers3);
  c6_emxFree_real_T(chartInstance, &c6_centers2);
  c6_emxFree_real_T(chartInstance, &c6_centers1);
  c6_emxFree_real_T(chartInstance, &c6_centers);
  for (c6_i46 = 0; c6_i46 < 19200; c6_i46++) {
    chartInstance->c6_landmark[c6_i46] = 0.0;
  }

  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 9,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        4U, 0U, 9U, c6_b_center[0], 200.0, -1, 1U, c6_b_center[0] != 200.0))) {
    c6_d = muDoubleScalarRound(c6_b_center[1]);
    c6_covSaturation = false;
    if (c6_d < 256.0) {
      if (c6_d >= 0.0) {
        c6_u = (uint8_T)c6_d;
      } else {
        c6_covSaturation = true;
        c6_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1573, 16);
      }
    } else if (c6_d >= 256.0) {
      c6_covSaturation = true;
      c6_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1573, 16);
    } else {
      c6_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c6_covrtInstance, 4, 0, 0, 0,
      c6_covSaturation);
    c6_d1 = (real_T)c6_u;
    if (c6_d1 != (real_T)(int32_T)muDoubleScalarFloor(c6_d1)) {
      emlrtIntegerCheckR2012b(c6_d1, &c6_emlrtDCI, &c6_st);
    }

    c6_i51 = (uint8_T)c6_d1;
    if ((c6_i51 < 1) || (c6_i51 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c6_i51, 1, 120, &c6_g_emlrtBCI, &c6_st);
    }

    c6_d2 = muDoubleScalarRound(c6_b_center[0]);
    c6_b_covSaturation = false;
    if (c6_d2 < 256.0) {
      if (c6_d2 >= 0.0) {
        c6_u1 = (uint8_T)c6_d2;
      } else {
        c6_b_covSaturation = true;
        c6_u1 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1590, 16);
      }
    } else if (c6_d2 >= 256.0) {
      c6_b_covSaturation = true;
      c6_u1 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1590, 16);
    } else {
      c6_u1 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c6_covrtInstance, 4, 0, 1, 0,
      c6_b_covSaturation);
    c6_d3 = (real_T)c6_u1;
    if (c6_d3 != (real_T)(int32_T)muDoubleScalarFloor(c6_d3)) {
      emlrtIntegerCheckR2012b(c6_d3, &c6_b_emlrtDCI, &c6_st);
    }

    c6_i57 = (uint8_T)c6_d3;
    if ((c6_i57 < 1) || (c6_i57 > 160)) {
      emlrtDynamicBoundsCheckR2012b(c6_i57, 1, 160, &c6_h_emlrtBCI, &c6_st);
    }

    chartInstance->c6_landmark[((uint8_T)c6_i51 + 120 * ((uint8_T)c6_i57 - 1)) -
      1] = 1.0;
  }

  for (c6_i49 = 0; c6_i49 < 19200; c6_i49++) {
    chartInstance->c6_roi_l[c6_i49] *= chartInstance->c6_landmark[c6_i49];
  }

  for (c6_e_col = 0; c6_e_col < 160; c6_e_col++) {
    c6_f_col = c6_e_col;
    c6_y[c6_f_col] = c6_sumColumnB(chartInstance, chartInstance->c6_roi_l,
      c6_f_col + 1);
  }

  c6_b_y = c6_b_sumColumnB(chartInstance, c6_y);
  for (c6_i50 = 0; c6_i50 < 19200; c6_i50++) {
    chartInstance->c6_landmark[c6_i50] *= chartInstance->c6_roi_r[c6_i50];
  }

  for (c6_g_col = 0; c6_g_col < 160; c6_g_col++) {
    c6_h_col = c6_g_col;
    c6_y[c6_h_col] = c6_sumColumnB(chartInstance, chartInstance->c6_landmark,
      c6_h_col + 1);
  }

  c6_c_y = c6_b_sumColumnB(chartInstance, c6_y);
  c6_b_land = c6_b_y + c6_c_y;
  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 10,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        4U, 0U, 10U, c6_b_land, 0.0, -1, 4U, c6_b_land > 0.0))) {
    c6_b_land = 1.0;
  }

  for (c6_i52 = 0; c6_i52 < 2; c6_i52++) {
    (*chartInstance->c6_center)[c6_i52] = c6_b_center[c6_i52];
  }

  for (c6_i53 = 0; c6_i53 < 19200; c6_i53++) {
    (*chartInstance->c6_roi)[c6_i53] = chartInstance->c6_bw_l[c6_i53];
  }

  for (c6_i54 = 0; c6_i54 < 19200; c6_i54++) {
    (*chartInstance->c6_blkroi)[c6_i54] = chartInstance->c6_bw_r[c6_i54];
  }

  *chartInstance->c6_area_l = c6_b_area_l;
  *chartInstance->c6_area_r = c6_b_area_r;
  for (c6_i55 = 0; c6_i55 < 2; c6_i55++) {
    (*chartInstance->c6_centroid)[c6_i55] = c6_b_centroid[c6_i55];
  }

  for (c6_i56 = 0; c6_i56 < 2; c6_i56++) {
    (*chartInstance->c6_centroid_blk)[c6_i56] = c6_b_centroid_blk[c6_i56];
  }

  *chartInstance->c6_land = c6_b_land;
  c6_do_animation_call_c6_flightControlSystem(chartInstance);
  for (c6_i58 = 0; c6_i58 < 2; c6_i58++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 5U,
                      (*chartInstance->c6_center)[c6_i58]);
  }

  for (c6_i59 = 0; c6_i59 < 19200; c6_i59++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 6U,
                      (*chartInstance->c6_roi)[c6_i59]);
  }

  for (c6_i60 = 0; c6_i60 < 19200; c6_i60++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 7U,
                      (*chartInstance->c6_blkroi)[c6_i60]);
  }

  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 8U,
                    *chartInstance->c6_area_l);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 9U,
                    *chartInstance->c6_area_r);
  for (c6_i61 = 0; c6_i61 < 2; c6_i61++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 10U,
                      (*chartInstance->c6_centroid)[c6_i61]);
  }

  for (c6_i62 = 0; c6_i62 < 2; c6_i62++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 11U,
                      (*chartInstance->c6_centroid_blk)[c6_i62]);
  }

  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 12U,
                    *chartInstance->c6_land);
}

static void ext_mode_exec_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_update_jit_animation_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_do_animation_call_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_g_y = NULL;
  const mxArray *c6_h_y = NULL;
  const mxArray *c6_i_y = NULL;
  const mxArray *c6_j_y = NULL;
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(9, 1), false);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", chartInstance->c6_area_l, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", chartInstance->c6_area_r, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", *chartInstance->c6_blkroi, 0, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", *chartInstance->c6_center, 0, 0U, 1U,
    0U, 2, 1, 2), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", *chartInstance->c6_centroid, 0, 0U,
    1U, 0U, 2, 1, 2), false);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", *chartInstance->c6_centroid_blk, 0,
    0U, 1U, 0U, 2, 1, 2), false);
  sf_mex_setcell(c6_y, 5, c6_g_y);
  c6_h_y = NULL;
  sf_mex_assign(&c6_h_y, sf_mex_create("y", chartInstance->c6_land, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c6_y, 6, c6_h_y);
  c6_i_y = NULL;
  sf_mex_assign(&c6_i_y, sf_mex_create("y", *chartInstance->c6_roi, 0, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c6_y, 7, c6_i_y);
  c6_j_y = NULL;
  sf_mex_assign(&c6_j_y, sf_mex_create("y",
    &chartInstance->c6_is_active_c6_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c6_y, 8, c6_j_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  real_T c6_dv1[2];
  real_T c6_dv2[2];
  real_T c6_dv3[2];
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  chartInstance->c6_doneDoubleBufferReInit = true;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_area_l = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "area_l");
  *chartInstance->c6_area_r = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 1)), "area_r");
  c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 2)),
                        "blkroi", chartInstance->c6_dv);
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    (*chartInstance->c6_blkroi)[c6_i] = chartInstance->c6_dv[c6_i];
  }

  c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 3)),
                        "center", c6_dv1);
  for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
    (*chartInstance->c6_center)[c6_i1] = c6_dv1[c6_i1];
  }

  c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 4)),
                        "centroid", c6_dv2);
  for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
    (*chartInstance->c6_centroid)[c6_i2] = c6_dv2[c6_i2];
  }

  c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 5)),
                        "centroid_blk", c6_dv3);
  for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
    (*chartInstance->c6_centroid_blk)[c6_i3] = c6_dv3[c6_i3];
  }

  *chartInstance->c6_land = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 6)), "land");
  c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 7)),
                        "roi", chartInstance->c6_dv4);
  for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
    (*chartInstance->c6_roi)[c6_i4] = chartInstance->c6_dv4[c6_i4];
  }

  chartInstance->c6_is_active_c6_flightControlSystem = c6_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 8)),
     "is_active_c6_flightControlSystem");
  sf_mex_destroy(&c6_u);
  sf_mex_destroy(&c6_st);
}

static void initSimStructsc6_flightControlSystem
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c6_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static real_T c6_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_x[19200], int32_T c6_col)
{
  real_T c6_y;
  int32_T c6_b_col;
  int32_T c6_b_k;
  int32_T c6_i0;
  int32_T c6_k;
  (void)chartInstance;
  c6_b_col = c6_col - 1;
  c6_i0 = c6_b_col * 120;
  c6_y = c6_x[c6_i0];
  for (c6_k = 0; c6_k < 119; c6_k++) {
    c6_b_k = c6_k;
    c6_y += c6_x[(c6_i0 + c6_b_k) + 1];
  }

  return c6_y;
}

static real_T c6_b_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_x[160])
{
  real_T c6_y;
  int32_T c6_b_k;
  int32_T c6_k;
  (void)chartInstance;
  c6_y = c6_x[0];
  for (c6_k = 0; c6_k < 159; c6_k++) {
    c6_b_k = c6_k;
    c6_y += c6_x[c6_b_k + 1];
  }

  return c6_y;
}

static void c6_regionprops(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real_T c6_b_varargin_1[19200],
  c6_emxArray_s8812E1qfIkP21aQTfYt8i *c6_outstats)
{
  static char_T c6_b_cv[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'e', 'g',
    'i', 'o', 'n', 'p', 'r', 'o', 'p', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c6_b_cv1[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'L', ',' };

  c6_emxArray_boolean_T *c6_tile;
  c6_emxArray_int32_T *c6_idxCount;
  c6_emxArray_real_T *c6_b_regionLengths;
  c6_emxArray_real_T *c6_i_x;
  c6_emxArray_real_T *c6_j_x;
  c6_emxArray_real_T *c6_regionIndices;
  c6_emxArray_real_T *c6_regionLengths;
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_r;
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_stats;
  c6_s8812E1qfIkP21aQTfYt8iB c6_f_s;
  c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_g_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_i_y = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_b_j;
  real_T c6_b_k;
  real_T c6_b_numObjs;
  real_T c6_b_q;
  real_T c6_b_vIdx;
  real_T c6_b_x;
  real_T c6_c_i;
  real_T c6_c_numObjs;
  real_T c6_c_varargin_1;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d_numObjs;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_e_p;
  real_T c6_e_x;
  real_T c6_e_y;
  real_T c6_ex;
  real_T c6_f_k;
  real_T c6_f_x;
  real_T c6_f_y;
  real_T c6_g_b;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_h_k;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_j_y;
  real_T c6_maxval;
  real_T c6_numObjs;
  real_T c6_varargin_2;
  real_T c6_x;
  int32_T c6_outsize[2];
  int32_T c6_iv[1];
  int32_T c6_b_dim;
  int32_T c6_b_i;
  int32_T c6_b_idx;
  int32_T c6_b_loop_ub;
  int32_T c6_b_stats;
  int32_T c6_b_vlen;
  int32_T c6_c;
  int32_T c6_c_j;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_vlen;
  int32_T c6_d_a;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_d_p;
  int32_T c6_dim;
  int32_T c6_e_a;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_first;
  int32_T c6_g_k;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_j;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_q;
  int32_T c6_vIdx;
  int32_T c6_vlen;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b_b;
  boolean_T c6_b_p;
  boolean_T c6_c_b;
  boolean_T c6_c_p;
  boolean_T c6_d_b;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_g_st.prev = &c6_f_st;
  c6_g_st.tls = c6_f_st.tls;
  c6_emxInit_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, c6_sp, &c6_r, 1,
    &c6_j_emlrtRTEI);
  c6_st.site = &c6_h_emlrtRSI;
  c6_b_st.site = &c6_n_emlrtRSI;
  c6_p = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_x = c6_b_varargin_1[(int32_T)c6_b_k - 1];
    c6_b_x = c6_x;
    c6_b_b = muDoubleScalarIsInf(c6_b_x);
    c6_b1 = !c6_b_b;
    c6_c_x = c6_x;
    c6_c_b = muDoubleScalarIsNaN(c6_c_x);
    c6_b2 = !c6_c_b;
    c6_d_b = (c6_b1 && c6_b2);
    if (c6_d_b) {
      c6_k++;
    } else {
      c6_p = false;
      c6_exitg1 = true;
    }
  }

  if (c6_p) {
    c6_b = true;
  } else {
    c6_b = false;
  }

  if (!c6_b) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c6_b_st, &c6_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(&c6_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_b_st, NULL, "message", 1U, 2U, 14, c6_b_y, 14, c6_c_y)));
  }

  for (c6_i = 0; c6_i < 19200; c6_i++) {
    chartInstance->c6_varargin_1[c6_i] = c6_b_varargin_1[c6_i];
  }

  c6_d_x = chartInstance->c6_varargin_1[0];
  c6_e_x = c6_d_x;
  c6_e_b = muDoubleScalarIsNaN(c6_e_x);
  c6_b_p = !c6_e_b;
  if (c6_b_p) {
    c6_idx = 1;
  } else {
    c6_idx = 0;
    c6_c_k = 2;
    c6_exitg1 = false;
    while ((!c6_exitg1) && (c6_c_k < 19201)) {
      c6_f_x = chartInstance->c6_varargin_1[c6_c_k - 1];
      c6_g_x = c6_f_x;
      c6_f_b = muDoubleScalarIsNaN(c6_g_x);
      c6_c_p = !c6_f_b;
      if (c6_c_p) {
        c6_idx = c6_c_k;
        c6_exitg1 = true;
      } else {
        c6_c_k++;
      }
    }
  }

  if (c6_idx == 0) {
    c6_maxval = chartInstance->c6_varargin_1[0];
  } else {
    c6_first = c6_idx - 1;
    c6_ex = chartInstance->c6_varargin_1[c6_first];
    c6_i1 = c6_first;
    for (c6_d_k = c6_i1 + 1; c6_d_k + 1 < 19201; c6_d_k++) {
      if (c6_ex < chartInstance->c6_varargin_1[c6_d_k]) {
        c6_ex = chartInstance->c6_varargin_1[c6_d_k];
      }
    }

    c6_maxval = c6_ex;
  }

  c6_emxInit_boolean_T(chartInstance, c6_sp, &c6_tile, 1, &c6_g_emlrtRTEI);
  c6_h_x = c6_maxval;
  c6_varargin_2 = c6_h_x;
  c6_varargin_2 = muDoubleScalarFloor(c6_varargin_2);
  c6_d_y = c6_varargin_2;
  c6_e_y = c6_d_y;
  c6_f_y = c6_e_y;
  c6_g_b = c6_f_y;
  c6_g_y = c6_g_b;
  c6_h_y = c6_g_y;
  c6_numObjs = muDoubleScalarMax(0.0, c6_h_y);
  c6_st.site = &c6_i_emlrtRSI;
  c6_b_numObjs = c6_numObjs;
  c6_b_st.site = &c6_o_emlrtRSI;
  c6_c_numObjs = c6_b_numObjs;
  c6_c_st.site = &c6_p_emlrtRSI;
  c6_c_varargin_1 = c6_c_numObjs;
  c6_d_st.site = &c6_q_emlrtRSI;
  c6_assertValidSizeArg(chartInstance, &c6_d_st, c6_c_varargin_1);
  c6_i2 = c6_tile->size[0];
  c6_tile->size[0] = (int32_T)c6_c_varargin_1;
  c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_c_st, c6_tile, c6_i2,
    &c6_g_emlrtRTEI);
  c6_loop_ub = (int32_T)c6_c_varargin_1 - 1;
  for (c6_i3 = 0; c6_i3 <= c6_loop_ub; c6_i3++) {
    c6_tile->data[c6_i3] = false;
  }

  c6_outsize[0] = c6_tile->size[0];
  if (!((real_T)c6_outsize[0] == (real_T)c6_tile->size[0])) {
    c6_i_y = NULL;
    sf_mex_assign(&c6_i_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c6_c_st, &c6_c_emlrtMCI, "error", 0U, 1U, 14, c6_i_y);
  }

  c6_emxFree_boolean_T(chartInstance, &c6_tile);
  for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
    c6_f_s.Centroid[c6_i4] = 0.0;
  }

  c6_i5 = c6_outstats->size[0];
  c6_outstats->size[0] = c6_outsize[0];
  c6_emxEnsureCapacity_s8812E1qfIkP2(chartInstance, &c6_c_st, c6_outstats, c6_i5,
    &c6_h_emlrtRTEI);
  c6_b_loop_ub = c6_outsize[0] - 1;
  for (c6_i6 = 0; c6_i6 <= c6_b_loop_ub; c6_i6++) {
    c6_outstats->data[c6_i6] = c6_f_s;
  }

  c6_emxInit_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c6_c_st, &c6_stats, 1,
    &c6_r_emlrtRTEI);
  c6_st.site = &c6_j_emlrtRSI;
  c6_initializeStatsStruct(chartInstance, &c6_st, c6_numObjs, c6_stats,
    &c6_statsAlreadyComputed);
  c6_st.site = &c6_k_emlrtRSI;
  c6_d_numObjs = c6_numObjs;
  c6_statsAlreadyComputed.PixelIdxList = true;
  if (c6_d_numObjs != 0.0) {
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_regionLengths, 1,
                       &c6_i_emlrtRTEI);
    c6_i8 = c6_regionLengths->size[0];
    if (c6_d_numObjs != (real_T)(int32_T)muDoubleScalarFloor(c6_d_numObjs)) {
      emlrtIntegerCheckR2012b(c6_d_numObjs, &c6_c_emlrtDCI, &c6_st);
    }

    c6_regionLengths->size[0] = (int32_T)c6_d_numObjs;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_regionLengths, c6_i8,
      &c6_i_emlrtRTEI);
    if (c6_d_numObjs != (real_T)(int32_T)muDoubleScalarFloor(c6_d_numObjs)) {
      emlrtIntegerCheckR2012b(c6_d_numObjs, &c6_c_emlrtDCI, &c6_st);
    }

    c6_d_loop_ub = (int32_T)c6_d_numObjs - 1;
    for (c6_i11 = 0; c6_i11 <= c6_d_loop_ub; c6_i11++) {
      c6_regionLengths->data[c6_i11] = 0.0;
    }

    for (c6_j = 0; c6_j < 160; c6_j++) {
      c6_b_j = (real_T)c6_j + 1.0;
      for (c6_b_i = 0; c6_b_i < 120; c6_b_i++) {
        c6_c_i = (real_T)c6_b_i + 1.0;
        c6_b_idx = (int32_T)c6_b_varargin_1[((int32_T)c6_c_i + 120 * ((int32_T)
          c6_b_j - 1)) - 1];
        if (c6_b_idx > 0) {
          c6_i14 = c6_regionLengths->size[0];
          if ((c6_b_idx < 1) || (c6_b_idx > c6_i14)) {
            emlrtDynamicBoundsCheckR2012b(c6_b_idx, 1, c6_i14, &c6_u_emlrtBCI,
              &c6_st);
          }

          c6_i15 = c6_regionLengths->size[0];
          if ((c6_b_idx < 1) || (c6_b_idx > c6_i15)) {
            emlrtDynamicBoundsCheckR2012b(c6_b_idx, 1, c6_i15, &c6_v_emlrtBCI,
              &c6_st);
          }

          c6_regionLengths->data[c6_b_idx - 1]++;
        }
      }
    }

    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_regionIndices, 1,
                       &c6_s_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_i_x, 1, &c6_m_emlrtRTEI);
    c6_b_st.site = &c6_u_emlrtRSI;
    c6_c_st.site = &c6_v_emlrtRSI;
    c6_d_st.site = &c6_w_emlrtRSI;
    c6_vlen = c6_regionLengths->size[0];
    c6_e_st.site = &c6_x_emlrtRSI;
    c6_b_vlen = c6_vlen;
    c6_f_st.site = &c6_y_emlrtRSI;
    c6_c_vlen = c6_b_vlen;
    c6_g_st.site = &c6_ab_emlrtRSI;
    c6_j_y = c6_sumMatrixColumns(chartInstance, &c6_g_st, c6_regionLengths,
      c6_c_vlen);
    if (c6_j_y != (real_T)(int32_T)muDoubleScalarFloor(c6_j_y)) {
      emlrtIntegerCheckR2012b(c6_j_y, &c6_d_emlrtDCI, &c6_st);
    }

    c6_iv[0] = (int32_T)c6_j_y;
    c6_i20 = c6_regionIndices->size[0];
    c6_regionIndices->size[0] = c6_iv[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_regionIndices, c6_i20,
      &c6_l_emlrtRTEI);
    c6_b_st.site = &c6_t_emlrtRSI;
    c6_i21 = c6_i_x->size[0];
    c6_i_x->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_i_x, c6_i21,
      &c6_m_emlrtRTEI);
    c6_f_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i24 = 0; c6_i24 <= c6_f_loop_ub; c6_i24++) {
      c6_i_x->data[c6_i24] = c6_regionLengths->data[c6_i24];
    }

    c6_c_st.site = &c6_jb_emlrtRSI;
    c6_dim = 2;
    if ((real_T)c6_i_x->size[0] != 1.0) {
      c6_dim = 1;
    }

    c6_emxInit_real_T1(chartInstance, &c6_c_st, &c6_j_x, 1, &c6_n_emlrtRTEI);
    c6_i29 = c6_j_x->size[0];
    c6_j_x->size[0] = c6_i_x->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_j_x, c6_i29,
      &c6_n_emlrtRTEI);
    c6_g_loop_ub = c6_i_x->size[0] - 1;
    for (c6_i30 = 0; c6_i30 <= c6_g_loop_ub; c6_i30++) {
      c6_j_x->data[c6_i30] = c6_i_x->data[c6_i30];
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_idxCount, 1, &c6_o_emlrtRTEI);
    c6_d_st.site = &c6_kb_emlrtRSI;
    c6_useConstantDim(chartInstance, &c6_d_st, c6_j_x, c6_dim, c6_i_x);
    c6_i31 = c6_idxCount->size[0];
    c6_idxCount->size[0] = 1 + c6_i_x->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idxCount, c6_i31,
      &c6_o_emlrtRTEI);
    c6_idxCount->data[0] = 0;
    c6_h_loop_ub = c6_i_x->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_j_x);
    for (c6_i32 = 0; c6_i32 <= c6_h_loop_ub; c6_i32++) {
      c6_idxCount->data[c6_i32 + 1] = (int32_T)c6_i_x->data[c6_i32];
    }

    c6_emxFree_real_T(chartInstance, &c6_i_x);
    c6_c_j = 1;
    for (c6_q = 0; c6_q < 160; c6_q++) {
      c6_b_q = (real_T)c6_q + 1.0;
      for (c6_d_p = 0; c6_d_p < 120; c6_d_p++) {
        c6_e_p = (real_T)c6_d_p + 1.0;
        c6_b_idx = (int32_T)c6_b_varargin_1[((int32_T)c6_e_p + 120 * ((int32_T)
          c6_b_q - 1)) - 1];
        if (c6_b_idx > 0) {
          c6_i34 = c6_idxCount->size[0];
          if ((c6_b_idx < 1) || (c6_b_idx > c6_i34)) {
            emlrtDynamicBoundsCheckR2012b(c6_b_idx, 1, c6_i34, &c6_w_emlrtBCI,
              &c6_st);
          }

          c6_e_a = c6_idxCount->data[c6_b_idx - 1] + 1;
          c6_c = c6_e_a;
          c6_i36 = c6_idxCount->size[0];
          if ((c6_b_idx < 1) || (c6_b_idx > c6_i36)) {
            emlrtDynamicBoundsCheckR2012b(c6_b_idx, 1, c6_i36, &c6_x_emlrtBCI,
              &c6_st);
          }

          c6_idxCount->data[c6_b_idx - 1] = c6_c;
          c6_i38 = c6_regionIndices->size[0];
          c6_i39 = c6_idxCount->size[0];
          if ((c6_b_idx < 1) || (c6_b_idx > c6_i39)) {
            emlrtDynamicBoundsCheckR2012b(c6_b_idx, 1, c6_i39, &c6_ab_emlrtBCI,
              &c6_st);
          }

          c6_i40 = c6_idxCount->data[c6_b_idx - 1];
          if ((c6_i40 < 1) || (c6_i40 > c6_i38)) {
            emlrtDynamicBoundsCheckR2012b(c6_i40, 1, c6_i38, &c6_y_emlrtBCI,
              &c6_st);
          }

          c6_regionIndices->data[c6_i40 - 1] = (real_T)c6_c_j;
        }

        c6_d_a = c6_c_j + 1;
        c6_c_j = c6_d_a;
      }
    }

    c6_b_st.site = &c6_s_emlrtRSI;
    c6_c_st.site = &c6_jb_emlrtRSI;
    c6_b_dim = 2;
    if ((real_T)c6_regionLengths->size[0] != 1.0) {
      c6_b_dim = 1;
    }

    c6_emxInit_real_T1(chartInstance, &c6_c_st, &c6_b_regionLengths, 1,
                       &c6_n_emlrtRTEI);
    c6_i33 = c6_b_regionLengths->size[0];
    c6_b_regionLengths->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_b_regionLengths,
      c6_i33, &c6_n_emlrtRTEI);
    c6_i_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i35 = 0; c6_i35 <= c6_i_loop_ub; c6_i35++) {
      c6_b_regionLengths->data[c6_i35] = c6_regionLengths->data[c6_i35];
    }

    c6_d_st.site = &c6_kb_emlrtRSI;
    c6_useConstantDim(chartInstance, &c6_d_st, c6_b_regionLengths, c6_b_dim,
                      c6_regionLengths);
    c6_i37 = c6_idxCount->size[0];
    c6_idxCount->size[0] = 1 + c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idxCount, c6_i37,
      &c6_p_emlrtRTEI);
    c6_idxCount->data[0] = 0;
    c6_j_loop_ub = c6_regionLengths->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_b_regionLengths);
    for (c6_i41 = 0; c6_i41 <= c6_j_loop_ub; c6_i41++) {
      c6_idxCount->data[c6_i41 + 1] = (int32_T)c6_regionLengths->data[c6_i41];
    }

    c6_emxFree_real_T(chartInstance, &c6_regionLengths);
    c6_d1 = (real_T)c6_stats->size[0];
    c6_i42 = (int32_T)c6_d1 - 1;
    for (c6_g_k = 0; c6_g_k <= c6_i42; c6_g_k++) {
      c6_h_k = (real_T)c6_g_k + 1.0;
      c6_i43 = c6_idxCount->size[0];
      c6_i44 = (int32_T)c6_h_k;
      if ((c6_i44 < 1) || (c6_i44 > c6_i43)) {
        emlrtDynamicBoundsCheckR2012b(c6_i44, 1, c6_i43, &c6_bb_emlrtBCI, &c6_st);
      }

      c6_i45 = c6_idxCount->data[c6_i44 - 1] + 1;
      c6_i46 = c6_idxCount->size[0];
      c6_i47 = (int32_T)(c6_h_k + 1.0);
      if ((c6_i47 < 1) || (c6_i47 > c6_i46)) {
        emlrtDynamicBoundsCheckR2012b(c6_i47, 1, c6_i46, &c6_cb_emlrtBCI, &c6_st);
      }

      c6_i48 = c6_idxCount->data[c6_i47 - 1];
      c6_b3 = (c6_i45 > c6_i48);
      if (c6_b3) {
        c6_i50 = 0;
        c6_i51 = -1;
      } else {
        c6_i49 = c6_regionIndices->size[0];
        if ((c6_i45 < 1) || (c6_i45 > c6_i49)) {
          emlrtDynamicBoundsCheckR2012b(c6_i45, 1, c6_i49, &c6_p_emlrtBCI,
            &c6_st);
        }

        c6_i50 = c6_i45 - 1;
        c6_i52 = c6_regionIndices->size[0];
        if ((c6_i48 < 1) || (c6_i48 > c6_i52)) {
          emlrtDynamicBoundsCheckR2012b(c6_i48, 1, c6_i52, &c6_o_emlrtBCI,
            &c6_st);
        }

        c6_i51 = c6_i48 - 1;
      }

      c6_b_stats = c6_stats->size[0];
      c6_i53 = (int32_T)c6_h_k;
      if ((c6_i53 < 1) || (c6_i53 > c6_b_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i53, 1, c6_b_stats, &c6_db_emlrtBCI,
          &c6_st);
      }

      c6_i54 = c6_i53 - 1;
      c6_i55 = c6_stats->data[c6_i54].PixelIdxList->size[0];
      c6_stats->data[c6_i54].PixelIdxList->size[0] = (c6_i51 - c6_i50) + 1;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_stats->data[c6_i54].
        PixelIdxList, c6_i55, &c6_q_emlrtRTEI);
      c6_k_loop_ub = c6_i51 - c6_i50;
      for (c6_i56 = 0; c6_i56 <= c6_k_loop_ub; c6_i56++) {
        c6_i57 = (int32_T)c6_h_k;
        if ((c6_i57 < 1) || (c6_i57 > c6_b_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i57, 1, c6_b_stats, &c6_db_emlrtBCI,
            &c6_st);
        }

        c6_stats->data[c6_i57 - 1].PixelIdxList->data[c6_i56] =
          c6_regionIndices->data[c6_i50 + c6_i56];
      }
    }

    c6_emxFree_int32_T(chartInstance, &c6_idxCount);
    c6_emxFree_real_T(chartInstance, &c6_regionIndices);
  }

  c6_i7 = c6_r->size[0];
  c6_r->size[0] = c6_stats->size[0];
  c6_emxEnsureCapacity_s_R6Og1x0kmqQ(chartInstance, c6_sp, c6_r, c6_i7,
    &c6_j_emlrtRTEI);
  c6_c_loop_ub = c6_stats->size[0] - 1;
  for (c6_i9 = 0; c6_i9 <= c6_c_loop_ub; c6_i9++) {
    c6_st.site = &c6_k_emlrtRSI;
    c6_emxCopyStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c6_st, &c6_r->data[c6_i9],
      &c6_stats->data[c6_i9], &c6_j_emlrtRTEI);
  }

  c6_st.site = &c6_l_emlrtRSI;
  c6_b_ComputeCentroid(chartInstance, &c6_st, c6_r, &c6_statsAlreadyComputed);
  c6_i10 = c6_stats->size[0];
  c6_stats->size[0] = c6_r->size[0];
  c6_st.site = &c6_l_emlrtRSI;
  c6_emxEnsureCapacity_s_R6Og1x0kmqQ(chartInstance, &c6_st, c6_stats, c6_i10,
    &c6_k_emlrtRTEI);
  c6_e_loop_ub = c6_r->size[0] - 1;
  for (c6_i12 = 0; c6_i12 <= c6_e_loop_ub; c6_i12++) {
    c6_st.site = &c6_l_emlrtRSI;
    c6_emxCopyStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c6_st, &c6_stats->
      data[c6_i12], &c6_r->data[c6_i12], &c6_j_emlrtRTEI);
  }

  c6_st.site = &c6_m_emlrtRSI;
  c6_d = (real_T)c6_stats->size[0];
  c6_i13 = (int32_T)c6_d - 1;
  for (c6_e_k = 0; c6_e_k <= c6_i13; c6_e_k++) {
    c6_f_k = (real_T)c6_e_k + 1.0;
    c6_i16 = c6_stats->size[0];
    c6_i17 = (int32_T)c6_f_k;
    if ((c6_i17 < 1) || (c6_i17 > c6_i16)) {
      emlrtDynamicBoundsCheckR2012b(c6_i17, 1, c6_i16, &c6_q_emlrtBCI, &c6_st);
    }

    c6_i18 = c6_outstats->size[0];
    c6_i19 = (int32_T)c6_f_k;
    if ((c6_i19 < 1) || (c6_i19 > c6_i18)) {
      emlrtDynamicBoundsCheckR2012b(c6_i19, 1, c6_i18, &c6_r_emlrtBCI, &c6_st);
    }

    for (c6_vIdx = 0; c6_vIdx < 2; c6_vIdx++) {
      c6_b_vIdx = (real_T)c6_vIdx + 1.0;
      c6_i22 = c6_stats->size[0];
      c6_i23 = (int32_T)c6_f_k;
      if ((c6_i23 < 1) || (c6_i23 > c6_i22)) {
        emlrtDynamicBoundsCheckR2012b(c6_i23, 1, c6_i22, &c6_t_emlrtBCI, &c6_st);
      }

      c6_i25 = c6_i23 - 1;
      c6_i26 = c6_outstats->size[0];
      c6_i27 = (int32_T)c6_f_k;
      if ((c6_i27 < 1) || (c6_i27 > c6_i26)) {
        emlrtDynamicBoundsCheckR2012b(c6_i27, 1, c6_i26, &c6_s_emlrtBCI, &c6_st);
      }

      c6_i28 = c6_i27 - 1;
      c6_outstats->data[c6_i28].Centroid[(int32_T)c6_b_vIdx - 1] =
        c6_stats->data[c6_i25].Centroid[(int32_T)c6_b_vIdx - 1];
    }
  }

  c6_emxFree_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c6_stats);
  c6_emxFree_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c6_r);
}

static void c6_assertValidSizeArg(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_b_varargin_1)
{
  static char_T c6_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c6_b_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_arg;
  real_T c6_b_arg;
  real_T c6_c_varargin_1;
  real_T c6_n;
  real_T c6_x;
  int32_T c6_b_u;
  int32_T c6_u;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_p;
  boolean_T c6_p;
  (void)chartInstance;
  c6_arg = c6_b_varargin_1;
  if (c6_arg != c6_arg) {
    c6_p = false;
  } else {
    c6_x = c6_arg;
    c6_b = muDoubleScalarIsInf(c6_x);
    if (c6_b) {
      c6_p = false;
    } else {
      c6_p = true;
    }
  }

  if (c6_p) {
    c6_b_arg = c6_b_varargin_1;
    if (c6_b_arg > 2.147483647E+9) {
      c6_b_p = false;
    } else {
      c6_b_p = true;
    }

    if (c6_b_p) {
      c6_b_b = true;
    } else {
      c6_b_b = false;
    }
  } else {
    c6_b_b = false;
  }

  if (!c6_b_b) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c6_u = MIN_int32_T;
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), false);
    c6_b_u = MAX_int32_T;
    c6_f_y = NULL;
    sf_mex_assign(&c6_f_y, sf_mex_create("y", &c6_b_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(c6_sp, &c6_d_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 3U, 14, c6_b_y, 14, c6_c_y, 14, c6_f_y)));
  }

  c6_c_varargin_1 = c6_b_varargin_1;
  if (c6_c_varargin_1 <= 0.0) {
    c6_n = 0.0;
  } else {
    c6_n = c6_c_varargin_1;
  }

  if (!(c6_n <= 2.147483647E+9)) {
    c6_d_y = NULL;
    sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    c6_e_y = NULL;
    sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c6_sp, &c6_e_emlrtMCI, "error", 0U, 2U, 14, c6_d_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_e_y)));
  }
}

static void c6_initializeStatsStruct(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_numObjs,
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2
  *c6_statsAlreadyComputed)
{
  c6_emxArray_boolean_T *c6_tile;
  c6_s_R6Og1x0kmqQXSF9Pwa49FD c6_statsOneObj;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  const mxArray *c6_y = NULL;
  real_T c6_b_varargin_1;
  int32_T c6_outsize[2];
  int32_T c6_b_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_loop_ub;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_emxInitStruct_s_R6Og1x0kmqQXSF9(chartInstance, c6_sp, &c6_statsOneObj,
    &c6_u_emlrtRTEI);
  c6_statsAlreadyComputed->Area = false;
  c6_statsOneObj.Area = 0.0;
  c6_statsAlreadyComputed->Centroid = false;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_statsOneObj.Centroid[c6_i] = 0.0;
  }

  c6_statsAlreadyComputed->BoundingBox = false;
  for (c6_i1 = 0; c6_i1 < 4; c6_i1++) {
    c6_statsOneObj.BoundingBox[c6_i1] = 0.0;
  }

  c6_statsAlreadyComputed->MajorAxisLength = false;
  c6_statsOneObj.MajorAxisLength = 0.0;
  c6_statsAlreadyComputed->MinorAxisLength = false;
  c6_statsOneObj.MinorAxisLength = 0.0;
  c6_statsAlreadyComputed->Eccentricity = false;
  c6_statsOneObj.Eccentricity = 0.0;
  c6_statsAlreadyComputed->Orientation = false;
  c6_statsOneObj.Orientation = 0.0;
  c6_statsAlreadyComputed->Image = false;
  c6_statsOneObj.Image.size[0] = 0;
  c6_statsOneObj.Image.size[1] = 0;
  c6_statsAlreadyComputed->FilledImage = false;
  c6_statsOneObj.FilledImage.size[0] = 0;
  c6_statsOneObj.FilledImage.size[1] = 0;
  c6_statsAlreadyComputed->FilledArea = false;
  c6_statsOneObj.FilledArea = 0.0;
  c6_statsAlreadyComputed->EulerNumber = false;
  c6_statsOneObj.EulerNumber = 0.0;
  c6_statsAlreadyComputed->Extrema = false;
  for (c6_i2 = 0; c6_i2 < 16; c6_i2++) {
    c6_statsOneObj.Extrema[c6_i2] = 0.0;
  }

  c6_statsAlreadyComputed->EquivDiameter = false;
  c6_statsOneObj.EquivDiameter = 0.0;
  c6_statsAlreadyComputed->Extent = false;
  c6_statsOneObj.Extent = 0.0;
  c6_statsAlreadyComputed->PixelIdxList = false;
  c6_statsOneObj.PixelIdxList->size[0] = 0;
  c6_statsAlreadyComputed->PixelList = false;
  c6_statsOneObj.PixelList->size[0] = 0;
  c6_statsOneObj.PixelList->size[1] = 2;
  c6_statsAlreadyComputed->Perimeter = false;
  c6_statsOneObj.Perimeter = 0.0;
  c6_statsAlreadyComputed->Circularity = false;
  c6_statsOneObj.Circularity = 0.0;
  c6_statsAlreadyComputed->PixelValues = false;
  c6_statsOneObj.PixelValues->size[0] = 0;
  c6_statsAlreadyComputed->WeightedCentroid = false;
  for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
    c6_statsOneObj.WeightedCentroid[c6_i3] = 0.0;
  }

  c6_statsAlreadyComputed->MeanIntensity = false;
  c6_statsOneObj.MeanIntensity = 0.0;
  c6_statsAlreadyComputed->MinIntensity = false;
  c6_statsOneObj.MinIntensity = 0.0;
  c6_statsAlreadyComputed->MaxIntensity = false;
  c6_statsOneObj.MaxIntensity = 0.0;
  c6_statsAlreadyComputed->SubarrayIdx = false;
  c6_statsOneObj.SubarrayIdx.size[0] = 1;
  c6_statsOneObj.SubarrayIdx.size[1] = 0;
  for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
    c6_statsOneObj.SubarrayIdxLengths[c6_i4] = 0.0;
  }

  c6_emxInit_boolean_T(chartInstance, c6_sp, &c6_tile, 1, &c6_g_emlrtRTEI);
  c6_st.site = &c6_r_emlrtRSI;
  c6_b_varargin_1 = c6_numObjs;
  c6_b_st.site = &c6_q_emlrtRSI;
  c6_assertValidSizeArg(chartInstance, &c6_b_st, c6_b_varargin_1);
  c6_i5 = c6_tile->size[0];
  c6_tile->size[0] = (int32_T)c6_b_varargin_1;
  c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_st, c6_tile, c6_i5,
    &c6_g_emlrtRTEI);
  c6_loop_ub = (int32_T)c6_b_varargin_1 - 1;
  for (c6_i6 = 0; c6_i6 <= c6_loop_ub; c6_i6++) {
    c6_tile->data[c6_i6] = false;
  }

  c6_outsize[0] = c6_tile->size[0];
  if (!((real_T)c6_outsize[0] == (real_T)c6_tile->size[0])) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c6_st, &c6_c_emlrtMCI, "error", 0U, 1U, 14, c6_y);
  }

  c6_emxFree_boolean_T(chartInstance, &c6_tile);
  c6_i7 = c6_stats->size[0];
  c6_stats->size[0] = c6_outsize[0];
  c6_emxEnsureCapacity_s_R6Og1x0kmqQ(chartInstance, &c6_st, c6_stats, c6_i7,
    &c6_t_emlrtRTEI);
  c6_b_loop_ub = c6_outsize[0] - 1;
  for (c6_i8 = 0; c6_i8 <= c6_b_loop_ub; c6_i8++) {
    c6_emxCopyStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c6_st, &c6_stats->
      data[c6_i8], &c6_statsOneObj, &c6_t_emlrtRTEI);
  }

  c6_emxFreeStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c6_statsOneObj);
}

static real_T c6_sumMatrixColumns(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_vlen)
{
  emlrtStack c6_st;
  real_T c6_f_s;
  real_T c6_y;
  int32_T c6_d_a;
  int32_T c6_ib;
  int32_T c6_inb;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  if (c6_vlen < 4096) {
    c6_st.site = &c6_bb_emlrtRSI;
    c6_y = c6_c_sumColumnB(chartInstance, &c6_st, c6_x, c6_vlen);
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 4096, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 12;
    c6_lidx = c6_inb;
    c6_nleft = c6_vlen - c6_inb;
    c6_f_s = c6_sumColumnB4(chartInstance, c6_x, 1);
    for (c6_ib = 1; c6_ib < c6_nfb; c6_ib++) {
      c6_f_s += c6_sumColumnB4(chartInstance, c6_x, 1 + (c6_ib << 12));
    }

    if (c6_nleft > 0) {
      c6_st.site = &c6_cb_emlrtRSI;
      c6_f_s += c6_d_sumColumnB(chartInstance, &c6_st, c6_x, c6_nleft, c6_lidx +
        1);
    }

    c6_y = c6_f_s;
  }

  return c6_y;
}

static real_T c6_c_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_vlen)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_y;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_e_k;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_vstart;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_db_emlrtRSI;
    c6_b_vlen = c6_vlen - 1;
    c6_y = c6_x->data[0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_hb_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_d_k = 1; c6_d_k - 1 < c6_i; c6_d_k++) {
      c6_e_k = c6_d_k;
      c6_y += c6_x->data[c6_e_k];
    }
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_eb_emlrtRSI;
    c6_y = c6_x->data[0];
    c6_b_st.site = &c6_hb_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_c_k = c6_k;
      c6_y += c6_x->data[c6_c_k];
    }

    for (c6_b_k = 1; c6_b_k < c6_nfb; c6_b_k++) {
      c6_st.site = &c6_fb_emlrtRSI;
      c6_vstart = c6_b_k << 10;
      c6_b_y = c6_x->data[c6_vstart];
      c6_b_st.site = &c6_hb_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_b_y += c6_x->data[c6_vstart + c6_g_k];
      }

      c6_y += c6_b_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_inb;
      c6_st.site = &c6_gb_emlrtRSI;
      c6_c_vlen = c6_nleft - 1;
      c6_b_vstart = c6_lidx;
      c6_c_y = c6_x->data[c6_b_vstart];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_hb_emlrtRSI;
      c6_c_b = c6_i1;
      c6_d_b = c6_c_b;
      if (c6_d_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_d_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_c_y += c6_x->data[c6_b_vstart + c6_i_k];
      }

      c6_y += c6_c_y;
    }
  }

  return c6_y;
}

static void c6_check_forloop_overflow_error
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp)
{
  static char_T c6_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c6_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_y = NULL;
  (void)chartInstance;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c6_sp, &c6_b_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14, sf_mex_call
              (c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c6_sp, NULL,
    "message", 1U, 2U, 14, c6_b_y, 14, c6_c_y)));
}

static real_T c6_sumColumnB4(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T *c6_x, int32_T c6_vstart)
{
  real_T c6_psum1;
  real_T c6_psum2;
  real_T c6_psum3;
  real_T c6_psum4;
  int32_T c6_b_k;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  (void)chartInstance;
  c6_i2 = c6_vstart + 1023;
  c6_i3 = c6_vstart + 2047;
  c6_i4 = c6_vstart + 3071;
  c6_psum1 = c6_x->data[c6_vstart - 1];
  c6_psum2 = c6_x->data[c6_i2];
  c6_psum3 = c6_x->data[c6_i3];
  c6_psum4 = c6_x->data[c6_i4];
  for (c6_k = 0; c6_k < 1023; c6_k++) {
    c6_b_k = c6_k + 1;
    c6_psum1 += c6_x->data[(c6_vstart + c6_b_k) - 1];
    c6_psum2 += c6_x->data[c6_i2 + c6_b_k];
    c6_psum3 += c6_x->data[c6_i3 + c6_b_k];
    c6_psum4 += c6_x->data[c6_i4 + c6_b_k];
  }

  return (c6_psum1 + c6_psum2) + (c6_psum3 + c6_psum4);
}

static real_T c6_d_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_vlen, int32_T c6_vstart)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_y;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_c_vstart;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_d_vstart;
  int32_T c6_e_k;
  int32_T c6_e_vstart;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_db_emlrtRSI;
    c6_b_vlen = c6_vlen - 1;
    c6_b_vstart = c6_vstart - 1;
    c6_y = c6_x->data[c6_b_vstart];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_hb_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_d_k = 1; c6_d_k - 1 < c6_i; c6_d_k++) {
      c6_e_k = c6_d_k;
      c6_y += c6_x->data[c6_b_vstart + c6_e_k];
    }
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_eb_emlrtRSI;
    c6_c_vstart = c6_vstart - 1;
    c6_y = c6_x->data[c6_c_vstart];
    c6_b_st.site = &c6_hb_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_c_k = c6_k;
      c6_y += c6_x->data[c6_c_vstart + c6_c_k];
    }

    for (c6_b_k = 1; c6_b_k < c6_nfb; c6_b_k++) {
      c6_st.site = &c6_fb_emlrtRSI;
      c6_d_vstart = (c6_vstart + (c6_b_k << 10)) - 1;
      c6_b_y = c6_x->data[c6_d_vstart];
      c6_b_st.site = &c6_hb_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_b_y += c6_x->data[c6_d_vstart + c6_g_k];
      }

      c6_y += c6_b_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_vstart + c6_inb;
      c6_st.site = &c6_gb_emlrtRSI;
      c6_c_vlen = c6_nleft - 1;
      c6_e_vstart = c6_lidx - 1;
      c6_c_y = c6_x->data[c6_e_vstart];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_hb_emlrtRSI;
      c6_c_b = c6_i1;
      c6_d_b = c6_c_b;
      if (c6_d_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_d_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_c_y += c6_x->data[c6_e_vstart + c6_i_k];
      }

      c6_y += c6_c_y;
    }
  }

  return c6_y;
}

static void c6_useConstantDim(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_varargin_2,
  int32_T c6_varargin_3, c6_emxArray_real_T *c6_varargout_1)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  int32_T c6_loop_ub;
  int32_T c6_nx;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  if (c6_varargin_3 == 1) {
    c6_st.site = &c6_lb_emlrtRSI;
    c6_i1 = c6_varargout_1->size[0];
    c6_varargout_1->size[0] = c6_varargin_2->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_varargout_1, c6_i1,
      &c6_v_emlrtRTEI);
    c6_b_loop_ub = c6_varargin_2->size[0] - 1;
    for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
      c6_varargout_1->data[c6_i3] = c6_varargin_2->data[c6_i3];
    }

    c6_b_st.site = &c6_mb_emlrtRSI;
    c6_c_st.site = &c6_nb_emlrtRSI;
    c6_nx = c6_varargout_1->size[0] - 1;
    if (!((real_T)c6_varargout_1->size[0] == 1.0)) {
      c6_i4 = c6_nx;
      c6_d_st.site = &c6_ob_emlrtRSI;
      c6_b = c6_i4;
      c6_b_b = c6_b;
      if (c6_b_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_b_b > 2147483646);
      }

      if (c6_overflow) {
        c6_e_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
      }

      for (c6_k = 1; c6_k - 1 < c6_i4; c6_k++) {
        c6_b_k = c6_k;
        c6_varargout_1->data[c6_b_k] += c6_varargout_1->data[c6_b_k - 1];
      }
    }
  } else {
    c6_i = c6_varargout_1->size[0];
    c6_varargout_1->size[0] = c6_varargin_2->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_varargout_1, c6_i,
      &c6_v_emlrtRTEI);
    c6_loop_ub = c6_varargin_2->size[0] - 1;
    for (c6_i2 = 0; c6_i2 <= c6_loop_ub; c6_i2++) {
      c6_varargout_1->data[c6_i2] = c6_varargin_2->data[c6_i2];
    }
  }
}

static boolean_T c6_allinrange(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_int32_T *c6_x, int32_T c6_hi)
{
  real_T c6_b_k;
  real_T c6_d;
  int32_T c6_exitg1;
  int32_T c6_i;
  int32_T c6_k;
  boolean_T c6_b;
  boolean_T c6_p;
  (void)chartInstance;
  c6_d = (real_T)c6_x->size[0];
  c6_i = (int32_T)c6_d - 1;
  c6_k = 0;
  do {
    c6_exitg1 = 0;
    if (c6_k <= c6_i) {
      c6_b_k = (real_T)c6_k + 1.0;
      if (((real_T)c6_x->data[(int32_T)c6_b_k - 1] >= 1.0) && (c6_x->data
           [(int32_T)c6_b_k - 1] <= c6_hi)) {
        c6_b = true;
      } else {
        c6_b = false;
      }

      if (!c6_b) {
        c6_p = false;
        c6_exitg1 = 1;
      } else {
        c6_k++;
      }
    } else {
      c6_p = true;
      c6_exitg1 = 1;
    }
  } while (c6_exitg1 == 0);

  return c6_p;
}

static void c6_ComputeCentroid(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49
  *c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed,
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_b_stats, c6_sHtk0WM4OMtyqkehwQYcq2
  *c6_b_statsAlreadyComputed)
{
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_loop_ub;
  c6_i = c6_b_stats->size[0];
  c6_b_stats->size[0] = c6_stats->size[0];
  c6_emxEnsureCapacity_s_R6Og1x0kmqQ(chartInstance, c6_sp, c6_b_stats, c6_i,
    &c6_w_emlrtRTEI);
  c6_loop_ub = c6_stats->size[0] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_emxCopyStruct_s_R6Og1x0kmqQXSF9(chartInstance, c6_sp, &c6_b_stats->
      data[c6_i1], &c6_stats->data[c6_i1], &c6_w_emlrtRTEI);
  }

  *c6_b_statsAlreadyComputed = c6_statsAlreadyComputed;
  c6_b_ComputeCentroid(chartInstance, c6_sp, c6_b_stats,
                       c6_b_statsAlreadyComputed);
}

static void c6_ind2sub_indexClass(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_ndx,
  c6_emxArray_int32_T *c6_varargout_1, c6_emxArray_int32_T *c6_varargout_2)
{
  c6_emxArray_int32_T *c6_vk;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_y = NULL;
  int32_T c6_b_loop_ub;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_loop_ub;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_i = c6_varargout_1->size[0];
  c6_varargout_1->size[0] = c6_ndx->size[0];
  c6_st.site = &c6_jh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i,
    &c6_x_emlrtRTEI);
  c6_loop_ub = c6_ndx->size[0] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_varargout_1->data[c6_i1] = (int32_T)c6_ndx->data[c6_i1];
  }

  if (!c6_allinrange(chartInstance, c6_varargout_1, 19200)) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_cv2, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv2, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c6_sp, &c6_f_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_b_y)));
  }

  c6_i2 = c6_varargout_1->size[0];
  c6_st.site = &c6_ih_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i2,
    &c6_y_emlrtRTEI);
  c6_b_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
    c6_varargout_1->data[c6_i3]--;
  }

  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_vk, 1, &c6_ab_emlrtRTEI);
  c6_i4 = c6_vk->size[0];
  c6_vk->size[0] = c6_varargout_1->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_vk, c6_i4,
    &c6_ab_emlrtRTEI);
  c6_c_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
    c6_vk->data[c6_i5] = c6_div_nzp_s32(chartInstance, c6_varargout_1->
      data[c6_i5], 120, 0, 1U, 0, 0);
  }

  c6_i6 = c6_varargout_2->size[0];
  c6_varargout_2->size[0] = c6_vk->size[0];
  c6_st.site = &c6_hh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_2, c6_i6,
    &c6_bb_emlrtRTEI);
  c6_d_loop_ub = c6_vk->size[0] - 1;
  for (c6_i7 = 0; c6_i7 <= c6_d_loop_ub; c6_i7++) {
    c6_varargout_2->data[c6_i7] = c6_vk->data[c6_i7] + 1;
  }

  c6_i8 = c6_vk->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_vk, c6_i8,
    &c6_cb_emlrtRTEI);
  c6_e_loop_ub = c6_vk->size[0] - 1;
  for (c6_i9 = 0; c6_i9 <= c6_e_loop_ub; c6_i9++) {
    c6_vk->data[c6_i9] *= 120;
  }

  c6_i10 = c6_varargout_1->size[0];
  c6_st.site = &c6_gh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i10,
    &c6_db_emlrtRTEI);
  c6_f_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i11 = 0; c6_i11 <= c6_f_loop_ub; c6_i11++) {
    c6_varargout_1->data[c6_i11] -= c6_vk->data[c6_i11];
  }

  c6_emxFree_int32_T(chartInstance, &c6_vk);
  c6_i12 = c6_varargout_1->size[0];
  c6_st.site = &c6_fh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i12,
    &c6_eb_emlrtRTEI);
  c6_g_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i13 = 0; c6_i13 <= c6_g_loop_ub; c6_i13++) {
    c6_varargout_1->data[c6_i13]++;
  }
}

static real_T c6_e_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_col, int32_T c6_vlen)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_y;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_col;
  int32_T c6_b_i0;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_i0;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_col;
  int32_T c6_d_i0;
  int32_T c6_d_k;
  int32_T c6_e_col;
  int32_T c6_e_k;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i0;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_vstart;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_db_emlrtRSI;
    c6_b_col = c6_col - 1;
    c6_b_vlen = c6_vlen - 1;
    c6_i0 = c6_b_col * c6_x->size[0];
    c6_y = c6_x->data[c6_i0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_hb_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_d_k = 1; c6_d_k - 1 < c6_i; c6_d_k++) {
      c6_e_k = c6_d_k;
      c6_y += c6_x->data[c6_i0 + c6_e_k];
    }
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_eb_emlrtRSI;
    c6_c_col = c6_col - 1;
    c6_b_i0 = c6_c_col * c6_x->size[0];
    c6_y = c6_x->data[c6_b_i0];
    c6_b_st.site = &c6_hb_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_c_k = c6_k;
      c6_y += c6_x->data[c6_b_i0 + c6_c_k];
    }

    for (c6_b_k = 1; c6_b_k < c6_nfb; c6_b_k++) {
      c6_st.site = &c6_fb_emlrtRSI;
      c6_d_col = c6_col - 1;
      c6_vstart = c6_b_k << 10;
      c6_c_i0 = c6_vstart + c6_d_col * c6_x->size[0];
      c6_b_y = c6_x->data[c6_c_i0];
      c6_b_st.site = &c6_hb_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_b_y += c6_x->data[c6_c_i0 + c6_g_k];
      }

      c6_y += c6_b_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_inb;
      c6_st.site = &c6_gb_emlrtRSI;
      c6_e_col = c6_col - 1;
      c6_c_vlen = c6_nleft - 1;
      c6_b_vstart = c6_lidx + 1;
      c6_d_i0 = (c6_b_vstart + c6_e_col * c6_x->size[0]) - 1;
      c6_c_y = c6_x->data[c6_d_i0];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_hb_emlrtRSI;
      c6_c_b = c6_i1;
      c6_d_b = c6_c_b;
      if (c6_d_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_d_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_c_y += c6_x->data[c6_d_i0 + c6_i_k];
      }

      c6_y += c6_c_y;
    }
  }

  return c6_y;
}

static real_T c6_b_sumColumnB4(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T *c6_x, int32_T c6_col, int32_T c6_vstart)
{
  real_T c6_psum1;
  real_T c6_psum2;
  real_T c6_psum3;
  real_T c6_psum4;
  int32_T c6_b_k;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  (void)chartInstance;
  c6_i1 = (c6_vstart + (c6_col - 1) * c6_x->size[0]) - 1;
  c6_i2 = c6_i1 + 1024;
  c6_i3 = c6_i1 + 2048;
  c6_i4 = c6_i1 + 3072;
  c6_psum1 = c6_x->data[c6_i1];
  c6_psum2 = c6_x->data[c6_i2];
  c6_psum3 = c6_x->data[c6_i3];
  c6_psum4 = c6_x->data[c6_i4];
  for (c6_k = 0; c6_k < 1023; c6_k++) {
    c6_b_k = c6_k + 1;
    c6_psum1 += c6_x->data[c6_i1 + c6_b_k];
    c6_psum2 += c6_x->data[c6_i2 + c6_b_k];
    c6_psum3 += c6_x->data[c6_i3 + c6_b_k];
    c6_psum4 += c6_x->data[c6_i4 + c6_b_k];
  }

  return (c6_psum1 + c6_psum2) + (c6_psum3 + c6_psum4);
}

static real_T c6_f_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x, int32_T
  c6_col, int32_T c6_vlen, int32_T c6_vstart)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_y;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_col;
  int32_T c6_b_i0;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_i0;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_c_vstart;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_col;
  int32_T c6_d_i0;
  int32_T c6_d_k;
  int32_T c6_d_vstart;
  int32_T c6_e_col;
  int32_T c6_e_k;
  int32_T c6_e_vstart;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i0;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_db_emlrtRSI;
    c6_b_col = c6_col - 1;
    c6_b_vlen = c6_vlen - 1;
    c6_b_vstart = c6_vstart;
    c6_i0 = (c6_b_vstart + c6_b_col * c6_x->size[0]) - 1;
    c6_y = c6_x->data[c6_i0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_hb_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_d_k = 1; c6_d_k - 1 < c6_i; c6_d_k++) {
      c6_e_k = c6_d_k;
      c6_y += c6_x->data[c6_i0 + c6_e_k];
    }
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_eb_emlrtRSI;
    c6_c_col = c6_col - 1;
    c6_c_vstart = c6_vstart;
    c6_b_i0 = (c6_c_vstart + c6_c_col * c6_x->size[0]) - 1;
    c6_y = c6_x->data[c6_b_i0];
    c6_b_st.site = &c6_hb_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_c_k = c6_k;
      c6_y += c6_x->data[c6_b_i0 + c6_c_k];
    }

    for (c6_b_k = 1; c6_b_k < c6_nfb; c6_b_k++) {
      c6_st.site = &c6_fb_emlrtRSI;
      c6_d_col = c6_col - 1;
      c6_d_vstart = c6_vstart + (c6_b_k << 10);
      c6_c_i0 = (c6_d_vstart + c6_d_col * c6_x->size[0]) - 1;
      c6_b_y = c6_x->data[c6_c_i0];
      c6_b_st.site = &c6_hb_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_b_y += c6_x->data[c6_c_i0 + c6_g_k];
      }

      c6_y += c6_b_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_vstart + c6_inb;
      c6_st.site = &c6_gb_emlrtRSI;
      c6_e_col = c6_col - 1;
      c6_c_vlen = c6_nleft - 1;
      c6_e_vstart = c6_lidx;
      c6_d_i0 = (c6_e_vstart + c6_e_col * c6_x->size[0]) - 1;
      c6_c_y = c6_x->data[c6_d_i0];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_hb_emlrtRSI;
      c6_c_b = c6_i1;
      c6_d_b = c6_c_b;
      if (c6_d_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_d_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_c_y += c6_x->data[c6_d_i0 + c6_i_k];
      }

      c6_y += c6_c_y;
    }
  }

  return c6_y;
}

static void c6_imfilter(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_b_varargin_1[19200], real32_T c6_b[19200])
{
  static real_T c6_kernel[25] = { 0.014418818362460822, 0.028084023356349175,
    0.0350727008055935, 0.028084023356349175, 0.014418818362460822,
    0.028084023356349175, 0.054700208300935887, 0.068312293270780214,
    0.054700208300935887, 0.028084023356349175, 0.0350727008055935,
    0.068312293270780214, 0.085311730190125085, 0.068312293270780214,
    0.0350727008055935, 0.028084023356349175, 0.054700208300935887,
    0.068312293270780214, 0.054700208300935887, 0.028084023356349175,
    0.014418818362460822, 0.028084023356349175, 0.0350727008055935,
    0.028084023356349175, 0.014418818362460822 };

  static real_T c6_nonZeroKernel[25] = { 0.014418818362460822,
    0.028084023356349175, 0.0350727008055935, 0.028084023356349175,
    0.014418818362460822, 0.028084023356349175, 0.054700208300935887,
    0.068312293270780214, 0.054700208300935887, 0.028084023356349175,
    0.0350727008055935, 0.068312293270780214, 0.085311730190125085,
    0.068312293270780214, 0.0350727008055935, 0.028084023356349175,
    0.054700208300935887, 0.068312293270780214, 0.054700208300935887,
    0.028084023356349175, 0.014418818362460822, 0.028084023356349175,
    0.0350727008055935, 0.028084023356349175, 0.014418818362460822 };

  static int32_T c6_idxA[328] = { 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    120, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
    27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
    46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
    65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101,
    102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
    117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
    132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
    147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 160,
    160 };

  emlrtStack c6_b_st;
  emlrtStack c6_st;
  real_T c6_connDimsT[2];
  real_T c6_outSizeT[2];
  real_T c6_padSizeT[2];
  real_T c6_startT[2];
  real_T c6_b_j;
  real_T c6_c_i;
  int32_T c6_b_i;
  int32_T c6_d_i;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_j;
  boolean_T c6_conn[25];
  boolean_T c6_b_modeFlag;
  boolean_T c6_c_modeFlag;
  boolean_T c6_modeFlag;
  boolean_T c6_tooBig;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_yb_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_b_st.site = &c6_bc_emlrtRSI;
  for (c6_j = 0; c6_j < 164; c6_j++) {
    c6_b_j = (real_T)c6_j + 1.0;
    for (c6_i = 0; c6_i < 124; c6_i++) {
      c6_c_i = (real_T)c6_i + 1.0;
      if ((c6_idxA[(int32_T)c6_c_i - 1] < 1) || (c6_idxA[(int32_T)c6_c_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c6_idxA[(int32_T)c6_c_i - 1], 1, 120,
          &c6_eb_emlrtBCI, &c6_b_st);
      }

      c6_d_i = c6_idxA[(int32_T)c6_b_j + 163];
      if ((c6_d_i < 1) || (c6_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_i, 1, 160, &c6_fb_emlrtBCI, &c6_b_st);
      }

      chartInstance->c6_a[((int32_T)c6_c_i + 124 * ((int32_T)c6_b_j - 1)) - 1] =
        c6_b_varargin_1[(c6_idxA[(int32_T)c6_c_i - 1] + 120 * (c6_d_i - 1)) - 1];
    }
  }

  c6_st.site = &c6_ac_emlrtRSI;
  c6_tooBig = true;
  for (c6_b_i = 0; c6_b_i < 2; c6_b_i++) {
    c6_tooBig = false;
  }

  if (!c6_tooBig) {
    c6_modeFlag = true;
  } else {
    c6_modeFlag = false;
  }

  if (c6_modeFlag) {
    c6_b_modeFlag = true;
  } else {
    c6_b_modeFlag = false;
  }

  c6_c_modeFlag = c6_b_modeFlag;
  if (c6_c_modeFlag) {
    for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
      c6_padSizeT[c6_i2] = 124.0 + 40.0 * (real_T)c6_i2;
    }

    for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
      c6_outSizeT[c6_i4] = 120.0 + 40.0 * (real_T)c6_i4;
    }

    for (c6_i6 = 0; c6_i6 < 2; c6_i6++) {
      c6_connDimsT[c6_i6] = 5.0;
    }

    ippfilter_real32(&chartInstance->c6_a[0], &c6_b[0], &c6_outSizeT[0], 2.0,
                     &c6_padSizeT[0], &c6_kernel[0], &c6_connDimsT[0], false);
  } else {
    for (c6_i1 = 0; c6_i1 < 25; c6_i1++) {
      c6_conn[c6_i1] = true;
    }

    for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
      c6_padSizeT[c6_i3] = 124.0 + 40.0 * (real_T)c6_i3;
    }

    for (c6_i5 = 0; c6_i5 < 2; c6_i5++) {
      c6_outSizeT[c6_i5] = 120.0 + 40.0 * (real_T)c6_i5;
    }

    for (c6_i7 = 0; c6_i7 < 2; c6_i7++) {
      c6_connDimsT[c6_i7] = 5.0;
    }

    for (c6_i8 = 0; c6_i8 < 2; c6_i8++) {
      c6_startT[c6_i8] = 2.0;
    }

    imfilter_real32(&chartInstance->c6_a[0], &c6_b[0], 2.0, &c6_outSizeT[0], 2.0,
                    &c6_padSizeT[0], &c6_nonZeroKernel[0], 25.0, &c6_conn[0],
                    2.0, &c6_connDimsT[0], &c6_startT[0], 2.0, true, false);
  }
}

static void c6_b_imfilter(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_b_varargin_1[19200], real32_T c6_b[19200])
{
  static real_T c6_kernel[9] = { -1.0, -2.0, -1.0, -0.0, -0.0, -0.0, 1.0, 2.0,
    1.0 };

  static real_T c6_nonZeroKernel[6] = { -1.0, -2.0, -1.0, 1.0, 2.0, 1.0 };

  static boolean_T c6_conn[9] = { true, true, true, false, false, false, true,
    true, true };

  emlrtStack c6_st;
  real_T c6_connDimsT[2];
  real_T c6_outSizeT[2];
  real_T c6_padSizeT[2];
  real_T c6_startT[2];
  int32_T c6_b_i;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  boolean_T c6_b_modeFlag;
  boolean_T c6_c_modeFlag;
  boolean_T c6_modeFlag;
  boolean_T c6_tooBig;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_yb_emlrtRSI;
  c6_padImage(chartInstance, &c6_st, c6_b_varargin_1, chartInstance->c6_c_a);
  c6_tooBig = true;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_tooBig = false;
  }

  if (!c6_tooBig) {
    c6_modeFlag = true;
  } else {
    c6_modeFlag = false;
  }

  if (c6_modeFlag) {
    c6_b_modeFlag = true;
  } else {
    c6_b_modeFlag = false;
  }

  c6_c_modeFlag = c6_b_modeFlag;
  if (c6_c_modeFlag) {
    for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
      c6_padSizeT[c6_i1] = 122.0 + 40.0 * (real_T)c6_i1;
    }

    for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
      c6_outSizeT[c6_i3] = 120.0 + 40.0 * (real_T)c6_i3;
    }

    for (c6_i5 = 0; c6_i5 < 2; c6_i5++) {
      c6_connDimsT[c6_i5] = 3.0;
    }

    ippfilter_real32(&chartInstance->c6_c_a[0], &c6_b[0], &c6_outSizeT[0], 2.0,
                     &c6_padSizeT[0], &c6_kernel[0], &c6_connDimsT[0], true);
  } else {
    for (c6_b_i = 0; c6_b_i < 2; c6_b_i++) {
      c6_padSizeT[c6_b_i] = 122.0 + 40.0 * (real_T)c6_b_i;
    }

    for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
      c6_outSizeT[c6_i2] = 120.0 + 40.0 * (real_T)c6_i2;
    }

    for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
      c6_connDimsT[c6_i4] = 3.0;
    }

    for (c6_i6 = 0; c6_i6 < 2; c6_i6++) {
      c6_startT[c6_i6] = 1.0;
    }

    imfilter_real32(&chartInstance->c6_c_a[0], &c6_b[0], 2.0, &c6_outSizeT[0],
                    2.0, &c6_padSizeT[0], &c6_nonZeroKernel[0], 6.0, &c6_conn[0],
                    2.0, &c6_connDimsT[0], &c6_startT[0], 2.0, true, true);
  }
}

static void c6_padImage(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_a_tmp[19200], real32_T c6_d_a[19764])
{
  static int32_T c6_idxA[324] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68,
    69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
    88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150,
    151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 160 };

  emlrtStack c6_st;
  real_T c6_b_i;
  real_T c6_b_j;
  int32_T c6_c_i;
  int32_T c6_i;
  int32_T c6_j;
  (void)chartInstance;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_bc_emlrtRSI;
  for (c6_j = 0; c6_j < 162; c6_j++) {
    c6_b_j = (real_T)c6_j + 1.0;
    for (c6_i = 0; c6_i < 122; c6_i++) {
      c6_b_i = (real_T)c6_i + 1.0;
      if ((c6_idxA[(int32_T)c6_b_i - 1] < 1) || (c6_idxA[(int32_T)c6_b_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c6_idxA[(int32_T)c6_b_i - 1], 1, 120,
          &c6_eb_emlrtBCI, &c6_st);
      }

      c6_c_i = c6_idxA[(int32_T)c6_b_j + 161];
      if ((c6_c_i < 1) || (c6_c_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c6_c_i, 1, 160, &c6_fb_emlrtBCI, &c6_st);
      }

      c6_d_a[((int32_T)c6_b_i + 122 * ((int32_T)c6_b_j - 1)) - 1] = c6_a_tmp
        [(c6_idxA[(int32_T)c6_b_i - 1] + 120 * (c6_c_i - 1)) - 1];
    }
  }
}

static void c6_c_imfilter(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, real32_T c6_b_varargin_1[19200], real32_T c6_b[19200])
{
  static real_T c6_kernel[9] = { -1.0, -0.0, 1.0, -2.0, -0.0, 2.0, -1.0, -0.0,
    1.0 };

  static real_T c6_nonZeroKernel[6] = { -1.0, 1.0, -2.0, 2.0, -1.0, 1.0 };

  static boolean_T c6_conn[9] = { true, false, true, true, false, true, true,
    false, true };

  emlrtStack c6_st;
  real_T c6_connDimsT[2];
  real_T c6_outSizeT[2];
  real_T c6_padSizeT[2];
  real_T c6_startT[2];
  int32_T c6_b_i;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  boolean_T c6_b_modeFlag;
  boolean_T c6_c_modeFlag;
  boolean_T c6_modeFlag;
  boolean_T c6_tooBig;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_yb_emlrtRSI;
  c6_padImage(chartInstance, &c6_st, c6_b_varargin_1, chartInstance->c6_b_a);
  c6_tooBig = true;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_tooBig = false;
  }

  if (!c6_tooBig) {
    c6_modeFlag = true;
  } else {
    c6_modeFlag = false;
  }

  if (c6_modeFlag) {
    c6_b_modeFlag = true;
  } else {
    c6_b_modeFlag = false;
  }

  c6_c_modeFlag = c6_b_modeFlag;
  if (c6_c_modeFlag) {
    for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
      c6_padSizeT[c6_i1] = 122.0 + 40.0 * (real_T)c6_i1;
    }

    for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
      c6_outSizeT[c6_i3] = 120.0 + 40.0 * (real_T)c6_i3;
    }

    for (c6_i5 = 0; c6_i5 < 2; c6_i5++) {
      c6_connDimsT[c6_i5] = 3.0;
    }

    ippfilter_real32(&chartInstance->c6_b_a[0], &c6_b[0], &c6_outSizeT[0], 2.0,
                     &c6_padSizeT[0], &c6_kernel[0], &c6_connDimsT[0], true);
  } else {
    for (c6_b_i = 0; c6_b_i < 2; c6_b_i++) {
      c6_padSizeT[c6_b_i] = 122.0 + 40.0 * (real_T)c6_b_i;
    }

    for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
      c6_outSizeT[c6_i2] = 120.0 + 40.0 * (real_T)c6_i2;
    }

    for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
      c6_connDimsT[c6_i4] = 3.0;
    }

    for (c6_i6 = 0; c6_i6 < 2; c6_i6++) {
      c6_startT[c6_i6] = 1.0;
    }

    imfilter_real32(&chartInstance->c6_b_a[0], &c6_b[0], 2.0, &c6_outSizeT[0],
                    2.0, &c6_padSizeT[0], &c6_nonZeroKernel[0], 6.0, &c6_conn[0],
                    2.0, &c6_connDimsT[0], &c6_startT[0], 2.0, true, true);
  }
}

static real32_T c6_maximum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  real32_T c6_x[19200])
{
  int32_T c6_b_k;
  int32_T c6_first;
  int32_T c6_i;
  int32_T c6_idx;
  int32_T c6_k;
  real32_T c6_b_ex;
  real32_T c6_b_x;
  real32_T c6_c_x;
  real32_T c6_d_x;
  real32_T c6_e_x;
  real32_T c6_ex;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_p;
  boolean_T c6_exitg1;
  boolean_T c6_p;
  (void)chartInstance;
  c6_b_x = c6_x[0];
  c6_c_x = c6_b_x;
  c6_b = muSingleScalarIsNaN(c6_c_x);
  c6_p = !c6_b;
  if (c6_p) {
    c6_idx = 1;
  } else {
    c6_idx = 0;
    c6_k = 2;
    c6_exitg1 = false;
    while ((!c6_exitg1) && (c6_k < 19201)) {
      c6_d_x = c6_x[c6_k - 1];
      c6_e_x = c6_d_x;
      c6_b_b = muSingleScalarIsNaN(c6_e_x);
      c6_b_p = !c6_b_b;
      if (c6_b_p) {
        c6_idx = c6_k;
        c6_exitg1 = true;
      } else {
        c6_k++;
      }
    }
  }

  if (c6_idx == 0) {
    c6_ex = c6_x[0];
  } else {
    c6_first = c6_idx - 1;
    c6_b_ex = c6_x[c6_first];
    c6_i = c6_first;
    for (c6_b_k = c6_i + 1; c6_b_k + 1 < 19201; c6_b_k++) {
      if (c6_b_ex < c6_x[c6_b_k]) {
        c6_b_ex = c6_x[c6_b_k];
      }
    }

    c6_ex = c6_b_ex;
  }

  return c6_ex;
}

static void c6_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers)
{
  c6_emxArray_boolean_T *c6_x;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_real_T *c6_b_centers;
  c6_emxArray_real_T *c6_idx2Keep;
  c6_emxArray_real_T *c6_metric;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b_loop_ub;
  int32_T c6_b_metric;
  int32_T c6_c_centers;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_loop_ub;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_centers->size[0] = 0;
  c6_centers->size[1] = 0;
  c6_st.site = &c6_pc_emlrtRSI;
  c6_chaccum(chartInstance, &c6_st, c6_b_varargin_1,
             chartInstance->c6_e_accumMatrix, chartInstance->c6_e_gradientImg);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idx2Keep, 1, &c6_hb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_b_centers, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_metric, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_x, 2, &c6_gb_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_ii, 1, &c6_kb_emlrtRTEI);
  c6_st.site = &c6_ph_emlrtRSI;
  if (!c6_any(chartInstance, &c6_st, chartInstance->c6_e_accumMatrix)) {
  } else {
    c6_st.site = &c6_qc_emlrtRSI;
    c6_chcenters(chartInstance, &c6_st, chartInstance->c6_e_accumMatrix,
                 c6_b_centers, c6_metric);
    c6_i = c6_centers->size[0] * c6_centers->size[1];
    c6_centers->size[0] = c6_b_centers->size[0];
    c6_centers->size[1] = c6_b_centers->size[1];
    c6_st.site = &c6_qc_emlrtRSI;
    c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i,
      &c6_fb_emlrtRTEI);
    c6_loop_ub = c6_b_centers->size[0] * c6_b_centers->size[1] - 1;
    for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
      c6_centers->data[c6_i1] = c6_b_centers->data[c6_i1];
    }

    c6_b = (c6_b_centers->size[0] == 0);
    c6_b1 = (c6_b_centers->size[1] == 0);
    if (c6_b || c6_b1) {
    } else {
      c6_st.site = &c6_rc_emlrtRSI;
      c6_i2 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_metric->size[0];
      c6_x->size[1] = c6_metric->size[1];
      c6_b_st.site = &c6_rc_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_b_st, c6_x, c6_i2,
        &c6_gb_emlrtRTEI);
      c6_b_loop_ub = c6_metric->size[0] * c6_metric->size[1] - 1;
      for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
        c6_x->data[c6_i3] = (c6_metric->data[c6_i3] >= 0.15000000000000002);
      }

      c6_b_st.site = &c6_ng_emlrtRSI;
      c6_b_eml_find(chartInstance, &c6_b_st, c6_x, c6_ii);
      c6_i4 = c6_idx2Keep->size[0];
      c6_idx2Keep->size[0] = c6_ii->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idx2Keep, c6_i4,
        &c6_hb_emlrtRTEI);
      c6_c_loop_ub = c6_ii->size[0] - 1;
      for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
        c6_idx2Keep->data[c6_i5] = (real_T)c6_ii->data[c6_i5];
      }

      c6_c_centers = c6_b_centers->size[0];
      c6_i6 = c6_b_centers->size[1] - 1;
      c6_i7 = c6_centers->size[0] * c6_centers->size[1];
      c6_centers->size[0] = c6_idx2Keep->size[0];
      c6_centers->size[1] = c6_i6 + 1;
      c6_st.site = &c6_ug_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i7,
        &c6_ib_emlrtRTEI);
      c6_d_loop_ub = c6_i6;
      for (c6_i8 = 0; c6_i8 <= c6_d_loop_ub; c6_i8++) {
        c6_e_loop_ub = c6_idx2Keep->size[0] - 1;
        for (c6_i9 = 0; c6_i9 <= c6_e_loop_ub; c6_i9++) {
          c6_i11 = (int32_T)c6_idx2Keep->data[c6_i9];
          if ((c6_i11 < 1) || (c6_i11 > c6_c_centers)) {
            emlrtDynamicBoundsCheckR2012b(c6_i11, 1, c6_c_centers,
              &c6_gb_emlrtBCI, (void *)c6_sp);
          }

          c6_centers->data[c6_i9 + c6_centers->size[0] * c6_i8] =
            c6_b_centers->data[(c6_i11 + c6_b_centers->size[0] * c6_i8) - 1];
        }
      }

      c6_b_metric = c6_metric->size[0];
      c6_f_loop_ub = c6_idx2Keep->size[0] - 1;
      for (c6_i10 = 0; c6_i10 <= c6_f_loop_ub; c6_i10++) {
        c6_i12 = (int32_T)c6_idx2Keep->data[c6_i10];
        if ((c6_i12 < 1) || (c6_i12 > c6_b_metric)) {
          emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_b_metric, &c6_hb_emlrtBCI,
            (void *)c6_sp);
        }
      }

      c6_b2 = (c6_centers->size[0] == 0);
      c6_b3 = (c6_centers->size[1] == 0);
      if (c6_b2 || c6_b3) {
        c6_centers->size[0] = 0;
        c6_centers->size[1] = 0;
      }
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_ii);
  c6_emxFree_boolean_T(chartInstance, &c6_x);
  c6_emxFree_real_T(chartInstance, &c6_metric);
  c6_emxFree_real_T(chartInstance, &c6_b_centers);
  c6_emxFree_real_T(chartInstance, &c6_idx2Keep);
}

static void c6_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200])
{
  static creal_T c6_Opca[21] = { { -1.0,/* re */
      -1.2246467991473532E-16          /* im */
    }, { -0.91976432487905546,         /* re */
      -0.39247112846650933             /* im */
    }, { -0.70112120594154981,         /* re */
      -0.71304211276688767             /* im */
    }, { -0.38801372604198853,         /* re */
      -0.92165359458042184             /* im */
    }, { -0.031277182985741857,        /* re */
      -0.99951074922907979             /* im */
    }, { 0.31956097170433206,          /* re */
      -0.94756571559094682             /* im */
    }, { 0.62237204711366823,          /* re */
      -0.782721556475572               /* im */
    }, { 0.84618158575942992,          /* re */
      -0.53289466494013293             /* im */
    }, { 0.9727474543212683,           /* re */
      -0.23186718204931919             /* im */
    }, { 0.99634682127722918,          /* re */
      0.085399131908709763             /* im */
    }, { 0.92225842526418544,          /* re */
      0.38657392181732186              /* im */
    }, { 0.7644333415856277,           /* re */
      0.64470277358813266              /* im */
    }, { 0.54279429563297688,          /* re */
      0.83986567534832646              /* im */
    }, { 0.28051836408900921,          /* re */
      0.95984865859614876              /* im */
    }, { 0.0015616833463820395,        /* re */
      0.99999878057181935              /* im */
    }, { -0.27140812232177836,         /* re */
      0.96246435317769907              /* im */
    }, { -0.51858706889020578,         /* re */
      0.85502482535881086              /* im */
    }, { -0.72409768036006006,         /* re */
      0.689697433152524                /* im */
    }, { -0.876567605877222,           /* re */
      0.48127874701328238              /* im */
    }, { -0.96928379220975325,         /* re */
      0.24594497384471956              /* im */
    }, { -1.0,                         /* re */
      1.2246467991473532E-16           /* im */
    } };

  static real_T c6_b_dv[21] = { 94.247779607693786, 97.389372261283583,
    100.53096491487338, 103.67255756846318, 106.81415022205297,
    109.95574287564276, 113.09733552923255, 116.23892818282235,
    119.38052083641213, 122.52211349000193, 125.66370614359172,
    128.80529879718151, 131.94689145077132, 135.0884841043611,
    138.23007675795088, 141.37166941154069, 144.51326206513048,
    147.65485471872029, 150.79644737231007, 153.93804002589985,
    157.07963267948966 };

  c6_emxArray_boolean_T *c6_inside;
  c6_emxArray_creal_T *c6_b_w;
  c6_emxArray_creal_T *c6_w;
  c6_emxArray_creal_T *c6_wkeep;
  c6_emxArray_int32_T *c6_b_xc;
  c6_emxArray_int32_T *c6_b_yc;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_int32_T *c6_jj;
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_xckeep;
  c6_emxArray_int32_T *c6_yckeep;
  c6_emxArray_real32_T *c6_xc;
  c6_emxArray_real32_T *c6_yc;
  c6_emxArray_real_T *c6_Ex;
  c6_emxArray_real_T *c6_Ex_chunk;
  c6_emxArray_real_T *c6_Ey;
  c6_emxArray_real_T *c6_Ey_chunk;
  c6_emxArray_real_T *c6_idxE;
  c6_emxArray_real_T *c6_idxE_chunk;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_varargin_2;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  creal_T c6_w0[21];
  real_T c6_ai;
  real_T c6_ar;
  real_T c6_b_b;
  real_T c6_b_d;
  real_T c6_b_idx;
  real_T c6_b_idx1;
  real_T c6_b_idx2;
  real_T c6_b_k;
  real_T c6_b_varargin_2;
  real_T c6_bi;
  real_T c6_bim;
  real_T c6_br;
  real_T c6_brm;
  real_T c6_c_b;
  real_T c6_c_i;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d_b;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_dim1;
  real_T c6_e_x;
  real_T c6_e_y;
  real_T c6_edgeThresh;
  real_T c6_f_a;
  real_T c6_f_s;
  real_T c6_f_x;
  real_T c6_f_y;
  real_T c6_g_a;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_h_a;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_i_a;
  real_T c6_lenE;
  real_T c6_minval;
  real_T c6_ni;
  real_T c6_nr;
  real_T c6_sgnbi;
  real_T c6_sgnbr;
  real_T c6_sizeChunk;
  int32_T c6_rows_to_keep_size[1];
  int32_T c6_b_i;
  int32_T c6_b_loop_ub;
  int32_T c6_c_idx;
  int32_T c6_c_idx1;
  int32_T c6_c_idx2;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_idx;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i104;
  int32_T c6_i105;
  int32_T c6_i106;
  int32_T c6_i107;
  int32_T c6_i108;
  int32_T c6_i109;
  int32_T c6_i11;
  int32_T c6_i110;
  int32_T c6_i111;
  int32_T c6_i112;
  int32_T c6_i113;
  int32_T c6_i114;
  int32_T c6_i115;
  int32_T c6_i116;
  int32_T c6_i117;
  int32_T c6_i118;
  int32_T c6_i119;
  int32_T c6_i12;
  int32_T c6_i120;
  int32_T c6_i121;
  int32_T c6_i122;
  int32_T c6_i123;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_idx1;
  int32_T c6_idx2;
  int32_T c6_idxEdge;
  int32_T c6_idxkeep;
  int32_T c6_j_b;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_b;
  int32_T c6_k_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_szxc;
  real32_T c6_Gmax;
  real32_T c6_b;
  real32_T c6_b_x;
  real32_T c6_b_y;
  real32_T c6_b_z;
  real32_T c6_c_y;
  real32_T c6_c_z;
  real32_T c6_d_a;
  real32_T c6_e_a;
  real32_T c6_i_b;
  real32_T c6_i_x;
  real32_T c6_i_y;
  real32_T c6_j_x;
  real32_T c6_j_y;
  real32_T c6_k_x;
  real32_T c6_k_y;
  real32_T c6_l_b;
  real32_T c6_l_x;
  real32_T c6_l_y;
  real32_T c6_m_x;
  real32_T c6_m_y;
  real32_T c6_n_x;
  real32_T c6_n_y;
  real32_T c6_o_x;
  real32_T c6_p_x;
  real32_T c6_t;
  real32_T c6_x1;
  real32_T c6_x2;
  real32_T c6_y;
  real32_T c6_z;
  boolean_T c6_rows_to_keep_data[19200];
  boolean_T c6_x[19200];
  boolean_T c6_x_data[19200];
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b5;
  boolean_T c6_c_varargin_1;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_flat;
  boolean_T c6_g_b;
  boolean_T c6_guard1 = false;
  boolean_T c6_guard2 = false;
  boolean_T c6_guard3 = false;
  boolean_T c6_h_b;
  boolean_T c6_m_b;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_c_varargin_1 = c6_b_varargin_1[0];
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_x[c6_i] = ((int32_T)c6_b_varargin_1[c6_i] == (int32_T)c6_c_varargin_1);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_x_data[c6_i1] = c6_x[c6_i1];
  }

  c6_flat = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    if (!c6_x_data[(int32_T)c6_b_k - 1]) {
      c6_flat = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_flat) {
    for (c6_i2 = 0; c6_i2 < 19200; c6_i2++) {
      c6_f_accumMatrix[c6_i2].re = 0.0;
      c6_f_accumMatrix[c6_i2].im = 0.0;
    }

    for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
      c6_f_gradientImg[c6_i4] = 0.0F;
    }
  } else {
    c6_st.site = &c6_sc_emlrtRSI;
    for (c6_i3 = 0; c6_i3 < 19200; c6_i3++) {
      chartInstance->c6_d_s[c6_i3] = (real32_T)c6_b_varargin_1[c6_i3];
    }

    c6_b_st.site = &c6_xb_emlrtRSI;
    c6_imfilter(chartInstance, &c6_b_st, chartInstance->c6_d_s,
                chartInstance->c6_d_A);
    c6_st.site = &c6_tc_emlrtRSI;
    c6_b_st.site = &c6_gc_emlrtRSI;
    c6_b_imfilter(chartInstance, &c6_b_st, chartInstance->c6_d_A,
                  chartInstance->c6_d_Gx);
    c6_b_st.site = &c6_hc_emlrtRSI;
    c6_c_imfilter(chartInstance, &c6_b_st, chartInstance->c6_d_A,
                  chartInstance->c6_d_Gy);
    for (c6_c_k = 0; c6_c_k < 19200; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_x = chartInstance->c6_d_Gx[c6_d_k];
      c6_y = chartInstance->c6_d_Gy[c6_d_k];
      c6_x1 = c6_b_x;
      c6_x2 = c6_y;
      c6_d_a = c6_x1;
      c6_b = c6_x2;
      c6_z = muSingleScalarHypot(c6_d_a, c6_b);
      c6_f_gradientImg[c6_d_k] = c6_z;
    }

    c6_st.site = &c6_uc_emlrtRSI;
    for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
      chartInstance->c6_d_s[c6_i5] = c6_f_gradientImg[c6_i5];
    }

    c6_Gmax = c6_maximum(chartInstance, chartInstance->c6_d_s);
    c6_b_y = c6_Gmax;
    c6_c_y = c6_b_y;
    for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
      chartInstance->c6_d_s[c6_i6] = c6_f_gradientImg[c6_i6] / c6_c_y;
    }

    c6_b_st.site = &c6_yc_emlrtRSI;
    c6_edgeThresh = c6_graythresh(chartInstance, &c6_b_st, chartInstance->c6_d_s);
    c6_e_a = c6_Gmax;
    c6_b_b = c6_edgeThresh;
    c6_t = c6_e_a * (real32_T)c6_b_b;
    c6_b_st.site = &c6_ad_emlrtRSI;
    for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
      c6_x[c6_i7] = (c6_f_gradientImg[c6_i7] > c6_t);
    }

    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ey, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_ii, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_jj, 1, &c6_sc_emlrtRTEI);
    c6_c_st.site = &c6_id_emlrtRSI;
    c6_eml_find(chartInstance, &c6_c_st, c6_x, c6_ii, c6_jj);
    c6_i8 = c6_Ey->size[0];
    c6_Ey->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ey, c6_i8,
      &c6_mb_emlrtRTEI);
    c6_loop_ub = c6_ii->size[0] - 1;
    for (c6_i9 = 0; c6_i9 <= c6_loop_ub; c6_i9++) {
      c6_Ey->data[c6_i9] = (real_T)c6_ii->data[c6_i9];
    }

    c6_emxFree_int32_T(chartInstance, &c6_ii);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ex, 1, &c6_sc_emlrtRTEI);
    c6_i10 = c6_Ex->size[0];
    c6_Ex->size[0] = c6_jj->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ex, c6_i10,
      &c6_nb_emlrtRTEI);
    c6_b_loop_ub = c6_jj->size[0] - 1;
    for (c6_i11 = 0; c6_i11 <= c6_b_loop_ub; c6_i11++) {
      c6_Ex->data[c6_i11] = (real_T)c6_jj->data[c6_i11];
    }

    c6_emxFree_int32_T(chartInstance, &c6_jj);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_ndx, 1, &c6_tc_emlrtRTEI);
    c6_st.site = &c6_vc_emlrtRSI;
    c6_i12 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_Ey->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i12,
      &c6_ob_emlrtRTEI);
    c6_c_loop_ub = c6_Ey->size[0] - 1;
    for (c6_i13 = 0; c6_i13 <= c6_c_loop_ub; c6_i13++) {
      c6_ndx->data[c6_i13] = c6_Ey->data[c6_i13];
    }

    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_varargin_2, 1,
                       &c6_pb_emlrtRTEI);
    c6_i14 = c6_varargin_2->size[0];
    c6_varargin_2->size[0] = c6_Ex->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_varargin_2, c6_i14,
      &c6_pb_emlrtRTEI);
    c6_d_loop_ub = c6_Ex->size[0] - 1;
    for (c6_i15 = 0; c6_i15 <= c6_d_loop_ub; c6_i15++) {
      c6_varargin_2->data[c6_i15] = c6_Ex->data[c6_i15];
    }

    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_r, 1, &c6_uc_emlrtRTEI);
    c6_b_st.site = &c6_od_emlrtRSI;
    c6_eml_sub2ind(chartInstance, &c6_b_st, c6_ndx, c6_varargin_2, c6_r);
    c6_i16 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_r->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i16,
      &c6_qb_emlrtRTEI);
    c6_e_loop_ub = c6_r->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_varargin_2);
    for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
      c6_ndx->data[c6_i17] = (real_T)c6_r->data[c6_i17];
    }

    c6_emxFree_int32_T(chartInstance, &c6_r);
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_idxE, 1, &c6_rb_emlrtRTEI);
    c6_i18 = c6_idxE->size[0];
    c6_idxE->size[0] = c6_ndx->size[0];
    c6_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE, c6_i18,
      &c6_rb_emlrtRTEI);
    c6_f_loop_ub = c6_ndx->size[0] - 1;
    for (c6_i19 = 0; c6_i19 <= c6_f_loop_ub; c6_i19++) {
      c6_idxE->data[c6_i19] = c6_ndx->data[c6_i19];
    }

    c6_emxFree_real_T(chartInstance, &c6_ndx);
    for (c6_i20 = 0; c6_i20 < 21; c6_i20++) {
      c6_ar = c6_Opca[c6_i20].re;
      c6_ai = c6_Opca[c6_i20].im;
      c6_br = c6_b_dv[c6_i20];
      c6_bi = 0.0;
      if (c6_bi == 0.0) {
        if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        } else {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        }
      } else if (c6_br == 0.0) {
        if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        } else {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        }
      } else {
        c6_brm = muDoubleScalarAbs(c6_br);
        c6_bim = muDoubleScalarAbs(c6_bi);
        if (c6_brm > c6_bim) {
          c6_f_s = c6_bi / c6_br;
          c6_d = c6_br + c6_f_s * c6_bi;
          c6_nr = c6_ar + c6_f_s * c6_ai;
          c6_ni = c6_ai - c6_f_s * c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        } else if (c6_bim == c6_brm) {
          if (c6_br > 0.0) {
            c6_sgnbr = 0.5;
          } else {
            c6_sgnbr = -0.5;
          }

          if (c6_bi > 0.0) {
            c6_sgnbi = 0.5;
          } else {
            c6_sgnbi = -0.5;
          }

          c6_nr = c6_ar * c6_sgnbr + c6_ai * c6_sgnbi;
          c6_ni = c6_ai * c6_sgnbr - c6_ar * c6_sgnbi;
          c6_w0[c6_i20].re = c6_nr / c6_brm;
          c6_w0[c6_i20].im = c6_ni / c6_brm;
        } else {
          c6_f_s = c6_br / c6_bi;
          c6_d = c6_bi + c6_f_s * c6_br;
          c6_nr = c6_f_s * c6_ar + c6_ai;
          c6_ni = c6_f_s * c6_ai - c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        }
      }
    }

    c6_lenE = (real_T)c6_Ex->size[0];
    for (c6_i21 = 0; c6_i21 < 19200; c6_i21++) {
      c6_f_accumMatrix[c6_i21].re = 0.0;
      c6_f_accumMatrix[c6_i21].im = 0.0;
    }

    c6_i22 = (int32_T)((c6_lenE + 47618.0) / 47619.0);
    emlrtForLoopVectorCheckR2021a(1.0, 47619.0, c6_lenE, mxDOUBLE_CLASS, c6_i22,
      &c6_cg_emlrtRTEI, (void *)c6_sp);
    c6_b_i = 0;
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ex_chunk, 1, &c6_ic_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ey_chunk, 1, &c6_jc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idxE_chunk, 1, &c6_kc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_xc, 2, &c6_lc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_yc, 2, &c6_mc_emlrtRTEI);
    c6_emxInit_creal_T(chartInstance, c6_sp, &c6_w, 2, &c6_nc_emlrtRTEI);
    c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_inside, 2, &c6_oc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_xckeep, 1, &c6_pc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_yckeep, 1, &c6_qc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_wkeep, 1, &c6_rc_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_yc, 1, &c6_fc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_xc, 1, &c6_gc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_b_w, 1, &c6_hc_emlrtRTEI);
    while (c6_b_i <= c6_i22 - 1) {
      c6_c_i = (real_T)c6_b_i * 47619.0 + 1.0;
      c6_b_varargin_2 = c6_lenE;
      c6_d_y = c6_b_varargin_2;
      c6_e_y = c6_d_y;
      c6_f_y = c6_e_y;
      c6_c_b = c6_f_y;
      c6_g_y = c6_c_b;
      c6_h_y = c6_g_y;
      c6_minval = c6_h_y;
      c6_st.site = &c6_wc_emlrtRSI;
      c6_f_a = c6_c_i;
      c6_b_d = c6_minval;
      c6_b_st.site = &c6_pd_emlrtRSI;
      c6_g_a = c6_f_a;
      c6_d_b = c6_b_d;
      c6_c_x = c6_g_a;
      c6_e_b = muDoubleScalarIsNaN(c6_c_x);
      c6_guard1 = false;
      c6_guard2 = false;
      c6_guard3 = false;
      if (c6_e_b) {
        c6_guard2 = true;
      } else {
        c6_d_x = c6_d_b;
        c6_f_b = muDoubleScalarIsNaN(c6_d_x);
        if (c6_f_b) {
          c6_guard2 = true;
        } else if (c6_d_b < c6_g_a) {
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 0;
        } else {
          c6_e_x = c6_g_a;
          c6_g_b = muDoubleScalarIsInf(c6_e_x);
          if (c6_g_b) {
            c6_guard3 = true;
          } else {
            c6_f_x = c6_d_b;
            c6_h_b = muDoubleScalarIsInf(c6_f_x);
            if (c6_h_b) {
              c6_guard3 = true;
            } else {
              c6_guard1 = true;
            }
          }
        }
      }

      if (c6_guard3) {
        if (c6_g_a == c6_d_b) {
          c6_i23 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i23,
            &c6_sb_emlrtRTEI);
          c6_r1->data[0] = rtNaN;
        } else {
          c6_guard1 = true;
        }
      }

      if (c6_guard2) {
        c6_i24 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = 1;
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i24,
          &c6_sb_emlrtRTEI);
        c6_r1->data[0] = rtNaN;
      }

      if (c6_guard1) {
        c6_g_x = c6_g_a;
        c6_h_x = c6_g_x;
        c6_h_x = muDoubleScalarFloor(c6_h_x);
        if (c6_h_x == c6_g_a) {
          c6_i26 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = (int32_T)(c6_d_b - c6_g_a) + 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i26,
            &c6_sb_emlrtRTEI);
          c6_g_loop_ub = (int32_T)(c6_d_b - c6_g_a);
          for (c6_i28 = 0; c6_i28 <= c6_g_loop_ub; c6_i28++) {
            c6_r1->data[c6_i28] = c6_g_a + (real_T)c6_i28;
          }
        } else {
          c6_c_st.site = &c6_qd_emlrtRSI;
          c6_eml_float_colon(chartInstance, &c6_c_st, c6_g_a, c6_d_b, c6_r1);
        }
      }

      c6_sizeChunk = (real_T)c6_r1->size[1];
      c6_i25 = c6_Ex_chunk->size[0];
      c6_Ex_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_tg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ex_chunk, c6_i25,
        &c6_tb_emlrtRTEI);
      c6_i27 = c6_Ey_chunk->size[0];
      c6_Ey_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_sg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ey_chunk, c6_i27,
        &c6_ub_emlrtRTEI);
      c6_i29 = c6_idxE_chunk->size[0];
      c6_idxE_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_rg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE_chunk, c6_i29,
        &c6_vb_emlrtRTEI);
      c6_idxEdge = (int32_T)c6_c_i;
      c6_i30 = (int32_T)c6_sizeChunk - 1;
      for (c6_idx = 0; c6_idx <= c6_i30; c6_idx++) {
        c6_b_idx = (real_T)c6_idx + 1.0;
        c6_i32 = c6_Ex->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i32)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i32, &c6_ib_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i33 = c6_Ex_chunk->size[0];
        c6_i34 = (int32_T)c6_b_idx;
        if ((c6_i34 < 1) || (c6_i34 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i34, 1, c6_i33, &c6_jb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ex_chunk->data[c6_i34 - 1] = c6_Ex->data[c6_idxEdge - 1];
        c6_i36 = c6_Ey->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i36)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i36, &c6_kb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i38 = c6_Ey_chunk->size[0];
        c6_i39 = (int32_T)c6_b_idx;
        if ((c6_i39 < 1) || (c6_i39 > c6_i38)) {
          emlrtDynamicBoundsCheckR2012b(c6_i39, 1, c6_i38, &c6_lb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ey_chunk->data[c6_i39 - 1] = c6_Ey->data[c6_idxEdge - 1];
        c6_i41 = c6_idxE->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i41)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i41, &c6_mb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i42 = c6_idxE_chunk->size[0];
        c6_i43 = (int32_T)c6_b_idx;
        if ((c6_i43 < 1) || (c6_i43 > c6_i42)) {
          emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i42, &c6_nb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_idxE_chunk->data[c6_i43 - 1] = c6_idxE->data[c6_idxEdge - 1];
        c6_idxEdge++;
      }

      c6_dim1 = (real_T)c6_idxE_chunk->size[0];
      c6_i31 = c6_xc->size[0] * c6_xc->size[1];
      c6_xc->size[0] = (int32_T)c6_dim1;
      c6_xc->size[1] = 21;
      c6_st.site = &c6_mh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_xc, c6_i31,
        &c6_wb_emlrtRTEI);
      c6_i35 = c6_yc->size[0] * c6_yc->size[1];
      c6_yc->size[0] = (int32_T)c6_dim1;
      c6_yc->size[1] = 21;
      c6_st.site = &c6_lh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_yc, c6_i35,
        &c6_xb_emlrtRTEI);
      c6_i37 = c6_w->size[0] * c6_w->size[1];
      c6_w->size[0] = (int32_T)c6_dim1;
      c6_w->size[1] = 21;
      c6_st.site = &c6_nh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T(chartInstance, &c6_st, c6_w, c6_i37,
        &c6_yb_emlrtRTEI);
      c6_i40 = c6_inside->size[0] * c6_inside->size[1];
      c6_inside->size[0] = (int32_T)c6_dim1;
      c6_inside->size[1] = 21;
      c6_st.site = &c6_kh_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_st, c6_inside, c6_i40,
        &c6_ac_emlrtRTEI);
      c6_rows_to_keep_size[0] = (int32_T)c6_dim1;
      c6_h_loop_ub = (int32_T)c6_dim1 - 1;
      for (c6_i44 = 0; c6_i44 <= c6_h_loop_ub; c6_i44++) {
        c6_rows_to_keep_data[c6_i44] = false;
      }

      for (c6_idx2 = 0; c6_idx2 < 21; c6_idx2++) {
        c6_b_idx2 = (real_T)c6_idx2 + 1.0;
        c6_i46 = (int32_T)c6_dim1 - 1;
        for (c6_idx1 = 0; c6_idx1 <= c6_i46; c6_idx1++) {
          c6_b_idx1 = (real_T)c6_idx1 + 1.0;
          c6_i48 = c6_idxE_chunk->size[0];
          c6_i49 = (int32_T)c6_b_idx1;
          if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
            emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_ob_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_x = chartInstance->c6_d_Gx[(int32_T)c6_idxE_chunk->data[c6_i49 -
            1] - 1];
          c6_i51 = c6_idxE_chunk->size[0];
          c6_i52 = (int32_T)c6_b_idx1;
          if ((c6_i52 < 1) || (c6_i52 > c6_i51)) {
            emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i51, &c6_pb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i52 - 1] - 1];
          c6_j_x = c6_i_x;
          c6_j_y = c6_i_y;
          c6_b_z = c6_j_x / c6_j_y;
          c6_h_a = -(15.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_i_b = c6_b_z;
          c6_k_y = (real32_T)c6_h_a * c6_i_b;
          c6_i57 = c6_Ex_chunk->size[0];
          c6_i59 = (int32_T)c6_b_idx1;
          if ((c6_i59 < 1) || (c6_i59 > c6_i57)) {
            emlrtDynamicBoundsCheckR2012b(c6_i59, 1, c6_i57, &c6_qb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_k_x = (real32_T)c6_Ex_chunk->data[c6_i59 - 1] + c6_k_y;
          c6_l_x = c6_k_x;
          c6_l_x = muSingleScalarRound(c6_l_x);
          c6_i63 = c6_xc->size[0];
          c6_i64 = (int32_T)c6_b_idx1;
          if ((c6_i64 < 1) || (c6_i64 > c6_i63)) {
            emlrtDynamicBoundsCheckR2012b(c6_i64, 1, c6_i63, &c6_tb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_xc->data[(c6_i64 + c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_l_x;
          c6_i68 = c6_idxE_chunk->size[0];
          c6_i70 = (int32_T)c6_b_idx1;
          if ((c6_i70 < 1) || (c6_i70 > c6_i68)) {
            emlrtDynamicBoundsCheckR2012b(c6_i70, 1, c6_i68, &c6_ub_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_x = chartInstance->c6_d_Gy[(int32_T)c6_idxE_chunk->data[c6_i70 -
            1] - 1];
          c6_i74 = c6_idxE_chunk->size[0];
          c6_i76 = (int32_T)c6_b_idx1;
          if ((c6_i76 < 1) || (c6_i76 > c6_i74)) {
            emlrtDynamicBoundsCheckR2012b(c6_i76, 1, c6_i74, &c6_xb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_l_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i76 - 1] - 1];
          c6_n_x = c6_m_x;
          c6_m_y = c6_l_y;
          c6_c_z = c6_n_x / c6_m_y;
          c6_i_a = -(15.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_l_b = c6_c_z;
          c6_n_y = (real32_T)c6_i_a * c6_l_b;
          c6_i80 = c6_Ey_chunk->size[0];
          c6_i83 = (int32_T)c6_b_idx1;
          if ((c6_i83 < 1) || (c6_i83 > c6_i80)) {
            emlrtDynamicBoundsCheckR2012b(c6_i83, 1, c6_i80, &c6_dc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_o_x = (real32_T)c6_Ey_chunk->data[c6_i83 - 1] + c6_n_y;
          c6_p_x = c6_o_x;
          c6_p_x = muSingleScalarRound(c6_p_x);
          c6_i88 = c6_yc->size[0];
          c6_i90 = (int32_T)c6_b_idx1;
          if ((c6_i90 < 1) || (c6_i90 > c6_i88)) {
            emlrtDynamicBoundsCheckR2012b(c6_i90, 1, c6_i88, &c6_nc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_yc->data[(c6_i90 + c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_p_x;
          c6_i93 = c6_w->size[0];
          c6_i94 = (int32_T)c6_b_idx1;
          if ((c6_i94 < 1) || (c6_i94 > c6_i93)) {
            emlrtDynamicBoundsCheckR2012b(c6_i94, 1, c6_i93, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i94 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re
            = c6_w0[(int32_T)c6_b_idx2 - 1].re;
          c6_i97 = c6_w->size[0];
          c6_i98 = (int32_T)c6_b_idx1;
          if ((c6_i98 < 1) || (c6_i98 > c6_i97)) {
            emlrtDynamicBoundsCheckR2012b(c6_i98, 1, c6_i97, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i98 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im
            = c6_w0[(int32_T)c6_b_idx2 - 1].im;
          c6_i100 = c6_xc->size[0];
          c6_i102 = (int32_T)c6_b_idx1;
          if ((c6_i102 < 1) || (c6_i102 > c6_i100)) {
            emlrtDynamicBoundsCheckR2012b(c6_i102, 1, c6_i100, &c6_pc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_b = (c6_xc->data[(c6_i102 + c6_xc->size[0] * ((int32_T)c6_b_idx2
                      - 1)) - 1] >= 1.0F);
          c6_i104 = c6_xc->size[0];
          c6_i105 = (int32_T)c6_b_idx1;
          if ((c6_i105 < 1) || (c6_i105 > c6_i104)) {
            emlrtDynamicBoundsCheckR2012b(c6_i105, 1, c6_i104, &c6_qc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b1 = (c6_xc->data[(c6_i105 + c6_xc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 160.0F);
          c6_b2 = (c6_m_b && c6_b1);
          c6_i108 = c6_yc->size[0];
          c6_i109 = (int32_T)c6_b_idx1;
          if ((c6_i109 < 1) || (c6_i109 > c6_i108)) {
            emlrtDynamicBoundsCheckR2012b(c6_i109, 1, c6_i108, &c6_rc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b3 = (c6_yc->data[(c6_i109 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] >= 1.0F);
          c6_b4 = (c6_b2 && c6_b3);
          c6_i112 = c6_yc->size[0];
          c6_i113 = (int32_T)c6_b_idx1;
          if ((c6_i113 < 1) || (c6_i113 > c6_i112)) {
            emlrtDynamicBoundsCheckR2012b(c6_i113, 1, c6_i112, &c6_sc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b5 = (c6_yc->data[(c6_i113 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 120.0F);
          c6_i115 = c6_inside->size[0];
          c6_i117 = (int32_T)c6_b_idx1;
          if ((c6_i117 < 1) || (c6_i117 > c6_i115)) {
            emlrtDynamicBoundsCheckR2012b(c6_i117, 1, c6_i115, &c6_tc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_inside->data[(c6_i117 + c6_inside->size[0] * ((int32_T)c6_b_idx2 -
            1)) - 1] = (c6_b4 && c6_b5);
          c6_i119 = c6_inside->size[0];
          c6_i120 = (int32_T)c6_b_idx1;
          if ((c6_i120 < 1) || (c6_i120 > c6_i119)) {
            emlrtDynamicBoundsCheckR2012b(c6_i120, 1, c6_i119, &c6_uc_emlrtBCI,
              (void *)c6_sp);
          }

          if (c6_inside->data[(c6_i120 + c6_inside->size[0] * ((int32_T)
                c6_b_idx2 - 1)) - 1]) {
            c6_i123 = (int32_T)c6_b_idx1;
            if ((c6_i123 < 1) || (c6_i123 > c6_rows_to_keep_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c6_i123, 1, c6_rows_to_keep_size[0],
                &c6_vc_emlrtBCI, (void *)c6_sp);
            }

            c6_rows_to_keep_data[c6_i123 - 1] = true;
          }
        }
      }

      c6_i45 = c6_xckeep->size[0];
      c6_xckeep->size[0] = c6_xc->size[0] * 21;
      c6_st.site = &c6_ah_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_xckeep, c6_i45,
        &c6_cc_emlrtRTEI);
      c6_i47 = c6_yckeep->size[0];
      c6_yckeep->size[0] = c6_yc->size[0] * 21;
      c6_st.site = &c6_yg_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_yckeep, c6_i47,
        &c6_dc_emlrtRTEI);
      c6_i50 = c6_wkeep->size[0];
      c6_wkeep->size[0] = c6_w->size[0] * 21;
      c6_st.site = &c6_oh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_st, c6_wkeep, c6_i50,
        &c6_ec_emlrtRTEI);
      c6_idxkeep = 0;
      for (c6_c_idx2 = 0; c6_c_idx2 < 21; c6_c_idx2++) {
        c6_b_idx2 = (real_T)c6_c_idx2 + 1.0;
        c6_i54 = (int32_T)c6_dim1 - 1;
        for (c6_c_idx1 = 0; c6_c_idx1 <= c6_i54; c6_c_idx1++) {
          c6_b_idx1 = (real_T)c6_c_idx1 + 1.0;
          c6_i56 = (int32_T)c6_b_idx1;
          if ((c6_i56 < 1) || (c6_i56 > c6_rows_to_keep_size[0])) {
            emlrtDynamicBoundsCheckR2012b(c6_i56, 1, c6_rows_to_keep_size[0],
              &c6_rb_emlrtBCI, (void *)c6_sp);
          }

          if (c6_rows_to_keep_data[c6_i56 - 1]) {
            c6_i60 = c6_inside->size[0];
            c6_i61 = (int32_T)c6_b_idx1;
            if ((c6_i61 < 1) || (c6_i61 > c6_i60)) {
              emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_i60, &c6_sb_emlrtBCI,
                (void *)c6_sp);
            }

            if (c6_inside->data[(c6_i61 + c6_inside->size[0] * ((int32_T)
                  c6_b_idx2 - 1)) - 1]) {
              c6_idxkeep++;
              c6_i66 = c6_xc->size[0];
              c6_i67 = (int32_T)c6_b_idx1;
              if ((c6_i67 < 1) || (c6_i67 > c6_i66)) {
                emlrtDynamicBoundsCheckR2012b(c6_i67, 1, c6_i66, &c6_vb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i69 = c6_xckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i69)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i69,
                  &c6_wb_emlrtBCI, (void *)c6_sp);
              }

              c6_xckeep->data[c6_idxkeep - 1] = (int32_T)c6_xc->data[(c6_i67 +
                c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i73 = c6_yc->size[0];
              c6_i75 = (int32_T)c6_b_idx1;
              if ((c6_i75 < 1) || (c6_i75 > c6_i73)) {
                emlrtDynamicBoundsCheckR2012b(c6_i75, 1, c6_i73, &c6_yb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i77 = c6_yckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i77)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i77,
                  &c6_ac_emlrtBCI, (void *)c6_sp);
              }

              c6_yckeep->data[c6_idxkeep - 1] = (int32_T)c6_yc->data[(c6_i75 +
                c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i78 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i78)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i78,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_i79 = c6_w->size[0];
              c6_i82 = (int32_T)c6_b_idx1;
              if ((c6_i82 < 1) || (c6_i82 > c6_i79)) {
                emlrtDynamicBoundsCheckR2012b(c6_i82, 1, c6_i79, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].re = c6_w->data[(c6_i82 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re;
              c6_i86 = c6_w->size[0];
              c6_i87 = (int32_T)c6_b_idx1;
              if ((c6_i87 < 1) || (c6_i87 > c6_i86)) {
                emlrtDynamicBoundsCheckR2012b(c6_i87, 1, c6_i86, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i91 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i91)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i91,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].im = c6_w->data[(c6_i87 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c6_st.site = &c6_xc_emlrtRSI;
      c6_i53 = c6_b_yc->size[0];
      c6_b_yc->size[0] = c6_yckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_yc, c6_i53,
        &c6_fc_emlrtRTEI);
      c6_i_loop_ub = c6_yckeep->size[0] - 1;
      for (c6_i55 = 0; c6_i55 <= c6_i_loop_ub; c6_i55++) {
        c6_b_yc->data[c6_i55] = c6_yckeep->data[c6_i55];
      }

      c6_i58 = c6_b_xc->size[0];
      c6_b_xc->size[0] = c6_xckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_xc, c6_i58,
        &c6_gc_emlrtRTEI);
      c6_j_loop_ub = c6_xckeep->size[0] - 1;
      for (c6_i62 = 0; c6_i62 <= c6_j_loop_ub; c6_i62++) {
        c6_b_xc->data[c6_i62] = c6_xckeep->data[c6_i62];
      }

      c6_szxc = c6_idxkeep;
      c6_i65 = c6_b_w->size[0];
      c6_b_w->size[0] = c6_wkeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_b_st, c6_b_w, c6_i65,
        &c6_hc_emlrtRTEI);
      c6_k_loop_ub = c6_wkeep->size[0] - 1;
      for (c6_i71 = 0; c6_i71 <= c6_k_loop_ub; c6_i71++) {
        c6_b_w->data[c6_i71] = c6_wkeep->data[c6_i71];
      }

      for (c6_i72 = 0; c6_i72 < 19200; c6_i72++) {
        chartInstance->c6_d_out[c6_i72].re = 0.0;
        chartInstance->c6_d_out[c6_i72].im = 0.0;
      }

      c6_b_st.site = &c6_sd_emlrtRSI;
      c6_j_b = c6_szxc;
      c6_k_b = c6_j_b;
      if (c6_k_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_k_b > 2147483646);
      }

      if (c6_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_c_idx = 1; c6_c_idx - 1 < c6_szxc; c6_c_idx++) {
        c6_d_idx = c6_c_idx;
        c6_i84 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i84)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i84, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i85 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i85 < 1) || (c6_i85 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i85, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i89 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i89)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i89, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i92 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i92 < 1) || (c6_i92 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i92, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        c6_i95 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i95)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i95, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i96 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i96 < 1) || (c6_i96 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i96, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i99 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i99)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i99, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i101 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i101 < 1) || (c6_i101 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i101, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i103 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i103)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i103, &c6_ic_emlrtBCI,
            &c6_st);
        }

        chartInstance->c6_d_out[(c6_i85 + 120 * (c6_i92 - 1)) - 1].re =
          chartInstance->c6_d_out[(c6_i96 + 120 * (c6_i101 - 1)) - 1].re +
          c6_b_w->data[c6_d_idx - 1].re;
        c6_i106 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i106)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i106, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i107 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i107 < 1) || (c6_i107 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i107, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i110 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i110)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i110, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i111 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i111 < 1) || (c6_i111 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i111, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i114 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i114)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i114, &c6_ic_emlrtBCI,
            &c6_st);
        }

        c6_i116 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i116)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i116, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i118 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i118 < 1) || (c6_i118 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i118, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i121 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i121)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i121, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i122 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i122 < 1) || (c6_i122 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i122, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        chartInstance->c6_d_out[(c6_i118 + 120 * (c6_i122 - 1)) - 1].im =
          chartInstance->c6_d_out[(c6_i107 + 120 * (c6_i111 - 1)) - 1].im +
          c6_b_w->data[c6_d_idx - 1].im;
      }

      for (c6_i81 = 0; c6_i81 < 19200; c6_i81++) {
        c6_f_accumMatrix[c6_i81].re += chartInstance->c6_d_out[c6_i81].re;
        c6_f_accumMatrix[c6_i81].im += chartInstance->c6_d_out[c6_i81].im;
      }

      c6_b_i++;
    }

    c6_emxFree_creal_T(chartInstance, &c6_b_w);
    c6_emxFree_int32_T(chartInstance, &c6_b_xc);
    c6_emxFree_int32_T(chartInstance, &c6_b_yc);
    c6_emxFree_real_T(chartInstance, &c6_Ex);
    c6_emxFree_real_T(chartInstance, &c6_Ey);
    c6_emxFree_real_T(chartInstance, &c6_r1);
    c6_emxFree_creal_T(chartInstance, &c6_wkeep);
    c6_emxFree_int32_T(chartInstance, &c6_yckeep);
    c6_emxFree_int32_T(chartInstance, &c6_xckeep);
    c6_emxFree_boolean_T(chartInstance, &c6_inside);
    c6_emxFree_creal_T(chartInstance, &c6_w);
    c6_emxFree_real32_T(chartInstance, &c6_yc);
    c6_emxFree_real32_T(chartInstance, &c6_xc);
    c6_emxFree_real_T(chartInstance, &c6_idxE_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ey_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ex_chunk);
    c6_emxFree_real_T(chartInstance, &c6_idxE);
  }
}

static real_T c6_graythresh(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real32_T c6_I[19200])
{
  static char_T c6_b_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c6_b_cv1[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_counts[256];
  real_T c6_localBins1[256];
  real_T c6_localBins2[256];
  real_T c6_localBins3[256];
  real_T c6_b_idx;
  real_T c6_b_k;
  real_T c6_b_p;
  real_T c6_b_x;
  real_T c6_c_x;
  real_T c6_d_i;
  real_T c6_d_k;
  real_T c6_d_x;
  real_T c6_e_x;
  real_T c6_f_out;
  real_T c6_f_x;
  real_T c6_k_c;
  real_T c6_level;
  real_T c6_maxval;
  real_T c6_mu_t;
  real_T c6_n_a;
  real_T c6_num_elems;
  real_T c6_num_maxval;
  real_T c6_o_a;
  real_T c6_p_a;
  real_T c6_q_a;
  real_T c6_r_a;
  real_T c6_sigma_b_squared;
  real_T c6_x;
  int32_T c6_b_c;
  int32_T c6_b_i;
  int32_T c6_c;
  int32_T c6_c_c;
  int32_T c6_c_i;
  int32_T c6_c_k;
  int32_T c6_d_a;
  int32_T c6_d_c;
  int32_T c6_e_a;
  int32_T c6_e_c;
  int32_T c6_e_k;
  int32_T c6_f_a;
  int32_T c6_f_c;
  int32_T c6_f_k;
  int32_T c6_g_a;
  int32_T c6_g_c;
  int32_T c6_h_a;
  int32_T c6_h_c;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i_a;
  int32_T c6_i_c;
  int32_T c6_idx;
  int32_T c6_idx1;
  int32_T c6_idx2;
  int32_T c6_idx3;
  int32_T c6_idx4;
  int32_T c6_j_a;
  int32_T c6_j_c;
  int32_T c6_k;
  int32_T c6_k_a;
  int32_T c6_l_a;
  int32_T c6_m_a;
  uint8_T c6_b_I[19200];
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b_b;
  boolean_T c6_c_b;
  boolean_T c6_d_b;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_isfinite_maxval;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_st.site = &c6_bd_emlrtRSI;
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    chartInstance->c6_img[c6_i] = c6_I[c6_i];
  }

  c6_b_st.site = &c6_ic_emlrtRSI;
  c6_c_st.site = &c6_jc_emlrtRSI;
  grayto8_real32(&chartInstance->c6_img[0], &c6_b_I[0], 19200.0);
  c6_st.site = &c6_cd_emlrtRSI;
  c6_b_st.site = &c6_lc_emlrtRSI;
  c6_c_st.site = &c6_nc_emlrtRSI;
  c6_f_out = 1.0;
  getnumcores(&c6_f_out);
  c6_c_st.site = &c6_mc_emlrtRSI;
  for (c6_i1 = 0; c6_i1 < 256; c6_i1++) {
    c6_counts[c6_i1] = 0.0;
  }

  for (c6_i2 = 0; c6_i2 < 256; c6_i2++) {
    c6_localBins1[c6_i2] = 0.0;
  }

  for (c6_i3 = 0; c6_i3 < 256; c6_i3++) {
    c6_localBins2[c6_i3] = 0.0;
  }

  for (c6_i4 = 0; c6_i4 < 256; c6_i4++) {
    c6_localBins3[c6_i4] = 0.0;
  }

  for (c6_b_i = 4; c6_b_i <= 19200; c6_b_i += 4) {
    c6_i5 = c6_b_i - 3;
    if ((c6_i5 < 1) || (c6_i5 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c6_i5, 1, 19200, &c6_wc_emlrtBCI, &c6_c_st);
    }

    c6_idx1 = c6_b_I[c6_i5 - 1];
    c6_i6 = c6_b_i - 2;
    if ((c6_i6 < 1) || (c6_i6 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c6_i6, 1, 19200, &c6_xc_emlrtBCI, &c6_c_st);
    }

    c6_idx2 = c6_b_I[c6_i6 - 1];
    c6_i7 = c6_b_i - 1;
    if ((c6_i7 < 1) || (c6_i7 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c6_i7, 1, 19200, &c6_yc_emlrtBCI, &c6_c_st);
    }

    c6_idx3 = c6_b_I[c6_i7 - 1];
    if ((c6_b_i < 1) || (c6_b_i > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c6_b_i, 1, 19200, &c6_ad_emlrtBCI, &c6_c_st);
    }

    c6_idx4 = c6_b_I[c6_b_i - 1];
    c6_f_a = c6_idx1 + 1;
    c6_c_c = c6_f_a - 1;
    c6_g_a = c6_idx1 + 1;
    c6_d_c = c6_g_a - 1;
    c6_localBins1[c6_c_c] = c6_localBins1[c6_d_c] + 1.0;
    c6_h_a = c6_idx2 + 1;
    c6_e_c = c6_h_a - 1;
    c6_i_a = c6_idx2 + 1;
    c6_f_c = c6_i_a - 1;
    c6_localBins2[c6_e_c] = c6_localBins2[c6_f_c] + 1.0;
    c6_j_a = c6_idx3 + 1;
    c6_g_c = c6_j_a - 1;
    c6_k_a = c6_idx3 + 1;
    c6_h_c = c6_k_a - 1;
    c6_localBins3[c6_g_c] = c6_localBins3[c6_h_c] + 1.0;
    c6_l_a = c6_idx4 + 1;
    c6_i_c = c6_l_a - 1;
    c6_m_a = c6_idx4 + 1;
    c6_j_c = c6_m_a - 1;
    c6_counts[c6_i_c] = c6_counts[c6_j_c] + 1.0;
  }

  while (c6_b_i - 3 <= 19200) {
    c6_idx = c6_b_I[c6_b_i - 4];
    c6_d_a = c6_idx + 1;
    c6_c = c6_d_a - 1;
    c6_e_a = c6_idx + 1;
    c6_b_c = c6_e_a - 1;
    c6_counts[c6_c] = c6_counts[c6_b_c] + 1.0;
    c6_b_i++;
  }

  for (c6_c_i = 0; c6_c_i < 256; c6_c_i++) {
    c6_d_i = (real_T)c6_c_i + 1.0;
    c6_counts[(int32_T)c6_d_i - 1] = ((c6_counts[(int32_T)c6_d_i - 1] +
      c6_localBins1[(int32_T)c6_d_i - 1]) + c6_localBins2[(int32_T)c6_d_i - 1])
      + c6_localBins3[(int32_T)c6_d_i - 1];
  }

  c6_st.site = &c6_dd_emlrtRSI;
  c6_b_st.site = &c6_ed_emlrtRSI;
  c6_c_st.site = &c6_n_emlrtRSI;
  c6_p = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 256)) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_x = c6_counts[(int32_T)c6_b_k - 1];
    c6_b_x = c6_x;
    c6_b_b = muDoubleScalarIsInf(c6_b_x);
    c6_b1 = !c6_b_b;
    c6_c_x = c6_x;
    c6_c_b = muDoubleScalarIsNaN(c6_c_x);
    c6_b2 = !c6_c_b;
    c6_d_b = (c6_b1 && c6_b2);
    if (c6_d_b) {
      c6_k++;
    } else {
      c6_p = false;
      c6_exitg1 = true;
    }
  }

  if (c6_p) {
    c6_b = true;
  } else {
    c6_b = false;
  }

  if (!c6_b) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c6_c_st, &c6_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(&c6_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_c_st, NULL, "message", 1U, 2U, 14, c6_b_y, 14, c6_c_y)));
  }

  c6_c_st.site = &c6_n_emlrtRSI;
  c6_num_elems = 0.0;
  for (c6_c_k = 0; c6_c_k < 256; c6_c_k++) {
    c6_d_k = (real_T)c6_c_k + 1.0;
    c6_num_elems += c6_counts[(int32_T)c6_d_k - 1];
  }

  c6_localBins1[0] = c6_counts[0] / c6_num_elems;
  c6_localBins2[0] = c6_localBins1[0];
  for (c6_e_k = 0; c6_e_k < 255; c6_e_k++) {
    c6_d_k = (real_T)c6_e_k + 2.0;
    c6_b_p = c6_counts[(int32_T)c6_d_k - 1] / c6_num_elems;
    c6_localBins1[(int32_T)c6_d_k - 1] = c6_localBins1[(int32_T)(c6_d_k - 1.0) -
      1] + c6_b_p;
    c6_localBins2[(int32_T)c6_d_k - 1] = c6_localBins2[(int32_T)(c6_d_k - 1.0) -
      1] + c6_b_p * c6_d_k;
  }

  c6_mu_t = c6_localBins2[255];
  c6_maxval = rtMinusInf;
  c6_b_idx = 0.0;
  c6_num_maxval = 0.0;
  for (c6_f_k = 0; c6_f_k < 255; c6_f_k++) {
    c6_d_k = (real_T)c6_f_k + 1.0;
    c6_b_st.site = &c6_fd_emlrtRSI;
    c6_n_a = c6_mu_t * c6_localBins1[(int32_T)c6_d_k - 1] - c6_localBins2
      [(int32_T)c6_d_k - 1];
    c6_c_st.site = &c6_gd_emlrtRSI;
    c6_o_a = c6_n_a;
    c6_p_a = c6_o_a;
    c6_q_a = c6_p_a;
    c6_r_a = c6_q_a;
    c6_k_c = c6_r_a * c6_r_a;
    c6_sigma_b_squared = c6_k_c / (c6_localBins1[(int32_T)c6_d_k - 1] * (1.0 -
      c6_localBins1[(int32_T)c6_d_k - 1]));
    if (c6_sigma_b_squared > c6_maxval) {
      c6_maxval = c6_sigma_b_squared;
      c6_b_idx = c6_d_k;
      c6_num_maxval = 1.0;
    } else if (c6_sigma_b_squared == c6_maxval) {
      c6_b_idx += c6_d_k;
      c6_num_maxval++;
    }
  }

  c6_d_x = c6_maxval;
  c6_e_x = c6_d_x;
  c6_e_b = muDoubleScalarIsInf(c6_e_x);
  c6_b3 = !c6_e_b;
  c6_f_x = c6_d_x;
  c6_f_b = muDoubleScalarIsNaN(c6_f_x);
  c6_b4 = !c6_f_b;
  c6_isfinite_maxval = (c6_b3 && c6_b4);
  if (c6_isfinite_maxval) {
    c6_b_idx /= c6_num_maxval;
    c6_level = (c6_b_idx - 1.0) / 255.0;
  } else {
    c6_level = 0.0;
  }

  return c6_level;
}

static void c6_eml_find(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_x[19200], c6_emxArray_int32_T *c6_i,
  c6_emxArray_int32_T *c6_j)
{
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_iv[2];
  int32_T c6_iv1[2];
  int32_T c6_iv2[2];
  int32_T c6_b_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_idx;
  int32_T c6_ii;
  int32_T c6_jj;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_exitg1;
  boolean_T c6_guard1 = false;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_jd_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_idx = 0;
  c6_b_i = c6_i->size[0];
  c6_i->size[0] = 19200;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_i, c6_b_i,
    &c6_vc_emlrtRTEI);
  c6_i1 = c6_j->size[0];
  c6_j->size[0] = 19200;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_j, c6_i1,
    &c6_wc_emlrtRTEI);
  c6_ii = 1;
  c6_jj = 1;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_jj <= 160)) {
    c6_guard1 = false;
    if (c6_x[(c6_ii + 120 * (c6_jj - 1)) - 1]) {
      c6_idx++;
      c6_i->data[c6_idx - 1] = c6_ii;
      c6_j->data[c6_idx - 1] = c6_jj;
      if (c6_idx >= 19200) {
        c6_exitg1 = true;
      } else {
        c6_guard1 = true;
      }
    } else {
      c6_guard1 = true;
    }

    if (c6_guard1) {
      c6_ii++;
      if (c6_ii > 120) {
        c6_ii = 1;
        c6_jj++;
      }
    }
  }

  c6_b = (c6_idx < 1);
  if (c6_b) {
    c6_i2 = 0;
  } else {
    c6_i2 = c6_idx;
  }

  c6_iv[0] = 1;
  c6_iv[1] = c6_i2;
  c6_b_st.site = &c6_md_emlrtRSI;
  c6_indexShapeCheck(chartInstance, &c6_b_st, 19200, c6_iv);
  c6_i3 = c6_i->size[0];
  c6_i->size[0] = c6_i2;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_i, c6_i3,
    &c6_xc_emlrtRTEI);
  c6_b1 = (c6_idx < 1);
  if (c6_b1) {
    c6_i4 = 0;
  } else {
    c6_i4 = c6_idx;
  }

  c6_iv1[0] = 1;
  c6_iv1[1] = c6_i4;
  c6_b_st.site = &c6_ld_emlrtRSI;
  c6_indexShapeCheck(chartInstance, &c6_b_st, 19200, c6_iv1);
  c6_i5 = c6_j->size[0];
  c6_j->size[0] = c6_i4;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_j, c6_i5,
    &c6_yc_emlrtRTEI);
  c6_b2 = (c6_idx < 1);
  if (c6_b2) {
    c6_i6 = 0;
  } else {
    c6_i6 = c6_idx;
  }

  c6_iv2[0] = 1;
  c6_iv2[1] = c6_i6;
  c6_b_st.site = &c6_kd_emlrtRSI;
  c6_indexShapeCheck(chartInstance, &c6_b_st, 19200, c6_iv2);
}

static void c6_indexShapeCheck(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, int32_T c6_matrixSize, int32_T
  c6_indexSize[2])
{
  static char_T c6_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_y = NULL;
  int32_T c6_size1;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_c;
  boolean_T c6_c;
  boolean_T c6_nonSingletonDimFound;
  (void)chartInstance;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_size1 = c6_matrixSize;
  if (c6_size1 != 1) {
    c6_b = false;
  } else {
    c6_b = true;
  }

  if (c6_b) {
    c6_nonSingletonDimFound = false;
    if (c6_indexSize[1] != 1) {
      c6_nonSingletonDimFound = true;
    }

    c6_b_b = c6_nonSingletonDimFound;
    if (c6_b_b) {
      c6_c = true;
    } else {
      c6_c = false;
    }
  } else {
    c6_c = false;
  }

  c6_st.site = &c6_nd_emlrtRSI;
  c6_b_c = c6_c;
  if (c6_b_c) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c6_st, &c6_j_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_b_y)));
  }
}

static boolean_T c6_b_allinrange(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T *c6_x, int32_T c6_hi)
{
  real_T c6_b_k;
  real_T c6_d;
  int32_T c6_exitg1;
  int32_T c6_i;
  int32_T c6_k;
  boolean_T c6_b;
  boolean_T c6_p;
  (void)chartInstance;
  c6_d = (real_T)c6_x->size[0];
  c6_i = (int32_T)c6_d - 1;
  c6_k = 0;
  do {
    c6_exitg1 = 0;
    if (c6_k <= c6_i) {
      c6_b_k = (real_T)c6_k + 1.0;
      if ((c6_x->data[(int32_T)c6_b_k - 1] >= 1.0) && (c6_x->data[(int32_T)
           c6_b_k - 1] <= (real_T)c6_hi)) {
        c6_b = true;
      } else {
        c6_b = false;
      }

      if (!c6_b) {
        c6_p = false;
        c6_exitg1 = 1;
      } else {
        c6_k++;
      }
    } else {
      c6_p = true;
      c6_exitg1 = 1;
    }
  } while (c6_exitg1 == 0);

  return c6_p;
}

static void c6_eml_sub2ind(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_b_varargin_1,
  c6_emxArray_real_T *c6_varargin_2, c6_emxArray_int32_T *c6_idx)
{
  static char_T c6_b_cv1[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't',
    'V', 'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

  static char_T c6_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
    'R', 'a', 'n', 'g', 'e' };

  c6_emxArray_int32_T *c6_b;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_b_varargin_2[2];
  real_T c6_c_varargin_1[2];
  real_T c6_b_k;
  real_T c6_x1;
  real_T c6_x2;
  int32_T c6_b_loop_ub;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_k;
  int32_T c6_loop_ub;
  boolean_T c6_b_p;
  boolean_T c6_c_p;
  boolean_T c6_exitg1;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  if (!c6_b_allinrange(chartInstance, c6_b_varargin_1, 120)) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c6_sp, &c6_k_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_b_y)));
  }

  c6_c_varargin_1[0] = (real_T)c6_b_varargin_1->size[0];
  c6_c_varargin_1[1] = 1.0;
  c6_b_varargin_2[0] = (real_T)c6_varargin_2->size[0];
  c6_b_varargin_2[1] = 1.0;
  c6_p = false;
  c6_b_p = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 2)) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_x1 = c6_c_varargin_1[(int32_T)c6_b_k - 1];
    c6_x2 = c6_b_varargin_2[(int32_T)c6_b_k - 1];
    c6_c_p = (c6_x1 == c6_x2);
    if (!c6_c_p) {
      c6_b_p = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_b_p) {
    c6_p = true;
  }

  if (!c6_p) {
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c6_e_y = NULL;
    sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    sf_mex_call(c6_sp, &c6_l_emlrtMCI, "error", 0U, 2U, 14, c6_c_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_e_y)));
  }

  if (!c6_b_allinrange(chartInstance, c6_varargin_2, 160)) {
    c6_d_y = NULL;
    sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_f_y = NULL;
    sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c6_sp, &c6_k_emlrtMCI, "error", 0U, 2U, 14, c6_d_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_f_y)));
  }

  c6_i = c6_idx->size[0];
  c6_idx->size[0] = c6_b_varargin_1->size[0];
  c6_st.site = &c6_eh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idx, c6_i,
    &c6_ad_emlrtRTEI);
  c6_loop_ub = c6_b_varargin_1->size[0] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_idx->data[c6_i1] = (int32_T)c6_b_varargin_1->data[c6_i1];
  }

  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b, 1, &c6_bd_emlrtRTEI);
  c6_i2 = c6_b->size[0];
  c6_b->size[0] = c6_varargin_2->size[0];
  c6_st.site = &c6_dh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_b, c6_i2,
    &c6_bd_emlrtRTEI);
  c6_b_loop_ub = c6_varargin_2->size[0] - 1;
  for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
    c6_b->data[c6_i3] = (int32_T)c6_varargin_2->data[c6_i3] - 1;
  }

  c6_i4 = c6_b->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_b, c6_i4,
    &c6_cd_emlrtRTEI);
  c6_c_loop_ub = c6_b->size[0] - 1;
  for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
    c6_b->data[c6_i5] *= 120;
  }

  c6_i6 = c6_idx->size[0];
  c6_st.site = &c6_dh_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idx, c6_i6,
    &c6_dd_emlrtRTEI);
  c6_d_loop_ub = c6_idx->size[0] - 1;
  for (c6_i7 = 0; c6_i7 <= c6_d_loop_ub; c6_i7++) {
    c6_idx->data[c6_i7] += c6_b->data[c6_i7];
  }

  c6_emxFree_int32_T(chartInstance, &c6_b);
}

static void c6_eml_float_colon(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_d_a, real_T c6_b,
  c6_emxArray_real_T *c6_y)
{
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  real_T c6_a1;
  real_T c6_apnd;
  real_T c6_b1;
  real_T c6_b_b;
  real_T c6_b_x;
  real_T c6_b_y;
  real_T c6_c;
  real_T c6_c_b;
  real_T c6_c_x;
  real_T c6_c_y;
  real_T c6_cdiff;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_e_a;
  real_T c6_e_x;
  real_T c6_f_a;
  real_T c6_f_x;
  real_T c6_g_x;
  real_T c6_h_x;
  real_T c6_i_x;
  real_T c6_j_x;
  real_T c6_kd;
  real_T c6_ndbl;
  real_T c6_thresh;
  real_T c6_x;
  int32_T c6_b_k;
  int32_T c6_d_b;
  int32_T c6_e_b;
  int32_T c6_e_y;
  int32_T c6_f_b;
  int32_T c6_g_a;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_k;
  int32_T c6_n;
  int32_T c6_nm1;
  int32_T c6_nm1d2;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_e_a = c6_d_a;
  c6_b_b = c6_b;
  c6_a1 = c6_e_a;
  c6_x = (c6_b_b - c6_e_a) + 0.5;
  c6_ndbl = c6_x;
  c6_ndbl = muDoubleScalarFloor(c6_ndbl);
  c6_apnd = c6_e_a + c6_ndbl;
  c6_cdiff = c6_apnd - c6_b_b;
  c6_f_a = c6_e_a;
  c6_c_b = c6_b_b;
  c6_b_x = c6_f_a;
  c6_c_x = c6_b_x;
  c6_d_x = c6_c_x;
  c6_b_y = muDoubleScalarAbs(c6_d_x);
  c6_e_x = c6_c_b;
  c6_f_x = c6_e_x;
  c6_g_x = c6_f_x;
  c6_c_y = muDoubleScalarAbs(c6_g_x);
  c6_c = muDoubleScalarMax(c6_b_y, c6_c_y);
  c6_thresh = 4.4408920985006262E-16 * c6_c;
  c6_h_x = c6_cdiff;
  c6_i_x = c6_h_x;
  c6_j_x = c6_i_x;
  c6_d_y = muDoubleScalarAbs(c6_j_x);
  if (c6_d_y < c6_thresh) {
    c6_ndbl++;
    c6_b1 = c6_b_b;
  } else if (c6_cdiff > 0.0) {
    c6_b1 = c6_e_a + (c6_ndbl - 1.0);
  } else {
    c6_ndbl++;
    c6_b1 = c6_apnd;
  }

  if (c6_ndbl >= 0.0) {
    c6_n = (int32_T)muDoubleScalarFloor(c6_ndbl);
  } else {
    c6_n = 0;
  }

  c6_i = c6_y->size[0] * c6_y->size[1];
  c6_y->size[0] = 1;
  c6_y->size[1] = c6_n;
  c6_st.site = &c6_xg_emlrtRSI;
  c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_y, c6_i,
    &c6_ed_emlrtRTEI);
  if (c6_n > 0) {
    c6_y->data[0] = c6_a1;
    if (c6_n > 1) {
      c6_y->data[c6_n - 1] = c6_b1;
      c6_nm1 = c6_n - 1;
      c6_g_a = c6_nm1;
      c6_nm1d2 = c6_div_nzp_s32(chartInstance, c6_g_a, 2, 0, 1U, 0, 0);
      c6_i1 = c6_nm1d2 - 2;
      c6_st.site = &c6_rd_emlrtRSI;
      c6_d_b = c6_i1 + 1;
      c6_e_b = c6_d_b;
      if (c6_e_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_e_b > 2147483646);
      }

      if (c6_overflow) {
        c6_b_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
      }

      for (c6_k = 1; c6_k - 1 <= c6_i1; c6_k++) {
        c6_b_k = c6_k;
        c6_kd = (real_T)c6_b_k;
        c6_y->data[c6_b_k] = c6_a1 + c6_kd;
        c6_y->data[(c6_n - c6_b_k) - 1] = c6_b1 - c6_kd;
      }

      c6_f_b = c6_nm1d2;
      c6_e_y = c6_f_b << 1;
      if (c6_e_y == c6_nm1) {
        c6_y->data[c6_nm1d2] = (c6_a1 + c6_b1) / 2.0;
      } else {
        c6_kd = (real_T)c6_nm1d2;
        c6_y->data[c6_nm1d2] = c6_a1 + c6_kd;
        c6_y->data[c6_nm1d2 + 1] = c6_b1 - c6_kd;
      }
    }
  }
}

static boolean_T c6_any(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, creal_T c6_x[19200])
{
  static creal_T c6_dc = { 0.0,        /* re */
    0.0                                /* im */
  };

  c6_emxArray_creal_T *c6_b_x;
  creal_T c6_d_x;
  real_T c6_b_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_k;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b_b;
  boolean_T c6_c_x;
  boolean_T c6_exitg1;
  boolean_T c6_y;
  c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_b_x, 1, &c6_lb_emlrtRTEI);
  c6_i = c6_b_x->size[0];
  c6_b_x->size[0] = 19200;
  c6_emxEnsureCapacity_creal_T1(chartInstance, c6_sp, c6_b_x, c6_i,
    &c6_lb_emlrtRTEI);
  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_b_x->data[c6_i1] = c6_x[c6_i1];
  }

  c6_y = false;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_c_x = ((c6_b_x->data[(int32_T)c6_b_k - 1].re == c6_dc.re) &&
              (c6_b_x->data[(int32_T)c6_b_k - 1].im == c6_dc.im));
    if (c6_c_x) {
      c6_b = true;
    } else {
      c6_d_x = c6_b_x->data[(int32_T)c6_b_k - 1];
      c6_b1 = muDoubleScalarIsNaN(c6_d_x.re);
      c6_b2 = muDoubleScalarIsNaN(c6_d_x.im);
      c6_b_b = (c6_b1 || c6_b2);
      if (c6_b_b) {
        c6_b = true;
      } else {
        c6_b = false;
      }
    }

    if (!c6_b) {
      c6_y = true;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  c6_emxFree_creal_T(chartInstance, &c6_b_x);
  return c6_y;
}

static void c6_chcenters(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, creal_T c6_b_varargin_1[19200], c6_emxArray_real_T
  *c6_centers, c6_emxArray_real_T *c6_metric)
{
  static int32_T c6_offsets[25] = { -250, -249, -248, -247, -246, -126, -125,
    -124, -123, -122, -2, -1, 0, 1, 2, 122, 123, 124, 125, 126, 246, 247, 248,
    249, 250 };

  static char_T c6_b_cv[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'r',
    'e', 'g', 'i', 'o', 'n', 'a', 'l', 'm', 'a', 'x', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c6_b_cv3[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm', 'i', 's', 'm', 'a', 't', 'c',
    'h' };

  static char_T c6_b_cv2[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c6_b_cv1[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'I', ',' };

  c6_emxArray_int32_T *c6_iidx;
  c6_emxArray_int32_T *c6_r2;
  c6_emxArray_real_T *c6_b_centers;
  c6_emxArray_real_T *c6_e_x;
  c6_emxArray_real_T *c6_j_x;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_r;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_sortIdx;
  c6_emxArray_real_T *c6_varargin_2;
  c6_emxArray_sOA5t73y81YtFHGIDxk0fK *c6_f_s;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_g_y = NULL;
  const mxArray *c6_h_y = NULL;
  const mxArray *c6_i_y = NULL;
  const mxArray *c6_j_y = NULL;
  creal_T c6_x;
  real_T c6_domainSizeT[2];
  real_T c6_sizeB[2];
  real_T c6_startIdxT[2];
  real_T c6_b;
  real_T c6_b_accumMatrixRe;
  real_T c6_b_idx;
  real_T c6_b_x;
  real_T c6_c_j;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d_a;
  real_T c6_d_i;
  real_T c6_d_k;
  real_T c6_d_x;
  real_T c6_e_a;
  real_T c6_f_a;
  real_T c6_f_k;
  real_T c6_f_x;
  real_T c6_g_a;
  real_T c6_g_x;
  real_T c6_h_a;
  real_T c6_h_k;
  real_T c6_x1;
  real_T c6_x2;
  real_T c6_y;
  int32_T c6_iv[2];
  int32_T c6_iv1[2];
  int32_T c6_tmp_data[2];
  int32_T c6_b_sortIdx[1];
  int32_T c6_b_c;
  int32_T c6_b_i;
  int32_T c6_b_j;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_c;
  int32_T c6_c_c;
  int32_T c6_c_centers;
  int32_T c6_c_i;
  int32_T c6_c_idx;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_c;
  int32_T c6_d_idx;
  int32_T c6_d_j;
  int32_T c6_d_loop_ub;
  int32_T c6_e_i;
  int32_T c6_e_idx;
  int32_T c6_e_j;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_f_i;
  int32_T c6_f_idx;
  int32_T c6_f_j;
  int32_T c6_f_loop_ub;
  int32_T c6_g_b;
  int32_T c6_g_i;
  int32_T c6_g_idx;
  int32_T c6_g_j;
  int32_T c6_g_k;
  int32_T c6_g_loop_ub;
  int32_T c6_h_b;
  int32_T c6_h_i;
  int32_T c6_h_j;
  int32_T c6_h_loop_ub;
  int32_T c6_h_x;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_a;
  int32_T c6_i_loop_ub;
  int32_T c6_i_x;
  int32_T c6_idx;
  int32_T c6_j;
  int32_T c6_j_a;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_l_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_m_loop_ub;
  int32_T c6_n;
  int32_T c6_n_loop_ub;
  int32_T c6_nrows;
  int32_T c6_nrowx;
  int32_T c6_o_loop_ub;
  int32_T c6_p_loop_ub;
  int32_T c6_q_loop_ub;
  boolean_T c6_b_bw[19200];
  boolean_T c6_x_data[19200];
  boolean_T c6_conn[9];
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b_b;
  boolean_T c6_b_p;
  boolean_T c6_c_b;
  boolean_T c6_c_p;
  boolean_T c6_d_b;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_flat;
  boolean_T c6_guard1 = false;
  boolean_T c6_overflow;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_r, 1, &c6_hd_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_hd_emlrtRTEI);
  c6_centers->size[0] = 0;
  c6_centers->size[1] = 0;
  c6_metric->size[0] = 0;
  c6_metric->size[1] = 0;
  for (c6_k = 0; c6_k < 19200; c6_k++) {
    c6_b_k = c6_k;
    c6_x = c6_b_varargin_1[c6_b_k];
    c6_x1 = c6_x.re;
    c6_x2 = c6_x.im;
    c6_d_a = c6_x1;
    c6_b = c6_x2;
    c6_y = muDoubleScalarHypot(c6_d_a, c6_b);
    chartInstance->c6_accumMatrixRe[c6_b_k] = c6_y;
  }

  c6_b_accumMatrixRe = chartInstance->c6_accumMatrixRe[0];
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_b_bw[c6_i] = (chartInstance->c6_accumMatrixRe[c6_i] == c6_b_accumMatrixRe);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_x_data[c6_i1] = c6_b_bw[c6_i1];
  }

  c6_flat = true;
  c6_c_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_c_k < 19200)) {
    c6_d_k = (real_T)c6_c_k + 1.0;
    if (!c6_x_data[(int32_T)c6_d_k - 1]) {
      c6_flat = false;
      c6_exitg1 = true;
    } else {
      c6_c_k++;
    }
  }

  if (!c6_flat) {
    c6_st.site = &c6_xd_emlrtRSI;
    c6_b_st.site = &c6_td_emlrtRSI;
    c6_c_st.site = &c6_ud_emlrtRSI;
    for (c6_j = 0; c6_j < 2; c6_j++) {
      c6_c_j = (real_T)c6_j + 1.0;
      for (c6_b_i = 0; c6_b_i < 124; c6_b_i++) {
        c6_d_i = (real_T)c6_b_i + 1.0;
        chartInstance->c6_Apad[((int32_T)c6_d_i + 124 * ((int32_T)c6_c_j - 1)) -
          1] = 0.0;
      }
    }

    for (c6_b_j = 0; c6_b_j < 2; c6_b_j++) {
      for (c6_c_i = 0; c6_c_i < 124; c6_c_i++) {
        c6_d_i = (real_T)c6_c_i + 1.0;
        chartInstance->c6_Apad[((int32_T)c6_d_i + 124 * (c6_b_j + 162)) - 1] =
          0.0;
      }
    }

    for (c6_d_j = 0; c6_d_j < 160; c6_d_j++) {
      c6_c_j = (real_T)c6_d_j + 1.0;
      for (c6_e_i = 0; c6_e_i < 2; c6_e_i++) {
        c6_d_i = (real_T)c6_e_i + 1.0;
        c6_e_a = c6_c_j;
        c6_c = (int32_T)c6_e_a;
        chartInstance->c6_Apad[((int32_T)c6_d_i + 124 * (c6_c + 1)) - 1] = 0.0;
      }
    }

    for (c6_e_j = 0; c6_e_j < 160; c6_e_j++) {
      c6_c_j = (real_T)c6_e_j + 1.0;
      for (c6_f_i = 0; c6_f_i < 2; c6_f_i++) {
        c6_f_a = c6_c_j;
        c6_b_c = (int32_T)c6_f_a;
        chartInstance->c6_Apad[(c6_f_i + 124 * (c6_b_c + 1)) + 122] = 0.0;
      }
    }

    for (c6_f_j = 0; c6_f_j < 160; c6_f_j++) {
      c6_c_j = (real_T)c6_f_j + 1.0;
      for (c6_g_i = 0; c6_g_i < 120; c6_g_i++) {
        c6_d_i = (real_T)c6_g_i + 1.0;
        c6_g_a = c6_d_i;
        c6_c_c = (int32_T)c6_g_a;
        c6_h_a = c6_c_j;
        c6_d_c = (int32_T)c6_h_a;
        chartInstance->c6_Apad[(c6_c_c + 124 * (c6_d_c + 1)) + 1] =
          chartInstance->c6_accumMatrixRe[((int32_T)c6_d_i + 120 * ((int32_T)
          c6_c_j - 1)) - 1];
      }
    }

    c6_c_st.site = &c6_vd_emlrtRSI;
    c6_d_st.site = &c6_wd_emlrtRSI;
    for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
      c6_domainSizeT[c6_i2] = 5.0;
    }

    for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
      c6_startIdxT[c6_i3] = 2.0;
    }

    for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
      c6_sizeB[c6_i4] = 120.0 + 40.0 * (real_T)c6_i4;
    }

    ordfilt2_real64(&chartInstance->c6_Apad[0], 124.0, &c6_startIdxT[0],
                    &c6_offsets[0], 25.0, &c6_domainSizeT[0], 12.0,
                    &chartInstance->c6_Hd[0], &c6_sizeB[0], true);
    c6_st.site = &c6_yd_emlrtRSI;
    c6_b_st.site = &c6_fe_emlrtRSI;
    for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
      chartInstance->c6_marker[c6_i5] = chartInstance->c6_Hd[c6_i5] - 0.15;
    }

    c6_c_st.site = &c6_ge_emlrtRSI;
    c6_validateattributes(chartInstance, &c6_c_st, chartInstance->c6_marker);
    c6_c_st.site = &c6_he_emlrtRSI;
    c6_validateattributes(chartInstance, &c6_c_st, chartInstance->c6_Hd);
    c6_c_st.site = &c6_ie_emlrtRSI;
    for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
      chartInstance->c6_mask[c6_i6] = chartInstance->c6_Hd[c6_i6];
    }

    for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
      chartInstance->c6_Hd[c6_i7] = chartInstance->c6_marker[c6_i7];
    }

    for (c6_i8 = 0; c6_i8 < 2; c6_i8++) {
      c6_domainSizeT[c6_i8] = 120.0 + 40.0 * (real_T)c6_i8;
    }

    ippreconstruct_real64(&chartInstance->c6_Hd[0], &chartInstance->c6_mask[0],
                          &c6_domainSizeT[0], 2.0);
    c6_st.site = &c6_ae_emlrtRSI;
    c6_b_st.site = &c6_je_emlrtRSI;
    c6_c_st.site = &c6_n_emlrtRSI;
    c6_p = true;
    c6_e_k = 0;
    c6_exitg1 = false;
    while ((!c6_exitg1) && (c6_e_k < 19200)) {
      c6_f_k = (real_T)c6_e_k + 1.0;
      c6_b_x = chartInstance->c6_Hd[(int32_T)c6_f_k - 1];
      c6_c_x = c6_b_x;
      c6_c_b = muDoubleScalarIsNaN(c6_c_x);
      c6_b_p = !c6_c_b;
      if (c6_b_p) {
        c6_e_k++;
      } else {
        c6_p = false;
        c6_exitg1 = true;
      }
    }

    if (c6_p) {
      c6_b_b = true;
    } else {
      c6_b_b = false;
    }

    if (!c6_b_b) {
      c6_b_y = NULL;
      sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1,
        35), false);
      c6_c_y = NULL;
      sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                    false);
      c6_d_y = NULL;
      sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        18), false);
      sf_mex_call(&c6_c_st, &c6_n_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14,
                  sf_mex_call(&c6_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c6_c_st, NULL, "message", 1U, 2U, 14, c6_c_y, 14, c6_d_y)));
    }

    c6_b_st.site = &c6_ke_emlrtRSI;
    for (c6_g_k = 0; c6_g_k < 19200; c6_g_k++) {
      c6_h_k = (real_T)c6_g_k + 1.0;
      c6_d_x = chartInstance->c6_Hd[(int32_T)c6_h_k - 1];
      c6_d_b = muDoubleScalarIsNaN(c6_d_x);
      if (c6_d_b) {
        c6_e_y = NULL;
        sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c6_f_y = NULL;
        sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c6_b_st, &c6_m_emlrtMCI, "error", 0U, 2U, 14, c6_e_y, 14,
                    sf_mex_call(&c6_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_b_st, NULL, "message", 1U, 1U, 14, c6_f_y)));
      }
    }

    c6_b_st.site = &c6_le_emlrtRSI;
    for (c6_i9 = 0; c6_i9 < 9; c6_i9++) {
      c6_conn[c6_i9] = true;
    }

    for (c6_i10 = 0; c6_i10 < 2; c6_i10++) {
      c6_domainSizeT[c6_i10] = 120.0 + 40.0 * (real_T)c6_i10;
    }

    for (c6_i11 = 0; c6_i11 < 2; c6_i11++) {
      c6_startIdxT[c6_i11] = 3.0;
    }

    c6_emxInit_sOA5t73y81YtFHGIDxk0fKF(chartInstance, &c6_b_st, &c6_f_s, 1,
      &c6_ud_emlrtRTEI);
    imregionalmax_real64(&chartInstance->c6_Hd[0], &c6_b_bw[0], 2.0,
                         &c6_domainSizeT[0], &c6_conn[0], 2.0, &c6_startIdxT[0]);
    c6_st.site = &c6_be_emlrtRSI;
    c6_b_regionprops(chartInstance, &c6_st, c6_b_bw,
                     chartInstance->c6_accumMatrixRe, c6_f_s);
    if (c6_f_s->size[0] != 0) {
      c6_i12 = c6_centers->size[0] * c6_centers->size[1];
      c6_centers->size[0] = c6_f_s->size[0];
      c6_centers->size[1] = 2;
      c6_st.site = &c6_wg_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i12,
        &c6_fd_emlrtRTEI);
      c6_d = (real_T)c6_f_s->size[0];
      c6_i13 = (int32_T)c6_d - 1;
      for (c6_idx = 0; c6_idx <= c6_i13; c6_idx++) {
        c6_b_idx = (real_T)c6_idx + 1.0;
        c6_i15 = c6_centers->size[0];
        c6_i16 = (int32_T)c6_b_idx;
        if ((c6_i16 < 1) || (c6_i16 > c6_i15)) {
          emlrtDynamicBoundsCheckR2012b(c6_i16, 1, c6_i15, &c6_bd_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i17 = c6_i16;
        for (c6_i18 = 0; c6_i18 < 2; c6_i18++) {
          c6_tmp_data[c6_i18] = c6_i18;
        }

        for (c6_i20 = 0; c6_i20 < 2; c6_i20++) {
          c6_iv[c6_i20] = 1 + c6_i20;
        }

        for (c6_i22 = 0; c6_i22 < 2; c6_i22++) {
          c6_iv1[c6_i22] = 1 + c6_i22;
        }

        emlrtSubAssignSizeCheckR2012b(&c6_iv[0], 2, &c6_iv1[0], 2, &c6_emlrtECI,
          (void *)c6_sp);
        c6_i25 = c6_i17 - 1;
        for (c6_i26 = 0; c6_i26 < 2; c6_i26++) {
          c6_i28 = c6_f_s->size[0];
          c6_i31 = (int32_T)c6_b_idx;
          if ((c6_i31 < 1) || (c6_i31 > c6_i28)) {
            emlrtDynamicBoundsCheckR2012b(c6_i31, 1, c6_i28, &c6_dd_emlrtBCI,
              (void *)c6_sp);
          }

          c6_centers->data[c6_i25 + c6_centers->size[0] * c6_tmp_data[c6_i26]] =
            c6_f_s->data[c6_i31 - 1].WeightedCentroid[c6_i26];
        }
      }

      c6_d1 = (real_T)c6_centers->size[0];
      c6_i14 = (int32_T)-((-1.0 - c6_d1) + 1.0);
      emlrtForLoopVectorCheckR2021a(c6_d1, -1.0, 1.0, mxDOUBLE_CLASS, c6_i14,
        &c6_dg_emlrtRTEI, (void *)c6_sp);
      c6_c_idx = 0;
      c6_emxInit_real_T(chartInstance, c6_sp, &c6_e_x, 2, &c6_id_emlrtRTEI);
      while (c6_c_idx <= c6_i14 - 1) {
        c6_b_idx = c6_d1 + -(real_T)c6_c_idx;
        c6_i19 = c6_centers->size[0];
        c6_i21 = (int32_T)c6_b_idx;
        if ((c6_i21 < 1) || (c6_i21 > c6_i19)) {
          emlrtDynamicBoundsCheckR2012b(c6_i21, 1, c6_i19, &c6_cd_emlrtBCI,
            (void *)c6_sp);
        }

        c6_f_x = c6_centers->data[c6_i21 - 1];
        c6_e_b = muDoubleScalarIsNaN(c6_f_x);
        c6_guard1 = false;
        if (c6_e_b) {
          c6_guard1 = true;
        } else {
          c6_i27 = c6_centers->size[0];
          c6_i30 = (int32_T)c6_b_idx;
          if ((c6_i30 < 1) || (c6_i30 > c6_i27)) {
            emlrtDynamicBoundsCheckR2012b(c6_i30, 1, c6_i27, &c6_ed_emlrtBCI,
              (void *)c6_sp);
          }

          c6_g_x = c6_centers->data[(c6_i30 + c6_centers->size[0]) - 1];
          c6_f_b = muDoubleScalarIsNaN(c6_g_x);
          if (c6_f_b) {
            c6_guard1 = true;
          }
        }

        if (c6_guard1) {
          c6_st.site = &c6_ce_emlrtRSI;
          c6_i32 = c6_e_x->size[0] * c6_e_x->size[1];
          c6_e_x->size[0] = c6_centers->size[0];
          c6_e_x->size[1] = c6_centers->size[1];
          c6_b_st.site = &c6_ce_emlrtRSI;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_e_x, c6_i32,
            &c6_id_emlrtRTEI);
          c6_c_loop_ub = c6_centers->size[0] * c6_centers->size[1] - 1;
          for (c6_i35 = 0; c6_i35 <= c6_c_loop_ub; c6_i35++) {
            c6_e_x->data[c6_i35] = c6_centers->data[c6_i35];
          }

          c6_d_idx = (int32_T)c6_b_idx;
          c6_b_st.site = &c6_if_emlrtRSI;
          c6_e_idx = c6_d_idx;
          c6_f_idx = c6_e_idx;
          c6_d2 = (real_T)c6_e_x->size[0];
          c6_n = (int32_T)c6_d2;
          c6_c_p = true;
          if (c6_f_idx > c6_n) {
            c6_c_p = false;
          } else {
            c6_h_x = c6_f_idx;
            c6_i_x = c6_h_x;
            if (c6_f_idx != c6_i_x) {
              c6_c_p = false;
            }
          }

          if (!c6_c_p) {
            c6_g_y = NULL;
            sf_mex_assign(&c6_g_y, sf_mex_create("y", c6_b_cv3, 10, 0U, 1U, 0U,
              2, 1, 25), false);
            c6_h_y = NULL;
            sf_mex_assign(&c6_h_y, sf_mex_create("y", c6_b_cv3, 10, 0U, 1U, 0U,
              2, 1, 25), false);
            sf_mex_call(&c6_b_st, &c6_q_emlrtMCI, "error", 0U, 2U, 14, c6_g_y,
                        14, sf_mex_call(&c6_b_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c6_b_st, NULL, "message", 1U, 1U, 14, c6_h_y)));
          }

          c6_b_st.site = &c6_jf_emlrtRSI;
          c6_g_idx = c6_d_idx;
          c6_nrowx = c6_e_x->size[0];
          c6_nrows = c6_nrowx - 1;
          c6_c_st.site = &c6_kf_emlrtRSI;
          for (c6_g_j = 0; c6_g_j < 2; c6_g_j++) {
            c6_h_j = c6_g_j;
            c6_c_st.site = &c6_lf_emlrtRSI;
            c6_i_a = c6_g_idx;
            c6_g_b = c6_nrows;
            c6_j_a = c6_i_a;
            c6_h_b = c6_g_b;
            if (c6_j_a > c6_h_b) {
              c6_overflow = false;
            } else {
              c6_overflow = (c6_h_b > 2147483646);
            }

            if (c6_overflow) {
              c6_d_st.site = &c6_ib_emlrtRSI;
              c6_check_forloop_overflow_error(chartInstance, &c6_d_st);
            }

            for (c6_h_i = c6_g_idx; c6_h_i <= c6_nrows; c6_h_i++) {
              c6_e_x->data[(c6_h_i + c6_e_x->size[0] * c6_h_j) - 1] =
                c6_e_x->data[c6_h_i + c6_e_x->size[0] * c6_h_j];
            }
          }

          if (!(c6_nrows <= c6_nrowx)) {
            c6_i_y = NULL;
            sf_mex_assign(&c6_i_y, sf_mex_create("y", c6_cv3, 10, 0U, 1U, 0U, 2,
              1, 30), false);
            c6_j_y = NULL;
            sf_mex_assign(&c6_j_y, sf_mex_create("y", c6_cv3, 10, 0U, 1U, 0U, 2,
              1, 30), false);
            sf_mex_call(&c6_b_st, &c6_r_emlrtMCI, "error", 0U, 2U, 14, c6_i_y,
                        14, sf_mex_call(&c6_b_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c6_b_st, NULL, "message", 1U, 1U, 14, c6_j_y)));
          }

          c6_b2 = (c6_nrows < 1);
          if (c6_b2) {
            c6_i42 = -1;
          } else {
            c6_i42 = c6_nrows - 1;
          }

          for (c6_i44 = 0; c6_i44 < 2; c6_i44++) {
            c6_g_loop_ub = c6_i42;
            for (c6_i47 = 0; c6_i47 <= c6_g_loop_ub; c6_i47++) {
              c6_e_x->data[c6_i47 + (c6_i42 + 1) * c6_i44] = c6_e_x->data[c6_i47
                + c6_e_x->size[0] * c6_i44];
            }
          }

          c6_i46 = c6_e_x->size[0] * c6_e_x->size[1];
          c6_e_x->size[0] = c6_i42 + 1;
          c6_e_x->size[1] = 2;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_e_x, c6_i46,
            &c6_nd_emlrtRTEI);
          c6_i48 = c6_centers->size[0] * c6_centers->size[1];
          c6_centers->size[0] = c6_e_x->size[0];
          c6_centers->size[1] = 2;
          c6_st.site = &c6_ce_emlrtRSI;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i48,
            &c6_id_emlrtRTEI);
          c6_i_loop_ub = c6_e_x->size[0] * c6_e_x->size[1] - 1;
          for (c6_i52 = 0; c6_i52 <= c6_i_loop_ub; c6_i52++) {
            c6_centers->data[c6_i52] = c6_e_x->data[c6_i52];
          }
        }

        c6_c_idx++;
      }

      c6_emxFree_real_T(chartInstance, &c6_e_x);
      c6_b1 = (c6_centers->size[0] == 0);
      if (!c6_b1) {
        c6_emxInit_real_T1(chartInstance, c6_sp, &c6_ndx, 1, &c6_vd_emlrtRTEI);
        c6_st.site = &c6_de_emlrtRSI;
        c6_i23 = c6_centers->size[0] - 1;
        c6_i24 = c6_r->size[0];
        c6_r->size[0] = c6_i23 + 1;
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_r, c6_i24,
          &c6_hd_emlrtRTEI);
        c6_loop_ub = c6_i23;
        for (c6_i29 = 0; c6_i29 <= c6_loop_ub; c6_i29++) {
          c6_r->data[c6_i29] = c6_centers->data[c6_i29 + c6_centers->size[0]];
        }

        c6_b_st.site = &c6_de_emlrtRSI;
        c6_b_round(chartInstance, &c6_b_st, c6_r);
        c6_i33 = c6_ndx->size[0];
        c6_ndx->size[0] = c6_r->size[0];
        c6_b_st.site = &c6_de_emlrtRSI;
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i33,
          &c6_jd_emlrtRTEI);
        c6_b_loop_ub = c6_r->size[0] - 1;
        for (c6_i34 = 0; c6_i34 <= c6_b_loop_ub; c6_i34++) {
          c6_ndx->data[c6_i34] = c6_r->data[c6_i34];
        }

        c6_i36 = c6_centers->size[0] - 1;
        c6_i37 = c6_r->size[0];
        c6_r->size[0] = c6_i36 + 1;
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_r, c6_i37,
          &c6_hd_emlrtRTEI);
        c6_d_loop_ub = c6_i36;
        for (c6_i38 = 0; c6_i38 <= c6_d_loop_ub; c6_i38++) {
          c6_r->data[c6_i38] = c6_centers->data[c6_i38];
        }

        c6_emxInit_real_T1(chartInstance, &c6_st, &c6_varargin_2, 1,
                           &c6_kd_emlrtRTEI);
        c6_b_st.site = &c6_de_emlrtRSI;
        c6_b_round(chartInstance, &c6_b_st, c6_r);
        c6_i39 = c6_varargin_2->size[0];
        c6_varargin_2->size[0] = c6_r->size[0];
        c6_b_st.site = &c6_de_emlrtRSI;
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_varargin_2,
          c6_i39, &c6_kd_emlrtRTEI);
        c6_e_loop_ub = c6_r->size[0] - 1;
        for (c6_i40 = 0; c6_i40 <= c6_e_loop_ub; c6_i40++) {
          c6_varargin_2->data[c6_i40] = c6_r->data[c6_i40];
        }

        c6_emxInit_int32_T(chartInstance, &c6_st, &c6_r2, 1, &c6_uc_emlrtRTEI);
        c6_b_st.site = &c6_od_emlrtRSI;
        c6_eml_sub2ind(chartInstance, &c6_b_st, c6_ndx, c6_varargin_2, c6_r2);
        c6_i41 = c6_ndx->size[0];
        c6_ndx->size[0] = c6_r2->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i41,
          &c6_qb_emlrtRTEI);
        c6_f_loop_ub = c6_r2->size[0] - 1;
        for (c6_i43 = 0; c6_i43 <= c6_f_loop_ub; c6_i43++) {
          c6_ndx->data[c6_i43] = (real_T)c6_r2->data[c6_i43];
        }

        c6_emxFree_int32_T(chartInstance, &c6_r2);
        c6_i45 = c6_varargin_2->size[0];
        c6_varargin_2->size[0] = c6_ndx->size[0];
        c6_st.site = &c6_de_emlrtRSI;
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_varargin_2, c6_i45,
          &c6_ld_emlrtRTEI);
        c6_h_loop_ub = c6_ndx->size[0] - 1;
        for (c6_i49 = 0; c6_i49 <= c6_h_loop_ub; c6_i49++) {
          c6_i50 = (int32_T)c6_ndx->data[c6_i49];
          if ((c6_i50 < 1) || (c6_i50 > 19200)) {
            emlrtDynamicBoundsCheckR2012b(c6_i50, 1, 19200, &c6_fd_emlrtBCI,
              (void *)c6_sp);
          }

          c6_varargin_2->data[c6_i49] = chartInstance->c6_Hd[c6_i50 - 1];
        }

        c6_emxFree_real_T(chartInstance, &c6_ndx);
        c6_i51 = c6_metric->size[0] * c6_metric->size[1];
        c6_metric->size[0] = c6_varargin_2->size[0];
        c6_metric->size[1] = 1;
        c6_st.site = &c6_de_emlrtRSI;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_metric, c6_i51,
          &c6_md_emlrtRTEI);
        c6_j_loop_ub = c6_varargin_2->size[0] - 1;
        for (c6_i53 = 0; c6_i53 <= c6_j_loop_ub; c6_i53++) {
          c6_metric->data[c6_i53] = c6_varargin_2->data[c6_i53];
        }

        c6_emxFree_real_T(chartInstance, &c6_varargin_2);
        c6_emxInit_real_T(chartInstance, c6_sp, &c6_j_x, 2, &c6_od_emlrtRTEI);
        c6_st.site = &c6_ee_emlrtRSI;
        c6_i54 = c6_j_x->size[0] * c6_j_x->size[1];
        c6_j_x->size[0] = c6_metric->size[0];
        c6_j_x->size[1] = c6_metric->size[1];
        c6_b_st.site = &c6_ee_emlrtRSI;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_j_x, c6_i54,
          &c6_od_emlrtRTEI);
        c6_k_loop_ub = c6_metric->size[0] * c6_metric->size[1] - 1;
        for (c6_i55 = 0; c6_i55 <= c6_k_loop_ub; c6_i55++) {
          c6_j_x->data[c6_i55] = c6_metric->data[c6_i55];
        }

        c6_i56 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = c6_j_x->size[0];
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_r1, c6_i56,
          &c6_hd_emlrtRTEI);
        c6_l_loop_ub = c6_j_x->size[0] * c6_j_x->size[1] - 1;
        for (c6_i57 = 0; c6_i57 <= c6_l_loop_ub; c6_i57++) {
          c6_r1->data[c6_i57] = c6_j_x->data[c6_i57];
        }

        c6_emxInit_int32_T1(chartInstance, &c6_st, &c6_iidx, 2, &c6_hd_emlrtRTEI);
        c6_b_st.site = &c6_of_emlrtRSI;
        c6_b_sort(chartInstance, &c6_b_st, c6_r1, c6_iidx);
        c6_i58 = c6_j_x->size[0] * c6_j_x->size[1];
        c6_j_x->size[0] = c6_r1->size[0];
        c6_j_x->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_j_x, c6_i58,
          &c6_pd_emlrtRTEI);
        c6_m_loop_ub = c6_r1->size[0] * c6_r1->size[1] - 1;
        for (c6_i59 = 0; c6_i59 <= c6_m_loop_ub; c6_i59++) {
          c6_j_x->data[c6_i59] = c6_r1->data[c6_i59];
        }

        c6_emxInit_real_T(chartInstance, &c6_st, &c6_sortIdx, 2,
                          &c6_hd_emlrtRTEI);
        c6_i60 = c6_sortIdx->size[0] * c6_sortIdx->size[1];
        c6_sortIdx->size[0] = c6_iidx->size[0];
        c6_sortIdx->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_sortIdx, c6_i60,
          &c6_qd_emlrtRTEI);
        c6_n_loop_ub = c6_iidx->size[0] * c6_iidx->size[1] - 1;
        for (c6_i61 = 0; c6_i61 <= c6_n_loop_ub; c6_i61++) {
          c6_sortIdx->data[c6_i61] = (real_T)c6_iidx->data[c6_i61];
        }

        c6_emxFree_int32_T(chartInstance, &c6_iidx);
        c6_i62 = c6_metric->size[0] * c6_metric->size[1];
        c6_metric->size[0] = c6_j_x->size[0];
        c6_metric->size[1] = 1;
        c6_st.site = &c6_ee_emlrtRSI;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_metric, c6_i62,
          &c6_rd_emlrtRTEI);
        c6_o_loop_ub = c6_j_x->size[0] * c6_j_x->size[1] - 1;
        for (c6_i63 = 0; c6_i63 <= c6_o_loop_ub; c6_i63++) {
          c6_metric->data[c6_i63] = c6_j_x->data[c6_i63];
        }

        c6_emxFree_real_T(chartInstance, &c6_j_x);
        c6_emxInit_real_T(chartInstance, c6_sp, &c6_b_centers, 2,
                          &c6_sd_emlrtRTEI);
        c6_c_centers = c6_centers->size[0];
        c6_b_sortIdx[0] = c6_sortIdx->size[0];
        c6_i64 = c6_b_centers->size[0] * c6_b_centers->size[1];
        c6_b_centers->size[0] = c6_b_sortIdx[0];
        c6_b_centers->size[1] = 2;
        c6_st.site = &c6_vg_emlrtRSI;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_b_centers, c6_i64,
          &c6_sd_emlrtRTEI);
        for (c6_i65 = 0; c6_i65 < 2; c6_i65++) {
          c6_p_loop_ub = c6_b_sortIdx[0] - 1;
          for (c6_i67 = 0; c6_i67 <= c6_p_loop_ub; c6_i67++) {
            c6_i68 = (int32_T)c6_sortIdx->data[c6_i67];
            if ((c6_i68 < 1) || (c6_i68 > c6_c_centers)) {
              emlrtDynamicBoundsCheckR2012b(c6_i68, 1, c6_c_centers,
                &c6_gd_emlrtBCI, (void *)c6_sp);
            }

            c6_b_centers->data[c6_i67 + c6_b_centers->size[0] * c6_i65] =
              c6_centers->data[(c6_i68 + c6_centers->size[0] * c6_i65) - 1];
          }
        }

        c6_emxFree_real_T(chartInstance, &c6_sortIdx);
        c6_i66 = c6_centers->size[0] * c6_centers->size[1];
        c6_centers->size[0] = c6_b_centers->size[0];
        c6_centers->size[1] = c6_b_centers->size[1];
        c6_st.site = &c6_vg_emlrtRSI;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i66,
          &c6_td_emlrtRTEI);
        c6_q_loop_ub = c6_b_centers->size[0] * c6_b_centers->size[1] - 1;
        for (c6_i69 = 0; c6_i69 <= c6_q_loop_ub; c6_i69++) {
          c6_centers->data[c6_i69] = c6_b_centers->data[c6_i69];
        }

        c6_emxFree_real_T(chartInstance, &c6_b_centers);
      }
    }

    c6_emxFree_sOA5t73y81YtFHGIDxk0fKF(chartInstance, &c6_f_s);
  }

  c6_emxFree_real_T(chartInstance, &c6_r1);
  c6_emxFree_real_T(chartInstance, &c6_r);
}

static void c6_validateattributes(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, real_T c6_d_a[19200])
{
  static char_T c6_b_cv[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'r',
    'e', 'c', 'o', 'n', 's', 't', 'r', 'u', 'c', 't', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c6_b_cv1[5] = { 'i', 'n', 'p', 'u', 't' };

  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_b_k;
  real_T c6_b_x;
  real_T c6_x;
  int32_T c6_k;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_p;
  boolean_T c6_exitg1;
  boolean_T c6_p;
  (void)chartInstance;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_n_emlrtRSI;
  c6_p = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_x = c6_d_a[(int32_T)c6_b_k - 1];
    c6_b_x = c6_x;
    c6_b_b = muDoubleScalarIsNaN(c6_b_x);
    c6_b_p = !c6_b_b;
    if (c6_b_p) {
      c6_k++;
    } else {
      c6_p = false;
      c6_exitg1 = true;
    }
  }

  if (c6_p) {
    c6_b = true;
  } else {
    c6_b = false;
  }

  if (!c6_b) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c6_st, &c6_n_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 2U, 14, c6_b_y, 14, c6_c_y)));
  }
}

static void c6_b_regionprops(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  real_T c6_varargin_2[19200], c6_emxArray_sOA5t73y81YtFHGIDxk0fK *c6_outstats)
{
  static char_T c6_b_cv[31] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'r', 'e', 'g',
    'i', 'o', 'n', 'p', 'r', 'o', 'p', 's', ':', 's', 'i', 'z', 'e', 'M', 'i',
    's', 'm', 'a', 't', 'c', 'h' };

  c6_cell_wrap_6 c6_reshapes[2];
  c6_emxArray_boolean_T *c6_tile;
  c6_emxArray_int32_T *c6_b_regionLengths;
  c6_emxArray_int32_T *c6_idxCount;
  c6_emxArray_int32_T *c6_regionLengths;
  c6_emxArray_int32_T *c6_varargout_4;
  c6_emxArray_real_T *c6_c;
  c6_emxArray_real_T *c6_r;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_r2;
  c6_emxArray_real_T *c6_regionIndices;
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_stats;
  c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed;
  c6_sOA5t73y81YtFHGIDxk0fKF c6_f_s;
  c6_s_vX9LV7M75v5ZNol5H5URkE c6_CC;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_g_y = NULL;
  const mxArray *c6_h_y = NULL;
  const mxArray *c6_i_y = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_imageSize[2];
  real_T c6_M;
  real_T c6_b_idx;
  real_T c6_b_k;
  real_T c6_b_n;
  real_T c6_b_numObjs;
  real_T c6_b_vIdx;
  real_T c6_c_numObjs;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d3;
  real_T c6_d4;
  real_T c6_d5;
  real_T c6_d_k;
  real_T c6_d_numObjs;
  real_T c6_d_varargin_1;
  real_T c6_f_k;
  real_T c6_h_k;
  real_T c6_k_k;
  real_T c6_l_k;
  real_T c6_numObjs;
  real_T c6_sumIntensity;
  real_T c6_x1;
  real_T c6_x2;
  int32_T c6_outsize[2];
  int32_T c6_ab_loop_ub;
  int32_T c6_b_loop_ub;
  int32_T c6_b_stats;
  int32_T c6_bb_loop_ub;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_n;
  int32_T c6_c_stats;
  int32_T c6_cb_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_d_stats;
  int32_T c6_db_loop_ub;
  int32_T c6_dim;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_e_stats;
  int32_T c6_eb_loop_ub;
  int32_T c6_expected;
  int32_T c6_f_loop_ub;
  int32_T c6_f_stats;
  int32_T c6_fb_loop_ub;
  int32_T c6_g_k;
  int32_T c6_g_loop_ub;
  int32_T c6_gb_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_hb_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i104;
  int32_T c6_i105;
  int32_T c6_i106;
  int32_T c6_i107;
  int32_T c6_i108;
  int32_T c6_i109;
  int32_T c6_i11;
  int32_T c6_i110;
  int32_T c6_i111;
  int32_T c6_i112;
  int32_T c6_i113;
  int32_T c6_i114;
  int32_T c6_i115;
  int32_T c6_i116;
  int32_T c6_i117;
  int32_T c6_i118;
  int32_T c6_i119;
  int32_T c6_i12;
  int32_T c6_i120;
  int32_T c6_i121;
  int32_T c6_i122;
  int32_T c6_i123;
  int32_T c6_i124;
  int32_T c6_i125;
  int32_T c6_i126;
  int32_T c6_i127;
  int32_T c6_i128;
  int32_T c6_i129;
  int32_T c6_i13;
  int32_T c6_i130;
  int32_T c6_i131;
  int32_T c6_i132;
  int32_T c6_i133;
  int32_T c6_i134;
  int32_T c6_i135;
  int32_T c6_i136;
  int32_T c6_i137;
  int32_T c6_i138;
  int32_T c6_i139;
  int32_T c6_i14;
  int32_T c6_i140;
  int32_T c6_i141;
  int32_T c6_i142;
  int32_T c6_i143;
  int32_T c6_i144;
  int32_T c6_i145;
  int32_T c6_i146;
  int32_T c6_i147;
  int32_T c6_i148;
  int32_T c6_i149;
  int32_T c6_i15;
  int32_T c6_i150;
  int32_T c6_i151;
  int32_T c6_i152;
  int32_T c6_i153;
  int32_T c6_i154;
  int32_T c6_i155;
  int32_T c6_i156;
  int32_T c6_i157;
  int32_T c6_i158;
  int32_T c6_i159;
  int32_T c6_i16;
  int32_T c6_i160;
  int32_T c6_i161;
  int32_T c6_i162;
  int32_T c6_i163;
  int32_T c6_i164;
  int32_T c6_i165;
  int32_T c6_i166;
  int32_T c6_i167;
  int32_T c6_i168;
  int32_T c6_i169;
  int32_T c6_i17;
  int32_T c6_i170;
  int32_T c6_i171;
  int32_T c6_i172;
  int32_T c6_i173;
  int32_T c6_i174;
  int32_T c6_i175;
  int32_T c6_i176;
  int32_T c6_i177;
  int32_T c6_i178;
  int32_T c6_i179;
  int32_T c6_i18;
  int32_T c6_i180;
  int32_T c6_i181;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_k;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_j_k;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_l_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_m_loop_ub;
  int32_T c6_n;
  int32_T c6_n_loop_ub;
  int32_T c6_o_loop_ub;
  int32_T c6_p_loop_ub;
  int32_T c6_q_loop_ub;
  int32_T c6_r_loop_ub;
  int32_T c6_result;
  int32_T c6_s_loop_ub;
  int32_T c6_t_loop_ub;
  int32_T c6_u_loop_ub;
  int32_T c6_vIdx;
  int32_T c6_v_loop_ub;
  int32_T c6_w_loop_ub;
  int32_T c6_x_loop_ub;
  int32_T c6_y_loop_ub;
  boolean_T c6_c_varargin_1[19200];
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b_p;
  boolean_T c6_c_p;
  boolean_T c6_exitg1;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_emxInitStruct_s_vX9LV7M75v5ZNol(chartInstance, c6_sp, &c6_CC,
    &c6_ne_emlrtRTEI);
  c6_st.site = &c6_me_emlrtRSI;
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_c_varargin_1[c6_i] = c6_b_varargin_1[c6_i];
  }

  c6_bwconncomp(chartInstance, &c6_st, c6_c_varargin_1, &c6_CC);
  for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
    c6_imageSize[c6_i1] = c6_CC.ImageSize[c6_i1];
  }

  c6_numObjs = c6_CC.NumObjects;
  c6_st.site = &c6_i_emlrtRSI;
  c6_b_numObjs = c6_numObjs;
  c6_p = false;
  c6_b_p = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 2)) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_x1 = c6_imageSize[(int32_T)c6_b_k - 1];
    c6_x2 = 120.0 + 40.0 * (real_T)((int32_T)c6_b_k - 1);
    c6_c_p = (c6_x1 == c6_x2);
    if (!c6_c_p) {
      c6_b_p = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_b_p) {
    c6_p = true;
  }

  if (!c6_p) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c6_st, &c6_o_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_b_y)));
  }

  c6_emxInit_boolean_T(chartInstance, &c6_st, &c6_tile, 1, &c6_g_emlrtRTEI);
  c6_b_st.site = &c6_cf_emlrtRSI;
  c6_c_numObjs = c6_b_numObjs;
  c6_c_st.site = &c6_p_emlrtRSI;
  c6_d_varargin_1 = c6_c_numObjs;
  c6_d_st.site = &c6_q_emlrtRSI;
  c6_assertValidSizeArg(chartInstance, &c6_d_st, c6_d_varargin_1);
  c6_i2 = c6_tile->size[0];
  c6_tile->size[0] = (int32_T)c6_d_varargin_1;
  c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_c_st, c6_tile, c6_i2,
    &c6_g_emlrtRTEI);
  c6_loop_ub = (int32_T)c6_d_varargin_1 - 1;
  for (c6_i3 = 0; c6_i3 <= c6_loop_ub; c6_i3++) {
    c6_tile->data[c6_i3] = false;
  }

  c6_outsize[0] = c6_tile->size[0];
  if (!((real_T)c6_outsize[0] == (real_T)c6_tile->size[0])) {
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c6_c_st, &c6_c_emlrtMCI, "error", 0U, 1U, 14, c6_c_y);
  }

  c6_emxFree_boolean_T(chartInstance, &c6_tile);
  for (c6_i4 = 0; c6_i4 < 2; c6_i4++) {
    c6_f_s.WeightedCentroid[c6_i4] = 0.0;
  }

  c6_i5 = c6_outstats->size[0];
  c6_outstats->size[0] = c6_outsize[0];
  c6_emxEnsureCapacity_sOA5t73y81YtF(chartInstance, &c6_c_st, c6_outstats, c6_i5,
    &c6_wd_emlrtRTEI);
  c6_b_loop_ub = c6_outsize[0] - 1;
  for (c6_i6 = 0; c6_i6 <= c6_b_loop_ub; c6_i6++) {
    c6_outstats->data[c6_i6] = c6_f_s;
  }

  c6_emxInit_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c6_c_st, &c6_stats, 1,
    &c6_r_emlrtRTEI);
  c6_st.site = &c6_j_emlrtRSI;
  c6_initializeStatsStruct(chartInstance, &c6_st, c6_numObjs, c6_stats,
    &c6_statsAlreadyComputed);
  c6_st.site = &c6_ne_emlrtRSI;
  c6_d_numObjs = c6_numObjs;
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_regionLengths, 1,
                     &c6_i_emlrtRTEI);
  c6_emxInit_real_T1(chartInstance, &c6_st, &c6_regionIndices, 1,
                     &c6_s_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_idxCount, 1, &c6_o_emlrtRTEI);
  if (c6_d_numObjs != 0.0) {
    c6_i7 = c6_regionIndices->size[0];
    c6_regionIndices->size[0] = c6_CC.RegionIndices->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_regionIndices, c6_i7,
      &c6_xd_emlrtRTEI);
    c6_c_loop_ub = c6_CC.RegionIndices->size[0] - 1;
    for (c6_i8 = 0; c6_i8 <= c6_c_loop_ub; c6_i8++) {
      c6_regionIndices->data[c6_i8] = c6_CC.RegionIndices->data[c6_i8];
    }

    c6_i10 = c6_regionLengths->size[0];
    c6_regionLengths->size[0] = c6_CC.RegionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_regionLengths, c6_i10,
      &c6_yd_emlrtRTEI);
    c6_d_loop_ub = c6_CC.RegionLengths->size[0] - 1;
    for (c6_i11 = 0; c6_i11 <= c6_d_loop_ub; c6_i11++) {
      c6_regionLengths->data[c6_i11] = c6_CC.RegionLengths->data[c6_i11];
    }

    c6_b_st.site = &c6_s_emlrtRSI;
    c6_c_st.site = &c6_jb_emlrtRSI;
    c6_dim = 2;
    if ((real_T)c6_regionLengths->size[0] != 1.0) {
      c6_dim = 1;
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_b_regionLengths, 1,
                       &c6_n_emlrtRTEI);
    c6_i16 = c6_b_regionLengths->size[0];
    c6_b_regionLengths->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_b_regionLengths,
      c6_i16, &c6_n_emlrtRTEI);
    c6_e_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i20 = 0; c6_i20 <= c6_e_loop_ub; c6_i20++) {
      c6_b_regionLengths->data[c6_i20] = c6_regionLengths->data[c6_i20];
    }

    c6_d_st.site = &c6_kb_emlrtRSI;
    c6_b_useConstantDim(chartInstance, &c6_d_st, c6_b_regionLengths, c6_dim,
                        c6_regionLengths);
    c6_i25 = c6_idxCount->size[0];
    c6_idxCount->size[0] = 1 + c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idxCount, c6_i25,
      &c6_p_emlrtRTEI);
    c6_idxCount->data[0] = 0;
    c6_g_loop_ub = c6_regionLengths->size[0] - 1;
    c6_emxFree_int32_T(chartInstance, &c6_b_regionLengths);
    for (c6_i36 = 0; c6_i36 <= c6_g_loop_ub; c6_i36++) {
      c6_idxCount->data[c6_i36 + 1] = c6_regionLengths->data[c6_i36];
    }

    c6_d3 = (real_T)c6_stats->size[0];
    c6_i42 = (int32_T)c6_d3 - 1;
    for (c6_i_k = 0; c6_i_k <= c6_i42; c6_i_k++) {
      c6_k_k = (real_T)c6_i_k + 1.0;
      c6_i55 = c6_idxCount->size[0];
      c6_i57 = (int32_T)c6_k_k;
      if ((c6_i57 < 1) || (c6_i57 > c6_i55)) {
        emlrtDynamicBoundsCheckR2012b(c6_i57, 1, c6_i55, &c6_bb_emlrtBCI, &c6_st);
      }

      c6_i65 = c6_idxCount->data[c6_i57 - 1] + 1;
      c6_i68 = c6_idxCount->size[0];
      c6_i72 = (int32_T)(c6_k_k + 1.0);
      if ((c6_i72 < 1) || (c6_i72 > c6_i68)) {
        emlrtDynamicBoundsCheckR2012b(c6_i72, 1, c6_i68, &c6_cb_emlrtBCI, &c6_st);
      }

      c6_i81 = c6_idxCount->data[c6_i72 - 1];
      c6_b = (c6_i65 > c6_i81);
      if (c6_b) {
        c6_i83 = 0;
        c6_i87 = -1;
      } else {
        c6_i82 = c6_regionIndices->size[0];
        if ((c6_i65 < 1) || (c6_i65 > c6_i82)) {
          emlrtDynamicBoundsCheckR2012b(c6_i65, 1, c6_i82, &c6_p_emlrtBCI,
            &c6_st);
        }

        c6_i83 = c6_i65 - 1;
        c6_i94 = c6_regionIndices->size[0];
        if ((c6_i81 < 1) || (c6_i81 > c6_i94)) {
          emlrtDynamicBoundsCheckR2012b(c6_i81, 1, c6_i94, &c6_o_emlrtBCI,
            &c6_st);
        }

        c6_i87 = c6_i81 - 1;
      }

      c6_e_stats = c6_stats->size[0];
      c6_i95 = (int32_T)c6_k_k;
      if ((c6_i95 < 1) || (c6_i95 > c6_e_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i95, 1, c6_e_stats, &c6_db_emlrtBCI,
          &c6_st);
      }

      c6_i103 = c6_i95 - 1;
      c6_i106 = c6_stats->data[c6_i103].PixelIdxList->size[0];
      c6_stats->data[c6_i103].PixelIdxList->size[0] = (c6_i87 - c6_i83) + 1;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_stats->data[c6_i103]
        .PixelIdxList, c6_i106, &c6_q_emlrtRTEI);
      c6_o_loop_ub = c6_i87 - c6_i83;
      for (c6_i113 = 0; c6_i113 <= c6_o_loop_ub; c6_i113++) {
        c6_i116 = (int32_T)c6_k_k;
        if ((c6_i116 < 1) || (c6_i116 > c6_e_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i116, 1, c6_e_stats, &c6_db_emlrtBCI,
            &c6_st);
        }

        c6_stats->data[c6_i116 - 1].PixelIdxList->data[c6_i113] =
          c6_regionIndices->data[c6_i83 + c6_i113];
      }
    }
  }

  c6_emxFreeStruct_s_vX9LV7M75v5ZNol(chartInstance, &c6_CC);
  c6_st.site = &c6_oe_emlrtRSI;
  c6_b_st.site = &c6_gf_emlrtRSI;
  c6_d = (real_T)c6_stats->size[0];
  c6_i9 = (int32_T)c6_d - 1;
  c6_c_k = 0;
  c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_r, 1, &c6_j_emlrtRTEI);
  c6_emxInitMatrix_cell_wrap_6(chartInstance, &c6_b_st, c6_reshapes,
    &c6_oe_emlrtRTEI);
  c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_c, 1, &c6_pe_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_varargout_4, 1,
                     &c6_j_emlrtRTEI);
  while (c6_c_k <= c6_i9) {
    c6_d_k = (real_T)c6_c_k + 1.0;
    c6_i12 = c6_r->size[0];
    c6_i13 = c6_stats->size[0];
    c6_i14 = (int32_T)c6_d_k;
    if ((c6_i14 < 1) || (c6_i14 > c6_i13)) {
      emlrtDynamicBoundsCheckR2012b(c6_i14, 1, c6_i13, &c6_sd_emlrtBCI, &c6_b_st);
    }

    c6_r->size[0] = c6_stats->data[c6_i14 - 1].PixelIdxList->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_r, c6_i12,
      &c6_ae_emlrtRTEI);
    c6_i17 = c6_stats->size[0];
    c6_i19 = (int32_T)c6_d_k;
    if ((c6_i19 < 1) || (c6_i19 > c6_i17)) {
      emlrtDynamicBoundsCheckR2012b(c6_i19, 1, c6_i17, &c6_sd_emlrtBCI, &c6_b_st);
    }

    c6_f_loop_ub = c6_stats->data[c6_i19 - 1].PixelIdxList->size[0] - 1;
    for (c6_i24 = 0; c6_i24 <= c6_f_loop_ub; c6_i24++) {
      c6_i26 = c6_stats->size[0];
      c6_i29 = (int32_T)c6_d_k;
      if ((c6_i29 < 1) || (c6_i29 > c6_i26)) {
        emlrtDynamicBoundsCheckR2012b(c6_i29, 1, c6_i26, &c6_sd_emlrtBCI,
          &c6_b_st);
      }

      c6_r->data[c6_i24] = c6_stats->data[c6_i29 - 1].PixelIdxList->data[c6_i24];
    }

    if (c6_r->size[0] != 0) {
      c6_c_st.site = &c6_sb_emlrtRSI;
      c6_i32 = c6_regionIndices->size[0];
      c6_i33 = c6_stats->size[0];
      c6_i35 = (int32_T)c6_d_k;
      if ((c6_i35 < 1) || (c6_i35 > c6_i33)) {
        emlrtDynamicBoundsCheckR2012b(c6_i35, 1, c6_i33, &c6_ud_emlrtBCI,
          &c6_c_st);
      }

      c6_regionIndices->size[0] = c6_stats->data[c6_i35 - 1].PixelIdxList->size
        [0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_regionIndices,
        c6_i32, &c6_ce_emlrtRTEI);
      c6_i48 = c6_stats->size[0];
      c6_i50 = (int32_T)c6_d_k;
      if ((c6_i50 < 1) || (c6_i50 > c6_i48)) {
        emlrtDynamicBoundsCheckR2012b(c6_i50, 1, c6_i48, &c6_ud_emlrtBCI,
          &c6_c_st);
      }

      c6_i_loop_ub = c6_stats->data[c6_i50 - 1].PixelIdxList->size[0] - 1;
      for (c6_i60 = 0; c6_i60 <= c6_i_loop_ub; c6_i60++) {
        c6_i64 = c6_stats->size[0];
        c6_i67 = (int32_T)c6_d_k;
        if ((c6_i67 < 1) || (c6_i67 > c6_i64)) {
          emlrtDynamicBoundsCheckR2012b(c6_i67, 1, c6_i64, &c6_ud_emlrtBCI,
            &c6_c_st);
        }

        c6_regionIndices->data[c6_i60] = c6_stats->data[c6_i67 - 1].
          PixelIdxList->data[c6_i60];
      }

      c6_d_st.site = &c6_tb_emlrtRSI;
      c6_i66 = c6_regionLengths->size[0];
      c6_regionLengths->size[0] = c6_regionIndices->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_regionLengths,
        c6_i66, &c6_x_emlrtRTEI);
      c6_k_loop_ub = c6_regionIndices->size[0] - 1;
      for (c6_i80 = 0; c6_i80 <= c6_k_loop_ub; c6_i80++) {
        c6_regionLengths->data[c6_i80] = (int32_T)c6_regionIndices->data[c6_i80];
      }

      if (!c6_allinrange(chartInstance, c6_regionLengths, 19200)) {
        c6_d_y = NULL;
        sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv2, 10, 0U, 1U, 0U, 2, 1,
          36), false);
        c6_e_y = NULL;
        sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv2, 10, 0U, 1U, 0U, 2, 1,
          36), false);
        sf_mex_call(&c6_d_st, &c6_f_emlrtMCI, "error", 0U, 2U, 14, c6_d_y, 14,
                    sf_mex_call(&c6_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_d_st, NULL, "message", 1U, 1U, 14, c6_e_y)));
      }

      c6_i86 = c6_regionLengths->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_regionLengths,
        c6_i86, &c6_y_emlrtRTEI);
      c6_l_loop_ub = c6_regionLengths->size[0] - 1;
      for (c6_i93 = 0; c6_i93 <= c6_l_loop_ub; c6_i93++) {
        c6_regionLengths->data[c6_i93]--;
      }

      c6_i100 = c6_idxCount->size[0];
      c6_idxCount->size[0] = c6_regionLengths->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_idxCount, c6_i100,
        &c6_ab_emlrtRTEI);
      c6_n_loop_ub = c6_regionLengths->size[0] - 1;
      for (c6_i110 = 0; c6_i110 <= c6_n_loop_ub; c6_i110++) {
        c6_idxCount->data[c6_i110] = c6_div_nzp_s32(chartInstance,
          c6_regionLengths->data[c6_i110], 120, 0, 1U, 0, 0);
      }

      c6_i112 = c6_varargout_4->size[0];
      c6_varargout_4->size[0] = c6_idxCount->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_varargout_4,
        c6_i112, &c6_bb_emlrtRTEI);
      c6_q_loop_ub = c6_idxCount->size[0] - 1;
      for (c6_i119 = 0; c6_i119 <= c6_q_loop_ub; c6_i119++) {
        c6_varargout_4->data[c6_i119] = c6_idxCount->data[c6_i119] + 1;
      }

      c6_i122 = c6_idxCount->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_idxCount, c6_i122,
        &c6_cb_emlrtRTEI);
      c6_s_loop_ub = c6_idxCount->size[0] - 1;
      for (c6_i125 = 0; c6_i125 <= c6_s_loop_ub; c6_i125++) {
        c6_idxCount->data[c6_i125] *= 120;
      }

      c6_i129 = c6_regionLengths->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_regionLengths,
        c6_i129, &c6_db_emlrtRTEI);
      c6_u_loop_ub = c6_regionLengths->size[0] - 1;
      for (c6_i134 = 0; c6_i134 <= c6_u_loop_ub; c6_i134++) {
        c6_regionLengths->data[c6_i134] -= c6_idxCount->data[c6_i134];
      }

      c6_i136 = c6_regionLengths->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_d_st, c6_regionLengths,
        c6_i136, &c6_eb_emlrtRTEI);
      c6_w_loop_ub = c6_regionLengths->size[0] - 1;
      for (c6_i140 = 0; c6_i140 <= c6_w_loop_ub; c6_i140++) {
        c6_regionLengths->data[c6_i140]++;
      }

      c6_i142 = c6_regionIndices->size[0];
      c6_regionIndices->size[0] = c6_regionLengths->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_regionIndices,
        c6_i142, &c6_he_emlrtRTEI);
      c6_y_loop_ub = c6_regionLengths->size[0] - 1;
      for (c6_i148 = 0; c6_i148 <= c6_y_loop_ub; c6_i148++) {
        c6_regionIndices->data[c6_i148] = (real_T)c6_regionLengths->data[c6_i148];
      }

      c6_i150 = c6_c->size[0];
      c6_c->size[0] = c6_varargout_4->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_c, c6_i150,
        &c6_he_emlrtRTEI);
      c6_bb_loop_ub = c6_varargout_4->size[0] - 1;
      for (c6_i154 = 0; c6_i154 <= c6_bb_loop_ub; c6_i154++) {
        c6_c->data[c6_i154] = (real_T)c6_varargout_4->data[c6_i154];
      }

      c6_c_st.site = &c6_rb_emlrtRSI;
      c6_d_st.site = &c6_ub_emlrtRSI;
      c6_result = c6_c->size[0];
      c6_outsize[0] = c6_result;
      c6_e_st.site = &c6_vb_emlrtRSI;
      c6_expected = c6_outsize[0];
      if (c6_c->size[0] == c6_expected) {
        c6_b1 = true;
      } else {
        c6_b1 = false;
      }

      if (!c6_b1) {
        c6_f_y = NULL;
        sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c6_g_y = NULL;
        sf_mex_assign(&c6_g_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c6_e_st, &c6_g_emlrtMCI, "error", 0U, 2U, 14, c6_f_y, 14,
                    sf_mex_call(&c6_e_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_e_st, NULL, "message", 1U, 1U, 14, c6_g_y)));
      }

      if (c6_regionIndices->size[0] == c6_expected) {
        c6_b1 = true;
      } else {
        c6_b1 = false;
      }

      if (!c6_b1) {
        c6_h_y = NULL;
        sf_mex_assign(&c6_h_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c6_i_y = NULL;
        sf_mex_assign(&c6_i_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c6_e_st, &c6_g_emlrtMCI, "error", 0U, 2U, 14, c6_h_y, 14,
                    sf_mex_call(&c6_e_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_e_st, NULL, "message", 1U, 1U, 14, c6_i_y)));
      }

      c6_i163 = c6_reshapes[0].f1->size[0];
      c6_reshapes[0].f1->size[0] = c6_c->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_reshapes[0].f1,
        c6_i163, &c6_ke_emlrtRTEI);
      c6_cb_loop_ub = c6_c->size[0] - 1;
      for (c6_i164 = 0; c6_i164 <= c6_cb_loop_ub; c6_i164++) {
        c6_reshapes[0].f1->data[c6_i164] = c6_c->data[c6_i164];
      }

      c6_i165 = c6_reshapes[1].f1->size[0];
      c6_reshapes[1].f1->size[0] = c6_regionIndices->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_reshapes[1].f1,
        c6_i165, &c6_ke_emlrtRTEI);
      c6_db_loop_ub = c6_regionIndices->size[0] - 1;
      for (c6_i166 = 0; c6_i166 <= c6_db_loop_ub; c6_i166++) {
        c6_reshapes[1].f1->data[c6_i166] = c6_regionIndices->data[c6_i166];
      }

      c6_i167 = c6_regionIndices->size[0];
      c6_regionIndices->size[0] = c6_reshapes[0].f1->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_regionIndices,
        c6_i167, &c6_le_emlrtRTEI);
      c6_eb_loop_ub = c6_reshapes[0].f1->size[0] - 1;
      for (c6_i168 = 0; c6_i168 <= c6_eb_loop_ub; c6_i168++) {
        c6_regionIndices->data[c6_i168] = c6_reshapes[0].f1->data[c6_i168];
      }

      c6_i169 = c6_c->size[0];
      c6_c->size[0] = c6_reshapes[1].f1->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_c, c6_i169,
        &c6_le_emlrtRTEI);
      c6_fb_loop_ub = c6_reshapes[1].f1->size[0] - 1;
      for (c6_i170 = 0; c6_i170 <= c6_fb_loop_ub; c6_i170++) {
        c6_c->data[c6_i170] = c6_reshapes[1].f1->data[c6_i170];
      }

      c6_f_stats = c6_stats->size[0];
      c6_i171 = (int32_T)c6_d_k;
      if ((c6_i171 < 1) || (c6_i171 > c6_f_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i171, 1, c6_f_stats, &c6_rd_emlrtBCI,
          &c6_d_st);
      }

      c6_i172 = c6_i171 - 1;
      c6_i173 = c6_stats->data[c6_i172].PixelList->size[0] * c6_stats->
        data[c6_i172].PixelList->size[1];
      c6_stats->data[c6_i172].PixelList->size[0] = c6_regionIndices->size[0];
      c6_i174 = (int32_T)c6_d_k;
      if ((c6_i174 < 1) || (c6_i174 > c6_f_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i174, 1, c6_f_stats, &c6_rd_emlrtBCI,
          &c6_d_st);
      }

      c6_i175 = c6_i174 - 1;
      c6_stats->data[c6_i175].PixelList->size[1] = 2;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_d_st, c6_stats->
        data[c6_i175].PixelList, c6_i173, &c6_me_emlrtRTEI);
      c6_gb_loop_ub = c6_regionIndices->size[0] - 1;
      for (c6_i176 = 0; c6_i176 <= c6_gb_loop_ub; c6_i176++) {
        c6_i177 = (int32_T)c6_d_k;
        if ((c6_i177 < 1) || (c6_i177 > c6_f_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i177, 1, c6_f_stats, &c6_rd_emlrtBCI,
            &c6_d_st);
        }

        c6_i180 = (int32_T)c6_d_k;
        if ((c6_i180 < 1) || (c6_i180 > c6_f_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i180, 1, c6_f_stats, &c6_rd_emlrtBCI,
            &c6_d_st);
        }

        c6_stats->data[c6_i177 - 1].PixelList->data[c6_i176] =
          c6_regionIndices->data[c6_i176];
      }

      c6_hb_loop_ub = c6_c->size[0] - 1;
      for (c6_i178 = 0; c6_i178 <= c6_hb_loop_ub; c6_i178++) {
        c6_i179 = (int32_T)c6_d_k;
        if ((c6_i179 < 1) || (c6_i179 > c6_f_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i179, 1, c6_f_stats, &c6_rd_emlrtBCI,
            &c6_d_st);
        }

        c6_i181 = (int32_T)c6_d_k;
        if ((c6_i181 < 1) || (c6_i181 > c6_f_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i181, 1, c6_f_stats, &c6_rd_emlrtBCI,
            &c6_d_st);
        }

        c6_stats->data[c6_i179 - 1].PixelList->data[c6_i178 + c6_stats->
          data[c6_i181 - 1].PixelList->size[0]] = c6_c->data[c6_i178];
      }
    } else {
      c6_i28 = c6_stats->size[0];
      c6_i31 = (int32_T)c6_d_k;
      if ((c6_i31 < 1) || (c6_i31 > c6_i28)) {
        emlrtDynamicBoundsCheckR2012b(c6_i31, 1, c6_i28, &c6_kd_emlrtBCI,
          &c6_b_st);
      }

      c6_i38 = c6_i31 - 1;
      c6_stats->data[c6_i38].PixelList->size[0] = 0;
      c6_i41 = c6_stats->size[0];
      c6_i44 = (int32_T)c6_d_k;
      if ((c6_i44 < 1) || (c6_i44 > c6_i41)) {
        emlrtDynamicBoundsCheckR2012b(c6_i44, 1, c6_i41, &c6_kd_emlrtBCI,
          &c6_b_st);
      }

      c6_i52 = c6_i44 - 1;
      c6_i54 = c6_stats->data[c6_i52].PixelList->size[0] * c6_stats->data[c6_i52]
        .PixelList->size[1];
      c6_stats->data[c6_i52].PixelList->size[1] = 2;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_stats->
        data[c6_i52].PixelList, c6_i54, &c6_de_emlrtRTEI);
      c6_b_stats = c6_stats->size[0];
      c6_i63 = (int32_T)c6_d_k;
      if ((c6_i63 < 1) || (c6_i63 > c6_b_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i63, 1, c6_b_stats, &c6_kd_emlrtBCI,
          &c6_b_st);
      }

      c6_c_stats = c6_stats->size[0];
      c6_i78 = (int32_T)c6_d_k;
      if ((c6_i78 < 1) || (c6_i78 > c6_c_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i78, 1, c6_c_stats, &c6_kd_emlrtBCI,
          &c6_b_st);
      }
    }

    c6_c_k++;
  }

  c6_emxFreeMatrix_cell_wrap_6(chartInstance, c6_reshapes);
  c6_emxFree_int32_T(chartInstance, &c6_idxCount);
  c6_b_st.site = &c6_ff_emlrtRSI;
  c6_d1 = (real_T)c6_stats->size[0];
  c6_i15 = (int32_T)c6_d1 - 1;
  for (c6_e_k = 0; c6_e_k <= c6_i15; c6_e_k++) {
    c6_f_k = (real_T)c6_e_k + 1.0;
    c6_i18 = c6_r->size[0];
    c6_i21 = c6_stats->size[0];
    c6_i22 = (int32_T)c6_f_k;
    if ((c6_i22 < 1) || (c6_i22 > c6_i21)) {
      emlrtDynamicBoundsCheckR2012b(c6_i22, 1, c6_i21, &c6_td_emlrtBCI, &c6_b_st);
    }

    c6_r->size[0] = c6_stats->data[c6_i22 - 1].PixelIdxList->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_r, c6_i18,
      &c6_be_emlrtRTEI);
    c6_i27 = c6_stats->size[0];
    c6_i30 = (int32_T)c6_f_k;
    if ((c6_i30 < 1) || (c6_i30 > c6_i27)) {
      emlrtDynamicBoundsCheckR2012b(c6_i30, 1, c6_i27, &c6_td_emlrtBCI, &c6_b_st);
    }

    c6_h_loop_ub = c6_stats->data[c6_i30 - 1].PixelIdxList->size[0] - 1;
    for (c6_i40 = 0; c6_i40 <= c6_h_loop_ub; c6_i40++) {
      c6_i43 = c6_stats->size[0];
      c6_i47 = (int32_T)c6_f_k;
      if ((c6_i47 < 1) || (c6_i47 > c6_i43)) {
        emlrtDynamicBoundsCheckR2012b(c6_i47, 1, c6_i43, &c6_td_emlrtBCI,
          &c6_b_st);
      }

      c6_r->data[c6_i40] = c6_stats->data[c6_i47 - 1].PixelIdxList->data[c6_i40];
    }

    c6_imageSize[0] = (real_T)c6_r->size[0];
    c6_i46 = c6_stats->size[0];
    c6_i49 = (int32_T)c6_f_k;
    if ((c6_i49 < 1) || (c6_i49 > c6_i46)) {
      emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i46, &c6_jd_emlrtBCI, &c6_b_st);
    }

    c6_i56 = c6_i49;
    c6_i59 = c6_stats->data[c6_i56 - 1].PixelValues->size[0];
    c6_stats->data[c6_i56 - 1].PixelValues->size[0] = (int32_T)c6_imageSize[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_stats->data[c6_i56 -
      1].PixelValues, c6_i59, &c6_fe_emlrtRTEI);
    c6_c_st.site = &c6_hf_emlrtRSI;
    c6_i71 = c6_regionIndices->size[0];
    c6_i75 = c6_stats->size[0];
    c6_i77 = (int32_T)c6_f_k;
    if ((c6_i77 < 1) || (c6_i77 > c6_i75)) {
      emlrtDynamicBoundsCheckR2012b(c6_i77, 1, c6_i75, &c6_xd_emlrtBCI, &c6_c_st);
    }

    c6_regionIndices->size[0] = c6_stats->data[c6_i77 - 1].PixelIdxList->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_regionIndices,
      c6_i71, &c6_ge_emlrtRTEI);
    c6_i85 = c6_stats->size[0];
    c6_i89 = (int32_T)c6_f_k;
    if ((c6_i89 < 1) || (c6_i89 > c6_i85)) {
      emlrtDynamicBoundsCheckR2012b(c6_i89, 1, c6_i85, &c6_xd_emlrtBCI, &c6_c_st);
    }

    c6_m_loop_ub = c6_stats->data[c6_i89 - 1].PixelIdxList->size[0] - 1;
    for (c6_i99 = 0; c6_i99 <= c6_m_loop_ub; c6_i99++) {
      c6_i105 = c6_stats->size[0];
      c6_i107 = (int32_T)c6_f_k;
      if ((c6_i107 < 1) || (c6_i107 > c6_i105)) {
        emlrtDynamicBoundsCheckR2012b(c6_i107, 1, c6_i105, &c6_xd_emlrtBCI,
          &c6_c_st);
      }

      c6_regionIndices->data[c6_i99] = c6_stats->data[c6_i107 - 1].
        PixelIdxList->data[c6_i99];
    }

    c6_d_st.site = &c6_tb_emlrtRSI;
    c6_ind2sub_indexClass(chartInstance, &c6_d_st, c6_regionIndices,
                          c6_regionLengths, c6_varargout_4);
    c6_i109 = c6_regionIndices->size[0];
    c6_regionIndices->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_regionIndices,
      c6_i109, &c6_he_emlrtRTEI);
    c6_p_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i115 = 0; c6_i115 <= c6_p_loop_ub; c6_i115++) {
      c6_regionIndices->data[c6_i115] = (real_T)c6_regionLengths->data[c6_i115];
    }

    c6_i118 = c6_c->size[0];
    c6_c->size[0] = c6_varargout_4->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_c, c6_i118,
      &c6_he_emlrtRTEI);
    c6_r_loop_ub = c6_varargout_4->size[0] - 1;
    for (c6_i123 = 0; c6_i123 <= c6_r_loop_ub; c6_i123++) {
      c6_c->data[c6_i123] = (real_T)c6_varargout_4->data[c6_i123];
    }

    c6_i126 = c6_r->size[0];
    c6_i128 = c6_stats->size[0];
    c6_i130 = (int32_T)c6_f_k;
    if ((c6_i130 < 1) || (c6_i130 > c6_i128)) {
      emlrtDynamicBoundsCheckR2012b(c6_i130, 1, c6_i128, &c6_yd_emlrtBCI,
        &c6_b_st);
    }

    c6_r->size[0] = c6_stats->data[c6_i130 - 1].PixelValues->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_r, c6_i126,
      &c6_je_emlrtRTEI);
    c6_i137 = c6_stats->size[0];
    c6_i138 = (int32_T)c6_f_k;
    if ((c6_i138 < 1) || (c6_i138 > c6_i137)) {
      emlrtDynamicBoundsCheckR2012b(c6_i138, 1, c6_i137, &c6_yd_emlrtBCI,
        &c6_b_st);
    }

    c6_x_loop_ub = c6_stats->data[c6_i138 - 1].PixelValues->size[0] - 1;
    for (c6_i144 = 0; c6_i144 <= c6_x_loop_ub; c6_i144++) {
      c6_i145 = c6_stats->size[0];
      c6_i147 = (int32_T)c6_f_k;
      if ((c6_i147 < 1) || (c6_i147 > c6_i145)) {
        emlrtDynamicBoundsCheckR2012b(c6_i147, 1, c6_i145, &c6_yd_emlrtBCI,
          &c6_b_st);
      }

      c6_r->data[c6_i144] = c6_stats->data[c6_i147 - 1].PixelValues->
        data[c6_i144];
    }

    c6_d5 = (real_T)c6_r->size[0];
    c6_i146 = (int32_T)c6_d5 - 1;
    for (c6_idx = 0; c6_idx <= c6_i146; c6_idx++) {
      c6_b_idx = (real_T)c6_idx + 1.0;
      c6_i152 = c6_stats->size[0];
      c6_i153 = (int32_T)c6_f_k;
      if ((c6_i153 < 1) || (c6_i153 > c6_i152)) {
        emlrtDynamicBoundsCheckR2012b(c6_i153, 1, c6_i152, &c6_id_emlrtBCI,
          &c6_b_st);
      }

      c6_i155 = c6_i153 - 1;
      c6_i156 = c6_regionIndices->size[0];
      c6_i157 = (int32_T)c6_b_idx;
      if ((c6_i157 < 1) || (c6_i157 > c6_i156)) {
        emlrtDynamicBoundsCheckR2012b(c6_i157, 1, c6_i156, &c6_od_emlrtBCI,
          &c6_b_st);
      }

      c6_i158 = (int32_T)c6_regionIndices->data[c6_i157 - 1];
      if ((c6_i158 < 1) || (c6_i158 > 120)) {
        emlrtDynamicBoundsCheckR2012b(c6_i158, 1, 120, &c6_nd_emlrtBCI, &c6_b_st);
      }

      c6_i159 = c6_c->size[0];
      c6_i160 = (int32_T)c6_b_idx;
      if ((c6_i160 < 1) || (c6_i160 > c6_i159)) {
        emlrtDynamicBoundsCheckR2012b(c6_i160, 1, c6_i159, &c6_pd_emlrtBCI,
          &c6_b_st);
      }

      c6_i161 = c6_stats->data[c6_i155].PixelValues->size[0];
      c6_i162 = (int32_T)c6_b_idx;
      if ((c6_i162 < 1) || (c6_i162 > c6_i161)) {
        emlrtDynamicBoundsCheckR2012b(c6_i162, 1, c6_i161, &c6_qd_emlrtBCI,
          &c6_b_st);
      }

      c6_stats->data[c6_i155].PixelValues->data[c6_i162 - 1] = c6_varargin_2
        [(c6_i158 + 120 * ((int32_T)c6_c->data[c6_i160 - 1] - 1)) - 1];
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_varargout_4);
  c6_emxFree_real_T(chartInstance, &c6_c);
  c6_emxFree_int32_T(chartInstance, &c6_regionLengths);
  c6_d2 = (real_T)c6_stats->size[0];
  c6_i23 = (int32_T)c6_d2 - 1;
  c6_g_k = 0;
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_r1, 2, &c6_j_emlrtRTEI);
  c6_emxInit_real_T1(chartInstance, &c6_st, &c6_r2, 1, &c6_ie_emlrtRTEI);
  while (c6_g_k <= c6_i23) {
    c6_h_k = (real_T)c6_g_k + 1.0;
    c6_i34 = c6_regionIndices->size[0];
    c6_i37 = c6_stats->size[0];
    c6_i39 = (int32_T)c6_h_k;
    if ((c6_i39 < 1) || (c6_i39 > c6_i37)) {
      emlrtDynamicBoundsCheckR2012b(c6_i39, 1, c6_i37, &c6_vd_emlrtBCI, &c6_st);
    }

    c6_regionIndices->size[0] = c6_stats->data[c6_i39 - 1].PixelValues->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_regionIndices, c6_i34,
      &c6_ee_emlrtRTEI);
    c6_i51 = c6_stats->size[0];
    c6_i53 = (int32_T)c6_h_k;
    if ((c6_i53 < 1) || (c6_i53 > c6_i51)) {
      emlrtDynamicBoundsCheckR2012b(c6_i53, 1, c6_i51, &c6_vd_emlrtBCI, &c6_st);
    }

    c6_j_loop_ub = c6_stats->data[c6_i53 - 1].PixelValues->size[0] - 1;
    for (c6_i62 = 0; c6_i62 <= c6_j_loop_ub; c6_i62++) {
      c6_i70 = c6_stats->size[0];
      c6_i74 = (int32_T)c6_h_k;
      if ((c6_i74 < 1) || (c6_i74 > c6_i70)) {
        emlrtDynamicBoundsCheckR2012b(c6_i74, 1, c6_i70, &c6_wd_emlrtBCI, &c6_st);
      }

      c6_regionIndices->data[c6_i62] = c6_stats->data[c6_i74 - 1]
        .PixelValues->data[c6_i62];
    }

    c6_b_st.site = &c6_ef_emlrtRSI;
    c6_sumIntensity = c6_sum(chartInstance, &c6_b_st, c6_regionIndices);
    c6_i76 = c6_stats->size[0];
    c6_i79 = (int32_T)c6_h_k;
    if ((c6_i79 < 1) || (c6_i79 > c6_i76)) {
      emlrtDynamicBoundsCheckR2012b(c6_i79, 1, c6_i76, &c6_hd_emlrtBCI, &c6_st);
    }

    for (c6_n = 0; c6_n < 2; c6_n++) {
      c6_b_n = (real_T)c6_n + 1.0;
      c6_i91 = c6_stats->size[0];
      c6_i92 = (int32_T)c6_h_k;
      if ((c6_i92 < 1) || (c6_i92 > c6_i91)) {
        emlrtDynamicBoundsCheckR2012b(c6_i92, 1, c6_i91, &c6_ld_emlrtBCI, &c6_st);
      }

      c6_i102 = c6_i92 - 1;
      c6_i104 = c6_r1->size[0] * c6_r1->size[1];
      c6_r1->size[0] = c6_stats->data[c6_i102].PixelList->size[0];
      c6_r1->size[1] = 2;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_r1, c6_i104,
        &c6_ie_emlrtRTEI);
      c6_i111 = c6_stats->size[0];
      c6_i114 = (int32_T)c6_h_k;
      if ((c6_i114 < 1) || (c6_i114 > c6_i111)) {
        emlrtDynamicBoundsCheckR2012b(c6_i114, 1, c6_i111, &c6_ld_emlrtBCI,
          &c6_st);
      }

      c6_i117 = c6_i114 - 1;
      c6_i120 = c6_stats->size[0];
      c6_i121 = (int32_T)c6_h_k;
      if ((c6_i121 < 1) || (c6_i121 > c6_i120)) {
        emlrtDynamicBoundsCheckR2012b(c6_i121, 1, c6_i120, &c6_ld_emlrtBCI,
          &c6_st);
      }

      c6_i124 = c6_i121 - 1;
      c6_t_loop_ub = c6_stats->data[c6_i117].PixelList->size[0] * c6_stats->
        data[c6_i124].PixelList->size[1] - 1;
      for (c6_i127 = 0; c6_i127 <= c6_t_loop_ub; c6_i127++) {
        c6_i131 = c6_stats->size[0];
        c6_i133 = (int32_T)c6_h_k;
        if ((c6_i133 < 1) || (c6_i133 > c6_i131)) {
          emlrtDynamicBoundsCheckR2012b(c6_i133, 1, c6_i131, &c6_ld_emlrtBCI,
            &c6_st);
        }

        c6_r1->data[c6_i127] = c6_stats->data[c6_i133 - 1].PixelList->
          data[c6_i127];
      }

      c6_c_n = (int32_T)c6_b_n - 1;
      c6_i132 = c6_r1->size[0] - 1;
      c6_i135 = c6_r->size[0];
      c6_r->size[0] = c6_i132 + 1;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_r, c6_i135,
        &c6_ie_emlrtRTEI);
      c6_v_loop_ub = c6_i132;
      for (c6_i139 = 0; c6_i139 <= c6_v_loop_ub; c6_i139++) {
        c6_r->data[c6_i139] = c6_r1->data[c6_i139 + c6_r1->size[0] * c6_c_n];
      }

      c6_i141 = c6_r->size[0];
      c6_i143 = c6_regionIndices->size[0];
      if ((c6_i141 != c6_i143) && ((c6_i141 != 1) && (c6_i143 != 1))) {
        emlrtDimSizeImpxCheckR2021b(c6_i141, c6_i143, &c6_b_emlrtECI, &c6_st);
      }

      if (c6_r->size[0] == c6_regionIndices->size[0]) {
        c6_i149 = c6_r2->size[0];
        c6_r2->size[0] = c6_r->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_r2, c6_i149,
          &c6_ie_emlrtRTEI);
        c6_ab_loop_ub = c6_r->size[0] - 1;
        for (c6_i151 = 0; c6_i151 <= c6_ab_loop_ub; c6_i151++) {
          c6_r2->data[c6_i151] = c6_r->data[c6_i151] * c6_regionIndices->
            data[c6_i151];
        }

        c6_b_st.site = &c6_df_emlrtRSI;
        c6_M = c6_sum(chartInstance, &c6_b_st, c6_r2);
      } else {
        c6_b_st.site = &c6_df_emlrtRSI;
        c6_M = c6_binary_expand_op(chartInstance, &c6_b_st, c6_df_emlrtRSI, c6_r,
          c6_regionIndices);
      }

      c6_imageSize[(int32_T)c6_b_n - 1] = c6_M / c6_sumIntensity;
    }

    c6_d_stats = c6_stats->size[0];
    for (c6_i90 = 0; c6_i90 < 2; c6_i90++) {
      c6_i97 = (int32_T)c6_h_k;
      if ((c6_i97 < 1) || (c6_i97 > c6_d_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i97, 1, c6_d_stats, &c6_md_emlrtBCI,
          &c6_st);
      }

      c6_stats->data[c6_i97 - 1].WeightedCentroid[c6_i90] = c6_imageSize[c6_i90];
    }

    c6_g_k++;
  }

  c6_emxFree_real_T(chartInstance, &c6_r2);
  c6_emxFree_real_T(chartInstance, &c6_r);
  c6_emxFree_real_T(chartInstance, &c6_r1);
  c6_emxFree_real_T(chartInstance, &c6_regionIndices);
  c6_st.site = &c6_m_emlrtRSI;
  c6_d4 = (real_T)c6_stats->size[0];
  c6_i45 = (int32_T)c6_d4 - 1;
  for (c6_j_k = 0; c6_j_k <= c6_i45; c6_j_k++) {
    c6_l_k = (real_T)c6_j_k + 1.0;
    c6_i58 = c6_stats->size[0];
    c6_i61 = (int32_T)c6_l_k;
    if ((c6_i61 < 1) || (c6_i61 > c6_i58)) {
      emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_i58, &c6_q_emlrtBCI, &c6_st);
    }

    c6_i69 = c6_outstats->size[0];
    c6_i73 = (int32_T)c6_l_k;
    if ((c6_i73 < 1) || (c6_i73 > c6_i69)) {
      emlrtDynamicBoundsCheckR2012b(c6_i73, 1, c6_i69, &c6_r_emlrtBCI, &c6_st);
    }

    for (c6_vIdx = 0; c6_vIdx < 2; c6_vIdx++) {
      c6_b_vIdx = (real_T)c6_vIdx + 1.0;
      c6_i84 = c6_stats->size[0];
      c6_i88 = (int32_T)c6_l_k;
      if ((c6_i88 < 1) || (c6_i88 > c6_i84)) {
        emlrtDynamicBoundsCheckR2012b(c6_i88, 1, c6_i84, &c6_t_emlrtBCI, &c6_st);
      }

      c6_i96 = c6_i88 - 1;
      c6_i98 = c6_outstats->size[0];
      c6_i101 = (int32_T)c6_l_k;
      if ((c6_i101 < 1) || (c6_i101 > c6_i98)) {
        emlrtDynamicBoundsCheckR2012b(c6_i101, 1, c6_i98, &c6_s_emlrtBCI, &c6_st);
      }

      c6_i108 = c6_i101 - 1;
      c6_outstats->data[c6_i108].WeightedCentroid[(int32_T)c6_b_vIdx - 1] =
        c6_stats->data[c6_i96].WeightedCentroid[(int32_T)c6_b_vIdx - 1];
    }
  }

  c6_emxFree_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c6_stats);
}

static void c6_bwconncomp(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_s_vX9LV7M75v5ZNol5H5URkE *c6_CC)
{
  c6_emxArray_int32_T *c6_b_x;
  c6_emxArray_int32_T *c6_endRow;
  c6_emxArray_int32_T *c6_idxCount;
  c6_emxArray_int32_T *c6_labelsRenumbered;
  c6_emxArray_int32_T *c6_regionLengths;
  c6_emxArray_int32_T *c6_startCol;
  c6_emxArray_int32_T *c6_startRow;
  c6_emxArray_int32_T *c6_x;
  c6_emxArray_real_T *c6_pixelIdxList;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_g_st;
  emlrtStack c6_st;
  real_T c6_b_col;
  real_T c6_b_k;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d_col;
  real_T c6_f_s;
  real_T c6_numComponents;
  real_T c6_y;
  int32_T c6_iv[1];
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_c;
  int32_T c6_b_loop_ub;
  int32_T c6_b_node;
  int32_T c6_b_p;
  int32_T c6_b_root_k;
  int32_T c6_b_root_p;
  int32_T c6_b_vlen;
  int32_T c6_c;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_p;
  int32_T c6_c_vlen;
  int32_T c6_col;
  int32_T c6_column_offset;
  int32_T c6_currentColumn;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_d_vlen;
  int32_T c6_dim;
  int32_T c6_e_a;
  int32_T c6_e_b;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_exitg1;
  int32_T c6_f_a;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_f_loop_ub;
  int32_T c6_firstRunOnPreviousColumn;
  int32_T c6_firstRunOnThisColumn;
  int32_T c6_g_a;
  int32_T c6_g_b;
  int32_T c6_g_k;
  int32_T c6_g_loop_ub;
  int32_T c6_h_a;
  int32_T c6_h_b;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_a;
  int32_T c6_i_k;
  int32_T c6_ib;
  int32_T c6_idx;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lastRunOnPreviousColumn;
  int32_T c6_lidx;
  int32_T c6_loop_ub;
  int32_T c6_nextLabel;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_node;
  int32_T c6_numRuns;
  int32_T c6_p;
  int32_T c6_root_k;
  int32_T c6_root_p;
  int32_T c6_row;
  int32_T c6_rowidx;
  int32_T c6_runCounter;
  int32_T c6_vlen;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_d_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_ve_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_g_st.prev = &c6_f_st;
  c6_g_st.tls = c6_f_st.tls;
  c6_numRuns = 0;
  for (c6_col = 0; c6_col < 160; c6_col++) {
    c6_b_col = (real_T)c6_col + 1.0;
    if (c6_b_varargin_1[120 * ((int32_T)c6_b_col - 1)]) {
      c6_numRuns++;
    }

    for (c6_k = 0; c6_k < 119; c6_k++) {
      c6_b_k = (real_T)c6_k + 2.0;
      if (c6_b_varargin_1[((int32_T)c6_b_k + 120 * ((int32_T)c6_b_col - 1)) - 1]
          && (!c6_b_varargin_1[((int32_T)(c6_b_k - 1.0) + 120 * ((int32_T)
             c6_b_col - 1)) - 1])) {
        c6_numRuns++;
      }
    }
  }

  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_regionLengths, 1,
                     &c6_ef_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_startRow, 1, &c6_gf_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_endRow, 1, &c6_hf_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_startCol, 1, &c6_if_emlrtRTEI);
  if (c6_numRuns == 0) {
    c6_startRow->size[0] = 0;
    c6_endRow->size[0] = 0;
    c6_startCol->size[0] = 0;
    c6_regionLengths->size[0] = 0;
    c6_numRuns = 0;
  } else {
    c6_i = c6_startRow->size[0];
    c6_d = (real_T)c6_numRuns;
    if (!(c6_d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c6_d, &c6_e_emlrtDCI, &c6_st);
    }

    c6_startRow->size[0] = (int32_T)muDoubleScalarFloor(c6_d);
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_startRow, c6_i,
      &c6_qe_emlrtRTEI);
    c6_i1 = c6_endRow->size[0];
    c6_endRow->size[0] = c6_numRuns;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_endRow, c6_i1,
      &c6_re_emlrtRTEI);
    c6_i4 = c6_startCol->size[0];
    c6_startCol->size[0] = c6_numRuns;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_startCol, c6_i4,
      &c6_se_emlrtRTEI);
    c6_b_st.site = &c6_we_emlrtRSI;
    c6_runCounter = 1;
    for (c6_c_col = 0; c6_c_col < 160; c6_c_col++) {
      c6_d_col = (real_T)c6_c_col + 1.0;
      c6_row = 1;
      while (c6_row <= 120) {
        while ((c6_row <= 120) && (!c6_b_varargin_1[(c6_row + 120 * ((int32_T)
                  c6_d_col - 1)) - 1])) {
          c6_row++;
        }

        if ((c6_row <= 120) && c6_b_varargin_1[(c6_row + 120 * ((int32_T)
              c6_d_col - 1)) - 1]) {
          c6_i8 = c6_startCol->size[0];
          if ((c6_runCounter < 1) || (c6_runCounter > c6_i8)) {
            emlrtDynamicBoundsCheckR2012b(c6_runCounter, 1, c6_i8,
              &c6_ae_emlrtBCI, &c6_b_st);
          }

          c6_startCol->data[c6_runCounter - 1] = (int32_T)c6_d_col;
          c6_i11 = c6_startRow->size[0];
          if ((c6_runCounter < 1) || (c6_runCounter > c6_i11)) {
            emlrtDynamicBoundsCheckR2012b(c6_runCounter, 1, c6_i11,
              &c6_ce_emlrtBCI, &c6_b_st);
          }

          c6_startRow->data[c6_runCounter - 1] = c6_row;
          while ((c6_row <= 120) && c6_b_varargin_1[(c6_row + 120 * ((int32_T)
                   c6_d_col - 1)) - 1]) {
            c6_row++;
          }

          c6_i16 = c6_endRow->size[0];
          if ((c6_runCounter < 1) || (c6_runCounter > c6_i16)) {
            emlrtDynamicBoundsCheckR2012b(c6_runCounter, 1, c6_i16,
              &c6_fe_emlrtBCI, &c6_b_st);
          }

          c6_endRow->data[c6_runCounter - 1] = c6_row - 1;
          c6_runCounter++;
        }
      }
    }

    c6_i6 = c6_regionLengths->size[0];
    c6_regionLengths->size[0] = c6_numRuns;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_regionLengths, c6_i6,
      &c6_te_emlrtRTEI);
    c6_loop_ub = c6_numRuns - 1;
    for (c6_i7 = 0; c6_i7 <= c6_loop_ub; c6_i7++) {
      c6_regionLengths->data[c6_i7] = 0;
    }

    c6_d_k = 1;
    c6_currentColumn = 2;
    c6_nextLabel = 1;
    c6_firstRunOnPreviousColumn = -1;
    c6_lastRunOnPreviousColumn = 0;
    c6_firstRunOnThisColumn = 1;
    while (c6_d_k <= c6_numRuns) {
      c6_i12 = c6_startCol->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i12)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i12, &c6_be_emlrtBCI, &c6_st);
      }

      if (c6_startCol->data[c6_d_k - 1] == c6_currentColumn) {
        c6_firstRunOnPreviousColumn = c6_firstRunOnThisColumn;
        c6_firstRunOnThisColumn = c6_d_k;
        c6_lastRunOnPreviousColumn = c6_d_k;
        c6_i20 = c6_startCol->size[0];
        if ((c6_d_k < 1) || (c6_d_k > c6_i20)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i20, &c6_ee_emlrtBCI,
            &c6_st);
        }

        c6_currentColumn = c6_startCol->data[c6_d_k - 1] + 1;
      } else {
        c6_i18 = c6_startCol->size[0];
        if ((c6_d_k < 1) || (c6_d_k > c6_i18)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i18, &c6_de_emlrtBCI,
            &c6_st);
        }

        if (c6_startCol->data[c6_d_k - 1] > c6_currentColumn) {
          c6_firstRunOnPreviousColumn = -1;
          c6_lastRunOnPreviousColumn = 0;
          c6_firstRunOnThisColumn = c6_d_k;
          c6_i22 = c6_startCol->size[0];
          if ((c6_d_k < 1) || (c6_d_k > c6_i22)) {
            emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i22, &c6_he_emlrtBCI,
              &c6_st);
          }

          c6_currentColumn = c6_startCol->data[c6_d_k - 1] + 1;
        }
      }

      if (c6_firstRunOnPreviousColumn >= 0) {
        for (c6_p = c6_firstRunOnPreviousColumn; c6_p <
             c6_lastRunOnPreviousColumn; c6_p++) {
          c6_i24 = c6_endRow->size[0];
          if ((c6_d_k < 1) || (c6_d_k > c6_i24)) {
            emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i24, &c6_oe_emlrtBCI,
              &c6_st);
          }

          c6_i26 = c6_startRow->size[0];
          if ((c6_p < 1) || (c6_p > c6_i26)) {
            emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i26, &c6_pe_emlrtBCI,
              &c6_st);
          }

          if (c6_endRow->data[c6_d_k - 1] >= c6_startRow->data[c6_p - 1] - 1) {
            c6_i28 = c6_startRow->size[0];
            if ((c6_d_k < 1) || (c6_d_k > c6_i28)) {
              emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i28, &c6_qe_emlrtBCI,
                &c6_st);
            }

            c6_i30 = c6_endRow->size[0];
            if ((c6_p < 1) || (c6_p > c6_i30)) {
              emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i30, &c6_re_emlrtBCI,
                &c6_st);
            }

            if (c6_startRow->data[c6_d_k - 1] <= c6_endRow->data[c6_p - 1] + 1)
            {
              c6_i33 = c6_regionLengths->size[0];
              if ((c6_d_k < 1) || (c6_d_k > c6_i33)) {
                emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i33, &c6_se_emlrtBCI,
                  &c6_st);
              }

              if (c6_regionLengths->data[c6_d_k - 1] == 0) {
                c6_i36 = c6_regionLengths->size[0];
                if ((c6_p < 1) || (c6_p > c6_i36)) {
                  emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i36, &c6_ve_emlrtBCI,
                    &c6_st);
                }

                c6_i39 = c6_regionLengths->size[0];
                if ((c6_d_k < 1) || (c6_d_k > c6_i39)) {
                  emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i39,
                    &c6_we_emlrtBCI, &c6_st);
                }

                c6_regionLengths->data[c6_d_k - 1] = c6_regionLengths->data[c6_p
                  - 1];
                c6_nextLabel++;
              } else {
                c6_i35 = c6_regionLengths->size[0];
                if ((c6_d_k < 1) || (c6_d_k > c6_i35)) {
                  emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i35,
                    &c6_te_emlrtBCI, &c6_st);
                }

                c6_i38 = c6_regionLengths->size[0];
                if ((c6_p < 1) || (c6_p > c6_i38)) {
                  emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i38, &c6_ue_emlrtBCI,
                    &c6_st);
                }

                if (c6_regionLengths->data[c6_d_k - 1] != c6_regionLengths->
                    data[c6_p - 1]) {
                  c6_b_st.site = &c6_xe_emlrtRSI;
                  c6_g_k = c6_d_k;
                  c6_b_p = c6_p;
                  c6_c_st.site = &c6_ye_emlrtRSI;
                  c6_node = c6_g_k;
                  c6_root_k = c6_node;
                  do {
                    c6_exitg1 = 0;
                    c6_i42 = c6_regionLengths->size[0];
                    if ((c6_root_k < 1) || (c6_root_k > c6_i42)) {
                      emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i42,
                        &c6_ye_emlrtBCI, &c6_c_st);
                    }

                    if (c6_root_k != c6_regionLengths->data[c6_root_k - 1]) {
                      c6_i44 = c6_regionLengths->size[0];
                      c6_i45 = c6_regionLengths->size[0];
                      if ((c6_root_k < 1) || (c6_root_k > c6_i45)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i45,
                          &c6_ff_emlrtBCI, &c6_c_st);
                      }

                      c6_i47 = c6_regionLengths->data[c6_root_k - 1];
                      if ((c6_i47 < 1) || (c6_i47 > c6_i44)) {
                        emlrtDynamicBoundsCheckR2012b(c6_i47, 1, c6_i44,
                          &c6_ef_emlrtBCI, &c6_c_st);
                      }

                      c6_i48 = c6_regionLengths->size[0];
                      if ((c6_root_k < 1) || (c6_root_k > c6_i48)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i48,
                          &c6_gf_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_root_k - 1] =
                        c6_regionLengths->data[c6_i47 - 1];
                      c6_i51 = c6_regionLengths->size[0];
                      if ((c6_root_k < 1) || (c6_root_k > c6_i51)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i51,
                          &c6_hf_emlrtBCI, &c6_c_st);
                      }

                      c6_root_k = c6_regionLengths->data[c6_root_k - 1];
                    } else {
                      c6_exitg1 = 1;
                    }
                  } while (c6_exitg1 == 0);

                  c6_c_st.site = &c6_af_emlrtRSI;
                  c6_b_node = c6_b_p;
                  c6_root_p = c6_b_node;
                  do {
                    c6_exitg1 = 0;
                    c6_i49 = c6_regionLengths->size[0];
                    if ((c6_root_p < 1) || (c6_root_p > c6_i49)) {
                      emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i49,
                        &c6_ye_emlrtBCI, &c6_c_st);
                    }

                    if (c6_root_p != c6_regionLengths->data[c6_root_p - 1]) {
                      c6_i52 = c6_regionLengths->size[0];
                      c6_i53 = c6_regionLengths->size[0];
                      if ((c6_root_p < 1) || (c6_root_p > c6_i53)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i53,
                          &c6_ff_emlrtBCI, &c6_c_st);
                      }

                      c6_i55 = c6_regionLengths->data[c6_root_p - 1];
                      if ((c6_i55 < 1) || (c6_i55 > c6_i52)) {
                        emlrtDynamicBoundsCheckR2012b(c6_i55, 1, c6_i52,
                          &c6_ef_emlrtBCI, &c6_c_st);
                      }

                      c6_i56 = c6_regionLengths->size[0];
                      if ((c6_root_p < 1) || (c6_root_p > c6_i56)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i56,
                          &c6_gf_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_root_p - 1] =
                        c6_regionLengths->data[c6_i55 - 1];
                      c6_i59 = c6_regionLengths->size[0];
                      if ((c6_root_p < 1) || (c6_root_p > c6_i59)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i59,
                          &c6_hf_emlrtBCI, &c6_c_st);
                      }

                      c6_root_p = c6_regionLengths->data[c6_root_p - 1];
                    } else {
                      c6_exitg1 = 1;
                    }
                  } while (c6_exitg1 == 0);

                  if (c6_root_k != c6_root_p) {
                    c6_c_st.site = &c6_bf_emlrtRSI;
                    c6_b_root_k = c6_root_k;
                    c6_b_root_p = c6_root_p;
                    c6_h_k = c6_g_k;
                    c6_c_p = c6_b_p;
                    if (c6_b_root_p < c6_b_root_k) {
                      c6_i58 = c6_regionLengths->size[0];
                      if ((c6_b_root_k < 1) || (c6_b_root_k > c6_i58)) {
                        emlrtDynamicBoundsCheckR2012b(c6_b_root_k, 1, c6_i58,
                          &c6_jf_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_b_root_k - 1] = c6_b_root_p;
                      c6_i61 = c6_regionLengths->size[0];
                      if ((c6_h_k < 1) || (c6_h_k > c6_i61)) {
                        emlrtDynamicBoundsCheckR2012b(c6_h_k, 1, c6_i61,
                          &c6_lf_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_h_k - 1] = c6_b_root_p;
                    } else {
                      c6_i57 = c6_regionLengths->size[0];
                      if ((c6_b_root_p < 1) || (c6_b_root_p > c6_i57)) {
                        emlrtDynamicBoundsCheckR2012b(c6_b_root_p, 1, c6_i57,
                          &c6_if_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_b_root_p - 1] = c6_b_root_k;
                      c6_i60 = c6_regionLengths->size[0];
                      if ((c6_c_p < 1) || (c6_c_p > c6_i60)) {
                        emlrtDynamicBoundsCheckR2012b(c6_c_p, 1, c6_i60,
                          &c6_kf_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_c_p - 1] = c6_b_root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      c6_i23 = c6_regionLengths->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i23)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i23, &c6_ie_emlrtBCI, &c6_st);
      }

      if (c6_regionLengths->data[c6_d_k - 1] == 0) {
        c6_i25 = c6_regionLengths->size[0];
        if ((c6_d_k < 1) || (c6_d_k > c6_i25)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i25, &c6_ne_emlrtBCI,
            &c6_st);
        }

        c6_regionLengths->data[c6_d_k - 1] = c6_nextLabel;
        c6_nextLabel++;
      }

      c6_d_k++;
    }
  }

  if (c6_numRuns == 0) {
    c6_CC->Connectivity = 8.0;
    for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
      c6_CC->ImageSize[c6_i3] = 120.0 + 40.0 * (real_T)c6_i3;
    }

    c6_CC->NumObjects = 0.0;
    c6_CC->RegionIndices->size[0] = 0;
    c6_i5 = c6_CC->RegionLengths->size[0];
    c6_CC->RegionLengths->size[0] = 1;
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_CC->RegionLengths,
      c6_i5, &c6_ve_emlrtRTEI);
    c6_CC->RegionLengths->data[0] = 0;
  } else {
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_labelsRenumbered, 1,
                       &c6_ff_emlrtRTEI);
    c6_i2 = c6_labelsRenumbered->size[0];
    c6_labelsRenumbered->size[0] = c6_regionLengths->size[0];
    c6_st.site = &c6_ch_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_labelsRenumbered,
      c6_i2, &c6_ue_emlrtRTEI);
    c6_numComponents = 0.0;
    c6_st.site = &c6_ue_emlrtRSI;
    c6_b = c6_numRuns;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_b_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_numRuns; c6_c_k++) {
      c6_e_k = c6_c_k;
      c6_i10 = c6_regionLengths->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i10)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i10, &c6_ge_emlrtBCI, (void *)
          c6_sp);
      }

      if (c6_regionLengths->data[c6_e_k - 1] == c6_e_k) {
        c6_numComponents++;
        c6_i14 = c6_labelsRenumbered->size[0];
        if ((c6_e_k < 1) || (c6_e_k > c6_i14)) {
          emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i14, &c6_me_emlrtBCI,
            (void *)c6_sp);
        }

        c6_labelsRenumbered->data[c6_e_k - 1] = (int32_T)c6_numComponents;
      }

      c6_i13 = c6_labelsRenumbered->size[0];
      c6_i15 = c6_regionLengths->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i15)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i15, &c6_ke_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i19 = c6_regionLengths->data[c6_e_k - 1];
      if ((c6_i19 < 1) || (c6_i19 > c6_i13)) {
        emlrtDynamicBoundsCheckR2012b(c6_i19, 1, c6_i13, &c6_je_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i21 = c6_labelsRenumbered->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i21)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i21, &c6_le_emlrtBCI, (void *)
          c6_sp);
      }

      c6_labelsRenumbered->data[c6_e_k - 1] = c6_labelsRenumbered->data[c6_i19 -
        1];
    }

    c6_i9 = c6_regionLengths->size[0];
    if (c6_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c6_numComponents)) {
      emlrtIntegerCheckR2012b(c6_numComponents, &c6_f_emlrtDCI, (void *)c6_sp);
    }

    c6_regionLengths->size[0] = (int32_T)c6_numComponents;
    c6_st.site = &c6_bh_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_regionLengths, c6_i9,
      &c6_we_emlrtRTEI);
    if (c6_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c6_numComponents)) {
      emlrtIntegerCheckR2012b(c6_numComponents, &c6_f_emlrtDCI, (void *)c6_sp);
    }

    c6_b_loop_ub = (int32_T)c6_numComponents - 1;
    for (c6_i17 = 0; c6_i17 <= c6_b_loop_ub; c6_i17++) {
      c6_regionLengths->data[c6_i17] = 0;
    }

    c6_st.site = &c6_te_emlrtRSI;
    c6_c_b = c6_numRuns;
    c6_d_b = c6_c_b;
    if (c6_d_b < 1) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_b_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_f_k = 1; c6_f_k - 1 < c6_numRuns; c6_f_k++) {
      c6_e_k = c6_f_k;
      c6_i27 = c6_labelsRenumbered->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i27)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i27, &c6_xe_emlrtBCI, (void *)
          c6_sp);
      }

      c6_idx = c6_labelsRenumbered->data[c6_e_k - 1];
      c6_i29 = c6_regionLengths->size[0];
      if ((c6_idx < 1) || (c6_idx > c6_i29)) {
        emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i29, &c6_af_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i31 = c6_endRow->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i31)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i31, &c6_bf_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i32 = c6_startRow->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i32)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i32, &c6_cf_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i34 = c6_regionLengths->size[0];
      if ((c6_idx < 1) || (c6_idx > c6_i34)) {
        emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i34, &c6_df_emlrtBCI, (void *)
          c6_sp);
      }

      c6_regionLengths->data[c6_idx - 1] = ((c6_regionLengths->data[c6_idx - 1]
        + c6_endRow->data[c6_e_k - 1]) - c6_startRow->data[c6_e_k - 1]) + 1;
    }

    c6_st.site = &c6_se_emlrtRSI;
    c6_b_st.site = &c6_v_emlrtRSI;
    c6_c_st.site = &c6_w_emlrtRSI;
    c6_vlen = c6_regionLengths->size[0];
    c6_d_st.site = &c6_x_emlrtRSI;
    c6_b_vlen = c6_vlen;
    if ((c6_regionLengths->size[0] == 0) || (c6_b_vlen == 0)) {
      c6_y = 0.0;
    } else {
      c6_e_st.site = &c6_y_emlrtRSI;
      c6_c_vlen = c6_b_vlen;
      c6_f_st.site = &c6_ab_emlrtRSI;
      c6_d_vlen = c6_c_vlen;
      if (c6_d_vlen < 4096) {
        c6_g_st.site = &c6_bb_emlrtRSI;
        c6_y = c6_g_sumColumnB(chartInstance, &c6_g_st, c6_regionLengths,
          c6_d_vlen);
      } else {
        c6_d_a = c6_d_vlen;
        c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 4096, 0, 1U, 0, 0);
        c6_inb = c6_nfb << 12;
        c6_lidx = c6_inb;
        c6_nleft = c6_d_vlen - c6_inb;
        c6_f_s = c6_c_sumColumnB4(chartInstance, c6_regionLengths, 1);
        for (c6_ib = 1; c6_ib < c6_nfb; c6_ib++) {
          c6_f_s += c6_c_sumColumnB4(chartInstance, c6_regionLengths, 1 + (c6_ib
            << 12));
        }

        if (c6_nleft > 0) {
          c6_g_st.site = &c6_cb_emlrtRSI;
          c6_f_s += c6_h_sumColumnB(chartInstance, &c6_g_st, c6_regionLengths,
            c6_nleft, c6_lidx + 1);
        }

        c6_y = c6_f_s;
      }
    }

    c6_emxInit_real_T1(chartInstance, &c6_d_st, &c6_pixelIdxList, 1,
                       &c6_df_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_d_st, &c6_x, 1, &c6_ye_emlrtRTEI);
    if (!(c6_y >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c6_y, &c6_h_emlrtDCI, (void *)c6_sp);
    }

    c6_d1 = c6_y;
    if (c6_d1 != (real_T)(int32_T)muDoubleScalarFloor(c6_d1)) {
      emlrtIntegerCheckR2012b(c6_d1, &c6_g_emlrtDCI, (void *)c6_sp);
    }

    c6_iv[0] = (int32_T)c6_d1;
    c6_i37 = c6_pixelIdxList->size[0];
    c6_pixelIdxList->size[0] = c6_iv[0];
    c6_st.site = &c6_se_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_pixelIdxList, c6_i37,
      &c6_xe_emlrtRTEI);
    c6_st.site = &c6_re_emlrtRSI;
    c6_i40 = c6_x->size[0];
    c6_x->size[0] = c6_regionLengths->size[0];
    c6_b_st.site = &c6_re_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_x, c6_i40,
      &c6_ye_emlrtRTEI);
    c6_c_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i41 = 0; c6_i41 <= c6_c_loop_ub; c6_i41++) {
      c6_x->data[c6_i41] = c6_regionLengths->data[c6_i41];
    }

    c6_b_st.site = &c6_jb_emlrtRSI;
    c6_dim = 2;
    if ((real_T)c6_x->size[0] != 1.0) {
      c6_dim = 1;
    }

    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_b_x, 1, &c6_n_emlrtRTEI);
    c6_i43 = c6_b_x->size[0];
    c6_b_x->size[0] = c6_x->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_x, c6_i43,
      &c6_n_emlrtRTEI);
    c6_d_loop_ub = c6_x->size[0] - 1;
    for (c6_i46 = 0; c6_i46 <= c6_d_loop_ub; c6_i46++) {
      c6_b_x->data[c6_i46] = c6_x->data[c6_i46];
    }

    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_idxCount, 1,
                       &c6_af_emlrtRTEI);
    c6_c_st.site = &c6_kb_emlrtRSI;
    c6_b_useConstantDim(chartInstance, &c6_c_st, c6_b_x, c6_dim, c6_x);
    c6_i50 = c6_idxCount->size[0];
    c6_idxCount->size[0] = 1 + c6_x->size[0];
    c6_st.site = &c6_re_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idxCount, c6_i50,
      &c6_af_emlrtRTEI);
    c6_idxCount->data[0] = 0;
    c6_e_loop_ub = c6_x->size[0] - 1;
    c6_emxFree_int32_T(chartInstance, &c6_b_x);
    for (c6_i54 = 0; c6_i54 <= c6_e_loop_ub; c6_i54++) {
      c6_idxCount->data[c6_i54 + 1] = c6_x->data[c6_i54];
    }

    c6_emxFree_int32_T(chartInstance, &c6_x);
    c6_st.site = &c6_qe_emlrtRSI;
    c6_e_b = c6_numRuns;
    c6_f_b = c6_e_b;
    if (c6_f_b < 1) {
      c6_c_overflow = false;
    } else {
      c6_c_overflow = (c6_f_b > 2147483646);
    }

    if (c6_c_overflow) {
      c6_b_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_i_k = 1; c6_i_k - 1 < c6_numRuns; c6_i_k++) {
      c6_e_k = c6_i_k;
      c6_i62 = c6_startCol->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i62)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i62, &c6_mf_emlrtBCI, (void *)
          c6_sp);
      }

      c6_e_a = c6_startCol->data[c6_e_k - 1] - 1;
      c6_c = c6_e_a;
      c6_f_a = c6_c;
      c6_column_offset = c6_f_a * 120;
      c6_i65 = c6_labelsRenumbered->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i65)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i65, &c6_nf_emlrtBCI, (void *)
          c6_sp);
      }

      c6_idx = c6_labelsRenumbered->data[c6_e_k - 1];
      c6_i67 = c6_startRow->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i67)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i67, &c6_of_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i69 = c6_startRow->data[c6_e_k - 1];
      c6_i70 = c6_endRow->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i70)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i70, &c6_pf_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i72 = c6_endRow->data[c6_e_k - 1];
      c6_st.site = &c6_pe_emlrtRSI;
      c6_g_a = c6_i69;
      c6_g_b = c6_i72;
      c6_h_a = c6_g_a;
      c6_h_b = c6_g_b;
      if (c6_h_a > c6_h_b) {
        c6_d_overflow = false;
      } else {
        c6_d_overflow = (c6_h_b > 2147483646);
      }

      if (c6_d_overflow) {
        c6_b_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
      }

      for (c6_rowidx = c6_i69; c6_rowidx <= c6_i72; c6_rowidx++) {
        c6_i73 = c6_idxCount->size[0];
        if ((c6_idx < 1) || (c6_idx > c6_i73)) {
          emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i73, &c6_qf_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i_a = c6_idxCount->data[c6_idx - 1] + 1;
        c6_b_c = c6_i_a;
        c6_i74 = c6_idxCount->size[0];
        if ((c6_idx < 1) || (c6_idx > c6_i74)) {
          emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i74, &c6_rf_emlrtBCI,
            (void *)c6_sp);
        }

        c6_idxCount->data[c6_idx - 1] = c6_b_c;
        c6_i75 = c6_pixelIdxList->size[0];
        c6_i76 = c6_idxCount->size[0];
        if ((c6_idx < 1) || (c6_idx > c6_i76)) {
          emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i76, &c6_tf_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i77 = c6_idxCount->data[c6_idx - 1];
        if ((c6_i77 < 1) || (c6_i77 > c6_i75)) {
          emlrtDynamicBoundsCheckR2012b(c6_i77, 1, c6_i75, &c6_sf_emlrtBCI,
            (void *)c6_sp);
        }

        c6_pixelIdxList->data[c6_i77 - 1] = (real_T)(c6_rowidx +
          c6_column_offset);
      }
    }

    c6_emxFree_int32_T(chartInstance, &c6_idxCount);
    c6_emxFree_int32_T(chartInstance, &c6_labelsRenumbered);
    c6_CC->Connectivity = 8.0;
    for (c6_i63 = 0; c6_i63 < 2; c6_i63++) {
      c6_CC->ImageSize[c6_i63] = 120.0 + 40.0 * (real_T)c6_i63;
    }

    c6_CC->NumObjects = c6_numComponents;
    c6_i64 = c6_CC->RegionIndices->size[0];
    c6_CC->RegionIndices->size[0] = c6_pixelIdxList->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_CC->RegionIndices,
      c6_i64, &c6_bf_emlrtRTEI);
    c6_f_loop_ub = c6_pixelIdxList->size[0] - 1;
    for (c6_i66 = 0; c6_i66 <= c6_f_loop_ub; c6_i66++) {
      c6_CC->RegionIndices->data[c6_i66] = c6_pixelIdxList->data[c6_i66];
    }

    c6_emxFree_real_T(chartInstance, &c6_pixelIdxList);
    c6_i68 = c6_CC->RegionLengths->size[0];
    c6_CC->RegionLengths->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_CC->RegionLengths,
      c6_i68, &c6_cf_emlrtRTEI);
    c6_g_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i71 = 0; c6_i71 <= c6_g_loop_ub; c6_i71++) {
      c6_CC->RegionLengths->data[c6_i71] = c6_regionLengths->data[c6_i71];
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_startCol);
  c6_emxFree_int32_T(chartInstance, &c6_endRow);
  c6_emxFree_int32_T(chartInstance, &c6_startRow);
  c6_emxFree_int32_T(chartInstance, &c6_regionLengths);
}

static real_T c6_g_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_x, int32_T
  c6_vlen)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_y;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_e_k;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_vstart;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_db_emlrtRSI;
    c6_b_vlen = c6_vlen - 1;
    c6_y = (real_T)c6_x->data[0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_hb_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_d_k = 1; c6_d_k - 1 < c6_i; c6_d_k++) {
      c6_e_k = c6_d_k;
      c6_y += (real_T)c6_x->data[c6_e_k];
    }
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_eb_emlrtRSI;
    c6_y = (real_T)c6_x->data[0];
    c6_b_st.site = &c6_hb_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_c_k = c6_k;
      c6_y += (real_T)c6_x->data[c6_c_k];
    }

    for (c6_b_k = 1; c6_b_k < c6_nfb; c6_b_k++) {
      c6_st.site = &c6_fb_emlrtRSI;
      c6_vstart = c6_b_k << 10;
      c6_b_y = (real_T)c6_x->data[c6_vstart];
      c6_b_st.site = &c6_hb_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_b_y += (real_T)c6_x->data[c6_vstart + c6_g_k];
      }

      c6_y += c6_b_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_inb;
      c6_st.site = &c6_gb_emlrtRSI;
      c6_c_vlen = c6_nleft - 1;
      c6_b_vstart = c6_lidx;
      c6_c_y = (real_T)c6_x->data[c6_b_vstart];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_hb_emlrtRSI;
      c6_c_b = c6_i1;
      c6_d_b = c6_c_b;
      if (c6_d_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_d_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_c_y += (real_T)c6_x->data[c6_b_vstart + c6_i_k];
      }

      c6_y += c6_c_y;
    }
  }

  return c6_y;
}

static real_T c6_c_sumColumnB4(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_int32_T *c6_x, int32_T c6_vstart)
{
  real_T c6_psum1;
  real_T c6_psum2;
  real_T c6_psum3;
  real_T c6_psum4;
  int32_T c6_b_k;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  (void)chartInstance;
  c6_i2 = c6_vstart + 1023;
  c6_i3 = c6_vstart + 2047;
  c6_i4 = c6_vstart + 3071;
  c6_psum1 = (real_T)c6_x->data[c6_vstart - 1];
  c6_psum2 = (real_T)c6_x->data[c6_i2];
  c6_psum3 = (real_T)c6_x->data[c6_i3];
  c6_psum4 = (real_T)c6_x->data[c6_i4];
  for (c6_k = 0; c6_k < 1023; c6_k++) {
    c6_b_k = c6_k + 1;
    c6_psum1 += (real_T)c6_x->data[(c6_vstart + c6_b_k) - 1];
    c6_psum2 += (real_T)c6_x->data[c6_i2 + c6_b_k];
    c6_psum3 += (real_T)c6_x->data[c6_i3 + c6_b_k];
    c6_psum4 += (real_T)c6_x->data[c6_i4 + c6_b_k];
  }

  return (c6_psum1 + c6_psum2) + (c6_psum3 + c6_psum4);
}

static real_T c6_h_sumColumnB(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_x, int32_T
  c6_vlen, int32_T c6_vstart)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_y;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_c_vstart;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_d_vstart;
  int32_T c6_e_k;
  int32_T c6_e_vstart;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_db_emlrtRSI;
    c6_b_vlen = c6_vlen - 1;
    c6_b_vstart = c6_vstart - 1;
    c6_y = (real_T)c6_x->data[c6_b_vstart];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_hb_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_d_k = 1; c6_d_k - 1 < c6_i; c6_d_k++) {
      c6_e_k = c6_d_k;
      c6_y += (real_T)c6_x->data[c6_b_vstart + c6_e_k];
    }
  } else {
    c6_d_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_eb_emlrtRSI;
    c6_c_vstart = c6_vstart - 1;
    c6_y = (real_T)c6_x->data[c6_c_vstart];
    c6_b_st.site = &c6_hb_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_c_k = c6_k;
      c6_y += (real_T)c6_x->data[c6_c_vstart + c6_c_k];
    }

    for (c6_b_k = 1; c6_b_k < c6_nfb; c6_b_k++) {
      c6_st.site = &c6_fb_emlrtRSI;
      c6_d_vstart = (c6_vstart + (c6_b_k << 10)) - 1;
      c6_b_y = (real_T)c6_x->data[c6_d_vstart];
      c6_b_st.site = &c6_hb_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_b_y += (real_T)c6_x->data[c6_d_vstart + c6_g_k];
      }

      c6_y += c6_b_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_vstart + c6_inb;
      c6_st.site = &c6_gb_emlrtRSI;
      c6_c_vlen = c6_nleft - 1;
      c6_e_vstart = c6_lidx - 1;
      c6_c_y = (real_T)c6_x->data[c6_e_vstart];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_hb_emlrtRSI;
      c6_c_b = c6_i1;
      c6_d_b = c6_c_b;
      if (c6_d_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_d_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_c_y += (real_T)c6_x->data[c6_e_vstart + c6_i_k];
      }

      c6_y += c6_c_y;
    }
  }

  return c6_y;
}

static void c6_b_useConstantDim(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_varargin_2,
  int32_T c6_varargin_3, c6_emxArray_int32_T *c6_varargout_1)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  int32_T c6_loop_ub;
  int32_T c6_nx;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  if (c6_varargin_3 == 1) {
    c6_st.site = &c6_lb_emlrtRSI;
    c6_i1 = c6_varargout_1->size[0];
    c6_varargout_1->size[0] = c6_varargin_2->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i1,
      &c6_v_emlrtRTEI);
    c6_b_loop_ub = c6_varargin_2->size[0] - 1;
    for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
      c6_varargout_1->data[c6_i3] = c6_varargin_2->data[c6_i3];
    }

    c6_b_st.site = &c6_mb_emlrtRSI;
    if (c6_varargout_1->size[0] != 0) {
      c6_c_st.site = &c6_nb_emlrtRSI;
      c6_nx = c6_varargout_1->size[0] - 1;
      if (!((real_T)c6_varargout_1->size[0] == 1.0)) {
        c6_i4 = c6_nx;
        c6_d_st.site = &c6_ob_emlrtRSI;
        c6_b = c6_i4;
        c6_b_b = c6_b;
        if (c6_b_b < 1) {
          c6_overflow = false;
        } else {
          c6_overflow = (c6_b_b > 2147483646);
        }

        if (c6_overflow) {
          c6_e_st.site = &c6_ib_emlrtRSI;
          c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
        }

        for (c6_k = 1; c6_k - 1 < c6_i4; c6_k++) {
          c6_b_k = c6_k;
          c6_varargout_1->data[c6_b_k] += c6_varargout_1->data[c6_b_k - 1];
        }
      }
    }
  } else {
    c6_i = c6_varargout_1->size[0];
    c6_varargout_1->size[0] = c6_varargin_2->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_varargout_1, c6_i,
      &c6_v_emlrtRTEI);
    c6_loop_ub = c6_varargin_2->size[0] - 1;
    for (c6_i2 = 0; c6_i2 <= c6_loop_ub; c6_i2++) {
      c6_varargout_1->data[c6_i2] = c6_varargin_2->data[c6_i2];
    }
  }
}

static real_T c6_sum(SFc6_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x)
{
  static char_T c6_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  real_T c6_y;
  int32_T c6_b_vlen;
  int32_T c6_c_vlen;
  int32_T c6_vlen;
  boolean_T c6_b;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_st.site = &c6_v_emlrtRSI;
  if ((c6_x->size[0] == 1) || ((real_T)c6_x->size[0] != 1.0)) {
    c6_b = true;
  } else {
    c6_b = false;
  }

  if (!c6_b) {
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c6_st, &c6_p_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_c_y)));
  }

  c6_b_st.site = &c6_w_emlrtRSI;
  c6_vlen = c6_x->size[0];
  c6_c_st.site = &c6_x_emlrtRSI;
  c6_b_vlen = c6_vlen;
  if ((c6_x->size[0] == 0) || (c6_b_vlen == 0)) {
    c6_y = 0.0;
  } else {
    c6_d_st.site = &c6_y_emlrtRSI;
    c6_c_vlen = c6_b_vlen;
    c6_e_st.site = &c6_ab_emlrtRSI;
    c6_y = c6_sumMatrixColumns(chartInstance, &c6_e_st, c6_x, c6_c_vlen);
  }

  return c6_y;
}

static void c6_round(SFc6_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x,
                     c6_emxArray_real_T *c6_b_x)
{
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_loop_ub;
  c6_i = c6_b_x->size[0];
  c6_b_x->size[0] = c6_x->size[0];
  c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_b_x, c6_i,
    &c6_jf_emlrtRTEI);
  c6_loop_ub = c6_x->size[0] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_x->data[c6_i1] = c6_x->data[c6_i1];
  }

  c6_b_round(chartInstance, c6_sp, c6_b_x);
}

static void c6_sort(SFc6_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c6_sp, c6_emxArray_real_T *c6_x,
                    c6_emxArray_real_T *c6_b_x, c6_emxArray_int32_T *c6_idx)
{
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_loop_ub;
  c6_i = c6_b_x->size[0] * c6_b_x->size[1];
  c6_b_x->size[0] = c6_x->size[0];
  c6_b_x->size[1] = 1;
  c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_b_x, c6_i,
    &c6_kf_emlrtRTEI);
  c6_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_x->data[c6_i1] = c6_x->data[c6_i1];
  }

  c6_b_sort(chartInstance, c6_sp, c6_b_x, c6_idx);
}

static void c6_merge_pow2_block(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
  c6_emxArray_real_T *c6_x, int32_T c6_offset, c6_emxArray_int32_T *c6_b_idx,
  c6_emxArray_real_T *c6_b_x)
{
  int32_T c6_b_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_loop_ub;
  c6_i = c6_b_idx->size[0] * c6_b_idx->size[1];
  c6_b_idx->size[0] = c6_idx->size[0];
  c6_b_idx->size[1] = 1;
  c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_b_idx, c6_i,
    &c6_lf_emlrtRTEI);
  c6_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_idx->data[c6_i1] = c6_idx->data[c6_i1];
  }

  c6_i2 = c6_b_x->size[0] * c6_b_x->size[1];
  c6_b_x->size[0] = c6_x->size[0];
  c6_b_x->size[1] = 1;
  c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_b_x, c6_i2,
    &c6_lf_emlrtRTEI);
  c6_b_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
  for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
    c6_b_x->data[c6_i3] = c6_x->data[c6_i3];
  }

  c6_b_merge_pow2_block(chartInstance, c6_sp, c6_b_idx, c6_b_x, c6_offset);
}

static void c6_merge_block(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx, c6_emxArray_real_T *c6_x,
  int32_T c6_offset, int32_T c6_n, int32_T c6_preSortLevel, c6_emxArray_int32_T *
  c6_iwork, c6_emxArray_real_T *c6_xwork, c6_emxArray_int32_T *c6_b_idx,
  c6_emxArray_real_T *c6_b_x, c6_emxArray_int32_T *c6_b_iwork,
  c6_emxArray_real_T *c6_b_xwork)
{
  int32_T c6_b_loop_ub;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_loop_ub;
  c6_i = c6_b_idx->size[0] * c6_b_idx->size[1];
  c6_b_idx->size[0] = c6_idx->size[0];
  c6_b_idx->size[1] = 1;
  c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_b_idx, c6_i,
    &c6_mf_emlrtRTEI);
  c6_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_idx->data[c6_i1] = c6_idx->data[c6_i1];
  }

  c6_i2 = c6_b_x->size[0] * c6_b_x->size[1];
  c6_b_x->size[0] = c6_x->size[0];
  c6_b_x->size[1] = 1;
  c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_b_x, c6_i2,
    &c6_mf_emlrtRTEI);
  c6_b_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
  for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
    c6_b_x->data[c6_i3] = c6_x->data[c6_i3];
  }

  c6_i4 = c6_b_iwork->size[0];
  c6_b_iwork->size[0] = c6_iwork->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_b_iwork, c6_i4,
    &c6_mf_emlrtRTEI);
  c6_c_loop_ub = c6_iwork->size[0] - 1;
  for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
    c6_b_iwork->data[c6_i5] = c6_iwork->data[c6_i5];
  }

  c6_i6 = c6_b_xwork->size[0];
  c6_b_xwork->size[0] = c6_xwork->size[0];
  c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_b_xwork, c6_i6,
    &c6_mf_emlrtRTEI);
  c6_d_loop_ub = c6_xwork->size[0] - 1;
  for (c6_i7 = 0; c6_i7 <= c6_d_loop_ub; c6_i7++) {
    c6_b_xwork->data[c6_i7] = c6_xwork->data[c6_i7];
  }

  c6_b_merge_block(chartInstance, c6_sp, c6_b_idx, c6_b_x, c6_offset, c6_n,
                   c6_preSortLevel, c6_b_iwork, c6_b_xwork);
}

static void c6_merge(SFc6_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
                     c6_emxArray_real_T *c6_x, int32_T c6_offset, int32_T c6_np,
                     int32_T c6_nq, c6_emxArray_int32_T *c6_iwork,
                     c6_emxArray_real_T *c6_xwork, c6_emxArray_int32_T *c6_b_idx,
                     c6_emxArray_real_T *c6_b_x, c6_emxArray_int32_T *c6_b_iwork,
                     c6_emxArray_real_T *c6_b_xwork)
{
  int32_T c6_b_loop_ub;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_loop_ub;
  c6_i = c6_b_idx->size[0] * c6_b_idx->size[1];
  c6_b_idx->size[0] = c6_idx->size[0];
  c6_b_idx->size[1] = 1;
  c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_b_idx, c6_i,
    &c6_nf_emlrtRTEI);
  c6_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_idx->data[c6_i1] = c6_idx->data[c6_i1];
  }

  c6_i2 = c6_b_x->size[0] * c6_b_x->size[1];
  c6_b_x->size[0] = c6_x->size[0];
  c6_b_x->size[1] = 1;
  c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_b_x, c6_i2,
    &c6_nf_emlrtRTEI);
  c6_b_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
  for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
    c6_b_x->data[c6_i3] = c6_x->data[c6_i3];
  }

  c6_i4 = c6_b_iwork->size[0];
  c6_b_iwork->size[0] = c6_iwork->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_b_iwork, c6_i4,
    &c6_nf_emlrtRTEI);
  c6_c_loop_ub = c6_iwork->size[0] - 1;
  for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
    c6_b_iwork->data[c6_i5] = c6_iwork->data[c6_i5];
  }

  c6_i6 = c6_b_xwork->size[0];
  c6_b_xwork->size[0] = c6_xwork->size[0];
  c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_b_xwork, c6_i6,
    &c6_nf_emlrtRTEI);
  c6_d_loop_ub = c6_xwork->size[0] - 1;
  for (c6_i7 = 0; c6_i7 <= c6_d_loop_ub; c6_i7++) {
    c6_b_xwork->data[c6_i7] = c6_xwork->data[c6_i7];
  }

  c6_b_merge(chartInstance, c6_sp, c6_b_idx, c6_b_x, c6_offset, c6_np, c6_nq,
             c6_b_iwork, c6_b_xwork);
}

static void c6_b_eml_find(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_x, c6_emxArray_int32_T
  *c6_i)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_y = NULL;
  int32_T c6_iv[2];
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_i;
  int32_T c6_b_ii;
  int32_T c6_b_nx;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_idx;
  int32_T c6_ii;
  int32_T c6_k;
  int32_T c6_nx;
  boolean_T c6_c_b;
  boolean_T c6_exitg1;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_nx = c6_x->size[0] * c6_x->size[1];
  c6_st.site = &c6_og_emlrtRSI;
  c6_k = c6_nx;
  c6_b_nx = c6_nx;
  c6_idx = 0;
  c6_b_i = c6_i->size[0];
  c6_i->size[0] = c6_k;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_i, c6_b_i,
    &c6_of_emlrtRTEI);
  c6_b_st.site = &c6_pg_emlrtRSI;
  c6_b = c6_b_nx;
  c6_b_b = c6_b;
  if (c6_b_b < 1) {
    c6_overflow = false;
  } else {
    c6_overflow = (c6_b_b > 2147483646);
  }

  if (c6_overflow) {
    c6_c_st.site = &c6_ib_emlrtRSI;
    c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
  }

  c6_ii = 1;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_ii - 1 <= c6_b_nx - 1)) {
    c6_b_ii = c6_ii;
    if (c6_x->data[c6_b_ii - 1]) {
      c6_idx++;
      c6_i->data[c6_idx - 1] = c6_b_ii;
      if (c6_idx >= c6_k) {
        c6_exitg1 = true;
      } else {
        c6_ii++;
      }
    } else {
      c6_ii++;
    }
  }

  if (!(c6_idx <= c6_k)) {
    c6_y = NULL;
    sf_mex_assign(&c6_y, sf_mex_create("y", c6_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c6_st, &c6_t_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_b_y)));
  }

  if (c6_k == 1) {
    if (c6_idx == 0) {
      c6_i->size[0] = 0;
    }
  } else {
    c6_c_b = (c6_idx < 1);
    if (c6_c_b) {
      c6_i1 = 0;
    } else {
      c6_i1 = c6_idx;
    }

    c6_iv[0] = 1;
    c6_iv[1] = c6_i1;
    c6_b_st.site = &c6_qg_emlrtRSI;
    c6_indexShapeCheck(chartInstance, &c6_b_st, c6_i->size[0], c6_iv);
    c6_i2 = c6_i->size[0];
    c6_i->size[0] = c6_i1;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_i, c6_i2,
      &c6_pf_emlrtRTEI);
  }
}

static void c6_b_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers)
{
  c6_emxArray_boolean_T *c6_x;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_real_T *c6_b_centers;
  c6_emxArray_real_T *c6_idx2Keep;
  c6_emxArray_real_T *c6_metric;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b_loop_ub;
  int32_T c6_b_metric;
  int32_T c6_c_centers;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_loop_ub;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_centers->size[0] = 0;
  c6_centers->size[1] = 0;
  c6_st.site = &c6_pc_emlrtRSI;
  c6_b_chaccum(chartInstance, &c6_st, c6_b_varargin_1,
               chartInstance->c6_d_accumMatrix, chartInstance->c6_d_gradientImg);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idx2Keep, 1, &c6_hb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_b_centers, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_metric, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_x, 2, &c6_gb_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_ii, 1, &c6_kb_emlrtRTEI);
  c6_st.site = &c6_ph_emlrtRSI;
  if (!c6_any(chartInstance, &c6_st, chartInstance->c6_d_accumMatrix)) {
  } else {
    c6_st.site = &c6_qc_emlrtRSI;
    c6_chcenters(chartInstance, &c6_st, chartInstance->c6_d_accumMatrix,
                 c6_b_centers, c6_metric);
    c6_i = c6_centers->size[0] * c6_centers->size[1];
    c6_centers->size[0] = c6_b_centers->size[0];
    c6_centers->size[1] = c6_b_centers->size[1];
    c6_st.site = &c6_qc_emlrtRSI;
    c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i,
      &c6_fb_emlrtRTEI);
    c6_loop_ub = c6_b_centers->size[0] * c6_b_centers->size[1] - 1;
    for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
      c6_centers->data[c6_i1] = c6_b_centers->data[c6_i1];
    }

    c6_b = (c6_b_centers->size[0] == 0);
    c6_b1 = (c6_b_centers->size[1] == 0);
    if (c6_b || c6_b1) {
    } else {
      c6_st.site = &c6_rc_emlrtRSI;
      c6_i2 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_metric->size[0];
      c6_x->size[1] = c6_metric->size[1];
      c6_b_st.site = &c6_rc_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_b_st, c6_x, c6_i2,
        &c6_gb_emlrtRTEI);
      c6_b_loop_ub = c6_metric->size[0] * c6_metric->size[1] - 1;
      for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
        c6_x->data[c6_i3] = (c6_metric->data[c6_i3] >= 0.15000000000000002);
      }

      c6_b_st.site = &c6_ng_emlrtRSI;
      c6_b_eml_find(chartInstance, &c6_b_st, c6_x, c6_ii);
      c6_i4 = c6_idx2Keep->size[0];
      c6_idx2Keep->size[0] = c6_ii->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idx2Keep, c6_i4,
        &c6_hb_emlrtRTEI);
      c6_c_loop_ub = c6_ii->size[0] - 1;
      for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
        c6_idx2Keep->data[c6_i5] = (real_T)c6_ii->data[c6_i5];
      }

      c6_c_centers = c6_b_centers->size[0];
      c6_i6 = c6_b_centers->size[1] - 1;
      c6_i7 = c6_centers->size[0] * c6_centers->size[1];
      c6_centers->size[0] = c6_idx2Keep->size[0];
      c6_centers->size[1] = c6_i6 + 1;
      c6_st.site = &c6_ug_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i7,
        &c6_ib_emlrtRTEI);
      c6_d_loop_ub = c6_i6;
      for (c6_i8 = 0; c6_i8 <= c6_d_loop_ub; c6_i8++) {
        c6_e_loop_ub = c6_idx2Keep->size[0] - 1;
        for (c6_i9 = 0; c6_i9 <= c6_e_loop_ub; c6_i9++) {
          c6_i11 = (int32_T)c6_idx2Keep->data[c6_i9];
          if ((c6_i11 < 1) || (c6_i11 > c6_c_centers)) {
            emlrtDynamicBoundsCheckR2012b(c6_i11, 1, c6_c_centers,
              &c6_gb_emlrtBCI, (void *)c6_sp);
          }

          c6_centers->data[c6_i9 + c6_centers->size[0] * c6_i8] =
            c6_b_centers->data[(c6_i11 + c6_b_centers->size[0] * c6_i8) - 1];
        }
      }

      c6_b_metric = c6_metric->size[0];
      c6_f_loop_ub = c6_idx2Keep->size[0] - 1;
      for (c6_i10 = 0; c6_i10 <= c6_f_loop_ub; c6_i10++) {
        c6_i12 = (int32_T)c6_idx2Keep->data[c6_i10];
        if ((c6_i12 < 1) || (c6_i12 > c6_b_metric)) {
          emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_b_metric, &c6_hb_emlrtBCI,
            (void *)c6_sp);
        }
      }

      c6_b2 = (c6_centers->size[0] == 0);
      c6_b3 = (c6_centers->size[1] == 0);
      if (c6_b2 || c6_b3) {
        c6_centers->size[0] = 0;
        c6_centers->size[1] = 0;
      }
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_ii);
  c6_emxFree_boolean_T(chartInstance, &c6_x);
  c6_emxFree_real_T(chartInstance, &c6_metric);
  c6_emxFree_real_T(chartInstance, &c6_b_centers);
  c6_emxFree_real_T(chartInstance, &c6_idx2Keep);
}

static void c6_b_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200])
{
  static creal_T c6_Opca[21] = { { -1.0,/* re */
      -1.2246467991473532E-16          /* im */
    }, { -0.93240379223908776,         /* re */
      -0.36141827322116421             /* im */
    }, { -0.74357426958344264,         /* re */
      -0.66865335235340728             /* im */
    }, { -0.46417200021029048,         /* re */
      -0.88574508422049858             /* im */
    }, { -0.13325057517148312,         /* re */
      -0.991082380136217               /* im */
    }, { 0.2074802256150268,           /* re */
      -0.97823921204311659             /* im */
    }, { 0.51882061924585576,          /* re */
      -0.85488312946586253             /* im */
    }, { 0.76817616261629651,          /* re */
      -0.64023853616296877             /* im */
    }, { 0.93231274608583814,          /* re */
      -0.36165307061586466             /* im */
    }, { 0.99870874547837474,          /* re */
      -0.050801985246749205            /* im */
    }, { 0.96560726313615242,          /* re */
      0.26000502567971523              /* im */
    }, { 0.840987354033144,            /* re */
      0.54105477574486982              /* im */
    }, { 0.64073963153953806,          /* re */
      0.76775824617816835              /* im */
    }, { 0.38635412290068505,          /* re */
      0.92235052540649765              /* im */
    }, { 0.10241533915090259,          /* re */
      0.99474172442227715              /* im */
    }, { -0.1858388073871538,          /* re */
      0.98258024490059859              /* im */
    }, { -0.45469152425916548,         /* re */
      0.89064898684435534              /* im */
    }, { -0.68371313637721776,         /* re */
      0.72975088019489776              /* im */
    }, { -0.8570370623415221,          /* re */
      0.51525476589063579              /* im */
    }, { -0.96411918886409909,         /* re */
      0.26546975282323904              /* im */
    }, { -1.0,                         /* re */
      1.2246467991473532E-16           /* im */
    } };

  static real_T c6_b_dv[21] = { 157.07963267948966, 160.22122533307945,
    163.36281798666926, 166.50441064025904, 169.64600329384882,
    172.78759594743863, 175.92918860102841, 179.0707812546182, 182.212373908208,
    185.35396656179779, 188.49555921538757, 191.63715186897738,
    194.77874452256717, 197.92033717615698, 201.06192982974676,
    204.20352248333654, 207.34511513692635, 210.48670779051614,
    213.62830044410595, 216.76989309769573, 219.91148575128551 };

  c6_emxArray_boolean_T *c6_inside;
  c6_emxArray_creal_T *c6_b_w;
  c6_emxArray_creal_T *c6_w;
  c6_emxArray_creal_T *c6_wkeep;
  c6_emxArray_int32_T *c6_b_xc;
  c6_emxArray_int32_T *c6_b_yc;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_int32_T *c6_jj;
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_xckeep;
  c6_emxArray_int32_T *c6_yckeep;
  c6_emxArray_real32_T *c6_xc;
  c6_emxArray_real32_T *c6_yc;
  c6_emxArray_real_T *c6_Ex;
  c6_emxArray_real_T *c6_Ex_chunk;
  c6_emxArray_real_T *c6_Ey;
  c6_emxArray_real_T *c6_Ey_chunk;
  c6_emxArray_real_T *c6_idxE;
  c6_emxArray_real_T *c6_idxE_chunk;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_varargin_2;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  creal_T c6_w0[21];
  real_T c6_ai;
  real_T c6_ar;
  real_T c6_b_b;
  real_T c6_b_d;
  real_T c6_b_idx;
  real_T c6_b_idx1;
  real_T c6_b_idx2;
  real_T c6_b_k;
  real_T c6_b_varargin_2;
  real_T c6_bi;
  real_T c6_bim;
  real_T c6_br;
  real_T c6_brm;
  real_T c6_c_b;
  real_T c6_c_i;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d_b;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_dim1;
  real_T c6_e_x;
  real_T c6_e_y;
  real_T c6_edgeThresh;
  real_T c6_f_a;
  real_T c6_f_s;
  real_T c6_f_x;
  real_T c6_f_y;
  real_T c6_g_a;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_h_a;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_i_a;
  real_T c6_lenE;
  real_T c6_minval;
  real_T c6_ni;
  real_T c6_nr;
  real_T c6_sgnbi;
  real_T c6_sgnbr;
  real_T c6_sizeChunk;
  int32_T c6_rows_to_keep_size[1];
  int32_T c6_b_i;
  int32_T c6_b_loop_ub;
  int32_T c6_c_idx;
  int32_T c6_c_idx1;
  int32_T c6_c_idx2;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_idx;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i104;
  int32_T c6_i105;
  int32_T c6_i106;
  int32_T c6_i107;
  int32_T c6_i108;
  int32_T c6_i109;
  int32_T c6_i11;
  int32_T c6_i110;
  int32_T c6_i111;
  int32_T c6_i112;
  int32_T c6_i113;
  int32_T c6_i114;
  int32_T c6_i115;
  int32_T c6_i116;
  int32_T c6_i117;
  int32_T c6_i118;
  int32_T c6_i119;
  int32_T c6_i12;
  int32_T c6_i120;
  int32_T c6_i121;
  int32_T c6_i122;
  int32_T c6_i123;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_idx1;
  int32_T c6_idx2;
  int32_T c6_idxEdge;
  int32_T c6_idxkeep;
  int32_T c6_j_b;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_b;
  int32_T c6_k_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_szxc;
  real32_T c6_Gmax;
  real32_T c6_b;
  real32_T c6_b_x;
  real32_T c6_b_y;
  real32_T c6_b_z;
  real32_T c6_c_y;
  real32_T c6_c_z;
  real32_T c6_d_a;
  real32_T c6_e_a;
  real32_T c6_i_b;
  real32_T c6_i_x;
  real32_T c6_i_y;
  real32_T c6_j_x;
  real32_T c6_j_y;
  real32_T c6_k_x;
  real32_T c6_k_y;
  real32_T c6_l_b;
  real32_T c6_l_x;
  real32_T c6_l_y;
  real32_T c6_m_x;
  real32_T c6_m_y;
  real32_T c6_n_x;
  real32_T c6_n_y;
  real32_T c6_o_x;
  real32_T c6_p_x;
  real32_T c6_t;
  real32_T c6_x1;
  real32_T c6_x2;
  real32_T c6_y;
  real32_T c6_z;
  boolean_T c6_rows_to_keep_data[19200];
  boolean_T c6_x[19200];
  boolean_T c6_x_data[19200];
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b5;
  boolean_T c6_c_varargin_1;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_flat;
  boolean_T c6_g_b;
  boolean_T c6_guard1 = false;
  boolean_T c6_guard2 = false;
  boolean_T c6_guard3 = false;
  boolean_T c6_h_b;
  boolean_T c6_m_b;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_c_varargin_1 = c6_b_varargin_1[0];
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_x[c6_i] = ((int32_T)c6_b_varargin_1[c6_i] == (int32_T)c6_c_varargin_1);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_x_data[c6_i1] = c6_x[c6_i1];
  }

  c6_flat = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    if (!c6_x_data[(int32_T)c6_b_k - 1]) {
      c6_flat = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_flat) {
    for (c6_i2 = 0; c6_i2 < 19200; c6_i2++) {
      c6_f_accumMatrix[c6_i2].re = 0.0;
      c6_f_accumMatrix[c6_i2].im = 0.0;
    }

    for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
      c6_f_gradientImg[c6_i4] = 0.0F;
    }
  } else {
    c6_st.site = &c6_sc_emlrtRSI;
    for (c6_i3 = 0; c6_i3 < 19200; c6_i3++) {
      chartInstance->c6_c_s[c6_i3] = (real32_T)c6_b_varargin_1[c6_i3];
    }

    c6_b_st.site = &c6_xb_emlrtRSI;
    c6_imfilter(chartInstance, &c6_b_st, chartInstance->c6_c_s,
                chartInstance->c6_c_A);
    c6_st.site = &c6_tc_emlrtRSI;
    c6_b_st.site = &c6_gc_emlrtRSI;
    c6_b_imfilter(chartInstance, &c6_b_st, chartInstance->c6_c_A,
                  chartInstance->c6_c_Gx);
    c6_b_st.site = &c6_hc_emlrtRSI;
    c6_c_imfilter(chartInstance, &c6_b_st, chartInstance->c6_c_A,
                  chartInstance->c6_c_Gy);
    for (c6_c_k = 0; c6_c_k < 19200; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_x = chartInstance->c6_c_Gx[c6_d_k];
      c6_y = chartInstance->c6_c_Gy[c6_d_k];
      c6_x1 = c6_b_x;
      c6_x2 = c6_y;
      c6_d_a = c6_x1;
      c6_b = c6_x2;
      c6_z = muSingleScalarHypot(c6_d_a, c6_b);
      c6_f_gradientImg[c6_d_k] = c6_z;
    }

    c6_st.site = &c6_uc_emlrtRSI;
    for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
      chartInstance->c6_c_s[c6_i5] = c6_f_gradientImg[c6_i5];
    }

    c6_Gmax = c6_maximum(chartInstance, chartInstance->c6_c_s);
    c6_b_y = c6_Gmax;
    c6_c_y = c6_b_y;
    for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
      chartInstance->c6_c_s[c6_i6] = c6_f_gradientImg[c6_i6] / c6_c_y;
    }

    c6_b_st.site = &c6_yc_emlrtRSI;
    c6_edgeThresh = c6_graythresh(chartInstance, &c6_b_st, chartInstance->c6_c_s);
    c6_e_a = c6_Gmax;
    c6_b_b = c6_edgeThresh;
    c6_t = c6_e_a * (real32_T)c6_b_b;
    c6_b_st.site = &c6_ad_emlrtRSI;
    for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
      c6_x[c6_i7] = (c6_f_gradientImg[c6_i7] > c6_t);
    }

    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ey, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_ii, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_jj, 1, &c6_sc_emlrtRTEI);
    c6_c_st.site = &c6_id_emlrtRSI;
    c6_eml_find(chartInstance, &c6_c_st, c6_x, c6_ii, c6_jj);
    c6_i8 = c6_Ey->size[0];
    c6_Ey->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ey, c6_i8,
      &c6_mb_emlrtRTEI);
    c6_loop_ub = c6_ii->size[0] - 1;
    for (c6_i9 = 0; c6_i9 <= c6_loop_ub; c6_i9++) {
      c6_Ey->data[c6_i9] = (real_T)c6_ii->data[c6_i9];
    }

    c6_emxFree_int32_T(chartInstance, &c6_ii);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ex, 1, &c6_sc_emlrtRTEI);
    c6_i10 = c6_Ex->size[0];
    c6_Ex->size[0] = c6_jj->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ex, c6_i10,
      &c6_nb_emlrtRTEI);
    c6_b_loop_ub = c6_jj->size[0] - 1;
    for (c6_i11 = 0; c6_i11 <= c6_b_loop_ub; c6_i11++) {
      c6_Ex->data[c6_i11] = (real_T)c6_jj->data[c6_i11];
    }

    c6_emxFree_int32_T(chartInstance, &c6_jj);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_ndx, 1, &c6_tc_emlrtRTEI);
    c6_st.site = &c6_vc_emlrtRSI;
    c6_i12 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_Ey->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i12,
      &c6_ob_emlrtRTEI);
    c6_c_loop_ub = c6_Ey->size[0] - 1;
    for (c6_i13 = 0; c6_i13 <= c6_c_loop_ub; c6_i13++) {
      c6_ndx->data[c6_i13] = c6_Ey->data[c6_i13];
    }

    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_varargin_2, 1,
                       &c6_pb_emlrtRTEI);
    c6_i14 = c6_varargin_2->size[0];
    c6_varargin_2->size[0] = c6_Ex->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_varargin_2, c6_i14,
      &c6_pb_emlrtRTEI);
    c6_d_loop_ub = c6_Ex->size[0] - 1;
    for (c6_i15 = 0; c6_i15 <= c6_d_loop_ub; c6_i15++) {
      c6_varargin_2->data[c6_i15] = c6_Ex->data[c6_i15];
    }

    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_r, 1, &c6_uc_emlrtRTEI);
    c6_b_st.site = &c6_od_emlrtRSI;
    c6_eml_sub2ind(chartInstance, &c6_b_st, c6_ndx, c6_varargin_2, c6_r);
    c6_i16 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_r->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i16,
      &c6_qb_emlrtRTEI);
    c6_e_loop_ub = c6_r->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_varargin_2);
    for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
      c6_ndx->data[c6_i17] = (real_T)c6_r->data[c6_i17];
    }

    c6_emxFree_int32_T(chartInstance, &c6_r);
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_idxE, 1, &c6_rb_emlrtRTEI);
    c6_i18 = c6_idxE->size[0];
    c6_idxE->size[0] = c6_ndx->size[0];
    c6_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE, c6_i18,
      &c6_rb_emlrtRTEI);
    c6_f_loop_ub = c6_ndx->size[0] - 1;
    for (c6_i19 = 0; c6_i19 <= c6_f_loop_ub; c6_i19++) {
      c6_idxE->data[c6_i19] = c6_ndx->data[c6_i19];
    }

    c6_emxFree_real_T(chartInstance, &c6_ndx);
    for (c6_i20 = 0; c6_i20 < 21; c6_i20++) {
      c6_ar = c6_Opca[c6_i20].re;
      c6_ai = c6_Opca[c6_i20].im;
      c6_br = c6_b_dv[c6_i20];
      c6_bi = 0.0;
      if (c6_bi == 0.0) {
        if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        } else {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        }
      } else if (c6_br == 0.0) {
        if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        } else {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        }
      } else {
        c6_brm = muDoubleScalarAbs(c6_br);
        c6_bim = muDoubleScalarAbs(c6_bi);
        if (c6_brm > c6_bim) {
          c6_f_s = c6_bi / c6_br;
          c6_d = c6_br + c6_f_s * c6_bi;
          c6_nr = c6_ar + c6_f_s * c6_ai;
          c6_ni = c6_ai - c6_f_s * c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        } else if (c6_bim == c6_brm) {
          if (c6_br > 0.0) {
            c6_sgnbr = 0.5;
          } else {
            c6_sgnbr = -0.5;
          }

          if (c6_bi > 0.0) {
            c6_sgnbi = 0.5;
          } else {
            c6_sgnbi = -0.5;
          }

          c6_nr = c6_ar * c6_sgnbr + c6_ai * c6_sgnbi;
          c6_ni = c6_ai * c6_sgnbr - c6_ar * c6_sgnbi;
          c6_w0[c6_i20].re = c6_nr / c6_brm;
          c6_w0[c6_i20].im = c6_ni / c6_brm;
        } else {
          c6_f_s = c6_br / c6_bi;
          c6_d = c6_bi + c6_f_s * c6_br;
          c6_nr = c6_f_s * c6_ar + c6_ai;
          c6_ni = c6_f_s * c6_ai - c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        }
      }
    }

    c6_lenE = (real_T)c6_Ex->size[0];
    for (c6_i21 = 0; c6_i21 < 19200; c6_i21++) {
      c6_f_accumMatrix[c6_i21].re = 0.0;
      c6_f_accumMatrix[c6_i21].im = 0.0;
    }

    c6_i22 = (int32_T)((c6_lenE + 47618.0) / 47619.0);
    emlrtForLoopVectorCheckR2021a(1.0, 47619.0, c6_lenE, mxDOUBLE_CLASS, c6_i22,
      &c6_cg_emlrtRTEI, (void *)c6_sp);
    c6_b_i = 0;
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ex_chunk, 1, &c6_ic_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ey_chunk, 1, &c6_jc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idxE_chunk, 1, &c6_kc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_xc, 2, &c6_lc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_yc, 2, &c6_mc_emlrtRTEI);
    c6_emxInit_creal_T(chartInstance, c6_sp, &c6_w, 2, &c6_nc_emlrtRTEI);
    c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_inside, 2, &c6_oc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_xckeep, 1, &c6_pc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_yckeep, 1, &c6_qc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_wkeep, 1, &c6_rc_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_yc, 1, &c6_fc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_xc, 1, &c6_gc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_b_w, 1, &c6_hc_emlrtRTEI);
    while (c6_b_i <= c6_i22 - 1) {
      c6_c_i = (real_T)c6_b_i * 47619.0 + 1.0;
      c6_b_varargin_2 = c6_lenE;
      c6_d_y = c6_b_varargin_2;
      c6_e_y = c6_d_y;
      c6_f_y = c6_e_y;
      c6_c_b = c6_f_y;
      c6_g_y = c6_c_b;
      c6_h_y = c6_g_y;
      c6_minval = c6_h_y;
      c6_st.site = &c6_wc_emlrtRSI;
      c6_f_a = c6_c_i;
      c6_b_d = c6_minval;
      c6_b_st.site = &c6_pd_emlrtRSI;
      c6_g_a = c6_f_a;
      c6_d_b = c6_b_d;
      c6_c_x = c6_g_a;
      c6_e_b = muDoubleScalarIsNaN(c6_c_x);
      c6_guard1 = false;
      c6_guard2 = false;
      c6_guard3 = false;
      if (c6_e_b) {
        c6_guard2 = true;
      } else {
        c6_d_x = c6_d_b;
        c6_f_b = muDoubleScalarIsNaN(c6_d_x);
        if (c6_f_b) {
          c6_guard2 = true;
        } else if (c6_d_b < c6_g_a) {
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 0;
        } else {
          c6_e_x = c6_g_a;
          c6_g_b = muDoubleScalarIsInf(c6_e_x);
          if (c6_g_b) {
            c6_guard3 = true;
          } else {
            c6_f_x = c6_d_b;
            c6_h_b = muDoubleScalarIsInf(c6_f_x);
            if (c6_h_b) {
              c6_guard3 = true;
            } else {
              c6_guard1 = true;
            }
          }
        }
      }

      if (c6_guard3) {
        if (c6_g_a == c6_d_b) {
          c6_i23 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i23,
            &c6_sb_emlrtRTEI);
          c6_r1->data[0] = rtNaN;
        } else {
          c6_guard1 = true;
        }
      }

      if (c6_guard2) {
        c6_i24 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = 1;
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i24,
          &c6_sb_emlrtRTEI);
        c6_r1->data[0] = rtNaN;
      }

      if (c6_guard1) {
        c6_g_x = c6_g_a;
        c6_h_x = c6_g_x;
        c6_h_x = muDoubleScalarFloor(c6_h_x);
        if (c6_h_x == c6_g_a) {
          c6_i26 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = (int32_T)(c6_d_b - c6_g_a) + 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i26,
            &c6_sb_emlrtRTEI);
          c6_g_loop_ub = (int32_T)(c6_d_b - c6_g_a);
          for (c6_i28 = 0; c6_i28 <= c6_g_loop_ub; c6_i28++) {
            c6_r1->data[c6_i28] = c6_g_a + (real_T)c6_i28;
          }
        } else {
          c6_c_st.site = &c6_qd_emlrtRSI;
          c6_eml_float_colon(chartInstance, &c6_c_st, c6_g_a, c6_d_b, c6_r1);
        }
      }

      c6_sizeChunk = (real_T)c6_r1->size[1];
      c6_i25 = c6_Ex_chunk->size[0];
      c6_Ex_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_tg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ex_chunk, c6_i25,
        &c6_tb_emlrtRTEI);
      c6_i27 = c6_Ey_chunk->size[0];
      c6_Ey_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_sg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ey_chunk, c6_i27,
        &c6_ub_emlrtRTEI);
      c6_i29 = c6_idxE_chunk->size[0];
      c6_idxE_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_rg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE_chunk, c6_i29,
        &c6_vb_emlrtRTEI);
      c6_idxEdge = (int32_T)c6_c_i;
      c6_i30 = (int32_T)c6_sizeChunk - 1;
      for (c6_idx = 0; c6_idx <= c6_i30; c6_idx++) {
        c6_b_idx = (real_T)c6_idx + 1.0;
        c6_i32 = c6_Ex->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i32)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i32, &c6_ib_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i33 = c6_Ex_chunk->size[0];
        c6_i34 = (int32_T)c6_b_idx;
        if ((c6_i34 < 1) || (c6_i34 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i34, 1, c6_i33, &c6_jb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ex_chunk->data[c6_i34 - 1] = c6_Ex->data[c6_idxEdge - 1];
        c6_i36 = c6_Ey->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i36)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i36, &c6_kb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i38 = c6_Ey_chunk->size[0];
        c6_i39 = (int32_T)c6_b_idx;
        if ((c6_i39 < 1) || (c6_i39 > c6_i38)) {
          emlrtDynamicBoundsCheckR2012b(c6_i39, 1, c6_i38, &c6_lb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ey_chunk->data[c6_i39 - 1] = c6_Ey->data[c6_idxEdge - 1];
        c6_i41 = c6_idxE->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i41)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i41, &c6_mb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i42 = c6_idxE_chunk->size[0];
        c6_i43 = (int32_T)c6_b_idx;
        if ((c6_i43 < 1) || (c6_i43 > c6_i42)) {
          emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i42, &c6_nb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_idxE_chunk->data[c6_i43 - 1] = c6_idxE->data[c6_idxEdge - 1];
        c6_idxEdge++;
      }

      c6_dim1 = (real_T)c6_idxE_chunk->size[0];
      c6_i31 = c6_xc->size[0] * c6_xc->size[1];
      c6_xc->size[0] = (int32_T)c6_dim1;
      c6_xc->size[1] = 21;
      c6_st.site = &c6_mh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_xc, c6_i31,
        &c6_wb_emlrtRTEI);
      c6_i35 = c6_yc->size[0] * c6_yc->size[1];
      c6_yc->size[0] = (int32_T)c6_dim1;
      c6_yc->size[1] = 21;
      c6_st.site = &c6_lh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_yc, c6_i35,
        &c6_xb_emlrtRTEI);
      c6_i37 = c6_w->size[0] * c6_w->size[1];
      c6_w->size[0] = (int32_T)c6_dim1;
      c6_w->size[1] = 21;
      c6_st.site = &c6_nh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T(chartInstance, &c6_st, c6_w, c6_i37,
        &c6_yb_emlrtRTEI);
      c6_i40 = c6_inside->size[0] * c6_inside->size[1];
      c6_inside->size[0] = (int32_T)c6_dim1;
      c6_inside->size[1] = 21;
      c6_st.site = &c6_kh_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_st, c6_inside, c6_i40,
        &c6_ac_emlrtRTEI);
      c6_rows_to_keep_size[0] = (int32_T)c6_dim1;
      c6_h_loop_ub = (int32_T)c6_dim1 - 1;
      for (c6_i44 = 0; c6_i44 <= c6_h_loop_ub; c6_i44++) {
        c6_rows_to_keep_data[c6_i44] = false;
      }

      for (c6_idx2 = 0; c6_idx2 < 21; c6_idx2++) {
        c6_b_idx2 = (real_T)c6_idx2 + 1.0;
        c6_i46 = (int32_T)c6_dim1 - 1;
        for (c6_idx1 = 0; c6_idx1 <= c6_i46; c6_idx1++) {
          c6_b_idx1 = (real_T)c6_idx1 + 1.0;
          c6_i48 = c6_idxE_chunk->size[0];
          c6_i49 = (int32_T)c6_b_idx1;
          if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
            emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_ob_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_x = chartInstance->c6_c_Gx[(int32_T)c6_idxE_chunk->data[c6_i49 -
            1] - 1];
          c6_i51 = c6_idxE_chunk->size[0];
          c6_i52 = (int32_T)c6_b_idx1;
          if ((c6_i52 < 1) || (c6_i52 > c6_i51)) {
            emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i51, &c6_pb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i52 - 1] - 1];
          c6_j_x = c6_i_x;
          c6_j_y = c6_i_y;
          c6_b_z = c6_j_x / c6_j_y;
          c6_h_a = -(25.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_i_b = c6_b_z;
          c6_k_y = (real32_T)c6_h_a * c6_i_b;
          c6_i57 = c6_Ex_chunk->size[0];
          c6_i59 = (int32_T)c6_b_idx1;
          if ((c6_i59 < 1) || (c6_i59 > c6_i57)) {
            emlrtDynamicBoundsCheckR2012b(c6_i59, 1, c6_i57, &c6_qb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_k_x = (real32_T)c6_Ex_chunk->data[c6_i59 - 1] + c6_k_y;
          c6_l_x = c6_k_x;
          c6_l_x = muSingleScalarRound(c6_l_x);
          c6_i63 = c6_xc->size[0];
          c6_i64 = (int32_T)c6_b_idx1;
          if ((c6_i64 < 1) || (c6_i64 > c6_i63)) {
            emlrtDynamicBoundsCheckR2012b(c6_i64, 1, c6_i63, &c6_tb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_xc->data[(c6_i64 + c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_l_x;
          c6_i68 = c6_idxE_chunk->size[0];
          c6_i70 = (int32_T)c6_b_idx1;
          if ((c6_i70 < 1) || (c6_i70 > c6_i68)) {
            emlrtDynamicBoundsCheckR2012b(c6_i70, 1, c6_i68, &c6_ub_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_x = chartInstance->c6_c_Gy[(int32_T)c6_idxE_chunk->data[c6_i70 -
            1] - 1];
          c6_i74 = c6_idxE_chunk->size[0];
          c6_i76 = (int32_T)c6_b_idx1;
          if ((c6_i76 < 1) || (c6_i76 > c6_i74)) {
            emlrtDynamicBoundsCheckR2012b(c6_i76, 1, c6_i74, &c6_xb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_l_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i76 - 1] - 1];
          c6_n_x = c6_m_x;
          c6_m_y = c6_l_y;
          c6_c_z = c6_n_x / c6_m_y;
          c6_i_a = -(25.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_l_b = c6_c_z;
          c6_n_y = (real32_T)c6_i_a * c6_l_b;
          c6_i80 = c6_Ey_chunk->size[0];
          c6_i83 = (int32_T)c6_b_idx1;
          if ((c6_i83 < 1) || (c6_i83 > c6_i80)) {
            emlrtDynamicBoundsCheckR2012b(c6_i83, 1, c6_i80, &c6_dc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_o_x = (real32_T)c6_Ey_chunk->data[c6_i83 - 1] + c6_n_y;
          c6_p_x = c6_o_x;
          c6_p_x = muSingleScalarRound(c6_p_x);
          c6_i88 = c6_yc->size[0];
          c6_i90 = (int32_T)c6_b_idx1;
          if ((c6_i90 < 1) || (c6_i90 > c6_i88)) {
            emlrtDynamicBoundsCheckR2012b(c6_i90, 1, c6_i88, &c6_nc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_yc->data[(c6_i90 + c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_p_x;
          c6_i93 = c6_w->size[0];
          c6_i94 = (int32_T)c6_b_idx1;
          if ((c6_i94 < 1) || (c6_i94 > c6_i93)) {
            emlrtDynamicBoundsCheckR2012b(c6_i94, 1, c6_i93, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i94 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re
            = c6_w0[(int32_T)c6_b_idx2 - 1].re;
          c6_i97 = c6_w->size[0];
          c6_i98 = (int32_T)c6_b_idx1;
          if ((c6_i98 < 1) || (c6_i98 > c6_i97)) {
            emlrtDynamicBoundsCheckR2012b(c6_i98, 1, c6_i97, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i98 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im
            = c6_w0[(int32_T)c6_b_idx2 - 1].im;
          c6_i100 = c6_xc->size[0];
          c6_i102 = (int32_T)c6_b_idx1;
          if ((c6_i102 < 1) || (c6_i102 > c6_i100)) {
            emlrtDynamicBoundsCheckR2012b(c6_i102, 1, c6_i100, &c6_pc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_b = (c6_xc->data[(c6_i102 + c6_xc->size[0] * ((int32_T)c6_b_idx2
                      - 1)) - 1] >= 1.0F);
          c6_i104 = c6_xc->size[0];
          c6_i105 = (int32_T)c6_b_idx1;
          if ((c6_i105 < 1) || (c6_i105 > c6_i104)) {
            emlrtDynamicBoundsCheckR2012b(c6_i105, 1, c6_i104, &c6_qc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b1 = (c6_xc->data[(c6_i105 + c6_xc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 160.0F);
          c6_b2 = (c6_m_b && c6_b1);
          c6_i108 = c6_yc->size[0];
          c6_i109 = (int32_T)c6_b_idx1;
          if ((c6_i109 < 1) || (c6_i109 > c6_i108)) {
            emlrtDynamicBoundsCheckR2012b(c6_i109, 1, c6_i108, &c6_rc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b3 = (c6_yc->data[(c6_i109 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] >= 1.0F);
          c6_b4 = (c6_b2 && c6_b3);
          c6_i112 = c6_yc->size[0];
          c6_i113 = (int32_T)c6_b_idx1;
          if ((c6_i113 < 1) || (c6_i113 > c6_i112)) {
            emlrtDynamicBoundsCheckR2012b(c6_i113, 1, c6_i112, &c6_sc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b5 = (c6_yc->data[(c6_i113 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 120.0F);
          c6_i115 = c6_inside->size[0];
          c6_i117 = (int32_T)c6_b_idx1;
          if ((c6_i117 < 1) || (c6_i117 > c6_i115)) {
            emlrtDynamicBoundsCheckR2012b(c6_i117, 1, c6_i115, &c6_tc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_inside->data[(c6_i117 + c6_inside->size[0] * ((int32_T)c6_b_idx2 -
            1)) - 1] = (c6_b4 && c6_b5);
          c6_i119 = c6_inside->size[0];
          c6_i120 = (int32_T)c6_b_idx1;
          if ((c6_i120 < 1) || (c6_i120 > c6_i119)) {
            emlrtDynamicBoundsCheckR2012b(c6_i120, 1, c6_i119, &c6_uc_emlrtBCI,
              (void *)c6_sp);
          }

          if (c6_inside->data[(c6_i120 + c6_inside->size[0] * ((int32_T)
                c6_b_idx2 - 1)) - 1]) {
            c6_i123 = (int32_T)c6_b_idx1;
            if ((c6_i123 < 1) || (c6_i123 > c6_rows_to_keep_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c6_i123, 1, c6_rows_to_keep_size[0],
                &c6_vc_emlrtBCI, (void *)c6_sp);
            }

            c6_rows_to_keep_data[c6_i123 - 1] = true;
          }
        }
      }

      c6_i45 = c6_xckeep->size[0];
      c6_xckeep->size[0] = c6_xc->size[0] * 21;
      c6_st.site = &c6_ah_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_xckeep, c6_i45,
        &c6_cc_emlrtRTEI);
      c6_i47 = c6_yckeep->size[0];
      c6_yckeep->size[0] = c6_yc->size[0] * 21;
      c6_st.site = &c6_yg_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_yckeep, c6_i47,
        &c6_dc_emlrtRTEI);
      c6_i50 = c6_wkeep->size[0];
      c6_wkeep->size[0] = c6_w->size[0] * 21;
      c6_st.site = &c6_oh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_st, c6_wkeep, c6_i50,
        &c6_ec_emlrtRTEI);
      c6_idxkeep = 0;
      for (c6_c_idx2 = 0; c6_c_idx2 < 21; c6_c_idx2++) {
        c6_b_idx2 = (real_T)c6_c_idx2 + 1.0;
        c6_i54 = (int32_T)c6_dim1 - 1;
        for (c6_c_idx1 = 0; c6_c_idx1 <= c6_i54; c6_c_idx1++) {
          c6_b_idx1 = (real_T)c6_c_idx1 + 1.0;
          c6_i56 = (int32_T)c6_b_idx1;
          if ((c6_i56 < 1) || (c6_i56 > c6_rows_to_keep_size[0])) {
            emlrtDynamicBoundsCheckR2012b(c6_i56, 1, c6_rows_to_keep_size[0],
              &c6_rb_emlrtBCI, (void *)c6_sp);
          }

          if (c6_rows_to_keep_data[c6_i56 - 1]) {
            c6_i60 = c6_inside->size[0];
            c6_i61 = (int32_T)c6_b_idx1;
            if ((c6_i61 < 1) || (c6_i61 > c6_i60)) {
              emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_i60, &c6_sb_emlrtBCI,
                (void *)c6_sp);
            }

            if (c6_inside->data[(c6_i61 + c6_inside->size[0] * ((int32_T)
                  c6_b_idx2 - 1)) - 1]) {
              c6_idxkeep++;
              c6_i66 = c6_xc->size[0];
              c6_i67 = (int32_T)c6_b_idx1;
              if ((c6_i67 < 1) || (c6_i67 > c6_i66)) {
                emlrtDynamicBoundsCheckR2012b(c6_i67, 1, c6_i66, &c6_vb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i69 = c6_xckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i69)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i69,
                  &c6_wb_emlrtBCI, (void *)c6_sp);
              }

              c6_xckeep->data[c6_idxkeep - 1] = (int32_T)c6_xc->data[(c6_i67 +
                c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i73 = c6_yc->size[0];
              c6_i75 = (int32_T)c6_b_idx1;
              if ((c6_i75 < 1) || (c6_i75 > c6_i73)) {
                emlrtDynamicBoundsCheckR2012b(c6_i75, 1, c6_i73, &c6_yb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i77 = c6_yckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i77)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i77,
                  &c6_ac_emlrtBCI, (void *)c6_sp);
              }

              c6_yckeep->data[c6_idxkeep - 1] = (int32_T)c6_yc->data[(c6_i75 +
                c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i78 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i78)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i78,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_i79 = c6_w->size[0];
              c6_i82 = (int32_T)c6_b_idx1;
              if ((c6_i82 < 1) || (c6_i82 > c6_i79)) {
                emlrtDynamicBoundsCheckR2012b(c6_i82, 1, c6_i79, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].re = c6_w->data[(c6_i82 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re;
              c6_i86 = c6_w->size[0];
              c6_i87 = (int32_T)c6_b_idx1;
              if ((c6_i87 < 1) || (c6_i87 > c6_i86)) {
                emlrtDynamicBoundsCheckR2012b(c6_i87, 1, c6_i86, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i91 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i91)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i91,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].im = c6_w->data[(c6_i87 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c6_st.site = &c6_xc_emlrtRSI;
      c6_i53 = c6_b_yc->size[0];
      c6_b_yc->size[0] = c6_yckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_yc, c6_i53,
        &c6_fc_emlrtRTEI);
      c6_i_loop_ub = c6_yckeep->size[0] - 1;
      for (c6_i55 = 0; c6_i55 <= c6_i_loop_ub; c6_i55++) {
        c6_b_yc->data[c6_i55] = c6_yckeep->data[c6_i55];
      }

      c6_i58 = c6_b_xc->size[0];
      c6_b_xc->size[0] = c6_xckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_xc, c6_i58,
        &c6_gc_emlrtRTEI);
      c6_j_loop_ub = c6_xckeep->size[0] - 1;
      for (c6_i62 = 0; c6_i62 <= c6_j_loop_ub; c6_i62++) {
        c6_b_xc->data[c6_i62] = c6_xckeep->data[c6_i62];
      }

      c6_szxc = c6_idxkeep;
      c6_i65 = c6_b_w->size[0];
      c6_b_w->size[0] = c6_wkeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_b_st, c6_b_w, c6_i65,
        &c6_hc_emlrtRTEI);
      c6_k_loop_ub = c6_wkeep->size[0] - 1;
      for (c6_i71 = 0; c6_i71 <= c6_k_loop_ub; c6_i71++) {
        c6_b_w->data[c6_i71] = c6_wkeep->data[c6_i71];
      }

      for (c6_i72 = 0; c6_i72 < 19200; c6_i72++) {
        chartInstance->c6_c_out[c6_i72].re = 0.0;
        chartInstance->c6_c_out[c6_i72].im = 0.0;
      }

      c6_b_st.site = &c6_sd_emlrtRSI;
      c6_j_b = c6_szxc;
      c6_k_b = c6_j_b;
      if (c6_k_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_k_b > 2147483646);
      }

      if (c6_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_c_idx = 1; c6_c_idx - 1 < c6_szxc; c6_c_idx++) {
        c6_d_idx = c6_c_idx;
        c6_i84 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i84)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i84, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i85 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i85 < 1) || (c6_i85 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i85, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i89 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i89)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i89, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i92 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i92 < 1) || (c6_i92 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i92, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        c6_i95 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i95)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i95, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i96 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i96 < 1) || (c6_i96 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i96, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i99 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i99)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i99, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i101 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i101 < 1) || (c6_i101 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i101, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i103 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i103)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i103, &c6_ic_emlrtBCI,
            &c6_st);
        }

        chartInstance->c6_c_out[(c6_i85 + 120 * (c6_i92 - 1)) - 1].re =
          chartInstance->c6_c_out[(c6_i96 + 120 * (c6_i101 - 1)) - 1].re +
          c6_b_w->data[c6_d_idx - 1].re;
        c6_i106 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i106)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i106, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i107 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i107 < 1) || (c6_i107 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i107, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i110 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i110)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i110, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i111 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i111 < 1) || (c6_i111 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i111, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i114 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i114)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i114, &c6_ic_emlrtBCI,
            &c6_st);
        }

        c6_i116 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i116)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i116, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i118 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i118 < 1) || (c6_i118 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i118, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i121 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i121)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i121, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i122 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i122 < 1) || (c6_i122 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i122, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        chartInstance->c6_c_out[(c6_i118 + 120 * (c6_i122 - 1)) - 1].im =
          chartInstance->c6_c_out[(c6_i107 + 120 * (c6_i111 - 1)) - 1].im +
          c6_b_w->data[c6_d_idx - 1].im;
      }

      for (c6_i81 = 0; c6_i81 < 19200; c6_i81++) {
        c6_f_accumMatrix[c6_i81].re += chartInstance->c6_c_out[c6_i81].re;
        c6_f_accumMatrix[c6_i81].im += chartInstance->c6_c_out[c6_i81].im;
      }

      c6_b_i++;
    }

    c6_emxFree_creal_T(chartInstance, &c6_b_w);
    c6_emxFree_int32_T(chartInstance, &c6_b_xc);
    c6_emxFree_int32_T(chartInstance, &c6_b_yc);
    c6_emxFree_real_T(chartInstance, &c6_Ex);
    c6_emxFree_real_T(chartInstance, &c6_Ey);
    c6_emxFree_real_T(chartInstance, &c6_r1);
    c6_emxFree_creal_T(chartInstance, &c6_wkeep);
    c6_emxFree_int32_T(chartInstance, &c6_yckeep);
    c6_emxFree_int32_T(chartInstance, &c6_xckeep);
    c6_emxFree_boolean_T(chartInstance, &c6_inside);
    c6_emxFree_creal_T(chartInstance, &c6_w);
    c6_emxFree_real32_T(chartInstance, &c6_yc);
    c6_emxFree_real32_T(chartInstance, &c6_xc);
    c6_emxFree_real_T(chartInstance, &c6_idxE_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ey_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ex_chunk);
    c6_emxFree_real_T(chartInstance, &c6_idxE);
  }
}

static void c6_c_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers)
{
  c6_emxArray_boolean_T *c6_x;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_real_T *c6_b_centers;
  c6_emxArray_real_T *c6_idx2Keep;
  c6_emxArray_real_T *c6_metric;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b_loop_ub;
  int32_T c6_b_metric;
  int32_T c6_c_centers;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_loop_ub;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_centers->size[0] = 0;
  c6_centers->size[1] = 0;
  c6_st.site = &c6_pc_emlrtRSI;
  c6_c_chaccum(chartInstance, &c6_st, c6_b_varargin_1,
               chartInstance->c6_c_accumMatrix, chartInstance->c6_c_gradientImg);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idx2Keep, 1, &c6_hb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_b_centers, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_metric, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_x, 2, &c6_gb_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_ii, 1, &c6_kb_emlrtRTEI);
  c6_st.site = &c6_ph_emlrtRSI;
  if (!c6_any(chartInstance, &c6_st, chartInstance->c6_c_accumMatrix)) {
  } else {
    c6_st.site = &c6_qc_emlrtRSI;
    c6_chcenters(chartInstance, &c6_st, chartInstance->c6_c_accumMatrix,
                 c6_b_centers, c6_metric);
    c6_i = c6_centers->size[0] * c6_centers->size[1];
    c6_centers->size[0] = c6_b_centers->size[0];
    c6_centers->size[1] = c6_b_centers->size[1];
    c6_st.site = &c6_qc_emlrtRSI;
    c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i,
      &c6_fb_emlrtRTEI);
    c6_loop_ub = c6_b_centers->size[0] * c6_b_centers->size[1] - 1;
    for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
      c6_centers->data[c6_i1] = c6_b_centers->data[c6_i1];
    }

    c6_b = (c6_b_centers->size[0] == 0);
    c6_b1 = (c6_b_centers->size[1] == 0);
    if (c6_b || c6_b1) {
    } else {
      c6_st.site = &c6_rc_emlrtRSI;
      c6_i2 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_metric->size[0];
      c6_x->size[1] = c6_metric->size[1];
      c6_b_st.site = &c6_rc_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_b_st, c6_x, c6_i2,
        &c6_gb_emlrtRTEI);
      c6_b_loop_ub = c6_metric->size[0] * c6_metric->size[1] - 1;
      for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
        c6_x->data[c6_i3] = (c6_metric->data[c6_i3] >= 0.15000000000000002);
      }

      c6_b_st.site = &c6_ng_emlrtRSI;
      c6_b_eml_find(chartInstance, &c6_b_st, c6_x, c6_ii);
      c6_i4 = c6_idx2Keep->size[0];
      c6_idx2Keep->size[0] = c6_ii->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idx2Keep, c6_i4,
        &c6_hb_emlrtRTEI);
      c6_c_loop_ub = c6_ii->size[0] - 1;
      for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
        c6_idx2Keep->data[c6_i5] = (real_T)c6_ii->data[c6_i5];
      }

      c6_c_centers = c6_b_centers->size[0];
      c6_i6 = c6_b_centers->size[1] - 1;
      c6_i7 = c6_centers->size[0] * c6_centers->size[1];
      c6_centers->size[0] = c6_idx2Keep->size[0];
      c6_centers->size[1] = c6_i6 + 1;
      c6_st.site = &c6_ug_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i7,
        &c6_ib_emlrtRTEI);
      c6_d_loop_ub = c6_i6;
      for (c6_i8 = 0; c6_i8 <= c6_d_loop_ub; c6_i8++) {
        c6_e_loop_ub = c6_idx2Keep->size[0] - 1;
        for (c6_i9 = 0; c6_i9 <= c6_e_loop_ub; c6_i9++) {
          c6_i11 = (int32_T)c6_idx2Keep->data[c6_i9];
          if ((c6_i11 < 1) || (c6_i11 > c6_c_centers)) {
            emlrtDynamicBoundsCheckR2012b(c6_i11, 1, c6_c_centers,
              &c6_gb_emlrtBCI, (void *)c6_sp);
          }

          c6_centers->data[c6_i9 + c6_centers->size[0] * c6_i8] =
            c6_b_centers->data[(c6_i11 + c6_b_centers->size[0] * c6_i8) - 1];
        }
      }

      c6_b_metric = c6_metric->size[0];
      c6_f_loop_ub = c6_idx2Keep->size[0] - 1;
      for (c6_i10 = 0; c6_i10 <= c6_f_loop_ub; c6_i10++) {
        c6_i12 = (int32_T)c6_idx2Keep->data[c6_i10];
        if ((c6_i12 < 1) || (c6_i12 > c6_b_metric)) {
          emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_b_metric, &c6_hb_emlrtBCI,
            (void *)c6_sp);
        }
      }

      c6_b2 = (c6_centers->size[0] == 0);
      c6_b3 = (c6_centers->size[1] == 0);
      if (c6_b2 || c6_b3) {
        c6_centers->size[0] = 0;
        c6_centers->size[1] = 0;
      }
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_ii);
  c6_emxFree_boolean_T(chartInstance, &c6_x);
  c6_emxFree_real_T(chartInstance, &c6_metric);
  c6_emxFree_real_T(chartInstance, &c6_b_centers);
  c6_emxFree_real_T(chartInstance, &c6_idx2Keep);
}

static void c6_c_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200])
{
  static creal_T c6_Opca[21] = { { -1.0,/* re */
      -1.2246467991473532E-16          /* im */
    }, { -0.93777357609357537,         /* re */
      -0.34724734697426746             /* im */
    }, { -0.76205960809016426,         /* re */
      -0.647506875420999               /* im */
    }, { -0.49830021971948496,         /* re */
      -0.86700455075363536             /* im */
    }, { -0.18048376720660692,         /* re */
      -0.983577963241812               /* im */
    }, { 0.15350522605518022,          /* re */
      -0.9881478358898268              /* im */
    }, { 0.46644043668607205,          /* re */
      -0.8845526095287416              /* im */
    }, { 0.72572063833108036,          /* re */
      -0.68798950217305577             /* im */
    }, { 0.906400337766064,            /* re */
      -0.42241972929488636             /* im */
    }, { 0.99309060155704632,          /* re */
      -0.11735014741816042             /* im */
    }, { 0.98068466090742334,          /* re */
      0.19559549038996829              /* im */
    }, { 0.87398959317999314,          /* re */
      0.48594463780668484              /* im */
    }, { 0.68644174425232563,          /* re */
      0.7271847988976563               /* im */
    }, { 0.43814572575554223,          /* re */
      0.89890395649488009              /* im */
    }, { 0.15350522605516881,          /* re */
      0.98814783588982857              /* im */
    }, { -0.14128781059538542,         /* re */
      0.98996856241860653              /* im */
    }, { -0.42066504345624778,         /* re */
      0.90721602786434119              /* im */
    }, { -0.66179737635052438,         /* re */
      0.74968275467397694              /* im */
    }, { -0.84627074217591736,         /* re */
      0.53275306750597129              /* im */
    }, { -0.96123570838747407,         /* re */
      0.27572796905796632              /* im */
    }, { -1.0,                         /* re */
      1.2246467991473532E-16           /* im */
    } };

  static real_T c6_b_dv[21] = { 219.91148575128551, 223.05307840487532,
    226.1946710584651, 229.33626371205489, 232.4778563656447, 235.61944901923448,
    238.76104167282426, 241.90263432641407, 245.04422698000386,
    248.18581963359367, 251.32741228718345, 254.46900494077323, 257.610597594363,
    260.75219024795285, 263.89378290154264, 267.03537555513242,
    270.1769682087222, 273.318560862312, 276.46015351590177, 279.60174616949161,
    282.74333882308139 };

  c6_emxArray_boolean_T *c6_inside;
  c6_emxArray_creal_T *c6_b_w;
  c6_emxArray_creal_T *c6_w;
  c6_emxArray_creal_T *c6_wkeep;
  c6_emxArray_int32_T *c6_b_xc;
  c6_emxArray_int32_T *c6_b_yc;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_int32_T *c6_jj;
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_xckeep;
  c6_emxArray_int32_T *c6_yckeep;
  c6_emxArray_real32_T *c6_xc;
  c6_emxArray_real32_T *c6_yc;
  c6_emxArray_real_T *c6_Ex;
  c6_emxArray_real_T *c6_Ex_chunk;
  c6_emxArray_real_T *c6_Ey;
  c6_emxArray_real_T *c6_Ey_chunk;
  c6_emxArray_real_T *c6_idxE;
  c6_emxArray_real_T *c6_idxE_chunk;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_varargin_2;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  creal_T c6_w0[21];
  real_T c6_ai;
  real_T c6_ar;
  real_T c6_b_b;
  real_T c6_b_d;
  real_T c6_b_idx;
  real_T c6_b_idx1;
  real_T c6_b_idx2;
  real_T c6_b_k;
  real_T c6_b_varargin_2;
  real_T c6_bi;
  real_T c6_bim;
  real_T c6_br;
  real_T c6_brm;
  real_T c6_c_b;
  real_T c6_c_i;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d_b;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_dim1;
  real_T c6_e_x;
  real_T c6_e_y;
  real_T c6_edgeThresh;
  real_T c6_f_a;
  real_T c6_f_s;
  real_T c6_f_x;
  real_T c6_f_y;
  real_T c6_g_a;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_h_a;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_i_a;
  real_T c6_lenE;
  real_T c6_minval;
  real_T c6_ni;
  real_T c6_nr;
  real_T c6_sgnbi;
  real_T c6_sgnbr;
  real_T c6_sizeChunk;
  int32_T c6_rows_to_keep_size[1];
  int32_T c6_b_i;
  int32_T c6_b_loop_ub;
  int32_T c6_c_idx;
  int32_T c6_c_idx1;
  int32_T c6_c_idx2;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_idx;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i104;
  int32_T c6_i105;
  int32_T c6_i106;
  int32_T c6_i107;
  int32_T c6_i108;
  int32_T c6_i109;
  int32_T c6_i11;
  int32_T c6_i110;
  int32_T c6_i111;
  int32_T c6_i112;
  int32_T c6_i113;
  int32_T c6_i114;
  int32_T c6_i115;
  int32_T c6_i116;
  int32_T c6_i117;
  int32_T c6_i118;
  int32_T c6_i119;
  int32_T c6_i12;
  int32_T c6_i120;
  int32_T c6_i121;
  int32_T c6_i122;
  int32_T c6_i123;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_idx1;
  int32_T c6_idx2;
  int32_T c6_idxEdge;
  int32_T c6_idxkeep;
  int32_T c6_j_b;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_b;
  int32_T c6_k_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_szxc;
  real32_T c6_Gmax;
  real32_T c6_b;
  real32_T c6_b_x;
  real32_T c6_b_y;
  real32_T c6_b_z;
  real32_T c6_c_y;
  real32_T c6_c_z;
  real32_T c6_d_a;
  real32_T c6_e_a;
  real32_T c6_i_b;
  real32_T c6_i_x;
  real32_T c6_i_y;
  real32_T c6_j_x;
  real32_T c6_j_y;
  real32_T c6_k_x;
  real32_T c6_k_y;
  real32_T c6_l_b;
  real32_T c6_l_x;
  real32_T c6_l_y;
  real32_T c6_m_x;
  real32_T c6_m_y;
  real32_T c6_n_x;
  real32_T c6_n_y;
  real32_T c6_o_x;
  real32_T c6_p_x;
  real32_T c6_t;
  real32_T c6_x1;
  real32_T c6_x2;
  real32_T c6_y;
  real32_T c6_z;
  boolean_T c6_rows_to_keep_data[19200];
  boolean_T c6_x[19200];
  boolean_T c6_x_data[19200];
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b5;
  boolean_T c6_c_varargin_1;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_flat;
  boolean_T c6_g_b;
  boolean_T c6_guard1 = false;
  boolean_T c6_guard2 = false;
  boolean_T c6_guard3 = false;
  boolean_T c6_h_b;
  boolean_T c6_m_b;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_c_varargin_1 = c6_b_varargin_1[0];
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_x[c6_i] = ((int32_T)c6_b_varargin_1[c6_i] == (int32_T)c6_c_varargin_1);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_x_data[c6_i1] = c6_x[c6_i1];
  }

  c6_flat = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    if (!c6_x_data[(int32_T)c6_b_k - 1]) {
      c6_flat = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_flat) {
    for (c6_i2 = 0; c6_i2 < 19200; c6_i2++) {
      c6_f_accumMatrix[c6_i2].re = 0.0;
      c6_f_accumMatrix[c6_i2].im = 0.0;
    }

    for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
      c6_f_gradientImg[c6_i4] = 0.0F;
    }
  } else {
    c6_st.site = &c6_sc_emlrtRSI;
    for (c6_i3 = 0; c6_i3 < 19200; c6_i3++) {
      chartInstance->c6_b_s[c6_i3] = (real32_T)c6_b_varargin_1[c6_i3];
    }

    c6_b_st.site = &c6_xb_emlrtRSI;
    c6_imfilter(chartInstance, &c6_b_st, chartInstance->c6_b_s,
                chartInstance->c6_b_A);
    c6_st.site = &c6_tc_emlrtRSI;
    c6_b_st.site = &c6_gc_emlrtRSI;
    c6_b_imfilter(chartInstance, &c6_b_st, chartInstance->c6_b_A,
                  chartInstance->c6_b_Gx);
    c6_b_st.site = &c6_hc_emlrtRSI;
    c6_c_imfilter(chartInstance, &c6_b_st, chartInstance->c6_b_A,
                  chartInstance->c6_b_Gy);
    for (c6_c_k = 0; c6_c_k < 19200; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_x = chartInstance->c6_b_Gx[c6_d_k];
      c6_y = chartInstance->c6_b_Gy[c6_d_k];
      c6_x1 = c6_b_x;
      c6_x2 = c6_y;
      c6_d_a = c6_x1;
      c6_b = c6_x2;
      c6_z = muSingleScalarHypot(c6_d_a, c6_b);
      c6_f_gradientImg[c6_d_k] = c6_z;
    }

    c6_st.site = &c6_uc_emlrtRSI;
    for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
      chartInstance->c6_b_s[c6_i5] = c6_f_gradientImg[c6_i5];
    }

    c6_Gmax = c6_maximum(chartInstance, chartInstance->c6_b_s);
    c6_b_y = c6_Gmax;
    c6_c_y = c6_b_y;
    for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
      chartInstance->c6_b_s[c6_i6] = c6_f_gradientImg[c6_i6] / c6_c_y;
    }

    c6_b_st.site = &c6_yc_emlrtRSI;
    c6_edgeThresh = c6_graythresh(chartInstance, &c6_b_st, chartInstance->c6_b_s);
    c6_e_a = c6_Gmax;
    c6_b_b = c6_edgeThresh;
    c6_t = c6_e_a * (real32_T)c6_b_b;
    c6_b_st.site = &c6_ad_emlrtRSI;
    for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
      c6_x[c6_i7] = (c6_f_gradientImg[c6_i7] > c6_t);
    }

    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ey, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_ii, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_jj, 1, &c6_sc_emlrtRTEI);
    c6_c_st.site = &c6_id_emlrtRSI;
    c6_eml_find(chartInstance, &c6_c_st, c6_x, c6_ii, c6_jj);
    c6_i8 = c6_Ey->size[0];
    c6_Ey->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ey, c6_i8,
      &c6_mb_emlrtRTEI);
    c6_loop_ub = c6_ii->size[0] - 1;
    for (c6_i9 = 0; c6_i9 <= c6_loop_ub; c6_i9++) {
      c6_Ey->data[c6_i9] = (real_T)c6_ii->data[c6_i9];
    }

    c6_emxFree_int32_T(chartInstance, &c6_ii);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ex, 1, &c6_sc_emlrtRTEI);
    c6_i10 = c6_Ex->size[0];
    c6_Ex->size[0] = c6_jj->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ex, c6_i10,
      &c6_nb_emlrtRTEI);
    c6_b_loop_ub = c6_jj->size[0] - 1;
    for (c6_i11 = 0; c6_i11 <= c6_b_loop_ub; c6_i11++) {
      c6_Ex->data[c6_i11] = (real_T)c6_jj->data[c6_i11];
    }

    c6_emxFree_int32_T(chartInstance, &c6_jj);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_ndx, 1, &c6_tc_emlrtRTEI);
    c6_st.site = &c6_vc_emlrtRSI;
    c6_i12 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_Ey->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i12,
      &c6_ob_emlrtRTEI);
    c6_c_loop_ub = c6_Ey->size[0] - 1;
    for (c6_i13 = 0; c6_i13 <= c6_c_loop_ub; c6_i13++) {
      c6_ndx->data[c6_i13] = c6_Ey->data[c6_i13];
    }

    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_varargin_2, 1,
                       &c6_pb_emlrtRTEI);
    c6_i14 = c6_varargin_2->size[0];
    c6_varargin_2->size[0] = c6_Ex->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_varargin_2, c6_i14,
      &c6_pb_emlrtRTEI);
    c6_d_loop_ub = c6_Ex->size[0] - 1;
    for (c6_i15 = 0; c6_i15 <= c6_d_loop_ub; c6_i15++) {
      c6_varargin_2->data[c6_i15] = c6_Ex->data[c6_i15];
    }

    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_r, 1, &c6_uc_emlrtRTEI);
    c6_b_st.site = &c6_od_emlrtRSI;
    c6_eml_sub2ind(chartInstance, &c6_b_st, c6_ndx, c6_varargin_2, c6_r);
    c6_i16 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_r->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i16,
      &c6_qb_emlrtRTEI);
    c6_e_loop_ub = c6_r->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_varargin_2);
    for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
      c6_ndx->data[c6_i17] = (real_T)c6_r->data[c6_i17];
    }

    c6_emxFree_int32_T(chartInstance, &c6_r);
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_idxE, 1, &c6_rb_emlrtRTEI);
    c6_i18 = c6_idxE->size[0];
    c6_idxE->size[0] = c6_ndx->size[0];
    c6_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE, c6_i18,
      &c6_rb_emlrtRTEI);
    c6_f_loop_ub = c6_ndx->size[0] - 1;
    for (c6_i19 = 0; c6_i19 <= c6_f_loop_ub; c6_i19++) {
      c6_idxE->data[c6_i19] = c6_ndx->data[c6_i19];
    }

    c6_emxFree_real_T(chartInstance, &c6_ndx);
    for (c6_i20 = 0; c6_i20 < 21; c6_i20++) {
      c6_ar = c6_Opca[c6_i20].re;
      c6_ai = c6_Opca[c6_i20].im;
      c6_br = c6_b_dv[c6_i20];
      c6_bi = 0.0;
      if (c6_bi == 0.0) {
        if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        } else {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        }
      } else if (c6_br == 0.0) {
        if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        } else {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        }
      } else {
        c6_brm = muDoubleScalarAbs(c6_br);
        c6_bim = muDoubleScalarAbs(c6_bi);
        if (c6_brm > c6_bim) {
          c6_f_s = c6_bi / c6_br;
          c6_d = c6_br + c6_f_s * c6_bi;
          c6_nr = c6_ar + c6_f_s * c6_ai;
          c6_ni = c6_ai - c6_f_s * c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        } else if (c6_bim == c6_brm) {
          if (c6_br > 0.0) {
            c6_sgnbr = 0.5;
          } else {
            c6_sgnbr = -0.5;
          }

          if (c6_bi > 0.0) {
            c6_sgnbi = 0.5;
          } else {
            c6_sgnbi = -0.5;
          }

          c6_nr = c6_ar * c6_sgnbr + c6_ai * c6_sgnbi;
          c6_ni = c6_ai * c6_sgnbr - c6_ar * c6_sgnbi;
          c6_w0[c6_i20].re = c6_nr / c6_brm;
          c6_w0[c6_i20].im = c6_ni / c6_brm;
        } else {
          c6_f_s = c6_br / c6_bi;
          c6_d = c6_bi + c6_f_s * c6_br;
          c6_nr = c6_f_s * c6_ar + c6_ai;
          c6_ni = c6_f_s * c6_ai - c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        }
      }
    }

    c6_lenE = (real_T)c6_Ex->size[0];
    for (c6_i21 = 0; c6_i21 < 19200; c6_i21++) {
      c6_f_accumMatrix[c6_i21].re = 0.0;
      c6_f_accumMatrix[c6_i21].im = 0.0;
    }

    c6_i22 = (int32_T)((c6_lenE + 47618.0) / 47619.0);
    emlrtForLoopVectorCheckR2021a(1.0, 47619.0, c6_lenE, mxDOUBLE_CLASS, c6_i22,
      &c6_cg_emlrtRTEI, (void *)c6_sp);
    c6_b_i = 0;
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ex_chunk, 1, &c6_ic_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ey_chunk, 1, &c6_jc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idxE_chunk, 1, &c6_kc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_xc, 2, &c6_lc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_yc, 2, &c6_mc_emlrtRTEI);
    c6_emxInit_creal_T(chartInstance, c6_sp, &c6_w, 2, &c6_nc_emlrtRTEI);
    c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_inside, 2, &c6_oc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_xckeep, 1, &c6_pc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_yckeep, 1, &c6_qc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_wkeep, 1, &c6_rc_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_yc, 1, &c6_fc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_xc, 1, &c6_gc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_b_w, 1, &c6_hc_emlrtRTEI);
    while (c6_b_i <= c6_i22 - 1) {
      c6_c_i = (real_T)c6_b_i * 47619.0 + 1.0;
      c6_b_varargin_2 = c6_lenE;
      c6_d_y = c6_b_varargin_2;
      c6_e_y = c6_d_y;
      c6_f_y = c6_e_y;
      c6_c_b = c6_f_y;
      c6_g_y = c6_c_b;
      c6_h_y = c6_g_y;
      c6_minval = c6_h_y;
      c6_st.site = &c6_wc_emlrtRSI;
      c6_f_a = c6_c_i;
      c6_b_d = c6_minval;
      c6_b_st.site = &c6_pd_emlrtRSI;
      c6_g_a = c6_f_a;
      c6_d_b = c6_b_d;
      c6_c_x = c6_g_a;
      c6_e_b = muDoubleScalarIsNaN(c6_c_x);
      c6_guard1 = false;
      c6_guard2 = false;
      c6_guard3 = false;
      if (c6_e_b) {
        c6_guard2 = true;
      } else {
        c6_d_x = c6_d_b;
        c6_f_b = muDoubleScalarIsNaN(c6_d_x);
        if (c6_f_b) {
          c6_guard2 = true;
        } else if (c6_d_b < c6_g_a) {
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 0;
        } else {
          c6_e_x = c6_g_a;
          c6_g_b = muDoubleScalarIsInf(c6_e_x);
          if (c6_g_b) {
            c6_guard3 = true;
          } else {
            c6_f_x = c6_d_b;
            c6_h_b = muDoubleScalarIsInf(c6_f_x);
            if (c6_h_b) {
              c6_guard3 = true;
            } else {
              c6_guard1 = true;
            }
          }
        }
      }

      if (c6_guard3) {
        if (c6_g_a == c6_d_b) {
          c6_i23 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i23,
            &c6_sb_emlrtRTEI);
          c6_r1->data[0] = rtNaN;
        } else {
          c6_guard1 = true;
        }
      }

      if (c6_guard2) {
        c6_i24 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = 1;
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i24,
          &c6_sb_emlrtRTEI);
        c6_r1->data[0] = rtNaN;
      }

      if (c6_guard1) {
        c6_g_x = c6_g_a;
        c6_h_x = c6_g_x;
        c6_h_x = muDoubleScalarFloor(c6_h_x);
        if (c6_h_x == c6_g_a) {
          c6_i26 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = (int32_T)(c6_d_b - c6_g_a) + 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i26,
            &c6_sb_emlrtRTEI);
          c6_g_loop_ub = (int32_T)(c6_d_b - c6_g_a);
          for (c6_i28 = 0; c6_i28 <= c6_g_loop_ub; c6_i28++) {
            c6_r1->data[c6_i28] = c6_g_a + (real_T)c6_i28;
          }
        } else {
          c6_c_st.site = &c6_qd_emlrtRSI;
          c6_eml_float_colon(chartInstance, &c6_c_st, c6_g_a, c6_d_b, c6_r1);
        }
      }

      c6_sizeChunk = (real_T)c6_r1->size[1];
      c6_i25 = c6_Ex_chunk->size[0];
      c6_Ex_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_tg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ex_chunk, c6_i25,
        &c6_tb_emlrtRTEI);
      c6_i27 = c6_Ey_chunk->size[0];
      c6_Ey_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_sg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ey_chunk, c6_i27,
        &c6_ub_emlrtRTEI);
      c6_i29 = c6_idxE_chunk->size[0];
      c6_idxE_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_rg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE_chunk, c6_i29,
        &c6_vb_emlrtRTEI);
      c6_idxEdge = (int32_T)c6_c_i;
      c6_i30 = (int32_T)c6_sizeChunk - 1;
      for (c6_idx = 0; c6_idx <= c6_i30; c6_idx++) {
        c6_b_idx = (real_T)c6_idx + 1.0;
        c6_i32 = c6_Ex->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i32)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i32, &c6_ib_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i33 = c6_Ex_chunk->size[0];
        c6_i34 = (int32_T)c6_b_idx;
        if ((c6_i34 < 1) || (c6_i34 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i34, 1, c6_i33, &c6_jb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ex_chunk->data[c6_i34 - 1] = c6_Ex->data[c6_idxEdge - 1];
        c6_i36 = c6_Ey->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i36)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i36, &c6_kb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i38 = c6_Ey_chunk->size[0];
        c6_i39 = (int32_T)c6_b_idx;
        if ((c6_i39 < 1) || (c6_i39 > c6_i38)) {
          emlrtDynamicBoundsCheckR2012b(c6_i39, 1, c6_i38, &c6_lb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ey_chunk->data[c6_i39 - 1] = c6_Ey->data[c6_idxEdge - 1];
        c6_i41 = c6_idxE->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i41)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i41, &c6_mb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i42 = c6_idxE_chunk->size[0];
        c6_i43 = (int32_T)c6_b_idx;
        if ((c6_i43 < 1) || (c6_i43 > c6_i42)) {
          emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i42, &c6_nb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_idxE_chunk->data[c6_i43 - 1] = c6_idxE->data[c6_idxEdge - 1];
        c6_idxEdge++;
      }

      c6_dim1 = (real_T)c6_idxE_chunk->size[0];
      c6_i31 = c6_xc->size[0] * c6_xc->size[1];
      c6_xc->size[0] = (int32_T)c6_dim1;
      c6_xc->size[1] = 21;
      c6_st.site = &c6_mh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_xc, c6_i31,
        &c6_wb_emlrtRTEI);
      c6_i35 = c6_yc->size[0] * c6_yc->size[1];
      c6_yc->size[0] = (int32_T)c6_dim1;
      c6_yc->size[1] = 21;
      c6_st.site = &c6_lh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_yc, c6_i35,
        &c6_xb_emlrtRTEI);
      c6_i37 = c6_w->size[0] * c6_w->size[1];
      c6_w->size[0] = (int32_T)c6_dim1;
      c6_w->size[1] = 21;
      c6_st.site = &c6_nh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T(chartInstance, &c6_st, c6_w, c6_i37,
        &c6_yb_emlrtRTEI);
      c6_i40 = c6_inside->size[0] * c6_inside->size[1];
      c6_inside->size[0] = (int32_T)c6_dim1;
      c6_inside->size[1] = 21;
      c6_st.site = &c6_kh_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_st, c6_inside, c6_i40,
        &c6_ac_emlrtRTEI);
      c6_rows_to_keep_size[0] = (int32_T)c6_dim1;
      c6_h_loop_ub = (int32_T)c6_dim1 - 1;
      for (c6_i44 = 0; c6_i44 <= c6_h_loop_ub; c6_i44++) {
        c6_rows_to_keep_data[c6_i44] = false;
      }

      for (c6_idx2 = 0; c6_idx2 < 21; c6_idx2++) {
        c6_b_idx2 = (real_T)c6_idx2 + 1.0;
        c6_i46 = (int32_T)c6_dim1 - 1;
        for (c6_idx1 = 0; c6_idx1 <= c6_i46; c6_idx1++) {
          c6_b_idx1 = (real_T)c6_idx1 + 1.0;
          c6_i48 = c6_idxE_chunk->size[0];
          c6_i49 = (int32_T)c6_b_idx1;
          if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
            emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_ob_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_x = chartInstance->c6_b_Gx[(int32_T)c6_idxE_chunk->data[c6_i49 -
            1] - 1];
          c6_i51 = c6_idxE_chunk->size[0];
          c6_i52 = (int32_T)c6_b_idx1;
          if ((c6_i52 < 1) || (c6_i52 > c6_i51)) {
            emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i51, &c6_pb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i52 - 1] - 1];
          c6_j_x = c6_i_x;
          c6_j_y = c6_i_y;
          c6_b_z = c6_j_x / c6_j_y;
          c6_h_a = -(35.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_i_b = c6_b_z;
          c6_k_y = (real32_T)c6_h_a * c6_i_b;
          c6_i57 = c6_Ex_chunk->size[0];
          c6_i59 = (int32_T)c6_b_idx1;
          if ((c6_i59 < 1) || (c6_i59 > c6_i57)) {
            emlrtDynamicBoundsCheckR2012b(c6_i59, 1, c6_i57, &c6_qb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_k_x = (real32_T)c6_Ex_chunk->data[c6_i59 - 1] + c6_k_y;
          c6_l_x = c6_k_x;
          c6_l_x = muSingleScalarRound(c6_l_x);
          c6_i63 = c6_xc->size[0];
          c6_i64 = (int32_T)c6_b_idx1;
          if ((c6_i64 < 1) || (c6_i64 > c6_i63)) {
            emlrtDynamicBoundsCheckR2012b(c6_i64, 1, c6_i63, &c6_tb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_xc->data[(c6_i64 + c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_l_x;
          c6_i68 = c6_idxE_chunk->size[0];
          c6_i70 = (int32_T)c6_b_idx1;
          if ((c6_i70 < 1) || (c6_i70 > c6_i68)) {
            emlrtDynamicBoundsCheckR2012b(c6_i70, 1, c6_i68, &c6_ub_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_x = chartInstance->c6_b_Gy[(int32_T)c6_idxE_chunk->data[c6_i70 -
            1] - 1];
          c6_i74 = c6_idxE_chunk->size[0];
          c6_i76 = (int32_T)c6_b_idx1;
          if ((c6_i76 < 1) || (c6_i76 > c6_i74)) {
            emlrtDynamicBoundsCheckR2012b(c6_i76, 1, c6_i74, &c6_xb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_l_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i76 - 1] - 1];
          c6_n_x = c6_m_x;
          c6_m_y = c6_l_y;
          c6_c_z = c6_n_x / c6_m_y;
          c6_i_a = -(35.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_l_b = c6_c_z;
          c6_n_y = (real32_T)c6_i_a * c6_l_b;
          c6_i80 = c6_Ey_chunk->size[0];
          c6_i83 = (int32_T)c6_b_idx1;
          if ((c6_i83 < 1) || (c6_i83 > c6_i80)) {
            emlrtDynamicBoundsCheckR2012b(c6_i83, 1, c6_i80, &c6_dc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_o_x = (real32_T)c6_Ey_chunk->data[c6_i83 - 1] + c6_n_y;
          c6_p_x = c6_o_x;
          c6_p_x = muSingleScalarRound(c6_p_x);
          c6_i88 = c6_yc->size[0];
          c6_i90 = (int32_T)c6_b_idx1;
          if ((c6_i90 < 1) || (c6_i90 > c6_i88)) {
            emlrtDynamicBoundsCheckR2012b(c6_i90, 1, c6_i88, &c6_nc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_yc->data[(c6_i90 + c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_p_x;
          c6_i93 = c6_w->size[0];
          c6_i94 = (int32_T)c6_b_idx1;
          if ((c6_i94 < 1) || (c6_i94 > c6_i93)) {
            emlrtDynamicBoundsCheckR2012b(c6_i94, 1, c6_i93, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i94 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re
            = c6_w0[(int32_T)c6_b_idx2 - 1].re;
          c6_i97 = c6_w->size[0];
          c6_i98 = (int32_T)c6_b_idx1;
          if ((c6_i98 < 1) || (c6_i98 > c6_i97)) {
            emlrtDynamicBoundsCheckR2012b(c6_i98, 1, c6_i97, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i98 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im
            = c6_w0[(int32_T)c6_b_idx2 - 1].im;
          c6_i100 = c6_xc->size[0];
          c6_i102 = (int32_T)c6_b_idx1;
          if ((c6_i102 < 1) || (c6_i102 > c6_i100)) {
            emlrtDynamicBoundsCheckR2012b(c6_i102, 1, c6_i100, &c6_pc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_b = (c6_xc->data[(c6_i102 + c6_xc->size[0] * ((int32_T)c6_b_idx2
                      - 1)) - 1] >= 1.0F);
          c6_i104 = c6_xc->size[0];
          c6_i105 = (int32_T)c6_b_idx1;
          if ((c6_i105 < 1) || (c6_i105 > c6_i104)) {
            emlrtDynamicBoundsCheckR2012b(c6_i105, 1, c6_i104, &c6_qc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b1 = (c6_xc->data[(c6_i105 + c6_xc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 160.0F);
          c6_b2 = (c6_m_b && c6_b1);
          c6_i108 = c6_yc->size[0];
          c6_i109 = (int32_T)c6_b_idx1;
          if ((c6_i109 < 1) || (c6_i109 > c6_i108)) {
            emlrtDynamicBoundsCheckR2012b(c6_i109, 1, c6_i108, &c6_rc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b3 = (c6_yc->data[(c6_i109 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] >= 1.0F);
          c6_b4 = (c6_b2 && c6_b3);
          c6_i112 = c6_yc->size[0];
          c6_i113 = (int32_T)c6_b_idx1;
          if ((c6_i113 < 1) || (c6_i113 > c6_i112)) {
            emlrtDynamicBoundsCheckR2012b(c6_i113, 1, c6_i112, &c6_sc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b5 = (c6_yc->data[(c6_i113 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 120.0F);
          c6_i115 = c6_inside->size[0];
          c6_i117 = (int32_T)c6_b_idx1;
          if ((c6_i117 < 1) || (c6_i117 > c6_i115)) {
            emlrtDynamicBoundsCheckR2012b(c6_i117, 1, c6_i115, &c6_tc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_inside->data[(c6_i117 + c6_inside->size[0] * ((int32_T)c6_b_idx2 -
            1)) - 1] = (c6_b4 && c6_b5);
          c6_i119 = c6_inside->size[0];
          c6_i120 = (int32_T)c6_b_idx1;
          if ((c6_i120 < 1) || (c6_i120 > c6_i119)) {
            emlrtDynamicBoundsCheckR2012b(c6_i120, 1, c6_i119, &c6_uc_emlrtBCI,
              (void *)c6_sp);
          }

          if (c6_inside->data[(c6_i120 + c6_inside->size[0] * ((int32_T)
                c6_b_idx2 - 1)) - 1]) {
            c6_i123 = (int32_T)c6_b_idx1;
            if ((c6_i123 < 1) || (c6_i123 > c6_rows_to_keep_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c6_i123, 1, c6_rows_to_keep_size[0],
                &c6_vc_emlrtBCI, (void *)c6_sp);
            }

            c6_rows_to_keep_data[c6_i123 - 1] = true;
          }
        }
      }

      c6_i45 = c6_xckeep->size[0];
      c6_xckeep->size[0] = c6_xc->size[0] * 21;
      c6_st.site = &c6_ah_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_xckeep, c6_i45,
        &c6_cc_emlrtRTEI);
      c6_i47 = c6_yckeep->size[0];
      c6_yckeep->size[0] = c6_yc->size[0] * 21;
      c6_st.site = &c6_yg_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_yckeep, c6_i47,
        &c6_dc_emlrtRTEI);
      c6_i50 = c6_wkeep->size[0];
      c6_wkeep->size[0] = c6_w->size[0] * 21;
      c6_st.site = &c6_oh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_st, c6_wkeep, c6_i50,
        &c6_ec_emlrtRTEI);
      c6_idxkeep = 0;
      for (c6_c_idx2 = 0; c6_c_idx2 < 21; c6_c_idx2++) {
        c6_b_idx2 = (real_T)c6_c_idx2 + 1.0;
        c6_i54 = (int32_T)c6_dim1 - 1;
        for (c6_c_idx1 = 0; c6_c_idx1 <= c6_i54; c6_c_idx1++) {
          c6_b_idx1 = (real_T)c6_c_idx1 + 1.0;
          c6_i56 = (int32_T)c6_b_idx1;
          if ((c6_i56 < 1) || (c6_i56 > c6_rows_to_keep_size[0])) {
            emlrtDynamicBoundsCheckR2012b(c6_i56, 1, c6_rows_to_keep_size[0],
              &c6_rb_emlrtBCI, (void *)c6_sp);
          }

          if (c6_rows_to_keep_data[c6_i56 - 1]) {
            c6_i60 = c6_inside->size[0];
            c6_i61 = (int32_T)c6_b_idx1;
            if ((c6_i61 < 1) || (c6_i61 > c6_i60)) {
              emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_i60, &c6_sb_emlrtBCI,
                (void *)c6_sp);
            }

            if (c6_inside->data[(c6_i61 + c6_inside->size[0] * ((int32_T)
                  c6_b_idx2 - 1)) - 1]) {
              c6_idxkeep++;
              c6_i66 = c6_xc->size[0];
              c6_i67 = (int32_T)c6_b_idx1;
              if ((c6_i67 < 1) || (c6_i67 > c6_i66)) {
                emlrtDynamicBoundsCheckR2012b(c6_i67, 1, c6_i66, &c6_vb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i69 = c6_xckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i69)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i69,
                  &c6_wb_emlrtBCI, (void *)c6_sp);
              }

              c6_xckeep->data[c6_idxkeep - 1] = (int32_T)c6_xc->data[(c6_i67 +
                c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i73 = c6_yc->size[0];
              c6_i75 = (int32_T)c6_b_idx1;
              if ((c6_i75 < 1) || (c6_i75 > c6_i73)) {
                emlrtDynamicBoundsCheckR2012b(c6_i75, 1, c6_i73, &c6_yb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i77 = c6_yckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i77)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i77,
                  &c6_ac_emlrtBCI, (void *)c6_sp);
              }

              c6_yckeep->data[c6_idxkeep - 1] = (int32_T)c6_yc->data[(c6_i75 +
                c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i78 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i78)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i78,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_i79 = c6_w->size[0];
              c6_i82 = (int32_T)c6_b_idx1;
              if ((c6_i82 < 1) || (c6_i82 > c6_i79)) {
                emlrtDynamicBoundsCheckR2012b(c6_i82, 1, c6_i79, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].re = c6_w->data[(c6_i82 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re;
              c6_i86 = c6_w->size[0];
              c6_i87 = (int32_T)c6_b_idx1;
              if ((c6_i87 < 1) || (c6_i87 > c6_i86)) {
                emlrtDynamicBoundsCheckR2012b(c6_i87, 1, c6_i86, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i91 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i91)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i91,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].im = c6_w->data[(c6_i87 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c6_st.site = &c6_xc_emlrtRSI;
      c6_i53 = c6_b_yc->size[0];
      c6_b_yc->size[0] = c6_yckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_yc, c6_i53,
        &c6_fc_emlrtRTEI);
      c6_i_loop_ub = c6_yckeep->size[0] - 1;
      for (c6_i55 = 0; c6_i55 <= c6_i_loop_ub; c6_i55++) {
        c6_b_yc->data[c6_i55] = c6_yckeep->data[c6_i55];
      }

      c6_i58 = c6_b_xc->size[0];
      c6_b_xc->size[0] = c6_xckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_xc, c6_i58,
        &c6_gc_emlrtRTEI);
      c6_j_loop_ub = c6_xckeep->size[0] - 1;
      for (c6_i62 = 0; c6_i62 <= c6_j_loop_ub; c6_i62++) {
        c6_b_xc->data[c6_i62] = c6_xckeep->data[c6_i62];
      }

      c6_szxc = c6_idxkeep;
      c6_i65 = c6_b_w->size[0];
      c6_b_w->size[0] = c6_wkeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_b_st, c6_b_w, c6_i65,
        &c6_hc_emlrtRTEI);
      c6_k_loop_ub = c6_wkeep->size[0] - 1;
      for (c6_i71 = 0; c6_i71 <= c6_k_loop_ub; c6_i71++) {
        c6_b_w->data[c6_i71] = c6_wkeep->data[c6_i71];
      }

      for (c6_i72 = 0; c6_i72 < 19200; c6_i72++) {
        chartInstance->c6_b_out[c6_i72].re = 0.0;
        chartInstance->c6_b_out[c6_i72].im = 0.0;
      }

      c6_b_st.site = &c6_sd_emlrtRSI;
      c6_j_b = c6_szxc;
      c6_k_b = c6_j_b;
      if (c6_k_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_k_b > 2147483646);
      }

      if (c6_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_c_idx = 1; c6_c_idx - 1 < c6_szxc; c6_c_idx++) {
        c6_d_idx = c6_c_idx;
        c6_i84 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i84)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i84, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i85 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i85 < 1) || (c6_i85 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i85, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i89 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i89)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i89, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i92 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i92 < 1) || (c6_i92 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i92, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        c6_i95 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i95)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i95, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i96 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i96 < 1) || (c6_i96 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i96, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i99 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i99)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i99, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i101 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i101 < 1) || (c6_i101 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i101, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i103 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i103)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i103, &c6_ic_emlrtBCI,
            &c6_st);
        }

        chartInstance->c6_b_out[(c6_i85 + 120 * (c6_i92 - 1)) - 1].re =
          chartInstance->c6_b_out[(c6_i96 + 120 * (c6_i101 - 1)) - 1].re +
          c6_b_w->data[c6_d_idx - 1].re;
        c6_i106 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i106)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i106, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i107 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i107 < 1) || (c6_i107 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i107, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i110 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i110)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i110, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i111 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i111 < 1) || (c6_i111 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i111, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i114 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i114)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i114, &c6_ic_emlrtBCI,
            &c6_st);
        }

        c6_i116 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i116)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i116, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i118 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i118 < 1) || (c6_i118 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i118, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i121 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i121)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i121, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i122 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i122 < 1) || (c6_i122 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i122, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        chartInstance->c6_b_out[(c6_i118 + 120 * (c6_i122 - 1)) - 1].im =
          chartInstance->c6_b_out[(c6_i107 + 120 * (c6_i111 - 1)) - 1].im +
          c6_b_w->data[c6_d_idx - 1].im;
      }

      for (c6_i81 = 0; c6_i81 < 19200; c6_i81++) {
        c6_f_accumMatrix[c6_i81].re += chartInstance->c6_b_out[c6_i81].re;
        c6_f_accumMatrix[c6_i81].im += chartInstance->c6_b_out[c6_i81].im;
      }

      c6_b_i++;
    }

    c6_emxFree_creal_T(chartInstance, &c6_b_w);
    c6_emxFree_int32_T(chartInstance, &c6_b_xc);
    c6_emxFree_int32_T(chartInstance, &c6_b_yc);
    c6_emxFree_real_T(chartInstance, &c6_Ex);
    c6_emxFree_real_T(chartInstance, &c6_Ey);
    c6_emxFree_real_T(chartInstance, &c6_r1);
    c6_emxFree_creal_T(chartInstance, &c6_wkeep);
    c6_emxFree_int32_T(chartInstance, &c6_yckeep);
    c6_emxFree_int32_T(chartInstance, &c6_xckeep);
    c6_emxFree_boolean_T(chartInstance, &c6_inside);
    c6_emxFree_creal_T(chartInstance, &c6_w);
    c6_emxFree_real32_T(chartInstance, &c6_yc);
    c6_emxFree_real32_T(chartInstance, &c6_xc);
    c6_emxFree_real_T(chartInstance, &c6_idxE_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ey_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ex_chunk);
    c6_emxFree_real_T(chartInstance, &c6_idxE);
  }
}

static void c6_d_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers)
{
  c6_emxArray_boolean_T *c6_x;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_real_T *c6_b_centers;
  c6_emxArray_real_T *c6_idx2Keep;
  c6_emxArray_real_T *c6_metric;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b_loop_ub;
  int32_T c6_b_metric;
  int32_T c6_c_centers;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_loop_ub;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_centers->size[0] = 0;
  c6_centers->size[1] = 0;
  c6_st.site = &c6_pc_emlrtRSI;
  c6_d_chaccum(chartInstance, &c6_st, c6_b_varargin_1,
               chartInstance->c6_b_accumMatrix, chartInstance->c6_b_gradientImg);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idx2Keep, 1, &c6_hb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_b_centers, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_metric, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_x, 2, &c6_gb_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_ii, 1, &c6_kb_emlrtRTEI);
  c6_st.site = &c6_ph_emlrtRSI;
  if (!c6_any(chartInstance, &c6_st, chartInstance->c6_b_accumMatrix)) {
  } else {
    c6_st.site = &c6_qc_emlrtRSI;
    c6_chcenters(chartInstance, &c6_st, chartInstance->c6_b_accumMatrix,
                 c6_b_centers, c6_metric);
    c6_i = c6_centers->size[0] * c6_centers->size[1];
    c6_centers->size[0] = c6_b_centers->size[0];
    c6_centers->size[1] = c6_b_centers->size[1];
    c6_st.site = &c6_qc_emlrtRSI;
    c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i,
      &c6_fb_emlrtRTEI);
    c6_loop_ub = c6_b_centers->size[0] * c6_b_centers->size[1] - 1;
    for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
      c6_centers->data[c6_i1] = c6_b_centers->data[c6_i1];
    }

    c6_b = (c6_b_centers->size[0] == 0);
    c6_b1 = (c6_b_centers->size[1] == 0);
    if (c6_b || c6_b1) {
    } else {
      c6_st.site = &c6_rc_emlrtRSI;
      c6_i2 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_metric->size[0];
      c6_x->size[1] = c6_metric->size[1];
      c6_b_st.site = &c6_rc_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_b_st, c6_x, c6_i2,
        &c6_gb_emlrtRTEI);
      c6_b_loop_ub = c6_metric->size[0] * c6_metric->size[1] - 1;
      for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
        c6_x->data[c6_i3] = (c6_metric->data[c6_i3] >= 0.15000000000000002);
      }

      c6_b_st.site = &c6_ng_emlrtRSI;
      c6_b_eml_find(chartInstance, &c6_b_st, c6_x, c6_ii);
      c6_i4 = c6_idx2Keep->size[0];
      c6_idx2Keep->size[0] = c6_ii->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idx2Keep, c6_i4,
        &c6_hb_emlrtRTEI);
      c6_c_loop_ub = c6_ii->size[0] - 1;
      for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
        c6_idx2Keep->data[c6_i5] = (real_T)c6_ii->data[c6_i5];
      }

      c6_c_centers = c6_b_centers->size[0];
      c6_i6 = c6_b_centers->size[1] - 1;
      c6_i7 = c6_centers->size[0] * c6_centers->size[1];
      c6_centers->size[0] = c6_idx2Keep->size[0];
      c6_centers->size[1] = c6_i6 + 1;
      c6_st.site = &c6_ug_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i7,
        &c6_ib_emlrtRTEI);
      c6_d_loop_ub = c6_i6;
      for (c6_i8 = 0; c6_i8 <= c6_d_loop_ub; c6_i8++) {
        c6_e_loop_ub = c6_idx2Keep->size[0] - 1;
        for (c6_i9 = 0; c6_i9 <= c6_e_loop_ub; c6_i9++) {
          c6_i11 = (int32_T)c6_idx2Keep->data[c6_i9];
          if ((c6_i11 < 1) || (c6_i11 > c6_c_centers)) {
            emlrtDynamicBoundsCheckR2012b(c6_i11, 1, c6_c_centers,
              &c6_gb_emlrtBCI, (void *)c6_sp);
          }

          c6_centers->data[c6_i9 + c6_centers->size[0] * c6_i8] =
            c6_b_centers->data[(c6_i11 + c6_b_centers->size[0] * c6_i8) - 1];
        }
      }

      c6_b_metric = c6_metric->size[0];
      c6_f_loop_ub = c6_idx2Keep->size[0] - 1;
      for (c6_i10 = 0; c6_i10 <= c6_f_loop_ub; c6_i10++) {
        c6_i12 = (int32_T)c6_idx2Keep->data[c6_i10];
        if ((c6_i12 < 1) || (c6_i12 > c6_b_metric)) {
          emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_b_metric, &c6_hb_emlrtBCI,
            (void *)c6_sp);
        }
      }

      c6_b2 = (c6_centers->size[0] == 0);
      c6_b3 = (c6_centers->size[1] == 0);
      if (c6_b2 || c6_b3) {
        c6_centers->size[0] = 0;
        c6_centers->size[1] = 0;
      }
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_ii);
  c6_emxFree_boolean_T(chartInstance, &c6_x);
  c6_emxFree_real_T(chartInstance, &c6_metric);
  c6_emxFree_real_T(chartInstance, &c6_b_centers);
  c6_emxFree_real_T(chartInstance, &c6_idx2Keep);
}

static void c6_d_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200])
{
  static creal_T c6_Opca[21] = { { -1.0,/* re */
      -1.2246467991473532E-16          /* im */
    }, { -0.94074336326264951,         /* re */
      -0.33911933663133786             /* im */
    }, { -0.77240328355979593,         /* re */
      -0.63513240158729545             /* im */
    }, { -0.51766247657026443,         /* re */
      -0.85558492293351007             /* im */
    }, { -0.2077137995603581,          /* re */
      -0.97818964289763333             /* im */
    }, { 0.12179529197798186,          /* re */
      -0.99255524120927308             /* im */
    }, { 0.43493360064613562,          /* re */
      -0.90046252727639242             /* im */
    }, { 0.69931088251778328,          /* re */
      -0.71481766177970107             /* im */
    }, { 0.88919079833556025,          /* re */
      -0.45753658231377414             /* im */
    }, { 0.98764715967658034,          /* re */
      -0.15669424999910972             /* im */
    }, { 0.98764715967658245,          /* re */
      0.15669424999909612              /* im */
    }, { 0.89206739910014454,          /* re */
      0.45190237381839843              /* im */
    }, { 0.71275280395581264,          /* re */
      0.70141531238854982              /* im */
    }, { 0.46880745667800117,          /* re */
      0.88330038410673417              /* im */
    }, { 0.18435622111765687,          /* re */
      0.98285949338408363              /* im */
    }, { -0.11396341778081191,         /* re */
      0.99348494674439636              /* im */
    }, { -0.399526073521597,           /* re */
      0.91672183162419307              /* im */
    }, { -0.648034799809842,           /* re */
      0.76161072618196368              /* im */
    }, { -0.83944861417619132,         /* re */
      0.54343907124688029              /* im */
    }, { -0.9593951023554288,          /* re */
      0.282065661817273                /* im */
    }, { -1.0,                         /* re */
      1.2246467991473532E-16           /* im */
    } };

  static real_T c6_b_dv[21] = { 282.74333882308139, 285.88493147667117,
    289.02652413026095, 292.16811678385073, 295.30970943744057,
    298.45130209103036, 301.59289474462014, 304.73448739820992,
    307.8760800517997, 311.01767270538954, 314.15926535897933,
    317.30085801256911, 320.44245066615889, 323.58404331974867,
    326.72563597333851, 329.86722862692829, 333.00882128051808,
    336.15041393410786, 339.29200658769764, 342.43359924128742,
    345.57519189487726 };

  c6_emxArray_boolean_T *c6_inside;
  c6_emxArray_creal_T *c6_b_w;
  c6_emxArray_creal_T *c6_w;
  c6_emxArray_creal_T *c6_wkeep;
  c6_emxArray_int32_T *c6_b_xc;
  c6_emxArray_int32_T *c6_b_yc;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_int32_T *c6_jj;
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_xckeep;
  c6_emxArray_int32_T *c6_yckeep;
  c6_emxArray_real32_T *c6_xc;
  c6_emxArray_real32_T *c6_yc;
  c6_emxArray_real_T *c6_Ex;
  c6_emxArray_real_T *c6_Ex_chunk;
  c6_emxArray_real_T *c6_Ey;
  c6_emxArray_real_T *c6_Ey_chunk;
  c6_emxArray_real_T *c6_idxE;
  c6_emxArray_real_T *c6_idxE_chunk;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_varargin_2;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  creal_T c6_w0[21];
  real_T c6_ai;
  real_T c6_ar;
  real_T c6_b_b;
  real_T c6_b_d;
  real_T c6_b_idx;
  real_T c6_b_idx1;
  real_T c6_b_idx2;
  real_T c6_b_k;
  real_T c6_b_varargin_2;
  real_T c6_bi;
  real_T c6_bim;
  real_T c6_br;
  real_T c6_brm;
  real_T c6_c_b;
  real_T c6_c_i;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d_b;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_dim1;
  real_T c6_e_x;
  real_T c6_e_y;
  real_T c6_edgeThresh;
  real_T c6_f_a;
  real_T c6_f_s;
  real_T c6_f_x;
  real_T c6_f_y;
  real_T c6_g_a;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_h_a;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_i_a;
  real_T c6_lenE;
  real_T c6_minval;
  real_T c6_ni;
  real_T c6_nr;
  real_T c6_sgnbi;
  real_T c6_sgnbr;
  real_T c6_sizeChunk;
  int32_T c6_rows_to_keep_size[1];
  int32_T c6_b_i;
  int32_T c6_b_loop_ub;
  int32_T c6_c_idx;
  int32_T c6_c_idx1;
  int32_T c6_c_idx2;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_idx;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i104;
  int32_T c6_i105;
  int32_T c6_i106;
  int32_T c6_i107;
  int32_T c6_i108;
  int32_T c6_i109;
  int32_T c6_i11;
  int32_T c6_i110;
  int32_T c6_i111;
  int32_T c6_i112;
  int32_T c6_i113;
  int32_T c6_i114;
  int32_T c6_i115;
  int32_T c6_i116;
  int32_T c6_i117;
  int32_T c6_i118;
  int32_T c6_i119;
  int32_T c6_i12;
  int32_T c6_i120;
  int32_T c6_i121;
  int32_T c6_i122;
  int32_T c6_i123;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_idx1;
  int32_T c6_idx2;
  int32_T c6_idxEdge;
  int32_T c6_idxkeep;
  int32_T c6_j_b;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_b;
  int32_T c6_k_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_szxc;
  real32_T c6_Gmax;
  real32_T c6_b;
  real32_T c6_b_x;
  real32_T c6_b_y;
  real32_T c6_b_z;
  real32_T c6_c_y;
  real32_T c6_c_z;
  real32_T c6_d_a;
  real32_T c6_e_a;
  real32_T c6_i_b;
  real32_T c6_i_x;
  real32_T c6_i_y;
  real32_T c6_j_x;
  real32_T c6_j_y;
  real32_T c6_k_x;
  real32_T c6_k_y;
  real32_T c6_l_b;
  real32_T c6_l_x;
  real32_T c6_l_y;
  real32_T c6_m_x;
  real32_T c6_m_y;
  real32_T c6_n_x;
  real32_T c6_n_y;
  real32_T c6_o_x;
  real32_T c6_p_x;
  real32_T c6_t;
  real32_T c6_x1;
  real32_T c6_x2;
  real32_T c6_y;
  real32_T c6_z;
  boolean_T c6_rows_to_keep_data[19200];
  boolean_T c6_x[19200];
  boolean_T c6_x_data[19200];
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b5;
  boolean_T c6_c_varargin_1;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_flat;
  boolean_T c6_g_b;
  boolean_T c6_guard1 = false;
  boolean_T c6_guard2 = false;
  boolean_T c6_guard3 = false;
  boolean_T c6_h_b;
  boolean_T c6_m_b;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_c_varargin_1 = c6_b_varargin_1[0];
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_x[c6_i] = ((int32_T)c6_b_varargin_1[c6_i] == (int32_T)c6_c_varargin_1);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_x_data[c6_i1] = c6_x[c6_i1];
  }

  c6_flat = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    if (!c6_x_data[(int32_T)c6_b_k - 1]) {
      c6_flat = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_flat) {
    for (c6_i2 = 0; c6_i2 < 19200; c6_i2++) {
      c6_f_accumMatrix[c6_i2].re = 0.0;
      c6_f_accumMatrix[c6_i2].im = 0.0;
    }

    for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
      c6_f_gradientImg[c6_i4] = 0.0F;
    }
  } else {
    c6_st.site = &c6_sc_emlrtRSI;
    for (c6_i3 = 0; c6_i3 < 19200; c6_i3++) {
      chartInstance->c6_s[c6_i3] = (real32_T)c6_b_varargin_1[c6_i3];
    }

    c6_b_st.site = &c6_xb_emlrtRSI;
    c6_imfilter(chartInstance, &c6_b_st, chartInstance->c6_s,
                chartInstance->c6_A);
    c6_st.site = &c6_tc_emlrtRSI;
    c6_b_st.site = &c6_gc_emlrtRSI;
    c6_b_imfilter(chartInstance, &c6_b_st, chartInstance->c6_A,
                  chartInstance->c6_Gx);
    c6_b_st.site = &c6_hc_emlrtRSI;
    c6_c_imfilter(chartInstance, &c6_b_st, chartInstance->c6_A,
                  chartInstance->c6_Gy);
    for (c6_c_k = 0; c6_c_k < 19200; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_x = chartInstance->c6_Gx[c6_d_k];
      c6_y = chartInstance->c6_Gy[c6_d_k];
      c6_x1 = c6_b_x;
      c6_x2 = c6_y;
      c6_d_a = c6_x1;
      c6_b = c6_x2;
      c6_z = muSingleScalarHypot(c6_d_a, c6_b);
      c6_f_gradientImg[c6_d_k] = c6_z;
    }

    c6_st.site = &c6_uc_emlrtRSI;
    for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
      chartInstance->c6_s[c6_i5] = c6_f_gradientImg[c6_i5];
    }

    c6_Gmax = c6_maximum(chartInstance, chartInstance->c6_s);
    c6_b_y = c6_Gmax;
    c6_c_y = c6_b_y;
    for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
      chartInstance->c6_s[c6_i6] = c6_f_gradientImg[c6_i6] / c6_c_y;
    }

    c6_b_st.site = &c6_yc_emlrtRSI;
    c6_edgeThresh = c6_graythresh(chartInstance, &c6_b_st, chartInstance->c6_s);
    c6_e_a = c6_Gmax;
    c6_b_b = c6_edgeThresh;
    c6_t = c6_e_a * (real32_T)c6_b_b;
    c6_b_st.site = &c6_ad_emlrtRSI;
    for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
      c6_x[c6_i7] = (c6_f_gradientImg[c6_i7] > c6_t);
    }

    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ey, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_ii, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_jj, 1, &c6_sc_emlrtRTEI);
    c6_c_st.site = &c6_id_emlrtRSI;
    c6_eml_find(chartInstance, &c6_c_st, c6_x, c6_ii, c6_jj);
    c6_i8 = c6_Ey->size[0];
    c6_Ey->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ey, c6_i8,
      &c6_mb_emlrtRTEI);
    c6_loop_ub = c6_ii->size[0] - 1;
    for (c6_i9 = 0; c6_i9 <= c6_loop_ub; c6_i9++) {
      c6_Ey->data[c6_i9] = (real_T)c6_ii->data[c6_i9];
    }

    c6_emxFree_int32_T(chartInstance, &c6_ii);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ex, 1, &c6_sc_emlrtRTEI);
    c6_i10 = c6_Ex->size[0];
    c6_Ex->size[0] = c6_jj->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ex, c6_i10,
      &c6_nb_emlrtRTEI);
    c6_b_loop_ub = c6_jj->size[0] - 1;
    for (c6_i11 = 0; c6_i11 <= c6_b_loop_ub; c6_i11++) {
      c6_Ex->data[c6_i11] = (real_T)c6_jj->data[c6_i11];
    }

    c6_emxFree_int32_T(chartInstance, &c6_jj);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_ndx, 1, &c6_tc_emlrtRTEI);
    c6_st.site = &c6_vc_emlrtRSI;
    c6_i12 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_Ey->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i12,
      &c6_ob_emlrtRTEI);
    c6_c_loop_ub = c6_Ey->size[0] - 1;
    for (c6_i13 = 0; c6_i13 <= c6_c_loop_ub; c6_i13++) {
      c6_ndx->data[c6_i13] = c6_Ey->data[c6_i13];
    }

    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_varargin_2, 1,
                       &c6_pb_emlrtRTEI);
    c6_i14 = c6_varargin_2->size[0];
    c6_varargin_2->size[0] = c6_Ex->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_varargin_2, c6_i14,
      &c6_pb_emlrtRTEI);
    c6_d_loop_ub = c6_Ex->size[0] - 1;
    for (c6_i15 = 0; c6_i15 <= c6_d_loop_ub; c6_i15++) {
      c6_varargin_2->data[c6_i15] = c6_Ex->data[c6_i15];
    }

    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_r, 1, &c6_uc_emlrtRTEI);
    c6_b_st.site = &c6_od_emlrtRSI;
    c6_eml_sub2ind(chartInstance, &c6_b_st, c6_ndx, c6_varargin_2, c6_r);
    c6_i16 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_r->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i16,
      &c6_qb_emlrtRTEI);
    c6_e_loop_ub = c6_r->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_varargin_2);
    for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
      c6_ndx->data[c6_i17] = (real_T)c6_r->data[c6_i17];
    }

    c6_emxFree_int32_T(chartInstance, &c6_r);
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_idxE, 1, &c6_rb_emlrtRTEI);
    c6_i18 = c6_idxE->size[0];
    c6_idxE->size[0] = c6_ndx->size[0];
    c6_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE, c6_i18,
      &c6_rb_emlrtRTEI);
    c6_f_loop_ub = c6_ndx->size[0] - 1;
    for (c6_i19 = 0; c6_i19 <= c6_f_loop_ub; c6_i19++) {
      c6_idxE->data[c6_i19] = c6_ndx->data[c6_i19];
    }

    c6_emxFree_real_T(chartInstance, &c6_ndx);
    for (c6_i20 = 0; c6_i20 < 21; c6_i20++) {
      c6_ar = c6_Opca[c6_i20].re;
      c6_ai = c6_Opca[c6_i20].im;
      c6_br = c6_b_dv[c6_i20];
      c6_bi = 0.0;
      if (c6_bi == 0.0) {
        if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        } else {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        }
      } else if (c6_br == 0.0) {
        if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        } else {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        }
      } else {
        c6_brm = muDoubleScalarAbs(c6_br);
        c6_bim = muDoubleScalarAbs(c6_bi);
        if (c6_brm > c6_bim) {
          c6_f_s = c6_bi / c6_br;
          c6_d = c6_br + c6_f_s * c6_bi;
          c6_nr = c6_ar + c6_f_s * c6_ai;
          c6_ni = c6_ai - c6_f_s * c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        } else if (c6_bim == c6_brm) {
          if (c6_br > 0.0) {
            c6_sgnbr = 0.5;
          } else {
            c6_sgnbr = -0.5;
          }

          if (c6_bi > 0.0) {
            c6_sgnbi = 0.5;
          } else {
            c6_sgnbi = -0.5;
          }

          c6_nr = c6_ar * c6_sgnbr + c6_ai * c6_sgnbi;
          c6_ni = c6_ai * c6_sgnbr - c6_ar * c6_sgnbi;
          c6_w0[c6_i20].re = c6_nr / c6_brm;
          c6_w0[c6_i20].im = c6_ni / c6_brm;
        } else {
          c6_f_s = c6_br / c6_bi;
          c6_d = c6_bi + c6_f_s * c6_br;
          c6_nr = c6_f_s * c6_ar + c6_ai;
          c6_ni = c6_f_s * c6_ai - c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        }
      }
    }

    c6_lenE = (real_T)c6_Ex->size[0];
    for (c6_i21 = 0; c6_i21 < 19200; c6_i21++) {
      c6_f_accumMatrix[c6_i21].re = 0.0;
      c6_f_accumMatrix[c6_i21].im = 0.0;
    }

    c6_i22 = (int32_T)((c6_lenE + 47618.0) / 47619.0);
    emlrtForLoopVectorCheckR2021a(1.0, 47619.0, c6_lenE, mxDOUBLE_CLASS, c6_i22,
      &c6_cg_emlrtRTEI, (void *)c6_sp);
    c6_b_i = 0;
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ex_chunk, 1, &c6_ic_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ey_chunk, 1, &c6_jc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idxE_chunk, 1, &c6_kc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_xc, 2, &c6_lc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_yc, 2, &c6_mc_emlrtRTEI);
    c6_emxInit_creal_T(chartInstance, c6_sp, &c6_w, 2, &c6_nc_emlrtRTEI);
    c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_inside, 2, &c6_oc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_xckeep, 1, &c6_pc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_yckeep, 1, &c6_qc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_wkeep, 1, &c6_rc_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_yc, 1, &c6_fc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_xc, 1, &c6_gc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_b_w, 1, &c6_hc_emlrtRTEI);
    while (c6_b_i <= c6_i22 - 1) {
      c6_c_i = (real_T)c6_b_i * 47619.0 + 1.0;
      c6_b_varargin_2 = c6_lenE;
      c6_d_y = c6_b_varargin_2;
      c6_e_y = c6_d_y;
      c6_f_y = c6_e_y;
      c6_c_b = c6_f_y;
      c6_g_y = c6_c_b;
      c6_h_y = c6_g_y;
      c6_minval = c6_h_y;
      c6_st.site = &c6_wc_emlrtRSI;
      c6_f_a = c6_c_i;
      c6_b_d = c6_minval;
      c6_b_st.site = &c6_pd_emlrtRSI;
      c6_g_a = c6_f_a;
      c6_d_b = c6_b_d;
      c6_c_x = c6_g_a;
      c6_e_b = muDoubleScalarIsNaN(c6_c_x);
      c6_guard1 = false;
      c6_guard2 = false;
      c6_guard3 = false;
      if (c6_e_b) {
        c6_guard2 = true;
      } else {
        c6_d_x = c6_d_b;
        c6_f_b = muDoubleScalarIsNaN(c6_d_x);
        if (c6_f_b) {
          c6_guard2 = true;
        } else if (c6_d_b < c6_g_a) {
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 0;
        } else {
          c6_e_x = c6_g_a;
          c6_g_b = muDoubleScalarIsInf(c6_e_x);
          if (c6_g_b) {
            c6_guard3 = true;
          } else {
            c6_f_x = c6_d_b;
            c6_h_b = muDoubleScalarIsInf(c6_f_x);
            if (c6_h_b) {
              c6_guard3 = true;
            } else {
              c6_guard1 = true;
            }
          }
        }
      }

      if (c6_guard3) {
        if (c6_g_a == c6_d_b) {
          c6_i23 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i23,
            &c6_sb_emlrtRTEI);
          c6_r1->data[0] = rtNaN;
        } else {
          c6_guard1 = true;
        }
      }

      if (c6_guard2) {
        c6_i24 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = 1;
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i24,
          &c6_sb_emlrtRTEI);
        c6_r1->data[0] = rtNaN;
      }

      if (c6_guard1) {
        c6_g_x = c6_g_a;
        c6_h_x = c6_g_x;
        c6_h_x = muDoubleScalarFloor(c6_h_x);
        if (c6_h_x == c6_g_a) {
          c6_i26 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = (int32_T)(c6_d_b - c6_g_a) + 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i26,
            &c6_sb_emlrtRTEI);
          c6_g_loop_ub = (int32_T)(c6_d_b - c6_g_a);
          for (c6_i28 = 0; c6_i28 <= c6_g_loop_ub; c6_i28++) {
            c6_r1->data[c6_i28] = c6_g_a + (real_T)c6_i28;
          }
        } else {
          c6_c_st.site = &c6_qd_emlrtRSI;
          c6_eml_float_colon(chartInstance, &c6_c_st, c6_g_a, c6_d_b, c6_r1);
        }
      }

      c6_sizeChunk = (real_T)c6_r1->size[1];
      c6_i25 = c6_Ex_chunk->size[0];
      c6_Ex_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_tg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ex_chunk, c6_i25,
        &c6_tb_emlrtRTEI);
      c6_i27 = c6_Ey_chunk->size[0];
      c6_Ey_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_sg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ey_chunk, c6_i27,
        &c6_ub_emlrtRTEI);
      c6_i29 = c6_idxE_chunk->size[0];
      c6_idxE_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_rg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE_chunk, c6_i29,
        &c6_vb_emlrtRTEI);
      c6_idxEdge = (int32_T)c6_c_i;
      c6_i30 = (int32_T)c6_sizeChunk - 1;
      for (c6_idx = 0; c6_idx <= c6_i30; c6_idx++) {
        c6_b_idx = (real_T)c6_idx + 1.0;
        c6_i32 = c6_Ex->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i32)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i32, &c6_ib_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i33 = c6_Ex_chunk->size[0];
        c6_i34 = (int32_T)c6_b_idx;
        if ((c6_i34 < 1) || (c6_i34 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i34, 1, c6_i33, &c6_jb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ex_chunk->data[c6_i34 - 1] = c6_Ex->data[c6_idxEdge - 1];
        c6_i36 = c6_Ey->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i36)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i36, &c6_kb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i38 = c6_Ey_chunk->size[0];
        c6_i39 = (int32_T)c6_b_idx;
        if ((c6_i39 < 1) || (c6_i39 > c6_i38)) {
          emlrtDynamicBoundsCheckR2012b(c6_i39, 1, c6_i38, &c6_lb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ey_chunk->data[c6_i39 - 1] = c6_Ey->data[c6_idxEdge - 1];
        c6_i41 = c6_idxE->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i41)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i41, &c6_mb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i42 = c6_idxE_chunk->size[0];
        c6_i43 = (int32_T)c6_b_idx;
        if ((c6_i43 < 1) || (c6_i43 > c6_i42)) {
          emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i42, &c6_nb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_idxE_chunk->data[c6_i43 - 1] = c6_idxE->data[c6_idxEdge - 1];
        c6_idxEdge++;
      }

      c6_dim1 = (real_T)c6_idxE_chunk->size[0];
      c6_i31 = c6_xc->size[0] * c6_xc->size[1];
      c6_xc->size[0] = (int32_T)c6_dim1;
      c6_xc->size[1] = 21;
      c6_st.site = &c6_mh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_xc, c6_i31,
        &c6_wb_emlrtRTEI);
      c6_i35 = c6_yc->size[0] * c6_yc->size[1];
      c6_yc->size[0] = (int32_T)c6_dim1;
      c6_yc->size[1] = 21;
      c6_st.site = &c6_lh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_yc, c6_i35,
        &c6_xb_emlrtRTEI);
      c6_i37 = c6_w->size[0] * c6_w->size[1];
      c6_w->size[0] = (int32_T)c6_dim1;
      c6_w->size[1] = 21;
      c6_st.site = &c6_nh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T(chartInstance, &c6_st, c6_w, c6_i37,
        &c6_yb_emlrtRTEI);
      c6_i40 = c6_inside->size[0] * c6_inside->size[1];
      c6_inside->size[0] = (int32_T)c6_dim1;
      c6_inside->size[1] = 21;
      c6_st.site = &c6_kh_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_st, c6_inside, c6_i40,
        &c6_ac_emlrtRTEI);
      c6_rows_to_keep_size[0] = (int32_T)c6_dim1;
      c6_h_loop_ub = (int32_T)c6_dim1 - 1;
      for (c6_i44 = 0; c6_i44 <= c6_h_loop_ub; c6_i44++) {
        c6_rows_to_keep_data[c6_i44] = false;
      }

      for (c6_idx2 = 0; c6_idx2 < 21; c6_idx2++) {
        c6_b_idx2 = (real_T)c6_idx2 + 1.0;
        c6_i46 = (int32_T)c6_dim1 - 1;
        for (c6_idx1 = 0; c6_idx1 <= c6_i46; c6_idx1++) {
          c6_b_idx1 = (real_T)c6_idx1 + 1.0;
          c6_i48 = c6_idxE_chunk->size[0];
          c6_i49 = (int32_T)c6_b_idx1;
          if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
            emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_ob_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_x = chartInstance->c6_Gx[(int32_T)c6_idxE_chunk->data[c6_i49 - 1]
            - 1];
          c6_i51 = c6_idxE_chunk->size[0];
          c6_i52 = (int32_T)c6_b_idx1;
          if ((c6_i52 < 1) || (c6_i52 > c6_i51)) {
            emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i51, &c6_pb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i52 - 1] - 1];
          c6_j_x = c6_i_x;
          c6_j_y = c6_i_y;
          c6_b_z = c6_j_x / c6_j_y;
          c6_h_a = -(45.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_i_b = c6_b_z;
          c6_k_y = (real32_T)c6_h_a * c6_i_b;
          c6_i57 = c6_Ex_chunk->size[0];
          c6_i59 = (int32_T)c6_b_idx1;
          if ((c6_i59 < 1) || (c6_i59 > c6_i57)) {
            emlrtDynamicBoundsCheckR2012b(c6_i59, 1, c6_i57, &c6_qb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_k_x = (real32_T)c6_Ex_chunk->data[c6_i59 - 1] + c6_k_y;
          c6_l_x = c6_k_x;
          c6_l_x = muSingleScalarRound(c6_l_x);
          c6_i63 = c6_xc->size[0];
          c6_i64 = (int32_T)c6_b_idx1;
          if ((c6_i64 < 1) || (c6_i64 > c6_i63)) {
            emlrtDynamicBoundsCheckR2012b(c6_i64, 1, c6_i63, &c6_tb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_xc->data[(c6_i64 + c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_l_x;
          c6_i68 = c6_idxE_chunk->size[0];
          c6_i70 = (int32_T)c6_b_idx1;
          if ((c6_i70 < 1) || (c6_i70 > c6_i68)) {
            emlrtDynamicBoundsCheckR2012b(c6_i70, 1, c6_i68, &c6_ub_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_x = chartInstance->c6_Gy[(int32_T)c6_idxE_chunk->data[c6_i70 - 1]
            - 1];
          c6_i74 = c6_idxE_chunk->size[0];
          c6_i76 = (int32_T)c6_b_idx1;
          if ((c6_i76 < 1) || (c6_i76 > c6_i74)) {
            emlrtDynamicBoundsCheckR2012b(c6_i76, 1, c6_i74, &c6_xb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_l_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i76 - 1] - 1];
          c6_n_x = c6_m_x;
          c6_m_y = c6_l_y;
          c6_c_z = c6_n_x / c6_m_y;
          c6_i_a = -(45.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_l_b = c6_c_z;
          c6_n_y = (real32_T)c6_i_a * c6_l_b;
          c6_i80 = c6_Ey_chunk->size[0];
          c6_i83 = (int32_T)c6_b_idx1;
          if ((c6_i83 < 1) || (c6_i83 > c6_i80)) {
            emlrtDynamicBoundsCheckR2012b(c6_i83, 1, c6_i80, &c6_dc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_o_x = (real32_T)c6_Ey_chunk->data[c6_i83 - 1] + c6_n_y;
          c6_p_x = c6_o_x;
          c6_p_x = muSingleScalarRound(c6_p_x);
          c6_i88 = c6_yc->size[0];
          c6_i90 = (int32_T)c6_b_idx1;
          if ((c6_i90 < 1) || (c6_i90 > c6_i88)) {
            emlrtDynamicBoundsCheckR2012b(c6_i90, 1, c6_i88, &c6_nc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_yc->data[(c6_i90 + c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_p_x;
          c6_i93 = c6_w->size[0];
          c6_i94 = (int32_T)c6_b_idx1;
          if ((c6_i94 < 1) || (c6_i94 > c6_i93)) {
            emlrtDynamicBoundsCheckR2012b(c6_i94, 1, c6_i93, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i94 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re
            = c6_w0[(int32_T)c6_b_idx2 - 1].re;
          c6_i97 = c6_w->size[0];
          c6_i98 = (int32_T)c6_b_idx1;
          if ((c6_i98 < 1) || (c6_i98 > c6_i97)) {
            emlrtDynamicBoundsCheckR2012b(c6_i98, 1, c6_i97, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i98 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im
            = c6_w0[(int32_T)c6_b_idx2 - 1].im;
          c6_i100 = c6_xc->size[0];
          c6_i102 = (int32_T)c6_b_idx1;
          if ((c6_i102 < 1) || (c6_i102 > c6_i100)) {
            emlrtDynamicBoundsCheckR2012b(c6_i102, 1, c6_i100, &c6_pc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_b = (c6_xc->data[(c6_i102 + c6_xc->size[0] * ((int32_T)c6_b_idx2
                      - 1)) - 1] >= 1.0F);
          c6_i104 = c6_xc->size[0];
          c6_i105 = (int32_T)c6_b_idx1;
          if ((c6_i105 < 1) || (c6_i105 > c6_i104)) {
            emlrtDynamicBoundsCheckR2012b(c6_i105, 1, c6_i104, &c6_qc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b1 = (c6_xc->data[(c6_i105 + c6_xc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 160.0F);
          c6_b2 = (c6_m_b && c6_b1);
          c6_i108 = c6_yc->size[0];
          c6_i109 = (int32_T)c6_b_idx1;
          if ((c6_i109 < 1) || (c6_i109 > c6_i108)) {
            emlrtDynamicBoundsCheckR2012b(c6_i109, 1, c6_i108, &c6_rc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b3 = (c6_yc->data[(c6_i109 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] >= 1.0F);
          c6_b4 = (c6_b2 && c6_b3);
          c6_i112 = c6_yc->size[0];
          c6_i113 = (int32_T)c6_b_idx1;
          if ((c6_i113 < 1) || (c6_i113 > c6_i112)) {
            emlrtDynamicBoundsCheckR2012b(c6_i113, 1, c6_i112, &c6_sc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b5 = (c6_yc->data[(c6_i113 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 120.0F);
          c6_i115 = c6_inside->size[0];
          c6_i117 = (int32_T)c6_b_idx1;
          if ((c6_i117 < 1) || (c6_i117 > c6_i115)) {
            emlrtDynamicBoundsCheckR2012b(c6_i117, 1, c6_i115, &c6_tc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_inside->data[(c6_i117 + c6_inside->size[0] * ((int32_T)c6_b_idx2 -
            1)) - 1] = (c6_b4 && c6_b5);
          c6_i119 = c6_inside->size[0];
          c6_i120 = (int32_T)c6_b_idx1;
          if ((c6_i120 < 1) || (c6_i120 > c6_i119)) {
            emlrtDynamicBoundsCheckR2012b(c6_i120, 1, c6_i119, &c6_uc_emlrtBCI,
              (void *)c6_sp);
          }

          if (c6_inside->data[(c6_i120 + c6_inside->size[0] * ((int32_T)
                c6_b_idx2 - 1)) - 1]) {
            c6_i123 = (int32_T)c6_b_idx1;
            if ((c6_i123 < 1) || (c6_i123 > c6_rows_to_keep_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c6_i123, 1, c6_rows_to_keep_size[0],
                &c6_vc_emlrtBCI, (void *)c6_sp);
            }

            c6_rows_to_keep_data[c6_i123 - 1] = true;
          }
        }
      }

      c6_i45 = c6_xckeep->size[0];
      c6_xckeep->size[0] = c6_xc->size[0] * 21;
      c6_st.site = &c6_ah_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_xckeep, c6_i45,
        &c6_cc_emlrtRTEI);
      c6_i47 = c6_yckeep->size[0];
      c6_yckeep->size[0] = c6_yc->size[0] * 21;
      c6_st.site = &c6_yg_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_yckeep, c6_i47,
        &c6_dc_emlrtRTEI);
      c6_i50 = c6_wkeep->size[0];
      c6_wkeep->size[0] = c6_w->size[0] * 21;
      c6_st.site = &c6_oh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_st, c6_wkeep, c6_i50,
        &c6_ec_emlrtRTEI);
      c6_idxkeep = 0;
      for (c6_c_idx2 = 0; c6_c_idx2 < 21; c6_c_idx2++) {
        c6_b_idx2 = (real_T)c6_c_idx2 + 1.0;
        c6_i54 = (int32_T)c6_dim1 - 1;
        for (c6_c_idx1 = 0; c6_c_idx1 <= c6_i54; c6_c_idx1++) {
          c6_b_idx1 = (real_T)c6_c_idx1 + 1.0;
          c6_i56 = (int32_T)c6_b_idx1;
          if ((c6_i56 < 1) || (c6_i56 > c6_rows_to_keep_size[0])) {
            emlrtDynamicBoundsCheckR2012b(c6_i56, 1, c6_rows_to_keep_size[0],
              &c6_rb_emlrtBCI, (void *)c6_sp);
          }

          if (c6_rows_to_keep_data[c6_i56 - 1]) {
            c6_i60 = c6_inside->size[0];
            c6_i61 = (int32_T)c6_b_idx1;
            if ((c6_i61 < 1) || (c6_i61 > c6_i60)) {
              emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_i60, &c6_sb_emlrtBCI,
                (void *)c6_sp);
            }

            if (c6_inside->data[(c6_i61 + c6_inside->size[0] * ((int32_T)
                  c6_b_idx2 - 1)) - 1]) {
              c6_idxkeep++;
              c6_i66 = c6_xc->size[0];
              c6_i67 = (int32_T)c6_b_idx1;
              if ((c6_i67 < 1) || (c6_i67 > c6_i66)) {
                emlrtDynamicBoundsCheckR2012b(c6_i67, 1, c6_i66, &c6_vb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i69 = c6_xckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i69)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i69,
                  &c6_wb_emlrtBCI, (void *)c6_sp);
              }

              c6_xckeep->data[c6_idxkeep - 1] = (int32_T)c6_xc->data[(c6_i67 +
                c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i73 = c6_yc->size[0];
              c6_i75 = (int32_T)c6_b_idx1;
              if ((c6_i75 < 1) || (c6_i75 > c6_i73)) {
                emlrtDynamicBoundsCheckR2012b(c6_i75, 1, c6_i73, &c6_yb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i77 = c6_yckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i77)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i77,
                  &c6_ac_emlrtBCI, (void *)c6_sp);
              }

              c6_yckeep->data[c6_idxkeep - 1] = (int32_T)c6_yc->data[(c6_i75 +
                c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i78 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i78)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i78,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_i79 = c6_w->size[0];
              c6_i82 = (int32_T)c6_b_idx1;
              if ((c6_i82 < 1) || (c6_i82 > c6_i79)) {
                emlrtDynamicBoundsCheckR2012b(c6_i82, 1, c6_i79, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].re = c6_w->data[(c6_i82 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re;
              c6_i86 = c6_w->size[0];
              c6_i87 = (int32_T)c6_b_idx1;
              if ((c6_i87 < 1) || (c6_i87 > c6_i86)) {
                emlrtDynamicBoundsCheckR2012b(c6_i87, 1, c6_i86, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i91 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i91)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i91,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].im = c6_w->data[(c6_i87 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c6_st.site = &c6_xc_emlrtRSI;
      c6_i53 = c6_b_yc->size[0];
      c6_b_yc->size[0] = c6_yckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_yc, c6_i53,
        &c6_fc_emlrtRTEI);
      c6_i_loop_ub = c6_yckeep->size[0] - 1;
      for (c6_i55 = 0; c6_i55 <= c6_i_loop_ub; c6_i55++) {
        c6_b_yc->data[c6_i55] = c6_yckeep->data[c6_i55];
      }

      c6_i58 = c6_b_xc->size[0];
      c6_b_xc->size[0] = c6_xckeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_xc, c6_i58,
        &c6_gc_emlrtRTEI);
      c6_j_loop_ub = c6_xckeep->size[0] - 1;
      for (c6_i62 = 0; c6_i62 <= c6_j_loop_ub; c6_i62++) {
        c6_b_xc->data[c6_i62] = c6_xckeep->data[c6_i62];
      }

      c6_szxc = c6_idxkeep;
      c6_i65 = c6_b_w->size[0];
      c6_b_w->size[0] = c6_wkeep->size[0];
      c6_b_st.site = &c6_xc_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_b_st, c6_b_w, c6_i65,
        &c6_hc_emlrtRTEI);
      c6_k_loop_ub = c6_wkeep->size[0] - 1;
      for (c6_i71 = 0; c6_i71 <= c6_k_loop_ub; c6_i71++) {
        c6_b_w->data[c6_i71] = c6_wkeep->data[c6_i71];
      }

      for (c6_i72 = 0; c6_i72 < 19200; c6_i72++) {
        chartInstance->c6_out[c6_i72].re = 0.0;
        chartInstance->c6_out[c6_i72].im = 0.0;
      }

      c6_b_st.site = &c6_sd_emlrtRSI;
      c6_j_b = c6_szxc;
      c6_k_b = c6_j_b;
      if (c6_k_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_k_b > 2147483646);
      }

      if (c6_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_c_idx = 1; c6_c_idx - 1 < c6_szxc; c6_c_idx++) {
        c6_d_idx = c6_c_idx;
        c6_i84 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i84)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i84, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i85 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i85 < 1) || (c6_i85 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i85, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i89 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i89)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i89, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i92 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i92 < 1) || (c6_i92 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i92, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        c6_i95 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i95)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i95, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i96 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i96 < 1) || (c6_i96 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i96, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i99 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i99)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i99, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i101 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i101 < 1) || (c6_i101 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i101, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i103 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i103)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i103, &c6_ic_emlrtBCI,
            &c6_st);
        }

        chartInstance->c6_out[(c6_i85 + 120 * (c6_i92 - 1)) - 1].re =
          chartInstance->c6_out[(c6_i96 + 120 * (c6_i101 - 1)) - 1].re +
          c6_b_w->data[c6_d_idx - 1].re;
        c6_i106 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i106)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i106, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i107 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i107 < 1) || (c6_i107 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i107, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i110 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i110)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i110, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i111 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i111 < 1) || (c6_i111 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i111, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i114 = c6_b_w->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i114)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i114, &c6_ic_emlrtBCI,
            &c6_st);
        }

        c6_i116 = c6_b_yc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i116)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i116, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i118 = c6_b_yc->data[c6_d_idx - 1];
        if ((c6_i118 < 1) || (c6_i118 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i118, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i121 = c6_b_xc->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i121)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i121, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i122 = c6_b_xc->data[c6_d_idx - 1];
        if ((c6_i122 < 1) || (c6_i122 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i122, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        chartInstance->c6_out[(c6_i118 + 120 * (c6_i122 - 1)) - 1].im =
          chartInstance->c6_out[(c6_i107 + 120 * (c6_i111 - 1)) - 1].im +
          c6_b_w->data[c6_d_idx - 1].im;
      }

      for (c6_i81 = 0; c6_i81 < 19200; c6_i81++) {
        c6_f_accumMatrix[c6_i81].re += chartInstance->c6_out[c6_i81].re;
        c6_f_accumMatrix[c6_i81].im += chartInstance->c6_out[c6_i81].im;
      }

      c6_b_i++;
    }

    c6_emxFree_creal_T(chartInstance, &c6_b_w);
    c6_emxFree_int32_T(chartInstance, &c6_b_xc);
    c6_emxFree_int32_T(chartInstance, &c6_b_yc);
    c6_emxFree_real_T(chartInstance, &c6_Ex);
    c6_emxFree_real_T(chartInstance, &c6_Ey);
    c6_emxFree_real_T(chartInstance, &c6_r1);
    c6_emxFree_creal_T(chartInstance, &c6_wkeep);
    c6_emxFree_int32_T(chartInstance, &c6_yckeep);
    c6_emxFree_int32_T(chartInstance, &c6_xckeep);
    c6_emxFree_boolean_T(chartInstance, &c6_inside);
    c6_emxFree_creal_T(chartInstance, &c6_w);
    c6_emxFree_real32_T(chartInstance, &c6_yc);
    c6_emxFree_real32_T(chartInstance, &c6_xc);
    c6_emxFree_real_T(chartInstance, &c6_idxE_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ey_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ex_chunk);
    c6_emxFree_real_T(chartInstance, &c6_idxE);
  }
}

static void c6_e_imfindcircles(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200],
  c6_emxArray_real_T *c6_centers)
{
  c6_emxArray_boolean_T *c6_x;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_real_T *c6_b_centers;
  c6_emxArray_real_T *c6_idx2Keep;
  c6_emxArray_real_T *c6_metric;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b_loop_ub;
  int32_T c6_b_metric;
  int32_T c6_c_centers;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_loop_ub;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_centers->size[0] = 0;
  c6_centers->size[1] = 0;
  c6_st.site = &c6_pc_emlrtRSI;
  c6_e_chaccum(chartInstance, &c6_st, c6_b_varargin_1,
               chartInstance->c6_accumMatrix, chartInstance->c6_gradientImg);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idx2Keep, 1, &c6_hb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_b_centers, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_metric, 2, &c6_jb_emlrtRTEI);
  c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_x, 2, &c6_gb_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_ii, 1, &c6_kb_emlrtRTEI);
  c6_st.site = &c6_ph_emlrtRSI;
  if (!c6_any(chartInstance, &c6_st, chartInstance->c6_accumMatrix)) {
  } else {
    c6_st.site = &c6_qc_emlrtRSI;
    c6_chcenters(chartInstance, &c6_st, chartInstance->c6_accumMatrix,
                 c6_b_centers, c6_metric);
    c6_i = c6_centers->size[0] * c6_centers->size[1];
    c6_centers->size[0] = c6_b_centers->size[0];
    c6_centers->size[1] = c6_b_centers->size[1];
    c6_st.site = &c6_qc_emlrtRSI;
    c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i,
      &c6_fb_emlrtRTEI);
    c6_loop_ub = c6_b_centers->size[0] * c6_b_centers->size[1] - 1;
    for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
      c6_centers->data[c6_i1] = c6_b_centers->data[c6_i1];
    }

    c6_b = (c6_b_centers->size[0] == 0);
    c6_b1 = (c6_b_centers->size[1] == 0);
    if (c6_b || c6_b1) {
    } else {
      c6_st.site = &c6_rc_emlrtRSI;
      c6_i2 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_metric->size[0];
      c6_x->size[1] = c6_metric->size[1];
      c6_b_st.site = &c6_rc_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_b_st, c6_x, c6_i2,
        &c6_gb_emlrtRTEI);
      c6_b_loop_ub = c6_metric->size[0] * c6_metric->size[1] - 1;
      for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
        c6_x->data[c6_i3] = (c6_metric->data[c6_i3] >= 0.15000000000000002);
      }

      c6_b_st.site = &c6_ng_emlrtRSI;
      c6_b_eml_find(chartInstance, &c6_b_st, c6_x, c6_ii);
      c6_i4 = c6_idx2Keep->size[0];
      c6_idx2Keep->size[0] = c6_ii->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idx2Keep, c6_i4,
        &c6_hb_emlrtRTEI);
      c6_c_loop_ub = c6_ii->size[0] - 1;
      for (c6_i5 = 0; c6_i5 <= c6_c_loop_ub; c6_i5++) {
        c6_idx2Keep->data[c6_i5] = (real_T)c6_ii->data[c6_i5];
      }

      c6_c_centers = c6_b_centers->size[0];
      c6_i6 = c6_b_centers->size[1] - 1;
      c6_i7 = c6_centers->size[0] * c6_centers->size[1];
      c6_centers->size[0] = c6_idx2Keep->size[0];
      c6_centers->size[1] = c6_i6 + 1;
      c6_st.site = &c6_ug_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_centers, c6_i7,
        &c6_ib_emlrtRTEI);
      c6_d_loop_ub = c6_i6;
      for (c6_i8 = 0; c6_i8 <= c6_d_loop_ub; c6_i8++) {
        c6_e_loop_ub = c6_idx2Keep->size[0] - 1;
        for (c6_i9 = 0; c6_i9 <= c6_e_loop_ub; c6_i9++) {
          c6_i11 = (int32_T)c6_idx2Keep->data[c6_i9];
          if ((c6_i11 < 1) || (c6_i11 > c6_c_centers)) {
            emlrtDynamicBoundsCheckR2012b(c6_i11, 1, c6_c_centers,
              &c6_gb_emlrtBCI, (void *)c6_sp);
          }

          c6_centers->data[c6_i9 + c6_centers->size[0] * c6_i8] =
            c6_b_centers->data[(c6_i11 + c6_b_centers->size[0] * c6_i8) - 1];
        }
      }

      c6_b_metric = c6_metric->size[0];
      c6_f_loop_ub = c6_idx2Keep->size[0] - 1;
      for (c6_i10 = 0; c6_i10 <= c6_f_loop_ub; c6_i10++) {
        c6_i12 = (int32_T)c6_idx2Keep->data[c6_i10];
        if ((c6_i12 < 1) || (c6_i12 > c6_b_metric)) {
          emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_b_metric, &c6_hb_emlrtBCI,
            (void *)c6_sp);
        }
      }

      c6_b2 = (c6_centers->size[0] == 0);
      c6_b3 = (c6_centers->size[1] == 0);
      if (c6_b2 || c6_b3) {
        c6_centers->size[0] = 0;
        c6_centers->size[1] = 0;
      }
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_ii);
  c6_emxFree_boolean_T(chartInstance, &c6_x);
  c6_emxFree_real_T(chartInstance, &c6_metric);
  c6_emxFree_real_T(chartInstance, &c6_b_centers);
  c6_emxFree_real_T(chartInstance, &c6_idx2Keep);
}

static void c6_e_chaccum(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, boolean_T c6_b_varargin_1[19200], creal_T
  c6_f_accumMatrix[19200], real32_T c6_f_gradientImg[19200])
{
  static creal_T c6_Opca[31] = { { -1.0,/* re */
      -1.2246467991473532E-16          /* im */
    }, { -0.97233184309558585,         /* re */
      -0.23360391028906402             /* im */
    }, { -0.89181708798091419,         /* re */
      -0.45239615558185531             /* im */
    }, { -0.7641710798728979,          /* re */
      -0.64501361279114811             /* im */
    }, { -0.5973598139478109,          /* re */
      -0.80197334910845808             /* im */
    }, { -0.40104698976702113,         /* re */
      -0.916057482911859               /* im */
    }, { -0.1859947212436773,          /* re */
      -0.98255074355958161             /* im */
    }, { 0.036546752936806849,         /* re */
      -0.99933194427566263             /* im */
    }, { 0.25542823501619821,          /* re */
      -0.96682801818964148             /* im */
    }, { 0.46014197984713184,          /* re */
      -0.8878453459822615              /* im */
    }, { 0.64129107965178855,          /* re */
      -0.76729769396176561             /* im */
    }, { 0.79097137863786515,          /* re */
      -0.61185315082600911             /* im */
    }, { 0.90305541929108457,          /* re */
      -0.42952405018695211             /* im */
    }, { 0.97337367270249442,          /* re */
      -0.22922411149278638             /* im */
    }, { 0.999793606908749,            /* re */
      -0.020316091759830932            /* im */
    }, { 0.9822018047874016,           /* re */
      0.18782868437054842              /* im */
    }, { 0.92239822086751977,          /* re */
      0.38624023889340459              /* im */
    }, { 0.82391468542175739,          /* re */
      0.56671385296846821              /* im */
    }, { 0.69177189681682028,          /* re */
      0.72211608677168981              /* im */
    }, { 0.5321904064670856,           /* re */
      0.8466246932758329               /* im */
    }, { 0.35227154900346869,          /* re */
      0.93589783404103288              /* im */
    }, { 0.15966398638817733,          /* re */
      0.98717141948631992              /* im */
    }, { -0.037769377708303763,        /* re */
      0.9992864825001524               /* im */
    }, { -0.2322707813625077,          /* re */
      0.972651162609314                /* im */
    }, { -0.4164817677689216,          /* re */
      0.90914406840504336              /* im */
    }, { -0.58370269204353287,         /* re */
      0.81196746689823274              /* im */
    }, { -0.72811036713248678,         /* re */
      0.68545991368875492              /* im */
    }, { -0.8449289201673359,          /* re */
      0.53487860292299949              /* im */
    }, { -0.9305511551022323,          /* re */
      0.36616191464692383              /* im */
    }, { -0.98260981065731767,         /* re */
      0.18568241704585361              /* im */
    }, { -1.0,                         /* re */
      1.2246467991473532E-16           /* im */
    } };

  static real_T c6_b_dv[31] = { 345.57519189487726, 348.71678454846705,
    351.85837720205683, 354.99996985564661, 358.14156250923639,
    361.28315516282623, 364.424747816416, 367.5663404700058, 370.70793312359558,
    373.84952577718536, 376.99111843077515, 380.132711084365, 383.27430373795477,
    386.41589639154455, 389.55748904513433, 392.69908169872411,
    395.84067435231395, 398.98226700590374, 402.12385965949352,
    405.2654523130833, 408.40704496667308, 411.54863762026292,
    414.69023027385271, 417.83182292744249, 420.97341558103227,
    424.11500823462205, 427.25660088821189, 430.39819354180167,
    433.53978619539146, 436.68137884898124, 439.822971502571 };

  c6_emxArray_boolean_T *c6_inside;
  c6_emxArray_creal_T *c6_w;
  c6_emxArray_creal_T *c6_wkeep;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_int32_T *c6_jj;
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_xckeep;
  c6_emxArray_int32_T *c6_yckeep;
  c6_emxArray_real32_T *c6_xc;
  c6_emxArray_real32_T *c6_yc;
  c6_emxArray_real_T *c6_Ex;
  c6_emxArray_real_T *c6_Ex_chunk;
  c6_emxArray_real_T *c6_Ey;
  c6_emxArray_real_T *c6_Ey_chunk;
  c6_emxArray_real_T *c6_idxE;
  c6_emxArray_real_T *c6_idxE_chunk;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_varargin_2;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  creal_T c6_w0[31];
  real_T c6_ai;
  real_T c6_ar;
  real_T c6_b_b;
  real_T c6_b_d;
  real_T c6_b_idx;
  real_T c6_b_idx1;
  real_T c6_b_idx2;
  real_T c6_b_k;
  real_T c6_b_varargin_2;
  real_T c6_bi;
  real_T c6_bim;
  real_T c6_br;
  real_T c6_brm;
  real_T c6_c_b;
  real_T c6_c_i;
  real_T c6_c_x;
  real_T c6_d;
  real_T c6_d_b;
  real_T c6_d_x;
  real_T c6_d_y;
  real_T c6_dim1;
  real_T c6_e_x;
  real_T c6_e_y;
  real_T c6_edgeThresh;
  real_T c6_f_a;
  real_T c6_f_s;
  real_T c6_f_x;
  real_T c6_f_y;
  real_T c6_g_a;
  real_T c6_g_x;
  real_T c6_g_y;
  real_T c6_h_a;
  real_T c6_h_x;
  real_T c6_h_y;
  real_T c6_i_a;
  real_T c6_lenE;
  real_T c6_minval;
  real_T c6_ni;
  real_T c6_nr;
  real_T c6_sgnbi;
  real_T c6_sgnbr;
  real_T c6_sizeChunk;
  int32_T c6_rows_to_keep_size[1];
  int32_T c6_b_i;
  int32_T c6_b_loop_ub;
  int32_T c6_c_idx;
  int32_T c6_c_idx1;
  int32_T c6_c_idx2;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_idx;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i104;
  int32_T c6_i105;
  int32_T c6_i106;
  int32_T c6_i107;
  int32_T c6_i108;
  int32_T c6_i109;
  int32_T c6_i11;
  int32_T c6_i110;
  int32_T c6_i111;
  int32_T c6_i112;
  int32_T c6_i113;
  int32_T c6_i114;
  int32_T c6_i115;
  int32_T c6_i116;
  int32_T c6_i117;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_b;
  int32_T c6_idx;
  int32_T c6_idx1;
  int32_T c6_idx2;
  int32_T c6_idxEdge;
  int32_T c6_idxkeep;
  int32_T c6_k;
  int32_T c6_k_b;
  int32_T c6_loop_ub;
  int32_T c6_szxc;
  real32_T c6_Gmax;
  real32_T c6_b;
  real32_T c6_b_x;
  real32_T c6_b_y;
  real32_T c6_b_z;
  real32_T c6_c_y;
  real32_T c6_c_z;
  real32_T c6_d_a;
  real32_T c6_e_a;
  real32_T c6_i_x;
  real32_T c6_i_y;
  real32_T c6_j_b;
  real32_T c6_j_x;
  real32_T c6_j_y;
  real32_T c6_k_x;
  real32_T c6_k_y;
  real32_T c6_l_b;
  real32_T c6_l_x;
  real32_T c6_l_y;
  real32_T c6_m_x;
  real32_T c6_m_y;
  real32_T c6_n_x;
  real32_T c6_n_y;
  real32_T c6_o_x;
  real32_T c6_p_x;
  real32_T c6_t;
  real32_T c6_x1;
  real32_T c6_x2;
  real32_T c6_y;
  real32_T c6_z;
  boolean_T c6_rows_to_keep_data[19200];
  boolean_T c6_x[19200];
  boolean_T c6_x_data[19200];
  boolean_T c6_b1;
  boolean_T c6_b2;
  boolean_T c6_b3;
  boolean_T c6_b4;
  boolean_T c6_b5;
  boolean_T c6_c_varargin_1;
  boolean_T c6_e_b;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_flat;
  boolean_T c6_g_b;
  boolean_T c6_guard1 = false;
  boolean_T c6_guard2 = false;
  boolean_T c6_guard3 = false;
  boolean_T c6_h_b;
  boolean_T c6_m_b;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_c_varargin_1 = c6_b_varargin_1[0];
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_x[c6_i] = ((int32_T)c6_b_varargin_1[c6_i] == (int32_T)c6_c_varargin_1);
  }

  for (c6_i1 = 0; c6_i1 < 19200; c6_i1++) {
    c6_x_data[c6_i1] = c6_x[c6_i1];
  }

  c6_flat = true;
  c6_k = 0;
  c6_exitg1 = false;
  while ((!c6_exitg1) && (c6_k < 19200)) {
    c6_b_k = (real_T)c6_k + 1.0;
    if (!c6_x_data[(int32_T)c6_b_k - 1]) {
      c6_flat = false;
      c6_exitg1 = true;
    } else {
      c6_k++;
    }
  }

  if (c6_flat) {
    for (c6_i2 = 0; c6_i2 < 19200; c6_i2++) {
      c6_f_accumMatrix[c6_i2].re = 0.0;
      c6_f_accumMatrix[c6_i2].im = 0.0;
    }

    for (c6_i4 = 0; c6_i4 < 19200; c6_i4++) {
      c6_f_gradientImg[c6_i4] = 0.0F;
    }
  } else {
    c6_st.site = &c6_sc_emlrtRSI;
    for (c6_i3 = 0; c6_i3 < 19200; c6_i3++) {
      chartInstance->c6_e_s[c6_i3] = (real32_T)c6_b_varargin_1[c6_i3];
    }

    c6_b_st.site = &c6_xb_emlrtRSI;
    c6_imfilter(chartInstance, &c6_b_st, chartInstance->c6_e_s,
                chartInstance->c6_e_A);
    c6_st.site = &c6_tc_emlrtRSI;
    c6_b_st.site = &c6_gc_emlrtRSI;
    c6_b_imfilter(chartInstance, &c6_b_st, chartInstance->c6_e_A,
                  chartInstance->c6_e_Gx);
    c6_b_st.site = &c6_hc_emlrtRSI;
    c6_c_imfilter(chartInstance, &c6_b_st, chartInstance->c6_e_A,
                  chartInstance->c6_e_Gy);
    for (c6_c_k = 0; c6_c_k < 19200; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_x = chartInstance->c6_e_Gx[c6_d_k];
      c6_y = chartInstance->c6_e_Gy[c6_d_k];
      c6_x1 = c6_b_x;
      c6_x2 = c6_y;
      c6_d_a = c6_x1;
      c6_b = c6_x2;
      c6_z = muSingleScalarHypot(c6_d_a, c6_b);
      c6_f_gradientImg[c6_d_k] = c6_z;
    }

    c6_st.site = &c6_uc_emlrtRSI;
    for (c6_i5 = 0; c6_i5 < 19200; c6_i5++) {
      chartInstance->c6_e_s[c6_i5] = c6_f_gradientImg[c6_i5];
    }

    c6_Gmax = c6_maximum(chartInstance, chartInstance->c6_e_s);
    c6_b_y = c6_Gmax;
    c6_c_y = c6_b_y;
    for (c6_i6 = 0; c6_i6 < 19200; c6_i6++) {
      chartInstance->c6_e_s[c6_i6] = c6_f_gradientImg[c6_i6] / c6_c_y;
    }

    c6_b_st.site = &c6_yc_emlrtRSI;
    c6_edgeThresh = c6_graythresh(chartInstance, &c6_b_st, chartInstance->c6_e_s);
    c6_e_a = c6_Gmax;
    c6_b_b = c6_edgeThresh;
    c6_t = c6_e_a * (real32_T)c6_b_b;
    c6_b_st.site = &c6_ad_emlrtRSI;
    for (c6_i7 = 0; c6_i7 < 19200; c6_i7++) {
      c6_x[c6_i7] = (c6_f_gradientImg[c6_i7] > c6_t);
    }

    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ey, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_ii, 1, &c6_sc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_jj, 1, &c6_sc_emlrtRTEI);
    c6_c_st.site = &c6_id_emlrtRSI;
    c6_eml_find(chartInstance, &c6_c_st, c6_x, c6_ii, c6_jj);
    c6_i8 = c6_Ey->size[0];
    c6_Ey->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ey, c6_i8,
      &c6_mb_emlrtRTEI);
    c6_loop_ub = c6_ii->size[0] - 1;
    for (c6_i9 = 0; c6_i9 <= c6_loop_ub; c6_i9++) {
      c6_Ey->data[c6_i9] = (real_T)c6_ii->data[c6_i9];
    }

    c6_emxFree_int32_T(chartInstance, &c6_ii);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_Ex, 1, &c6_sc_emlrtRTEI);
    c6_i10 = c6_Ex->size[0];
    c6_Ex->size[0] = c6_jj->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_Ex, c6_i10,
      &c6_nb_emlrtRTEI);
    c6_b_loop_ub = c6_jj->size[0] - 1;
    for (c6_i11 = 0; c6_i11 <= c6_b_loop_ub; c6_i11++) {
      c6_Ex->data[c6_i11] = (real_T)c6_jj->data[c6_i11];
    }

    c6_emxFree_int32_T(chartInstance, &c6_jj);
    c6_emxInit_real_T1(chartInstance, &c6_b_st, &c6_ndx, 1, &c6_tc_emlrtRTEI);
    c6_st.site = &c6_vc_emlrtRSI;
    c6_i12 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_Ey->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i12,
      &c6_ob_emlrtRTEI);
    c6_c_loop_ub = c6_Ey->size[0] - 1;
    for (c6_i13 = 0; c6_i13 <= c6_c_loop_ub; c6_i13++) {
      c6_ndx->data[c6_i13] = c6_Ey->data[c6_i13];
    }

    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_varargin_2, 1,
                       &c6_pb_emlrtRTEI);
    c6_i14 = c6_varargin_2->size[0];
    c6_varargin_2->size[0] = c6_Ex->size[0];
    c6_b_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_varargin_2, c6_i14,
      &c6_pb_emlrtRTEI);
    c6_d_loop_ub = c6_Ex->size[0] - 1;
    for (c6_i15 = 0; c6_i15 <= c6_d_loop_ub; c6_i15++) {
      c6_varargin_2->data[c6_i15] = c6_Ex->data[c6_i15];
    }

    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_r, 1, &c6_uc_emlrtRTEI);
    c6_b_st.site = &c6_od_emlrtRSI;
    c6_eml_sub2ind(chartInstance, &c6_b_st, c6_ndx, c6_varargin_2, c6_r);
    c6_i16 = c6_ndx->size[0];
    c6_ndx->size[0] = c6_r->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i16,
      &c6_qb_emlrtRTEI);
    c6_e_loop_ub = c6_r->size[0] - 1;
    c6_emxFree_real_T(chartInstance, &c6_varargin_2);
    for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
      c6_ndx->data[c6_i17] = (real_T)c6_r->data[c6_i17];
    }

    c6_emxFree_int32_T(chartInstance, &c6_r);
    c6_emxInit_real_T1(chartInstance, &c6_st, &c6_idxE, 1, &c6_rb_emlrtRTEI);
    c6_i18 = c6_idxE->size[0];
    c6_idxE->size[0] = c6_ndx->size[0];
    c6_st.site = &c6_vc_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE, c6_i18,
      &c6_rb_emlrtRTEI);
    c6_f_loop_ub = c6_ndx->size[0] - 1;
    for (c6_i19 = 0; c6_i19 <= c6_f_loop_ub; c6_i19++) {
      c6_idxE->data[c6_i19] = c6_ndx->data[c6_i19];
    }

    c6_emxFree_real_T(chartInstance, &c6_ndx);
    for (c6_i20 = 0; c6_i20 < 31; c6_i20++) {
      c6_ar = c6_Opca[c6_i20].re;
      c6_ai = c6_Opca[c6_i20].im;
      c6_br = c6_b_dv[c6_i20];
      c6_bi = 0.0;
      if (c6_bi == 0.0) {
        if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        } else {
          c6_w0[c6_i20].re = c6_ar / c6_br;
          c6_w0[c6_i20].im = c6_ai / c6_br;
        }
      } else if (c6_br == 0.0) {
        if (c6_ar == 0.0) {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = 0.0;
        } else if (c6_ai == 0.0) {
          c6_w0[c6_i20].re = 0.0;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        } else {
          c6_w0[c6_i20].re = c6_ai / c6_bi;
          c6_w0[c6_i20].im = -(c6_ar / c6_bi);
        }
      } else {
        c6_brm = muDoubleScalarAbs(c6_br);
        c6_bim = muDoubleScalarAbs(c6_bi);
        if (c6_brm > c6_bim) {
          c6_f_s = c6_bi / c6_br;
          c6_d = c6_br + c6_f_s * c6_bi;
          c6_nr = c6_ar + c6_f_s * c6_ai;
          c6_ni = c6_ai - c6_f_s * c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        } else if (c6_bim == c6_brm) {
          if (c6_br > 0.0) {
            c6_sgnbr = 0.5;
          } else {
            c6_sgnbr = -0.5;
          }

          if (c6_bi > 0.0) {
            c6_sgnbi = 0.5;
          } else {
            c6_sgnbi = -0.5;
          }

          c6_nr = c6_ar * c6_sgnbr + c6_ai * c6_sgnbi;
          c6_ni = c6_ai * c6_sgnbr - c6_ar * c6_sgnbi;
          c6_w0[c6_i20].re = c6_nr / c6_brm;
          c6_w0[c6_i20].im = c6_ni / c6_brm;
        } else {
          c6_f_s = c6_br / c6_bi;
          c6_d = c6_bi + c6_f_s * c6_br;
          c6_nr = c6_f_s * c6_ar + c6_ai;
          c6_ni = c6_f_s * c6_ai - c6_ar;
          c6_w0[c6_i20].re = c6_nr / c6_d;
          c6_w0[c6_i20].im = c6_ni / c6_d;
        }
      }
    }

    c6_lenE = (real_T)c6_Ex->size[0];
    for (c6_i21 = 0; c6_i21 < 19200; c6_i21++) {
      c6_f_accumMatrix[c6_i21].re = 0.0;
      c6_f_accumMatrix[c6_i21].im = 0.0;
    }

    c6_i22 = (int32_T)((c6_lenE + 32257.0) / 32258.0);
    emlrtForLoopVectorCheckR2021a(1.0, 32258.0, c6_lenE, mxDOUBLE_CLASS, c6_i22,
      &c6_cg_emlrtRTEI, (void *)c6_sp);
    c6_b_i = 0;
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ex_chunk, 1, &c6_ic_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_Ey_chunk, 1, &c6_jc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_idxE_chunk, 1, &c6_kc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_xc, 2, &c6_lc_emlrtRTEI);
    c6_emxInit_real32_T(chartInstance, c6_sp, &c6_yc, 2, &c6_mc_emlrtRTEI);
    c6_emxInit_creal_T(chartInstance, c6_sp, &c6_w, 2, &c6_nc_emlrtRTEI);
    c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_inside, 2, &c6_oc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_xckeep, 1, &c6_pc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_yckeep, 1, &c6_qc_emlrtRTEI);
    c6_emxInit_creal_T1(chartInstance, c6_sp, &c6_wkeep, 1, &c6_rc_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_sc_emlrtRTEI);
    while (c6_b_i <= c6_i22 - 1) {
      c6_c_i = (real_T)c6_b_i * 32258.0 + 1.0;
      c6_b_varargin_2 = c6_lenE;
      c6_d_y = c6_b_varargin_2;
      c6_e_y = c6_d_y;
      c6_f_y = c6_e_y;
      c6_c_b = c6_f_y;
      c6_g_y = c6_c_b;
      c6_h_y = c6_g_y;
      c6_minval = c6_h_y;
      c6_st.site = &c6_wc_emlrtRSI;
      c6_f_a = c6_c_i;
      c6_b_d = c6_minval;
      c6_b_st.site = &c6_pd_emlrtRSI;
      c6_g_a = c6_f_a;
      c6_d_b = c6_b_d;
      c6_c_x = c6_g_a;
      c6_e_b = muDoubleScalarIsNaN(c6_c_x);
      c6_guard1 = false;
      c6_guard2 = false;
      c6_guard3 = false;
      if (c6_e_b) {
        c6_guard2 = true;
      } else {
        c6_d_x = c6_d_b;
        c6_f_b = muDoubleScalarIsNaN(c6_d_x);
        if (c6_f_b) {
          c6_guard2 = true;
        } else if (c6_d_b < c6_g_a) {
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 0;
        } else {
          c6_e_x = c6_g_a;
          c6_g_b = muDoubleScalarIsInf(c6_e_x);
          if (c6_g_b) {
            c6_guard3 = true;
          } else {
            c6_f_x = c6_d_b;
            c6_h_b = muDoubleScalarIsInf(c6_f_x);
            if (c6_h_b) {
              c6_guard3 = true;
            } else {
              c6_guard1 = true;
            }
          }
        }
      }

      if (c6_guard3) {
        if (c6_g_a == c6_d_b) {
          c6_i23 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i23,
            &c6_sb_emlrtRTEI);
          c6_r1->data[0] = rtNaN;
        } else {
          c6_guard1 = true;
        }
      }

      if (c6_guard2) {
        c6_i24 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = 1;
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i24,
          &c6_sb_emlrtRTEI);
        c6_r1->data[0] = rtNaN;
      }

      if (c6_guard1) {
        c6_g_x = c6_g_a;
        c6_h_x = c6_g_x;
        c6_h_x = muDoubleScalarFloor(c6_h_x);
        if (c6_h_x == c6_g_a) {
          c6_i26 = c6_r1->size[0] * c6_r1->size[1];
          c6_r1->size[0] = 1;
          c6_r1->size[1] = (int32_T)(c6_d_b - c6_g_a) + 1;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i26,
            &c6_sb_emlrtRTEI);
          c6_g_loop_ub = (int32_T)(c6_d_b - c6_g_a);
          for (c6_i28 = 0; c6_i28 <= c6_g_loop_ub; c6_i28++) {
            c6_r1->data[c6_i28] = c6_g_a + (real_T)c6_i28;
          }
        } else {
          c6_c_st.site = &c6_qd_emlrtRSI;
          c6_eml_float_colon(chartInstance, &c6_c_st, c6_g_a, c6_d_b, c6_r1);
        }
      }

      c6_sizeChunk = (real_T)c6_r1->size[1];
      c6_i25 = c6_Ex_chunk->size[0];
      c6_Ex_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_tg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ex_chunk, c6_i25,
        &c6_tb_emlrtRTEI);
      c6_i27 = c6_Ey_chunk->size[0];
      c6_Ey_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_sg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_Ey_chunk, c6_i27,
        &c6_ub_emlrtRTEI);
      c6_i29 = c6_idxE_chunk->size[0];
      c6_idxE_chunk->size[0] = (int32_T)c6_sizeChunk;
      c6_st.site = &c6_rg_emlrtRSI;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_idxE_chunk, c6_i29,
        &c6_vb_emlrtRTEI);
      c6_idxEdge = (int32_T)c6_c_i;
      c6_i30 = (int32_T)c6_sizeChunk - 1;
      for (c6_idx = 0; c6_idx <= c6_i30; c6_idx++) {
        c6_b_idx = (real_T)c6_idx + 1.0;
        c6_i32 = c6_Ex->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i32)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i32, &c6_ib_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i33 = c6_Ex_chunk->size[0];
        c6_i34 = (int32_T)c6_b_idx;
        if ((c6_i34 < 1) || (c6_i34 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i34, 1, c6_i33, &c6_jb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ex_chunk->data[c6_i34 - 1] = c6_Ex->data[c6_idxEdge - 1];
        c6_i36 = c6_Ey->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i36)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i36, &c6_kb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i38 = c6_Ey_chunk->size[0];
        c6_i39 = (int32_T)c6_b_idx;
        if ((c6_i39 < 1) || (c6_i39 > c6_i38)) {
          emlrtDynamicBoundsCheckR2012b(c6_i39, 1, c6_i38, &c6_lb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_Ey_chunk->data[c6_i39 - 1] = c6_Ey->data[c6_idxEdge - 1];
        c6_i41 = c6_idxE->size[0];
        if ((c6_idxEdge < 1) || (c6_idxEdge > c6_i41)) {
          emlrtDynamicBoundsCheckR2012b(c6_idxEdge, 1, c6_i41, &c6_mb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_i42 = c6_idxE_chunk->size[0];
        c6_i43 = (int32_T)c6_b_idx;
        if ((c6_i43 < 1) || (c6_i43 > c6_i42)) {
          emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i42, &c6_nb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_idxE_chunk->data[c6_i43 - 1] = c6_idxE->data[c6_idxEdge - 1];
        c6_idxEdge++;
      }

      c6_dim1 = (real_T)c6_idxE_chunk->size[0];
      c6_i31 = c6_xc->size[0] * c6_xc->size[1];
      c6_xc->size[0] = (int32_T)c6_dim1;
      c6_xc->size[1] = 31;
      c6_st.site = &c6_mh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_xc, c6_i31,
        &c6_wb_emlrtRTEI);
      c6_i35 = c6_yc->size[0] * c6_yc->size[1];
      c6_yc->size[0] = (int32_T)c6_dim1;
      c6_yc->size[1] = 31;
      c6_st.site = &c6_lh_emlrtRSI;
      c6_emxEnsureCapacity_real32_T(chartInstance, &c6_st, c6_yc, c6_i35,
        &c6_xb_emlrtRTEI);
      c6_i37 = c6_w->size[0] * c6_w->size[1];
      c6_w->size[0] = (int32_T)c6_dim1;
      c6_w->size[1] = 31;
      c6_st.site = &c6_nh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T(chartInstance, &c6_st, c6_w, c6_i37,
        &c6_yb_emlrtRTEI);
      c6_i40 = c6_inside->size[0] * c6_inside->size[1];
      c6_inside->size[0] = (int32_T)c6_dim1;
      c6_inside->size[1] = 31;
      c6_st.site = &c6_kh_emlrtRSI;
      c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_st, c6_inside, c6_i40,
        &c6_ac_emlrtRTEI);
      c6_rows_to_keep_size[0] = (int32_T)c6_dim1;
      c6_h_loop_ub = (int32_T)c6_dim1 - 1;
      for (c6_i44 = 0; c6_i44 <= c6_h_loop_ub; c6_i44++) {
        c6_rows_to_keep_data[c6_i44] = false;
      }

      for (c6_idx2 = 0; c6_idx2 < 31; c6_idx2++) {
        c6_b_idx2 = (real_T)c6_idx2 + 1.0;
        c6_i46 = (int32_T)c6_dim1 - 1;
        for (c6_idx1 = 0; c6_idx1 <= c6_i46; c6_idx1++) {
          c6_b_idx1 = (real_T)c6_idx1 + 1.0;
          c6_i48 = c6_idxE_chunk->size[0];
          c6_i49 = (int32_T)c6_b_idx1;
          if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
            emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_ob_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_x = chartInstance->c6_e_Gx[(int32_T)c6_idxE_chunk->data[c6_i49 -
            1] - 1];
          c6_i51 = c6_idxE_chunk->size[0];
          c6_i52 = (int32_T)c6_b_idx1;
          if ((c6_i52 < 1) || (c6_i52 > c6_i51)) {
            emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i51, &c6_pb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_i_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i52 - 1] - 1];
          c6_j_x = c6_i_x;
          c6_j_y = c6_i_y;
          c6_b_z = c6_j_x / c6_j_y;
          c6_h_a = -(55.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_j_b = c6_b_z;
          c6_k_y = (real32_T)c6_h_a * c6_j_b;
          c6_i56 = c6_Ex_chunk->size[0];
          c6_i57 = (int32_T)c6_b_idx1;
          if ((c6_i57 < 1) || (c6_i57 > c6_i56)) {
            emlrtDynamicBoundsCheckR2012b(c6_i57, 1, c6_i56, &c6_qb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_k_x = (real32_T)c6_Ex_chunk->data[c6_i57 - 1] + c6_k_y;
          c6_l_x = c6_k_x;
          c6_l_x = muSingleScalarRound(c6_l_x);
          c6_i60 = c6_xc->size[0];
          c6_i62 = (int32_T)c6_b_idx1;
          if ((c6_i62 < 1) || (c6_i62 > c6_i60)) {
            emlrtDynamicBoundsCheckR2012b(c6_i62, 1, c6_i60, &c6_tb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_xc->data[(c6_i62 + c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_l_x;
          c6_i67 = c6_idxE_chunk->size[0];
          c6_i69 = (int32_T)c6_b_idx1;
          if ((c6_i69 < 1) || (c6_i69 > c6_i67)) {
            emlrtDynamicBoundsCheckR2012b(c6_i69, 1, c6_i67, &c6_ub_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_x = chartInstance->c6_e_Gy[(int32_T)c6_idxE_chunk->data[c6_i69 -
            1] - 1];
          c6_i72 = c6_idxE_chunk->size[0];
          c6_i75 = (int32_T)c6_b_idx1;
          if ((c6_i75 < 1) || (c6_i75 > c6_i72)) {
            emlrtDynamicBoundsCheckR2012b(c6_i75, 1, c6_i72, &c6_xb_emlrtBCI,
              (void *)c6_sp);
          }

          c6_l_y = c6_f_gradientImg[(int32_T)c6_idxE_chunk->data[c6_i75 - 1] - 1];
          c6_n_x = c6_m_x;
          c6_m_y = c6_l_y;
          c6_c_z = c6_n_x / c6_m_y;
          c6_i_a = -(55.0 + 0.5 * (real_T)((int32_T)c6_b_idx2 - 1));
          c6_l_b = c6_c_z;
          c6_n_y = (real32_T)c6_i_a * c6_l_b;
          c6_i82 = c6_Ey_chunk->size[0];
          c6_i84 = (int32_T)c6_b_idx1;
          if ((c6_i84 < 1) || (c6_i84 > c6_i82)) {
            emlrtDynamicBoundsCheckR2012b(c6_i84, 1, c6_i82, &c6_dc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_o_x = (real32_T)c6_Ey_chunk->data[c6_i84 - 1] + c6_n_y;
          c6_p_x = c6_o_x;
          c6_p_x = muSingleScalarRound(c6_p_x);
          c6_i89 = c6_yc->size[0];
          c6_i90 = (int32_T)c6_b_idx1;
          if ((c6_i90 < 1) || (c6_i90 > c6_i89)) {
            emlrtDynamicBoundsCheckR2012b(c6_i90, 1, c6_i89, &c6_nc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_yc->data[(c6_i90 + c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1] =
            c6_p_x;
          c6_i94 = c6_w->size[0];
          c6_i95 = (int32_T)c6_b_idx1;
          if ((c6_i95 < 1) || (c6_i95 > c6_i94)) {
            emlrtDynamicBoundsCheckR2012b(c6_i95, 1, c6_i94, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i95 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re
            = c6_w0[(int32_T)c6_b_idx2 - 1].re;
          c6_i97 = c6_w->size[0];
          c6_i99 = (int32_T)c6_b_idx1;
          if ((c6_i99 < 1) || (c6_i99 > c6_i97)) {
            emlrtDynamicBoundsCheckR2012b(c6_i99, 1, c6_i97, &c6_oc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_w->data[(c6_i99 + c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im
            = c6_w0[(int32_T)c6_b_idx2 - 1].im;
          c6_i101 = c6_xc->size[0];
          c6_i102 = (int32_T)c6_b_idx1;
          if ((c6_i102 < 1) || (c6_i102 > c6_i101)) {
            emlrtDynamicBoundsCheckR2012b(c6_i102, 1, c6_i101, &c6_pc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_m_b = (c6_xc->data[(c6_i102 + c6_xc->size[0] * ((int32_T)c6_b_idx2
                      - 1)) - 1] >= 1.0F);
          c6_i105 = c6_xc->size[0];
          c6_i106 = (int32_T)c6_b_idx1;
          if ((c6_i106 < 1) || (c6_i106 > c6_i105)) {
            emlrtDynamicBoundsCheckR2012b(c6_i106, 1, c6_i105, &c6_qc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b1 = (c6_xc->data[(c6_i106 + c6_xc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 160.0F);
          c6_b2 = (c6_m_b && c6_b1);
          c6_i109 = c6_yc->size[0];
          c6_i110 = (int32_T)c6_b_idx1;
          if ((c6_i110 < 1) || (c6_i110 > c6_i109)) {
            emlrtDynamicBoundsCheckR2012b(c6_i110, 1, c6_i109, &c6_rc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b3 = (c6_yc->data[(c6_i110 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] >= 1.0F);
          c6_b4 = (c6_b2 && c6_b3);
          c6_i111 = c6_yc->size[0];
          c6_i112 = (int32_T)c6_b_idx1;
          if ((c6_i112 < 1) || (c6_i112 > c6_i111)) {
            emlrtDynamicBoundsCheckR2012b(c6_i112, 1, c6_i111, &c6_sc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_b5 = (c6_yc->data[(c6_i112 + c6_yc->size[0] * ((int32_T)c6_b_idx2 -
                     1)) - 1] <= 120.0F);
          c6_i113 = c6_inside->size[0];
          c6_i114 = (int32_T)c6_b_idx1;
          if ((c6_i114 < 1) || (c6_i114 > c6_i113)) {
            emlrtDynamicBoundsCheckR2012b(c6_i114, 1, c6_i113, &c6_tc_emlrtBCI,
              (void *)c6_sp);
          }

          c6_inside->data[(c6_i114 + c6_inside->size[0] * ((int32_T)c6_b_idx2 -
            1)) - 1] = (c6_b4 && c6_b5);
          c6_i115 = c6_inside->size[0];
          c6_i116 = (int32_T)c6_b_idx1;
          if ((c6_i116 < 1) || (c6_i116 > c6_i115)) {
            emlrtDynamicBoundsCheckR2012b(c6_i116, 1, c6_i115, &c6_uc_emlrtBCI,
              (void *)c6_sp);
          }

          if (c6_inside->data[(c6_i116 + c6_inside->size[0] * ((int32_T)
                c6_b_idx2 - 1)) - 1]) {
            c6_i117 = (int32_T)c6_b_idx1;
            if ((c6_i117 < 1) || (c6_i117 > c6_rows_to_keep_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c6_i117, 1, c6_rows_to_keep_size[0],
                &c6_vc_emlrtBCI, (void *)c6_sp);
            }

            c6_rows_to_keep_data[c6_i117 - 1] = true;
          }
        }
      }

      c6_i45 = c6_xckeep->size[0];
      c6_xckeep->size[0] = c6_xc->size[0] * 31;
      c6_st.site = &c6_ah_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_xckeep, c6_i45,
        &c6_cc_emlrtRTEI);
      c6_i47 = c6_yckeep->size[0];
      c6_yckeep->size[0] = c6_yc->size[0] * 31;
      c6_st.site = &c6_yg_emlrtRSI;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_yckeep, c6_i47,
        &c6_dc_emlrtRTEI);
      c6_i50 = c6_wkeep->size[0];
      c6_wkeep->size[0] = c6_w->size[0] * 31;
      c6_st.site = &c6_oh_emlrtRSI;
      c6_emxEnsureCapacity_creal_T1(chartInstance, &c6_st, c6_wkeep, c6_i50,
        &c6_ec_emlrtRTEI);
      c6_idxkeep = 0;
      for (c6_c_idx2 = 0; c6_c_idx2 < 31; c6_c_idx2++) {
        c6_b_idx2 = (real_T)c6_c_idx2 + 1.0;
        c6_i53 = (int32_T)c6_dim1 - 1;
        for (c6_c_idx1 = 0; c6_c_idx1 <= c6_i53; c6_c_idx1++) {
          c6_b_idx1 = (real_T)c6_c_idx1 + 1.0;
          c6_i55 = (int32_T)c6_b_idx1;
          if ((c6_i55 < 1) || (c6_i55 > c6_rows_to_keep_size[0])) {
            emlrtDynamicBoundsCheckR2012b(c6_i55, 1, c6_rows_to_keep_size[0],
              &c6_rb_emlrtBCI, (void *)c6_sp);
          }

          if (c6_rows_to_keep_data[c6_i55 - 1]) {
            c6_i58 = c6_inside->size[0];
            c6_i59 = (int32_T)c6_b_idx1;
            if ((c6_i59 < 1) || (c6_i59 > c6_i58)) {
              emlrtDynamicBoundsCheckR2012b(c6_i59, 1, c6_i58, &c6_sb_emlrtBCI,
                (void *)c6_sp);
            }

            if (c6_inside->data[(c6_i59 + c6_inside->size[0] * ((int32_T)
                  c6_b_idx2 - 1)) - 1]) {
              c6_idxkeep++;
              c6_i64 = c6_xc->size[0];
              c6_i65 = (int32_T)c6_b_idx1;
              if ((c6_i65 < 1) || (c6_i65 > c6_i64)) {
                emlrtDynamicBoundsCheckR2012b(c6_i65, 1, c6_i64, &c6_vb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i68 = c6_xckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i68)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i68,
                  &c6_wb_emlrtBCI, (void *)c6_sp);
              }

              c6_xckeep->data[c6_idxkeep - 1] = (int32_T)c6_xc->data[(c6_i65 +
                c6_xc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i71 = c6_yc->size[0];
              c6_i74 = (int32_T)c6_b_idx1;
              if ((c6_i74 < 1) || (c6_i74 > c6_i71)) {
                emlrtDynamicBoundsCheckR2012b(c6_i74, 1, c6_i71, &c6_yb_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i77 = c6_yckeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i77)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i77,
                  &c6_ac_emlrtBCI, (void *)c6_sp);
              }

              c6_yckeep->data[c6_idxkeep - 1] = (int32_T)c6_yc->data[(c6_i74 +
                c6_yc->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1];
              c6_i79 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i79)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i79,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_i81 = c6_w->size[0];
              c6_i83 = (int32_T)c6_b_idx1;
              if ((c6_i83 < 1) || (c6_i83 > c6_i81)) {
                emlrtDynamicBoundsCheckR2012b(c6_i83, 1, c6_i81, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].re = c6_w->data[(c6_i83 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].re;
              c6_i87 = c6_w->size[0];
              c6_i88 = (int32_T)c6_b_idx1;
              if ((c6_i88 < 1) || (c6_i88 > c6_i87)) {
                emlrtDynamicBoundsCheckR2012b(c6_i88, 1, c6_i87, &c6_bc_emlrtBCI,
                  (void *)c6_sp);
              }

              c6_i92 = c6_wkeep->size[0];
              if ((c6_idxkeep < 1) || (c6_idxkeep > c6_i92)) {
                emlrtDynamicBoundsCheckR2012b(c6_idxkeep, 1, c6_i92,
                  &c6_cc_emlrtBCI, (void *)c6_sp);
              }

              c6_wkeep->data[c6_idxkeep - 1].im = c6_w->data[(c6_i88 +
                c6_w->size[0] * ((int32_T)c6_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c6_st.site = &c6_xc_emlrtRSI;
      c6_szxc = c6_idxkeep;
      for (c6_i54 = 0; c6_i54 < 19200; c6_i54++) {
        chartInstance->c6_e_out[c6_i54].re = 0.0;
        chartInstance->c6_e_out[c6_i54].im = 0.0;
      }

      c6_b_st.site = &c6_sd_emlrtRSI;
      c6_i_b = c6_szxc;
      c6_k_b = c6_i_b;
      if (c6_k_b < 1) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_k_b > 2147483646);
      }

      if (c6_overflow) {
        c6_c_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_c_idx = 1; c6_c_idx - 1 < c6_szxc; c6_c_idx++) {
        c6_d_idx = c6_c_idx;
        c6_i63 = c6_yckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i63)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i63, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i66 = c6_yckeep->data[c6_d_idx - 1];
        if ((c6_i66 < 1) || (c6_i66 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i66, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i70 = c6_xckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i70)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i70, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i73 = c6_xckeep->data[c6_d_idx - 1];
        if ((c6_i73 < 1) || (c6_i73 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i73, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        c6_i76 = c6_yckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i76)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i76, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i78 = c6_yckeep->data[c6_d_idx - 1];
        if ((c6_i78 < 1) || (c6_i78 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i78, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i80 = c6_xckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i80)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i80, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i85 = c6_xckeep->data[c6_d_idx - 1];
        if ((c6_i85 < 1) || (c6_i85 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i85, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i86 = c6_wkeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i86)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i86, &c6_ic_emlrtBCI,
            &c6_st);
        }

        chartInstance->c6_e_out[(c6_i66 + 120 * (c6_i73 - 1)) - 1].re =
          chartInstance->c6_e_out[(c6_i78 + 120 * (c6_i85 - 1)) - 1].re +
          c6_wkeep->data[c6_d_idx - 1].re;
        c6_i91 = c6_yckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i91)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i91, &c6_fc_emlrtBCI,
            &c6_st);
        }

        c6_i93 = c6_yckeep->data[c6_d_idx - 1];
        if ((c6_i93 < 1) || (c6_i93 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i93, 1, 120, &c6_ec_emlrtBCI, &c6_st);
        }

        c6_i96 = c6_xckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i96)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i96, &c6_hc_emlrtBCI,
            &c6_st);
        }

        c6_i98 = c6_xckeep->data[c6_d_idx - 1];
        if ((c6_i98 < 1) || (c6_i98 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i98, 1, 160, &c6_gc_emlrtBCI, &c6_st);
        }

        c6_i100 = c6_wkeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i100)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i100, &c6_ic_emlrtBCI,
            &c6_st);
        }

        c6_i103 = c6_yckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i103)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i103, &c6_kc_emlrtBCI,
            &c6_st);
        }

        c6_i104 = c6_yckeep->data[c6_d_idx - 1];
        if ((c6_i104 < 1) || (c6_i104 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c6_i104, 1, 120, &c6_jc_emlrtBCI, &c6_st);
        }

        c6_i107 = c6_xckeep->size[0];
        if ((c6_d_idx < 1) || (c6_d_idx > c6_i107)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_idx, 1, c6_i107, &c6_mc_emlrtBCI,
            &c6_st);
        }

        c6_i108 = c6_xckeep->data[c6_d_idx - 1];
        if ((c6_i108 < 1) || (c6_i108 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c6_i108, 1, 160, &c6_lc_emlrtBCI, &c6_st);
        }

        chartInstance->c6_e_out[(c6_i104 + 120 * (c6_i108 - 1)) - 1].im =
          chartInstance->c6_e_out[(c6_i93 + 120 * (c6_i98 - 1)) - 1].im +
          c6_wkeep->data[c6_d_idx - 1].im;
      }

      for (c6_i61 = 0; c6_i61 < 19200; c6_i61++) {
        c6_f_accumMatrix[c6_i61].re += chartInstance->c6_e_out[c6_i61].re;
        c6_f_accumMatrix[c6_i61].im += chartInstance->c6_e_out[c6_i61].im;
      }

      c6_b_i++;
    }

    c6_emxFree_real_T(chartInstance, &c6_Ex);
    c6_emxFree_real_T(chartInstance, &c6_Ey);
    c6_emxFree_real_T(chartInstance, &c6_r1);
    c6_emxFree_creal_T(chartInstance, &c6_wkeep);
    c6_emxFree_int32_T(chartInstance, &c6_yckeep);
    c6_emxFree_int32_T(chartInstance, &c6_xckeep);
    c6_emxFree_boolean_T(chartInstance, &c6_inside);
    c6_emxFree_creal_T(chartInstance, &c6_w);
    c6_emxFree_real32_T(chartInstance, &c6_yc);
    c6_emxFree_real32_T(chartInstance, &c6_xc);
    c6_emxFree_real_T(chartInstance, &c6_idxE_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ey_chunk);
    c6_emxFree_real_T(chartInstance, &c6_Ex_chunk);
    c6_emxFree_real_T(chartInstance, &c6_idxE);
  }
}

static real_T c6_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_area_l, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  c6_thisId.fIdentifier = (const char_T *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_area_l),
    &c6_thisId);
  sf_mex_destroy(&c6_b_area_l);
  return c6_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_d;
  real_T c6_y;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_c_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_blkroi, const char_T *c6_identifier,
  real_T c6_y[19200])
{
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char_T *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_blkroi), &c6_thisId, c6_y);
  sf_mex_destroy(&c6_b_blkroi);
}

static void c6_d_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  real_T c6_y[19200])
{
  real_T c6_b_dv[19200];
  int32_T c6_i;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), c6_b_dv, 1, 0, 0U, 1, 0U, 2, 120,
                160);
  for (c6_i = 0; c6_i < 19200; c6_i++) {
    c6_y[c6_i] = c6_b_dv[c6_i];
  }

  sf_mex_destroy(&c6_u);
}

static void c6_e_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_center, const char_T *c6_identifier,
  real_T c6_y[2])
{
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char_T *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_center), &c6_thisId, c6_y);
  sf_mex_destroy(&c6_b_center);
}

static void c6_f_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  real_T c6_y[2])
{
  real_T c6_b_dv[2];
  int32_T c6_i;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), c6_b_dv, 1, 0, 0U, 1, 0U, 2, 1, 2);
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_y[c6_i] = c6_b_dv[c6_i];
  }

  sf_mex_destroy(&c6_u);
}

static uint8_T c6_g_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_flightControlSystem, const
  char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  c6_thisId.fIdentifier = (const char_T *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_is_active_c6_flightControlSystem), &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_flightControlSystem);
  return c6_y;
}

static uint8_T c6_h_emlrt_marshallIn(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_b_u;
  uint8_T c6_y;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_b_u;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_slStringInitializeDynamicBuffers
  (SFc6_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_chart_data_browse_helper(SFc6_flightControlSystemInstanceStruct
  *chartInstance, int32_T c6_ssIdNumber, const mxArray **c6_mxData, uint8_T
  *c6_isValueTooBig)
{
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  *c6_mxData = NULL;
  *c6_mxData = NULL;
  *c6_isValueTooBig = 0U;
  switch (c6_ssIdNumber) {
   case 4U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_bw, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 6U:
    *c6_isValueTooBig = 1U;
    break;

   case 7U:
    *c6_isValueTooBig = 1U;
    break;

   case 12U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_center,
      0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 18U:
    *c6_isValueTooBig = 1U;
    break;

   case 22U:
    *c6_isValueTooBig = 1U;
    break;

   case 15U:
    c6_d = *chartInstance->c6_area_l;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 16U:
    c6_d1 = *chartInstance->c6_area_r;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 17U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_centroid,
      0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 21U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData",
      *chartInstance->c6_centroid_blk, 0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 13U:
    c6_d2 = *chartInstance->c6_land;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 19U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_blk_l,
      11, 0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 20U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_blk_r,
      11, 0U, 1U, 0U, 2, 120, 160), false);
    break;
  }
}

static void c6_b_ComputeCentroid(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49
  *c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 *c6_statsAlreadyComputed)
{
  c6_cell_wrap_6 c6_reshapes[2];
  c6_emxArray_int32_T *c6_varargout_3;
  c6_emxArray_int32_T *c6_varargout_4;
  c6_emxArray_real_T *c6_j;
  c6_emxArray_real_T *c6_ndx;
  c6_emxArray_real_T *c6_x;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  real_T c6_y[2];
  real_T c6_b_k;
  real_T c6_b_x;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d_k;
  real_T c6_f_s;
  int32_T c6_sizes[2];
  int32_T c6_b_col;
  int32_T c6_b_loop_ub;
  int32_T c6_b_stats;
  int32_T c6_b_vlen;
  int32_T c6_c_col;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_stats;
  int32_T c6_c_vlen;
  int32_T c6_col;
  int32_T c6_d_a;
  int32_T c6_d_loop_ub;
  int32_T c6_d_stats;
  int32_T c6_d_vlen;
  int32_T c6_e_loop_ub;
  int32_T c6_e_stats;
  int32_T c6_expected;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_loop_ub;
  int32_T c6_ib;
  int32_T c6_inb;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_lidx;
  int32_T c6_loop_ub;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_result;
  int32_T c6_vlen;
  boolean_T c6_b;
  boolean_T c6_b1;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_statsAlreadyComputed->Centroid = true;
  c6_st.site = &c6_qb_emlrtRSI;
  c6_statsAlreadyComputed->PixelList = true;
  c6_d = (real_T)c6_stats->size[0];
  c6_i = (int32_T)c6_d - 1;
  c6_k = 0;
  c6_emxInit_real_T1(chartInstance, &c6_st, &c6_j, 1, &c6_pe_emlrtRTEI);
  c6_emxInit_real_T1(chartInstance, &c6_st, &c6_ndx, 1, &c6_ce_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_varargout_4, 1, &c6_w_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_varargout_3, 1, &c6_w_emlrtRTEI);
  c6_emxInitMatrix_cell_wrap_6(chartInstance, &c6_st, c6_reshapes,
    &c6_oe_emlrtRTEI);
  while (c6_k <= c6_i) {
    c6_b_k = (real_T)c6_k + 1.0;
    c6_i1 = c6_ndx->size[0];
    c6_i2 = c6_stats->size[0];
    c6_i3 = (int32_T)c6_b_k;
    if ((c6_i3 < 1) || (c6_i3 > c6_i2)) {
      emlrtDynamicBoundsCheckR2012b(c6_i3, 1, c6_i2, &c6_sd_emlrtBCI, &c6_st);
    }

    c6_ndx->size[0] = c6_stats->data[c6_i3 - 1].PixelIdxList->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i1,
      &c6_ae_emlrtRTEI);
    c6_i5 = c6_stats->size[0];
    c6_i6 = (int32_T)c6_b_k;
    if ((c6_i6 < 1) || (c6_i6 > c6_i5)) {
      emlrtDynamicBoundsCheckR2012b(c6_i6, 1, c6_i5, &c6_sd_emlrtBCI, &c6_st);
    }

    c6_loop_ub = c6_stats->data[c6_i6 - 1].PixelIdxList->size[0] - 1;
    for (c6_i8 = 0; c6_i8 <= c6_loop_ub; c6_i8++) {
      c6_i10 = c6_stats->size[0];
      c6_i12 = (int32_T)c6_b_k;
      if ((c6_i12 < 1) || (c6_i12 > c6_i10)) {
        emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_i10, &c6_sd_emlrtBCI, &c6_st);
      }

      c6_ndx->data[c6_i8] = c6_stats->data[c6_i12 - 1].PixelIdxList->data[c6_i8];
    }

    if (c6_ndx->size[0] != 0) {
      c6_b_st.site = &c6_sb_emlrtRSI;
      c6_i15 = c6_ndx->size[0];
      c6_i17 = c6_stats->size[0];
      c6_i18 = (int32_T)c6_b_k;
      if ((c6_i18 < 1) || (c6_i18 > c6_i17)) {
        emlrtDynamicBoundsCheckR2012b(c6_i18, 1, c6_i17, &c6_ud_emlrtBCI,
          &c6_b_st);
      }

      c6_ndx->size[0] = c6_stats->data[c6_i18 - 1].PixelIdxList->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i15,
        &c6_ce_emlrtRTEI);
      c6_i24 = c6_stats->size[0];
      c6_i25 = (int32_T)c6_b_k;
      if ((c6_i25 < 1) || (c6_i25 > c6_i24)) {
        emlrtDynamicBoundsCheckR2012b(c6_i25, 1, c6_i24, &c6_ud_emlrtBCI,
          &c6_b_st);
      }

      c6_b_loop_ub = c6_stats->data[c6_i25 - 1].PixelIdxList->size[0] - 1;
      for (c6_i31 = 0; c6_i31 <= c6_b_loop_ub; c6_i31++) {
        c6_i33 = c6_stats->size[0];
        c6_i35 = (int32_T)c6_b_k;
        if ((c6_i35 < 1) || (c6_i35 > c6_i33)) {
          emlrtDynamicBoundsCheckR2012b(c6_i35, 1, c6_i33, &c6_ud_emlrtBCI,
            &c6_b_st);
        }

        c6_ndx->data[c6_i31] = c6_stats->data[c6_i35 - 1].PixelIdxList->
          data[c6_i31];
      }

      c6_c_st.site = &c6_tb_emlrtRSI;
      c6_ind2sub_indexClass(chartInstance, &c6_c_st, c6_ndx, c6_varargout_3,
                            c6_varargout_4);
      c6_i36 = c6_ndx->size[0];
      c6_ndx->size[0] = c6_varargout_3->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i36,
        &c6_he_emlrtRTEI);
      c6_d_loop_ub = c6_varargout_3->size[0] - 1;
      for (c6_i41 = 0; c6_i41 <= c6_d_loop_ub; c6_i41++) {
        c6_ndx->data[c6_i41] = (real_T)c6_varargout_3->data[c6_i41];
      }

      c6_i42 = c6_j->size[0];
      c6_j->size[0] = c6_varargout_4->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_j, c6_i42,
        &c6_he_emlrtRTEI);
      c6_e_loop_ub = c6_varargout_4->size[0] - 1;
      for (c6_i44 = 0; c6_i44 <= c6_e_loop_ub; c6_i44++) {
        c6_j->data[c6_i44] = (real_T)c6_varargout_4->data[c6_i44];
      }

      c6_b_st.site = &c6_rb_emlrtRSI;
      c6_c_st.site = &c6_ub_emlrtRSI;
      c6_result = c6_j->size[0];
      c6_sizes[0] = c6_result;
      c6_d_st.site = &c6_vb_emlrtRSI;
      c6_expected = c6_sizes[0];
      if (c6_j->size[0] == c6_expected) {
        c6_b1 = true;
      } else {
        c6_b1 = false;
      }

      if (!c6_b1) {
        c6_b_y = NULL;
        sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c6_c_y = NULL;
        sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c6_d_st, &c6_g_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14,
                    sf_mex_call(&c6_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_d_st, NULL, "message", 1U, 1U, 14, c6_c_y)));
      }

      if (c6_ndx->size[0] == c6_expected) {
        c6_b1 = true;
      } else {
        c6_b1 = false;
      }

      if (!c6_b1) {
        c6_d_y = NULL;
        sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c6_e_y = NULL;
        sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv5, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c6_d_st, &c6_g_emlrtMCI, "error", 0U, 2U, 14, c6_d_y, 14,
                    sf_mex_call(&c6_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_d_st, NULL, "message", 1U, 1U, 14, c6_e_y)));
      }

      c6_i47 = c6_reshapes[0].f1->size[0];
      c6_reshapes[0].f1->size[0] = c6_j->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_reshapes[0].f1,
        c6_i47, &c6_ke_emlrtRTEI);
      c6_f_loop_ub = c6_j->size[0] - 1;
      for (c6_i48 = 0; c6_i48 <= c6_f_loop_ub; c6_i48++) {
        c6_reshapes[0].f1->data[c6_i48] = c6_j->data[c6_i48];
      }

      c6_i49 = c6_reshapes[1].f1->size[0];
      c6_reshapes[1].f1->size[0] = c6_ndx->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_reshapes[1].f1,
        c6_i49, &c6_ke_emlrtRTEI);
      c6_g_loop_ub = c6_ndx->size[0] - 1;
      for (c6_i50 = 0; c6_i50 <= c6_g_loop_ub; c6_i50++) {
        c6_reshapes[1].f1->data[c6_i50] = c6_ndx->data[c6_i50];
      }

      c6_i51 = c6_ndx->size[0];
      c6_ndx->size[0] = c6_reshapes[0].f1->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_ndx, c6_i51,
        &c6_le_emlrtRTEI);
      c6_h_loop_ub = c6_reshapes[0].f1->size[0] - 1;
      for (c6_i52 = 0; c6_i52 <= c6_h_loop_ub; c6_i52++) {
        c6_ndx->data[c6_i52] = c6_reshapes[0].f1->data[c6_i52];
      }

      c6_i53 = c6_j->size[0];
      c6_j->size[0] = c6_reshapes[1].f1->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_j, c6_i53,
        &c6_le_emlrtRTEI);
      c6_i_loop_ub = c6_reshapes[1].f1->size[0] - 1;
      for (c6_i54 = 0; c6_i54 <= c6_i_loop_ub; c6_i54++) {
        c6_j->data[c6_i54] = c6_reshapes[1].f1->data[c6_i54];
      }

      c6_e_stats = c6_stats->size[0];
      c6_i55 = (int32_T)c6_b_k;
      if ((c6_i55 < 1) || (c6_i55 > c6_e_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i55, 1, c6_e_stats, &c6_rd_emlrtBCI,
          &c6_c_st);
      }

      c6_i56 = c6_i55 - 1;
      c6_i57 = c6_stats->data[c6_i56].PixelList->size[0] * c6_stats->data[c6_i56]
        .PixelList->size[1];
      c6_stats->data[c6_i56].PixelList->size[0] = c6_ndx->size[0];
      c6_i58 = (int32_T)c6_b_k;
      if ((c6_i58 < 1) || (c6_i58 > c6_e_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i58, 1, c6_e_stats, &c6_rd_emlrtBCI,
          &c6_c_st);
      }

      c6_i59 = c6_i58 - 1;
      c6_stats->data[c6_i59].PixelList->size[1] = 2;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_c_st, c6_stats->
        data[c6_i59].PixelList, c6_i57, &c6_me_emlrtRTEI);
      c6_j_loop_ub = c6_ndx->size[0] - 1;
      for (c6_i60 = 0; c6_i60 <= c6_j_loop_ub; c6_i60++) {
        c6_i61 = (int32_T)c6_b_k;
        if ((c6_i61 < 1) || (c6_i61 > c6_e_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_e_stats, &c6_rd_emlrtBCI,
            &c6_c_st);
        }

        c6_i64 = (int32_T)c6_b_k;
        if ((c6_i64 < 1) || (c6_i64 > c6_e_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i64, 1, c6_e_stats, &c6_rd_emlrtBCI,
            &c6_c_st);
        }

        c6_stats->data[c6_i61 - 1].PixelList->data[c6_i60] = c6_ndx->data[c6_i60];
      }

      c6_k_loop_ub = c6_j->size[0] - 1;
      for (c6_i62 = 0; c6_i62 <= c6_k_loop_ub; c6_i62++) {
        c6_i63 = (int32_T)c6_b_k;
        if ((c6_i63 < 1) || (c6_i63 > c6_e_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i63, 1, c6_e_stats, &c6_rd_emlrtBCI,
            &c6_c_st);
        }

        c6_i65 = (int32_T)c6_b_k;
        if ((c6_i65 < 1) || (c6_i65 > c6_e_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i65, 1, c6_e_stats, &c6_rd_emlrtBCI,
            &c6_c_st);
        }

        c6_stats->data[c6_i63 - 1].PixelList->data[c6_i62 + c6_stats->
          data[c6_i65 - 1].PixelList->size[0]] = c6_j->data[c6_i62];
      }
    } else {
      c6_i11 = c6_stats->size[0];
      c6_i14 = (int32_T)c6_b_k;
      if ((c6_i14 < 1) || (c6_i14 > c6_i11)) {
        emlrtDynamicBoundsCheckR2012b(c6_i14, 1, c6_i11, &c6_kd_emlrtBCI, &c6_st);
      }

      c6_i19 = c6_i14 - 1;
      c6_stats->data[c6_i19].PixelList->size[0] = 0;
      c6_i20 = c6_stats->size[0];
      c6_i22 = (int32_T)c6_b_k;
      if ((c6_i22 < 1) || (c6_i22 > c6_i20)) {
        emlrtDynamicBoundsCheckR2012b(c6_i22, 1, c6_i20, &c6_kd_emlrtBCI, &c6_st);
      }

      c6_i26 = c6_i22 - 1;
      c6_i28 = c6_stats->data[c6_i26].PixelList->size[0] * c6_stats->data[c6_i26]
        .PixelList->size[1];
      c6_stats->data[c6_i26].PixelList->size[1] = 2;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_stats->data[c6_i26]
        .PixelList, c6_i28, &c6_de_emlrtRTEI);
      c6_b_stats = c6_stats->size[0];
      c6_i32 = (int32_T)c6_b_k;
      if ((c6_i32 < 1) || (c6_i32 > c6_b_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i32, 1, c6_b_stats, &c6_kd_emlrtBCI,
          &c6_st);
      }

      c6_c_stats = c6_stats->size[0];
      c6_i38 = (int32_T)c6_b_k;
      if ((c6_i38 < 1) || (c6_i38 > c6_c_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i38, 1, c6_c_stats, &c6_kd_emlrtBCI,
          &c6_st);
      }
    }

    c6_k++;
  }

  c6_emxFreeMatrix_cell_wrap_6(chartInstance, c6_reshapes);
  c6_emxFree_int32_T(chartInstance, &c6_varargout_3);
  c6_emxFree_int32_T(chartInstance, &c6_varargout_4);
  c6_emxFree_real_T(chartInstance, &c6_ndx);
  c6_emxFree_real_T(chartInstance, &c6_j);
  c6_d1 = (real_T)c6_stats->size[0];
  c6_i4 = (int32_T)c6_d1 - 1;
  c6_c_k = 0;
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_x, 2, &c6_qf_emlrtRTEI);
  while (c6_c_k <= c6_i4) {
    c6_d_k = (real_T)c6_c_k + 1.0;
    c6_st.site = &c6_pb_emlrtRSI;
    c6_i7 = c6_stats->size[0];
    c6_i9 = (int32_T)c6_d_k;
    if ((c6_i9 < 1) || (c6_i9 > c6_i7)) {
      emlrtDynamicBoundsCheckR2012b(c6_i9, 1, c6_i7, &c6_uf_emlrtBCI, &c6_st);
    }

    c6_i13 = c6_i9 - 1;
    c6_i16 = c6_x->size[0] * c6_x->size[1];
    c6_x->size[0] = c6_stats->data[c6_i13].PixelList->size[0];
    c6_x->size[1] = 2;
    c6_b_st.site = &c6_pb_emlrtRSI;
    c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_x, c6_i16,
      &c6_qf_emlrtRTEI);
    c6_i21 = c6_stats->size[0];
    c6_i23 = (int32_T)c6_d_k;
    if ((c6_i23 < 1) || (c6_i23 > c6_i21)) {
      emlrtDynamicBoundsCheckR2012b(c6_i23, 1, c6_i21, &c6_uf_emlrtBCI, &c6_st);
    }

    c6_i27 = c6_i23 - 1;
    c6_i29 = c6_stats->size[0];
    c6_i30 = (int32_T)c6_d_k;
    if ((c6_i30 < 1) || (c6_i30 > c6_i29)) {
      emlrtDynamicBoundsCheckR2012b(c6_i30, 1, c6_i29, &c6_uf_emlrtBCI, &c6_st);
    }

    c6_i34 = c6_i30 - 1;
    c6_c_loop_ub = c6_stats->data[c6_i27].PixelList->size[0] * c6_stats->
      data[c6_i34].PixelList->size[1] - 1;
    for (c6_i37 = 0; c6_i37 <= c6_c_loop_ub; c6_i37++) {
      c6_i39 = c6_stats->size[0];
      c6_i40 = (int32_T)c6_d_k;
      if ((c6_i40 < 1) || (c6_i40 > c6_i39)) {
        emlrtDynamicBoundsCheckR2012b(c6_i40, 1, c6_i39, &c6_uf_emlrtBCI, &c6_st);
      }

      c6_x->data[c6_i37] = c6_stats->data[c6_i40 - 1].PixelList->data[c6_i37];
    }

    c6_b_st.site = &c6_wb_emlrtRSI;
    c6_vlen = c6_x->size[0];
    c6_c_st.site = &c6_x_emlrtRSI;
    c6_b_vlen = c6_vlen;
    c6_b = (c6_x->size[0] == 0);
    if (c6_b || (c6_b_vlen == 0)) {
      for (c6_i43 = 0; c6_i43 < 2; c6_i43++) {
        c6_y[c6_i43] = 0.0;
      }
    } else {
      c6_d_st.site = &c6_y_emlrtRSI;
      c6_c_vlen = c6_b_vlen;
      c6_e_st.site = &c6_ab_emlrtRSI;
      c6_d_vlen = c6_c_vlen;
      if (c6_d_vlen < 4096) {
        for (c6_col = 0; c6_col < 2; c6_col++) {
          c6_b_col = c6_col;
          c6_f_st.site = &c6_bb_emlrtRSI;
          c6_y[c6_b_col] = c6_e_sumColumnB(chartInstance, &c6_f_st, c6_x,
            c6_b_col + 1, c6_d_vlen);
        }
      } else {
        c6_d_a = c6_d_vlen;
        c6_nfb = c6_div_nzp_s32(chartInstance, c6_d_a, 4096, 0, 1U, 0, 0);
        c6_inb = c6_nfb << 12;
        c6_lidx = c6_inb;
        c6_nleft = c6_d_vlen - c6_inb;
        for (c6_c_col = 0; c6_c_col < 2; c6_c_col++) {
          c6_b_col = c6_c_col + 1;
          c6_f_s = c6_b_sumColumnB4(chartInstance, c6_x, c6_b_col, 1);
          for (c6_ib = 1; c6_ib < c6_nfb; c6_ib++) {
            c6_f_s += c6_b_sumColumnB4(chartInstance, c6_x, c6_b_col, 1 + (c6_ib
              << 12));
          }

          if (c6_nleft > 0) {
            c6_f_st.site = &c6_cb_emlrtRSI;
            c6_f_s += c6_f_sumColumnB(chartInstance, &c6_f_st, c6_x, c6_b_col,
              c6_nleft, c6_lidx + 1);
          }

          c6_y[c6_b_col - 1] = c6_f_s;
        }
      }
    }

    c6_b_x = (real_T)c6_x->size[0];
    c6_d_stats = c6_stats->size[0];
    for (c6_i45 = 0; c6_i45 < 2; c6_i45++) {
      c6_i46 = (int32_T)c6_d_k;
      if ((c6_i46 < 1) || (c6_i46 > c6_d_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i46, 1, c6_d_stats, &c6_vf_emlrtBCI,
          &c6_st);
      }

      c6_stats->data[c6_i46 - 1].Centroid[c6_i45] = c6_y[c6_i45] / c6_b_x;
    }

    c6_c_k++;
  }

  c6_emxFree_real_T(chartInstance, &c6_x);
}

static void c6_b_round(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_x;
  real_T c6_c_x;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_k;
  int32_T c6_nx;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_mf_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_nx = c6_x->size[0];
  c6_b_st.site = &c6_nf_emlrtRSI;
  c6_b = c6_nx;
  c6_b_b = c6_b;
  if (c6_b_b < 1) {
    c6_overflow = false;
  } else {
    c6_overflow = (c6_b_b > 2147483646);
  }

  if (c6_overflow) {
    c6_c_st.site = &c6_ib_emlrtRSI;
    c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
  }

  for (c6_k = 1; c6_k - 1 < c6_nx; c6_k++) {
    c6_b_k = c6_k - 1;
    c6_b_x = c6_x->data[c6_b_k];
    c6_c_x = c6_b_x;
    c6_c_x = muDoubleScalarRound(c6_c_x);
    c6_x->data[c6_b_k] = c6_c_x;
  }
}

static void c6_b_sort(SFc6_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c6_sp, c6_emxArray_real_T *c6_x,
                      c6_emxArray_int32_T *c6_idx)
{
  c6_emxArray_int32_T *c6_iwork;
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_r2;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_r3;
  c6_emxArray_real_T *c6_xwork;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  real_T c6_x4[4];
  real_T c6_b_dv[2];
  real_T c6_b_x;
  int32_T c6_idx4[4];
  int32_T c6_perm[4];
  int32_T c6_b_iwork[1];
  int32_T c6_b_xwork[1];
  int32_T c6_iv[1];
  int32_T c6_b_b;
  int32_T c6_b_i1;
  int32_T c6_b_i2;
  int32_T c6_b_i3;
  int32_T c6_b_i4;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_b_n;
  int32_T c6_b_nNaNs;
  int32_T c6_b_nNonNaN;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_n;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_e_b;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_f_loop_ub;
  int32_T c6_g_b;
  int32_T c6_g_k;
  int32_T c6_g_loop_ub;
  int32_T c6_h_b;
  int32_T c6_h_k;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_b;
  int32_T c6_i_loop_ub;
  int32_T c6_ib;
  int32_T c6_itmp;
  int32_T c6_j_b;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_b;
  int32_T c6_k_loop_ub;
  int32_T c6_l_b;
  int32_T c6_l_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_m;
  int32_T c6_m_b;
  int32_T c6_m_loop_ub;
  int32_T c6_n;
  int32_T c6_nBlocks;
  int32_T c6_nLastBlock;
  int32_T c6_nNaNs;
  int32_T c6_nNonNaN;
  int32_T c6_n_b;
  int32_T c6_n_loop_ub;
  int32_T c6_o_b;
  int32_T c6_o_loop_ub;
  int32_T c6_p_b;
  int32_T c6_p_loop_ub;
  int32_T c6_preSortLevel;
  int32_T c6_q_loop_ub;
  int32_T c6_quartetOffset;
  int32_T c6_r_loop_ub;
  int32_T c6_s_loop_ub;
  int32_T c6_t_loop_ub;
  int32_T c6_tailOffset;
  int32_T c6_u_loop_ub;
  int32_T c6_v_loop_ub;
  int32_T c6_wOffset;
  int32_T c6_w_loop_ub;
  boolean_T c6_b;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_d_b;
  boolean_T c6_d_overflow;
  boolean_T c6_e_overflow;
  boolean_T c6_f_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_emxInit_int32_T1(chartInstance, c6_sp, &c6_r, 2, &c6_kf_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_kf_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_r2, 1, &c6_kf_emlrtRTEI);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_r3, 1, &c6_kf_emlrtRTEI);
  c6_st.site = &c6_pf_emlrtRSI;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_b_dv[c6_i] = (real_T)c6_x->size[c6_i];
  }

  c6_i1 = c6_idx->size[0] * c6_idx->size[1];
  c6_idx->size[0] = (int32_T)c6_b_dv[0];
  c6_idx->size[1] = 1;
  c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_st, c6_idx, c6_i1,
    &c6_rf_emlrtRTEI);
  c6_loop_ub = (int32_T)c6_b_dv[0] - 1;
  for (c6_i2 = 0; c6_i2 <= c6_loop_ub; c6_i2++) {
    c6_idx->data[c6_i2] = 0;
  }

  c6_b = (c6_x->size[0] == 0);
  if (!c6_b) {
    c6_b_st.site = &c6_qf_emlrtRSI;
    c6_b_st.site = &c6_rf_emlrtRSI;
    c6_n = c6_x->size[0];
    c6_c_st.site = &c6_sf_emlrtRSI;
    c6_b_n = c6_x->size[0];
    for (c6_i3 = 0; c6_i3 < 4; c6_i3++) {
      c6_x4[c6_i3] = 0.0;
    }

    for (c6_i4 = 0; c6_i4 < 4; c6_i4++) {
      c6_idx4[c6_i4] = 0;
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_iwork, 1, &c6_tf_emlrtRTEI);
    c6_i5 = c6_iwork->size[0];
    c6_iwork->size[0] = c6_idx->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_iwork, c6_i5,
      &c6_sf_emlrtRTEI);
    c6_iv[0] = c6_iwork->size[0];
    c6_i6 = c6_iwork->size[0];
    c6_iwork->size[0] = c6_iv[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_iwork, c6_i6,
      &c6_tf_emlrtRTEI);
    c6_b_iwork[0] = c6_iwork->size[0];
    c6_i7 = c6_iwork->size[0];
    c6_iwork->size[0] = c6_b_iwork[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_iwork, c6_i7,
      &c6_uf_emlrtRTEI);
    c6_b_loop_ub = c6_b_iwork[0] - 1;
    for (c6_i8 = 0; c6_i8 <= c6_b_loop_ub; c6_i8++) {
      c6_iwork->data[c6_i8] = 0;
    }

    c6_emxInit_real_T1(chartInstance, &c6_c_st, &c6_xwork, 1, &c6_wf_emlrtRTEI);
    c6_b_dv[0] = (real_T)c6_x->size[0];
    c6_i9 = c6_xwork->size[0];
    c6_xwork->size[0] = (int32_T)c6_b_dv[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_xwork, c6_i9,
      &c6_vf_emlrtRTEI);
    c6_iv[0] = c6_xwork->size[0];
    c6_i10 = c6_xwork->size[0];
    c6_xwork->size[0] = c6_iv[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_xwork, c6_i10,
      &c6_wf_emlrtRTEI);
    c6_b_xwork[0] = c6_xwork->size[0];
    c6_i11 = c6_xwork->size[0];
    c6_xwork->size[0] = c6_b_xwork[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_xwork, c6_i11,
      &c6_xf_emlrtRTEI);
    c6_c_loop_ub = c6_b_xwork[0] - 1;
    for (c6_i12 = 0; c6_i12 <= c6_c_loop_ub; c6_i12++) {
      c6_xwork->data[c6_i12] = 0.0;
    }

    c6_nNaNs = 0;
    c6_ib = 0;
    c6_d_st.site = &c6_yf_emlrtRSI;
    c6_b_b = c6_b_n;
    c6_c_b = c6_b_b;
    if (c6_c_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_c_b > 2147483646);
    }

    if (c6_overflow) {
      c6_e_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
    }

    for (c6_k = 1; c6_k - 1 < c6_b_n; c6_k++) {
      c6_b_k = c6_k - 1;
      c6_b_x = c6_x->data[c6_b_k];
      c6_d_b = muDoubleScalarIsNaN(c6_b_x);
      if (c6_d_b) {
        c6_idx->data[(c6_b_n - c6_nNaNs) - 1] = c6_b_k + 1;
        c6_xwork->data[(c6_b_n - c6_nNaNs) - 1] = c6_x->data[c6_b_k];
        c6_nNaNs++;
      } else {
        c6_ib++;
        c6_idx4[c6_ib - 1] = c6_b_k + 1;
        c6_x4[c6_ib - 1] = c6_x->data[c6_b_k];
        if (c6_ib == 4) {
          c6_quartetOffset = c6_b_k - c6_nNaNs;
          if (c6_x4[0] >= c6_x4[1]) {
            c6_b_i1 = 1;
            c6_b_i2 = 2;
          } else {
            c6_b_i1 = 2;
            c6_b_i2 = 1;
          }

          if (c6_x4[2] >= c6_x4[3]) {
            c6_b_i3 = 3;
            c6_b_i4 = 4;
          } else {
            c6_b_i3 = 4;
            c6_b_i4 = 3;
          }

          if (c6_x4[c6_b_i1 - 1] >= c6_x4[c6_b_i3 - 1]) {
            if (c6_x4[c6_b_i2 - 1] >= c6_x4[c6_b_i3 - 1]) {
              c6_perm[0] = c6_b_i1;
              c6_perm[1] = c6_b_i2;
              c6_perm[2] = c6_b_i3;
              c6_perm[3] = c6_b_i4;
            } else if (c6_x4[c6_b_i2 - 1] >= c6_x4[c6_b_i4 - 1]) {
              c6_perm[0] = c6_b_i1;
              c6_perm[1] = c6_b_i3;
              c6_perm[2] = c6_b_i2;
              c6_perm[3] = c6_b_i4;
            } else {
              c6_perm[0] = c6_b_i1;
              c6_perm[1] = c6_b_i3;
              c6_perm[2] = c6_b_i4;
              c6_perm[3] = c6_b_i2;
            }
          } else if (c6_x4[c6_b_i1 - 1] >= c6_x4[c6_b_i4 - 1]) {
            if (c6_x4[c6_b_i2 - 1] >= c6_x4[c6_b_i4 - 1]) {
              c6_perm[0] = c6_b_i3;
              c6_perm[1] = c6_b_i1;
              c6_perm[2] = c6_b_i2;
              c6_perm[3] = c6_b_i4;
            } else {
              c6_perm[0] = c6_b_i3;
              c6_perm[1] = c6_b_i1;
              c6_perm[2] = c6_b_i4;
              c6_perm[3] = c6_b_i2;
            }
          } else {
            c6_perm[0] = c6_b_i3;
            c6_perm[1] = c6_b_i4;
            c6_perm[2] = c6_b_i1;
            c6_perm[3] = c6_b_i2;
          }

          c6_idx->data[c6_quartetOffset - 3] = c6_idx4[c6_perm[0] - 1];
          c6_idx->data[c6_quartetOffset - 2] = c6_idx4[c6_perm[1] - 1];
          c6_idx->data[c6_quartetOffset - 1] = c6_idx4[c6_perm[2] - 1];
          c6_idx->data[c6_quartetOffset] = c6_idx4[c6_perm[3] - 1];
          c6_x->data[c6_quartetOffset - 3] = c6_x4[c6_perm[0] - 1];
          c6_x->data[c6_quartetOffset - 2] = c6_x4[c6_perm[1] - 1];
          c6_x->data[c6_quartetOffset - 1] = c6_x4[c6_perm[2] - 1];
          c6_x->data[c6_quartetOffset] = c6_x4[c6_perm[3] - 1];
          c6_ib = 0;
        }
      }
    }

    c6_wOffset = (c6_b_n - c6_nNaNs) - 1;
    if (c6_ib > 0) {
      c6_c_n = c6_ib;
      for (c6_i13 = 0; c6_i13 < 4; c6_i13++) {
        c6_perm[c6_i13] = 0;
      }

      if (c6_c_n == 1) {
        c6_perm[0] = 1;
      } else if (c6_c_n == 2) {
        if (c6_x4[0] >= c6_x4[1]) {
          c6_perm[0] = 1;
          c6_perm[1] = 2;
        } else {
          c6_perm[0] = 2;
          c6_perm[1] = 1;
        }
      } else if (c6_x4[0] >= c6_x4[1]) {
        if (c6_x4[1] >= c6_x4[2]) {
          c6_perm[0] = 1;
          c6_perm[1] = 2;
          c6_perm[2] = 3;
        } else if (c6_x4[0] >= c6_x4[2]) {
          c6_perm[0] = 1;
          c6_perm[1] = 3;
          c6_perm[2] = 2;
        } else {
          c6_perm[0] = 3;
          c6_perm[1] = 1;
          c6_perm[2] = 2;
        }
      } else if (c6_x4[0] >= c6_x4[2]) {
        c6_perm[0] = 2;
        c6_perm[1] = 1;
        c6_perm[2] = 3;
      } else if (c6_x4[1] >= c6_x4[2]) {
        c6_perm[0] = 2;
        c6_perm[1] = 3;
        c6_perm[2] = 1;
      } else {
        c6_perm[0] = 3;
        c6_perm[1] = 2;
        c6_perm[2] = 1;
      }

      c6_d_st.site = &c6_ag_emlrtRSI;
      c6_g_b = c6_ib;
      c6_h_b = c6_g_b;
      if (c6_h_b < 1) {
        c6_c_overflow = false;
      } else {
        c6_c_overflow = (c6_h_b > 2147483646);
      }

      if (c6_c_overflow) {
        c6_e_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
      }

      for (c6_d_k = 1; c6_d_k - 1 < c6_ib; c6_d_k++) {
        c6_b_k = c6_d_k;
        c6_idx->data[(c6_wOffset - c6_ib) + c6_b_k] = c6_idx4[c6_perm[c6_b_k - 1]
          - 1];
        c6_x->data[(c6_wOffset - c6_ib) + c6_b_k] = c6_x4[c6_perm[c6_b_k - 1] -
          1];
      }
    }

    c6_m = c6_nNaNs >> 1;
    c6_d_st.site = &c6_bg_emlrtRSI;
    c6_e_b = c6_m;
    c6_f_b = c6_e_b;
    if (c6_f_b < 1) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_f_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_e_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_m; c6_c_k++) {
      c6_b_k = c6_c_k;
      c6_itmp = c6_idx->data[c6_wOffset + c6_b_k];
      c6_idx->data[c6_wOffset + c6_b_k] = c6_idx->data[c6_b_n - c6_b_k];
      c6_idx->data[c6_b_n - c6_b_k] = c6_itmp;
      c6_x->data[c6_wOffset + c6_b_k] = c6_xwork->data[c6_b_n - c6_b_k];
      c6_x->data[c6_b_n - c6_b_k] = c6_xwork->data[c6_wOffset + c6_b_k];
    }

    if ((c6_nNaNs & 1) != 0) {
      c6_x->data[(c6_wOffset + c6_m) + 1] = c6_xwork->data[(c6_wOffset + c6_m) +
        1];
    }

    c6_nNonNaN = c6_n - c6_nNaNs;
    c6_preSortLevel = 2;
    if (c6_nNonNaN > 1) {
      if (c6_n >= 256) {
        c6_nBlocks = c6_nNonNaN >> 8;
        if (c6_nBlocks > 0) {
          c6_c_st.site = &c6_tf_emlrtRSI;
          c6_i_b = c6_nBlocks;
          c6_j_b = c6_i_b;
          if (c6_j_b < 1) {
            c6_d_overflow = false;
          } else {
            c6_d_overflow = (c6_j_b > 2147483646);
          }

          if (c6_d_overflow) {
            c6_d_st.site = &c6_ib_emlrtRSI;
            c6_check_forloop_overflow_error(chartInstance, &c6_d_st);
          }

          for (c6_m_b = 1; c6_m_b - 1 < c6_nBlocks; c6_m_b++) {
            c6_n_b = c6_m_b - 1;
            c6_i18 = c6_r->size[0] * c6_r->size[1];
            c6_r->size[0] = c6_idx->size[0];
            c6_r->size[1] = 1;
            c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_b_st, c6_r, c6_i18,
              &c6_kf_emlrtRTEI);
            c6_g_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
            for (c6_i22 = 0; c6_i22 <= c6_g_loop_ub; c6_i22++) {
              c6_r->data[c6_i22] = c6_idx->data[c6_i22];
            }

            c6_i25 = c6_r1->size[0] * c6_r1->size[1];
            c6_r1->size[0] = c6_x->size[0];
            c6_r1->size[1] = 1;
            c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i25,
              &c6_kf_emlrtRTEI);
            c6_j_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
            for (c6_i28 = 0; c6_i28 <= c6_j_loop_ub; c6_i28++) {
              c6_r1->data[c6_i28] = c6_x->data[c6_i28];
            }

            c6_c_st.site = &c6_uf_emlrtRSI;
            c6_b_merge_pow2_block(chartInstance, &c6_c_st, c6_r, c6_r1, c6_n_b <<
                                  8);
            c6_i32 = c6_x->size[0] * c6_x->size[1];
            c6_x->size[0] = c6_r1->size[0];
            c6_x->size[1] = 1;
            c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_x, c6_i32,
              &c6_kf_emlrtRTEI);
            c6_n_loop_ub = c6_r1->size[0] - 1;
            for (c6_i36 = 0; c6_i36 <= c6_n_loop_ub; c6_i36++) {
              c6_x->data[c6_i36] = c6_r1->data[c6_i36];
            }

            c6_i38 = c6_idx->size[0] * c6_idx->size[1];
            c6_idx->size[0] = c6_r->size[0];
            c6_idx->size[1] = 1;
            c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_b_st, c6_idx,
              c6_i38, &c6_ag_emlrtRTEI);
            c6_q_loop_ub = c6_r->size[0] * c6_r->size[1] - 1;
            for (c6_i42 = 0; c6_i42 <= c6_q_loop_ub; c6_i42++) {
              c6_idx->data[c6_i42] = c6_r->data[c6_i42];
            }
          }

          c6_tailOffset = c6_nBlocks << 8;
          c6_nLastBlock = c6_nNonNaN - c6_tailOffset;
          if (c6_nLastBlock > 0) {
            c6_i20 = c6_r->size[0] * c6_r->size[1];
            c6_r->size[0] = c6_idx->size[0];
            c6_r->size[1] = 1;
            c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_b_st, c6_r, c6_i20,
              &c6_kf_emlrtRTEI);
            c6_h_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
            for (c6_i24 = 0; c6_i24 <= c6_h_loop_ub; c6_i24++) {
              c6_r->data[c6_i24] = c6_idx->data[c6_i24];
            }

            c6_i26 = c6_r1->size[0] * c6_r1->size[1];
            c6_r1->size[0] = c6_x->size[0];
            c6_r1->size[1] = 1;
            c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i26,
              &c6_kf_emlrtRTEI);
            c6_k_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
            for (c6_i29 = 0; c6_i29 <= c6_k_loop_ub; c6_i29++) {
              c6_r1->data[c6_i29] = c6_x->data[c6_i29];
            }

            c6_i31 = c6_r2->size[0];
            c6_r2->size[0] = c6_iwork->size[0];
            c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_r2, c6_i31,
              &c6_kf_emlrtRTEI);
            c6_m_loop_ub = c6_iwork->size[0] - 1;
            for (c6_i34 = 0; c6_i34 <= c6_m_loop_ub; c6_i34++) {
              c6_r2->data[c6_i34] = c6_iwork->data[c6_i34];
            }

            c6_i37 = c6_r3->size[0];
            c6_r3->size[0] = c6_xwork->size[0];
            c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_r3, c6_i37,
              &c6_kf_emlrtRTEI);
            c6_p_loop_ub = c6_xwork->size[0] - 1;
            for (c6_i40 = 0; c6_i40 <= c6_p_loop_ub; c6_i40++) {
              c6_r3->data[c6_i40] = c6_xwork->data[c6_i40];
            }

            c6_c_st.site = &c6_vf_emlrtRSI;
            c6_b_merge_block(chartInstance, &c6_c_st, c6_r, c6_r1, c6_tailOffset,
                             c6_nLastBlock, 2, c6_r2, c6_r3);
            c6_i43 = c6_xwork->size[0];
            c6_xwork->size[0] = c6_r3->size[0];
            c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_xwork,
              c6_i43, &c6_bg_emlrtRTEI);
            c6_s_loop_ub = c6_r3->size[0] - 1;
            for (c6_i46 = 0; c6_i46 <= c6_s_loop_ub; c6_i46++) {
              c6_xwork->data[c6_i46] = c6_r3->data[c6_i46];
            }

            c6_i47 = c6_iwork->size[0];
            c6_iwork->size[0] = c6_r2->size[0];
            c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_iwork,
              c6_i47, &c6_bg_emlrtRTEI);
            c6_u_loop_ub = c6_r2->size[0] - 1;
            for (c6_i49 = 0; c6_i49 <= c6_u_loop_ub; c6_i49++) {
              c6_iwork->data[c6_i49] = c6_r2->data[c6_i49];
            }

            c6_i50 = c6_x->size[0] * c6_x->size[1];
            c6_x->size[0] = c6_r1->size[0];
            c6_x->size[1] = 1;
            c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_x, c6_i50,
              &c6_kf_emlrtRTEI);
            c6_v_loop_ub = c6_r1->size[0] - 1;
            for (c6_i51 = 0; c6_i51 <= c6_v_loop_ub; c6_i51++) {
              c6_x->data[c6_i51] = c6_r1->data[c6_i51];
            }

            c6_i52 = c6_idx->size[0] * c6_idx->size[1];
            c6_idx->size[0] = c6_r->size[0];
            c6_idx->size[1] = 1;
            c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_b_st, c6_idx,
              c6_i52, &c6_bg_emlrtRTEI);
            c6_w_loop_ub = c6_r->size[0] * c6_r->size[1] - 1;
            for (c6_i53 = 0; c6_i53 <= c6_w_loop_ub; c6_i53++) {
              c6_idx->data[c6_i53] = c6_r->data[c6_i53];
            }
          }

          c6_preSortLevel = 8;
        }
      }

      c6_i14 = c6_r->size[0] * c6_r->size[1];
      c6_r->size[0] = c6_idx->size[0];
      c6_r->size[1] = 1;
      c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_b_st, c6_r, c6_i14,
        &c6_kf_emlrtRTEI);
      c6_d_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
      for (c6_i15 = 0; c6_i15 <= c6_d_loop_ub; c6_i15++) {
        c6_r->data[c6_i15] = c6_idx->data[c6_i15];
      }

      c6_i16 = c6_r1->size[0] * c6_r1->size[1];
      c6_r1->size[0] = c6_x->size[0];
      c6_r1->size[1] = 1;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_r1, c6_i16,
        &c6_kf_emlrtRTEI);
      c6_e_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
      for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
        c6_r1->data[c6_i17] = c6_x->data[c6_i17];
      }

      c6_i19 = c6_r2->size[0];
      c6_r2->size[0] = c6_iwork->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_r2, c6_i19,
        &c6_kf_emlrtRTEI);
      c6_f_loop_ub = c6_iwork->size[0] - 1;
      for (c6_i21 = 0; c6_i21 <= c6_f_loop_ub; c6_i21++) {
        c6_r2->data[c6_i21] = c6_iwork->data[c6_i21];
      }

      c6_i23 = c6_r3->size[0];
      c6_r3->size[0] = c6_xwork->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_r3, c6_i23,
        &c6_kf_emlrtRTEI);
      c6_i_loop_ub = c6_xwork->size[0] - 1;
      for (c6_i27 = 0; c6_i27 <= c6_i_loop_ub; c6_i27++) {
        c6_r3->data[c6_i27] = c6_xwork->data[c6_i27];
      }

      c6_c_st.site = &c6_wf_emlrtRSI;
      c6_b_merge_block(chartInstance, &c6_c_st, c6_r, c6_r1, 0, c6_nNonNaN,
                       c6_preSortLevel, c6_r2, c6_r3);
      c6_i30 = c6_xwork->size[0];
      c6_xwork->size[0] = c6_r3->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_xwork, c6_i30,
        &c6_yf_emlrtRTEI);
      c6_l_loop_ub = c6_r3->size[0] - 1;
      for (c6_i33 = 0; c6_i33 <= c6_l_loop_ub; c6_i33++) {
        c6_xwork->data[c6_i33] = c6_r3->data[c6_i33];
      }

      c6_i35 = c6_iwork->size[0];
      c6_iwork->size[0] = c6_r2->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_iwork, c6_i35,
        &c6_yf_emlrtRTEI);
      c6_o_loop_ub = c6_r2->size[0] - 1;
      for (c6_i39 = 0; c6_i39 <= c6_o_loop_ub; c6_i39++) {
        c6_iwork->data[c6_i39] = c6_r2->data[c6_i39];
      }

      c6_i41 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_r1->size[0];
      c6_x->size[1] = 1;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_x, c6_i41,
        &c6_kf_emlrtRTEI);
      c6_r_loop_ub = c6_r1->size[0] - 1;
      for (c6_i44 = 0; c6_i44 <= c6_r_loop_ub; c6_i44++) {
        c6_x->data[c6_i44] = c6_r1->data[c6_i44];
      }

      c6_i45 = c6_idx->size[0] * c6_idx->size[1];
      c6_idx->size[0] = c6_r->size[0];
      c6_idx->size[1] = 1;
      c6_emxEnsureCapacity_int32_T1(chartInstance, &c6_b_st, c6_idx, c6_i45,
        &c6_yf_emlrtRTEI);
      c6_t_loop_ub = c6_r->size[0] * c6_r->size[1] - 1;
      for (c6_i48 = 0; c6_i48 <= c6_t_loop_ub; c6_i48++) {
        c6_idx->data[c6_i48] = c6_r->data[c6_i48];
      }
    }

    if ((c6_nNaNs > 0) && (c6_nNonNaN > 0)) {
      c6_c_st.site = &c6_xf_emlrtRSI;
      c6_b_nNonNaN = c6_nNonNaN - 1;
      c6_b_nNaNs = c6_nNaNs - 1;
      c6_d_st.site = &c6_lg_emlrtRSI;
      c6_k_b = c6_b_nNaNs + 1;
      c6_l_b = c6_k_b;
      if (c6_l_b < 1) {
        c6_e_overflow = false;
      } else {
        c6_e_overflow = (c6_l_b > 2147483646);
      }

      if (c6_e_overflow) {
        c6_e_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
      }

      for (c6_e_k = 1; c6_e_k - 1 <= c6_b_nNaNs; c6_e_k++) {
        c6_g_k = c6_e_k;
        c6_xwork->data[c6_g_k - 1] = c6_x->data[c6_b_nNonNaN + c6_g_k];
        c6_iwork->data[c6_g_k - 1] = c6_idx->data[c6_b_nNonNaN + c6_g_k];
      }

      for (c6_f_k = c6_b_nNonNaN + 1; c6_f_k > 0; c6_f_k--) {
        c6_x->data[c6_b_nNaNs + c6_f_k] = c6_x->data[c6_f_k - 1];
        c6_idx->data[c6_b_nNaNs + c6_f_k] = c6_idx->data[c6_f_k - 1];
      }

      c6_d_st.site = &c6_mg_emlrtRSI;
      c6_o_b = c6_b_nNaNs + 1;
      c6_p_b = c6_o_b;
      if (c6_p_b < 1) {
        c6_f_overflow = false;
      } else {
        c6_f_overflow = (c6_p_b > 2147483646);
      }

      if (c6_f_overflow) {
        c6_e_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 <= c6_b_nNaNs; c6_h_k++) {
        c6_g_k = c6_h_k - 1;
        c6_x->data[c6_g_k] = c6_xwork->data[c6_g_k];
        c6_idx->data[c6_g_k] = c6_iwork->data[c6_g_k];
      }
    }

    c6_emxFree_real_T(chartInstance, &c6_xwork);
    c6_emxFree_int32_T(chartInstance, &c6_iwork);
  }

  c6_emxFree_real_T(chartInstance, &c6_r3);
  c6_emxFree_int32_T(chartInstance, &c6_r2);
  c6_emxFree_real_T(chartInstance, &c6_r1);
  c6_emxFree_int32_T(chartInstance, &c6_r);
}

static void c6_b_merge_pow2_block(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
  c6_emxArray_real_T *c6_x, int32_T c6_offset)
{
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  real_T c6_xwork[256];
  int32_T c6_iwork[256];
  int32_T c6_b;
  int32_T c6_bLen;
  int32_T c6_bLen2;
  int32_T c6_b_b;
  int32_T c6_b_j;
  int32_T c6_b_k;
  int32_T c6_blockOffset;
  int32_T c6_c_b;
  int32_T c6_c_j;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_e_a;
  int32_T c6_e_b;
  int32_T c6_exitg1;
  int32_T c6_f_b;
  int32_T c6_g_b;
  int32_T c6_iout;
  int32_T c6_j;
  int32_T c6_k;
  int32_T c6_nPairs;
  int32_T c6_offset1;
  int32_T c6_p;
  int32_T c6_q;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  for (c6_b = 0; c6_b < 6; c6_b++) {
    c6_bLen = 1 << (c6_b + 2);
    c6_bLen2 = c6_bLen << 1;
    c6_nPairs = 256 >> (c6_b + 3);
    c6_st.site = &c6_cg_emlrtRSI;
    c6_b_b = c6_nPairs;
    c6_c_b = c6_b_b;
    if (c6_c_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_c_b > 2147483646);
    }

    if (c6_overflow) {
      c6_b_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_k = 1; c6_k - 1 < c6_nPairs; c6_k++) {
      c6_b_k = c6_k - 1;
      c6_blockOffset = (c6_offset + c6_b_k * c6_bLen2) - 1;
      c6_st.site = &c6_dg_emlrtRSI;
      c6_d_b = c6_bLen2;
      c6_e_b = c6_d_b;
      if (c6_e_b < 1) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_e_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_b_st.site = &c6_ib_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
      }

      for (c6_j = 1; c6_j - 1 < c6_bLen2; c6_j++) {
        c6_b_j = c6_j;
        c6_iwork[c6_b_j - 1] = c6_idx->data[c6_blockOffset + c6_b_j];
        c6_xwork[c6_b_j - 1] = c6_x->data[c6_blockOffset + c6_b_j];
      }

      c6_p = 0;
      c6_q = c6_bLen;
      c6_iout = c6_blockOffset;
      do {
        c6_exitg1 = 0;
        c6_iout++;
        if (c6_xwork[c6_p] >= c6_xwork[c6_q]) {
          c6_idx->data[c6_iout] = c6_iwork[c6_p];
          c6_x->data[c6_iout] = c6_xwork[c6_p];
          if (c6_p + 1 < c6_bLen) {
            c6_p++;
          } else {
            c6_exitg1 = 1;
          }
        } else {
          c6_idx->data[c6_iout] = c6_iwork[c6_q];
          c6_x->data[c6_iout] = c6_xwork[c6_q];
          if (c6_q + 1 < c6_bLen2) {
            c6_q++;
          } else {
            c6_offset1 = c6_iout - c6_p;
            c6_st.site = &c6_eg_emlrtRSI;
            c6_d_a = c6_p + 1;
            c6_f_b = c6_bLen;
            c6_e_a = c6_d_a;
            c6_g_b = c6_f_b;
            if (c6_e_a > c6_g_b) {
              c6_c_overflow = false;
            } else {
              c6_c_overflow = (c6_g_b > 2147483646);
            }

            if (c6_c_overflow) {
              c6_b_st.site = &c6_ib_emlrtRSI;
              c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
            }

            for (c6_c_j = c6_p + 1; c6_c_j <= c6_bLen; c6_c_j++) {
              c6_idx->data[c6_offset1 + c6_c_j] = c6_iwork[c6_c_j - 1];
              c6_x->data[c6_offset1 + c6_c_j] = c6_xwork[c6_c_j - 1];
            }

            c6_exitg1 = 1;
          }
        }
      } while (c6_exitg1 == 0);
    }
  }
}

static void c6_b_merge_block(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx,
  c6_emxArray_real_T *c6_x, int32_T c6_offset, int32_T c6_n, int32_T
  c6_preSortLevel, c6_emxArray_int32_T *c6_iwork, c6_emxArray_real_T *c6_xwork)
{
  c6_emxArray_int32_T *c6_r;
  c6_emxArray_int32_T *c6_r2;
  c6_emxArray_real_T *c6_r1;
  c6_emxArray_real_T *c6_r3;
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b;
  int32_T c6_bLen;
  int32_T c6_bLen2;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_loop_ub;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_l_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_m_loop_ub;
  int32_T c6_nBlocks;
  int32_T c6_nPairs;
  int32_T c6_nTail;
  int32_T c6_n_loop_ub;
  int32_T c6_o_loop_ub;
  int32_T c6_p_loop_ub;
  int32_T c6_q_loop_ub;
  int32_T c6_r_loop_ub;
  int32_T c6_s_loop_ub;
  int32_T c6_t_loop_ub;
  int32_T c6_tailOffset;
  int32_T c6_u_loop_ub;
  int32_T c6_v_loop_ub;
  int32_T c6_w_loop_ub;
  int32_T c6_x_loop_ub;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_emxInit_int32_T1(chartInstance, c6_sp, &c6_r, 2, &c6_mf_emlrtRTEI);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_r1, 2, &c6_mf_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_r2, 1, &c6_mf_emlrtRTEI);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_r3, 1, &c6_mf_emlrtRTEI);
  c6_nBlocks = c6_n >> c6_preSortLevel;
  c6_bLen = 1 << c6_preSortLevel;
  while (c6_nBlocks > 1) {
    if ((c6_nBlocks & 1) != 0) {
      c6_nBlocks--;
      c6_tailOffset = c6_bLen * c6_nBlocks;
      c6_nTail = c6_n - c6_tailOffset;
      if (c6_nTail > c6_bLen) {
        c6_i1 = c6_r->size[0] * c6_r->size[1];
        c6_r->size[0] = c6_idx->size[0];
        c6_r->size[1] = 1;
        c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_r, c6_i1,
          &c6_mf_emlrtRTEI);
        c6_b_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
        for (c6_i4 = 0; c6_i4 <= c6_b_loop_ub; c6_i4++) {
          c6_r->data[c6_i4] = c6_idx->data[c6_i4];
        }

        c6_i5 = c6_r1->size[0] * c6_r1->size[1];
        c6_r1->size[0] = c6_x->size[0];
        c6_r1->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_r1, c6_i5,
          &c6_mf_emlrtRTEI);
        c6_d_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
        for (c6_i9 = 0; c6_i9 <= c6_d_loop_ub; c6_i9++) {
          c6_r1->data[c6_i9] = c6_x->data[c6_i9];
        }

        c6_i11 = c6_r2->size[0];
        c6_r2->size[0] = c6_iwork->size[0];
        c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_r2, c6_i11,
          &c6_mf_emlrtRTEI);
        c6_g_loop_ub = c6_iwork->size[0] - 1;
        for (c6_i15 = 0; c6_i15 <= c6_g_loop_ub; c6_i15++) {
          c6_r2->data[c6_i15] = c6_iwork->data[c6_i15];
        }

        c6_i17 = c6_r3->size[0];
        c6_r3->size[0] = c6_xwork->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_r3, c6_i17,
          &c6_mf_emlrtRTEI);
        c6_j_loop_ub = c6_xwork->size[0] - 1;
        for (c6_i20 = 0; c6_i20 <= c6_j_loop_ub; c6_i20++) {
          c6_r3->data[c6_i20] = c6_xwork->data[c6_i20];
        }

        c6_st.site = &c6_fg_emlrtRSI;
        c6_b_merge(chartInstance, &c6_st, c6_r, c6_r1, c6_offset + c6_tailOffset,
                   c6_bLen, c6_nTail - c6_bLen, c6_r2, c6_r3);
        c6_i23 = c6_xwork->size[0];
        c6_xwork->size[0] = c6_r3->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_xwork, c6_i23,
          &c6_mf_emlrtRTEI);
        c6_m_loop_ub = c6_r3->size[0] - 1;
        for (c6_i27 = 0; c6_i27 <= c6_m_loop_ub; c6_i27++) {
          c6_xwork->data[c6_i27] = c6_r3->data[c6_i27];
        }

        c6_i29 = c6_iwork->size[0];
        c6_iwork->size[0] = c6_r2->size[0];
        c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_iwork, c6_i29,
          &c6_mf_emlrtRTEI);
        c6_p_loop_ub = c6_r2->size[0] - 1;
        for (c6_i32 = 0; c6_i32 <= c6_p_loop_ub; c6_i32++) {
          c6_iwork->data[c6_i32] = c6_r2->data[c6_i32];
        }

        c6_i34 = c6_x->size[0] * c6_x->size[1];
        c6_x->size[0] = c6_r1->size[0];
        c6_x->size[1] = 1;
        c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_x, c6_i34,
          &c6_mf_emlrtRTEI);
        c6_s_loop_ub = c6_r1->size[0] - 1;
        for (c6_i39 = 0; c6_i39 <= c6_s_loop_ub; c6_i39++) {
          c6_x->data[c6_i39] = c6_r1->data[c6_i39];
        }

        c6_i40 = c6_idx->size[0] * c6_idx->size[1];
        c6_idx->size[0] = c6_r->size[0];
        c6_idx->size[1] = 1;
        c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_idx, c6_i40,
          &c6_mf_emlrtRTEI);
        c6_v_loop_ub = c6_r->size[0] - 1;
        for (c6_i44 = 0; c6_i44 <= c6_v_loop_ub; c6_i44++) {
          c6_idx->data[c6_i44] = c6_r->data[c6_i44];
        }
      }
    }

    c6_bLen2 = c6_bLen << 1;
    c6_nPairs = c6_nBlocks >> 1;
    c6_st.site = &c6_gg_emlrtRSI;
    c6_b = c6_nPairs;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_b_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_k = 1; c6_k - 1 < c6_nPairs; c6_k++) {
      c6_b_k = c6_k - 1;
      c6_i8 = c6_r->size[0] * c6_r->size[1];
      c6_r->size[0] = c6_idx->size[0];
      c6_r->size[1] = 1;
      c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_r, c6_i8,
        &c6_mf_emlrtRTEI);
      c6_f_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
      for (c6_i13 = 0; c6_i13 <= c6_f_loop_ub; c6_i13++) {
        c6_r->data[c6_i13] = c6_idx->data[c6_i13];
      }

      c6_i14 = c6_r1->size[0] * c6_r1->size[1];
      c6_r1->size[0] = c6_x->size[0];
      c6_r1->size[1] = 1;
      c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_r1, c6_i14,
        &c6_mf_emlrtRTEI);
      c6_i_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
      for (c6_i18 = 0; c6_i18 <= c6_i_loop_ub; c6_i18++) {
        c6_r1->data[c6_i18] = c6_x->data[c6_i18];
      }

      c6_i21 = c6_r2->size[0];
      c6_r2->size[0] = c6_iwork->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_r2, c6_i21,
        &c6_mf_emlrtRTEI);
      c6_l_loop_ub = c6_iwork->size[0] - 1;
      for (c6_i24 = 0; c6_i24 <= c6_l_loop_ub; c6_i24++) {
        c6_r2->data[c6_i24] = c6_iwork->data[c6_i24];
      }

      c6_i26 = c6_r3->size[0];
      c6_r3->size[0] = c6_xwork->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_r3, c6_i26,
        &c6_mf_emlrtRTEI);
      c6_o_loop_ub = c6_xwork->size[0] - 1;
      for (c6_i30 = 0; c6_i30 <= c6_o_loop_ub; c6_i30++) {
        c6_r3->data[c6_i30] = c6_xwork->data[c6_i30];
      }

      c6_st.site = &c6_hg_emlrtRSI;
      c6_b_merge(chartInstance, &c6_st, c6_r, c6_r1, c6_offset + c6_b_k *
                 c6_bLen2, c6_bLen, c6_bLen, c6_r2, c6_r3);
      c6_i33 = c6_xwork->size[0];
      c6_xwork->size[0] = c6_r3->size[0];
      c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_xwork, c6_i33,
        &c6_mf_emlrtRTEI);
      c6_r_loop_ub = c6_r3->size[0] - 1;
      for (c6_i37 = 0; c6_i37 <= c6_r_loop_ub; c6_i37++) {
        c6_xwork->data[c6_i37] = c6_r3->data[c6_i37];
      }

      c6_i38 = c6_iwork->size[0];
      c6_iwork->size[0] = c6_r2->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_iwork, c6_i38,
        &c6_mf_emlrtRTEI);
      c6_u_loop_ub = c6_r2->size[0] - 1;
      for (c6_i42 = 0; c6_i42 <= c6_u_loop_ub; c6_i42++) {
        c6_iwork->data[c6_i42] = c6_r2->data[c6_i42];
      }

      c6_i43 = c6_x->size[0] * c6_x->size[1];
      c6_x->size[0] = c6_r1->size[0];
      c6_x->size[1] = 1;
      c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_x, c6_i43,
        &c6_mf_emlrtRTEI);
      c6_w_loop_ub = c6_r1->size[0] - 1;
      for (c6_i45 = 0; c6_i45 <= c6_w_loop_ub; c6_i45++) {
        c6_x->data[c6_i45] = c6_r1->data[c6_i45];
      }

      c6_i46 = c6_idx->size[0] * c6_idx->size[1];
      c6_idx->size[0] = c6_r->size[0];
      c6_idx->size[1] = 1;
      c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_idx, c6_i46,
        &c6_mf_emlrtRTEI);
      c6_x_loop_ub = c6_r->size[0] - 1;
      for (c6_i47 = 0; c6_i47 <= c6_x_loop_ub; c6_i47++) {
        c6_idx->data[c6_i47] = c6_r->data[c6_i47];
      }
    }

    c6_bLen = c6_bLen2;
    c6_nBlocks = c6_nPairs;
  }

  if (c6_n > c6_bLen) {
    c6_i = c6_r->size[0] * c6_r->size[1];
    c6_r->size[0] = c6_idx->size[0];
    c6_r->size[1] = 1;
    c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_r, c6_i,
      &c6_mf_emlrtRTEI);
    c6_loop_ub = c6_idx->size[0] * c6_idx->size[1] - 1;
    for (c6_i2 = 0; c6_i2 <= c6_loop_ub; c6_i2++) {
      c6_r->data[c6_i2] = c6_idx->data[c6_i2];
    }

    c6_i3 = c6_r1->size[0] * c6_r1->size[1];
    c6_r1->size[0] = c6_x->size[0];
    c6_r1->size[1] = 1;
    c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_r1, c6_i3,
      &c6_mf_emlrtRTEI);
    c6_c_loop_ub = c6_x->size[0] * c6_x->size[1] - 1;
    for (c6_i6 = 0; c6_i6 <= c6_c_loop_ub; c6_i6++) {
      c6_r1->data[c6_i6] = c6_x->data[c6_i6];
    }

    c6_i7 = c6_r2->size[0];
    c6_r2->size[0] = c6_iwork->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_r2, c6_i7,
      &c6_mf_emlrtRTEI);
    c6_e_loop_ub = c6_iwork->size[0] - 1;
    for (c6_i10 = 0; c6_i10 <= c6_e_loop_ub; c6_i10++) {
      c6_r2->data[c6_i10] = c6_iwork->data[c6_i10];
    }

    c6_i12 = c6_r3->size[0];
    c6_r3->size[0] = c6_xwork->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_r3, c6_i12,
      &c6_mf_emlrtRTEI);
    c6_h_loop_ub = c6_xwork->size[0] - 1;
    for (c6_i16 = 0; c6_i16 <= c6_h_loop_ub; c6_i16++) {
      c6_r3->data[c6_i16] = c6_xwork->data[c6_i16];
    }

    c6_st.site = &c6_ig_emlrtRSI;
    c6_b_merge(chartInstance, &c6_st, c6_r, c6_r1, c6_offset, c6_bLen, c6_n -
               c6_bLen, c6_r2, c6_r3);
    c6_i19 = c6_xwork->size[0];
    c6_xwork->size[0] = c6_r3->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_xwork, c6_i19,
      &c6_mf_emlrtRTEI);
    c6_k_loop_ub = c6_r3->size[0] - 1;
    for (c6_i22 = 0; c6_i22 <= c6_k_loop_ub; c6_i22++) {
      c6_xwork->data[c6_i22] = c6_r3->data[c6_i22];
    }

    c6_i25 = c6_iwork->size[0];
    c6_iwork->size[0] = c6_r2->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_iwork, c6_i25,
      &c6_mf_emlrtRTEI);
    c6_n_loop_ub = c6_r2->size[0] - 1;
    for (c6_i28 = 0; c6_i28 <= c6_n_loop_ub; c6_i28++) {
      c6_iwork->data[c6_i28] = c6_r2->data[c6_i28];
    }

    c6_i31 = c6_x->size[0] * c6_x->size[1];
    c6_x->size[0] = c6_r1->size[0];
    c6_x->size[1] = 1;
    c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, c6_x, c6_i31,
      &c6_mf_emlrtRTEI);
    c6_q_loop_ub = c6_r1->size[0] - 1;
    for (c6_i35 = 0; c6_i35 <= c6_q_loop_ub; c6_i35++) {
      c6_x->data[c6_i35] = c6_r1->data[c6_i35];
    }

    c6_i36 = c6_idx->size[0] * c6_idx->size[1];
    c6_idx->size[0] = c6_r->size[0];
    c6_idx->size[1] = 1;
    c6_emxEnsureCapacity_int32_T1(chartInstance, c6_sp, c6_idx, c6_i36,
      &c6_mf_emlrtRTEI);
    c6_t_loop_ub = c6_r->size[0] - 1;
    for (c6_i41 = 0; c6_i41 <= c6_t_loop_ub; c6_i41++) {
      c6_idx->data[c6_i41] = c6_r->data[c6_i41];
    }
  }

  c6_emxFree_real_T(chartInstance, &c6_r3);
  c6_emxFree_int32_T(chartInstance, &c6_r2);
  c6_emxFree_real_T(chartInstance, &c6_r1);
  c6_emxFree_int32_T(chartInstance, &c6_r);
}

static void c6_b_merge(SFc6_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_idx, c6_emxArray_real_T *c6_x,
  int32_T c6_offset, int32_T c6_np, int32_T c6_nq, c6_emxArray_int32_T *c6_iwork,
  c6_emxArray_real_T *c6_xwork)
{
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_j;
  int32_T c6_c_b;
  int32_T c6_c_j;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_e_a;
  int32_T c6_exitg1;
  int32_T c6_iout;
  int32_T c6_j;
  int32_T c6_n;
  int32_T c6_offset1;
  int32_T c6_p;
  int32_T c6_q;
  int32_T c6_qend;
  boolean_T c6_b_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  if (c6_nq != 0) {
    c6_n = c6_np + c6_nq;
    c6_st.site = &c6_kg_emlrtRSI;
    c6_b = c6_n;
    c6_b_b = c6_b;
    if (c6_b_b < 1) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_b_st.site = &c6_ib_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_j = 1; c6_j - 1 < c6_n; c6_j++) {
      c6_b_j = c6_j - 1;
      c6_iwork->data[c6_b_j] = c6_idx->data[c6_offset + c6_b_j];
      c6_xwork->data[c6_b_j] = c6_x->data[c6_offset + c6_b_j];
    }

    c6_p = 0;
    c6_q = c6_np;
    c6_qend = c6_np + c6_nq;
    c6_iout = c6_offset - 1;
    do {
      c6_exitg1 = 0;
      c6_iout++;
      if (c6_xwork->data[c6_p] >= c6_xwork->data[c6_q]) {
        c6_idx->data[c6_iout] = c6_iwork->data[c6_p];
        c6_x->data[c6_iout] = c6_xwork->data[c6_p];
        if (c6_p + 1 < c6_np) {
          c6_p++;
        } else {
          c6_exitg1 = 1;
        }
      } else {
        c6_idx->data[c6_iout] = c6_iwork->data[c6_q];
        c6_x->data[c6_iout] = c6_xwork->data[c6_q];
        if (c6_q + 1 < c6_qend) {
          c6_q++;
        } else {
          c6_offset1 = c6_iout - c6_p;
          c6_st.site = &c6_jg_emlrtRSI;
          c6_d_a = c6_p + 1;
          c6_c_b = c6_np;
          c6_e_a = c6_d_a;
          c6_d_b = c6_c_b;
          if (c6_e_a > c6_d_b) {
            c6_b_overflow = false;
          } else {
            c6_b_overflow = (c6_d_b > 2147483646);
          }

          if (c6_b_overflow) {
            c6_b_st.site = &c6_ib_emlrtRSI;
            c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
          }

          for (c6_c_j = c6_p + 1; c6_c_j <= c6_np; c6_c_j++) {
            c6_idx->data[c6_offset1 + c6_c_j] = c6_iwork->data[c6_c_j - 1];
            c6_x->data[c6_offset1 + c6_c_j] = c6_xwork->data[c6_c_j - 1];
          }

          c6_exitg1 = 1;
        }
      }
    } while (c6_exitg1 == 0);
  }
}

static real_T c6_binary_expand_op(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, emlrtRSInfo c6_in1,
  c6_emxArray_real_T *c6_in2, c6_emxArray_real_T *c6_in3)
{
  c6_emxArray_real_T *c6_b_in2;
  emlrtStack c6_st;
  real_T c6_out1;
  int32_T c6_aux_0_0;
  int32_T c6_aux_1_0;
  int32_T c6_b_in3;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_loop_ub;
  int32_T c6_stride_0_0;
  int32_T c6_stride_1_0;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_b_in2, 1, &c6_ie_emlrtRTEI);
  c6_i = c6_b_in2->size[0];
  if (c6_in3->size[0] == 1) {
    c6_b_in2->size[0] = c6_in2->size[0];
  } else {
    c6_b_in2->size[0] = c6_in3->size[0];
  }

  c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, c6_b_in2, c6_i,
    &c6_ie_emlrtRTEI);
  c6_stride_0_0 = (c6_in2->size[0] != 1);
  c6_stride_1_0 = (c6_in3->size[0] != 1);
  c6_aux_0_0 = 0;
  c6_aux_1_0 = 0;
  if (c6_in3->size[0] == 1) {
    c6_b_in3 = c6_in2->size[0];
  } else {
    c6_b_in3 = c6_in3->size[0];
  }

  c6_loop_ub = c6_b_in3 - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_in2->data[c6_i1] = c6_in2->data[c6_aux_0_0] * c6_in3->data[c6_aux_1_0];
    c6_aux_1_0 += c6_stride_1_0;
    c6_aux_0_0 += c6_stride_0_0;
  }

  c6_st.site = &c6_in1;
  c6_out1 = c6_sum(chartInstance, &c6_st, c6_b_in2);
  c6_emxFree_real_T(chartInstance, &c6_b_in2);
  return c6_out1;
}

static void c6_emxInit_s8812E1qfIkP21aQTfYt8iB
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s8812E1qfIkP21aQTfYt8i **c6_pEmxArray, int32_T
   c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_s8812E1qfIkP21aQTfYt8i *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_s8812E1qfIkP21aQTfYt8i *)emlrtMallocMex(sizeof
    (c6_emxArray_s8812E1qfIkP21aQTfYt8i));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (c6_s8812E1qfIkP21aQTfYt8iB *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_real_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_real_T *)emlrtMallocMex(sizeof(c6_emxArray_real_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (real_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxFree_s8812E1qfIkP21aQTfYt8iB
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_s8812E1qfIkP21aQTfYt8i **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_s8812E1qfIkP21aQTfYt8i *)NULL) {
    if (((*c6_pEmxArray)->data != (c6_s8812E1qfIkP21aQTfYt8iB *)NULL) &&
        (*c6_pEmxArray)->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_s8812E1qfIkP21aQTfYt8i *)NULL;
  }
}

static void c6_emxFree_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_real_T *)NULL) {
    if (((*c6_pEmxArray)->data != (real_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_real_T *)NULL;
  }
}

static void c6_emxEnsureCapacity_boolean_T
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_boolean_T *c6_emxArray, int32_T c6_oldNumel, const
   emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(boolean_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (boolean_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_s8812E1qfIkP2
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s8812E1qfIkP21aQTfYt8i *c6_emxArray, int32_T c6_oldNumel,
   const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof
      (c6_s8812E1qfIkP21aQTfYt8iB));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(c6_s8812E1qfIkP21aQTfYt8iB) *
             (uint32_T)c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (c6_s8812E1qfIkP21aQTfYt8iB *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(real_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(real_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (real_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxFreeStruct_s_R6Og1x0kmqQXSF9
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_pStruct)
{
  c6_emxFree_real_T(chartInstance, &c6_pStruct->PixelIdxList);
  c6_emxFree_real_T(chartInstance, &c6_pStruct->PixelList);
  c6_emxFree_real_T(chartInstance, &c6_pStruct->PixelValues);
}

static void c6_emxTrim_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray, int32_T c6_fromIndex,
   int32_T c6_toIndex)
{
  int32_T c6_i;
  for (c6_i = c6_fromIndex; c6_i < c6_toIndex; c6_i++) {
    c6_emxFreeStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c6_emxArray->data[c6_i]);
  }
}

static void c6_emxInitStruct_s_R6Og1x0kmqQXSF9
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_pStruct, const emlrtRTEInfo
   *c6_srcLocation)
{
  c6_pStruct->Image.size[0] = 0;
  c6_pStruct->Image.size[1] = 0;
  c6_pStruct->FilledImage.size[0] = 0;
  c6_pStruct->FilledImage.size[1] = 0;
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_pStruct->PixelIdxList, 1,
                     c6_srcLocation);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_pStruct->PixelList, 2,
                    c6_srcLocation);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_pStruct->PixelValues, 1,
                     c6_srcLocation);
  c6_pStruct->SubarrayIdx.size[0] = 0;
  c6_pStruct->SubarrayIdx.size[1] = 0;
}

static void c6_emxInit_real_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_real_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_real_T *)emlrtMallocMex(sizeof(c6_emxArray_real_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (real_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxExpand_s_R6Og1x0kmqQXSF9Pwa4
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray, int32_T c6_fromIndex,
   int32_T c6_toIndex, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  for (c6_i = c6_fromIndex; c6_i < c6_toIndex; c6_i++) {
    c6_emxInitStruct_s_R6Og1x0kmqQXSF9(chartInstance, c6_sp, &c6_emxArray->
      data[c6_i], c6_srcLocation);
  }
}

static void c6_emxEnsureCapacity_s_R6Og1x0kmqQ
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray, int32_T c6_oldNumel,
   const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof
      (c6_s_R6Og1x0kmqQXSF9Pwa49FD));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(c6_s_R6Og1x0kmqQXSF9Pwa49FD) *
             (uint32_T)c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (c6_s_R6Og1x0kmqQXSF9Pwa49FD *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }

  if (c6_oldNumel > c6_newNumel) {
    c6_emxTrim_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, c6_emxArray, c6_newNumel,
      c6_oldNumel);
  } else if (c6_oldNumel < c6_newNumel) {
    c6_emxExpand_s_R6Og1x0kmqQXSF9Pwa4(chartInstance, c6_sp, c6_emxArray,
      c6_oldNumel, c6_newNumel, c6_srcLocation);
  }
}

static void c6_emxCopyStruct_s_R6Og1x0kmqQXSF9
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_dst, const
   c6_s_R6Og1x0kmqQXSF9Pwa49FD *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  c6_dst->Area = c6_src->Area;
  c6_emxCopyMatrix_real_T(chartInstance, c6_dst->Centroid, c6_src->Centroid);
  c6_emxCopyMatrix_real_T1(chartInstance, c6_dst->BoundingBox,
    c6_src->BoundingBox);
  c6_dst->MajorAxisLength = c6_src->MajorAxisLength;
  c6_dst->MinorAxisLength = c6_src->MinorAxisLength;
  c6_dst->Eccentricity = c6_src->Eccentricity;
  c6_dst->Orientation = c6_src->Orientation;
  c6_emxCopy_boolean_T_0x0(chartInstance, &c6_dst->Image, &c6_src->Image);
  c6_emxCopy_boolean_T_0x0(chartInstance, &c6_dst->FilledImage,
    &c6_src->FilledImage);
  c6_dst->FilledArea = c6_src->FilledArea;
  c6_dst->EulerNumber = c6_src->EulerNumber;
  c6_emxCopyMatrix_real_T2(chartInstance, c6_dst->Extrema, c6_src->Extrema);
  c6_dst->EquivDiameter = c6_src->EquivDiameter;
  c6_dst->Extent = c6_src->Extent;
  c6_emxCopy_real_T(chartInstance, c6_sp, &c6_dst->PixelIdxList,
                    &c6_src->PixelIdxList, c6_srcLocation);
  c6_emxCopy_real_T1(chartInstance, c6_sp, &c6_dst->PixelList,
                     &c6_src->PixelList, c6_srcLocation);
  c6_dst->Perimeter = c6_src->Perimeter;
  c6_dst->Circularity = c6_src->Circularity;
  c6_emxCopy_real_T(chartInstance, c6_sp, &c6_dst->PixelValues,
                    &c6_src->PixelValues, c6_srcLocation);
  c6_emxCopyMatrix_real_T(chartInstance, c6_dst->WeightedCentroid,
    c6_src->WeightedCentroid);
  c6_dst->MeanIntensity = c6_src->MeanIntensity;
  c6_dst->MinIntensity = c6_src->MinIntensity;
  c6_dst->MaxIntensity = c6_src->MaxIntensity;
  c6_emxCopy_real_T_1x0(chartInstance, &c6_dst->SubarrayIdx,
                        &c6_src->SubarrayIdx);
  c6_emxCopyMatrix_real_T(chartInstance, c6_dst->SubarrayIdxLengths,
    c6_src->SubarrayIdxLengths);
}

static void c6_emxCopyMatrix_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_dst[2], const real_T c6_src[2])
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_dst[c6_i] = c6_src[c6_i];
  }
}

static void c6_emxCopyMatrix_real_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_dst[4], const real_T c6_src[4])
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 4; c6_i++) {
    c6_dst[c6_i] = c6_src[c6_i];
  }
}

static void c6_emxCopy_boolean_T_0x0(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_boolean_T_0x0 *c6_dst, const
  c6_emxArray_boolean_T_0x0 *c6_src)
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_dst->size[c6_i] = c6_src->size[c6_i];
  }
}

static void c6_emxCopyMatrix_real_T2(SFc6_flightControlSystemInstanceStruct
  *chartInstance, real_T c6_dst[16], const real_T c6_src[16])
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 16; c6_i++) {
    c6_dst[c6_i] = c6_src[c6_i];
  }
}

static void c6_emxCopy_real_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst,
  c6_emxArray_real_T * const *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_numElDst;
  int32_T c6_numElSrc;
  c6_numElDst = 1;
  c6_numElSrc = 1;
  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    c6_numElDst *= (*c6_dst)->size[c6_i];
    c6_numElSrc *= (*c6_src)->size[c6_i];
  }

  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    (*c6_dst)->size[c6_i] = (*c6_src)->size[c6_i];
  }

  c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, *c6_dst, c6_numElDst,
    c6_srcLocation);
  for (c6_i = 0; c6_i < c6_numElSrc; c6_i++) {
    (*c6_dst)->data[c6_i] = (*c6_src)->data[c6_i];
  }
}

static void c6_emxCopy_real_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst,
  c6_emxArray_real_T * const *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_numElDst;
  int32_T c6_numElSrc;
  c6_numElDst = 1;
  c6_numElSrc = 1;
  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    c6_numElDst *= (*c6_dst)->size[c6_i];
    c6_numElSrc *= (*c6_src)->size[c6_i];
  }

  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    (*c6_dst)->size[c6_i] = (*c6_src)->size[c6_i];
  }

  c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, *c6_dst, c6_numElDst,
    c6_srcLocation);
  for (c6_i = 0; c6_i < c6_numElSrc; c6_i++) {
    (*c6_dst)->data[c6_i] = (*c6_src)->data[c6_i];
  }
}

static void c6_emxEnsureCapacity_real_T1(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(real_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(real_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (real_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxCopy_real_T_1x0(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real_T_1x0 *c6_dst, const c6_emxArray_real_T_1x0
  *c6_src)
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_dst->size[c6_i] = c6_src->size[c6_i];
  }
}

static void c6_emxEnsureCapacity_int32_T(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(int32_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(int32_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (int32_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxInit_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c6_pEmxArray, int32_T
   c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *)emlrtMallocMex(sizeof
    (c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (c6_s_R6Og1x0kmqQXSF9Pwa49FD *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_boolean_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_boolean_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c6_emxArray_boolean_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (boolean_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_int32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_int32_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c6_emxArray_int32_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (int32_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxFree_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c6_pEmxArray)
{
  int32_T c6_b_i;
  int32_T c6_i;
  int32_T c6_numEl;
  if (*c6_pEmxArray != (c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *)NULL) {
    if ((*c6_pEmxArray)->data != (c6_s_R6Og1x0kmqQXSF9Pwa49FD *)NULL) {
      c6_numEl = 1;
      for (c6_i = 0; c6_i < (*c6_pEmxArray)->numDimensions; c6_i++) {
        c6_numEl *= (*c6_pEmxArray)->size[c6_i];
      }

      for (c6_b_i = 0; c6_b_i < c6_numEl; c6_b_i++) {
        c6_emxFreeStruct_s_R6Og1x0kmqQXSF9(chartInstance, &(*c6_pEmxArray)->
          data[c6_b_i]);
      }

      if ((*c6_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c6_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *)NULL;
  }
}

static void c6_emxFree_boolean_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_boolean_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_boolean_T *)NULL) {
    if (((*c6_pEmxArray)->data != (boolean_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_boolean_T *)NULL;
  }
}

static void c6_emxFree_int32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_int32_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_int32_T *)NULL) {
    if (((*c6_pEmxArray)->data != (int32_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_int32_T *)NULL;
  }
}

static void c6_emxEnsureCapacity_boolean_T1
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_boolean_T *c6_emxArray, int32_T c6_oldNumel, const
   emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(boolean_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (boolean_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxInit_boolean_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_boolean_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c6_emxArray_boolean_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (boolean_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxEnsureCapacity_real32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(real32_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(real32_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (real32_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_creal_T(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(creal_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(creal_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (creal_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_creal_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(creal_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(creal_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (creal_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxInit_real32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real32_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_real32_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c6_emxArray_real32_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (real32_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_creal_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_creal_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_creal_T *)emlrtMallocMex(sizeof
    (c6_emxArray_creal_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (creal_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_creal_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_creal_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_creal_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_creal_T *)emlrtMallocMex(sizeof
    (c6_emxArray_creal_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (creal_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxFree_real32_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_real32_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_real32_T *)NULL) {
    if (((*c6_pEmxArray)->data != (real32_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_real32_T *)NULL;
  }
}

static void c6_emxFree_creal_T(SFc6_flightControlSystemInstanceStruct
  *chartInstance, c6_emxArray_creal_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_creal_T *)NULL) {
    if (((*c6_pEmxArray)->data != (creal_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_creal_T *)NULL;
  }
}

static void c6_emxInit_sOA5t73y81YtFHGIDxk0fKF
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_sOA5t73y81YtFHGIDxk0fK **c6_pEmxArray, int32_T
   c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_sOA5t73y81YtFHGIDxk0fK *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_sOA5t73y81YtFHGIDxk0fK *)emlrtMallocMex(sizeof
    (c6_emxArray_sOA5t73y81YtFHGIDxk0fK));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (c6_sOA5t73y81YtFHGIDxk0fKF *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_int32_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T **c6_pEmxArray,
  int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_int32_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c6_emxArray_int32_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (int32_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxFree_sOA5t73y81YtFHGIDxk0fKF
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_emxArray_sOA5t73y81YtFHGIDxk0fK **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_sOA5t73y81YtFHGIDxk0fK *)NULL) {
    if (((*c6_pEmxArray)->data != (c6_sOA5t73y81YtFHGIDxk0fKF *)NULL) &&
        (*c6_pEmxArray)->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_sOA5t73y81YtFHGIDxk0fK *)NULL;
  }
}

static void c6_emxEnsureCapacity_sOA5t73y81YtF
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_emxArray_sOA5t73y81YtFHGIDxk0fK *c6_emxArray, int32_T c6_oldNumel,
   const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof
      (c6_sOA5t73y81YtFHGIDxk0fKF));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(c6_sOA5t73y81YtFHGIDxk0fKF) *
             (uint32_T)c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (c6_sOA5t73y81YtFHGIDxk0fKF *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxInitStruct_s_vX9LV7M75v5ZNol
  (SFc6_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c6_sp, c6_s_vX9LV7M75v5ZNol5H5URkE *c6_pStruct, const emlrtRTEInfo
   *c6_srcLocation)
{
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_pStruct->RegionIndices, 1,
                     c6_srcLocation);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_pStruct->RegionLengths, 1,
                     c6_srcLocation);
}

static void c6_emxInitMatrix_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_6 c6_pMatrix[2], const
  emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_emxInitStruct_cell_wrap_6(chartInstance, c6_sp, &c6_pMatrix[c6_i],
      c6_srcLocation);
  }
}

static void c6_emxInitStruct_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_6 *c6_pStruct, const
  emlrtRTEInfo *c6_srcLocation)
{
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_pStruct->f1, 1, c6_srcLocation);
}

static void c6_emxFreeStruct_s_vX9LV7M75v5ZNol
  (SFc6_flightControlSystemInstanceStruct *chartInstance,
   c6_s_vX9LV7M75v5ZNol5H5URkE *c6_pStruct)
{
  c6_emxFree_real_T(chartInstance, &c6_pStruct->RegionIndices);
  c6_emxFree_int32_T(chartInstance, &c6_pStruct->RegionLengths);
}

static void c6_emxFreeMatrix_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, c6_cell_wrap_6 c6_pMatrix[2])
{
  int32_T c6_i;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_emxFreeStruct_cell_wrap_6(chartInstance, &c6_pMatrix[c6_i]);
  }
}

static void c6_emxFreeStruct_cell_wrap_6(SFc6_flightControlSystemInstanceStruct *
  chartInstance, c6_cell_wrap_6 *c6_pStruct)
{
  c6_emxFree_real_T(chartInstance, &c6_pStruct->f1);
}

static void c6_emxEnsureCapacity_int32_T1(SFc6_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(int32_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(int32_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (int32_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static int32_T c6_div_nzp_s32(SFc6_flightControlSystemInstanceStruct
  *chartInstance, int32_T c6_numerator, int32_T c6_denominator, int32_T
  c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc, int32_T c6_offset_src_loc,
  int32_T c6_length_src_loc)
{
  int32_T c6_quotient;
  uint32_T c6_absDenominator;
  uint32_T c6_absNumerator;
  uint32_T c6_tempAbsQuotient;
  boolean_T c6_quotientNeedsNegation;
  (void)chartInstance;
  (void)c6_EMLOvCount_src_loc;
  (void)c6_ssid_src_loc;
  (void)c6_offset_src_loc;
  (void)c6_length_src_loc;
  if (c6_numerator < 0) {
    c6_absNumerator = ~(uint32_T)c6_numerator + 1U;
  } else {
    c6_absNumerator = (uint32_T)c6_numerator;
  }

  if (c6_denominator < 0) {
    c6_absDenominator = ~(uint32_T)c6_denominator + 1U;
  } else {
    c6_absDenominator = (uint32_T)c6_denominator;
  }

  c6_quotientNeedsNegation = ((c6_numerator < 0) != (c6_denominator < 0));
  c6_tempAbsQuotient = c6_absNumerator / c6_absDenominator;
  if (c6_quotientNeedsNegation) {
    c6_quotient = -(int32_T)c6_tempAbsQuotient;
  } else {
    c6_quotient = (int32_T)c6_tempAbsQuotient;
  }

  return c6_quotient;
}

static int32_T c6__s32_s64_(SFc6_flightControlSystemInstanceStruct
  *chartInstance, int64_T c6_b, int32_T c6_EMLOvCount_src_loc, uint32_T
  c6_ssid_src_loc, int32_T c6_offset_src_loc, int32_T c6_length_src_loc)
{
  int32_T c6_d_a;
  (void)c6_EMLOvCount_src_loc;
  c6_d_a = (int32_T)c6_b;
  if ((int64_T)c6_d_a != c6_b) {
    sf_data_overflow_error(chartInstance->S, c6_ssid_src_loc, c6_offset_src_loc,
      c6_length_src_loc);
  }

  return c6_d_a;
}

static void init_dsm_address_info(SFc6_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c6_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c6_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c6_bw = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_b_roi_l = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_b_roi_r = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_center = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_roi = (real_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_blkroi = (real_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_area_l = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_area_r = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c6_centroid = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c6_centroid_blk = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c6_land = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c6_blk_l = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_blk_r = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c6_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4199046901U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3227126134U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1792445216U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(453820711U);
}

mxArray *sf_c6_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,8);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.Ordfilt2Buildable"));
  mxSetCell(mxcell3p, 6, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  mxSetCell(mxcell3p, 7, mxCreateString(
             "images.internal.coder.buildable.ImregionalmaxBuildable"));
  return(mxcell3p);
}

mxArray *sf_c6_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real32");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c6_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c6_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAuYGdgYAPSHEDMxAABrFA+IxBzQmmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+vUc0PWzYNHPhqRfAMpPLEpNjM+BhA8snAbOHw"
    "aU+aNosPjDjGx/JOVkF+VnDhZ/aJDtj+TUvJLUQRMfhkT5gwPNHxxQfwAjJGVw+MMU7A8HAv7gQ"
    "fMHD5I/4oEJDOaPgfePFtg/BgT8w4LiHxaGnMS8QRIfRkS5nxnF/cwMoAxOHfcrOFCmH2J/AAH3"
    "K6ClJxA/szg+Mbkksyw1PtksPi0nMz2jxDkflMRygiuLS1JzYf4DAFChRv0="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sFN2vSE095zpFHLAFlNvlPC";
}

static void sf_opaque_initialize_c6_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c6_flightControlSystem
    ((SFc6_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_flightControlSystem(void *chartInstanceVar)
{
  enable_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c6_flightControlSystem(void *chartInstanceVar)
{
  disable_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c6_flightControlSystem
    ((SFc6_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c6_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c6_flightControlSystem
      ((SFc6_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c6_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c6_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_flightControlSystem
      ((SFc6_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc6_flightControlSystem((SFc6_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c6_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [23] = {
    "eNrtWU9vIzUUd7ttaUVZ9cYFQY8rJFC3qCuQEKTNHzZS2kZMWhCXyp15yVjx2LO2J2n2gOAbcOB",
    "r8D0QB86c+AwcV5x4nkyy6TS04wlss4iRkpEn/vm93/P75wlZaR4TvB7i57t3CdnA+yZ+Vsn4Ws",
    "/GKzOf8fM18mk2rrxJiEiiNlU00sT9EjSCL0FLnhgmRVN0ZXEsE11QIHxcIJbKOMnVLEo4E/1GI",
    "nwrWX8VMj/0Qpnw4AgXpMGp4KO/kxsnpo0Sa0yBbxoAgQmVTHphg9Pe7VZQZlgNwe/rJHK2lQbj",
    "JbGlqo8TbljMoX4FflNoQ9EK+g6+nqEGqubKzciWr/YmaBnFnFFR3NYh1R7E6B0GzuIAv08Tg9Y",
    "rhPVDqswRhHQAusX6qXQpoJB0pnH2JRPUSMUor0e8alcryLfNkeOxDIC77hHyPVJA+7FkwjgGhN",
    "dAO9cFveRQg8uk5yjXg2eJjYZzBkNQbvvbrcoBKNqDU+Gmc7pH9avUKaexVBBrWATnVB366LsaA",
    "re8gUGnPYruCB1cxgkLqYmbuqPYAH3DTW4SNW34l8p1STT2fl0Km8qtD8DZr6ZyG76oUs61G7Yj",
    "4xYMgKfya9TQEtixfAew1izoSPQOm20cM1YiGEZChq1KEbDiXjnIodLCdoJFqgCcRTYMIEAzT1W",
    "fLnRXHCXayKiKKafWahWUdxPbFAZUl/pQuMYoyjSgwqlfOcoNmLaBhGi0kklZFl5hHIOloER3E1",
    "EbStVHG7sWs5e2spHghoagh4nZQJrk6ujd55QnBXWOdA/jB93jTGOWdZOLWBs/pcA+9UMIbOVkH",
    "I4xz+ICRbdY25J/iGwHzIxqoH3F4qKRlGBCx6JrrdQZxXAm+kIORUPJyMs6r1v8CgCzBlWCid4R",
    "lnA1aqDyxbRW8KyTZnfXJsfamRpOL61vfAECq6HlarsG6mNU1YUvA1RoEazHnmMTIzTTBgv1aFz",
    "qg7T/3iMv++/tAv33pG+/DUdu4MgUN7k/msGvzJFLZu52/scz87dWr89fz8lbnTyzV4avzODfys",
    "lby+HtvB3rD79//fOLH74//wl++fPHX0+/zfPO67FyQ48VMpG/u+l2znmYjd+Z9DrTzDq4kXzs3",
    "Kczeq3NWf/tmfV3srFunOwPvPreJwfP48bT1mGDnwx4u5quF79xu75bOX0nz3dtf4WBl8ax8ptB",
    "dtayY5qMzwD5/dy4wx5bM35FyB+fL4b/sJLHz7PXRs5edkyxwb7g1/34/njsLcZDLQuPJ6V5XPK",
    "+kmxZeDwqzcMH2z4tC4/HhXhs5nhsZjxwQ4Ll4HFQyef9eTy2czy2Z3hcoIPl69b98Xm/kq8/8/",
    "isXeOzRjgVS7If+4X0f3BN/wfEBvg/o/9uZTH8WH77Dv13c/60m77nuKC2m4UL/8lFl7NeaI9n6",
    "GLcG2FHFs3yK9tfuOLIK8a9Lnr+b5d/n1+Rc8Z6SdxmSRx5xbhF+bmen173+bfVDZKbv7PEPPL3",
    "sufoZeP1G3E7376XjT+bvnOthowHc976ZD+3gHbn/fof8e8XjvabnOfr1n7Zn3PffHQoKB9pNn5",
    "lNXncVvY/lulPePjT89+l3Uc9IXPezxTt04dMBHKoP3i8f7C/SH36C5GIOxw=",
    ""
  };

  static char newstr [1637] = "";
  newstr[0] = '\0';
  for (i = 0; i < 23; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c6_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c6_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3361267300U));
  ssSetChecksum1(S,(1451331832U));
  ssSetChecksum2(S,(4207568301U));
  ssSetChecksum3(S,(2119159444U));
}

static void mdlRTW_c6_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c6_flightControlSystem(SimStruct *S)
{
  SFc6_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc6_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc6_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c6_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c6_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c6_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c6_JITStateAnimation,
    chartInstance->c6_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c6_flightControlSystem(chartInstance);
}

void c6_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c6_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
