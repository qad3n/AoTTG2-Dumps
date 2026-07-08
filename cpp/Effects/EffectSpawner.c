// Type: Effects.EffectSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Effects/EffectSpawner.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Effects/EffectSpawner.cs  [CHANGED since prior version]
// --------------------------------

// Effects.EffectSpawner$$Spawn
// il2cpp: void Effects_EffectSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, const MethodInfo* method);
// 0x423ddd0

void Effects_EffectSpawner__Spawn
               (System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,bool_conflict scaleSize,
               System_Object_array *settings,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 local_95;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_68 = rotation.fields._8_8_;
  local_58 = rotation.fields._0_8_;
  local_94 = position.fields.z;
  local_78._8_4_ = in_XMM0_Dc;
  local_78._0_8_ = position.fields._0_8_;
  local_78._12_4_ = in_XMM0_Dd;
  local_90 = scale;
  if (DAT_05705190 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SpawnEffectRPC");
    DAT_05705190 = '\x01';
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,6);
  if (parameters == (System_Object_array *)0x0) {
LAB_0423e08f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (name != (System_String_o *)0x0) {
    lVar1 = il2cpp_runtime_glue(name,(((parameters->obj).klass)->_1).element_class);
    if (lVar1 == 0) goto LAB_0423e080;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)name;
    il2cpp_runtime_glue(parameters->m_Items,name);
    local_88 = local_78._0_8_;
    local_80 = local_94;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_88);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_0423e080;
    }
    if ((uint)parameters->max_length < 2) goto LAB_0423e07b;
    parameters->m_Items[1] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
    uStack_38 = (undefined4)local_68;
    uStack_34 = (undefined4)((ulong)local_68 >> 0x20);
    local_40 = (undefined4)local_58;
    uStack_3c = local_58._4_4_;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Quaternion,&local_40);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_0423e080;
    }
    if ((uint)parameters->max_length < 3) goto LAB_0423e07b;
    parameters->m_Items[2] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
    local_8c = local_90;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_8c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_0423e080;
    }
    if ((uint)parameters->max_length < 4) goto LAB_0423e07b;
    parameters->m_Items[3] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items + 3,pIVar2);
    local_95 = (undefined1)scaleSize;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_95);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) goto LAB_0423e080;
    }
    if (4 < (uint)parameters->max_length) {
      parameters->m_Items[4] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 4,pIVar2);
      if (settings != (System_Object_array *)0x0) {
        lVar1 = il2cpp_runtime_glue(settings,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
LAB_0423e080:
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if (5 < (uint)parameters->max_length) {
        parameters->m_Items[5] = &settings->obj;
        il2cpp_runtime_glue(parameters->m_Items + 5,settings);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"SpawnEffectRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0423e08f;
      }
    }
  }
LAB_0423e07b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Effects.EffectSpawner$$OnSpawnEffectRPC
// il2cpp: void Effects_EffectSpawner__OnSpawnEffectRPC (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c980

void Effects_EffectSpawner__OnSpawnEffectRPC
               (System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,bool_conflict scaleSize,
               System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  undefined8 *puVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *transform;
  MethodInfo *method_00;
  
  if (DAT_05705191 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_BaseEffect_AddComponent_BaseEffect);
    il2cpp_init_method_metadata(&MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect);
    il2cpp_init_method_metadata(&MethodInfo_LineRendererEffect_AddComponent_LineRendererEffe);
    il2cpp_init_method_metadata(&MethodInfo_ThunderspearExplodeEffect_AddComponent_Thundersp);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_05705191 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x40);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,name,position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Equality
                      (name,*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Equality
                        (name,*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_0423cbc8;
      if ((char)bVar1 == '\0') {
        puVar2 = &MethodInfo_BaseEffect_AddComponent_BaseEffect;
      }
      else {
        puVar2 = &MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect;
      }
    }
    else {
      if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_0423cbc8;
      puVar2 = &MethodInfo_LineRendererEffect_AddComponent_LineRendererEffe;
    }
  }
  else {
    if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_0423cbc8;
    puVar2 = &MethodInfo_ThunderspearExplodeEffect_AddComponent_Thundersp;
  }
  pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this,(MethodInfo_24F0EB0 *)*puVar2);
  if (pIVar3 != (Il2CppObject *)0x0) {
    (*pIVar3->klass->vtable[4].methodPtr)
              (0x41200000,pIVar3,info.fields.Sender,settings,pIVar3->klass->vtable[4].method);
    transform = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    Effects_EffectSpawner__ScaleEffect(transform,scale,scaleSize & 0xff,method_00);
    return;
  }
LAB_0423cbc8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Effects.EffectSpawner$$ScaleEffect
// il2cpp: void Effects_EffectSpawner__ScaleEffect (UnityEngine_Transform_o* transform, float scale, bool scaleSize, const MethodInfo* method);
// 0x423e0a0

void Effects_EffectSpawner__ScaleEffect
               (UnityEngine_Transform_o *transform,float scale,bool_conflict scaleSize,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_ParticleSystem_MainModule_o main;
  uint uVar4;
  UnityEngine_Vector3_o value;
  
  if (DAT_05705192 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem___GetComponentsInChildren_Particl);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05705192 = '\x01';
  }
  if (transform != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = scale;
    value.fields.x = scale;
    value.fields.z = scale;
    UnityEngine_Transform__set_localScale(transform,value,(MethodInfo *)0x0);
    if ((char)scaleSize != '\0') {
      pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)transform,MethodInfo_ParticleSystem___GetComponentsInChildren_Particl);
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_0423e1a0;
      iVar1 = (int)pSVar3->max_length;
      if (0 < iVar1) {
        uVar4 = 0;
        if (iVar1 != 0) {
          do {
            if ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4] ==
                (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0423e1a0;
            main = UnityEngine_ParticleSystem__get_main
                             ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4],
                              (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Utility_Util__ScaleParticleStartSize(main,scale,(MethodInfo *)0x0);
            Utility_Util__ScaleParticleStartSpeed(main,scale,(MethodInfo *)0x0);
            uVar4 = uVar4 + 1;
            uVar2 = (uint)pSVar3->max_length;
            if ((int)uVar2 <= (int)uVar4) {
              return;
            }
          } while (uVar4 < uVar2);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    return;
  }
LAB_0423e1a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Effects.EffectSpawner$$.ctor
// il2cpp: void Effects_EffectSpawner___ctor (Effects_EffectSpawner_o* __this, const MethodInfo* method);
// 0x423e1b0

void Effects_EffectSpawner___ctor(Effects_EffectSpawner_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


