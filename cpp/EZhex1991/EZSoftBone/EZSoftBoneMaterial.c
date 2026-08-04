// Type: EZhex1991.EZSoftBone.EZSoftBoneMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneMaterial.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneMaterial.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_damping
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_damping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x2498400

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_damping
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Damping;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_damping
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_damping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x2498410

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_damping
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Damping = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_dampingCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_dampingCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x2498430

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_dampingCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_DampingCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x2498440

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Stiffness;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_stiffness
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_stiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x2498450

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_stiffness
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Stiffness = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_stiffnessCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffnessCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x2498470

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_stiffnessCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_StiffnessCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistance
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x2498480

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Resistance;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_resistance
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_resistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x2498490

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_resistance
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Resistance = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_resistanceCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistanceCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x24984b0

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistanceCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_ResistanceCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slackness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x24984c0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slackness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_Slackness;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$set_slackness
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_slackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float value, const MethodInfo* method);
// 0x24984d0

void EZhex1991_EZSoftBone_EZSoftBoneMaterial__set_slackness
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (value <= 1.0) {
    fVar1 = value;
  }
  (__this->fields).m_Slackness = (float)(-(uint)(0.0 <= value) & (uint)fVar1);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_slacknessCurve
// il2cpp: UnityEngine_AnimationCurve_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slacknessCurve (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x24984f0

UnityEngine_AnimationCurve_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_slacknessCurve
          (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  return (__this->fields).m_SlacknessCurve;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$get_defaultMaterial
// il2cpp: EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial (const MethodInfo* method);
// 0x2492440

EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *
EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_defaultMaterial(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_c *pUVar2;
  EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *pEVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (g_data_057a692e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBoneMaterial_CreateInstance_EZSoftBoneMaterial);
    il2cpp_runtime_helper_023445d0(&"SBMat_Default");
    g_data_057a692e = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = (UnityEngine_Object_c *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = (UnityEngine_Object_c *)UnityEngine_ScriptableObject__CreateInstance_object_(MethodInfo_EZSoftBoneMaterial_CreateInstance_EZSoftBoneMaterial);
    **(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8) = pUVar2;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_EZSoftBoneMaterial + 0xb8));
  }
  pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8);
  if (pUVar4 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(pUVar4,"SBMat_Default",(MethodInfo *)0x0);
    return (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)**(undefined8 **)(TypeInfo_EZSoftBoneMaterial + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4[2].klass = pUVar2;
  pEVar3 = (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)il2cpp_runtime_helper_022b4080(pUVar4 + 2);
  return pEVar3;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetDamping
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetDamping (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x24965d0

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetDamping
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_AnimationCurve_o *__this_00;
  UnityEngine_AnimationCurve_c *__this_01;
  Il2CppClass *__this_02;
  Il2CppClass *__this_03;
  float fVar3;
  float fVar4;
  float extraout_XMM0_Da;
  
  __this_00 = (__this->fields).m_DampingCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar4 = (__this->fields).m_Damping;
    fVar3 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar3 * fVar4;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00[2].klass;
  if (__this_01 != (UnityEngine_AnimationCurve_c *)0x0) {
    fVar3 = *(float *)&__this_00[1].fields.m_Ptr;
    fVar4 = UnityEngine_AnimationCurve__Evaluate
                      ((UnityEngine_AnimationCurve_o *)__this_01,fVar4,(MethodInfo *)0x0);
    return fVar4 * fVar3;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  __this_02 = (__this_01->_1).element_class;
  if (__this_02 != (Il2CppClass *)0x0) {
    fVar3 = (float)(__this_01->_1).this_arg.bits;
    fVar4 = UnityEngine_AnimationCurve__Evaluate
                      ((UnityEngine_AnimationCurve_o *)__this_02,fVar4,(MethodInfo *)0x0);
    return fVar4 * fVar3;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  __this_03 = (__this_02->_1).declaringType;
  if (__this_03 != (Il2CppClass *)0x0) {
    fVar3 = *(float *)&(__this_02->_1).castClass;
    fVar4 = UnityEngine_AnimationCurve__Evaluate
                      ((UnityEngine_AnimationCurve_o *)__this_03,fVar4,(MethodInfo *)0x0);
    return fVar4 * fVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6925 = '\x01';
  }
  x = (__this_03->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = extraout_XMM0_Da;
  if ((char)bVar1 != '\0') {
    pIVar2 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_Collider_GetComponent_Collider);
    (__this_03->_1).byval_arg.data = pIVar2;
    fVar4 = (float)il2cpp_runtime_helper_022b4080(&(__this_03->_1).byval_arg,pIVar2);
  }
  return fVar4;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetStiffness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetStiffness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x2496600

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetStiffness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_AnimationCurve_o *pUVar3;
  UnityEngine_AnimationCurve_o *__this_00;
  float fVar4;
  float fVar5;
  float extraout_XMM0_Da;
  
  pUVar3 = (__this->fields).m_StiffnessCurve;
  if (pUVar3 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar5 = (__this->fields).m_Stiffness;
    fVar4 = UnityEngine_AnimationCurve__Evaluate(pUVar3,t,(MethodInfo *)0x0);
    return fVar4 * fVar5;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_AnimationCurve_o *)pUVar3[2].fields.m_Ptr;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar4 = *(float *)&pUVar3[2].monitor;
    fVar5 = UnityEngine_AnimationCurve__Evaluate(__this_00,fVar5,(MethodInfo *)0x0);
    return fVar5 * fVar4;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = __this_00[3].monitor;
  if (pUVar3 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar4 = *(float *)&__this_00[3].klass;
    fVar5 = UnityEngine_AnimationCurve__Evaluate(pUVar3,fVar5,(MethodInfo *)0x0);
    return fVar5 * fVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6925 = '\x01';
  }
  x = pUVar3[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar5 = extraout_XMM0_Da;
  if ((char)bVar1 != '\0') {
    pIVar2 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_Collider_GetComponent_Collider);
    pUVar3[1].monitor = pIVar2;
    fVar5 = (float)il2cpp_runtime_helper_022b4080(&pUVar3[1].monitor,pIVar2);
  }
  return fVar5;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetResistance
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetResistance (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x2496630

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetResistance
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_AnimationCurve_o *__this_00;
  UnityEngine_AnimationCurve_o *__this_01;
  float fVar3;
  float fVar4;
  float extraout_XMM0_Da;
  
  __this_00 = (__this->fields).m_ResistanceCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar4 = (__this->fields).m_Resistance;
    fVar3 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar3 * fVar4;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00[3].monitor;
  if (__this_01 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar3 = *(float *)&__this_00[3].klass;
    fVar4 = UnityEngine_AnimationCurve__Evaluate(__this_01,fVar4,(MethodInfo *)0x0);
    return fVar4 * fVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6925 = '\x01';
  }
  x = __this_01[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = extraout_XMM0_Da;
  if ((char)bVar1 != '\0') {
    pIVar2 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Collider_GetComponent_Collider);
    __this_01[1].monitor = pIVar2;
    fVar4 = (float)il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,pIVar2);
  }
  return fVar4;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$GetSlackness
// il2cpp: float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetSlackness (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, float t, const MethodInfo* method);
// 0x2496660

float EZhex1991_EZSoftBone_EZSoftBoneMaterial__GetSlackness
                (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,float t,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_AnimationCurve_o *__this_00;
  float fVar3;
  float extraout_XMM0_Da;
  float fVar4;
  
  __this_00 = (__this->fields).m_SlacknessCurve;
  if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
    fVar4 = (__this->fields).m_Slackness;
    fVar3 = UnityEngine_AnimationCurve__Evaluate(__this_00,t,(MethodInfo *)0x0);
    return fVar3 * fVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6925 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6925 = '\x01';
  }
  x = __this_00[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = extraout_XMM0_Da;
  if ((char)bVar1 != '\0') {
    pIVar2 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_Collider_GetComponent_Collider);
    __this_00[1].monitor = pIVar2;
    fVar4 = (float)il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pIVar2);
  }
  return fVar4;
}


// EZhex1991.EZSoftBone.EZSoftBoneMaterial$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneMaterial___ctor (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o* __this, const MethodInfo* method);
// 0x2498500

void EZhex1991_EZSoftBone_EZSoftBoneMaterial___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  
  (__this->fields).m_Damping = 0.2;
  pUVar1 = UnityEngine_AnimationCurve__EaseInOut(0.0,0.5,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_DampingCurve = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_DampingCurve,pUVar1);
  (__this->fields).m_Stiffness = 0.1;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,1.0,(MethodInfo *)0x0);
  (__this->fields).m_StiffnessCurve = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_StiffnessCurve,pUVar1);
  (__this->fields).m_Resistance = 0.9;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  (__this->fields).m_ResistanceCurve = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_ResistanceCurve,pUVar1);
  (__this->fields).m_Slackness = 0.1;
  pUVar1 = UnityEngine_AnimationCurve__Linear(0.0,1.0,1.0,0.8,(MethodInfo *)0x0);
  (__this->fields).m_SlacknessCurve = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_SlacknessCurve);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


