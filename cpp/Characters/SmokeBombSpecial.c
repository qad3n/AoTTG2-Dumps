// Type: Characters.SmokeBombSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SmokeBombSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmokeBombSpecial.cs
// --------------------------------

// Characters.SmokeBombSpecial$$.ctor
// il2cpp: void Characters_SmokeBombSpecial___ctor (Characters_SmokeBombSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0e0a0

void Characters_SmokeBombSpecial___ctor
               (Characters_SmokeBombSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  
  (__this->fields).Speed = 150.0;
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar4->downVector).fields.x;
  uVar3 = (pUVar4->downVector).fields.y;
  fVar1 = (pUVar4->downVector).fields.z;
  (__this->fields).Gravity.fields.x = (float)uVar2 * 15.0;
  (__this->fields).Gravity.fields.y = (float)uVar3 * 15.0;
  (__this->fields).Gravity.fields.z = fVar1 * 15.0;
  Characters_SimpleUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 15.0;
  return;
}


// Characters.SmokeBombSpecial$$Activate
// il2cpp: void Characters_SmokeBombSpecial__Activate (Characters_SmokeBombSpecial_o* __this, const MethodInfo* method);
// 0x5c0e120
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0e3a6: jmp 0x5c0e515

void Characters_SmokeBombSpecial__Activate(Characters_SmokeBombSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int32_t charViewId;
  Characters_BaseCharacter_o *__this_00;
  Characters_BaseCharacter_c *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_BaseCharacter_o *pCVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  UnityEngine_Quaternion_StaticFields *pUVar9;
  undefined1 auVar10 [16];
  UnityEngine_Vector3_StaticFields *pUVar11;
  System_Object_array *settings;
  System_String_o *name;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar15;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  undefined8 uStack_88;
  undefined1 auStack_70 [12];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_075476c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075476c5 = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_05c0e515;
  pCVar4 = __this_00->klass;
  bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar4->_2).typeHierarchyDepth < bVar3) ||
     ((pCVar4->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  UVar19 = (*(pCVar4->vtable)._76_GetAimPoint.methodPtr)(__this_00,(pCVar4->vtable)._76_GetAimPoint.method);
  pUVar5 = (__this_00->fields).Cache;
  if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05c0e515;
  UVar20 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  pUVar5 = (__this_00->fields).Cache;
  if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) goto label_05c0e515;
  fStack_60 = (float)extraout_XMM0_Dc_00;
  unique0x100000e3 = UVar20.fields._0_8_;
  fStack_5c = (float)extraout_XMM0_Dd_00;
  pUVar6 = (pUVar5->fields).Transform;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05c0e515;
  UVar21 = UnityEngine_Transform__get_up(pUVar6,(MethodInfo *)0x0);
  fVar17 = UVar21.fields.z + UVar21.fields.z;
  fVar12 = UVar21.fields.x + UVar21.fields.x;
  fVar13 = UVar21.fields.y + UVar21.fields.y;
  fVar15 = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
  fVar16 = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
  if (g_data_0753e72d == '\0') {
    fStack_48 = fVar17;
    auStack_58._4_4_ = fVar13;
    auStack_58._0_4_ = fVar12;
    fStack_4c = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
    auStack_58._8_4_ = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    fVar12 = (float)auStack_58._0_4_;
    fVar13 = (float)auStack_58._4_4_;
    fVar15 = (float)auStack_58._8_4_;
    fVar16 = fStack_4c;
    fVar17 = fStack_48;
  }
  auStack_70._8_4_ = (float)auStack_70._8_4_ + fVar12;
  fStack_64 = fStack_64 + fVar13;
  fStack_60 = fStack_60 + fVar15;
  fStack_5c = fStack_5c + fVar16;
  fVar17 = UVar20.fields.z + fVar17;
  auStack_70._0_4_ = 0.0;
  auStack_70._4_4_ = 0.0;
  fVar12 = (float)auStack_70._8_4_;
  fVar13 = fStack_64;
  fVar15 = fStack_60;
  fVar16 = fStack_5c;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar12 = (float)auStack_70._8_4_;
    fVar13 = fStack_64;
    fVar15 = fStack_60;
    fVar16 = fStack_5c;
  }
  uStack_88._0_4_ = UVar19.fields.x;
  uStack_88._4_4_ = UVar19.fields.y;
  auVar18._0_4_ = (float)uStack_88 - fVar12;
  auVar18._4_4_ = uStack_88._4_4_ - fVar13;
  auVar18._8_4_ = extraout_XMM0_Dc - fVar15;
  auVar18._12_4_ = extraout_XMM0_Dd - fVar16;
  fVar12 = UVar19.fields.z - fVar17;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar14 = 0;
  fVar13 = fVar12 * fVar12 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
    uVar14 = extraout_XMM0_Db;
    if (1e-05 < fVar13) goto label_05c0e359;
label_05c0e31d:
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar12 = (pUVar11->zeroVector).fields.z;
  }
  else {
    fVar13 = SQRT(fVar13);
    if (fVar13 <= 1e-05) goto label_05c0e31d;
label_05c0e359:
    fVar12 = fVar12 / fVar13;
    auVar10._4_4_ = fVar13;
    auVar10._0_4_ = fVar13;
    auVar10._8_4_ = uVar14;
    auVar10._12_4_ = uVar14;
    auVar18 = divps(auVar18,auVar10);
    auStack_70._0_4_ = auVar18._0_4_;
    auStack_70._4_4_ = auVar18._4_4_;
    pUVar11 = (UnityEngine_Vector3_StaticFields *)auStack_70;
  }
  uVar1 = (pUVar11->zeroVector).fields.x;
  uVar2 = (pUVar11->zeroVector).fields.y;
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
    if (g_data_0753e72b == '\0') goto label_05c0e3d3;
label_05c0e39d:
    pCVar7 = (__this->fields)._owner;
  }
  else {
    name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
    if (g_data_0753e72b != '\0') goto label_05c0e39d;
label_05c0e3d3:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    g_data_0753e72b = '\x01';
    pCVar7 = (__this->fields)._owner;
  }
  if (((pCVar7 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar5 = (pCVar7->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar8 = (pUVar5->fields).PhotonView, pPVar8 != (Photon_Pun_PhotonView_o *)0x0)) {
    pUVar9 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fStack_48 = (pUVar9->identityQuaternion).fields.x;
    fStack_44 = (pUVar9->identityQuaternion).fields.y;
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    auStack_58._0_4_ = (pUVar9->identityQuaternion).fields.z;
    auStack_58._4_4_ = (pUVar9->identityQuaternion).fields.w;
    auStack_58._8_4_ = 0.0;
    fStack_4c = 0.0;
    fVar13 = (__this->fields).Speed;
    UStack_40.z = (__this->fields).Gravity.fields.x;
    fStack_34 = (__this->fields).Gravity.fields.y;
    uStack_30._0_4_ = 0.0;
    uStack_30._4_4_ = 0.0;
    fVar15 = (__this->fields).Gravity.fields.z;
    charViewId = (pPVar8->fields).viewIdField;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    rotation.fields.z = (float)auStack_58._0_4_;
    rotation.fields.w = (float)auStack_58._4_4_;
    rotation.fields.x = fStack_48;
    rotation.fields.y = fStack_44;
    UVar19.fields.z = fVar17;
    UVar19.fields.x = (float)auStack_70._8_4_;
    UVar19.fields.y = fStack_64;
    UVar20.fields.z = fVar15;
    UVar20.fields.x = UStack_40.z;
    UVar20.fields.y = fStack_34;
    UVar21.fields.z = fVar12 * fVar13;
    UVar21.fields.x = (float)uVar1 * fVar13;
    UVar21.fields.y = (float)uVar2 * fVar13;
    Projectiles_ProjectileSpawner__Spawn
              (name,UVar19,rotation,UVar21,UVar20,6.5,charViewId,"",settings,
               (MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    Characters_BaseCharacter__PlaySound
              (__this_00,TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch,(MethodInfo *)0x0);
    return;
  }
label_05c0e515:
  ThrowNullReferenceException();
}


