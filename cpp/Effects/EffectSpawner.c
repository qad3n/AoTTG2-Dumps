// Type: Effects.EffectSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/EffectSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectSpawner.cs
// --------------------------------

// Effects.EffectSpawner$$Spawn
// il2cpp: void Effects_EffectSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, const MethodInfo* method);
// 0x4572760

void Effects_EffectSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,bool_conflict scaleSize,System_Object_array *settings,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  UnityEngine_ParticleSystem_MainModule_o main;
  uint uVar6;
  char cVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o value;
  
  if (g_data_057af083 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"SpawnEffectRPC");
    g_data_057af083 = '\x01';
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  cVar7 = '\x06';
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)
       (UnityEngine_ParticleSystem_MainModule_Fields)TypeInfo_object;
  pSVar3 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((name == (System_String_o *)0x0) || (lVar4 = il2cpp_runtime_helper_023051f0(name), lVar4 != 0)) {
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = (Il2CppObject *)name;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items,name);
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pIVar5), lVar4 == 0))
        goto label_04572a10;
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pIVar5;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pIVar5);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Quaternion);
          if ((pIVar5 != (Il2CppObject *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pIVar5), lVar4 == 0))
          goto label_04572a10;
          if (2 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[2] = pIVar5;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2,pIVar5);
            pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
            if ((pIVar5 != (Il2CppObject *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pIVar5), lVar4 == 0))
            goto label_04572a10;
            if (3 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[3] = pIVar5;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 3,pIVar5);
              pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
              if ((pIVar5 != (Il2CppObject *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pIVar5), lVar4 == 0))
              goto label_04572a10;
              if (4 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[4] = pIVar5;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 4);
                if ((settings != (System_Object_array *)0x0) &&
                   (lVar4 = il2cpp_runtime_helper_023051f0(settings), lVar4 == 0)) goto label_04572a10;
                if (5 < (uint)pSVar3->max_length) {
                  main.fields.m_ParticleSystem =
                       (UnityEngine_ParticleSystem_MainModule_Fields)(pSVar3->m_Items + 5);
                  pSVar3->m_Items[5] = &settings->obj;
                  il2cpp_runtime_helper_022b4080();
                  cVar7 = (char)settings;
                  if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC(__this,"SpawnEffectRPC",0,pSVar3,(MethodInfo *)0x0);
                    return;
                  }
                  goto label_04572a1f;
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
label_04572a10:
    main.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)il2cpp_runtime_helper_0231b270();
    cVar7 = '\0';
    il2cpp_runtime_helper_022b2b10();
  }
label_04572a1f:
  value.fields.x = (float)il2cpp_runtime_helper_022b2c90();
  pUVar8 = (UnityEngine_Transform_o *)main.fields.m_ParticleSystem;
  if (g_data_057af085 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    pUVar8 = (UnityEngine_Transform_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057af085 = '\x01';
  }
  if (main.fields.m_ParticleSystem != (UnityEngine_ParticleSystem_o *)0x0) {
    value.fields.y = value.fields.x;
    value.fields.z = value.fields.x;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)main.fields.m_ParticleSystem,value,(MethodInfo *)0x0);
    if (cVar7 == '\0') {
      return;
    }
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)main.fields.m_ParticleSystem,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    pUVar8 = (UnityEngine_Transform_o *)main.fields.m_ParticleSystem;
    if (pSVar3 != (System_Object_array *)0x0) {
      iVar1 = (int)pSVar3->max_length;
      if (iVar1 < 1) {
        return;
      }
      uVar6 = 0;
      if (iVar1 != 0) {
        do {
          pUVar8 = (UnityEngine_Transform_o *)0x0;
          if ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar6] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_04572b30;
          main = UnityEngine_ParticleSystem__get_main
                           ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar6],(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Utility_Util__ScaleParticleStartSize(main,value.fields.x,(MethodInfo *)0x0);
          Utility_Util__ScaleParticleStartSpeed(main,value.fields.x,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar2 = (uint)pSVar3->max_length;
          if ((int)uVar2 <= (int)uVar6) {
            return;
          }
        } while (uVar6 < uVar2);
      }
      goto label_04572b35;
    }
  }
label_04572b30:
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_MainModule_Fields)pUVar8;
  il2cpp_runtime_helper_022b2c90();
label_04572b35:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)main.fields.m_ParticleSystem,(MethodInfo *)0x0);
  return;
}


// Effects.EffectSpawner$$OnSpawnEffectRPC
// il2cpp: void Effects_EffectSpawner__OnSpawnEffectRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571120

void Effects_EffectSpawner__OnSpawnEffectRPC
               (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               float scale,bool_conflict scaleSize,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *path;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *__this;
  undefined8 *puVar6;
  Il2CppObject *pIVar7;
  UnityEngine_ParticleSystem_MainModule_o main;
  System_Object_array *pSVar8;
  System_Object_array *settings_00;
  uint uVar9;
  MethodInfo_255A020 *method_00;
  long *plVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o value;
  float fVar16;
  float scale_00;
  undefined8 uVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  
  fVar11 = position.fields.z;
  uVar17 = position.fields._0_8_;
  auVar4._8_4_ = in_XMM0_Dc;
  auVar4._0_8_ = uVar17;
  auVar4._12_4_ = in_XMM0_Dd;
  pPVar18 = auVar4._8_8_;
  scale_00 = scale;
  if (g_data_057af084 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseEffect_AddComponent_BaseEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRendererEffect_AddComponent_LineRendererEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ThunderspearExplodeEffect_AddComponent_ThunderspearExplo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057af084 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x40);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar12 = rotation.fields.x;
  fVar13 = rotation.fields.y;
  fVar14 = rotation.fields.z;
  fVar15 = rotation.fields.w;
  position_00.fields.z = fVar11;
  position_00.fields.x = (float)(int)uVar17;
  position_00.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
  fVar16 = fVar11;
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                     (path,name,position_00,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo_255A020 *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
  bVar5 = System_String__op_Equality(name,(System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = *(MethodInfo_255A020 **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
    bVar5 = System_String__op_Equality(name,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = *(MethodInfo_255A020 **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
      bVar5 = System_String__op_Equality(name,(System_String_o *)method_00,(MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_04571368;
      if ((char)bVar5 == '\0') {
        puVar6 = &MethodInfo_BaseEffect_AddComponent_BaseEffect;
      }
      else {
        puVar6 = &MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect;
      }
    }
    else {
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_04571368;
      puVar6 = &MethodInfo_LineRendererEffect_AddComponent_LineRendererEffect;
    }
  }
  else {
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_04571368;
    puVar6 = &MethodInfo_ThunderspearExplodeEffect_AddComponent_ThunderspearExplo;
  }
  method_00 = (MethodInfo_255A020 *)*puVar6;
  pIVar7 = UnityEngine_GameObject__AddComponent_object_(__this,method_00);
  if (pIVar7 == (Il2CppObject *)0x0) {
label_04571368:
    uVar3 = il2cpp_runtime_helper_022b2c90();
    info_00.fields._4_4_ = scale_00;
    info_00.fields.timeInt = (int32_t)fVar16;
    info_00.fields.Sender = (Photon_Realtime_Player_o *)uVar17;
    info_00.fields.photonView = pPVar18;
    rotation_00.fields.y = fVar13;
    rotation_00.fields.x = fVar12;
    rotation_00.fields.w = fVar15;
    rotation_00.fields.z = fVar14;
    position_01.fields.z = fVar11;
    position_01.fields.x = (float)(int)uVar3;
    position_01.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
              ((System_String_o *)method_00,position_01,rotation_00,scale,settings_00,info_00,
               (MethodInfo *)0x0);
    return;
  }
  (*pIVar7->klass->vtable[4].methodPtr)
            (0x41200000,pIVar7,info.fields.Sender,settings,pIVar7->klass->vtable[4].method);
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)
       UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  plVar10 = (long *)main.fields.m_ParticleSystem;
  if (g_data_057af085 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    plVar10 = &TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057af085 = '\x01';
  }
  if (main.fields.m_ParticleSystem != (UnityEngine_ParticleSystem_o *)0x0) {
    value.fields.y = scale_00;
    value.fields.x = scale_00;
    value.fields.z = scale_00;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)main.fields.m_ParticleSystem,value,(MethodInfo *)0x0);
    if ((char)scaleSize == '\0') {
      return;
    }
    pSVar8 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)main.fields.m_ParticleSystem,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    plVar10 = (long *)main.fields.m_ParticleSystem;
    if (pSVar8 != (System_Object_array *)0x0) {
      iVar1 = (int)pSVar8->max_length;
      if (iVar1 < 1) {
        return;
      }
      uVar9 = 0;
      if (iVar1 != 0) {
        do {
          plVar10 = (long *)(UnityEngine_Transform_o *)0x0;
          if ((UnityEngine_ParticleSystem_o *)pSVar8->m_Items[(int)uVar9] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_04572b30;
          main = UnityEngine_ParticleSystem__get_main
                           ((UnityEngine_ParticleSystem_o *)pSVar8->m_Items[(int)uVar9],(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Utility_Util__ScaleParticleStartSize(main,scale_00,(MethodInfo *)0x0);
          Utility_Util__ScaleParticleStartSpeed(main,scale_00,(MethodInfo *)0x0);
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar8->max_length;
          if ((int)uVar2 <= (int)uVar9) {
            return;
          }
        } while (uVar9 < uVar2);
      }
      goto label_04572b35;
    }
  }
label_04572b30:
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_MainModule_Fields)plVar10;
  il2cpp_runtime_helper_022b2c90();
label_04572b35:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)main.fields.m_ParticleSystem,(MethodInfo *)0x0);
  return;
}


// Effects.EffectSpawner$$ScaleEffect
// il2cpp: void Effects_EffectSpawner__ScaleEffect (UnityEngine_Transform_o* transform, float scale, bool scaleSize, const MethodInfo* method);
// 0x4572a30

void Effects_EffectSpawner__ScaleEffect
               (UnityEngine_Transform_o *transform,float scale,bool_conflict scaleSize,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o value;
  
  pUVar5 = transform;
  if (g_data_057af085 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    pUVar5 = (UnityEngine_Transform_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057af085 = '\x01';
  }
  if (transform != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = scale;
    value.fields.x = scale;
    value.fields.z = scale;
    UnityEngine_Transform__set_localScale(transform,value,(MethodInfo *)0x0);
    if ((char)scaleSize == '\0') {
      return;
    }
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)transform,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    pUVar5 = transform;
    if (pSVar3 != (System_Object_array *)0x0) {
      iVar1 = (int)pSVar3->max_length;
      if (iVar1 < 1) {
        return;
      }
      uVar4 = 0;
      if (iVar1 != 0) {
        do {
          pUVar5 = (UnityEngine_Transform_o *)0x0;
          if ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_04572b30;
          transform = (UnityEngine_Transform_o *)
                      UnityEngine_ParticleSystem__get_main
                                ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4],(MethodInfo *)0x0
                                );
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Utility_Util__ScaleParticleStartSize
                    ((UnityEngine_ParticleSystem_MainModule_o)transform,scale,(MethodInfo *)0x0);
          Utility_Util__ScaleParticleStartSpeed
                    ((UnityEngine_ParticleSystem_MainModule_o)transform,scale,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar2 = (uint)pSVar3->max_length;
          if ((int)uVar2 <= (int)uVar4) {
            return;
          }
        } while (uVar4 < uVar2);
      }
      goto label_04572b35;
    }
  }
label_04572b30:
  transform = pUVar5;
  il2cpp_runtime_helper_022b2c90();
label_04572b35:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)transform,(MethodInfo *)0x0);
  return;
}


// Effects.EffectSpawner$$.ctor
// il2cpp: void Effects_EffectSpawner___ctor (Effects_EffectSpawner_o* __this, const MethodInfo* method);
// 0x4572b40

void Effects_EffectSpawner___ctor(Effects_EffectSpawner_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


