// Type: Effects.EffectSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Effects/EffectSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectSpawner.cs
// --------------------------------

// Effects.EffectSpawner$$Spawn
// il2cpp: void Effects_EffectSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, const MethodInfo* method);
// 0x595bae0

void Effects_EffectSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,bool scaleSize,System_Object_array *settings,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 local_95;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_78 = rotation.fields._8_8_;
  local_68 = rotation.fields._0_8_;
  local_90 = position.fields.z;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  local_94 = scale;
  if (Il2CppMethodInitialized_075458f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnEffectRPC");
    Il2CppMethodInitialized_075458f1 = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
  if (parameters == (System_Object_array *)0x0) {
label_0595bda5:
    ThrowNullReferenceException();
  }
  if (name != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_0595bd96;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_88 = local_58._0_8_;
    local_80 = local_90;
    pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_88);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0595bd96;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_0595bd91;
    parameters->m_Items[1] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    uStack_38 = (undefined4)local_78;
    uStack_34 = (undefined4)((ulong)local_78 >> 0x20);
    local_40 = (undefined4)local_68;
    uStack_3c = local_68._4_4_;
    pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_40);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0595bd96;
    }
    if ((uint)parameters->max_length < 3) goto label_0595bd91;
    parameters->m_Items[2] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
    local_8c = local_94;
    pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&local_8c);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0595bd96;
    }
    if ((parameters->max_length & 0xfffffffc) == 0) goto label_0595bd91;
    parameters->m_Items[3] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
    local_95 = scaleSize;
    pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_95);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0595bd96;
    }
    if (4 < (uint)parameters->max_length) {
      parameters->m_Items[4] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
      if (settings != (System_Object_array *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst(&settings->obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
label_0595bd96:
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (5 < (uint)parameters->max_length) {
        parameters->m_Items[5] = &settings->obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 5);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"SpawnEffectRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_0595bda5;
      }
    }
  }
label_0595bd91:
  ThrowIndexOutOfRangeException();
}


// Effects.EffectSpawner$$OnSpawnEffectRPC
// il2cpp: void Effects_EffectSpawner__OnSpawnEffectRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a020

void Effects_EffectSpawner__OnSpawnEffectRPC
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,bool scaleSize,System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *path;
  bool bVar2;
  UnityEngine_GameObject_o *__this;
  MethodInfo **ppMVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *transform;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  MethodInfo *method_01;
  Effects_EffectSpawner_c *method_02;
  float range;
  
  pMVar5 = (MethodInfo *)CONCAT71(in_register_00000031,scaleSize);
  if (Il2CppMethodInitialized_075458f2 == '\0') {
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
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_075458f2 = '\x01';
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor != 0) goto label_0595a075;
label_0595a217:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    if (Il2CppMethodInitialized_075458f5 != '\0') goto label_0595a082;
label_0595a229:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_075458f5 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) goto label_0595a217;
label_0595a075:
    if (Il2CppMethodInitialized_075458f5 == '\0') goto label_0595a229;
label_0595a082:
    uVar1 = (TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  method_01 = (MethodInfo *)name;
  range = Effects_EffectSpawner__GetCullDistance(name,pMVar5);
  bVar2 = Effects_EffectSpawner__IsOutOfCameraRange(position,range,method_01);
  if (!bVar2) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Effects;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this = ApplicationManagers_ResourceManager__InstantiateAsset_object__3665890
                       (path,name,position,rotation,false,true,
                        (MethodInfo_3665890 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    bVar2 = System_String__op_Equality
                      (name,TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode,
                       (MethodInfo *)0x0);
    if (bVar2) {
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0595a40c;
      ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_ThunderspearExplodeEffect;
    }
    else {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      bVar2 = System_String__op_Equality
                        (name,TypeInfo_Effects_EffectPrefabs->static_fields->APGTrail,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0595a40c;
        ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_LineRendererEffect;
      }
      else {
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        bVar2 = System_String__op_Equality
                          (name,TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0595a40c;
          ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_ShifterThunderEffect;
        }
        else {
          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          }
          bVar2 = System_String__op_Equality
                            (name,TypeInfo_Effects_EffectPrefabs->static_fields->GasBurst,(MethodInfo *)0x0);
          if (bVar2) {
            if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0595a40c;
            ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_GasBurstEffect;
          }
          else {
            if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0595a40c;
            ppMVar3 = &MethodInfo_UnityEngine_GameObject_AddComponent_BaseEffect;
          }
        }
      }
    }
    pIVar4 = UnityEngine_GameObject__AddComponent_object_(__this,(MethodInfo_353B6A0 *)*ppMVar3);
    if (pIVar4 == (Il2CppObject *)0x0) {
label_0595a40c:
      ThrowNullReferenceException();
    }
    (*pIVar4->klass->vtable[4].methodPtr)
              (0x41200000,pIVar4,info.fields.Sender,settings,pIVar4->klass->vtable[4].method);
    transform = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    pMVar5 = extraout_RDX;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      pMVar5 = extraout_RDX_00;
    }
    Effects_EffectSpawner__ScaleEffect(transform,scale,scaleSize,pMVar5);
    bVar2 = Effects_EffectSpawner__HasAudio(name,__this,method_00);
    if (bVar2) {
      method_02 = TypeInfo_Effects_EffectSpawner;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      bVar2 = Effects_EffectSpawner__IsOutOfCameraRange(position,500.0,(MethodInfo *)method_02);
      if (!bVar2) {
        (*pIVar4->klass->vtable[5].methodPtr)(pIVar4,pIVar4->klass->vtable[5].method);
        return;
      }
    }
  }
  return;
}


// Effects.EffectSpawner$$IsOutOfCameraRange
// il2cpp: bool Effects_EffectSpawner__IsOutOfCameraRange (UnityEngine_Vector3_o position, float range, const MethodInfo* method);
// 0x595c070

bool Effects_EffectSpawner__IsOutOfCameraRange(UnityEngine_Vector3_o position,float range,MethodInfo *method)

{
  Cameras_BaseCamera_o *x;
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this;
  bool bVar2;
  bool bVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075458f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458f3 = '\x01';
  }
  x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (((x == (Cameras_BaseCamera_o *)0x0) ||
        (pUVar1 = (x->fields).Cache, pUVar1 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this = (pUVar1->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar5 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
    local_28 = position.fields.x;
    fStack_24 = position.fields.y;
    fStack_24 = fStack_24 - UVar5.fields.y;
    fVar4 = position.fields.z - UVar5.fields.z;
    local_28 = local_28 - UVar5.fields.x;
    bVar3 = range * range < fStack_24 * fStack_24 + local_28 * local_28 + fVar4 * fVar4;
  }
  return bVar3;
}


// Effects.EffectSpawner$$HasAudio
// il2cpp: bool Effects_EffectSpawner__HasAudio (System_String_o* name, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x595bf20

bool Effects_EffectSpawner__HasAudio(System_String_o *name,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  bool local_19;
  
  if (Il2CppMethodInitialized_075458f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458f4 = '\x01';
  }
  local_19 = false;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  pSVar1 = TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                       &local_19,
                       (MethodInfo_4A774E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_bool_TryGetValue);
    if (bVar2) {
      return local_19;
    }
    if (go != (UnityEngine_GameObject_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                    (go,true,(MethodInfo_353B9A0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AudioSource);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      local_19 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      pSVar1 = TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
        System_Collections_Generic_Dictionary_object__bool___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                   local_19,(MethodInfo_4A755F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
        return local_19;
      }
    }
  }
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$IsCulled
// il2cpp: bool Effects_EffectSpawner__IsCulled (System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x595bdb0

bool Effects_EffectSpawner__IsCulled(System_String_o *name,UnityEngine_Vector3_o position,MethodInfo *method)

{
  bool bVar1;
  float range;
  
  if (Il2CppMethodInitialized_075458f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_075458f5 = '\x01';
  }
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  range = Effects_EffectSpawner__GetCullDistance(name,method);
  bVar1 = Effects_EffectSpawner__IsOutOfCameraRange(position,range,(MethodInfo *)name);
  return bVar1;
}


// Effects.EffectSpawner$$GetCullDistance
// il2cpp: float Effects_EffectSpawner__GetCullDistance (System_String_o* name, const MethodInfo* method);
// 0x595c160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595c197: jmp 0x595c25f

float Effects_EffectSpawner__GetCullDistance(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075458f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_075458f6 = '\x01';
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Effects_EffectPrefabs->static_fields->SmallEffects;
  }
  else {
    pSVar2 = *(System_Collections_Generic_HashSet_object__o **)
              ((long)((Il2CppClass *)TypeInfo_Effects_EffectPrefabs)->static_fields + 0x100);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar3 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar2,(Il2CppObject *)name,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (bVar3) {
      return 600.0;
    }
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Effects_EffectPrefabs->static_fields->MediumEffects;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar2,(Il2CppObject *)name,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar3) {
        return 1500.0;
      }
      return 5000.0;
    }
  }
  ThrowNullReferenceException();
}


// Effects.EffectSpawner$$ScaleEffect
// il2cpp: void Effects_EffectSpawner__ScaleEffect (UnityEngine_Transform_o* transform, float scale, bool scaleSize, const MethodInfo* method);
// 0x595be20

void Effects_EffectSpawner__ScaleEffect
               (UnityEngine_Transform_o *transform,float scale,bool scaleSize,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_ParticleSystem_MainModule_o main;
  uint uVar3;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_075458f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075458f7 = '\x01';
  }
  if (transform == (UnityEngine_Transform_o *)0x0) {
label_0595bf0f:
    ThrowNullReferenceException();
  }
  value.fields.y = scale;
  value.fields.x = scale;
  value.fields.z = scale;
  UnityEngine_Transform__set_localScale(transform,value,(MethodInfo *)0x0);
  if (scaleSize) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)transform,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    if (pSVar2 == (System_Object_array *)0x0) goto label_0595bf0f;
    uVar1 = (uint)pSVar2->max_length;
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_ParticleSystem_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_ParticleSystem_o *)0x0
           ) goto label_0595bf0f;
        main = UnityEngine_ParticleSystem__get_main
                         ((UnityEngine_ParticleSystem_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        Utility_Util__ScaleParticleStartSize(main,scale,(MethodInfo *)0x0);
        Utility_Util__ScaleParticleStartSpeed(main,scale,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        uVar1 = (uint)pSVar2->max_length;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return;
}


// Effects.EffectSpawner$$.ctor
// il2cpp: void Effects_EffectSpawner___ctor (Effects_EffectSpawner_o* __this, const MethodInfo* method);
// 0x595c270

void Effects_EffectSpawner___ctor(Effects_EffectSpawner_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.EffectSpawner$$.cctor
// il2cpp: void Effects_EffectSpawner___cctor (const MethodInfo* method);
// 0x595c280

void Effects_EffectSpawner___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *__this;
  
  if (Il2CppMethodInitialized_075458f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_075458f8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_4A749F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
  TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Effects_EffectSpawner->static_fields->_effectHasAudio);
  return;
}


