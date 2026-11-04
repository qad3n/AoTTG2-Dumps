// Type: Characters.SmokeBombSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SmokeBombSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmokeBombSpecial.cs
// --------------------------------

// Characters.SmokeBombSpecial$$.ctor
// il2cpp: void Characters_SmokeBombSpecial___ctor (Characters_SmokeBombSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821762e0

void Characters_SmokeBombSpecial___ctor
               (Characters_SmokeBombSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  
  (__this->fields).Speed = 150.0;
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
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
// 0x182175ee0

void Characters_SmokeBombSpecial__Activate(Characters_SmokeBombSpecial_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar4;
  byte bVar8;
  float fVar9;
  int32_t charViewId;
  Characters_BaseCharacter_o *__this_00;
  Characters_BaseCharacter_c *pCVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  System_String_o *name;
  Characters_BaseCharacter_o *pCVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  UnityEngine_Quaternion_StaticFields *pUVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  UnityEngine_Vector3_o *pUVar19;
  System_Object_array *settings;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Quaternion_Fields local_a8 [10];
  
  if (Il2CppMethodInitialized_184346cf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346cf5 = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    pCVar10 = __this_00->klass;
    bVar8 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar10->_2).typeHierarchyDepth < bVar8) ||
       ((pCVar10->_2).typeHierarchy[(ulonglong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pUVar19 = (*(pCVar10->vtable)._76_GetAimPoint.methodPtr)
                        ((UnityEngine_Vector3_o *)&local_b8,__this_00,(pCVar10->vtable)._76_GetAimPoint.method
                        );
    pUVar11 = (__this_00->fields).Cache;
    if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
      uVar1 = (pUVar19->fields).x;
      uVar5 = (pUVar19->fields).y;
      fVar21 = (pUVar19->fields).z;
      pUVar19 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_b8,pUVar12,(MethodInfo *)0x0);
      pUVar11 = (__this_00->fields).Cache;
      if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar12 = (pUVar11->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
        uVar2 = (pUVar19->fields).x;
        uVar6 = (pUVar19->fields).y;
        fVar26 = (pUVar19->fields).z;
        pUVar19 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_b8,pUVar12,(MethodInfo *)0x0);
        uVar3 = (pUVar19->fields).x;
        uVar7 = (pUVar19->fields).y;
        fVar22 = (pUVar19->fields).z;
        fVar24 = (float)uVar3 + (float)uVar3 + (float)uVar2;
        fVar25 = (float)uVar7 + (float)uVar7 + (float)uVar6;
        fVar26 = fVar22 + fVar22 + fVar26;
        fVar22 = (float)uVar1 - fVar24;
        fVar23 = (float)uVar5 - fVar25;
        fVar21 = fVar21 - fVar26;
        local_d8.y = fVar23;
        local_d8.x = fVar22;
        local_d8.z = fVar21;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar20 = (float)il2cpp_runtime_helper_180546a40(&local_d8);
        if (fVar20 <= 1e-05) {
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar22 = (pUVar13->zeroVector).fields.x;
          fVar23 = (pUVar13->zeroVector).fields.y;
          fVar21 = (pUVar13->zeroVector).fields.z;
        }
        else {
          fVar22 = fVar22 / fVar20;
          fVar23 = fVar23 / fVar20;
          fVar21 = fVar21 / fVar20;
        }
        if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
        }
        name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        pCVar14 = (__this->fields)._owner;
        if (((pCVar14 != (Characters_BaseCharacter_o *)0x0) &&
            (pUVar11 = (pCVar14->fields).Cache, pUVar11 != (Utility_BaseComponentCache_o *)0x0)) &&
           (pPVar15 = (pUVar11->fields).PhotonView, pPVar15 != (Photon_Pun_PhotonView_o *)0x0)) {
          fVar20 = (__this->fields).Speed;
          uVar4._0_4_ = (__this->fields).Gravity.fields.x;
          uVar4._4_4_ = (__this->fields).Gravity.fields.y;
          fVar9 = (__this->fields).Gravity.fields.z;
          pUVar16 = TypeInfo_UnityEngine_Quaternion->static_fields;
          charViewId = (pPVar15->fields).viewIdField;
          uVar17._0_4_ = (pUVar16->identityQuaternion).fields.x;
          uVar17._4_4_ = (pUVar16->identityQuaternion).fields.y;
          uVar18._0_4_ = (pUVar16->identityQuaternion).fields.z;
          uVar18._4_4_ = (pUVar16->identityQuaternion).fields.w;
          settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
          local_d8.z = fVar21 * fVar20;
          local_d8.y = fVar23 * fVar20;
          local_d8.x = fVar22 * fVar20;
          local_b8.y = fVar25;
          local_b8.x = fVar24;
          local_c8._0_8_ = uVar4;
          local_c8.z = fVar9;
          local_b8.z = fVar26;
          local_a8[0]._0_8_ = uVar17;
          local_a8[0]._8_8_ = uVar18;
          Projectiles_ProjectileSpawner__Spawn
                    (name,(UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Quaternion_o *)local_a8,
                     (UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_c8,6.5,charViewId,
                     "",settings,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
          }
          Characters_BaseCharacter__PlaySound
                    (__this_00,TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


