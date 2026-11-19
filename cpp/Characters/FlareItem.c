// Type: Characters.FlareItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/FlareItem.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Items/FlareItem.cs
// --------------------------------

// Characters.FlareItem$$.ctor
// il2cpp: void Characters_FlareItem___ctor (Characters_FlareItem_o* __this, Characters_BaseCharacter_o* owner, System_String_o* name, UnityEngine_Color_o color, float cooldown, const MethodInfo* method);
// 0x5bfaa40

void Characters_FlareItem___ctor
               (Characters_FlareItem_o *__this,Characters_BaseCharacter_o *owner,System_String_o *name,
               UnityEngine_Color_o color,float cooldown,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float local_38;
  float fStack_34;
  
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
  Characters_BaseUseable___ctor((Characters_BaseUseable_o *)__this,owner,0.0,-1,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  local_38 = color.fields.r;
  fStack_34 = color.fields.g;
  (__this->fields)._color.fields.r = local_38;
  (__this->fields)._color.fields.g = fStack_34;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  (__this->fields).Cooldown = cooldown;
  return;
}


// Characters.FlareItem$$Activate
// il2cpp: void Characters_FlareItem__Activate (Characters_FlareItem_o* __this, const MethodInfo* method);
// 0x5bfab10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfadae: jmp 0x5bfaf8b

void Characters_FlareItem__Activate(Characters_FlareItem_o *__this,MethodInfo *method)

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
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  System_String_o *name;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  UnityEngine_Vector3_Fields UStack_88;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_0754764c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754764c = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_05bfaf8b;
  pCVar4 = __this_00->klass;
  bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar4->_2).typeHierarchyDepth < bVar3) ||
     ((pCVar4->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  UVar22 = (*(pCVar4->vtable)._76_GetAimPoint.methodPtr)(__this_00,(pCVar4->vtable)._76_GetAimPoint.method);
  pUVar5 = (__this_00->fields).Cache;
  if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05bfaf8b;
  UVar23 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  pUVar5 = (__this_00->fields).Cache;
  if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05bfaf8b;
  UVar24 = UnityEngine_Transform__get_up(pUVar6,(MethodInfo *)0x0);
  fVar18 = UVar24.fields.z + UVar24.fields.z;
  fVar14 = UVar24.fields.x + UVar24.fields.x;
  fVar16 = UVar24.fields.y + UVar24.fields.y;
  fVar20 = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
  fVar15 = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
  if (g_data_0753e72d == '\0') {
    fStack_68 = fVar18;
    fStack_78 = fVar14;
    fStack_74 = fVar16;
    fStack_70 = extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01;
    fStack_6c = extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    fVar14 = fStack_78;
    fVar16 = fStack_74;
    fVar20 = fStack_70;
    fVar15 = fStack_6c;
    fVar18 = fStack_68;
  }
  uStack_98._0_4_ = UVar23.fields.x;
  uStack_98._4_4_ = UVar23.fields.y;
  fVar18 = UVar23.fields.z + fVar18;
  UStack_88.x = 0.0;
  UStack_88.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  uStack_a8._0_4_ = UVar22.fields.x;
  uStack_a8._4_4_ = UVar22.fields.y;
  auVar21._0_4_ = (float)uStack_a8 - ((float)uStack_98 + fVar14);
  auVar21._4_4_ = uStack_a8._4_4_ - (uStack_98._4_4_ + fVar16);
  auVar21._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_00 + fVar20);
  auVar21._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_00 + fVar15);
  fVar20 = UVar22.fields.z - fVar18;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar17 = 0;
  fVar15 = fVar20 * fVar20 + auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    uVar17 = extraout_XMM0_Db;
    if (1e-05 < fVar15) goto label_05bfad5a;
label_05bfad1e:
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar20 = (pUVar11->zeroVector).fields.z;
  }
  else {
    fVar15 = SQRT(fVar15);
    if (fVar15 <= 1e-05) goto label_05bfad1e;
label_05bfad5a:
    fVar20 = fVar20 / fVar15;
    auVar10._4_4_ = fVar15;
    auVar10._0_4_ = fVar15;
    auVar10._8_4_ = uVar17;
    auVar10._12_4_ = uVar17;
    auVar21 = divps(auVar21,auVar10);
    UStack_88.x = auVar21._0_4_;
    UStack_88.y = auVar21._4_4_;
    pUVar11 = (UnityEngine_Vector3_StaticFields *)&UStack_88;
  }
  uVar1 = (pUVar11->zeroVector).fields.x;
  uVar2 = (pUVar11->zeroVector).fields.y;
  if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
    if (g_data_0753e72b == '\0') goto label_05bfadd0;
label_05bfada5:
    pCVar7 = (__this->fields)._owner;
  }
  else {
    name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
    if (g_data_0753e72b != '\0') goto label_05bfada5;
label_05bfadd0:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    g_data_0753e72b = '\x01';
    pCVar7 = (__this->fields)._owner;
  }
  if (((pCVar7 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar5 = (pCVar7->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar8 = (pUVar5->fields).PhotonView, pPVar8 != (Photon_Pun_PhotonView_o *)0x0)) {
    pUVar9 = TypeInfo_UnityEngine_Quaternion->static_fields;
    UStack_40.z = (pUVar9->identityQuaternion).fields.x;
    fStack_34 = (pUVar9->identityQuaternion).fields.y;
    uStack_30._0_4_ = 0.0;
    uStack_30._4_4_ = 0.0;
    fStack_48 = (pUVar9->identityQuaternion).fields.z;
    fStack_44 = (pUVar9->identityQuaternion).fields.w;
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    auStack_58 = ZEXT416((uint)(__this->fields).Speed);
    fStack_68 = (__this->fields).Gravity.fields.x;
    fStack_64 = (__this->fields).Gravity.fields.y;
    uStack_60._0_4_ = 0.0;
    uStack_60._4_4_ = 0.0;
    fStack_78 = (__this->fields).Gravity.fields.z;
    charViewId = (pPVar8->fields).viewIdField;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    UStack_88.x = (__this->fields)._color.fields.r;
    UStack_88.y = (__this->fields)._color.fields.g;
    UStack_88.z = (__this->fields)._color.fields.b;
    unique0x1000066f = (__this->fields)._color.fields.a;
    pIVar12 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&UStack_88);
    if (settings != (System_Object_array *)0x0) {
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((settings->obj).klass)->_1).element_class),
         pIVar13 == (Il2CppObject *)0x0)) {
        pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
      }
      if ((int)settings->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      fVar20 = fVar20 * (float)auStack_58._0_4_;
      fVar15 = (float)uVar1 * (float)auStack_58._0_4_;
      fVar19 = (float)uVar2 * (float)auStack_58._0_4_;
      settings->m_Items[0] = pIVar12;
      Il2CppCodeGenWriteBarrier(settings->m_Items);
      rotation.fields.z = fStack_48;
      rotation.fields.w = fStack_44;
      rotation.fields.x = UStack_40.z;
      rotation.fields.y = fStack_34;
      UVar22.fields.z = fVar18;
      UVar22.fields.x = (float)uStack_98 + fVar14;
      UVar22.fields.y = uStack_98._4_4_ + fVar16;
      UVar23.fields.z = fStack_78;
      UVar23.fields.x = fStack_68;
      UVar23.fields.y = fStack_64;
      UVar24.fields.z = fVar20;
      UVar24.fields.x = fVar15;
      UVar24.fields.y = fVar19;
      Projectiles_ProjectileSpawner__Spawn
                (name,UVar22,rotation,UVar24,UVar23,6.5,charViewId,"",settings,
                 (MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      Characters_BaseCharacter__PlaySound
                (__this_00,TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch,(MethodInfo *)0x0);
      return;
    }
  }
label_05bfaf8b:
  ThrowNullReferenceException();
}


