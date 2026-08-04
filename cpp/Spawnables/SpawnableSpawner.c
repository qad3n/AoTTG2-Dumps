// Type: Spawnables.SpawnableSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SpawnableSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnableSpawner.cs
// --------------------------------

// Spawnables.SpawnableSpawner$$Spawn
// il2cpp: void Spawnables_SpawnableSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, const MethodInfo* method);
// 0x4084640

void Spawnables_SpawnableSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,System_Object_array *settings,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  undefined8 uVar1;
  bool_conflict bVar2;
  System_Object_array *parameters;
  long lVar3;
  Il2CppObject *pIVar4;
  System_String_o *name_00;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  Il2CppClass *pIVar7;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  undefined4 uVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar15;
  float fVar16;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o rotation_00;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fVar15 = rotation.fields.z;
  fVar16 = rotation.fields.w;
  fVar13 = rotation.fields.x;
  fVar14 = rotation.fields.y;
  fVar11 = position.fields.z;
  local_58._8_4_ = in_XMM3_Dc;
  local_58._0_8_ = rotation.fields._8_8_;
  local_58._12_4_ = in_XMM3_Dd;
  local_48._8_4_ = in_XMM2_Dc;
  local_48._0_8_ = rotation.fields._0_8_;
  local_48._12_4_ = in_XMM2_Dd;
  local_68._8_4_ = in_XMM0_Dc;
  local_68._0_8_ = position.fields._0_8_;
  local_68._12_4_ = in_XMM0_Dd;
  fVar12 = fVar11;
  fVar17 = scale;
  if (g_data_057ac3c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"SpawnSpawnableRPC");
    g_data_057ac3c7 = '\x01';
    method = extraout_RDX;
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  pSVar8 = (System_Object_array *)&g_data_00000005;
  name_00 = TypeInfo_object;
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5,method);
  if (parameters != (System_Object_array *)0x0) {
    if (name == (System_String_o *)0x0) {
label_04084709:
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)name;
        il2cpp_runtime_helper_022b4080(parameters->m_Items,name);
        local_78 = local_68._0_8_;
        local_70 = fVar11;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_78);
        if (pIVar4 != (Il2CppObject *)0x0) {
          lVar3 = il2cpp_runtime_helper_023051f0(pIVar4,(((parameters->obj).klass)->_1).element_class);
          if (lVar3 == 0) goto label_0408489a;
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar4;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pIVar4);
          uStack_28 = local_58._0_4_;
          uStack_24 = local_58._4_4_;
          local_30 = local_48._0_4_;
          uStack_2c = local_48._4_4_;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Quaternion,&local_30);
          if (pIVar4 != (Il2CppObject *)0x0) {
            lVar3 = il2cpp_runtime_helper_023051f0(pIVar4,(((parameters->obj).klass)->_1).element_class);
            if (lVar3 == 0) goto label_0408489a;
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar4;
            il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pIVar4);
            local_7c = scale;
            pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_7c);
            if (pIVar4 != (Il2CppObject *)0x0) {
              lVar3 = il2cpp_runtime_helper_023051f0(pIVar4,(((parameters->obj).klass)->_1).element_class);
              if (lVar3 == 0) goto label_0408489a;
            }
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = pIVar4;
              il2cpp_runtime_helper_022b4080(parameters->m_Items + 3,pIVar4);
              if (settings != (System_Object_array *)0x0) {
                lVar3 = il2cpp_runtime_helper_023051f0(settings,(((parameters->obj).klass)->_1).element_class);
                if (lVar3 == 0) goto label_0408489a;
              }
              if (4 < (uint)parameters->max_length) {
                name_00 = (System_String_o *)(parameters->m_Items + 4);
                parameters->m_Items[4] = &settings->obj;
                il2cpp_runtime_helper_022b4080(name_00,settings);
                pSVar8 = settings;
                if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                  Photon_Pun_PhotonView__RPC(__this,"SpawnSpawnableRPC",0,parameters,(MethodInfo *)0x0);
                  return;
                }
                goto label_040848a9;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      lVar3 = il2cpp_runtime_helper_023051f0(name,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 != 0) goto label_04084709;
    }
label_0408489a:
    name_00 = (System_String_o *)il2cpp_runtime_helper_0231b270();
    pSVar8 = (System_Object_array *)0x0;
    il2cpp_runtime_helper_022b2b10(name_00,0);
  }
label_040848a9:
  uVar1 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSpawnable_AddComponent_BaseSpawnable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rock1Spawnable_AddComponent_Rock1Spawnable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SupplySpawnable_AddComponent_SupplySpawnable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnablePrefabs);
    g_data_057ac3c8 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x48);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  rotation_00.fields.y = fVar14;
  rotation_00.fields.x = fVar13;
  rotation_00.fields.w = fVar16;
  rotation_00.fields.z = fVar15;
  UVar18.fields.z = fVar12;
  UVar18.fields.x = (float)(int)uVar1;
  UVar18.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  pSVar5 = (System_String_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                     (pSVar5,name_00,UVar18,rotation_00,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = name_00;
  bVar2 = System_String__op_Equality
                    (name_00,(System_String_o *)**(undefined8 **)(TypeInfo_SpawnablePrefabs + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      (name_00,*(System_String_o **)(*(long *)(TypeInfo_SpawnablePrefabs + 0xb8) + 8),(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) goto label_04084b0b;
    if ((char)bVar2 == '\0') {
      name_00 = pSVar5;
      pIVar4 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar5,MethodInfo_BaseSpawnable_AddComponent_BaseSpawnable);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_04084b0b;
      pIVar7 = pIVar4->klass;
      pMVar6 = pIVar7->vtable[4].method;
      uVar10 = 0;
    }
    else {
      name_00 = pSVar5;
      pIVar4 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar5,MethodInfo_Rock1Spawnable_AddComponent_Rock1Spawnable);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_04084b0b;
      pIVar7 = pIVar4->klass;
      pMVar6 = pIVar7->vtable[4].method;
      uVar10 = 0x41200000;
    }
  }
  else {
    name_00 = pSVar9;
    if (pSVar5 == (System_String_o *)0x0) goto label_04084b0b;
    name_00 = pSVar5;
    pIVar4 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar5,MethodInfo_SupplySpawnable_AddComponent_SupplySpawnable);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_04084b0b;
    pIVar7 = pIVar4->klass;
    pMVar6 = pIVar7->vtable[4].method;
    uVar10 = 0x41f00000;
  }
  (*pIVar7->vtable[4].methodPtr)(uVar10,pIVar4,local_78,pSVar8,pMVar6);
  __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar5,(MethodInfo *)0x0);
  name_00 = pSVar5;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar18 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    value.fields.z = UVar18.fields.z * fVar17;
    value.fields.x = UVar18.fields.x * fVar17;
    value.fields.y = UVar18.fields.y * fVar17;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
    return;
  }
label_04084b0b:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)name_00,(MethodInfo *)0x0);
  return;
}


// Spawnables.SpawnableSpawner$$OnSpawnSpawnableRPC
// il2cpp: void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x40848b0

void Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *__this;
  MethodInfo *pMVar4;
  Il2CppClass *pIVar5;
  System_String_o *pSVar6;
  undefined4 uVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ac3c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSpawnable_AddComponent_BaseSpawnable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rock1Spawnable_AddComponent_Rock1Spawnable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SupplySpawnable_AddComponent_SupplySpawnable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnablePrefabs);
    g_data_057ac3c8 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x48);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (System_String_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                     (pSVar2,name,position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = name;
  bVar1 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(TypeInfo_SpawnablePrefabs + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_String__op_Equality
                      (name,*(System_String_o **)(*(long *)(TypeInfo_SpawnablePrefabs + 0xb8) + 8),(MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) goto label_04084b0b;
    if ((char)bVar1 == '\0') {
      name = pSVar2;
      pIVar3 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar2,MethodInfo_BaseSpawnable_AddComponent_BaseSpawnable);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_04084b0b;
      pIVar5 = pIVar3->klass;
      pMVar4 = pIVar5->vtable[4].method;
      uVar7 = 0;
    }
    else {
      name = pSVar2;
      pIVar3 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar2,MethodInfo_Rock1Spawnable_AddComponent_Rock1Spawnable);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_04084b0b;
      pIVar5 = pIVar3->klass;
      pMVar4 = pIVar5->vtable[4].method;
      uVar7 = 0x41200000;
    }
  }
  else {
    name = pSVar6;
    if (pSVar2 == (System_String_o *)0x0) goto label_04084b0b;
    name = pSVar2;
    pIVar3 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar2,MethodInfo_SupplySpawnable_AddComponent_SupplySpawnable);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_04084b0b;
    pIVar5 = pIVar3->klass;
    pMVar4 = pIVar5->vtable[4].method;
    uVar7 = 0x41f00000;
  }
  (*pIVar5->vtable[4].methodPtr)(uVar7,pIVar3,info.fields.Sender,settings,pMVar4);
  __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar2,(MethodInfo *)0x0);
  name = pSVar2;
  if (__this != (UnityEngine_Transform_o *)0x0) {
    UVar8 = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
    value.fields.z = UVar8.fields.z * scale;
    value.fields.x = UVar8.fields.x * scale;
    value.fields.y = UVar8.fields.y * scale;
    UnityEngine_Transform__set_localScale(__this,value,(MethodInfo *)0x0);
    return;
  }
label_04084b0b:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)name,(MethodInfo *)0x0);
  return;
}


// Spawnables.SpawnableSpawner$$.ctor
// il2cpp: void Spawnables_SpawnableSpawner___ctor (Spawnables_SpawnableSpawner_o* __this, const MethodInfo* method);
// 0x4084b10

void Spawnables_SpawnableSpawner___ctor(Spawnables_SpawnableSpawner_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


