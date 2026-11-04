// Type: Characters.FlareItem
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/FlareItem.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Items/FlareItem.cs
// --------------------------------

// Characters.FlareItem$$.ctor
// il2cpp: void Characters_FlareItem___ctor (Characters_FlareItem_o* __this, Characters_BaseCharacter_o* owner, System_String_o* name, UnityEngine_Color_o color, float cooldown, const MethodInfo* method);
// 0x182146ed0

void Characters_FlareItem___ctor
               (Characters_FlareItem_o *__this,Characters_BaseCharacter_o *owner,System_String_o *name,
               UnityEngine_Color_o *color,float cooldown,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  
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
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,name);
  fVar1 = (color->fields).g;
  fVar5 = (color->fields).b;
  fVar6 = (color->fields).a;
  (__this->fields)._color.fields.r = (color->fields).r;
  (__this->fields)._color.fields.g = fVar1;
  (__this->fields)._color.fields.b = fVar5;
  (__this->fields)._color.fields.a = fVar6;
  (__this->fields).Cooldown = cooldown;
  return;
}


// Characters.FlareItem$$Activate
// il2cpp: void Characters_FlareItem__Activate (Characters_FlareItem_o* __this, const MethodInfo* method);
// 0x182146a20

void Characters_FlareItem__Activate(Characters_FlareItem_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar4;
  byte bVar8;
  int32_t charViewId;
  float fVar9;
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
  Il2CppObject *pIVar20;
  Il2CppObject *pIVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  UnityEngine_Quaternion_Fields local_b8 [10];
  
  if (Il2CppMethodInitialized_184346c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346c7c = '\x01';
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
                        ((UnityEngine_Vector3_o *)&local_d8,__this_00,(pCVar10->vtable)._76_GetAimPoint.method
                        );
    pUVar11 = (__this_00->fields).Cache;
    if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar12 = (pUVar11->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
      uVar1 = (pUVar19->fields).x;
      uVar5 = (pUVar19->fields).y;
      fVar25 = (pUVar19->fields).z;
      pUVar19 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
      pUVar11 = (__this_00->fields).Cache;
      if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar12 = (pUVar11->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
        uVar2 = (pUVar19->fields).x;
        uVar6 = (pUVar19->fields).y;
        fVar28 = (pUVar19->fields).z;
        pUVar19 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_d8,pUVar12,(MethodInfo *)0x0);
        uVar3 = (pUVar19->fields).x;
        uVar7 = (pUVar19->fields).y;
        fVar23 = (pUVar19->fields).z;
        fVar26 = (float)uVar3 + (float)uVar3 + (float)uVar2;
        fVar27 = (float)uVar7 + (float)uVar7 + (float)uVar6;
        fVar28 = fVar23 + fVar23 + fVar28;
        fVar23 = (float)uVar1 - fVar26;
        fVar24 = (float)uVar5 - fVar27;
        fVar25 = fVar25 - fVar28;
        local_f8.y = fVar24;
        local_f8.x = fVar23;
        local_f8.z = fVar25;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar22 = (float)il2cpp_runtime_helper_180546a40(&local_f8,0);
        if (fVar22 <= 1e-05) {
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar23 = (pUVar13->zeroVector).fields.x;
          fVar24 = (pUVar13->zeroVector).fields.y;
          fVar25 = (pUVar13->zeroVector).fields.z;
        }
        else {
          fVar23 = fVar23 / fVar22;
          fVar24 = fVar24 / fVar22;
          fVar25 = fVar25 / fVar22;
        }
        if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
        }
        name = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        pCVar14 = (__this->fields)._owner;
        if (((pCVar14 != (Characters_BaseCharacter_o *)0x0) &&
            (pUVar11 = (pCVar14->fields).Cache, pUVar11 != (Utility_BaseComponentCache_o *)0x0)) &&
           (pPVar15 = (pUVar11->fields).PhotonView, pPVar15 != (Photon_Pun_PhotonView_o *)0x0)) {
          charViewId = (pPVar15->fields).viewIdField;
          fVar22 = (__this->fields).Speed;
          uVar4._0_4_ = (__this->fields).Gravity.fields.x;
          uVar4._4_4_ = (__this->fields).Gravity.fields.y;
          pUVar16 = TypeInfo_UnityEngine_Quaternion->static_fields;
          fVar9 = (__this->fields).Gravity.fields.z;
          uVar17._0_4_ = (pUVar16->identityQuaternion).fields.x;
          uVar17._4_4_ = (pUVar16->identityQuaternion).fields.y;
          uVar18._0_4_ = (pUVar16->identityQuaternion).fields.z;
          uVar18._4_4_ = (pUVar16->identityQuaternion).fields.w;
          settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_c8._0_4_ = (__this->fields)._color.fields.r;
          local_c8._4_4_ = (__this->fields)._color.fields.g;
          uStack_c0._0_4_ = (__this->fields)._color.fields.b;
          uStack_c0._4_4_ = (__this->fields)._color.fields.a;
          pIVar20 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_c8);
          if (settings != (System_Object_array *)0x0) {
            if (pIVar20 != (Il2CppObject *)0x0) {
              pIVar21 = il2cpp_vm_Object_IsInst(pIVar20,(((settings->obj).klass)->_1).element_class);
              if (pIVar21 == (Il2CppObject *)0x0) {
                pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
              }
            }
            if ((int)settings->max_length != 0) {
              settings->m_Items[0] = pIVar20;
              Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar20);
              local_f8.z = fVar25 * fVar22;
              local_f8.y = fVar24 * fVar22;
              local_f8.x = fVar23 * fVar22;
              local_d8.y = fVar27;
              local_d8.x = fVar26;
              local_e8._0_8_ = uVar4;
              local_e8.z = fVar9;
              local_d8.z = fVar28;
              local_b8[0]._0_8_ = uVar17;
              local_b8[0]._8_8_ = uVar18;
              Projectiles_ProjectileSpawner__Spawn
                        (name,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Quaternion_o *)local_b8,
                         (UnityEngine_Vector3_o *)&local_f8,(UnityEngine_Vector3_o *)&local_e8,6.5,charViewId,
                         "",settings,(MethodInfo *)0x0);
              if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
              }
              Characters_BaseCharacter__PlaySound
                        (__this_00,TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch,
                         (MethodInfo *)0x0);
              return;
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


