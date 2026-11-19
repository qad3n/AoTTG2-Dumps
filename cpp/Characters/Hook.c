// Type: Characters.Hook
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/Hook.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Hook.cs
// --------------------------------

// Characters.Hook$$CreateHook
// il2cpp: Characters_Hook_o* Characters_Hook__CreateHook (Characters_Human_o* owner, bool left, int32_t id, float maxLiveTime, bool gun, const MethodInfo* method);
// 0x5be9d70

Characters_Hook_o *
Characters_Hook__CreateHook
          (Characters_Human_o *owner,bool left,int32_t id,float maxLiveTime,bool gun,MethodInfo *method)

{
  Characters_HumanComponentCache_o *pCVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *p;
  Characters_Hook_o *pCVar3;
  
  if (Il2CppMethodInitialized_075475ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    Il2CppMethodInitialized_075475ed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (owner != (Characters_Human_o *)0x0) {
      p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar2,p,(MethodInfo *)0x0);
        pCVar3 = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Hook);
        if (pCVar3 != (Characters_Hook_o *)0x0) {
          (pCVar3->fields)._left = left;
          (pCVar3->fields)._owner = owner;
          Il2CppCodeGenWriteBarrier(&(pCVar3->fields)._owner);
          (pCVar3->fields)._maxLiveTime = maxLiveTime;
          (pCVar3->fields)._id = id;
          pCVar1 = (owner->fields).HumanCache;
          if (left) {
            if (gun) {
              if (pCVar1 == (Characters_HumanComponentCache_o *)0x0) goto label_05be9ec2;
              pUVar2 = (pCVar1->fields).HookLeftAnchorGun;
            }
            else {
              if (pCVar1 == (Characters_HumanComponentCache_o *)0x0) goto label_05be9ec2;
              pUVar2 = (pCVar1->fields).HookLeftAnchorDefault;
            }
          }
          else if (gun) {
            if (pCVar1 == (Characters_HumanComponentCache_o *)0x0) goto label_05be9ec2;
            pUVar2 = (pCVar1->fields).HookRightAnchorGun;
          }
          else {
            if (pCVar1 == (Characters_HumanComponentCache_o *)0x0) goto label_05be9ec2;
            pUVar2 = (pCVar1->fields).HookRightAnchorDefault;
          }
          (pCVar3->fields).Anchor = pUVar2;
          Il2CppCodeGenWriteBarrier(&(pCVar3->fields).Anchor);
          return pCVar3;
        }
      }
    }
  }
label_05be9ec2:
  ThrowNullReferenceException();
}


// Characters.Hook$$Awake
// il2cpp: void Characters_Hook__Awake (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5be9ed0

void Characters_Hook__Awake(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o **targetAddress;
  UnityEngine_Material_o **targetAddress_00;
  System_String_o *path;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_LineRenderer_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  
  if (Il2CppMethodInitialized_075475ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Particles/Materials/HookMat");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Particles/Prefabs/HookParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"HookEnd");
    Il2CppMethodInitialized_075475ee = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    targetAddress = &(__this->fields)._renderer;
    (__this->fields)._renderer = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar3 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,"Human/Particles/Materials/HookMat",true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    targetAddress_00 = &(__this->fields)._defaultMaterial;
    (__this->fields)._defaultMaterial = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(__this_00,*targetAddress_00,(MethodInfo *)0x0);
      pUVar2 = *targetAddress;
      if (pUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(pUVar2,0,(MethodInfo *)0x0);
        pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"Human/Particles/Prefabs/HookParticle",
                            true,false,
                            (MethodInfo_3665790 *)
                            MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar1,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
          (__this->fields)._particles = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._particles);
          pUVar4 = (__this->fields)._particles;
          if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0)
            ;
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Transform__Find(pUVar5,"HookEnd",(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                (__this->fields)._endSprite = pUVar1;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._endSprite);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$SetSkin
// il2cpp: void Characters_Hook__SetSkin (Characters_Hook_o* __this, float tiling, const MethodInfo* method);
// 0x5bea110

void Characters_Hook__SetSkin(Characters_Hook_o *__this,float tiling,MethodInfo *method)

{
  (__this->fields)._tiling = tiling;
  return;
}


// Characters.Hook$$UpdateSkin
// il2cpp: void Characters_Hook__UpdateSkin (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bea120

void Characters_Hook__UpdateSkin(Characters_Hook_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_Material_o *__this_02;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o UVar4;
  float local_38;
  float fStack_34;
  
  if ((__this->fields)._tiling <= 0.0) {
    return;
  }
  UVar3 = Characters_Hook__GetHookPosition(__this,method);
  __this_00 = (__this->fields).Anchor;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    local_38 = UVar3.fields.x;
    fStack_34 = UVar3.fields.y;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    fStack_34 = fStack_34 - UVar4.fields.y;
    fVar2 = UVar3.fields.z - UVar4.fields.z;
    local_38 = local_38 - UVar4.fields.x;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar2 = fStack_34 * fStack_34 + local_38 * local_38 + fVar2 * fVar2;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
      pfVar1 = &(__this->fields)._lastLength;
      if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
        return;
      }
    }
    else {
      fVar2 = SQRT(fVar2);
      pfVar1 = &(__this->fields)._lastLength;
      if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
        return;
      }
    }
    (__this->fields)._lastLength = fVar2;
    __this_01 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if ((__this_01 != (UnityEngine_Renderer_o *)0x0) &&
       (__this_02 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Material_o *)0x0)) {
      value.fields.y = 1.0;
      value.fields.x = fVar2 * (__this->fields)._tiling;
      UnityEngine_Material__set_mainTextureScale(__this_02,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$OnSetHookState
// il2cpp: void Characters_Hook__OnSetHookState (Characters_Hook_o* __this, int32_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bea330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bea4e4: jmp 0x5bea45a

void Characters_Hook__OnSetHookState
               (Characters_Hook_o *__this,int32_t state,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method
               )

{
  uint32_t uVar1;
  Characters_Human_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  Settings_SoundSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o PVar8;
  Photon_Pun_PhotonMessageInfo_Fields PStack_30;
  
  if (Il2CppMethodInitialized_075475ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075475ef = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (((pCVar2 == (Characters_Human_o *)0x0) ||
      (pUVar3 = (pCVar2->fields).Cache, pUVar3 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) {
label_05bea4e9:
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar4->fields)._Owner_k__BackingField) {
    (__this->fields).State = state;
    (__this->fields)._currentLiveTime = 0.0;
    if (state - 3U < 2) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar5 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar6 = (pSVar5->fields).HookRetractEffect, pSVar6 == (Settings_BoolSetting_o *)0x0))
      goto label_05bea4e9;
      if ((pSVar6->fields)._value != false) {
        uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
        if ((__this->fields)._left == false) {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
          }
          pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight;
          uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
          }
          pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft;
          uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&PStack_30,(MethodInfo *)0x0);
        PVar8.fields.Sender = PStack_30.Sender;
        PVar8.fields.timeInt = PStack_30.timeInt;
        PVar8.fields._4_4_ = PStack_30._4_4_;
        PVar8.fields.photonView = PStack_30.photonView;
        (*(pCVar2->klass->vtable)._86_PlaySoundRPC.methodPtr)
                  (pCVar2,pSVar7,PVar8,(pCVar2->klass->vtable)._86_PlaySoundRPC.method);
      }
    }
    __this_00 = (__this->fields)._endSprite;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05bea4e9;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  return;
}


// Characters.Hook$$SetHookStateLocal
// il2cpp: void Characters_Hook__SetHookStateLocal (Characters_Hook_o* __this, int32_t state, const MethodInfo* method);
// 0x5bea4f0

void Characters_Hook__SetHookStateLocal(Characters_Hook_o *__this,int32_t state,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).State == 0) {
    return;
  }
  (__this->fields).State = state;
  (__this->fields)._currentLiveTime = 0.0;
  __this_00 = (__this->fields)._endSprite;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  return;
}


// Characters.Hook$$OnSetHooking
// il2cpp: void Characters_Hook__OnSetHooking (Characters_Hook_o* __this, UnityEngine_Vector3_o baseVelocity, UnityEngine_Vector3_o relativeVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bea530
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bea6d8: jmp 0x5beaa6f
// asm:   0x5bea9f0: jmp 0x5bea7a0

void Characters_Hook__OnSetHooking
               (Characters_Hook_o *__this,UnityEngine_Vector3_o baseVelocity,
               UnityEngine_Vector3_o relativeVelocity,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar4;
  int iVar7;
  uint32_t uVar8;
  Characters_Human_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector3_array *pUVar12;
  UnityEngine_LineRenderer_o *__this_01;
  Settings_SoundSettings_o *pSVar13;
  Settings_BoolSetting_o *pSVar14;
  System_String_o *pSVar15;
  UnityEngine_ParticleSystem_o *pUVar16;
  UnityEngine_GameObject_o *__this_02;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_Fields item;
  Photon_Pun_PhotonMessageInfo_o PVar18;
  float fVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Vector3_StaticFields *pUVar21;
  MethodInfo *pMVar22;
  float fVar23;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar24;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar25;
  undefined1 auVar26 [16];
  UnityEngine_Vector3_o UVar27;
  Photon_Pun_PhotonMessageInfo_Fields PStack_50;
  undefined1 auStack_38 [24];
  
  fVar25 = baseVelocity.fields.x;
  fVar23 = baseVelocity.fields.y;
  if (g_data_075475f0 == '\0') {
    auStack_38._8_4_ = in_XMM0_Dc;
    auStack_38._0_8_ = baseVelocity.fields._0_8_;
    auStack_38._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    g_data_075475f0 = '\x01';
    fVar25 = (float)auStack_38._0_4_;
    fVar23 = (float)auStack_38._4_4_;
  }
  pCVar9 = (__this->fields)._owner;
  if (((pCVar9 == (Characters_Human_o *)0x0) ||
      (pUVar10 = (pCVar9->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar11 = (pUVar10->fields).PhotonView, pPVar11 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05beaa6f;
  if (info.fields.Sender != (pPVar11->fields)._Owner_k__BackingField) {
    return;
  }
  (__this->fields).State = 1;
  (__this->fields)._baseVelocity.fields.x = fVar25;
  (__this->fields)._baseVelocity.fields.y = fVar23;
  (__this->fields)._baseVelocity.fields.z = baseVelocity.fields.z;
  (__this->fields)._relativeVelocity.fields.x = relativeVelocity.fields.x;
  (__this->fields)._relativeVelocity.fields.y = relativeVelocity.fields.y;
  (__this->fields)._relativeVelocity.fields.z = relativeVelocity.fields.z;
  pUVar20 = (__this->fields).Anchor;
  if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_05beaa6f;
  UVar27 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
  (__this->fields)._hookPosition.fields.x = UVar27.fields.x;
  (__this->fields)._hookPosition.fields.y = UVar27.fields.y;
  (__this->fields)._hookPosition.fields.z = UVar27.fields.z;
  (__this->fields)._hasHookParent = false;
  __this_00 = (__this->fields)._nodes;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05beaa6f;
  iVar7 = (__this_00->fields)._version;
  (__this_00->fields)._version = iVar7 + 1;
  (__this_00->fields)._size = 0;
  (__this->fields)._currentLiveTime = 0.0;
  pMVar22 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  pUVar1 = &(__this->fields)._hookPosition;
  fVar23 = (pUVar1->fields).x;
  fVar19 = (pUVar1->fields).y;
  fVar25 = (__this->fields)._hookPosition.fields.z;
  item = pUVar1->fields;
  (__this_00->fields)._version = iVar7 + 2;
  pUVar12 = (__this_00->fields)._items;
  if (pUVar12 == (UnityEngine_Vector3_array *)0x0) goto label_05beaa6f;
  if ((int)pUVar12->max_length == 0) {
    System_Collections_Generic_List_Vector3___AddWithResize
              (__this_00,(UnityEngine_Vector3_o)item,
               (MethodInfo_39FF950 *)pMVar22->klass->rgctx_data[0xe].method);
    __this_01 = (__this->fields)._renderer;
  }
  else {
    (__this_00->fields)._size = 1;
    pUVar12->m_Items[0].fields.x = fVar23;
    pUVar12->m_Items[0].fields.y = fVar19;
    pUVar12->m_Items[0].fields.z = fVar25;
    __this_01 = (__this->fields)._renderer;
  }
  if (__this_01 == (UnityEngine_LineRenderer_o *)0x0) goto label_05beaa6f;
  UnityEngine_LineRenderer__set_endWidth(__this_01,0.1,(MethodInfo *)0x0);
  UnityEngine_LineRenderer__set_startWidth(__this_01,0.1,(MethodInfo *)0x0);
  pSVar13 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar13 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar14 = (pSVar13->fields).OldHookEffect, pSVar14 == (Settings_BoolSetting_o *)0x0)) goto label_05beaa6f;
  pCVar9 = (__this->fields)._owner;
  uVar8 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  if ((pSVar14->fields)._value == false) {
    if (uVar8 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    pSVar15 = TypeInfo_Characters_HumanSounds->static_fields->HookLaunch;
    uVar8 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (uVar8 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    }
    pSVar15 = TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch;
    uVar8 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  if (uVar8 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&PStack_50,(MethodInfo *)0x0);
  if (pCVar9 == (Characters_Human_o *)0x0) goto label_05beaa6f;
  PVar18.fields.Sender = PStack_50.Sender;
  PVar18.fields.timeInt = PStack_50.timeInt;
  PVar18.fields._4_4_ = PStack_50._4_4_;
  PVar18.fields.photonView = PStack_50.photonView;
  (*(pCVar9->klass->vtable)._86_PlaySoundRPC.methodPtr)
            (pCVar9,pSVar15,PVar18,(pCVar9->klass->vtable)._86_PlaySoundRPC.method);
  pUVar16 = (__this->fields)._particles;
  if (pUVar16 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05beaa6f;
  pMVar22 = (MethodInfo *)0x0;
  pUVar20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
  UVar27 = Characters_Hook__GetHookPosition(__this,pMVar22);
  if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_05beaa6f;
  UnityEngine_Transform__set_position(pUVar20,UVar27,(MethodInfo *)0x0);
  pUVar16 = (__this->fields)._particles;
  if (pUVar16 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05beaa6f;
  pUVar20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
  uVar2 = (__this->fields)._baseVelocity.fields.x;
  uVar5 = (__this->fields)._baseVelocity.fields.y;
  uVar3 = (__this->fields)._relativeVelocity.fields.x;
  uVar6 = (__this->fields)._relativeVelocity.fields.y;
  fVar25 = (__this->fields)._baseVelocity.fields.z * 50.0 + (__this->fields)._relativeVelocity.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    PStack_50.timeInt = 0;
    PStack_50._4_4_ = 0;
  }
  else {
    PStack_50.timeInt = 0;
    PStack_50._4_4_ = 0;
  }
  PStack_50.timeInt = 0;
  PStack_50._4_4_ = 0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    PStack_50.timeInt = 0;
    PStack_50._4_4_ = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar26._0_4_ = (float)uVar2 * 50.0 + (float)uVar3;
  auVar26._4_4_ = (float)uVar5 * 50.0 + (float)uVar6;
  auVar26._8_8_ = 0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar24 = 0;
  fVar23 = fVar25 * fVar25 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
  if (fVar23 < 0.0) {
    fVar23 = sqrtf(fVar23);
    uVar24 = extraout_XMM0_Db;
    if (1e-05 < fVar23) goto label_05bea91a;
label_05bea8e5:
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar25 = (pUVar21->zeroVector).fields.z;
  }
  else {
    fVar23 = SQRT(fVar23);
    if (fVar23 <= 1e-05) goto label_05bea8e5;
label_05bea91a:
    fVar25 = fVar25 / fVar23;
    auVar17._4_4_ = fVar23;
    auVar17._0_4_ = fVar23;
    auVar17._8_4_ = uVar24;
    auVar17._12_4_ = uVar24;
    auVar26 = divps(auVar26,auVar17);
    PStack_50.timeInt = auVar26._0_4_;
    PStack_50._4_4_ = auVar26._4_4_;
    pUVar21 = (UnityEngine_Vector3_StaticFields *)&PStack_50;
  }
  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
    uVar4._0_4_ = (pUVar21->zeroVector).fields.x;
    uVar4._4_4_ = (pUVar21->zeroVector).fields.y;
    UVar27.fields.z = -fVar25;
    UVar27.fields.x = (float)(int)(uVar4 ^ 0x8000000080000000);
    UVar27.fields.y = (float)(int)((uVar4 ^ 0x8000000080000000) >> 0x20);
    UnityEngine_Transform__set_forward(pUVar20,UVar27,(MethodInfo *)0x0);
    pUVar16 = (__this->fields)._particles;
    if (pUVar16 != (UnityEngine_ParticleSystem_o *)0x0) {
      UnityEngine_ParticleSystem__Stop_69c2810(pUVar16,(MethodInfo *)0x0);
      pCVar9 = (__this->fields)._owner;
      if (pCVar9 != (Characters_Human_o *)0x0) {
        if ((pCVar9->fields).EffectsEnabled != false) {
          pUVar16 = (__this->fields)._particles;
          if (pUVar16 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05beaa6f;
          UnityEngine_ParticleSystem__Play_69c2630(pUVar16,(MethodInfo *)0x0);
        }
        __this_02 = (__this->fields)._endSprite;
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05beaa6f:
  ThrowNullReferenceException();
}


// Characters.Hook$$OnSetHooked
// il2cpp: void Characters_Hook__OnSetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, int32_t photonViewId, int32_t objectId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5beaa80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5beab65: jmp 0x5beac46
// asm:   0x5beab97: jmp 0x5beac46

void Characters_Hook__OnSetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o position,int32_t photonViewId,int32_t objectId
               ,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  char cVar1;
  Characters_Human_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  bool bVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *transform;
  Map_MapObject_o *pMVar8;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,objectId);
  if (Il2CppMethodInitialized_075475f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075475f1 = '\x01';
    method_00 = extraout_RDX;
  }
  pCVar2 = (__this->fields)._owner;
  if (((pCVar2 == (Characters_Human_o *)0x0) ||
      (pUVar3 = (pCVar2->fields).Cache, pUVar3 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar6 = (pUVar3->fields).PhotonView, pPVar6 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05beac68;
  if (info.fields.Sender != (pPVar6->fields)._Owner_k__BackingField) {
    return;
  }
  if (photonViewId == -1) {
    transform = (UnityEngine_Transform_o *)0x0;
  }
  else {
    pPVar6 = Photon_Pun_PhotonView__Find(photonViewId,(MethodInfo *)0x0);
    if ((pPVar6 == (Photon_Pun_PhotonView_o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto label_05beac68;
    transform = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  if (objectId != -1) {
    if ((((Il2CppClass *)TypeInfo_Map_MapManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      cVar1 = TypeInfo_Map_MapManager->static_fields->MapLoaded;
      method_00 = extraout_RDX_01;
    }
    else {
      cVar1 = *(char *)((Il2CppClass *)TypeInfo_Map_MapManager)->static_fields;
    }
    if (cVar1 != '\0') {
      if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05beac68:
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar4,objectId,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      method_00 = extraout_RDX_02;
      if (bVar5) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (((pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
            (pMVar8 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar4,objectId,
                                 (MethodInfo_4A0F690 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
            pMVar8 == (Map_MapObject_o *)0x0)) ||
           (pUVar7 = (pMVar8->fields).GameObject, pUVar7 == (UnityEngine_GameObject_o *)0x0))
        goto label_05beac68;
        transform = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        method_00 = extraout_RDX_03;
      }
    }
  }
  Characters_Hook__OnSetHooked_5aeac70(__this,position,transform,method_00);
  return;
}


// Characters.Hook$$OnSetHooked
// il2cpp: void Characters_Hook__OnSetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x5beac70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5beb254: jmp 0x5beb1a4

void Characters_Hook__OnSetHooked_5aeac70
               (Characters_Hook_o *__this,UnityEngine_Vector3_o position,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  Characters_BaseCharacter_o **targetAddress_00;
  float fVar1;
  byte bVar2;
  int iVar3;
  uint32_t uVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_Human_o *pCVar8;
  UI_InGameMenu_o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  Settings_SoundSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Characters_BaseCharacter_c *pCVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *__this_02;
  Photon_Pun_PhotonMessageInfo_o PVar13;
  bool bVar14;
  int32_t score;
  UnityEngine_Transform_o *__this_03;
  Characters_BaseCharacter_o *pCVar15;
  UnityEngine_Vector3_o UVar16;
  Photon_Pun_PhotonMessageInfo_Fields local_48;
  
  if (Il2CppMethodInitialized_075475f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Hook");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075475f2 = '\x01';
  }
  (__this->fields).State = 2;
  (__this->fields)._hookPosition.fields.x = position.fields.x;
  (__this->fields)._hookPosition.fields.y = position.fields.y;
  (__this->fields)._hookPosition.fields.z = position.fields.z;
  targetAddress = &(__this->fields).HookParent;
  (__this->fields).HookParent = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields).HookCharacter;
  (__this->fields).HookCharacter = (Characters_BaseCharacter_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  (__this->fields)._hasHookParent = false;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)transform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    *targetAddress = transform;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if (transform == (UnityEngine_Transform_o *)0x0) goto label_05beb259;
    UVar16 = UnityEngine_Transform__InverseTransformPoint(transform,position,(MethodInfo *)0x0);
    (__this->fields)._hookPosition.fields.x = UVar16.fields.x;
    (__this->fields)._hookPosition.fields.y = UVar16.fields.y;
    (__this->fields)._hookPosition.fields.z = UVar16.fields.z;
    (__this->fields)._hasHookParent = true;
    (__this->fields)._lastWorldHookPosition.fields.x = position.fields.x;
    (__this->fields)._lastWorldHookPosition.fields.y = position.fields.y;
    (__this->fields)._lastWorldHookPosition.fields.z = position.fields.z;
    __this_03 = UnityEngine_Transform__get_root(transform,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_05beb259;
    pCVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this_03,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    *targetAddress_00 = pCVar15;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar5 == (Settings_InGameSet_o *)0x0) ||
        (pSVar6 = (pSVar5->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar7 = (pSVar6->fields).HookDamageMultiplier, pSVar7 == (Settings_IntSetting_o *)0x0))
    goto label_05beb259;
    if (0 < (pSVar7->fields)._value) {
      pCVar15 = *targetAddress_00;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar14) && (pCVar15 = *targetAddress_00, pCVar15 != (Characters_BaseCharacter_o *)0x0)) {
        bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar2 <= (pCVar15->klass->_2).typeHierarchyDepth) &&
           ((pCVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
        {
          pCVar8 = (__this->fields)._owner;
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar14 = GameManagers_TeamInfo__SameTeam_5858900
                             (pCVar15,(Characters_BaseCharacter_o *)pCVar8,(MethodInfo *)0x0);
          if (!bVar14) {
            pCVar8 = (__this->fields)._owner;
            if (pCVar8 == (Characters_Human_o *)0x0) goto label_05beb259;
            bVar14 = (*(pCVar8->klass->vtable)._74_IsMine.methodPtr)
                               (pCVar8,(pCVar8->klass->vtable)._74_IsMine.method);
            if (bVar14) {
              pCVar8 = (__this->fields)._owner;
              if (((pCVar8 == (Characters_Human_o *)0x0) ||
                  (pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
                  pSVar5 == (Settings_InGameSet_o *)0x0)) ||
                 ((pSVar6 = (pSVar5->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0 ||
                  (pSVar7 = (pSVar6->fields).HookDamageMultiplier, pSVar7 == (Settings_IntSetting_o *)0x0))))
              goto label_05beb259;
              fVar1 = (pCVar8->fields).CurrentSpeed;
              iVar3 = (pSVar7->fields)._value;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              score = System_Math__Max_54bad40(10,(int)(fVar1 * (float)iVar3),(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_05beb259;
              bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
              if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              UI_InGameMenu__ShowKillScore(__this_00,score,false,(MethodInfo *)0x0);
              pCVar15 = *targetAddress_00;
              if (pCVar15 == (Characters_BaseCharacter_o *)0x0) goto label_05beb259;
              (*(pCVar15->klass->vtable)._95_GetHit.methodPtr)
                        (pCVar15,(Characters_BaseCharacter_o *)(__this->fields)._owner,score,
                         "Hook","",
                         (pCVar15->klass->vtable)._95_GetHit.method);
            }
          }
        }
      }
    }
  }
  (__this->fields)._currentLiveTime = 0.0;
  __this_01 = (__this->fields)._renderer;
  if (__this_01 == (UnityEngine_LineRenderer_o *)0x0) goto label_05beb259;
  UnityEngine_LineRenderer__set_endWidth(__this_01,0.1,(MethodInfo *)0x0);
  UnityEngine_LineRenderer__set_startWidth(__this_01,0.1,(MethodInfo *)0x0);
  pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar9 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar10 = (pSVar9->fields).HookImpactEffect, pSVar10 == (Settings_BoolSetting_o *)0x0))
  goto label_05beb259;
  if ((pSVar10->fields)._value != false) {
    pCVar15 = *targetAddress_00;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar14) && (*targetAddress_00 != (Characters_BaseCharacter_o *)0x0)) {
      pCVar11 = (*targetAddress_00)->klass;
      bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar11->_2).typeHierarchyDepth < bVar2) ||
         ((pCVar11->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      goto label_05beb162;
      pCVar8 = (__this->fields)._owner;
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar12 = TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud;
      uVar4 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
    }
    else {
label_05beb162:
      pCVar8 = (__this->fields)._owner;
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar12 = TypeInfo_Characters_HumanSounds->static_fields->HookImpact;
      uVar4 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&local_48,(MethodInfo *)0x0);
    if (pCVar8 == (Characters_Human_o *)0x0) goto label_05beb259;
    PVar13.fields.Sender = local_48.Sender;
    PVar13.fields.timeInt = local_48.timeInt;
    PVar13.fields._4_4_ = local_48._4_4_;
    PVar13.fields.photonView = local_48.photonView;
    (*(pCVar8->klass->vtable)._86_PlaySoundRPC.methodPtr)
              (pCVar8,pSVar12,PVar13,(pCVar8->klass->vtable)._86_PlaySoundRPC.method);
  }
  __this_02 = (__this->fields)._endSprite;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
    return;
  }
label_05beb259:
  ThrowNullReferenceException();
}


// Characters.Hook$$SetHookState
// il2cpp: void Characters_Hook__SetHookState (Characters_Hook_o* __this, int32_t state, const MethodInfo* method);
// 0x5beb270

void Characters_Hook__SetHookState(Characters_Hook_o *__this,int32_t state,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_39;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_075475f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHookStateRPC");
    Il2CppMethodInitialized_075475f3 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) {
label_05beb411:
    ThrowNullReferenceException();
  }
  __this_00 = (pUVar2->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  local_39 = (__this->fields)._left;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_39);
  if (parameters == (System_Object_array *)0x0) goto label_05beb411;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05beb41b;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_34 = (__this->fields)._id;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05beb41b;
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = pIVar3;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      local_38 = state;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
label_05beb41b:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetHookStateRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_05beb411;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.Hook$$SetHooking
// il2cpp: void Characters_Hook__SetHooking (Characters_Hook_o* __this, UnityEngine_Vector3_o baseVelocity, UnityEngine_Vector3_o relativeVelocity, const MethodInfo* method);
// 0x5beb430

void Characters_Hook__SetHooking
               (Characters_Hook_o *__this,UnityEngine_Vector3_o baseVelocity,
               UnityEngine_Vector3_o relativeVelocity,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 local_75;
  float local_74;
  float local_70;
  int32_t local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined1 local_38 [16];
  
  local_74 = relativeVelocity.fields.z;
  local_48 = relativeVelocity.fields._0_8_;
  local_70 = baseVelocity.fields.z;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = baseVelocity.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075475f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHookingRPC");
    Il2CppMethodInitialized_075475f4 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) {
label_05beb66f:
    ThrowNullReferenceException();
  }
  __this_00 = (pUVar2->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  local_75 = (__this->fields)._left;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_75);
  if (parameters == (System_Object_array *)0x0) goto label_05beb66f;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05beb674;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_6c = (__this->fields)._id;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_6c);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05beb674;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_05beb66a;
    parameters->m_Items[1] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    local_58 = local_38._0_8_;
    local_50 = local_70;
    pIVar3 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_58);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05beb674;
    }
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = pIVar3;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
      local_68 = local_48;
      local_60 = local_74;
      pIVar3 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_68);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
label_05beb674:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((parameters->max_length & 0xfffffffc) != 0) {
        parameters->m_Items[3] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetHookingRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_05beb66f;
      }
    }
  }
label_05beb66a:
  ThrowIndexOutOfRangeException();
}


// Characters.Hook$$SetHooked
// il2cpp: void Characters_Hook__SetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, UnityEngine_Transform_o* t, int32_t viewId, int32_t objectId, const MethodInfo* method);
// 0x5beb690

void Characters_Hook__SetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o position,UnityEngine_Transform_o *t,
               int32_t viewId,int32_t objectId,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  UnityEngine_Transform_o *x;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  Characters_Human_o *pCVar5;
  Characters_Human_o *human;
  MethodInfo *method_00;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  undefined1 local_71;
  float local_70;
  int32_t local_6c;
  int32_t local_68;
  int32_t local_64;
  int32_t local_60;
  int32_t local_5c;
  undefined1 local_58 [16];
  UnityEngine_Transform_o *local_48;
  undefined8 local_40;
  float local_38;
  
  local_70 = position.fields.z;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075475f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHookedRPC");
    Il2CppMethodInitialized_075475f5 = '\x01';
  }
  pCVar5 = (__this->fields)._owner;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05beba15;
  pUVar1 = (pCVar5->fields).Cache;
  local_6c = objectId;
  local_68 = viewId;
  local_48 = t;
  if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05beba15;
  __this_00 = (pUVar1->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  local_71 = (__this->fields)._left;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_71);
  if (parameters == (System_Object_array *)0x0) goto label_05beba15;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05beba1f;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_5c = (__this->fields)._id;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_5c);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05beba1f;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_05beba1a;
    parameters->m_Items[1] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    local_40 = local_58._0_8_;
    local_38 = local_70;
    pIVar3 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_40);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05beba1f;
    }
    if ((uint)parameters->max_length < 3) goto label_05beba1a;
    parameters->m_Items[2] = pIVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
    local_60 = local_68;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_60);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05beba1f;
    }
    if ((parameters->max_length & 0xfffffffc) != 0) {
      parameters->m_Items[3] = pIVar3;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
      local_64 = local_6c;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_64);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
label_05beba1f:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (4 < (uint)parameters->max_length) {
        parameters->m_Items[4] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetHookedRPC",1,parameters,(MethodInfo *)0x0);
          pCVar5 = (__this->fields)._owner;
          if (pCVar5 != (Characters_Human_o *)0x0) {
            position_00.fields.z = local_70;
            position_00.fields.x = (float)local_58._0_4_;
            position_00.fields.y = (float)local_58._4_4_;
            Characters_Human__OnHooked(pCVar5,(__this->fields)._left,position_00,(MethodInfo *)0x0);
            x = local_48;
            position_01.fields.z = local_70;
            position_01.fields.x = (float)local_58._0_4_;
            position_01.fields.y = (float)local_58._4_4_;
            Characters_Hook__OnSetHooked_5aeac70(__this,position_01,local_48,method_00);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar2) {
              if (x == (UnityEngine_Transform_o *)0x0) goto label_05beba15;
              pCVar5 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)x,
                                  (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar2) {
                pCVar5 = (__this->fields)._owner;
                bVar2 = (__this->fields)._left;
                human = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)x,
                                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
                if (pCVar5 == (Characters_Human_o *)0x0) goto label_05beba15;
                position_02.fields.z = local_70;
                position_02.fields.x = (float)local_58._0_4_;
                position_02.fields.y = (float)local_58._4_4_;
                Characters_Human__OnHookedHuman(pCVar5,bVar2,position_02,human,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
label_05beba15:
        ThrowNullReferenceException();
      }
    }
  }
label_05beba1a:
  ThrowIndexOutOfRangeException();
}


// Characters.Hook$$MoveHookParent
// il2cpp: void Characters_Hook__MoveHookParent (Characters_Hook_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, const MethodInfo* method);
// 0x5beba30

void Characters_Hook__MoveHookParent
               (Characters_Hook_o *__this,UnityEngine_Transform_o *from,UnityEngine_Transform_o *to,
               MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (Il2CppMethodInitialized_075475f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475f6 = '\x01';
  }
  if ((__this->fields)._hasHookParent != false) {
    pUVar1 = (__this->fields).HookParent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      targetAddress = &(__this->fields).HookParent;
      pUVar1 = *targetAddress;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
label_05bebb0f:
        ThrowNullReferenceException();
      }
      bVar2 = UnityEngine_Transform__IsChildOf(pUVar1,from,(MethodInfo *)0x0);
      if (bVar2) {
        UVar3 = Characters_Hook__GetHookPosition(__this,(MethodInfo *)from);
        (__this->fields).HookParent = to;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (to == (UnityEngine_Transform_o *)0x0) goto label_05bebb0f;
        UVar3 = UnityEngine_Transform__InverseTransformPoint(to,UVar3,(MethodInfo *)0x0);
        (__this->fields)._hookPosition.fields.x = UVar3.fields.x;
        (__this->fields)._hookPosition.fields.y = UVar3.fields.y;
        (__this->fields)._hookPosition.fields.z = UVar3.fields.z;
      }
    }
  }
  return;
}


// Characters.Hook$$FinishDisable
// il2cpp: void Characters_Hook__FinishDisable (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bebb20

void Characters_Hook__FinishDisable(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._renderer;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(__this_00,0,(MethodInfo *)0x0);
    (__this->fields).State = 0;
    __this_01 = (__this->fields)._endSprite;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateHooking
// il2cpp: void Characters_Hook__UpdateHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bebb60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bebccc: jmp 0x5bebd12

void Characters_Hook__UpdateHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_LineRenderer_o *pUVar4;
  uint index;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o position;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075475f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_075475f7 = '\x01';
  }
  pSVar2 = (__this->fields)._nodes;
  if (pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    if ((pSVar2->fields)._size < 1) {
      return;
    }
    pUVar3 = (__this->fields).Anchor;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._nodes;
      if (pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        UVar7 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar2,0,(MethodInfo_39FF5D0 *)
                                    MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
        pSVar2 = (__this->fields)._nodes;
        if ((pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
           (pUVar4 = (__this->fields)._renderer, pUVar4 != (UnityEngine_LineRenderer_o *)0x0)) {
          index = 0;
          UnityEngine_LineRenderer__set_positionCount(pUVar4,(pSVar2->fields)._size,(MethodInfo *)0x0);
          __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
          if (__this_00 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_48 = UVar6.fields.x;
            fStack_44 = UVar6.fields.y;
            local_38 = UVar7.fields.x;
            fStack_34 = UVar7.fields.y;
            local_48 = local_48 - local_38;
            fStack_44 = fStack_44 - fStack_34;
            do {
              iVar1 = *(int *)&(__this_00->fields).Variables;
              if (iVar1 <= (int)index) {
                if (iVar1 < 2) {
                  return;
                }
                pUVar3 = (__this->fields).Anchor;
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = (__this->fields)._renderer;
                  UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                    UnityEngine_LineRenderer__SetPosition(pUVar4,1,UVar6,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              pUVar4 = (__this->fields)._renderer;
              method_00 = (MethodInfo *)(ulong)index;
              UVar8 = System_Collections_Generic_List_Vector3___get_Item
                                ((System_Collections_Generic_List_Vector3__o *)__this_00,index,
                                 (MethodInfo_39FF5D0 *)
                                 MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
              fVar5 = powf(__this_00,0.75,(float)(int)index,method_00);
              if (pUVar4 == (UnityEngine_LineRenderer_o *)0x0) break;
              position.fields.z = UVar8.fields.z + fVar5 * (UVar6.fields.z - UVar7.fields.z);
              local_38 = UVar8.fields.x;
              fStack_34 = UVar8.fields.y;
              position.fields.y = fStack_34 + fVar5 * fStack_44;
              position.fields.x = local_38 + fVar5 * local_48;
              UnityEngine_LineRenderer__SetPosition(pUVar4,index,position,(MethodInfo *)0x0);
              index = index + 1;
              __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
            } while (__this_00 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0);
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateHooked
// il2cpp: void Characters_Hook__UpdateHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bebd20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bebe67: jmp 0x5bebe80
// asm:   0x5bec069: nop dword ptr [rax]
// asm:   0x5bec345: jmp 0x5bec384

void Characters_Hook__UpdateHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  Characters_Human_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  Cameras_BaseCamera_o *pCVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Vector3_StaticFields *pUVar19;
  uint index;
  MethodInfo *method_00;
  System_Math_c *pSVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float extraout_XMM0_Dd_06;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o value_00;
  undefined1 local_118 [116];
  float fStack_a4;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_68;
  UnityEngine_Vector3_Fields local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_075475f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075475f8 = '\x01';
  }
  UVar33 = Characters_Hook__GetHookPosition(__this,method);
  local_118._20_4_ = UVar33.fields.z;
  fStack_70 = (float)extraout_XMM0_Dc;
  local_78 = UVar33.fields._0_8_;
  fStack_6c = (float)extraout_XMM0_Dd;
  pUVar17 = (__this->fields).Anchor;
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05bec893;
  UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  pCVar7 = (__this->fields)._owner;
  if ((pCVar7 == (Characters_Human_o *)0x0) ||
     (pUVar8 = (pCVar7->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) goto label_05bec893;
  local_118._40_4_ = extraout_XMM0_Dc_00;
  local_118._32_8_ = UVar33.fields._0_8_;
  local_118._44_4_ = extraout_XMM0_Dd_00;
  __this_00 = (pUVar8->fields).Rigidbody;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bec893;
  UVar34 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
  fVar24 = UVar34.fields.z;
  fStack_80 = (float)extraout_XMM0_Dc_01;
  local_88 = (undefined1  [8])UVar34.fields._0_8_;
  fStack_7c = (float)extraout_XMM0_Dd_01;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  local_98 = (float)local_78._0_4_ - (float)local_118._32_4_;
  fStack_94 = (float)local_78._4_4_ - (float)local_118._36_4_;
  fStack_90 = fStack_70 - (float)local_118._40_4_;
  fStack_8c = fStack_6c - (float)local_118._44_4_;
  fVar27 = (float)local_118._20_4_ - UVar33.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_118._16_4_ = fVar27 * fVar27 + fStack_94 * fStack_94 + local_98 * local_98;
  if ((float)local_118._16_4_ < 0.0) {
    fVar21 = sqrtf((float)local_118._16_4_);
  }
  else {
    fVar21 = SQRT((float)local_118._16_4_);
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_118._24_4_ =
       fVar24 * fVar24 +
       (float)local_88._4_4_ * (float)local_88._4_4_ + (float)local_88._0_4_ * (float)local_88._0_4_;
  if ((float)local_118._24_4_ < 0.0) {
    fVar22 = sqrtf((float)local_118._24_4_);
  }
  else {
    fVar22 = SQRT((float)local_118._24_4_);
  }
  fVar22 = (float)(int)((fVar21 + fVar22) / 5.0);
  fVar21 = 8.40779e-45;
  if ((int)fVar22 < 6) {
    fVar21 = fVar22;
  }
  fVar22 = 2.8026e-45;
  if (2 < (int)fVar21) {
    fVar22 = fVar21;
  }
  pUVar9 = (__this->fields)._renderer;
  if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) goto label_05bec893;
  UnityEngine_LineRenderer__set_positionCount(pUVar9,(int32_t)fVar22,(MethodInfo *)0x0);
  pUVar17 = (__this->fields).Anchor;
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05bec893;
  pUVar9 = (__this->fields)._renderer;
  UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) goto label_05bec893;
  method_00 = (MethodInfo *)0x0;
  UnityEngine_LineRenderer__SetPosition(pUVar9,0,UVar33,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05bebf73;
label_05bebfad:
    pSVar20 = TypeInfo_System_Math;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= (float)local_118._16_4_) goto label_05bebf81;
label_05bebfc0:
    fVar21 = sqrtf((float)local_118._16_4_);
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05bebfad;
label_05bebf73:
    pSVar20 = TypeInfo_System_Math;
    if ((float)local_118._16_4_ < 0.0) goto label_05bebfc0;
label_05bebf81:
    fVar21 = SQRT((float)local_118._16_4_);
  }
  local_118._64_4_ = powf((CustomLogic_CustomLogicMathBuiltin_o *)pSVar20,fVar21,0.3,method_00);
  local_118._28_4_ = fVar22;
  if (2 < (uint)fVar22) {
    local_118._92_4_ = (BADTYPE)((uint)fVar22 >> 1);
    local_118._84_4_ = (BADTYPE)(int)fVar22;
    local_88._4_4_ = (float)local_88._4_4_ * 0.001;
    local_88._0_4_ = (float)local_88._0_4_ * 0.001;
    fStack_80 = fStack_80 * 0.0;
    fStack_7c = fStack_7c * 0.0;
    index = 1;
    local_118._88_4_ = SQRT((float)local_118._24_4_);
    local_48 = (float)local_118._64_4_;
    fStack_44 = (float)local_118._64_4_;
    fStack_40 = (float)local_118._64_4_;
    fStack_3c = (float)local_118._64_4_;
    do {
      if (Il2CppMethodInitialized_07541ba3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_07541ba3 = '\x01';
      }
      iVar1 = index - ((uint)fVar22 >> 1);
      pSVar20 = TypeInfo_System_Math;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar16 = -iVar1;
      if (iVar16 < 0) {
        iVar16 = iVar1;
      }
      local_118._112_4_ =
           powf((CustomLogic_CustomLogicMathBuiltin_o *)pSVar20,
                ((float)local_118._92_4_ - (float)iVar16) / (float)local_118._92_4_,0.5,method_00);
      fStack_a4 = extraout_XMM0_Db;
      uStack_a0 = CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar6 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar21 = (float)local_118._88_4_;
      if ((float)local_118._24_4_ < 0.0) {
        fVar21 = sqrtf((float)local_118._24_4_);
      }
      fVar23 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar23 = fVar23 + fVar23;
      local_118._48_4_ = fVar23;
      fVar28 = (float)(int)index;
      local_118._32_16_ = ZEXT416((uint)fVar28);
      local_118._96_4_ = fVar28 * 0.7 + fVar23 * 1.2;
      local_68 = sinf(fVar28 * 0.5 + fVar23);
      local_118._96_4_ = sinf((float)local_118._96_4_);
      local_118._100_4_ = extraout_XMM0_Db_00;
      local_118._104_4_ = extraout_XMM0_Dc_03;
      local_118._108_4_ = extraout_XMM0_Dd_03;
      fVar23 = sinf((float)local_118._32_4_ * 0.3 + (float)local_118._48_4_ * 0.8);
      pUVar17 = (__this->fields).Anchor;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05bec893;
      fVar26 = (fVar21 + (float)local_118._64_4_) * 0.0015 * (float)local_118._112_4_;
      local_118._48_4_ = fVar23 * fVar26 * 0.3;
      UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar29 = fVar26 * local_68;
      fVar26 = fVar26 * (float)local_118._96_4_;
      fVar21 = UVar33.fields.x;
      fVar23 = UVar33.fields.y;
      fVar28 = UVar33.fields.z;
      if (g_data_0753e72c == '\0') {
        local_118._104_4_ = extraout_XMM0_Dc_04;
        local_118._96_8_ = UVar33.fields._0_8_;
        local_118._108_4_ = extraout_XMM0_Dd_04;
        local_68 = UVar33.fields.z;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e72c = '\x01';
        fVar21 = (float)local_118._96_4_;
        fVar23 = (float)local_118._100_4_;
        fVar28 = local_68;
      }
      pUVar9 = (__this->fields)._renderer;
      if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) goto label_05bec893;
      fVar32 = (float)local_118._32_4_ / (float)local_118._84_4_;
      pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar33.fields.z =
           ((pUVar19->upVector).fields.z * (float)local_118._64_4_ * -0.05 * (float)local_118._112_4_ +
           fVar27 * fVar32 + (float)local_118._48_4_ + fVar28) -
           (float)local_118._112_4_ * fVar24 * 0.001 * (float)local_118._64_4_;
      uVar2 = (pUVar19->upVector).fields.x;
      uVar4 = (pUVar19->upVector).fields.y;
      UVar33.fields.x =
           ((float)uVar2 * local_48 * -0.05 * (float)local_118._112_4_ +
           fVar32 * local_98 + fVar29 * 0.3 + fVar21) -
           (float)local_88._0_4_ * (float)local_118._112_4_ * local_48;
      UVar33.fields.y =
           ((float)uVar4 * fStack_44 * -0.05 * (float)local_118._112_4_ +
           fVar32 * fStack_94 + fVar26 * 0.3 + fVar23) -
           (float)local_88._4_4_ * (float)local_118._112_4_ * fStack_44;
      method_00 = (MethodInfo *)(ulong)index;
      UnityEngine_LineRenderer__SetPosition(pUVar9,index,UVar33,(MethodInfo *)0x0);
      iVar1 = index - (int)fVar22;
      index = index + 1;
    } while (iVar1 != -2);
  }
  pUVar9 = (__this->fields)._renderer;
  if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) goto label_05bec893;
  UVar34.fields.z = (float)local_118._20_4_;
  UVar34.fields.x = (float)local_78._0_4_;
  UVar34.fields.y = (float)local_78._4_4_;
  UnityEngine_LineRenderer__SetPosition(pUVar9,local_118._28_4_ - 1,UVar34,(MethodInfo *)0x0);
  pUVar10 = (__this->fields)._endSprite;
  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_05bec893;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05bec3e5;
label_05bec465:
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05bec3fc;
label_05bec48f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= (float)local_118._16_4_) goto label_05bec40e;
label_05bec4a6:
    fVar24 = sqrtf((float)local_118._16_4_);
    uVar25 = extraout_XMM0_Db_01;
    if (fVar24 <= 1e-05) goto label_05bec425;
label_05bec4be:
    fVar21 = fVar27 / fVar24;
    auVar14._4_4_ = fStack_94;
    auVar14._0_4_ = local_98;
    auVar14._8_4_ = fStack_90;
    auVar14._12_4_ = fStack_8c;
    auVar31._4_4_ = fVar24;
    auVar31._0_4_ = fVar24;
    auVar31._8_4_ = uVar25;
    auVar31._12_4_ = uVar25;
    auVar31 = divps(auVar14,auVar31);
    local_118._0_4_ = auVar31._0_4_;
    local_118._4_4_ = auVar31._4_4_;
    pUVar19 = (UnityEngine_Vector3_StaticFields *)local_118;
  }
  else {
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05bec465;
label_05bec3e5:
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05bec48f;
label_05bec3fc:
    if ((float)local_118._16_4_ < 0.0) goto label_05bec4a6;
label_05bec40e:
    uVar25 = 0;
    fVar24 = SQRT((float)local_118._16_4_);
    if (1e-05 < fVar24) goto label_05bec4be;
label_05bec425:
    pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar21 = (pUVar19->zeroVector).fields.z;
  }
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05bec893;
  uVar3 = (pUVar19->zeroVector).fields.x;
  uVar5 = (pUVar19->zeroVector).fields.y;
  value_00.fields.z = (float)local_118._20_4_ + fVar21 * 0.1;
  value_00.fields.x = (float)local_78._0_4_ + (float)uVar3 * 0.1;
  value_00.fields.y = (float)local_78._4_4_ + (float)uVar5 * 0.1;
  UnityEngine_Transform__set_position(pUVar17,value_00,(MethodInfo *)0x0);
  pUVar10 = (__this->fields)._endSprite;
  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_05bec893;
  pUVar17 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05bec551;
label_05bec5d1:
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05bec568;
label_05bec5fb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= (float)local_118._16_4_) goto label_05bec57a;
label_05bec612:
    fVar24 = sqrtf((float)local_118._16_4_);
    uVar25 = extraout_XMM0_Db_02;
    if (fVar24 <= 1e-05) goto label_05bec591;
label_05bec62a:
    fVar27 = fVar27 / fVar24;
    auVar15._4_4_ = fStack_94;
    auVar15._0_4_ = local_98;
    auVar15._8_4_ = fStack_90;
    auVar15._12_4_ = fStack_8c;
    auVar13._4_4_ = fVar24;
    auVar13._0_4_ = fVar24;
    auVar13._8_4_ = uVar25;
    auVar13._12_4_ = uVar25;
    auVar31 = divps(auVar15,auVar13);
    local_118._0_4_ = auVar31._0_4_;
    local_118._4_4_ = auVar31._4_4_;
    pUVar19 = (UnityEngine_Vector3_StaticFields *)local_118;
  }
  else {
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05bec5d1;
label_05bec551:
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05bec5fb;
label_05bec568:
    if ((float)local_118._16_4_ < 0.0) goto label_05bec612;
label_05bec57a:
    uVar25 = 0;
    fVar24 = SQRT((float)local_118._16_4_);
    if (1e-05 < fVar24) goto label_05bec62a;
label_05bec591:
    pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar27 = (pUVar19->zeroVector).fields.z;
  }
  pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar11 == (Cameras_BaseCamera_o *)0x0) ||
      (pUVar8 = (pCVar11->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pUVar18 = (pUVar8->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_05bec893;
  local_118._112_4_ = (pUVar19->zeroVector).fields.x;
  fStack_a4 = (pUVar19->zeroVector).fields.y;
  uStack_a0 = 0;
  UVar33 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
  local_118._40_4_ = extraout_XMM0_Dc_05;
  local_118._32_8_ = UVar33.fields._0_8_;
  local_118._44_4_ = extraout_XMM0_Dd_05;
  pUVar10 = (__this->fields)._endSprite;
  if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar18 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
     pUVar18 == (UnityEngine_Transform_o *)0x0)) goto label_05bec893;
  UVar34 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
  fVar24 = UVar34.fields.x;
  fVar21 = UVar34.fields.y;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_118._56_4_ = extraout_XMM0_Dc_06;
    local_118._48_8_ = UVar34.fields._0_8_;
    local_118._60_4_ = extraout_XMM0_Dd_06;
    local_118._64_4_ = UVar34.fields.z;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    fVar24 = (float)local_118._48_4_;
    fVar21 = (float)local_118._52_4_;
    fVar22 = (float)local_118._56_4_;
    fVar23 = (float)local_118._60_4_;
    fVar26 = (float)local_118._64_4_;
    fVar28 = (float)local_118._64_4_;
  }
  else {
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    fVar22 = extraout_XMM0_Dc_06;
    fVar23 = extraout_XMM0_Dd_06;
    fVar26 = UVar34.fields.z;
    fVar28 = (float)local_118._64_4_;
  }
  local_118._64_4_ = fVar26;
  local_118._0_4_ = 0.0;
  local_118._4_4_ = 0.0;
  fVar26 = (float)local_118._64_4_;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    local_118._52_4_ = fVar21;
    local_118._48_4_ = fVar24;
    local_118._56_4_ = fVar22;
    local_118._60_4_ = fVar23;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar24 = (float)local_118._48_4_;
    fVar21 = (float)local_118._52_4_;
    fVar22 = (float)local_118._56_4_;
    fVar23 = (float)local_118._60_4_;
    fVar26 = (float)local_118._64_4_;
    fVar28 = (float)local_118._64_4_;
  }
  local_118._64_4_ = fVar28;
  auVar30._0_4_ = (float)local_118._32_4_ - fVar24;
  auVar30._4_4_ = (float)local_118._36_4_ - fVar21;
  auVar30._8_4_ = (float)local_118._40_4_ - fVar22;
  auVar30._12_4_ = (float)local_118._44_4_ - fVar23;
  fVar26 = UVar33.fields.z - fVar26;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    local_118._32_16_ = auVar30;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    auVar30 = (undefined1  [16])local_118._32_16_;
  }
  uVar25 = 0;
  fVar24 = fVar26 * fVar26 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
  if (fVar24 < 0.0) {
    local_118._32_16_ = auVar30;
    fVar24 = sqrtf(fVar24);
    uVar25 = extraout_XMM0_Db_03;
    auVar30 = (undefined1  [16])local_118._32_16_;
    if (fVar24 <= 1e-05) goto label_05bec76e;
label_05bec7b8:
    local_58.z = fVar26 / fVar24;
    auVar12._4_4_ = fVar24;
    auVar12._0_4_ = fVar24;
    auVar12._8_4_ = uVar25;
    auVar12._12_4_ = uVar25;
    auVar31 = divps(auVar30,auVar12);
    local_118._0_4_ = auVar31._0_4_;
    local_118._4_4_ = auVar31._4_4_;
    pUVar19 = (UnityEngine_Vector3_StaticFields *)local_118;
  }
  else {
    fVar24 = SQRT(fVar24);
    if (1e-05 < fVar24) goto label_05bec7b8;
label_05bec76e:
    pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_58.z = (pUVar19->zeroVector).fields.z;
  }
  local_58.x = (pUVar19->zeroVector).fields.x;
  local_58.y = (pUVar19->zeroVector).fields.y;
  local_118._0_8_ = stack0xffffffffffffff58;
  local_118._8_4_ = fVar27;
  value = UnityEngine_Quaternion__Internal_LookRotation
                    ((UnityEngine_Vector3_o *)local_118,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation(pUVar17,value,(MethodInfo *)0x0);
    return;
  }
label_05bec893:
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateDisablingHooking
// il2cpp: void Characters_Hook__UpdateDisablingHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bec8a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5beca5f: nop 
// asm:   0x5becadc: jmp 0x5becbd0

void Characters_Hook__UpdateDisablingHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_LineRenderer_o *pUVar10;
  UnityEngine_GameObject_o *__this_00;
  uint uVar11;
  MethodInfo *pMVar12;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o position;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075475f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_075475f9 = '\x01';
  }
  UVar16 = Characters_Hook__GetHookPosition(__this,method);
  uVar2 = (__this->fields)._baseVelocity.fields.x;
  uVar4 = (__this->fields)._baseVelocity.fields.y;
  fVar14 = (__this->fields)._baseVelocity.fields.z;
  uVar3 = (__this->fields)._relativeVelocity.fields.x;
  uVar5 = (__this->fields)._relativeVelocity.fields.y;
  fVar15 = (__this->fields)._relativeVelocity.fields.z;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pMVar12 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  pSVar7 = (__this->fields)._nodes;
  if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar8 = (pSVar7->fields)._items;
    if (pUVar8 != (UnityEngine_Vector3_array *)0x0) {
      local_48 = UVar16.fields.x;
      fStack_44 = UVar16.fields.y;
      UVar17.fields.x = local_48 + (float)uVar2 + (float)uVar3 * fVar13;
      UVar17.fields.y = fStack_44 + (float)uVar4 + (float)uVar5 * fVar13;
      UVar17.fields.z = UVar16.fields.z + fVar14 + fVar15 * fVar13;
      uVar11 = (pSVar7->fields)._size;
      if (uVar11 < (uint)pUVar8->max_length) {
        (pSVar7->fields)._size = uVar11 + 1;
        pUVar8->m_Items[(int)uVar11].fields.x = UVar17.fields.x;
        pUVar8->m_Items[(int)uVar11].fields.y = UVar17.fields.y;
        pUVar8->m_Items[(int)uVar11].fields.z = UVar17.fields.z;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar7,UVar17,(MethodInfo_39FF950 *)pMVar12->klass->rgctx_data[0xe].method);
      }
      pUVar9 = (__this->fields).Anchor;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UVar16 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        pSVar7 = (__this->fields)._nodes;
        if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          UVar17 = System_Collections_Generic_List_Vector3___get_Item
                             (pSVar7,0,(MethodInfo_39FF5D0 *)
                                       MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          pSVar7 = (__this->fields)._nodes;
          if ((pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
             (pUVar10 = (__this->fields)._renderer, pUVar10 != (UnityEngine_LineRenderer_o *)0x0)) {
            uVar11 = 0;
            UnityEngine_LineRenderer__set_positionCount(pUVar10,(pSVar7->fields)._size,(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
            if (__this_01 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
              local_58 = UVar16.fields.x;
              fStack_54 = UVar16.fields.y;
              local_48 = UVar17.fields.x;
              fStack_44 = UVar17.fields.y;
              local_58 = local_58 - local_48;
              fStack_54 = fStack_54 - fStack_44;
              do {
                iVar6 = *(int *)&(__this_01->fields).Variables;
                if (iVar6 <= (int)uVar11) {
                  if (1 < iVar6) {
                    pUVar9 = (__this->fields).Anchor;
                    if (pUVar9 == (UnityEngine_Transform_o *)0x0) break;
                    pUVar10 = (__this->fields)._renderer;
                    UVar16 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                    if (pUVar10 == (UnityEngine_LineRenderer_o *)0x0) break;
                    UnityEngine_LineRenderer__SetPosition(pUVar10,1,UVar16,(MethodInfo *)0x0);
                  }
                  fVar14 = (__this->fields)._currentLiveTime;
                  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                  fVar15 = fVar15 + fVar14;
                  (__this->fields)._currentLiveTime = fVar15;
                  pUVar10 = (__this->fields)._renderer;
                  if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
                    fVar14 = fVar15 * -0.2 + 0.1;
                    UnityEngine_LineRenderer__set_endWidth(pUVar10,fVar14,(MethodInfo *)0x0);
                    UnityEngine_LineRenderer__set_startWidth(pUVar10,fVar14,(MethodInfo *)0x0);
                    if ((__this->fields)._currentLiveTime <= 0.5) {
                      return;
                    }
                    pUVar10 = (__this->fields)._renderer;
                    if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
                      UnityEngine_LineRenderer__set_positionCount(pUVar10,0,(MethodInfo *)0x0);
                      (__this->fields).State = 0;
                      __this_00 = (__this->fields)._endSprite;
                      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                  break;
                }
                pUVar10 = (__this->fields)._renderer;
                pMVar12 = (MethodInfo *)(ulong)uVar11;
                UVar18 = System_Collections_Generic_List_Vector3___get_Item
                                   ((System_Collections_Generic_List_Vector3__o *)__this_01,uVar11,
                                    (MethodInfo_39FF5D0 *)
                                    MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                fVar14 = powf(__this_01,0.75,(float)(int)uVar11,pMVar12);
                if (pUVar10 == (UnityEngine_LineRenderer_o *)0x0) break;
                position.fields.z = UVar18.fields.z + fVar14 * (UVar16.fields.z - UVar17.fields.z);
                local_48 = UVar18.fields.x;
                fStack_44 = UVar18.fields.y;
                position.fields.y = fStack_44 + fVar14 * fStack_54;
                position.fields.x = local_48 + fVar14 * local_58;
                UnityEngine_LineRenderer__SetPosition(pUVar10,uVar11,position,(MethodInfo *)0x0);
                uVar11 = uVar11 + 1;
                __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
              } while (__this_01 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0);
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateDisablingHooked
// il2cpp: void Characters_Hook__UpdateDisablingHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5becbe0

void Characters_Hook__UpdateDisablingHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  
  pUVar1 = (__this->fields)._renderer;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    method_00 = (MethodInfo *)0x2;
    UnityEngine_LineRenderer__set_positionCount(pUVar1,2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._renderer;
    UVar4 = Characters_Hook__GetHookPosition(__this,method_00);
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__SetPosition(pUVar1,0,UVar4,(MethodInfo *)0x0);
      __this_00 = (__this->fields).Anchor;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = (__this->fields)._renderer;
        UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__SetPosition(pUVar1,1,UVar4,(MethodInfo *)0x0);
          fVar3 = (__this->fields)._currentLiveTime;
          fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar2 = fVar2 + fVar3;
          (__this->fields)._currentLiveTime = fVar2;
          pUVar1 = (__this->fields)._renderer;
          if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            fVar3 = fVar2 * -0.2 + 0.1;
            UnityEngine_LineRenderer__set_endWidth(pUVar1,fVar3,(MethodInfo *)0x0);
            UnityEngine_LineRenderer__set_startWidth(pUVar1,fVar3,(MethodInfo *)0x0);
            if ((__this->fields)._currentLiveTime <= 0.5) {
              return;
            }
            pUVar1 = (__this->fields)._renderer;
            if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_positionCount(pUVar1,0,(MethodInfo *)0x0);
              (__this->fields).State = 0;
              __this_01 = (__this->fields)._endSprite;
              if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$FixedUpdateHooking
// il2cpp: void Characters_Hook__FixedUpdateHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5becd20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bed7e9: jmp 0x5bed82f
// asm:   0x5bed869: jmp 0x5bed90e

void Characters_Hook__FixedUpdateHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_o *pUVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint32_t uVar22;
  Characters_Human_o *pCVar23;
  System_Collections_Generic_List_Vector3__o *pSVar24;
  UnityEngine_Vector2_Fields UVar25;
  undefined8 uVar26;
  UnityEngine_Vector3_array *pUVar27;
  Map_MapScriptBaseObject_o *pMVar28;
  undefined1 auVar29 [16];
  UnityEngine_Vector3_Fields item;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  MethodInfo *pMVar37;
  bool bVar38;
  int32_t iVar39;
  uint uVar40;
  UnityEngine_Vector3_StaticFields *pUVar41;
  UnityEngine_Collider_o *pUVar42;
  UnityEngine_GameObject_o *pUVar43;
  Characters_TitanProjectileDetection_o *__this_00;
  UnityEngine_Object_o *pUVar44;
  UnityEngine_Object_o *pUVar45;
  UnityEngine_Transform_o *t;
  UnityEngine_Transform_o *pUVar46;
  Photon_Pun_PhotonView_o *pPVar47;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  Map_MapObject_o *pMVar48;
  int32_t objectId;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  ulong uVar49;
  UnityEngine_RaycastHit_array *pUVar50;
  long lVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  UnityEngine_Vector3_o UVar59;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  undefined8 local_118;
  undefined1 local_f8 [32];
  float local_d8;
  float fStack_d4;
  undefined8 local_c8;
  undefined1 local_b0 [16];
  undefined8 uStack_a0;
  UnityEngine_Vector3_Fields UStack_98;
  float local_8c;
  float fStack_88;
  float fStack_84;
  UnityEngine_EntityId_Fields UStack_80;
  float local_78;
  UnityEngine_RaycastHit_o local_68;
  
  if (Il2CppMethodInitialized_075475fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TitanProjectileDetection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PunExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RaycastHelper);
    Il2CppMethodInitialized_075475fa = '\x01';
  }
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  UStack_80.m_Data = 0;
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  UStack_98.z = 0.0;
  local_8c = 0.0;
  local_b0._8_4_ = 0.0;
  local_b0._12_4_ = 0.0;
  uStack_a0._0_4_ = 0.0;
  uStack_a0._4_4_ = 0.0;
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  pCVar23 = (__this->fields)._owner;
  if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bedb4f;
  bVar38 = (*(pCVar23->klass->vtable)._74_IsMine.methodPtr)
                     (pCVar23,(pCVar23->klass->vtable)._74_IsMine.method);
  if (!bVar38) {
    uVar8 = (__this->fields)._hookPosition.fields.x;
    uVar16 = (__this->fields)._hookPosition.fields.y;
    fVar54 = (__this->fields)._hookPosition.fields.z;
    uVar9 = (__this->fields)._baseVelocity.fields.x;
    uVar17 = (__this->fields)._baseVelocity.fields.y;
    fVar56 = (__this->fields)._baseVelocity.fields.z;
    local_78 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar56 = fVar56 * local_78;
    uVar10 = (__this->fields)._relativeVelocity.fields.x;
    uVar18 = (__this->fields)._relativeVelocity.fields.y;
    UVar59.fields.z = (__this->fields)._relativeVelocity.fields.z;
    fVar52 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar59.fields.z = UVar59.fields.z * fVar52 + fVar56 * 50.0 + fVar54;
    UVar59.fields.x = fVar52 * (float)uVar10 + local_78 * (float)uVar9 * 50.0 + (float)uVar8;
    UVar59.fields.y = fVar52 * (float)uVar18 + local_78 * (float)uVar17 * 50.0 + (float)uVar16;
    (__this->fields)._hookPosition.fields.x = UVar59.fields.x;
    (__this->fields)._hookPosition.fields.y = UVar59.fields.y;
    (__this->fields)._hookPosition.fields.z = UVar59.fields.z;
    pMVar37 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    pSVar24 = (__this->fields)._nodes;
    if (pSVar24 != (System_Collections_Generic_List_Vector3__o *)0x0) {
      piVar1 = &(pSVar24->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar27 = (pSVar24->fields)._items;
      if (pUVar27 != (UnityEngine_Vector3_array *)0x0) {
        uVar40 = (pSVar24->fields)._size;
        if (uVar40 < (uint)pUVar27->max_length) {
          (pSVar24->fields)._size = uVar40 + 1;
          pUVar27->m_Items[(int)uVar40].fields.x = UVar59.fields.x;
          pUVar27->m_Items[(int)uVar40].fields.y = UVar59.fields.y;
          pUVar27->m_Items[(int)uVar40].fields.z = UVar59.fields.z;
          return;
        }
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar24,UVar59,(MethodInfo_39FF950 *)pMVar37->klass->rgctx_data[0xe].method);
        return;
      }
    }
    goto label_05bedb4f;
  }
  (__this->fields).HasOffset = false;
  uVar5 = (__this->fields)._hookPosition.fields.x;
  uVar13 = (__this->fields)._hookPosition.fields.y;
  fVar54 = (__this->fields)._hookPosition.fields.z;
  uVar6 = (__this->fields)._baseVelocity.fields.x;
  uVar14 = (__this->fields)._baseVelocity.fields.y;
  fVar56 = (__this->fields)._baseVelocity.fields.z;
  local_78 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar56 = fVar56 * local_78;
  uVar7 = (__this->fields)._relativeVelocity.fields.x;
  uVar15 = (__this->fields)._relativeVelocity.fields.y;
  UVar59.fields.z = (__this->fields)._relativeVelocity.fields.z;
  fVar52 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._hookPosition.fields.x =
       fVar52 * (float)uVar7 + local_78 * (float)uVar6 * 50.0 + (float)uVar5;
  (__this->fields)._hookPosition.fields.y =
       fVar52 * (float)uVar15 + local_78 * (float)uVar14 * 50.0 + (float)uVar13;
  (__this->fields)._hookPosition.fields.z = UVar59.fields.z * fVar52 + fVar56 * 50.0 + fVar54;
  pSVar24 = (__this->fields)._nodes;
  if (pSVar24 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05bedb4f;
  UVar59 = System_Collections_Generic_List_Vector3___get_Item
                     (pSVar24,(pSVar24->fields)._size + -1,
                      (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  UVar59.fields.z = UVar59.fields.z;
  fVar54 = UVar59.fields.x;
  fVar56 = UVar59.fields.y;
  pSVar24 = (__this->fields)._nodes;
  if (pSVar24 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05bedb4f;
  iVar21 = (pSVar24->fields)._size;
  fVar52 = extraout_XMM0_Dc;
  fVar53 = extraout_XMM0_Dd;
  if (1 < iVar21) {
    UVar59 = System_Collections_Generic_List_Vector3___get_Item
                       (pSVar24,iVar21 + -2,
                        (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UVar59.fields.z = UVar59.fields.z;
    fVar54 = UVar59.fields.x;
    fVar56 = UVar59.fields.y;
    fVar52 = extraout_XMM0_Dc_00;
    fVar53 = extraout_XMM0_Dd_00;
  }
  pUVar3 = &(__this->fields)._hookPosition;
  fVar30 = (pUVar3->fields).x;
  fVar31 = (__this->fields)._hookPosition.fields.y;
  uVar35 = (pUVar3->fields).x;
  uVar36 = (pUVar3->fields).y;
  fVar57 = (__this->fields)._hookPosition.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_b0._0_4_ = 0.0;
    local_b0._4_4_ = 0.0;
    fVar30 = (float)uVar35;
    fVar31 = (float)uVar36;
  }
  else {
    local_b0._0_4_ = 0.0;
    local_b0._4_4_ = 0.0;
  }
  local_b0._0_4_ = 0.0;
  local_b0._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_b0._0_4_ = 0.0;
    local_b0._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar58._0_4_ = fVar30 - fVar54;
  auVar58._4_4_ = fVar31 - fVar56;
  auVar58._8_4_ = 0.0 - fVar52;
  auVar58._12_4_ = 0.0 - fVar53;
  fVar57 = fVar57 - UVar59.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar52 = fVar57 * fVar57 + auVar58._4_4_ * auVar58._4_4_ + auVar58._0_4_ * auVar58._0_4_;
  if (fVar52 < 0.0) {
    fVar53 = sqrtf(fVar52);
    uVar55 = extraout_XMM0_Db;
    if (1e-05 < fVar53) goto label_05bed156;
label_05becff3:
    pUVar41 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar57 = (pUVar41->zeroVector).fields.z;
  }
  else {
    uVar55 = 0;
    fVar53 = SQRT(fVar52);
    if (fVar53 <= 1e-05) goto label_05becff3;
label_05bed156:
    fVar57 = fVar57 / fVar53;
    auVar29._4_4_ = fVar53;
    auVar29._0_4_ = fVar53;
    auVar29._8_4_ = uVar55;
    auVar29._12_4_ = uVar55;
    auVar58 = divps(auVar58,auVar29);
    local_b0._0_4_ = auVar58._0_4_;
    local_b0._4_4_ = auVar58._4_4_;
    pUVar41 = (UnityEngine_Vector3_StaticFields *)local_b0;
  }
  uVar11 = (pUVar41->zeroVector).fields.x;
  uVar19 = (pUVar41->zeroVector).fields.y;
  if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    pUVar50 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05bed739;
label_05bed1a7:
    uVar22 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar50 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05bed1a7;
label_05bed739:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar22 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar22 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (fVar52 < 0.0) {
    fVar52 = sqrtf(fVar52);
  }
  else {
    fVar52 = SQRT(fVar52);
  }
  iVar39 = UnityEngine_LayerMask__get_value
                     (&TypeInfo_Characters_Hook->static_fields->HookMask,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_RaycastHelper->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_RaycastHelper);
  }
  origin.fields.z = UVar59.fields.z;
  origin.fields.x = fVar54;
  origin.fields.y = fVar56;
  direction.fields.z = fVar57;
  direction.fields.x = (float)uVar11;
  direction.fields.y = (float)uVar19;
  uVar40 = Utility_RaycastHelper__SortedRaycast_5cf06d0
                     (origin,direction,pUVar50,fVar52,iVar39,(MethodInfo *)0x0);
  if (0 < (int)uVar40) {
    if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    pUVar50 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
    if (pUVar50 == (UnityEngine_RaycastHit_array *)0x0) goto label_05bedb4f;
    if ((int)pUVar50->max_length == 0) {
label_05bedb54:
      ThrowIndexOutOfRangeException();
    }
    local_b0._8_4_ = pUVar50->m_Items[0].fields.m_Point.fields.x;
    local_b0._12_4_ = pUVar50->m_Items[0].fields.m_Point.fields.y;
    uStack_a0 = *(undefined8 *)&pUVar50->m_Items[0].fields.m_Point.fields.z;
    UStack_98.x = pUVar50->m_Items[0].fields.m_Normal.fields.y;
    UStack_98.y = pUVar50->m_Items[0].fields.m_Normal.fields.z;
    uVar32 = pUVar50->m_Items[0].fields.m_FaceID;
    uVar33 = pUVar50->m_Items[0].fields.m_Distance;
    UVar25 = pUVar50->m_Items[0].fields.m_UV.fields;
    UStack_80.m_Data = pUVar50->m_Items[0].fields.m_Collider.fields.m_Data;
    fStack_88 = UVar25.x;
    fStack_84 = UVar25.y;
    lVar51 = 0x20;
    uVar49 = 0;
    UStack_98.z = (float)uVar32;
    local_8c = (float)uVar33;
    do {
      if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
      }
      pUVar50 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
      if (pUVar50 == (UnityEngine_RaycastHit_array *)0x0) goto label_05bedb4f;
      if ((uint)pUVar50->max_length <= uVar49) goto label_05bedb54;
      puVar2 = (undefined8 *)((long)pUVar50->m_Items + lVar51 + -0x20);
      local_68.fields.m_Point.fields._0_8_ = *puVar2;
      local_68.fields._8_8_ = puVar2[1];
      puVar2 = (undefined8 *)((long)pUVar50->m_Items + lVar51 + -0x10);
      local_68.fields.m_Normal.fields._4_8_ = *puVar2;
      uVar34 = puVar2[1];
      uVar26 = *(undefined8 *)((long)&pUVar50->m_Items[0].fields.m_Point.fields.x + lVar51);
      local_68.fields.m_Collider.fields.m_Data =
           (UnityEngine_EntityId_Fields)
           ((UnityEngine_EntityId_Fields *)((long)&pUVar50->m_Items[0].fields.m_Point.fields.z + lVar51))->
           m_Data;
      local_68.fields.m_UV.fields.x = (float)uVar26;
      local_68.fields.m_UV.fields.y = (float)((ulong)uVar26 >> 0x20);
      local_68.fields.m_FaceID = (uint32_t)uVar34;
      local_68.fields.m_Distance = (float)((ulong)uVar34 >> 0x20);
      pUVar42 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
      if ((pUVar42 == (UnityEngine_Collider_o *)0x0) ||
         (pUVar43 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar42,(MethodInfo *)0x0),
         pUVar43 == (UnityEngine_GameObject_o *)0x0)) goto label_05bedb4f;
      iVar39 = UnityEngine_GameObject__get_layer(pUVar43,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      iVar21 = TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection;
      pUVar42 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
      if (iVar39 == iVar21) {
        if (((pUVar42 == (UnityEngine_Collider_o *)0x0) ||
            (pUVar43 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar42,(MethodInfo *)0x0),
            pUVar43 == (UnityEngine_GameObject_o *)0x0)) ||
           (__this_00 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar43,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_TitanProjectileDetection
                                  ), __this_00 == (Characters_TitanProjectileDetection_o *)0x0))
        goto label_05bedb4f;
        Characters_TitanProjectileDetection__RegisterHook(__this_00,__this,(MethodInfo *)0x0);
      }
      else {
        if (pUVar42 == (UnityEngine_Collider_o *)0x0) goto label_05bedb4f;
        pUVar44 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar42,(MethodInfo *)0x0);
        pCVar23 = (__this->fields)._owner;
        if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bedb4f;
        pUVar45 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar23,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar38 = UnityEngine_Object__op_Equality(pUVar44,pUVar45,(MethodInfo *)0x0);
        if (!bVar38) {
          pCVar23 = (__this->fields)._owner;
          if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bedb4f;
          pCVar23 = (pCVar23->fields).BackHuman;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar38 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pCVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar38) {
            pUVar42 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
            if (pUVar42 == (UnityEngine_Collider_o *)0x0) goto label_05bedb4f;
            pUVar44 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar42,(MethodInfo *)0x0);
            pCVar23 = (__this->fields)._owner;
            if ((pCVar23 == (Characters_Human_o *)0x0) ||
               (pCVar23 = (pCVar23->fields).BackHuman, pCVar23 == (Characters_Human_o *)0x0))
            goto label_05bedb4f;
            pUVar45 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pCVar23,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar38 = UnityEngine_Object__op_Equality(pUVar44,pUVar45,(MethodInfo *)0x0);
            if (bVar38) goto label_05bed2f0;
          }
          pCVar23 = (__this->fields)._owner;
          if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bedb4f;
          if ((pCVar23->fields).CarryState == 1) {
            pCVar23 = (pCVar23->fields).Carrier;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar38 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pCVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar38) {
              pUVar42 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
              if (pUVar42 == (UnityEngine_Collider_o *)0x0) goto label_05bedb4f;
              pUVar44 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar42,(MethodInfo *)0x0);
              pCVar23 = (__this->fields)._owner;
              if ((pCVar23 == (Characters_Human_o *)0x0) ||
                 (pCVar23 = (pCVar23->fields).Carrier, pCVar23 == (Characters_Human_o *)0x0))
              goto label_05bedb4f;
              pUVar45 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pCVar23,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar38 = UnityEngine_Object__op_Equality(pUVar44,pUVar45,(MethodInfo *)0x0);
              if (bVar38) goto label_05bed2f0;
            }
          }
          fStack_88 = local_68.fields.m_UV.fields.x;
          fStack_84 = local_68.fields.m_UV.fields.y;
          UStack_80 = local_68.fields.m_Collider.fields.m_Data;
          fVar54 = local_68.fields.m_Normal.fields.y;
          UStack_98.x = local_68.fields.m_Normal.fields.y;
          UStack_98.y = local_68.fields.m_Normal.fields.z;
          UStack_98.z = (float)local_68.fields.m_FaceID;
          local_8c = local_68.fields.m_Distance;
          local_b0._8_4_ = local_68.fields.m_Point.fields.x;
          local_b0._12_4_ = local_68.fields.m_Point.fields.y;
          uStack_a0._0_4_ = local_68.fields.m_Point.fields.z;
          uStack_a0._4_4_ = local_68.fields.m_Normal.fields.x;
          pUVar42 = UnityEngine_RaycastHit__get_collider
                              ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
          if ((pUVar42 == (UnityEngine_Collider_o *)0x0) ||
             (pUVar43 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar42,(MethodInfo *)0x0),
             pUVar43 == (UnityEngine_GameObject_o *)0x0)) goto label_05bedb4f;
          iVar39 = UnityEngine_GameObject__get_layer(pUVar43,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            if (iVar39 != TypeInfo_Utility_PhysicsLayer->static_fields->Human) goto label_05bed7ff;
label_05bed82f:
            UVar59 = UnityEngine_RaycastHit__get_point
                               ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
            local_118 = UVar59.fields._0_8_;
            local_f8._4_4_ = uVar19;
            local_f8._0_4_ = UVar59.fields.z;
            local_f8._8_8_ = 0;
            iVar39 = UnityEngine_GameObject__get_layer(pUVar43,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
              iVar21 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
            }
            else {
              iVar21 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
            }
            if (iVar39 == iVar21) {
              pUVar46 = UnityEngine_GameObject__get_transform(pUVar43,(MethodInfo *)0x0);
              if (pUVar46 == (UnityEngine_Transform_o *)0x0) goto label_05bedb4f;
              UVar59 = UnityEngine_Transform__get_position(pUVar46,(MethodInfo *)0x0);
              if (g_data_0753e72c == '\0') {
                local_f8._0_4_ = UVar59.fields.z;
                local_f8._8_8_ = 0;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                g_data_0753e72c = '\x01';
              }
              pUVar41 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar12 = (pUVar41->upVector).fields.x;
              uVar20 = (pUVar41->upVector).fields.y;
              local_118 = CONCAT44(UVar59.fields.y + (float)uVar20 * 0.8,UVar59.fields.x + (float)uVar12 * 0.8
                                  );
              local_f8._0_4_ = UVar59.fields.z + (pUVar41->upVector).fields.z * 0.8;
            }
            t = UnityEngine_GameObject__get_transform(pUVar43,(MethodInfo *)0x0);
            pUVar46 = UnityEngine_GameObject__get_transform(pUVar43,(MethodInfo *)0x0);
            if ((pUVar46 == (UnityEngine_Transform_o *)0x0) ||
               (pUVar46 = UnityEngine_Transform__get_root(pUVar46,(MethodInfo *)0x0),
               pUVar46 == (UnityEngine_Transform_o *)0x0)) goto label_05bedb4f;
            pUVar43 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar46,(MethodInfo *)0x0);
            if ((TypeInfo_Photon_Pun_PunExtensions->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PunExtensions);
            }
            pPVar47 = Photon_Pun_PunExtensions__GetPhotonView(pUVar43,(MethodInfo *)0x0);
            if (pPVar47 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bedb4f;
            iVar39 = (pPVar47->fields).viewIdField;
            fVar54 = (float)local_118;
            local_f8._4_4_ = local_118._4_4_;
            fVar56 = (float)local_f8._0_4_;
          }
          else {
            if (iVar39 == TypeInfo_Utility_PhysicsLayer->static_fields->Human) goto label_05bed82f;
label_05bed7ff:
            iVar39 = UnityEngine_GameObject__get_layer(pUVar43,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            }
            if (iVar39 == TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox) goto label_05bed82f;
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar43,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                  );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar38 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if (bVar38) {
              pCVar23 = (__this->fields)._owner;
              UVar59 = UnityEngine_RaycastHit__get_point
                                 ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
              fVar54 = UVar59.fields.z;
              if (__this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) goto label_05bedb4f;
              CustomLogic_CustomLogicCollisionHandler__GetHooked
                        (__this_01,pCVar23,UVar59,(__this->fields)._left,(MethodInfo *)0x0);
            }
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pMVar48 = Map_MapLoader__GetMapObject(pUVar43,(MethodInfo *)0x0);
            if (pMVar48 == (Map_MapObject_o *)0x0) {
              UVar59 = UnityEngine_RaycastHit__get_point
                                 ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
              fVar56 = UVar59.fields.z;
              local_f8._0_4_ = UVar59.fields.x;
              local_f8._4_4_ = UVar59.fields.y;
label_05bedac4:
              t = (UnityEngine_Transform_o *)0x0;
            }
            else {
              pMVar28 = (pMVar48->fields).ScriptObject;
              if (pMVar28 == (Map_MapScriptBaseObject_o *)0x0) goto label_05bedb4f;
              if ((pMVar28->fields).Static != false) {
                uVar55 = il2cpp_runtime_helper_05bbcf10(0);
                UVar59 = UnityEngine_RaycastHit__get_normal
                                   ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
                fVar54 = (float)il2cpp_runtime_helper_059d7e70(uVar55,fVar54,UVar59.fields._0_8_,UVar59.fields.z,0);
                (__this->fields).HasOffset = fVar54 < 10.0;
                UVar59 = UnityEngine_RaycastHit__get_point
                                   ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
                fVar56 = UVar59.fields.z;
                local_f8._0_4_ = UVar59.fields.x;
                local_f8._4_4_ = UVar59.fields.y;
                if (fVar54 < 10.0) {
                  local_f8._0_4_ = (float)local_f8._0_4_ + 0.0;
                  local_f8._4_4_ = (float)local_f8._4_4_ + 0.1;
                  fVar56 = fVar56 + 0.0;
                }
                goto label_05bedac4;
              }
              bVar38 = (pMVar48->fields).RuntimeCreated;
              UVar59 = UnityEngine_RaycastHit__get_point
                                 ((UnityEngine_RaycastHit_o *)(local_b0 + 8),(MethodInfo *)0x0);
              fVar56 = UVar59.fields.z;
              local_f8._0_4_ = UVar59.fields.x;
              local_f8._4_4_ = UVar59.fields.y;
              if (bVar38 == false) {
                t = UnityEngine_GameObject__get_transform(pUVar43,(MethodInfo *)0x0);
                pMVar28 = (pMVar48->fields).ScriptObject;
                if (pMVar28 != (Map_MapScriptBaseObject_o *)0x0) {
                  objectId = (pMVar28->fields).Id;
                  iVar39 = -1;
                  goto label_05bedad3;
                }
                goto label_05bedb4f;
              }
              t = UnityEngine_GameObject__get_transform(pUVar43,(MethodInfo *)0x0);
            }
            iVar39 = -1;
            fVar54 = (float)local_f8._0_4_;
          }
          local_f8._0_4_ = fVar54;
          objectId = -1;
label_05bedad3:
          position.fields.y = (float)local_f8._4_4_;
          position.fields.x = (float)local_f8._0_4_;
          position.fields.z = fVar56;
          Characters_Hook__SetHooked(__this,position,t,iVar39,objectId,in_R8);
          return;
        }
      }
label_05bed2f0:
      uVar49 = uVar49 + 1;
      lVar51 = lVar51 + 0x2c;
    } while (uVar40 != uVar49);
  }
  pMVar37 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  pSVar24 = (__this->fields)._nodes;
  if (pSVar24 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    pUVar3 = &(__this->fields)._hookPosition;
    fVar56 = (pUVar3->fields).x;
    UVar59.fields.z = (pUVar3->fields).y;
    fVar54 = (__this->fields)._hookPosition.fields.z;
    item = pUVar3->fields;
    piVar1 = &(pSVar24->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar27 = (pSVar24->fields)._items;
    if (pUVar27 != (UnityEngine_Vector3_array *)0x0) {
      uVar40 = (pSVar24->fields)._size;
      if (uVar40 < (uint)pUVar27->max_length) {
        (pSVar24->fields)._size = uVar40 + 1;
        pUVar27->m_Items[(int)uVar40].fields.x = fVar56;
        pUVar27->m_Items[(int)uVar40].fields.y = UVar59.fields.z;
        pUVar27->m_Items[(int)uVar40].fields.z = fVar54;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar24,(UnityEngine_Vector3_o)item,
                   (MethodInfo_39FF950 *)pMVar37->klass->rgctx_data[0xe].method);
      }
      fVar54 = (__this->fields)._currentLiveTime;
      fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar56 = fVar56 + fVar54;
      (__this->fields)._currentLiveTime = fVar56;
      pfVar4 = &(__this->fields)._maxLiveTime;
      if (*pfVar4 <= fVar56 && fVar56 != *pfVar4) {
        Characters_Hook__SetHookState(__this,3,method_00);
      }
      return;
    }
  }
label_05bedb4f:
  ThrowNullReferenceException();
}


// Characters.Hook$$FixedUpdateHooked
// il2cpp: void Characters_Hook__FixedUpdateHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bedb60

void Characters_Hook__FixedUpdateHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  UnityEngine_Transform_o *x;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075475fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475fb = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_Human_o *)0x0) {
label_05bedc61:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
  if ((bVar4) && ((__this->fields)._hasHookParent != false)) {
    x = (__this->fields).HookParent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar4) {
label_05bedbeb:
      Characters_Hook__SetHookState(__this,4,method_00);
      return;
    }
    pCVar3 = (__this->fields).HookCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pCVar3 = (__this->fields).HookCharacter;
      if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_05bedc61;
      if ((pCVar3->fields).Dead != false) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        method_00 = (MethodInfo *)(ulong)bVar1;
        if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
           ((pCVar3->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] ==
            (Il2CppClass *)TypeInfo_Characters_Human)) goto label_05bedbeb;
      }
    }
  }
  return;
}


// Characters.Hook$$Update
// il2cpp: void Characters_Hook__Update (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bedc70

void Characters_Hook__Update(Characters_Hook_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).State;
  switch(iVar1) {
  case 1:
    Characters_Hook__UpdateHooking(__this,method);
    break;
  case 2:
    Characters_Hook__UpdateHooked(__this,method);
    break;
  case 3:
    Characters_Hook__UpdateDisablingHooking(__this,method);
    break;
  case 4:
    Characters_Hook__UpdateDisablingHooked(__this,method);
    break;
  default:
    goto switchD_05bedc8d_default;
  }
  iVar1 = (__this->fields).State;
switchD_05bedc8d_default:
  if (iVar1 == 0) {
    return;
  }
  Characters_Hook__UpdateSkin(__this,method);
  return;
}


// Characters.Hook$$FixedUpdateMock
// il2cpp: void Characters_Hook__FixedUpdateMock (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bedcd0

void Characters_Hook__FixedUpdateMock(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *__this_00;
  int iVar1;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *pMVar2;
  UnityEngine_Vector3_o value;
  
  iVar1 = (__this->fields).State;
  if (iVar1 == 1) {
    Characters_Hook__FixedUpdateHooking(__this,method);
    iVar1 = (__this->fields).State;
    if (iVar1 == 1) goto label_05bedcf4;
  }
  if (iVar1 != 2) {
    return;
  }
label_05bedcf4:
  __this_00 = (__this->fields)._particles;
  if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
    pMVar2 = (MethodInfo *)0x0;
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    value = Characters_Hook__GetHookPosition(__this,pMVar2);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
      if ((__this->fields).State == 2) {
        Characters_Hook__FixedUpdateHooked(__this,pMVar2);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_Hook__GetHookPosition (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bea270

UnityEngine_Vector3_o Characters_Hook__GetHookPosition(Characters_Hook_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_Fields UVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_075475fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475fc = '\x01';
  }
  if ((__this->fields)._hasHookParent == false) {
    pUVar6 = &(__this->fields)._hookPosition;
    pUVar4 = &(__this->fields)._hookPosition;
  }
  else {
    pUVar3 = (__this->fields).HookParent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields).HookParent;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar7 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__TransformPoint
                        (pUVar3,(UnityEngine_Vector3_o)(__this->fields)._hookPosition.fields,(MethodInfo *)0x0
                        );
      (__this->fields)._lastWorldHookPosition.fields = UVar7;
    }
    pUVar6 = &(__this->fields)._lastWorldHookPosition;
    pUVar4 = &(__this->fields)._lastWorldHookPosition;
  }
  uVar1 = (pUVar6->fields).x;
  uVar2 = (pUVar6->fields).y;
  UVar8.fields.y = (float)uVar2;
  UVar8.fields.x = (float)uVar1;
  UVar8.fields.z = (pUVar4->fields).z;
  return (UnityEngine_Vector3_o)UVar8.fields;
}


// Characters.Hook$$OnDestroy
// il2cpp: void Characters_Hook__OnDestroy (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bedd50

void Characters_Hook__OnDestroy(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *pUVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_075475fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475fd = '\x01';
  }
  pUVar1 = (__this->fields)._particles;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._particles;
    if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) {
label_05bede64:
      ThrowNullReferenceException();
    }
    pUVar4 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._particles;
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05bede64;
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
    }
  }
  pUVar2 = (__this->fields)._defaultMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._defaultMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.Hook$$.ctor
// il2cpp: void Characters_Hook___ctor (Characters_Hook_o* __this, const MethodInfo* method);
// 0x5bede70

void Characters_Hook___ctor(Characters_Hook_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  UnityEngine_Vector3_c *pUVar4;
  System_Collections_Generic_List_Vector3__o *__this_00;
  
  if (Il2CppMethodInitialized_075475fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_075475fe = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (__this_00,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._nodes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3;
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._baseVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._baseVelocity.fields.y = fVar3;
  (__this->fields)._baseVelocity.fields.z = fVar1;
  pUVar2 = pUVar4->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._relativeVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._relativeVelocity.fields.y = fVar3;
  (__this->fields)._relativeVelocity.fields.z = fVar1;
  pUVar2 = pUVar4->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._hookPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._hookPosition.fields.y = fVar3;
  (__this->fields)._hookPosition.fields.z = fVar1;
  pUVar2 = pUVar4->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._lastWorldHookPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._lastWorldHookPosition.fields.y = fVar3;
  (__this->fields)._lastWorldHookPosition.fields.z = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.Hook$$.cctor
// il2cpp: void Characters_Hook___cctor (const MethodInfo* method);
// 0x5bedf90

void Characters_Hook___cctor(MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  UnityEngine_RaycastHit_array *pUVar4;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_075475ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RaycastHit_array);
    Il2CppMethodInitialized_075475ff = '\x01';
  }
  pUVar4 = (UnityEngine_RaycastHit_array *)SZArrayNew(TypeInfo_UnityEngine_RaycastHit_array,0x40);
  TypeInfo_Characters_Hook->static_fields->_raycastHits = pUVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_Hook->static_fields->_raycastHits);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->Human;
    if ((((uVar1 != 1) && (layers->m_Items[1] = pUVar2->TitanPushbox, 2 < uVar1)) &&
        (layers->m_Items[2] = pUVar2->ProjectileDetection, uVar1 != 3)) &&
       ((layers->m_Items[3] = pUVar2->MapObjectProjectiles, 4 < uVar1 &&
        (layers->m_Items[4] = pUVar2->MapObjectEntities, uVar1 != 5)))) {
      layers->m_Items[5] = pUVar2->MapObjectAll;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Characters_Hook->static_fields->HookMask).fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


