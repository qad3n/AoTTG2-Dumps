// Type: Controllers.BaseAIController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/BaseAIController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/BaseAIController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.BaseAIController$$Awake
// il2cpp: void Controllers_BaseAIController__Awake (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x3f7e180

void Controllers_BaseAIController__Awake(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (DAT_05703f54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    DAT_05703f54 = '\x01';
  }
  pCVar1 = (Characters_BaseCharacter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar1;
  il2cpp_runtime_glue(&(__this->fields)._character,pCVar1);
  return;
}


// Controllers.BaseAIController$$Start
// il2cpp: void Controllers_BaseAIController__Start (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x3f7e1d0

void Controllers_BaseAIController__Start(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseAIController$$FixedUpdate
// il2cpp: void Controllers_BaseAIController__FixedUpdate (Controllers_BaseAIController_o* __this, const MethodInfo* method);
// 0x3f7e1e0

void Controllers_BaseAIController__FixedUpdate
               (Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BaseAIController$$GetTargetAngle
// il2cpp: float Controllers_BaseAIController__GetTargetAngle (Controllers_BaseAIController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x3f7e1f0

float Controllers_BaseAIController__GetTargetAngle
                (Controllers_BaseAIController_o *__this,UnityEngine_Vector3_o direction,
                MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  undefined8 *puVar2;
  float fVar3;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar4;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float local_28;
  undefined8 uVar6;
  
  fVar4 = direction.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  local_28 = direction.fields.x;
  fVar3 = fVar4 * fVar4 + local_28 * local_28 + 0.0;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
    in_XMM1_Dc = extraout_XMM0_Dc;
    in_XMM1_Dd = extraout_XMM0_Dd;
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 <= 1e-05) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uVar6 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar7._0_8_ = direction.fields._0_8_ & 0xffffffff;
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._12_4_ = in_XMM0_Dd;
    fVar4 = fVar4 / fVar3;
    auVar8._4_4_ = fVar3;
    auVar8._0_4_ = fVar3;
    auVar8._8_4_ = in_XMM1_Dc;
    auVar8._12_4_ = in_XMM1_Dd;
    auVar8 = divps(auVar7,auVar8);
    uVar6 = auVar8._0_8_;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
  }
  puVar2 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar5 = (float)uVar6 - (float)*puVar2;
  fVar3 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)*puVar2 >> 0x20);
  if ((fVar4 - *(float *)(puVar2 + 1)) * (fVar4 - *(float *)(puVar2 + 1)) +
      fVar3 * fVar3 + fVar5 * fVar5 < 9.9999994e-11) {
    __this_00 = (__this->fields)._character;
    if ((__this_00 == (Characters_BaseCharacter_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar9 = UnityEngine_Transform__get_eulerAngles(__this_01,(MethodInfo *)0x0);
    fVar4 = UVar9.fields.y;
  }
  else {
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fde1f = '\x01';
      puVar2 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    }
    UVar9.fields.z = fVar4;
    UVar9.fields.x = (float)(int)uVar6;
    UVar9.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    rotation = UnityEngine_Quaternion__LookRotation
                         (UVar9,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(puVar2 + 3),
                          (MethodInfo *)0x0);
    UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar9.fields.x * 57.29578;
    euler.fields.y = UVar9.fields.y * 57.29578;
    euler.fields.z = UVar9.fields.z * 57.29578;
    UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    fVar4 = UVar9.fields.y;
  }
  return fVar4;
}


// Controllers.BaseAIController$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_BaseAIController__GetTargetRotation (Controllers_BaseAIController_o* __this, float angle, const MethodInfo* method);
// 0x3f7e430

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
// 0x3f7e450

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
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar6 = 0;
    uVar7 = 0;
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    uVar6 = extraout_XMM0_Dc;
    uVar7 = extraout_XMM0_Dd;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
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
// 0x3f7e5a0

void Controllers_BaseAIController___ctor(Controllers_BaseAIController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


