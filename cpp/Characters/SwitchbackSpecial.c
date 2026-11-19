// Type: Characters.SwitchbackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SwitchbackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SwitchbackSpecial.cs
// --------------------------------

// Characters.SwitchbackSpecial$$get_ActiveTime
// il2cpp: float Characters_SwitchbackSpecial__get_ActiveTime (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x5c0fa50

float Characters_SwitchbackSpecial__get_ActiveTime(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  return 0.3;
}


// Characters.SwitchbackSpecial$$.ctor
// il2cpp: void Characters_SwitchbackSpecial___ctor (Characters_SwitchbackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0fa60

void Characters_SwitchbackSpecial___ctor
               (Characters_SwitchbackSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.SwitchbackSpecial$$RegisterCollision
// il2cpp: bool Characters_SwitchbackSpecial__RegisterCollision (Characters_SwitchbackSpecial_o* __this, Characters_Human_o* human, UnityEngine_Collision_o* collision, float speed, const MethodInfo* method);
// 0x5c0fa80

bool Characters_SwitchbackSpecial__RegisterCollision
               (Characters_SwitchbackSpecial_o *__this,Characters_Human_o *human,
               UnityEngine_Collision_o *collision,float speed,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint32_t uVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_ContactPoint_array *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar9;
  undefined4 in_XMM1_Db;
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o UVar11;
  undefined1 local_50 [12];
  float fStack_44;
  float local_38;
  
  local_38 = speed;
  if (Il2CppMethodInitialized_075476d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075476d1 = '\x01';
  }
  bVar3 = (__this->fields).IsActive;
  if (bVar3 == false) {
    return false;
  }
  if (((human == (Characters_Human_o *)0x0) ||
      (pUVar5 = (human->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
     (collision == (UnityEngine_Collision_o *)0x0)) goto label_05c0fcd3;
  __this_00 = (pUVar5->fields).Rigidbody;
  pUVar6 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_ContactPoint_array *)0x0) goto label_05c0fcd3;
  if ((int)pUVar6->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  UVar11 = UnityEngine_ContactPoint__get_normal(pUVar6->m_Items,(MethodInfo *)0x0);
  fVar9 = UVar11.fields.z;
  unique0x100000a9 = extraout_XMM0_Dc;
  unique0x100000a1 = UVar11.fields._0_8_;
  unique0x100000ad = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
    if (g_data_0753e729 == '\0') goto label_05c0fc93;
label_05c0fb43:
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
    if (g_data_0753e729 != '\0') goto label_05c0fb43;
label_05c0fc93:
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    g_data_0753e729 = '\x01';
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar8 = fVar9 * fVar9 + fStack_44 * fStack_44 + (float)local_50._8_4_ * (float)local_50._8_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    in_XMM1_Db = extraout_XMM0_Db;
    if (1e-05 < fVar8) goto label_05c0fbb9;
label_05c0fb8d:
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar9 = (pUVar7->zeroVector).fields.z;
  }
  else {
    fVar8 = SQRT(fVar8);
    if (fVar8 <= 1e-05) goto label_05c0fb8d;
label_05c0fbb9:
    fVar9 = fVar9 / fVar8;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8;
    auVar10._8_4_ = in_XMM1_Db;
    auVar10._12_4_ = in_XMM1_Db;
    auVar10 = divps(stack0xffffffffffffffb8,auVar10);
    local_50._0_4_ = auVar10._0_4_;
    local_50._4_4_ = auVar10._4_4_;
    pUVar7 = (UnityEngine_Vector3_StaticFields *)local_50;
  }
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    fVar8 = local_38;
    if (local_38 <= 20.0) {
      fVar8 = 20.0;
    }
    uVar1 = (pUVar7->zeroVector).fields.x;
    uVar2 = (pUVar7->zeroVector).fields.y;
    UVar11.fields.z = fVar9 * fVar8;
    UVar11.fields.x = fVar8 * (float)uVar1;
    UVar11.fields.y = fVar8 * (float)uVar2;
    UnityEngine_Rigidbody__set_linearVelocity(__this_00,UVar11,(MethodInfo *)0x0);
    (__this->fields)._activeTimeLeft = 0.0;
    (__this->fields).IsActive = false;
    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)human,TypeInfo_Characters_HumanSounds->static_fields->Switchback,
               (MethodInfo *)0x0);
    (*(__this->klass->vtable)._10_Deactivate.methodPtr)(__this,(__this->klass->vtable)._10_Deactivate.method);
    return bVar3;
  }
label_05c0fcd3:
  ThrowNullReferenceException();
}


// Characters.SwitchbackSpecial$$SetInput
// il2cpp: void Characters_SwitchbackSpecial__SetInput (Characters_SwitchbackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x5c0fce0

void Characters_SwitchbackSpecial__SetInput
               (Characters_SwitchbackSpecial_o *__this,bool key,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075476d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476d2 = '\x01';
  }
  if (key) {
    bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if ((bVar2) && ((__this->fields).IsActive == false)) {
      __this_00 = (Characters_Human_o *)(__this->fields)._owner;
      if (__this_00 == (Characters_Human_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      if ((__this_00->fields).MountState != 0) {
        Characters_Human__Unmount(__this_00,false,(MethodInfo *)0x0);
      }
      (__this->fields).IsActive = true;
      fVar3 = (*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                        (__this,(__this->klass->vtable)._15_GetActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar3;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
      return;
    }
  }
  return;
}


// Characters.SwitchbackSpecial$$Activate
// il2cpp: void Characters_SwitchbackSpecial__Activate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x5c0fdd0

void Characters_SwitchbackSpecial__Activate(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_075476d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476d3 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  *(undefined4 *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x218)) + 4) = 0x3f000000;
  Characters_BaseUseable__Activate((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.SwitchbackSpecial$$Deactivate
// il2cpp: void Characters_SwitchbackSpecial__Deactivate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x5c0fe50

void Characters_SwitchbackSpecial__Deactivate(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476d4 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Characters_Human__DodgeWall(__this_00,(MethodInfo *)0x0);
  return;
}


