// Type: Spawnables.SpawnableSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SpawnableSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnableSpawner.cs
// --------------------------------

// Spawnables.SpawnableSpawner$$Spawn
// il2cpp: void Spawnables_SpawnableSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, const MethodInfo* method);
// 0x586de30

void Spawnables_SpawnableSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,System_Object_array *settings,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_48 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_68 = rotation.fields._8_8_;
  local_58 = rotation.fields._0_8_;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = position.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07545159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnSpawnableRPC");
    Il2CppMethodInitialized_07545159 = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (parameters == (System_Object_array *)0x0) {
label_0586e09f:
    ThrowNullReferenceException();
  }
  if (name != (System_String_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_0586e090;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_78 = local_48._0_8_;
    local_70 = position.fields.z;
    pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_78);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0586e090;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_0586e08b;
    parameters->m_Items[1] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    uStack_28 = (undefined4)local_68;
    uStack_24 = (undefined4)((ulong)local_68 >> 0x20);
    local_30 = (undefined4)local_58;
    uStack_2c = local_58._4_4_;
    pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_30);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0586e090;
    }
    if ((uint)parameters->max_length < 3) goto label_0586e08b;
    parameters->m_Items[2] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
    local_7c = scale;
    pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&local_7c);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0586e090;
    }
    if ((parameters->max_length & 0xfffffffc) != 0) {
      parameters->m_Items[3] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
      if (settings != (System_Object_array *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst(&settings->obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
label_0586e090:
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (4 < (uint)parameters->max_length) {
        parameters->m_Items[4] = &settings->obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"SpawnSpawnableRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_0586e09f;
      }
    }
  }
label_0586e08b:
  ThrowIndexOutOfRangeException();
}


// Spawnables.SpawnableSpawner$$OnSpawnSpawnableRPC
// il2cpp: void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x586e0b0

void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  Spawnables_SupplySpawnable_o *pSVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *pMVar3;
  Spawnables_SupplySpawnable_c *pSVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754515a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseSpawnable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rock1Spawnable)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SupplySpawnable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    Il2CppMethodInitialized_0754515a = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Spawnables;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object__3665890
                     (path,name,position,rotation,false,false,
                      (MethodInfo_3665890 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
  if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
  }
  bVar1 = System_String__op_Equality
                    (name,TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0586e312;
    pSVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_SupplySpawnable);
    if (pSVar2 == (Spawnables_SupplySpawnable_o *)0x0) goto label_0586e312;
    pSVar4 = pSVar2->klass;
    pMVar3 = (pSVar4->vtable)._4_Setup.method;
    fVar5 = 30.0;
  }
  else {
    if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
    }
    bVar1 = System_String__op_Equality
                      (name,TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0586e312;
      pSVar2 = (Spawnables_SupplySpawnable_o *)
               UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_Rock1Spawnable);
      if (pSVar2 == (Spawnables_SupplySpawnable_o *)0x0) goto label_0586e312;
      pSVar4 = (Spawnables_SupplySpawnable_c *)((Spawnables_Rock1Spawnable_o *)pSVar2)->klass;
      pMVar3 = (pSVar4->vtable)._4_Setup.method;
      fVar5 = 10.0;
    }
    else {
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0586e312;
      pSVar2 = (Spawnables_SupplySpawnable_o *)
               UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_BaseSpawnable);
      if (pSVar2 == (Spawnables_SupplySpawnable_o *)0x0) goto label_0586e312;
      pSVar4 = (Spawnables_SupplySpawnable_c *)((Spawnables_BaseSpawnable_o *)pSVar2)->klass;
      pMVar3 = (pSVar4->vtable)._4_Setup.method;
      fVar5 = 0.0;
    }
  }
  (*(pSVar4->vtable)._4_Setup.methodPtr)(pSVar2,info.fields.Sender,fVar5,settings,pMVar3);
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    value.fields.z = UVar6.fields.z * scale;
    value.fields.x = UVar6.fields.x * scale;
    value.fields.y = UVar6.fields.y * scale;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
    return;
  }
label_0586e312:
  ThrowNullReferenceException();
}


// Spawnables.SpawnableSpawner$$.ctor
// il2cpp: void Spawnables_SpawnableSpawner___ctor (Spawnables_SpawnableSpawner_o* __this, const MethodInfo* method);
// 0x586e320

void Spawnables_SpawnableSpawner___ctor(Spawnables_SpawnableSpawner_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


