// Type: Effects.EffectSpawner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Effects/EffectSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectSpawner.cs
// --------------------------------

// Effects.EffectSpawner$$Spawn
// il2cpp: void Effects_EffectSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, const MethodInfo* method);
// 0x181e658a0

void Effects_EffectSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,
               float scale,bool scaleSize,System_Object_array *settings,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  bool local_res8 [8];
  float local_58 [2];
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_184344f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnEffectRPC");
    Il2CppMethodInitialized_184344f50 = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
  if (parameters == (System_Object_array *)0x0) {
label_181e65b4f:
    ThrowNullReferenceException();
  }
  if (name != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,name);
    local_50._0_4_ = (position->fields).x;
    local_50._4_4_ = (position->fields).y;
    local_48 = (position->fields).z;
    pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_50);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar1);
      local_40._0_4_ = (rotation->fields).x;
      local_40._4_4_ = (rotation->fields).y;
      uStack_38._0_4_ = (rotation->fields).z;
      uStack_38._4_4_ = (rotation->fields).w;
      pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_40);
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar1;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar1);
        local_58[0] = scale;
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_58);
        if (pIVar1 != (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)parameters->max_length) {
          parameters->m_Items[3] = pIVar1;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar1);
          local_res8[0] = scaleSize;
          pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
          if (pIVar1 != (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
            if (pIVar2 == (Il2CppObject *)0x0) {
              pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
            }
          }
          if (4 < (uint)parameters->max_length) {
            parameters->m_Items[4] = pIVar1;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,pIVar1);
            if (settings != (System_Object_array *)0x0) {
              pIVar1 = il2cpp_vm_Object_IsInst(&settings->obj,(((parameters->obj).klass)->_1).element_class);
              if (pIVar1 == (Il2CppObject *)0x0) {
                pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
              }
            }
            if (5 < (uint)parameters->max_length) {
              parameters->m_Items[5] = &settings->obj;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 5,settings);
              if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this,"SpawnEffectRPC",0,parameters,(MethodInfo *)0x0);
                return;
              }
              goto label_181e65b4f;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Effects.EffectSpawner$$OnSpawnEffectRPC
// il2cpp: void Effects_EffectSpawner__OnSpawnEffectRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e650b0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6543c: mov rdx, qword ptr [rip + 0x2247b65]  ; MethodInfo_UnityEngine_GameObject_AddComponent_GasBurstEffect
// asm:   0x181e65443: jmp 0x181e6547c
// asm:   0x181e65445: test r14, r14
// asm:   0x181e65448: je 0x181e6577d
// asm:   0x181e6544e: mov rdx, qword ptr [rip + 0x224e8ab]  ; MethodInfo_UnityEngine_GameObject_AddComponent_ShifterThunderEffect
// asm:   0x181e65455: jmp 0x181e65479
// asm:   0x181e65457: test r14, r14
// asm:   0x181e6545a: je 0x181e6577d
// asm:   0x181e65460: mov rdx, qword ptr [rip + 0x224bc01]  ; MethodInfo_UnityEngine_GameObject_AddComponent_LineRendererEffect
// asm:   0x181e65467: jmp 0x181e65479
// asm:   0x181e65469: test r14, r14
// asm:   0x181e65472: mov rdx, qword ptr [rip + 0x224ff47]  ; MethodInfo_UnityEngine_GameObject_AddComponent_ThunderspearExplodeEffect
// asm:   0x181e65479: mov rcx, r14

void Effects_EffectSpawner__OnSpawnEffectRPC
               (System_String_o *name,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,
               float scale,bool scaleSize,System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_String_o *path;
  System_Collections_Generic_Dictionary_string__bool__o *pSVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_00;
  System_Object_array *pSVar5;
  UnityEngine_ParticleSystem_NoiseModule_o main;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  uint uVar6;
  float range;
  bool local_res8 [8];
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184344f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_GasBurstEffect)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_LineRendererEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ShifterThunderEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ThunderspearExplodeEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_184344f51 = '\x01';
  }
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  if (Il2CppMethodInitialized_184344f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184344f54 = '\x01';
  }
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  if (Il2CppMethodInitialized_184344f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184344f55 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Effects_EffectPrefabs->static_fields->SmallEffects;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e6577d;
  bVar3 = System_Collections_Generic_HashSet_object___Contains
                    (pSVar1,(Il2CppObject *)name,
                     (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if (bVar3) {
    range = 600.0;
  }
  else {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Effects_EffectPrefabs->static_fields->MediumEffects;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e6577d;
    bVar3 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)name,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (bVar3) {
      range = 1500.0;
    }
    else {
      range = 5000.0;
    }
  }
  local_58.x = (position->fields).x;
  local_58.y = (position->fields).y;
  local_58.z = (position->fields).z;
  bVar3 = Effects_EffectSpawner__IsOutOfCameraRange
                    ((UnityEngine_Vector3_o *)&local_58,range,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Effects;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  local_48[0].x = (rotation->fields).x;
  local_48[0].y = (rotation->fields).y;
  local_48[0].z = (rotation->fields).z;
  local_48[0].w = (rotation->fields).w;
  local_58.z = (position->fields).z;
  local_58.x = (position->fields).x;
  local_58.y = (position->fields).y;
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object__795df0
                     (path,name,(UnityEngine_Vector3_o *)&local_58,(UnityEngine_Quaternion_o *)local_48,false,
                      (MethodInfo_795DF0 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  bVar3 = System_String__op_Equality
                    (name,TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode,(MethodInfo *)0x0
                    );
  method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_ThunderspearExplodeEffect;
  if (bVar3) {
joined_r0x000181e6546c:
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e6577d;
  }
  else {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    bVar3 = System_String__op_Equality
                      (name,TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail,(MethodInfo *)0x0);
    method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_LineRendererEffect;
    if (bVar3) goto joined_r0x000181e6546c;
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    bVar3 = System_String__op_Equality
                      (name,TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder,(MethodInfo *)0x0);
    method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_ShifterThunderEffect;
    if (bVar3) goto joined_r0x000181e6546c;
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    bVar3 = System_String__op_Equality
                      (name,TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst,(MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e6577d;
    method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_GasBurstEffect;
    if (!bVar3) {
      method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_BaseEffect;
    }
  }
  pIVar4 = UnityEngine_GameObject__AddComponent_object_(__this,(MethodInfo_6F4D60 *)method_00);
  if (pIVar4 != (Il2CppObject *)0x0) {
    (*pIVar4->klass->vtable[4].methodPtr)
              (pIVar4,(info->fields).Sender,0x41200000,settings,pIVar4->klass->vtable[4].method);
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    if (Il2CppMethodInitialized_184344f56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
      Il2CppMethodInitialized_184344f56 = '\x01';
    }
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_58.y = scale;
      local_58.x = scale;
      local_58.z = scale;
      UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      if (scaleSize) {
        pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_665370 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
        if (pSVar5 == (System_Object_array *)0x0) goto label_181e6577d;
        for (uVar6 = 0; (int)uVar6 < (int)pSVar5->max_length; uVar6 = uVar6 + 1) {
          if ((uint)pSVar5->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_ParticleSystem_o *)pSVar5->m_Items[(int)uVar6] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_181e6577d;
          main = UnityEngine_ParticleSystem__get_noise
                           ((UnityEngine_ParticleSystem_o *)pSVar5->m_Items[(int)uVar6],(MethodInfo *)0x0);
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          Utility_Util__ScaleParticleStartSize
                    ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,scale,
                     (MethodInfo *)0x0);
          Utility_Util__ScaleParticleStartSpeed
                    ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,scale,
                     (MethodInfo *)0x0);
        }
      }
      if (Il2CppMethodInitialized_184344f53 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_TryGetValue);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AudioSource);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184344f53 = '\x01';
      }
      local_res8[0] = false;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      pSVar2 = TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
label_181e65789:
        ThrowNullReferenceException();
      }
      bVar3 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                         local_res8,
                         (MethodInfo_1461B50 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_bool_TryGetValue);
      if (!bVar3) {
        x = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                      (__this,true,
                       (MethodInfo_6F5110 *)
                       MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AudioSource);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        local_res8[0] = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        pSVar2 = TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) goto label_181e65789;
        System_Collections_Generic_Dictionary_object__bool___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                   local_res8[0],
                   (MethodInfo_1465940 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item
                  );
      }
      if (local_res8[0] != false) {
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_58.x = (position->fields).x;
        local_58.y = (position->fields).y;
        local_58.z = (position->fields).z;
        bVar3 = Effects_EffectSpawner__IsOutOfCameraRange
                          ((UnityEngine_Vector3_o *)&local_58,500.0,(MethodInfo *)0x0);
        if (!bVar3) {
          if (pIVar4 == (Il2CppObject *)0x0) goto label_181e6577d;
          (*pIVar4->klass->vtable[5].methodPtr)(pIVar4,pIVar4->klass->vtable[5].method);
        }
      }
      return;
    }
  }
label_181e6577d:
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$IsOutOfCameraRange
// il2cpp: bool Effects_EffectSpawner__IsOutOfCameraRange (UnityEngine_Vector3_o position, float range, const MethodInfo* method);
// 0x181e64fb0

bool Effects_EffectSpawner__IsOutOfCameraRange(UnityEngine_Vector3_o *position,float range,MethodInfo *method)

{
  Cameras_BaseCamera_o *x;
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f52 = '\x01';
  }
  x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (((x != (Cameras_BaseCamera_o *)0x0) &&
        (pUVar1 = (x->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this = (pUVar1->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      pUVar3 = UnityEngine_Transform__get_position(local_28,__this,(MethodInfo *)0x0);
      fVar6 = (position->fields).y - (pUVar3->fields).y;
      fVar5 = (position->fields).x - (pUVar3->fields).x;
      fVar4 = (position->fields).z - (pUVar3->fields).z;
      return range * range < fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Effects.EffectSpawner$$HasAudio
// il2cpp: bool Effects_EffectSpawner__HasAudio (System_String_o* name, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x181e64d10

bool Effects_EffectSpawner__HasAudio(System_String_o *name,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  bool local_res8 [8];
  
  if (Il2CppMethodInitialized_184344f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f53 = '\x01';
  }
  local_res8[0] = false;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  pSVar1 = TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                       local_res8,
                       (MethodInfo_1461B50 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_bool_TryGetValue);
    if (bVar2) {
      return local_res8[0];
    }
    if (go != (UnityEngine_GameObject_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                    (go,true,(MethodInfo_6F5110 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AudioSource);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      local_res8[0] = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      pSVar1 = TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
        System_Collections_Generic_Dictionary_object__bool___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                   local_res8[0],
                   (MethodInfo_1465940 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item
                  );
        return local_res8[0];
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$IsCulled
// il2cpp: bool Effects_EffectSpawner__IsCulled (System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x181e64e60

bool Effects_EffectSpawner__IsCulled(System_String_o *name,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  float range;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184344f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184344f54 = '\x01';
  }
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  if (Il2CppMethodInitialized_184344f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184344f55 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Effects_EffectPrefabs->static_fields->SmallEffects;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)name,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (bVar2) {
      range = 600.0;
    }
    else {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Effects_EffectPrefabs->static_fields->MediumEffects;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e64f9c;
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)name,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar2) {
        range = 1500.0;
      }
      else {
        range = 5000.0;
      }
    }
    local_18.x = (position->fields).x;
    local_18.y = (position->fields).y;
    local_18.z = (position->fields).z;
    bVar2 = Effects_EffectSpawner__IsOutOfCameraRange
                      ((UnityEngine_Vector3_o *)&local_18,range,(MethodInfo *)0x0);
    return bVar2;
  }
label_181e64f9c:
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$GetCullDistance
// il2cpp: float Effects_EffectSpawner__GetCullDistance (System_String_o* name, const MethodInfo* method);
// 0x181e64c20

float Effects_EffectSpawner__GetCullDistance(System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184344f55 = '\x01';
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Effects_EffectPrefabs->static_fields->SmallEffects;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)name,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (bVar2) {
      return 600.0;
    }
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Effects_EffectPrefabs->static_fields->MediumEffects;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)name,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (!bVar2) {
        return 5000.0;
      }
      return 1500.0;
    }
  }
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$ScaleEffect
// il2cpp: void Effects_EffectSpawner__ScaleEffect (UnityEngine_Transform_o* transform, float scale, bool scaleSize, const MethodInfo* method);
// 0x181e65790

void Effects_EffectSpawner__ScaleEffect
               (UnityEngine_Transform_o *transform,float scale,bool scaleSize,MethodInfo *method)

{
  System_Object_array *pSVar1;
  UnityEngine_ParticleSystem_NoiseModule_o main;
  uint uVar2;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184344f56 = '\x01';
  }
  if (transform != (UnityEngine_Transform_o *)0x0) {
    local_28[0].fields.x = scale;
    local_28[0].fields.y = scale;
    local_28[0].fields.z = scale;
    UnityEngine_Transform__set_localScale(transform,local_28,(MethodInfo *)0x0);
    if (scaleSize) {
      pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                         ((UnityEngine_Component_o *)transform,
                          (MethodInfo_665370 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
      if (pSVar1 == (System_Object_array *)0x0) goto label_181e65894;
      for (uVar2 = 0; (int)uVar2 < (int)pSVar1->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pSVar1->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_ParticleSystem_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_ParticleSystem_o *)0x0
           ) goto label_181e65894;
        main = UnityEngine_ParticleSystem__get_noise
                         ((UnityEngine_ParticleSystem_o *)pSVar1->m_Items[(int)uVar2],(MethodInfo *)0x0);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        Utility_Util__ScaleParticleStartSize
                  ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,scale,
                   (MethodInfo *)0x0);
        Utility_Util__ScaleParticleStartSpeed
                  ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,scale,
                   (MethodInfo *)0x0);
      }
    }
    return;
  }
label_181e65894:
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$.ctor
// il2cpp: void Effects_EffectSpawner___ctor (Effects_EffectSpawner_o* __this, const MethodInfo* method);
// 0x18054c890

void
Effects_EffectSpawner___ctor(Effects_EffectSpawner_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.EffectSpawner$$.cctor
// il2cpp: void Effects_EffectSpawner___cctor (const MethodInfo* method);
// 0x181e65bc0

void Effects_EffectSpawner___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *__this;
  
  if (Il2CppMethodInitialized_184344f57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184344f57 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
  TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio,__this);
  return;
}


