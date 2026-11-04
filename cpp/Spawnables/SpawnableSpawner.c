// Type: Spawnables.SpawnableSpawner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SpawnableSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnableSpawner.cs
// --------------------------------

// Spawnables.SpawnableSpawner$$Spawn
// il2cpp: void Spawnables_SpawnableSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, const MethodInfo* method);
// 0x181dcf5a0

void Spawnables_SpawnableSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,
               float scale,System_Object_array *settings,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float local_res8 [2];
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_1843449fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnSpawnableRPC");
    Il2CppMethodInitialized_1843449fd = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (parameters == (System_Object_array *)0x0) {
label_181dcf7f8:
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
    local_48._0_4_ = (position->fields).x;
    local_48._4_4_ = (position->fields).y;
    local_40 = (position->fields).z;
    pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
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
      local_38._0_4_ = (rotation->fields).x;
      local_38._4_4_ = (rotation->fields).y;
      uStack_30._0_4_ = (rotation->fields).z;
      uStack_30._4_4_ = (rotation->fields).w;
      pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_38);
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
        local_res8[0] = scale;
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
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
          if (settings != (System_Object_array *)0x0) {
            pIVar1 = il2cpp_vm_Object_IsInst(&settings->obj,(((parameters->obj).klass)->_1).element_class);
            if (pIVar1 == (Il2CppObject *)0x0) {
              pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
            }
          }
          if (4 < (uint)parameters->max_length) {
            parameters->m_Items[4] = &settings->obj;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,settings);
            if (__this != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this,"SpawnSpawnableRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_181dcf7f8;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Spawnables.SpawnableSpawner$$OnSpawnSpawnableRPC
// il2cpp: void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181dcf310

void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
               (System_String_o *name,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,
               float scale,System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *path;
  bool bVar3;
  UnityEngine_GameObject_o *__this;
  Spawnables_Rock1Spawnable_o *pSVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Quaternion_Fields local_58 [3];
  
  if (Il2CppMethodInitialized_1843449fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseSpawnable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rock1Spawnable)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SupplySpawnable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    Il2CppMethodInitialized_1843449fe = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Spawnables;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  local_58[0].x = (rotation->fields).x;
  local_58[0].y = (rotation->fields).y;
  local_58[0].z = (rotation->fields).z;
  local_58[0].w = (rotation->fields).w;
  local_68.z = (position->fields).z;
  local_68.x = (position->fields).x;
  local_68.y = (position->fields).y;
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object__795df0
                     (path,name,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)local_58,false,
                      (MethodInfo_795DF0 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
  if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
  }
  bVar3 = System_String__op_Equality
                    (name,TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply,(MethodInfo *)0x0);
  if (bVar3) {
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181dcf58c;
    pSVar4 = (Spawnables_Rock1Spawnable_o *)
             UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_SupplySpawnable);
    if (pSVar4 == (Spawnables_Rock1Spawnable_o *)0x0) goto label_181dcf58c;
    fVar6 = 30.0;
  }
  else {
    if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
    }
    bVar3 = System_String__op_Equality
                      (name,TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1,(MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181dcf58c;
    if (bVar3) {
      pSVar4 = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_Rock1Spawnable);
      if (pSVar4 == (Spawnables_Rock1Spawnable_o *)0x0) goto label_181dcf58c;
      fVar6 = 10.0;
    }
    else {
      pSVar4 = (Spawnables_Rock1Spawnable_o *)
               UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_BaseSpawnable);
      if (pSVar4 == (Spawnables_Rock1Spawnable_o *)0x0) goto label_181dcf58c;
      fVar6 = 0.0;
    }
  }
  (*(pSVar4->klass->vtable)._4_Setup.methodPtr)
            (pSVar4,(info->fields).Sender,fVar6,settings,(pSVar4->klass->vtable)._4_Setup.method);
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)local_58,__this_00,(MethodInfo *)0x0);
    uVar1 = (pUVar5->fields).x;
    uVar2 = (pUVar5->fields).y;
    local_68.z = scale * (pUVar5->fields).z;
    local_68.y = (float)uVar2 * scale;
    local_68.x = (float)uVar1 * scale;
    UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
    return;
  }
label_181dcf58c:
  ThrowNullReferenceException();
}


// Spawnables.SpawnableSpawner$$.ctor
// il2cpp: void Spawnables_SpawnableSpawner___ctor (Spawnables_SpawnableSpawner_o* __this, const MethodInfo* method);
// 0x18054c890

void
Spawnables_SpawnableSpawner___ctor(Spawnables_SpawnableSpawner_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


