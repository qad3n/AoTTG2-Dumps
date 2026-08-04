// Type: Controllers.BaseAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/BaseAIController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// --------------------------------

// Controllers.BaseAIController$$Awake
// il2cpp: void Controllers_BaseAIController__Awake (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x428a680

void Controllers_BaseAIController__Awake(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (g_data_057adcc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    g_data_057adcc2 = '\x01';
  }
  pCVar1 = (Characters_BaseCharacter_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._character,pCVar1);
  return;
}


// Controllers.BaseAIController$$Start
// il2cpp: void Controllers_BaseAIController__Start (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x428a6d0

void Controllers_BaseAIController__Start(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseAIController$$FixedUpdate
// il2cpp: void Controllers_BaseAIController__FixedUpdate (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x428a6e0

void Controllers_BaseAIController__FixedUpdate(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseAIController$$GetTargetAngle
// il2cpp: float Controllers_BaseAIController__GetTargetAngle (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x428a6f0

float Controllers_BaseAIController__GetTargetAngle
                (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *__this_00;
  undefined1 auVar2 [12];
  UnityEngine_Transform_o *__this_01;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o euler;
  float local_28;
  undefined8 uVar7;
  
  fVar5 = direction.fields.z;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  local_28 = direction.fields.x;
  fVar4 = fVar5 * fVar5 + local_28 * local_28 + 0.0;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    in_XMM1_Dc = extraout_XMM0_Dc;
    in_XMM1_Dd = extraout_XMM0_Dd;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar5 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar8._0_8_ = direction.fields._0_8_ & 0xffffffff;
    auVar8._8_4_ = in_XMM0_Dc;
    auVar8._12_4_ = in_XMM0_Dd;
    fVar5 = fVar5 / fVar4;
    auVar9._4_4_ = fVar4;
    auVar9._0_4_ = fVar4;
    auVar9._8_4_ = in_XMM1_Dc;
    auVar9._12_4_ = in_XMM1_Dd;
    auVar9 = divps(auVar8,auVar9);
    uVar7 = auVar9._0_8_;
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
  }
  puVar3 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar6 = (float)uVar7 - (float)*puVar3;
  fVar4 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)*puVar3 >> 0x20);
  if ((fVar5 - *(float *)(puVar3 + 1)) * (fVar5 - *(float *)(puVar3 + 1)) + fVar4 * fVar4 + fVar6 * fVar6 <
      9.9999994e-11) {
    __this_00 = (__this->fields)._character;
    if ((__this_00 == (Characters_BaseCharacter_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
      fVar5 = (float)il2cpp_runtime_helper_022b2c90();
      auVar2._4_8_ = 0;
      auVar2._0_4_ = fVar5 * 0.017453292;
      UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)(auVar2 << 0x20),(MethodInfo *)0x0);
      return UVar10.fields.x;
    }
    UVar11 = UnityEngine_Transform__get_eulerAngles(__this_01,(MethodInfo *)0x0);
    fVar5 = UVar11.fields.y;
  }
  else {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6844 = '\x01';
      puVar3 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    }
    UVar11.fields.z = fVar5;
    UVar11.fields.x = (float)(int)uVar7;
    UVar11.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
    UVar10 = UnityEngine_Quaternion__LookRotation
                       (UVar11,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(puVar3 + 3),
                        (MethodInfo *)0x0);
    UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
    euler.fields.x = UVar11.fields.x * 57.29578;
    euler.fields.y = UVar11.fields.y * 57.29578;
    euler.fields.z = UVar11.fields.z * 57.29578;
    UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    fVar5 = UVar11.fields.y;
  }
  return fVar5;
}


// Controllers.BaseAIController$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_BaseAIController__GetTargetRotation (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x428a930

UnityEngine_Quaternion_o
Controllers_BaseAIController__GetTargetRotation
          (Controllers_BaseAIController_o *__this,float angle,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_Quaternion_Fields UVar2;
  
  auVar1._4_8_ = 0;
  auVar1._0_4_ = angle * 0.017453292;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Controllers.BaseAIController$$GetTargetDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseAIController__GetTargetDirection (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x428a950

UnityEngine_Vector3_o
Controllers_BaseAIController__GetTargetDirection
          (Controllers_BaseAIController_o *__this,float angle,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector3_o UVar8;
  
  fVar4 = (90.0 - angle) * 0.017453292;
  fVar2 = cosf(fVar4);
  fVar4 = sinf(fVar4);
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    uVar6 = 0;
    uVar7 = 0;
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    uVar6 = extraout_XMM0_Dc;
    uVar7 = extraout_XMM0_Dd;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar6 = 0;
    uVar7 = 0;
  }
  fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + 0.0;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
    uVar6 = extraout_XMM0_Dc_00;
    uVar7 = extraout_XMM0_Dd_00;
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
  }
  auVar5._4_4_ = fVar3;
  auVar5._0_4_ = fVar3;
  auVar5._8_4_ = uVar6;
  auVar5._12_4_ = uVar7;
  auVar5 = divps(ZEXT416((uint)fVar2),auVar5);
  UVar8.fields.z = fVar4 / fVar3;
  UVar8.fields.x = (float)(int)auVar5._0_8_;
  UVar8.fields.y = (float)(int)((ulong)auVar5._0_8_ >> 0x20);
  return (UnityEngine_Vector3_o)UVar8.fields;
}


// Controllers.BaseAIController$$.ctor
// il2cpp: void Controllers_BaseAIController___ctor (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x428aaa0

void Controllers_BaseAIController___ctor(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


