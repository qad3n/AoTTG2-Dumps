// Type: Characters.CombatDashSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/CombatDashSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs
// --------------------------------

// Characters.CombatDashSpecial$$get_ActiveTime
// il2cpp: float Characters_CombatDashSpecial__get_ActiveTime (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x5c0a6b0

float Characters_CombatDashSpecial__get_ActiveTime(Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Characters.CombatDashSpecial$$get_GroundedOnly
// il2cpp: bool Characters_CombatDashSpecial__get_GroundedOnly (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x5c0a6c0

bool Characters_CombatDashSpecial__get_GroundedOnly(Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.CombatDashSpecial$$.ctor
// il2cpp: void Characters_CombatDashSpecial___ctor (Characters_CombatDashSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0a6d0

void Characters_CombatDashSpecial___ctor
               (Characters_CombatDashSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 200.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.CombatDashSpecial$$Activate
// il2cpp: void Characters_CombatDashSpecial__Activate (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x5c0a6f0

void Characters_CombatDashSpecial__Activate(Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_Human_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  undefined1 auVar5 [16];
  UnityEngine_Vector3_StaticFields *pUVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar9;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  float local_48;
  float fStack_44;
  undefined1 local_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_075476b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476b5 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_05c0a952;
  Characters_Human__EmoteAnimation
            (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->Dash,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._human;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_05c0a952;
  UVar13 = (*(pCVar3->klass->vtable)._76_GetAimPoint.methodPtr)
                     (pCVar3,(pCVar3->klass->vtable)._76_GetAimPoint.method);
  pCVar3 = (__this->fields)._human;
  if (((pCVar3 == (Characters_Human_o *)0x0) ||
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar4->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_05c0a952;
  UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  fVar11 = UVar14.fields.x;
  fVar7 = UVar14.fields.y;
  if (g_data_0753e72d == '\0') {
    fStack_20 = extraout_XMM0_Dc_00;
    unique0x100000d7 = UVar14.fields._0_8_;
    fStack_1c = extraout_XMM0_Dd_00;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    fVar11 = (float)local_30._8_4_;
    fVar7 = fStack_24;
    fVar9 = fStack_20;
    fVar10 = fStack_1c;
  }
  else {
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    fVar9 = extraout_XMM0_Dc_00;
    fVar10 = extraout_XMM0_Dd_00;
  }
  local_30._0_4_ = 0.0;
  local_30._4_4_ = 0.0;
  if (g_data_0753e729 == '\0') {
    local_30._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    fStack_24 = fVar7;
    local_30._8_4_ = fVar11;
    fStack_20 = fVar9;
    fStack_1c = fVar10;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
    fVar11 = (float)local_30._8_4_;
    fVar7 = fStack_24;
    fVar9 = fStack_20;
    fVar10 = fStack_1c;
  }
  local_48 = UVar13.fields.x;
  fStack_44 = UVar13.fields.y;
  auVar12._0_4_ = local_48 - fVar11;
  auVar12._4_4_ = fStack_44 - fVar7;
  auVar12._8_4_ = extraout_XMM0_Dc - fVar9;
  auVar12._12_4_ = extraout_XMM0_Dd - fVar10;
  fVar11 = UVar13.fields.z - UVar14.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar8 = 0;
  fVar7 = fVar11 * fVar11 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    uVar8 = extraout_XMM0_Db;
    if (fVar7 <= 1e-05) goto label_05c0a848;
label_05c0a884:
    fVar11 = fVar11 / fVar7;
    auVar5._4_4_ = fVar7;
    auVar5._0_4_ = fVar7;
    auVar5._8_4_ = uVar8;
    auVar5._12_4_ = uVar8;
    auVar12 = divps(auVar12,auVar5);
    local_30._0_4_ = auVar12._0_4_;
    local_30._4_4_ = auVar12._4_4_;
    pUVar6 = (UnityEngine_Vector3_StaticFields *)local_30;
  }
  else {
    fVar7 = SQRT(fVar7);
    if (1e-05 < fVar7) goto label_05c0a884;
label_05c0a848:
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar6->zeroVector).fields.z;
  }
  pCVar3 = (__this->fields)._human;
  if (((pCVar3 != (Characters_Human_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_01 = (pUVar4->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = (pUVar6->zeroVector).fields.x;
    uVar2 = (pUVar6->zeroVector).fields.y;
    UVar13.fields.z = fVar11 * 100.0;
    UVar13.fields.x = (float)uVar1 * 100.0;
    UVar13.fields.y = (float)uVar2 * 100.0;
    UnityEngine_Rigidbody__set_linearVelocity(__this_01,UVar13,(MethodInfo *)0x0);
    return;
  }
label_05c0a952:
  ThrowNullReferenceException();
}


// Characters.CombatDashSpecial$$Deactivate
// il2cpp: void Characters_CombatDashSpecial__Deactivate (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x5c0a960

void Characters_CombatDashSpecial__Deactivate(Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  return;
}


