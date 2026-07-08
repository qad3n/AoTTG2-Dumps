// Type: Spawnables.SpawnableSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Spawnables/SpawnableSpawner.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Spawnables/SpawnableSpawner.cs  [CHANGED since prior version]
// --------------------------------

// Spawnables.SpawnableSpawner$$Spawn
// il2cpp: void Spawnables_SpawnableSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, const MethodInfo* method);
// 0x3d8ecf0

void Spawnables_SpawnableSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,System_Object_array *settings,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_58 = rotation.fields._8_8_;
  local_48 = rotation.fields._0_8_;
  local_68._8_4_ = in_XMM0_Dc;
  local_68._0_8_ = position.fields._0_8_;
  local_68._12_4_ = in_XMM0_Dd;
  if (DAT_05702717 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SpawnSpawnableRPC");
    DAT_05702717 = '\x01';
    method = extraout_RDX;
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5,method);
  if (parameters == (System_Object_array *)0x0) {
LAB_03d8ef59:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (name != (System_String_o *)0x0) {
    lVar1 = il2cpp_runtime_glue(name,(((parameters->obj).klass)->_1).element_class);
    if (lVar1 == 0) goto LAB_03d8ef4a;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    il2cpp_runtime_glue(parameters->m_Items,name);
    local_78 = local_68._0_8_;
    local_70 = position.fields.z;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_78);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_03d8ef4a;
    }
    if ((uint)parameters->max_length < 2) goto LAB_03d8ef45;
    parameters->m_Items[1] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
    uStack_28 = (undefined4)local_58;
    uStack_24 = (undefined4)((ulong)local_58 >> 0x20);
    local_30 = (undefined4)local_48;
    uStack_2c = local_48._4_4_;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Quaternion,&local_30);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_03d8ef4a;
    }
    if ((uint)parameters->max_length < 3) goto LAB_03d8ef45;
    parameters->m_Items[2] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
    local_7c = scale;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_7c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_03d8ef4a;
    }
    if (3 < (uint)parameters->max_length) {
      parameters->m_Items[3] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 3,pIVar2);
      if (settings != (System_Object_array *)0x0) {
        lVar1 = il2cpp_runtime_glue(settings,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
LAB_03d8ef4a:
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if (4 < (uint)parameters->max_length) {
        parameters->m_Items[4] = &settings->obj;
        il2cpp_runtime_glue(parameters->m_Items + 4,settings);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"SpawnSpawnableRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03d8ef59;
      }
    }
  }
LAB_03d8ef45:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Spawnables.SpawnableSpawner$$OnSpawnSpawnableRPC
// il2cpp: void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3d8ef60

void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
               (System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  undefined4 uVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702718 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSpawnable_AddComponent_BaseSpawnable);
    il2cpp_init_method_metadata(&MethodInfo_Rock1Spawnable_AddComponent_Rock1Spawnable);
    il2cpp_init_method_metadata(&MethodInfo_SupplySpawnable_AddComponent_SupplySpawnable);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_SpawnablePrefabs);
    DAT_05702718 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x48);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,name,position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(TypeInfo_SpawnablePrefabs + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Equality
                      (name,*(System_String_o **)(*(long *)(TypeInfo_SpawnablePrefabs + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_03d8f1bb;
    if ((char)bVar1 == '\0') {
      pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_BaseSpawnable_AddComponent_BaseSpawnable);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03d8f1bb;
      pIVar4 = pIVar2->klass;
      pMVar3 = pIVar4->vtable[4].method;
      uVar5 = 0;
    }
    else {
      pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_Rock1Spawnable_AddComponent_Rock1Spawnable);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03d8f1bb;
      pIVar4 = pIVar2->klass;
      pMVar3 = pIVar4->vtable[4].method;
      uVar5 = 0x41200000;
    }
  }
  else {
    if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_03d8f1bb;
    pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_SupplySpawnable_AddComponent_SupplySpawnable);
    if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03d8f1bb;
    pIVar4 = pIVar2->klass;
    pMVar3 = pIVar4->vtable[4].method;
    uVar5 = 0x41f00000;
  }
  (*pIVar4->vtable[4].methodPtr)(uVar5,pIVar2,info.fields.Sender,settings,pMVar3);
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    value.fields.z = UVar6.fields.z * scale;
    value.fields.x = UVar6.fields.x * scale;
    value.fields.y = UVar6.fields.y * scale;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_03d8f1bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Spawnables.SpawnableSpawner$$.ctor
// il2cpp: void Spawnables_SpawnableSpawner___ctor (Spawnables_SpawnableSpawner_o* __this, const MethodInfo* method);
// 0x3d8f1c0

void Spawnables_SpawnableSpawner___ctor(Spawnables_SpawnableSpawner_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


