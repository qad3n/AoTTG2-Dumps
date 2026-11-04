// Type: Characters.Hook
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/Hook.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Hook.cs
// --------------------------------

// Characters.Hook$$CreateHook
// il2cpp: Characters_Hook_o* Characters_Hook__CreateHook (Characters_Human_o* owner, bool left, int32_t id, float maxLiveTime, bool gun, const MethodInfo* method);
// 0x1821489c0

Characters_Hook_o *
Characters_Hook__CreateHook
          (Characters_Human_o *owner,bool left,int32_t id,float maxLiveTime,bool gun,MethodInfo *method)

{
  Characters_HumanComponentCache_o *pCVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *p;
  Characters_Hook_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346c21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    Il2CppMethodInitialized_184346c21 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (owner != (Characters_Human_o *)0x0) {
      p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar2,p,(MethodInfo *)0x0);
        pCVar3 = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Hook);
        if (pCVar3 != (Characters_Hook_o *)0x0) {
          (pCVar3->fields)._left = left;
          (pCVar3->fields)._owner = owner;
          Il2CppCodeGenWriteBarrier(&(pCVar3->fields)._owner,owner);
          (pCVar3->fields)._maxLiveTime = maxLiveTime;
          (pCVar3->fields)._id = id;
          pCVar1 = (owner->fields).HumanCache;
          if (pCVar1 != (Characters_HumanComponentCache_o *)0x0) {
            if (left) {
              if (gun) {
                pUVar2 = (pCVar1->fields).HookLeftAnchorGun;
              }
              else {
                pUVar2 = (pCVar1->fields).HookLeftAnchorDefault;
              }
            }
            else if (gun) {
              pUVar2 = (pCVar1->fields).HookRightAnchorGun;
            }
            else {
              pUVar2 = (pCVar1->fields).HookRightAnchorDefault;
            }
            (pCVar3->fields).Anchor = pUVar2;
            Il2CppCodeGenWriteBarrier(&(pCVar3->fields).Anchor,pUVar2);
            return pCVar3;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$Awake
// il2cpp: void Characters_Hook__Awake (Characters_Hook_o* __this, const MethodInfo* method);
// 0x1821487b0

void Characters_Hook__Awake(Characters_Hook_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_LineRenderer_o *pUVar2;
  UnityEngine_Material_o *value;
  UnityEngine_ParticleSystem_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346c22 == '\0') {
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
    Il2CppMethodInitialized_184346c22 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    (__this->fields)._renderer = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._renderer,pUVar2);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    value = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      (path,"Human/Particles/Materials/HookMat",true,
                       (MethodInfo_795F00 *)
                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    (__this->fields)._defaultMaterial = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultMaterial,value);
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterial(__this_00,(__this->fields)._defaultMaterial,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._renderer;
      if (pUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(pUVar2,0,(MethodInfo *)0x0);
        pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"Human/Particles/Prefabs/HookParticle",
                            true,(MethodInfo_795F00 *)
                                 MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar1,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
          (__this->fields)._particles = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._particles,pUVar3);
          pUVar3 = (__this->fields)._particles;
          if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0)
            ;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"HookEnd",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                (__this->fields)._endSprite = pUVar1;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._endSprite,pUVar1);
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
// 0x180b5bd90

void
Characters_Hook__SetSkin(Characters_Hook_o* __this, float tiling, MethodInfo* method)

{
  (__this->fields)._tiling = value;
  return;
}


// Characters.Hook$$UpdateSkin
// il2cpp: void Characters_Hook__UpdateSkin (Characters_Hook_o* __this, const MethodInfo* method);
// 0x18214c7a0

void Characters_Hook__UpdateSkin(Characters_Hook_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Material_o *__this_02;
  float fVar6;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [4];
  
  if ((__this->fields)._tiling <= 0.0) {
    return;
  }
  pUVar5 = Characters_Hook__GetHookPosition((UnityEngine_Vector3_o *)&local_48,__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Anchor;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    fVar6 = (pUVar5->fields).z;
    uVar1 = (pUVar5->fields).x;
    uVar3 = (pUVar5->fields).y;
    pUVar5 = UnityEngine_Transform__get_position(local_38,__this_00,(MethodInfo *)0x0);
    uVar2 = (pUVar5->fields).x;
    uVar4 = (pUVar5->fields).y;
    local_48.z = fVar6 - (pUVar5->fields).z;
    local_48.y = (float)uVar3 - (float)uVar4;
    local_48.x = (float)uVar1 - (float)uVar2;
    fVar6 = (float)il2cpp_runtime_helper_180546a40(&local_48);
    if (fVar6 == (__this->fields)._lastLength) {
      return;
    }
    __this_01 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    (__this->fields)._lastLength = fVar6;
    if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
      __this_02 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Material_o *)0x0) {
        value.fields.y = 1.0;
        value.fields.x = fVar6 * (__this->fields)._tiling;
        UnityEngine_Material__set_mainTextureScale(__this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$OnSetHookState
// il2cpp: void Characters_Hook__OnSetHookState (Characters_Hook_o* __this, int32_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182149eb0

void Characters_Hook__OnSetHookState
               (Characters_Hook_o *__this,int32_t state,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Settings_SoundSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UnityEngine_GameObject_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o *pPVar6;
  System_String_o *pSVar7;
  Photon_Pun_PhotonMessageInfo_o local_48;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_184346c23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346c23 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18214a067;
  if ((info->fields).Sender == (pPVar3->fields)._Owner_k__BackingField) {
    (__this->fields).State = state;
    (__this->fields)._currentLiveTime = 0.0;
    if (state - 3U < 2) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar4 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).HookRetractEffect, pSVar5 == (Settings_BoolSetting_o *)0x0))
      goto label_18214a067;
      if ((pSVar5->fields)._value != false) {
        pCVar1 = (__this->fields)._owner;
        if ((__this->fields)._left == false) {
          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
          }
          pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight;
        }
        else {
          if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
          }
          pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft;
        }
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pPVar6 = Utility_Util__CreateLocalPhotonInfo(&local_28,(MethodInfo *)0x0);
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_18214a067;
        local_48.fields.timeInt = (pPVar6->fields).timeInt;
        local_48.fields._4_4_ = *(undefined4 *)&(pPVar6->fields).field_0x4;
        local_48.fields.Sender._0_4_ = *(undefined4 *)&(pPVar6->fields).Sender;
        local_48.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(pPVar6->fields).Sender + 4);
        local_48.fields.photonView = (pPVar6->fields).photonView;
        (*(pCVar1->klass->vtable)._86_PlaySoundRPC.methodPtr)
                  (pCVar1,pSVar7,&local_48,(pCVar1->klass->vtable)._86_PlaySoundRPC.method);
      }
    }
    __this_00 = (__this->fields)._endSprite;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_18214a067:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  return;
}


// Characters.Hook$$SetHookStateLocal
// il2cpp: void Characters_Hook__SetHookStateLocal (Characters_Hook_o* __this, int32_t state, const MethodInfo* method);
// 0x18214ad60

void Characters_Hook__SetHookStateLocal(Characters_Hook_o *__this,int32_t state,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).State == 0) {
    return;
  }
  (__this->fields).State = state;
  (__this->fields)._currentLiveTime = 0.0;
  __this_00 = (__this->fields)._endSprite;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$OnSetHooking
// il2cpp: void Characters_Hook__OnSetHooking (Characters_Hook_o* __this, UnityEngine_Vector3_o baseVelocity, UnityEngine_Vector3_o relativeVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18214a840

void Characters_Hook__OnSetHooking
               (Characters_Hook_o *__this,UnityEngine_Vector3_o *baseVelocity,
               UnityEngine_Vector3_o *relativeVelocity,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method
               )

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  Characters_Human_o *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  Photon_Pun_PhotonView_o *pPVar14;
  System_Collections_Generic_List_Vector3__o *pSVar15;
  UnityEngine_Vector3_array *pUVar16;
  UnityEngine_LineRenderer_o *__this_00;
  Settings_SoundSettings_o *pSVar17;
  Settings_BoolSetting_o *pSVar18;
  UnityEngine_ParticleSystem_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Vector3_StaticFields *pUVar21;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *pMVar22;
  bool bVar23;
  UnityEngine_Vector3_o *pUVar24;
  Photon_Pun_PhotonMessageInfo_o *pPVar25;
  UnityEngine_Transform_o *pUVar26;
  System_String_o *pSVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_98 [32];
  Photon_Pun_PhotonMessageInfo_Fields local_78 [3];
  
  if (Il2CppMethodInitialized_184346c24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346c24 = '\x01';
  }
  pCVar12 = (__this->fields)._owner;
  if (((pCVar12 != (Characters_Human_o *)0x0) &&
      (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar14 = (pUVar13->fields).PhotonView, pPVar14 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar14->fields)._Owner_k__BackingField) {
      return;
    }
    fVar30 = (baseVelocity->fields).y;
    fVar29 = (baseVelocity->fields).z;
    pUVar26 = (__this->fields).Anchor;
    (__this->fields)._baseVelocity.fields.x = (baseVelocity->fields).x;
    (__this->fields)._baseVelocity.fields.y = fVar30;
    fVar30 = (relativeVelocity->fields).x;
    fVar31 = (relativeVelocity->fields).y;
    (__this->fields)._baseVelocity.fields.z = fVar29;
    fVar29 = (relativeVelocity->fields).z;
    (__this->fields)._relativeVelocity.fields.x = fVar30;
    (__this->fields)._relativeVelocity.fields.y = fVar31;
    (__this->fields)._relativeVelocity.fields.z = fVar29;
    (__this->fields).State = 1;
    if (pUVar26 != (UnityEngine_Transform_o *)0x0) {
      pUVar24 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_98,pUVar26,(MethodInfo *)0x0);
      fVar29 = (pUVar24->fields).z;
      fVar30 = (pUVar24->fields).y;
      (__this->fields)._hookPosition.fields.x = (pUVar24->fields).x;
      (__this->fields)._hookPosition.fields.y = fVar30;
      (__this->fields)._hookPosition.fields.z = fVar29;
      pSVar15 = (__this->fields)._nodes;
      (__this->fields)._hasHookParent = false;
      if (pSVar15 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar15->fields)._size = 0;
        pSVar15 = (__this->fields)._nodes;
        (__this->fields)._currentLiveTime = 0.0;
        pMVar22 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
        if (pSVar15 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          uVar6._0_4_ = (__this->fields)._hookPosition.fields.x;
          uVar6._4_4_ = (__this->fields)._hookPosition.fields.y;
          fVar29 = (__this->fields)._hookPosition.fields.z;
          piVar1 = &(pSVar15->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar16 = (pSVar15->fields)._items;
          if (pUVar16 != (UnityEngine_Vector3_array *)0x0) {
            uVar11 = (pSVar15->fields)._size;
            if (uVar11 < (uint)pUVar16->max_length) {
              (pSVar15->fields)._size = uVar11 + 1;
              if ((uint)pUVar16->max_length <= uVar11) {
                ThrowIndexOutOfRangeException();
              }
              pUVar16->m_Items[(int)uVar11].fields.x = (float)(undefined4)uVar6;
              pUVar16->m_Items[(int)uVar11].fields.y = (float)uVar6._4_4_;
              pUVar16->m_Items[(int)uVar11].fields.z = fVar29;
            }
            else {
              local_98._0_8_ = uVar6;
              local_98._8_4_ = fVar29;
              System_Collections_Generic_List_Vector3___AddWithResize
                        (pSVar15,(UnityEngine_Vector3_o *)local_98,
                         (MethodInfo_99C850 *)pMVar22->klass->rgctx_data[0xe].method);
            }
            __this_00 = (__this->fields)._renderer;
            if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_endWidth(__this_00,0.1,(MethodInfo *)0x0);
              UnityEngine_LineRenderer__set_startWidth(__this_00,0.1,(MethodInfo *)0x0);
              pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
              if ((pSVar17 != (Settings_SoundSettings_o *)0x0) &&
                 (pSVar18 = (pSVar17->fields).OldHookEffect, pSVar18 != (Settings_BoolSetting_o *)0x0)) {
                pCVar12 = (__this->fields)._owner;
                if ((pSVar18->fields)._value == false) {
                  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                  }
                  pSVar27 = TypeInfo_Characters_HumanSounds->static_fields->HookLaunch;
                }
                else {
                  if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
                  }
                  pSVar27 = TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch;
                }
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                pPVar25 = Utility_Util__CreateLocalPhotonInfo
                                    ((Photon_Pun_PhotonMessageInfo_o *)local_98,(MethodInfo *)0x0);
                if (pCVar12 != (Characters_Human_o *)0x0) {
                  local_78[0].timeInt = (pPVar25->fields).timeInt;
                  local_78[0]._4_4_ = *(undefined4 *)&(pPVar25->fields).field_0x4;
                  local_78[0].Sender = (pPVar25->fields).Sender;
                  local_78[0].photonView = (pPVar25->fields).photonView;
                  (*(pCVar12->klass->vtable)._86_PlaySoundRPC.methodPtr)
                            (pCVar12,pSVar27,(Photon_Pun_PhotonMessageInfo_o *)local_78,
                             (pCVar12->klass->vtable)._86_PlaySoundRPC.method);
                  pUVar19 = (__this->fields)._particles;
                  if (pUVar19 != (UnityEngine_ParticleSystem_o *)0x0) {
                    pUVar26 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_184346c2f == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                      Il2CppMethodInitialized_184346c2f = '\x01';
                    }
                    if ((__this->fields)._hasHookParent == false) {
                      uVar2 = (__this->fields)._hookPosition.fields.x;
                      uVar7 = (__this->fields)._hookPosition.fields.y;
                      fVar29 = (__this->fields)._hookPosition.fields.z;
                    }
                    else {
                      pUVar20 = (__this->fields).HookParent;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar23 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (bVar23) {
                        pUVar20 = (__this->fields).HookParent;
                        if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_18214ad51;
                        local_98._0_4_ = (__this->fields)._hookPosition.fields.x;
                        local_98._4_4_ = (__this->fields)._hookPosition.fields.y;
                        local_98._8_4_ = (__this->fields)._hookPosition.fields.z;
                        pUVar24 = UnityEngine_Transform__TransformPoint
                                            ((UnityEngine_Vector3_o *)local_78,pUVar20,
                                             (UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                        fVar30 = (pUVar24->fields).y;
                        fVar29 = (pUVar24->fields).z;
                        (__this->fields)._lastWorldHookPosition.fields.x = (pUVar24->fields).x;
                        (__this->fields)._lastWorldHookPosition.fields.y = fVar30;
                        (__this->fields)._lastWorldHookPosition.fields.z = fVar29;
                      }
                      uVar3 = (__this->fields)._lastWorldHookPosition.fields.x;
                      uVar8 = (__this->fields)._lastWorldHookPosition.fields.y;
                      fVar29 = (__this->fields)._lastWorldHookPosition.fields.z;
                      uVar2 = uVar3;
                      uVar7 = uVar8;
                    }
                    if (pUVar26 != (UnityEngine_Transform_o *)0x0) {
                      local_98._0_8_ = CONCAT44(uVar7,uVar2);
                      local_98._8_4_ = fVar29;
                      UnityEngine_Transform__set_position
                                (pUVar26,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                      pUVar19 = (__this->fields)._particles;
                      if (pUVar19 != (UnityEngine_ParticleSystem_o *)0x0) {
                        pUVar26 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                        uVar4 = (__this->fields)._baseVelocity.fields.x;
                        uVar9 = (__this->fields)._baseVelocity.fields.y;
                        uVar5 = (__this->fields)._relativeVelocity.fields.x;
                        uVar10 = (__this->fields)._relativeVelocity.fields.y;
                        fVar29 = (float)uVar5 + (float)uVar4 * 50.0;
                        fVar30 = (float)uVar10 + (float)uVar9 * 50.0;
                        fVar31 = (__this->fields)._baseVelocity.fields.z * 50.0 +
                                 (__this->fields)._relativeVelocity.fields.z;
                        local_98._0_8_ = CONCAT44(fVar30,fVar29);
                        local_98._8_4_ = fVar31;
                        if (Il2CppMethodInitialized_18433de5f == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_18433de5f = '\x01';
                        }
                        fVar28 = (float)il2cpp_runtime_helper_180546a40(local_98,0);
                        if (fVar28 <= 1e-05) {
                          pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
                          fVar29 = (pUVar21->zeroVector).fields.x;
                          fVar30 = (pUVar21->zeroVector).fields.y;
                          fVar31 = (pUVar21->zeroVector).fields.z;
                        }
                        else {
                          fVar29 = fVar29 / fVar28;
                          fVar30 = fVar30 / fVar28;
                          fVar31 = fVar31 / fVar28;
                        }
                        if (pUVar26 != (UnityEngine_Transform_o *)0x0) {
                          local_98._0_8_ = CONCAT44(fVar30,fVar29) ^ 0x8000000080000000;
                          local_98._8_4_ = -fVar31;
                          UnityEngine_Transform__set_forward
                                    (pUVar26,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                          pUVar19 = (__this->fields)._particles;
                          if (pUVar19 != (UnityEngine_ParticleSystem_o *)0x0) {
                            UnityEngine_ParticleSystem__Stop_2fca820(pUVar19,(MethodInfo *)0x0);
                            pCVar12 = (__this->fields)._owner;
                            if (pCVar12 != (Characters_Human_o *)0x0) {
                              if ((pCVar12->fields).EffectsEnabled != false) {
                                pUVar19 = (__this->fields)._particles;
                                if (pUVar19 == (UnityEngine_ParticleSystem_o *)0x0) goto label_18214ad51;
                                UnityEngine_ParticleSystem__Play_2fca570(pUVar19,(MethodInfo *)0x0);
                              }
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
                }
              }
            }
          }
        }
      }
    }
  }
label_18214ad51:
  ThrowNullReferenceException();
}


// Characters.Hook$$OnSetHooked
// il2cpp: void Characters_Hook__OnSetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, int32_t photonViewId, int32_t objectId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18214a070

void Characters_Hook__OnSetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o *position,int32_t photonViewId,
               int32_t objectId,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar3;
  bool bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  uint64_t uVar6;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184346c25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_184346c25 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar5 = (pUVar2->fields).PhotonView, pPVar5 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18214a249;
  if ((info->fields).Sender == (pPVar5->fields)._Owner_k__BackingField) {
    transform = (UnityEngine_Transform_o *)0x0;
    if (photonViewId != -1) {
      pPVar5 = Photon_Pun_PhotonView__Find(photonViewId,(MethodInfo *)0x0);
      if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto label_18214a249;
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar5,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18214a249;
      transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    }
    if (objectId != -1) {
      if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      }
      if (TypeInfo_Map_MapManager->static_fields->MapLoaded != false) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_18214a249;
        bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar3,objectId,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
label_18214a249:
            ThrowNullReferenceException();
          }
          uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar3,objectId,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          if ((uVar6 == 0) ||
             (*(UnityEngine_GameObject_o **)(uVar6 + 0x18) == (UnityEngine_GameObject_o *)0x0))
          goto label_18214a249;
          transform = UnityEngine_GameObject__get_transform
                                (*(UnityEngine_GameObject_o **)(uVar6 + 0x18),(MethodInfo *)0x0);
        }
      }
    }
    local_38[0].x = (position->fields).x;
    local_38[0].y = (position->fields).y;
    local_38[0].z = (position->fields).z;
    Characters_Hook__OnSetHooked_214a250(__this,(UnityEngine_Vector3_o *)local_38,transform,(MethodInfo *)0x0)
    ;
  }
  return;
}


// Characters.Hook$$OnSetHooked
// il2cpp: void Characters_Hook__OnSetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x18214a250

void Characters_Hook__OnSetHooked_214a250
               (Characters_Hook_o *__this,UnityEngine_Vector3_o *position,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_BaseCharacter_c *pCVar8;
  UI_InGameMenu_o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  Settings_SoundSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  UnityEngine_GameObject_o *__this_02;
  float fVar11;
  float fVar12;
  bool bVar13;
  int32_t score;
  UnityEngine_Vector3_o *pUVar14;
  UnityEngine_Transform_o *__this_03;
  Characters_BaseCharacter_o *pCVar15;
  Photon_Pun_PhotonMessageInfo_o *pPVar16;
  Characters_Human_o *pCVar17;
  System_String_o *pSVar18;
  undefined1 local_58 [32];
  Photon_Pun_PhotonMessageInfo_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184346c26 == '\0') {
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
    Il2CppMethodInitialized_184346c26 = '\x01';
  }
  fVar3 = (position->fields).y;
  fVar2 = (position->fields).z;
  (__this->fields)._hookPosition.fields.x = (position->fields).x;
  (__this->fields)._hookPosition.fields.y = fVar3;
  (__this->fields)._hookPosition.fields.z = fVar2;
  (__this->fields).State = 2;
  (__this->fields).HookParent = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookParent,(void *)0x0);
  (__this->fields).HookCharacter = (Characters_BaseCharacter_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookCharacter,(void *)0x0);
  (__this->fields)._hasHookParent = false;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)transform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    (__this->fields).HookParent = transform;
    Il2CppCodeGenWriteBarrier(&(__this->fields).HookParent,transform);
    if (transform == (UnityEngine_Transform_o *)0x0) goto label_18214a82d;
    local_58._0_4_ = (int32_t)(position->fields).x;
    local_58._4_4_ = (position->fields).y;
    local_58._8_4_ = (position->fields).z;
    pUVar14 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Vector3_o *)local_38,transform,(UnityEngine_Vector3_o *)local_58,
                         (MethodInfo *)0x0);
    fVar11 = (pUVar14->fields).y;
    fVar2 = (pUVar14->fields).z;
    fVar3 = (position->fields).z;
    (__this->fields)._hookPosition.fields.x = (pUVar14->fields).x;
    (__this->fields)._hookPosition.fields.y = fVar11;
    fVar11 = (position->fields).x;
    fVar12 = (position->fields).y;
    (__this->fields)._hookPosition.fields.z = fVar2;
    (__this->fields)._lastWorldHookPosition.fields.x = fVar11;
    (__this->fields)._lastWorldHookPosition.fields.y = fVar12;
    (__this->fields)._lastWorldHookPosition.fields.z = fVar3;
    (__this->fields)._hasHookParent = true;
    __this_03 = UnityEngine_Transform__GetRoot(transform,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_18214a82d;
    pCVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this_03,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    (__this->fields).HookCharacter = pCVar15;
    Il2CppCodeGenWriteBarrier(&(__this->fields).HookCharacter,pCVar15);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar5 == (Settings_InGameSet_o *)0x0) ||
        (pSVar6 = (pSVar5->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar7 = (pSVar6->fields).HookDamageMultiplier, pSVar7 == (Settings_IntSetting_o *)0x0))
    goto label_18214a82d;
    if (0 < (pSVar7->fields)._value) {
      pCVar15 = (__this->fields).HookCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar13) && (pCVar15 = (__this->fields).HookCharacter, pCVar15 != (Characters_BaseCharacter_o *)0x0)
         ) {
        pCVar8 = pCVar15->klass;
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar8->_2).typeHierarchyDepth) &&
           ((pCVar8->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          pCVar15 = (__this->fields).HookCharacter;
          pCVar17 = (__this->fields)._owner;
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar13 = GameManagers_TeamInfo__SameTeam_1e770d0
                             (pCVar15,(Characters_BaseCharacter_o *)pCVar17,(MethodInfo *)0x0);
          if (!bVar13) {
            pCVar17 = (__this->fields)._owner;
            if (pCVar17 == (Characters_Human_o *)0x0) goto label_18214a82d;
            bVar13 = (*(pCVar17->klass->vtable)._74_IsMine.methodPtr)
                               (pCVar17,(pCVar17->klass->vtable)._74_IsMine.method);
            if (bVar13) {
              pCVar17 = (__this->fields)._owner;
              if (((pCVar17 == (Characters_Human_o *)0x0) ||
                  (pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
                  pSVar5 == (Settings_InGameSet_o *)0x0)) ||
                 ((pSVar6 = (pSVar5->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0 ||
                  (pSVar7 = (pSVar6->fields).HookDamageMultiplier, pSVar7 == (Settings_IntSetting_o *)0x0))))
              goto label_18214a82d;
              iVar4 = (pSVar7->fields)._value;
              fVar2 = (pCVar17->fields).CurrentSpeed;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              score = System_Math__Max_1b2c0d0(10,(int)((float)iVar4 * fVar2),(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_18214a82d;
              bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
              if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
              }
              UI_InGameMenu__ShowKillScore(__this_00,score,false,(MethodInfo *)0x0);
              pCVar15 = (__this->fields).HookCharacter;
              if (pCVar15 == (Characters_BaseCharacter_o *)0x0) goto label_18214a82d;
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
  __this_01 = (__this->fields)._renderer;
  (__this->fields)._currentLiveTime = 0.0;
  if (__this_01 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214a82d;
  UnityEngine_LineRenderer__set_endWidth(__this_01,0.1,(MethodInfo *)0x0);
  UnityEngine_LineRenderer__set_startWidth(__this_01,0.1,(MethodInfo *)0x0);
  pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar9 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar10 = (pSVar9->fields).HookImpactEffect, pSVar10 == (Settings_BoolSetting_o *)0x0))
  goto label_18214a82d;
  if ((pSVar10->fields)._value != false) {
    pCVar15 = (__this->fields).HookCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar13) && (pCVar15 = (__this->fields).HookCharacter, pCVar15 != (Characters_BaseCharacter_o *)0x0))
    {
      pCVar8 = pCVar15->klass;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar8->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar8->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      goto label_18214a778;
      pCVar17 = (__this->fields)._owner;
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar18 = TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud;
    }
    else {
label_18214a778:
      pCVar17 = (__this->fields)._owner;
      if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
      }
      pSVar18 = TypeInfo_Characters_HumanSounds->static_fields->HookImpact;
    }
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pPVar16 = Utility_Util__CreateLocalPhotonInfo
                        ((Photon_Pun_PhotonMessageInfo_o *)local_58,(MethodInfo *)0x0);
    if (pCVar17 == (Characters_Human_o *)0x0) goto label_18214a82d;
    local_38[0].timeInt = (pPVar16->fields).timeInt;
    local_38[0]._4_4_ = *(undefined4 *)&(pPVar16->fields).field_0x4;
    local_38[0].Sender = (pPVar16->fields).Sender;
    local_38[0].photonView = (pPVar16->fields).photonView;
    (*(pCVar17->klass->vtable)._86_PlaySoundRPC.methodPtr)
              (pCVar17,pSVar18,(Photon_Pun_PhotonMessageInfo_o *)local_38,
               (pCVar17->klass->vtable)._86_PlaySoundRPC.method);
  }
  __this_02 = (__this->fields)._endSprite;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
    return;
  }
label_18214a82d:
  ThrowNullReferenceException();
}


// Characters.Hook$$SetHookState
// il2cpp: void Characters_Hook__SetHookState (Characters_Hook_o* __this, int32_t state, const MethodInfo* method);
// 0x18214ada0

void Characters_Hook__SetHookState(Characters_Hook_o *__this,int32_t state,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res8 [8];
  int32_t local_res20 [2];
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_184346c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHookStateRPC");
    Il2CppMethodInitialized_184346c27 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
    __this_00 = (pUVar2->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_res8[0] = (__this->fields)._left;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
        local_res20[0] = (__this->fields)._id;
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          local_28[0] = state;
          pIVar3 = il2cpp_value_box(g_data_184354e08,local_28);
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
            if (pIVar4 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar3);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_00,"SetHookStateRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_18214af4b;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18214af4b:
  ThrowNullReferenceException();
}


// Characters.Hook$$SetHooking
// il2cpp: void Characters_Hook__SetHooking (Characters_Hook_o* __this, UnityEngine_Vector3_o baseVelocity, UnityEngine_Vector3_o relativeVelocity, const MethodInfo* method);
// 0x18214b3b0

void Characters_Hook__SetHooking
               (Characters_Hook_o *__this,UnityEngine_Vector3_o *baseVelocity,
               UnityEngine_Vector3_o *relativeVelocity,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res8 [8];
  int32_t local_48 [2];
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  float local_28;
  
  if (Il2CppMethodInitialized_184346c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHookingRPC");
    Il2CppMethodInitialized_184346c28 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
    __this_00 = (pUVar2->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
    local_res8[0] = (__this->fields)._left;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
        local_48[0] = (__this->fields)._id;
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_48);
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          local_40._0_4_ = (baseVelocity->fields).x;
          local_40._4_4_ = (baseVelocity->fields).y;
          local_38 = (baseVelocity->fields).z;
          pIVar3 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_40);
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
            if (pIVar4 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar3);
            local_30._0_4_ = (relativeVelocity->fields).x;
            local_30._4_4_ = (relativeVelocity->fields).y;
            local_28 = (relativeVelocity->fields).z;
            pIVar3 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_30);
            if (pIVar3 != (Il2CppObject *)0x0) {
              pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
              if (pIVar4 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = pIVar3;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar3);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this_00,"SetHookingRPC",0,parameters,(MethodInfo *)0x0);
                return;
              }
              goto label_18214b5f6;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18214b5f6:
  ThrowNullReferenceException();
}


// Characters.Hook$$SetHooked
// il2cpp: void Characters_Hook__SetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, UnityEngine_Transform_o* t, int32_t viewId, int32_t objectId, const MethodInfo* method);
// 0x18214af90

void Characters_Hook__SetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o *position,UnityEngine_Transform_o *t,
               int32_t viewId,int32_t objectId,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  Characters_Human_o *pCVar5;
  Characters_Human_o *human;
  undefined1 local_res8 [8];
  int32_t local_58;
  int32_t local_54;
  int32_t local_50 [2];
  undefined8 local_48;
  float local_40;
  UnityEngine_Vector3_Fields local_38;
  
  if (Il2CppMethodInitialized_184346c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHookedRPC");
    Il2CppMethodInitialized_184346c29 = '\x01';
  }
  pCVar5 = (__this->fields)._owner;
  if ((pCVar5 != (Characters_Human_o *)0x0) &&
     (pUVar1 = (pCVar5->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0)) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
    local_res8[0] = (__this->fields)._left;
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
        local_58 = (__this->fields)._id;
        pIVar3 = il2cpp_value_box(g_data_184354e08,&local_58);
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          local_48._0_4_ = (position->fields).x;
          local_48._4_4_ = (position->fields).y;
          local_40 = (position->fields).z;
          pIVar3 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
            if (pIVar4 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar3);
            local_54 = viewId;
            pIVar3 = il2cpp_value_box(g_data_184354e08,&local_54);
            if (pIVar3 != (Il2CppObject *)0x0) {
              pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
              if (pIVar4 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = pIVar3;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar3);
              local_50[0] = objectId;
              pIVar3 = il2cpp_value_box(g_data_184354e08,local_50);
              if (pIVar3 != (Il2CppObject *)0x0) {
                pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
                if (pIVar4 == (Il2CppObject *)0x0) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
              }
              if (4 < (uint)parameters->max_length) {
                parameters->m_Items[4] = pIVar3;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,pIVar3);
                if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                  Photon_Pun_PhotonView__RPC(__this_00,"SetHookedRPC",1,parameters,(MethodInfo *)0x0);
                  pCVar5 = (__this->fields)._owner;
                  if (pCVar5 != (Characters_Human_o *)0x0) {
                    local_38.x = (position->fields).x;
                    local_38.y = (position->fields).y;
                    local_38.z = (position->fields).z;
                    Characters_Human__OnHooked
                              (pCVar5,(__this->fields)._left,(UnityEngine_Vector3_o *)&local_38,
                               (MethodInfo *)0x0);
                    local_38.x = (position->fields).x;
                    local_38.y = (position->fields).y;
                    local_38.z = (position->fields).z;
                    Characters_Hook__OnSetHooked_214a250
                              (__this,(UnityEngine_Vector3_o *)&local_38,t,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)t,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                      );
                    if (bVar2) {
                      if (t == (UnityEngine_Transform_o *)0x0) {
label_18214b39d:
                        ThrowNullReferenceException();
                      }
                      pCVar5 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)t,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Human);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar2 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar2) {
                        pCVar5 = (__this->fields)._owner;
                        bVar2 = (__this->fields)._left;
                        human = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)t,
                                           (MethodInfo_6651A0 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_Human);
                        if (pCVar5 == (Characters_Human_o *)0x0) goto label_18214b39d;
                        local_38.z = (position->fields).z;
                        local_38.x = (position->fields).x;
                        local_38.y = (position->fields).y;
                        Characters_Human__OnHookedHuman
                                  (pCVar5,bVar2,(UnityEngine_Vector3_o *)&local_38,human,(MethodInfo *)0x0);
                      }
                    }
                    return;
                  }
                }
                goto label_18214b347;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18214b347:
  ThrowNullReferenceException();
}


// Characters.Hook$$FinishDisable
// il2cpp: void Characters_Hook__FinishDisable (Characters_Hook_o* __this, const MethodInfo* method);
// 0x182148b10

void Characters_Hook__FinishDisable(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._renderer;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(__this_00,0,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._endSprite;
    (__this->fields).State = 0;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateHooking
// il2cpp: void Characters_Hook__UpdateHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x18214c550
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214c656: movss xmm6, dword ptr [rip + 0x120c6ce]
// asm:   0x18214c65e: nop 
// asm:   0x18214c707: jmp 0x18214c660

void Characters_Hook__UpdateHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  int index;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_Fields local_58 [6];
  
  if (Il2CppMethodInitialized_184346c2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_184346c2a = '\x01';
  }
  pSVar1 = (__this->fields)._nodes;
  if (pSVar1 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    if ((pSVar1->fields)._size < 1) {
      return;
    }
    pUVar2 = (__this->fields).Anchor;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_58,pUVar2,(MethodInfo *)0x0)
      ;
      pSVar1 = (__this->fields)._nodes;
      if (pSVar1 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        fVar6 = (pUVar4->fields).x;
        fVar7 = (pUVar4->fields).y;
        fVar8 = (pUVar4->fields).z;
        System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                  ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_68,
                   (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar1,0,
                   (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
        pSVar1 = (__this->fields)._nodes;
        if ((pSVar1 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
           (pUVar3 = (__this->fields)._renderer, pUVar3 != (UnityEngine_LineRenderer_o *)0x0)) {
          fVar6 = fVar6 - local_68.fields.x;
          fVar7 = fVar7 - local_68.fields.y;
          fVar8 = fVar8 - local_68.fields.z;
          UnityEngine_LineRenderer__set_positionCount(pUVar3,(pSVar1->fields)._size,(MethodInfo *)0x0);
          index = 0;
          pSVar1 = (__this->fields)._nodes;
          while (pSVar1 != (System_Collections_Generic_List_Vector3__o *)0x0) {
            if ((pSVar1->fields)._size <= index) {
              pSVar1 = (__this->fields)._nodes;
              if (pSVar1 != (System_Collections_Generic_List_Vector3__o *)0x0) {
                if ((pSVar1->fields)._size < 2) {
                  return;
                }
                pUVar2 = (__this->fields).Anchor;
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pUVar3 = (__this->fields)._renderer;
                  pUVar4 = UnityEngine_Transform__get_position(&local_68,pUVar2,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
                    local_58[0].x = (pUVar4->fields).x;
                    local_58[0].y = (pUVar4->fields).y;
                    local_58[0].z = (pUVar4->fields).z;
                    UnityEngine_LineRenderer__SetPosition
                              (pUVar3,1,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              break;
            }
            pSVar1 = (__this->fields)._nodes;
            if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
            pUVar3 = (__this->fields)._renderer;
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_68,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar1,index,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            fVar5 = (float)il2cpp_runtime_helper_1804f6b50(0x3f400000);
            if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) break;
            local_58[0].z = fVar8 * fVar5 + local_68.fields.z;
            local_58[0].y = fVar7 * fVar5 + local_68.fields.y;
            local_58[0].x = fVar6 * fVar5 + local_68.fields.x;
            UnityEngine_LineRenderer__SetPosition
                      (pUVar3,index,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
            index = index + 1;
            pSVar1 = (__this->fields)._nodes;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateHooked
// il2cpp: void Characters_Hook__UpdateHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x18214bbe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214be9d: nop dword ptr [rax]

void Characters_Hook__UpdateHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Characters_Human_o *pCVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  UnityEngine_GameObject_o *pUVar14;
  Cameras_BaseCamera_o *pCVar15;
  int iVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Quaternion_o *pUVar20;
  uint value;
  int index;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Vector3_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  UnityEngine_Quaternion_Fields local_108;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  UnityEngine_Vector3_Fields local_e0 [14];
  
  if (Il2CppMethodInitialized_184346c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346c2b = '\x01';
  }
  pUVar17 = Characters_Hook__GetHookPosition((UnityEngine_Vector3_o *)&local_148,__this,(MethodInfo *)0x0);
  pUVar18 = (__this->fields).Anchor;
  if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
    uVar6._0_4_ = (pUVar17->fields).x;
    uVar6._4_4_ = (pUVar17->fields).y;
    fVar30 = (pUVar17->fields).z;
    local_138._0_8_ = uVar6;
    local_e0[0]._0_8_ = uVar6;
    pUVar17 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_148,pUVar18,(MethodInfo *)0x0);
    fVar31 = (float)uVar6 - (pUVar17->fields).x;
    fVar32 = uVar6._4_4_ - (pUVar17->fields).y;
    fVar33 = fVar30 - (pUVar17->fields).z;
    pCVar10 = (__this->fields)._owner;
    local_128 = fVar31;
    local_124 = fVar32;
    local_120 = fVar33;
    if (((pCVar10 != (Characters_Human_o *)0x0) &&
        (pUVar11 = (pCVar10->fields).Cache, pUVar11 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this_00 = (pUVar11->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      pUVar17 = UnityEngine_Rigidbody__get_linearVelocity
                          ((UnityEngine_Vector3_o *)&local_148,__this_00,(MethodInfo *)0x0);
      uVar7._0_4_ = (pUVar17->fields).x;
      uVar7._4_4_ = (pUVar17->fields).y;
      fVar25 = (pUVar17->fields).z;
      local_f8 = uVar7;
      local_f0 = fVar25;
      local_e8 = uVar7;
      fVar22 = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
      fVar23 = (float)il2cpp_runtime_helper_180546a40(&local_f8,0);
      value = (uint)((fVar23 + fVar22) / 5.0);
      if ((int)value < 2) {
        value = 2;
      }
      else if (6 < (int)value) {
        value = 6;
      }
      pUVar12 = (__this->fields)._renderer;
      if (pUVar12 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(pUVar12,value,(MethodInfo *)0x0);
        pUVar18 = (__this->fields).Anchor;
        if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
          pUVar12 = (__this->fields)._renderer;
          pUVar17 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_108,pUVar18,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_LineRenderer_o *)0x0) {
            local_148.x = (pUVar17->fields).x;
            local_148.y = (pUVar17->fields).y;
            local_148.z = (pUVar17->fields).z;
            UnityEngine_LineRenderer__SetPosition
                      (pUVar12,0,(UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
            il2cpp_runtime_helper_180546a40(&local_128,0);
            fVar23 = (float)il2cpp_runtime_helper_1804f6b50();
            index = 1;
            fVar22 = uVar6._4_4_;
            if (1 < (int)(value - 1)) {
              uVar21 = value >> 1;
              local_114 = (float)(undefined4)uVar7 * (float)(undefined4)uVar7;
              local_118 = local_f8._4_4_ * local_f8._4_4_;
              local_10c = (float)uVar21;
              local_110 = fVar25 * fVar25;
              do {
                fVar24 = local_10c;
                fVar22 = local_110;
                uVar6._4_4_ = local_114;
                uVar6._0_4_ = local_118;
                if (Il2CppMethodInitialized_184341267 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                  Il2CppMethodInitialized_184341267 = '\x01';
                }
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                iVar16 = -(index - uVar21);
                if (iVar16 < 0) {
                  iVar16 = index - uVar21;
                }
                fVar24 = (float)il2cpp_runtime_helper_1804f6b50((fVar24 - (float)iVar16) / (float)uVar21);
                if (Il2CppMethodInitialized_18433de59 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                  Il2CppMethodInitialized_18433de59 = '\x01';
                }
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                dVar26 = (double)((float)uVar6 + uVar6._4_4_ + fVar22);
                if (dVar26 < 0.0) {
                  dVar26 = sqrt(dVar26);
                }
                else {
                  dVar26 = SQRT(dVar26);
                }
                fVar29 = ((float)dVar26 + fVar23) * 0.0015 * fVar24;
                uVar6._0_4_ = UnityEngine_Time__get_time((MethodInfo *)0x0);
                uVar6._4_4_ = (float)il2cpp_runtime_helper_1804f5fc0((float)index * 0.5 + (float)uVar6 + (float)uVar6);
                uVar6._0_4_ = (float)il2cpp_runtime_helper_1804f5fc0((float)index * 0.7 + ((float)uVar6 + (float)uVar6) * 1.2);
                fVar22 = (float)il2cpp_runtime_helper_1804f5fc0();
                pUVar18 = (__this->fields).Anchor;
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_18214c53d;
                pUVar17 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)&local_108,pUVar18,(MethodInfo *)0x0);
                fVar1 = (pUVar17->fields).z;
                fVar2 = (pUVar17->fields).x;
                fVar3 = (pUVar17->fields).y;
                fVar27 = (float)index / (float)(int)value;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar12 = (__this->fields)._renderer;
                if (pUVar12 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214c53d;
                pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                local_148.y = ((fVar32 * fVar27 + fVar3 + (float)uVar6 * fVar29 * 0.3) -
                              fVar23 * (pUVar13->upVector).fields.y * 0.05 * fVar24) -
                              local_f8._4_4_ * 0.001 * fVar24 * fVar23;
                local_148.x = ((fVar31 * fVar27 + fVar2 + uVar6._4_4_ * fVar29 * 0.3) -
                              fVar23 * (pUVar13->upVector).fields.x * 0.05 * fVar24) -
                              (float)local_e8 * 0.001 * fVar24 * fVar23;
                local_148.z = ((fVar33 * fVar27 + fVar1 + fVar22 * fVar29 * 0.3) -
                              fVar23 * (pUVar13->upVector).fields.z * 0.05 * fVar24) -
                              fVar25 * 0.001 * fVar24 * fVar23;
                UnityEngine_LineRenderer__SetPosition
                          (pUVar12,index,(UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                index = index + 1;
              } while (index < (int)(value - 1));
              uVar6._0_4_ = (float)local_e0[0]._0_8_;
              uVar6._4_4_ = SUB84(local_e0[0]._0_8_,4);
              fVar22 = local_138.y;
            }
            pUVar12 = (__this->fields)._renderer;
            if (pUVar12 != (UnityEngine_LineRenderer_o *)0x0) {
              local_138.y = uVar6._4_4_;
              local_138.x = (float)uVar6;
              local_138.z = fVar30;
              UnityEngine_LineRenderer__SetPosition
                        (pUVar12,value - 1,(UnityEngine_Vector3_o *)&local_138,(MethodInfo *)0x0);
              pUVar14 = (__this->fields)._endSprite;
              if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433de5f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5f = '\x01';
                }
                uVar6._4_4_ = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                if (uVar6._4_4_ <= 1e-05) {
                  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                  fVar25 = (pUVar13->zeroVector).fields.x;
                  fVar23 = (pUVar13->zeroVector).fields.y;
                  uVar6._4_4_ = (pUVar13->zeroVector).fields.z;
                }
                else {
                  fVar25 = fVar31 / uVar6._4_4_;
                  fVar23 = fVar32 / uVar6._4_4_;
                  uVar6._4_4_ = fVar33 / uVar6._4_4_;
                }
                if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                  local_148.z = uVar6._4_4_ * 0.1 + fVar30;
                  local_148.y = fVar23 * 0.1 + fVar22;
                  local_148.x = fVar25 * 0.1 + (float)uVar6;
                  UnityEngine_Transform__set_position
                            (pUVar18,(UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
                  pUVar14 = (__this->fields)._endSprite;
                  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar18 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_18433de5f == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_18433de5f = '\x01';
                    }
                    uVar6._0_4_ = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
                    if ((float)uVar6 <= 1e-05) {
                      pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar31 = (pUVar13->zeroVector).fields.x;
                      fVar32 = (pUVar13->zeroVector).fields.y;
                      fVar33 = (pUVar13->zeroVector).fields.z;
                    }
                    else {
                      fVar31 = fVar31 / (float)uVar6;
                      fVar32 = fVar32 / (float)uVar6;
                      fVar33 = fVar33 / (float)uVar6;
                    }
                    pCVar15 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                    if (((pCVar15 != (Cameras_BaseCamera_o *)0x0) &&
                        (pUVar11 = (pCVar15->fields).Cache, pUVar11 != (Utility_BaseComponentCache_o *)0x0))
                       && (pUVar19 = (pUVar11->fields).Transform, pUVar19 != (UnityEngine_Transform_o *)0x0))
                    {
                      pUVar17 = UnityEngine_Transform__get_position
                                          ((UnityEngine_Vector3_o *)&local_108,pUVar19,(MethodInfo *)0x0);
                      pUVar14 = (__this->fields)._endSprite;
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        uVar4 = (pUVar17->fields).x;
                        uVar8 = (pUVar17->fields).y;
                        uVar6._0_4_ = (pUVar17->fields).z;
                        pUVar19 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
                        if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                          pUVar17 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_108,pUVar19,(MethodInfo *)0x0);
                          uVar5 = (pUVar17->fields).x;
                          uVar9 = (pUVar17->fields).y;
                          uVar6._0_4_ = (float)uVar6 - (pUVar17->fields).z;
                          uVar28._0_4_ = (float)uVar4 - (float)uVar5;
                          uVar28._4_4_ = (float)uVar8 - (float)uVar9;
                          local_138._0_8_ = uVar28;
                          local_138.z = (float)uVar6;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          local_138.z = (float)il2cpp_runtime_helper_180546a40(&local_138,0);
                          if (local_138.z <= 1e-05) {
                            pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                            uVar6._4_4_ = (pUVar13->zeroVector).fields.x;
                            fVar30 = (pUVar13->zeroVector).fields.y;
                            local_138.z = (pUVar13->zeroVector).fields.z;
                          }
                          else {
                            uVar6._4_4_ = (float)uVar28 / local_138.z;
                            fVar30 = uVar28._4_4_ / local_138.z;
                            local_138.z = (float)uVar6 / local_138.z;
                          }
                          local_138.y = fVar30;
                          local_138.x = uVar6._4_4_;
                          local_148.y = fVar32;
                          local_148.x = fVar31;
                          local_148.z = fVar33;
                          pUVar20 = UnityEngine_Quaternion__Internal_LookRotation
                                              ((UnityEngine_Quaternion_o *)&local_108,
                                               (UnityEngine_Vector3_o *)&local_148,
                                               (UnityEngine_Vector3_o *)&local_138,(MethodInfo *)0x0);
                          if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                            local_108.x = (pUVar20->fields).x;
                            local_108.y = (pUVar20->fields).y;
                            local_108.z = (pUVar20->fields).z;
                            local_108.w = (pUVar20->fields).w;
                            UnityEngine_Transform__set_rotation
                                      (pUVar18,(UnityEngine_Quaternion_o *)&local_108,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_18214c53d:
  ThrowNullReferenceException();
}


// Characters.Hook$$UpdateDisablingHooking
// il2cpp: void Characters_Hook__UpdateDisablingHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x18214b7c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18214b9d0: movss xmm6, dword ptr [rip + 0x120d354]
// asm:   0x18214b9d8: nop dword ptr [rax + rax]
// asm:   0x18214ba8a: jmp 0x18214b9e0

void Characters_Hook__UpdateDisablingHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  System_Collections_Generic_List_Vector3__o *pSVar6;
  UnityEngine_Vector3_array *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_LineRenderer_o *pUVar9;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *pMVar10;
  UnityEngine_Vector3_o *pUVar11;
  int index;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o local_b8;
  UnityEngine_Vector3_Fields local_a8 [13];
  
  if (Il2CppMethodInitialized_184346c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_184346c2c = '\x01';
  }
  pUVar11 = Characters_Hook__GetHookPosition((UnityEngine_Vector3_o *)local_a8,__this,(MethodInfo *)0x0);
  fVar15 = (__this->fields)._baseVelocity.fields.x;
  fVar17 = (__this->fields)._baseVelocity.fields.y;
  fVar18 = (__this->fields)._baseVelocity.fields.z;
  fVar13 = (pUVar11->fields).x;
  fVar14 = (pUVar11->fields).y;
  fVar16 = (pUVar11->fields).z;
  fVar2 = (__this->fields)._relativeVelocity.fields.x;
  fVar3 = (__this->fields)._relativeVelocity.fields.y;
  fVar4 = (__this->fields)._relativeVelocity.fields.z;
  fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pMVar10 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  pSVar6 = (__this->fields)._nodes;
  if (pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar7 = (pSVar6->fields)._items;
    if (pUVar7 != (UnityEngine_Vector3_array *)0x0) {
      uVar5 = (pSVar6->fields)._size;
      fVar13 = fVar2 * fVar12 + fVar15 + fVar13;
      fVar14 = fVar3 * fVar12 + fVar17 + fVar14;
      fVar16 = fVar4 * fVar12 + fVar18 + fVar16;
      if (uVar5 < (uint)pUVar7->max_length) {
        (pSVar6->fields)._size = uVar5 + 1;
        if ((uint)pUVar7->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pUVar7->m_Items[(int)uVar5].fields.x = fVar13;
        pUVar7->m_Items[(int)uVar5].fields.y = fVar14;
        pUVar7->m_Items[(int)uVar5].fields.z = fVar16;
      }
      else {
        local_b8.fields.x = fVar13;
        local_b8.fields.y = fVar14;
        local_b8.fields.z = fVar16;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar6,&local_b8,(MethodInfo_99C850 *)pMVar10->klass->rgctx_data[0xe].method);
      }
      pUVar8 = (__this->fields).Anchor;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pUVar11 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)local_a8,pUVar8,(MethodInfo *)0x0);
        pSVar6 = (__this->fields)._nodes;
        if (pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          fVar15 = (pUVar11->fields).x;
          fVar17 = (pUVar11->fields).y;
          fVar18 = (pUVar11->fields).z;
          System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_b8,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar6,0,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          pSVar6 = (__this->fields)._nodes;
          if ((pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
             (pUVar9 = (__this->fields)._renderer, pUVar9 != (UnityEngine_LineRenderer_o *)0x0)) {
            fVar15 = fVar15 - local_b8.fields.x;
            fVar17 = fVar17 - local_b8.fields.y;
            fVar18 = fVar18 - local_b8.fields.z;
            UnityEngine_LineRenderer__set_positionCount(pUVar9,(pSVar6->fields)._size,(MethodInfo *)0x0);
            index = 0;
            pSVar6 = (__this->fields)._nodes;
            while (pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0) {
              __this_00 = (__this->fields)._nodes;
              if ((pSVar6->fields)._size <= index) {
                if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
                if (1 < (__this_00->fields)._size) {
                  pUVar8 = (__this->fields).Anchor;
                  if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
                  pUVar9 = (__this->fields)._renderer;
                  pUVar11 = UnityEngine_Transform__get_position(&local_b8,pUVar8,(MethodInfo *)0x0);
                  if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) break;
                  local_a8[0].x = (pUVar11->fields).x;
                  local_a8[0].y = (pUVar11->fields).y;
                  local_a8[0].z = (pUVar11->fields).z;
                  UnityEngine_LineRenderer__SetPosition
                            (pUVar9,1,(UnityEngine_Vector3_o *)local_a8,(MethodInfo *)0x0);
                }
                fVar15 = (__this->fields)._currentLiveTime;
                fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                pUVar9 = (__this->fields)._renderer;
                fVar17 = fVar17 + fVar15;
                (__this->fields)._currentLiveTime = fVar17;
                if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) break;
                fVar15 = 0.1 - fVar17 * 0.2;
                UnityEngine_LineRenderer__set_endWidth(pUVar9,fVar15,(MethodInfo *)0x0);
                UnityEngine_LineRenderer__set_startWidth(pUVar9,fVar15,(MethodInfo *)0x0);
                if (0.5 < (__this->fields)._currentLiveTime) {
                  pUVar9 = (__this->fields)._renderer;
                  if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) break;
                  UnityEngine_LineRenderer__set_positionCount(pUVar9,0,(MethodInfo *)0x0);
                  __this_01 = (__this->fields)._endSprite;
                  (__this->fields).State = 0;
                  if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
                  UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                }
                return;
              }
              if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
              pUVar9 = (__this->fields)._renderer;
              System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                        ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_b8,
                         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,index,
                         (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
              fVar13 = (float)il2cpp_runtime_helper_1804f6b50(0x3f400000);
              if (pUVar9 == (UnityEngine_LineRenderer_o *)0x0) break;
              local_a8[0].z = fVar18 * fVar13 + local_b8.fields.z;
              local_a8[0].y = fVar17 * fVar13 + local_b8.fields.y;
              local_a8[0].x = fVar15 * fVar13 + local_b8.fields.x;
              UnityEngine_LineRenderer__SetPosition
                        (pUVar9,index,(UnityEngine_Vector3_o *)local_a8,(MethodInfo *)0x0);
              index = index + 1;
              pSVar6 = (__this->fields)._nodes;
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
// 0x18214b650

void Characters_Hook__UpdateDisablingHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Vector3_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  pUVar1 = (__this->fields)._renderer;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(pUVar1,2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._renderer;
    pUVar2 = Characters_Hook__GetHookPosition(local_28,__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      local_38.x = (pUVar2->fields).x;
      local_38.y = (pUVar2->fields).y;
      local_38.z = (pUVar2->fields).z;
      UnityEngine_LineRenderer__SetPosition(pUVar1,0,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      __this_00 = (__this->fields).Anchor;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = (__this->fields)._renderer;
        pUVar2 = UnityEngine_Transform__get_position(local_28,__this_00,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          local_38.x = (pUVar2->fields).x;
          local_38.y = (pUVar2->fields).y;
          local_38.z = (pUVar2->fields).z;
          UnityEngine_LineRenderer__SetPosition(pUVar1,1,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0)
          ;
          fVar4 = (__this->fields)._currentLiveTime;
          fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar1 = (__this->fields)._renderer;
          fVar3 = fVar3 + fVar4;
          (__this->fields)._currentLiveTime = fVar3;
          if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            fVar4 = 0.1 - fVar3 * 0.2;
            UnityEngine_LineRenderer__set_endWidth(pUVar1,fVar4,(MethodInfo *)0x0);
            UnityEngine_LineRenderer__set_startWidth(pUVar1,fVar4,(MethodInfo *)0x0);
            if ((__this->fields)._currentLiveTime <= 0.5) {
              return;
            }
            pUVar1 = (__this->fields)._renderer;
            if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_positionCount(pUVar1,0,(MethodInfo *)0x0);
              __this_01 = (__this->fields)._endSprite;
              (__this->fields).State = 0;
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
// 0x182148c80
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821491ee: nop 
// asm:   0x1821495d1: xor r8d, r8d
// asm:   0x1821495d4: lea rdx, [rsp + 0x50]
// asm:   0x182149666: mov rax, qword ptr [rip + 0x1f43763]  ; TypeInfo_Characters_Hook
// asm:   0x18214966d: jmp 0x1821491f0
// asm:   0x182149acd: xor r8d, r8d
// asm:   0x182149ad0: mov edx, 3
// asm:   0x182149ad5: mov rcx, rdi
// asm:   0x182149ad8: call 0x18214ada0  ; Characters_Hook__SetHookState()
// asm:   0x182149add: jmp 0x18214981c

void Characters_Hook__FixedUpdateHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float *pfVar2;
  UnityEngine_RaycastHit_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Characters_Human_o *pCVar13;
  System_Collections_Generic_List_Vector3__o *pSVar14;
  UnityEngine_Vector3_array *pUVar15;
  UnityEngine_RaycastHit_array *pUVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  UnityEngine_RaycastHit_Fields *pUVar26;
  MethodInfo *pMVar27;
  bool bVar28;
  int32_t iVar29;
  int32_t iVar30;
  UnityEngine_Collider_o *pUVar31;
  UnityEngine_GameObject_o *pUVar32;
  UnityEngine_Object_o *pUVar33;
  UnityEngine_Object_o *pUVar34;
  CustomLogic_CustomLogicCollisionHandler_o *__this_00;
  UnityEngine_Vector3_o *pUVar35;
  Map_MapObject_o *pMVar36;
  Characters_TitanProjectileDetection_o *__this_01;
  UnityEngine_Transform_o *pUVar37;
  UnityEngine_Transform_o *pUVar38;
  Photon_Pun_PhotonView_o *pPVar39;
  UnityEngine_Vector3_Fields *position;
  uint uVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_RaycastHit_o local_118;
  UnityEngine_RaycastHit_o local_e8 [4];
  ulonglong uVar41;
  
  if (Il2CppMethodInitialized_184346c2d == '\0') {
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
    Il2CppMethodInitialized_184346c2d = '\x01';
  }
  pCVar13 = (__this->fields)._owner;
  local_118.fields.m_Normal.fields.y = 0.0;
  local_118.fields.m_Normal.fields.z = 0.0;
  local_118.fields.m_FaceID = 0;
  local_e8[0].fields.m_Normal.fields.y = 0.0;
  local_e8[0].fields.m_Normal.fields.z = 0.0;
  local_e8[0].fields.m_FaceID = 0;
  local_118.fields.m_Point.fields.x = 0.0;
  local_118.fields.m_Point.fields.y = 0.0;
  local_118.fields.m_Point.fields.z = 0.0;
  local_118.fields.m_Normal.fields.x = 0.0;
  local_118.fields.m_Distance = 0.0;
  local_118.fields.m_UV.fields.x = 0.0;
  local_118.fields.m_UV.fields.y = 0.0;
  local_118.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_e8[0].fields.m_Point.fields.x = 0.0;
  local_e8[0].fields.m_Point.fields.y = 0.0;
  local_e8[0].fields.m_Point.fields.z = 0.0;
  local_e8[0].fields.m_Normal.fields.x = 0.0;
  local_e8[0].fields.m_Distance = 0.0;
  local_e8[0].fields.m_UV.fields.x = 0.0;
  local_e8[0].fields.m_UV.fields.y = 0.0;
  local_e8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if (pCVar13 == (Characters_Human_o *)0x0) {
label_182149ae2:
    ThrowNullReferenceException();
  }
  bVar28 = (*(pCVar13->klass->vtable)._74_IsMine.methodPtr)
                     (pCVar13,(pCVar13->klass->vtable)._74_IsMine.method);
  fVar45 = (__this->fields)._hookPosition.fields.x;
  fVar46 = (__this->fields)._hookPosition.fields.y;
  fVar47 = (__this->fields)._hookPosition.fields.z;
  fVar4 = (__this->fields)._baseVelocity.fields.x;
  fVar44 = (__this->fields)._baseVelocity.fields.y;
  fVar5 = (__this->fields)._baseVelocity.fields.z;
  if (!bVar28) {
    fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = (__this->fields)._relativeVelocity.fields.x;
    fVar7 = (__this->fields)._relativeVelocity.fields.y;
    fVar8 = (__this->fields)._relativeVelocity.fields.z;
    fVar43 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pSVar14 = (__this->fields)._nodes;
    (__this->fields)._hookPosition.fields.x = fVar43 * fVar6 + fVar42 * fVar4 * 50.0 + fVar45;
    (__this->fields)._hookPosition.fields.y = fVar43 * fVar7 + fVar42 * fVar44 * 50.0 + fVar46;
    (__this->fields)._hookPosition.fields.z = fVar43 * fVar8 + fVar42 * fVar5 * 50.0 + fVar47;
    pMVar27 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar14 != (System_Collections_Generic_List_Vector3__o *)0x0) {
      uVar9._0_4_ = (__this->fields)._hookPosition.fields.x;
      uVar9._4_4_ = (__this->fields)._hookPosition.fields.y;
      fVar45 = (__this->fields)._hookPosition.fields.z;
      piVar1 = &(pSVar14->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar15 = (pSVar14->fields)._items;
      if (pUVar15 != (UnityEngine_Vector3_array *)0x0) {
        uVar40 = (pSVar14->fields)._size;
        if (uVar40 < (uint)pUVar15->max_length) {
          (pSVar14->fields)._size = uVar40 + 1;
          if ((uint)pUVar15->max_length <= uVar40) goto label_182149ae8;
          pUVar15->m_Items[(int)uVar40].fields.x = (float)uVar9;
          pUVar15->m_Items[(int)uVar40].fields.y = uVar9._4_4_;
          pUVar15->m_Items[(int)uVar40].fields.z = fVar45;
        }
        else {
          local_138._0_8_ = uVar9;
          local_138.z = fVar45;
          System_Collections_Generic_List_Vector3___AddWithResize
                    (pSVar14,(UnityEngine_Vector3_o *)&local_138,
                     (MethodInfo_99C850 *)pMVar27->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
    goto label_182149ae2;
  }
  (__this->fields).HasOffset = false;
  fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar6 = (__this->fields)._relativeVelocity.fields.x;
  fVar7 = (__this->fields)._relativeVelocity.fields.y;
  fVar8 = (__this->fields)._relativeVelocity.fields.z;
  fVar43 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pSVar14 = (__this->fields)._nodes;
  (__this->fields)._hookPosition.fields.x = fVar6 * fVar43 + fVar4 * fVar42 * 50.0 + fVar45;
  (__this->fields)._hookPosition.fields.y = fVar7 * fVar43 + fVar44 * fVar42 * 50.0 + fVar46;
  (__this->fields)._hookPosition.fields.z = fVar8 * fVar43 + fVar5 * fVar42 * 50.0 + fVar47;
  if (pSVar14 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_182149ae2;
  System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
            ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_138,
             (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)(__this->fields)._nodes,
             (pSVar14->fields)._size + -1,
             (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  pSVar14 = (__this->fields)._nodes;
  if (pSVar14 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_182149ae2;
  if (1 < (pSVar14->fields)._size) {
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
              ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_138,
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar14,
               (pSVar14->fields)._size + -2,
               (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  }
  fVar4 = local_138.z;
  uVar11 = local_138._0_8_;
  fVar45 = (__this->fields)._hookPosition.fields.x - local_138.x;
  fVar46 = (__this->fields)._hookPosition.fields.y - local_138.y;
  fVar47 = (__this->fields)._hookPosition.fields.z - local_138.z;
  local_138.y = fVar46;
  local_138.x = fVar45;
  local_138.z = fVar47;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar44 = (float)il2cpp_runtime_helper_180546a40(&local_138);
  if (fVar44 <= 1e-05) {
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar45 = (pUVar18->zeroVector).fields.x;
    fVar46 = (pUVar18->zeroVector).fields.y;
    fVar47 = (pUVar18->zeroVector).fields.z;
  }
  else {
    fVar45 = fVar45 / fVar44;
    fVar46 = fVar46 / fVar44;
    fVar47 = fVar47 / fVar44;
  }
  if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
  }
  pUVar16 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
  fVar44 = (float)il2cpp_runtime_helper_180546a40(&local_138);
  iVar29 = UnityEngine_Touch__get_fingerId
                     ((UnityEngine_Touch_o *)&TypeInfo_Characters_Hook->static_fields->HookMask,
                      (MethodInfo *)0x0);
  if ((TypeInfo_Utility_RaycastHelper->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_RaycastHelper);
  }
  uVar41 = 0;
  local_128.z = fVar4;
  uVar19._4_4_ = fVar46;
  uVar19._0_4_ = fVar45;
  local_138.x = (float)uVar11;
  local_138.y = SUB84(uVar11,4);
  local_128.x = local_138.x;
  local_128.y = local_138.y;
  local_138._0_8_ = uVar19;
  local_138.z = fVar47;
  iVar29 = Utility_RaycastHelper__SortedRaycast_233eb40
                     ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_138,pUVar16,fVar44,
                      iVar29,(MethodInfo *)0x0);
  if (iVar29 < 1) {
label_182149a26:
    pMVar27 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    pSVar14 = (__this->fields)._nodes;
    if (pSVar14 != (System_Collections_Generic_List_Vector3__o *)0x0) {
      uVar12._0_4_ = (__this->fields)._hookPosition.fields.x;
      uVar12._4_4_ = (__this->fields)._hookPosition.fields.y;
      fVar45 = (__this->fields)._hookPosition.fields.z;
      piVar1 = &(pSVar14->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar15 = (pSVar14->fields)._items;
      if (pUVar15 != (UnityEngine_Vector3_array *)0x0) {
        uVar40 = (pSVar14->fields)._size;
        if (uVar40 < (uint)pUVar15->max_length) {
          (pSVar14->fields)._size = uVar40 + 1;
          if ((uint)pUVar15->max_length <= uVar40) goto label_182149ae8;
          pUVar15->m_Items[(int)uVar40].fields.x = (float)uVar12;
          pUVar15->m_Items[(int)uVar40].fields.y = uVar12._4_4_;
          pUVar15->m_Items[(int)uVar40].fields.z = fVar45;
        }
        else {
          local_128._0_8_ = uVar12;
          local_128.z = fVar45;
          System_Collections_Generic_List_Vector3___AddWithResize
                    (pSVar14,(UnityEngine_Vector3_o *)&local_128,
                     (MethodInfo_99C850 *)pMVar27->klass->rgctx_data[0xe].method);
        }
        fVar45 = (__this->fields)._currentLiveTime;
        fVar46 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar46 = fVar46 + fVar45;
        pfVar2 = &(__this->fields)._maxLiveTime;
        (__this->fields)._currentLiveTime = fVar46;
        if (fVar46 < *pfVar2 || fVar46 == *pfVar2) {
          return;
        }
        Characters_Hook__SetHookState(__this,3,(MethodInfo *)0x0);
        return;
      }
    }
    goto label_182149ae2;
  }
  if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
  }
  pUVar16 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
  if (pUVar16 == (UnityEngine_RaycastHit_array *)0x0) goto label_182149ae2;
  if ((int)pUVar16->max_length == 0) {
label_182149ae8:
    ThrowIndexOutOfRangeException();
  }
  local_118.fields.m_Point.fields.x = pUVar16->m_Items[0].fields.m_Point.fields.x;
  local_118.fields.m_Point.fields.y = pUVar16->m_Items[0].fields.m_Point.fields.y;
  local_118.fields._8_8_ = *(undefined8 *)&pUVar16->m_Items[0].fields.m_Point.fields.z;
  local_118.fields.m_Normal.fields.y = pUVar16->m_Items[0].fields.m_Normal.fields.y;
  local_118.fields.m_Normal.fields.z = pUVar16->m_Items[0].fields.m_Normal.fields.z;
  uVar20 = pUVar16->m_Items[0].fields.m_FaceID;
  uVar21 = pUVar16->m_Items[0].fields.m_Distance;
  uVar22 = pUVar16->m_Items[0].fields.m_UV.fields.x;
  local_118.fields._36_8_ = *(undefined8 *)&pUVar16->m_Items[0].fields.m_UV.fields.y;
  local_118.fields.m_FaceID = uVar20;
  local_118.fields.m_Distance = (float)uVar21;
  local_118.fields.m_UV.fields.x = (float)uVar22;
label_1821491f0:
  if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
  }
  pUVar16 = TypeInfo_Characters_Hook->static_fields->_raycastHits;
  if (pUVar16 == (UnityEngine_RaycastHit_array *)0x0) goto label_182149ae2;
  if ((uint)pUVar16->max_length <= (uint)uVar41) goto label_182149ae8;
  pUVar3 = pUVar16->m_Items + uVar41;
  local_e8[0].fields.m_Point.fields.x = (pUVar3->fields).m_Point.fields.x;
  local_e8[0].fields.m_Point.fields.y = (pUVar3->fields).m_Point.fields.y;
  local_e8[0].fields._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
  pUVar26 = &pUVar16->m_Items[uVar41].fields;
  local_e8[0].fields.m_Normal.fields.y = (pUVar26->m_Normal).fields.y;
  local_e8[0].fields.m_Normal.fields.z = (pUVar26->m_Normal).fields.z;
  uVar23 = pUVar26->m_FaceID;
  pUVar26 = &pUVar16->m_Items[uVar41].fields;
  uVar24 = pUVar26->m_Distance;
  uVar25 = (pUVar26->m_UV).fields.x;
  local_e8[0].fields._36_8_ = *(undefined8 *)&(pUVar26->m_UV).fields.y;
  local_e8[0].fields.m_FaceID = uVar23;
  local_e8[0].fields.m_Distance = (float)uVar24;
  local_e8[0].fields.m_UV.fields.x = (float)uVar25;
  pUVar31 = UnityEngine_RaycastHit__get_collider(local_e8,(MethodInfo *)0x0);
  if ((pUVar31 == (UnityEngine_Collider_o *)0x0) ||
     (pUVar32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0),
     pUVar32 == (UnityEngine_GameObject_o *)0x0)) goto label_182149ae2;
  iVar30 = UnityEngine_GameObject__get_layer(pUVar32,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (iVar30 == TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection) {
    pUVar31 = UnityEngine_RaycastHit__get_collider(local_e8,(MethodInfo *)0x0);
    if (((pUVar31 == (UnityEngine_Collider_o *)0x0) ||
        (pUVar32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0)
        , pUVar32 == (UnityEngine_GameObject_o *)0x0)) ||
       (__this_01 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar32,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_TitanProjectileDetection
                              ), __this_01 == (Characters_TitanProjectileDetection_o *)0x0))
    goto label_182149ae2;
    Characters_TitanProjectileDetection__RegisterHook(__this_01,__this,(MethodInfo *)0x0);
label_18214965b:
    uVar40 = (uint)uVar41 + 1;
    uVar41 = (ulonglong)uVar40;
    if (iVar29 <= (int)uVar40) goto label_182149a26;
    goto label_1821491f0;
  }
  pUVar31 = UnityEngine_RaycastHit__get_collider(local_e8,(MethodInfo *)0x0);
  if (pUVar31 == (UnityEngine_Collider_o *)0x0) goto label_182149ae2;
  pUVar33 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0);
  pCVar13 = (__this->fields)._owner;
  if (pCVar13 == (Characters_Human_o *)0x0) goto label_182149ae2;
  pUVar34 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar13,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar28 = UnityEngine_Object__op_Equality(pUVar33,pUVar34,(MethodInfo *)0x0);
  if (bVar28) goto label_18214965b;
  pCVar13 = (__this->fields)._owner;
  if (pCVar13 == (Characters_Human_o *)0x0) goto label_182149ae2;
  pCVar13 = (pCVar13->fields).BackHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar28 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar28) {
    pUVar31 = UnityEngine_RaycastHit__get_collider(local_e8,(MethodInfo *)0x0);
    if (pUVar31 == (UnityEngine_Collider_o *)0x0) goto label_182149ae2;
    pUVar33 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0);
    pCVar13 = (__this->fields)._owner;
    if ((pCVar13 == (Characters_Human_o *)0x0) ||
       (pCVar13 = (pCVar13->fields).BackHuman, pCVar13 == (Characters_Human_o *)0x0)) goto label_182149ae2;
    pUVar34 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar13,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar28 = UnityEngine_Object__op_Equality(pUVar33,pUVar34,(MethodInfo *)0x0);
    if (bVar28) goto label_18214965b;
  }
  pCVar13 = (__this->fields)._owner;
  if (pCVar13 == (Characters_Human_o *)0x0) goto label_182149ae2;
  if ((pCVar13->fields).CarryState == 1) {
    pCVar13 = (pCVar13->fields).Carrier;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar28 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar28) {
      pUVar31 = UnityEngine_RaycastHit__get_collider(local_e8,(MethodInfo *)0x0);
      if (pUVar31 == (UnityEngine_Collider_o *)0x0) goto label_182149ae2;
      pUVar33 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0);
      pCVar13 = (__this->fields)._owner;
      if ((pCVar13 == (Characters_Human_o *)0x0) ||
         (pCVar13 = (pCVar13->fields).Carrier, pCVar13 == (Characters_Human_o *)0x0)) goto label_182149ae2;
      pUVar34 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar13,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar28 = UnityEngine_Object__op_Equality(pUVar33,pUVar34,(MethodInfo *)0x0);
      if (bVar28) goto label_18214965b;
    }
  }
  local_118.fields.m_Point.fields.x = local_e8[0].fields.m_Point.fields.x;
  local_118.fields.m_Point.fields.y = local_e8[0].fields.m_Point.fields.y;
  local_118.fields.m_Point.fields.z = local_e8[0].fields.m_Point.fields.z;
  local_118.fields.m_Normal.fields.x = local_e8[0].fields.m_Normal.fields.x;
  local_118.fields.m_Normal.fields.y = local_e8[0].fields.m_Normal.fields.y;
  local_118.fields.m_Normal.fields.z = local_e8[0].fields.m_Normal.fields.z;
  local_118.fields.m_FaceID = local_e8[0].fields.m_FaceID;
  local_118.fields.m_Distance = local_e8[0].fields.m_Distance;
  local_118.fields.m_UV.fields.x = local_e8[0].fields.m_UV.fields.x;
  local_118.fields.m_UV.fields.y = local_e8[0].fields.m_UV.fields.y;
  local_118.fields.m_Collider.fields.m_Data = local_e8[0].fields.m_Collider.fields.m_Data;
  pUVar31 = UnityEngine_RaycastHit__get_collider(&local_118,(MethodInfo *)0x0);
  if ((pUVar31 == (UnityEngine_Collider_o *)0x0) ||
     (pUVar32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar31,(MethodInfo *)0x0),
     pUVar32 == (UnityEngine_GameObject_o *)0x0)) goto label_182149ae2;
  iVar29 = UnityEngine_GameObject__get_layer(pUVar32,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (iVar29 == TypeInfo_Utility_PhysicsLayer->static_fields->Human) {
label_1821498a6:
    pUVar35 = UnityEngine_RaycastHit__get_point
                        ((UnityEngine_Vector3_o *)&local_128,&local_118,(MethodInfo *)0x0);
    fVar45 = (pUVar35->fields).x;
    fVar46 = (pUVar35->fields).y;
    fVar47 = (pUVar35->fields).z;
    iVar29 = UnityEngine_GameObject__get_layer(pUVar32,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar29 == TypeInfo_Utility_PhysicsLayer->static_fields->Human) {
      pUVar37 = UnityEngine_GameObject__get_transform(pUVar32,(MethodInfo *)0x0);
      if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_182149ae2;
      pUVar35 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_128,pUVar37,(MethodInfo *)0x0);
      fVar45 = (pUVar35->fields).x;
      fVar46 = (pUVar35->fields).y;
      fVar47 = (pUVar35->fields).z;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar45 = (pUVar18->upVector).fields.x * 0.8 + fVar45;
      fVar46 = (pUVar18->upVector).fields.y * 0.8 + fVar46;
      fVar47 = (pUVar18->upVector).fields.z * 0.8 + fVar47;
    }
    pUVar37 = UnityEngine_GameObject__get_transform(pUVar32,(MethodInfo *)0x0);
    pUVar38 = UnityEngine_GameObject__get_transform(pUVar32,(MethodInfo *)0x0);
    if ((pUVar38 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar38 = UnityEngine_Transform__GetRoot(pUVar38,(MethodInfo *)0x0),
       pUVar38 == (UnityEngine_Transform_o *)0x0)) goto label_182149ae2;
    pUVar32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PunExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PunExtensions);
    }
    pPVar39 = Photon_Pun_PunExtensions__GetPhotonView(pUVar32,(MethodInfo *)0x0);
    if (pPVar39 == (Photon_Pun_PhotonView_o *)0x0) goto label_182149ae2;
    iVar29 = (pPVar39->fields).viewIdField;
    local_138.y = fVar46;
    local_138.x = fVar45;
    local_138.z = fVar47;
  }
  else {
    iVar29 = UnityEngine_GameObject__get_layer(pUVar32,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar29 == TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox) goto label_1821498a6;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar32,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar28 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar28) {
      pCVar13 = (__this->fields)._owner;
      pUVar35 = UnityEngine_RaycastHit__get_point
                          ((UnityEngine_Vector3_o *)&local_138,&local_118,(MethodInfo *)0x0);
      if (__this_00 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) goto label_182149ae2;
      local_128.x = (pUVar35->fields).x;
      local_128.y = (pUVar35->fields).y;
      local_128.z = (pUVar35->fields).z;
      CustomLogic_CustomLogicCollisionHandler__GetHooked
                (__this_00,pCVar13,(UnityEngine_Vector3_o *)&local_128,(__this->fields)._left,
                 (MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar36 = Map_MapLoader__GetMapObject(pUVar32,(MethodInfo *)0x0);
    if (pMVar36 == (Map_MapObject_o *)0x0) {
label_1821495d9:
      pUVar35 = UnityEngine_RaycastHit__get_point
                          ((UnityEngine_Vector3_o *)&local_138,&local_118,(MethodInfo *)0x0);
      position = &local_128;
      iVar30 = -1;
      iVar29 = -1;
      pUVar37 = (UnityEngine_Transform_o *)0x0;
      local_128.x = (pUVar35->fields).x;
      local_128.y = (pUVar35->fields).y;
      local_128.z = (pUVar35->fields).z;
      goto label_182149814;
    }
    pMVar17 = (pMVar36->fields).ScriptObject;
    if (pMVar17 == (Map_MapScriptBaseObject_o *)0x0) goto label_182149ae2;
    if ((pMVar17->fields).Static == false) {
      if ((pMVar36->fields).RuntimeCreated == false) {
        pUVar35 = UnityEngine_RaycastHit__get_point
                            ((UnityEngine_Vector3_o *)&local_128,&local_118,(MethodInfo *)0x0);
        uVar10._0_4_ = (pUVar35->fields).x;
        uVar10._4_4_ = (pUVar35->fields).y;
        fVar45 = (pUVar35->fields).z;
        pUVar37 = UnityEngine_GameObject__get_transform(pUVar32,(MethodInfo *)0x0);
        pMVar17 = (pMVar36->fields).ScriptObject;
        if (pMVar17 != (Map_MapScriptBaseObject_o *)0x0) {
          iVar30 = (pMVar17->fields).Id;
          position = &local_128;
          iVar29 = -1;
          local_128._0_8_ = uVar10;
          local_128.z = fVar45;
          goto label_182149814;
        }
        goto label_182149ae2;
      }
      pUVar35 = UnityEngine_RaycastHit__get_point
                          ((UnityEngine_Vector3_o *)&local_138,&local_118,(MethodInfo *)0x0);
      local_128.x = (pUVar35->fields).x;
      local_128.y = (pUVar35->fields).y;
      local_128.z = (pUVar35->fields).z;
      pUVar37 = UnityEngine_GameObject__get_transform(pUVar32,(MethodInfo *)0x0);
      position = &local_128;
      iVar30 = -1;
      iVar29 = -1;
      goto label_182149814;
    }
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar11._0_4_ = (pUVar18->upVector).fields.x;
    uVar11._4_4_ = (pUVar18->upVector).fields.y;
    fVar45 = (pUVar18->upVector).fields.z;
    pUVar35 = UnityEngine_RaycastHit__get_normal
                        ((UnityEngine_Vector3_o *)&local_138,&local_118,(MethodInfo *)0x0);
    local_128.x = (pUVar35->fields).x;
    local_128.y = (pUVar35->fields).y;
    local_128.z = (pUVar35->fields).z;
    local_138._0_8_ = uVar11;
    local_138.z = fVar45;
    fVar45 = (float)il2cpp_runtime_helper_181d9e200(&local_138,&local_128);
    (__this->fields).HasOffset = fVar45 < 10.0;
    if (fVar45 >= 10.0) goto label_1821495d9;
    pUVar35 = UnityEngine_RaycastHit__get_point
                        ((UnityEngine_Vector3_o *)&local_128,&local_118,(MethodInfo *)0x0);
    iVar29 = -1;
    pUVar37 = (UnityEngine_Transform_o *)0x0;
    local_138.y = (pUVar35->fields).y + 0.1;
    local_138.x = (pUVar35->fields).x + 0.0;
    local_138.z = (pUVar35->fields).z + 0.0;
  }
  iVar30 = -1;
  position = &local_138;
label_182149814:
  Characters_Hook__SetHooked(__this,(UnityEngine_Vector3_o *)position,pUVar37,iVar29,iVar30,(MethodInfo *)0x0)
  ;
  return;
}


// Characters.Hook$$FixedUpdateHooked
// il2cpp: void Characters_Hook__FixedUpdateHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x182148b60

void Characters_Hook__FixedUpdateHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  UnityEngine_Transform_o *x;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184346c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c2e = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
    if (!bVar4) {
      return;
    }
    if ((__this->fields)._hasHookParent == false) {
      return;
    }
    x = (__this->fields).HookParent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pCVar3 = (__this->fields).HookCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pCVar3 = (__this->fields).HookCharacter;
      if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_182148c6e;
      if ((pCVar3->fields).Dead == false) {
        return;
      }
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((pCVar3->klass->_2).typeHierarchyDepth < bVar1) {
        return;
      }
      if ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)
      {
        return;
      }
    }
    Characters_Hook__SetHookState(__this,4,(MethodInfo *)0x0);
    return;
  }
label_182148c6e:
  ThrowNullReferenceException();
}


// Characters.Hook$$Update
// il2cpp: void Characters_Hook__Update (Characters_Hook_o* __this, const MethodInfo* method);
// 0x18214c890

void Characters_Hook__Update(Characters_Hook_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_LineRenderer_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Material_o *__this_02;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [4];
  
  if ((__this->fields).State == 1) {
    Characters_Hook__UpdateHooking(__this,(MethodInfo *)0x0);
  }
  else if ((__this->fields).State == 2) {
    Characters_Hook__UpdateHooked(__this,(MethodInfo *)0x0);
  }
  else if ((__this->fields).State == 3) {
    Characters_Hook__UpdateDisablingHooking(__this,(MethodInfo *)0x0);
  }
  else if ((__this->fields).State == 4) {
    pUVar5 = (__this->fields)._renderer;
    if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214cb0a;
    UnityEngine_LineRenderer__set_positionCount(pUVar5,2,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._renderer;
    pUVar7 = Characters_Hook__GetHookPosition(local_38,__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214cb0a;
    local_48.x = (pUVar7->fields).x;
    local_48.y = (pUVar7->fields).y;
    local_48.z = (pUVar7->fields).z;
    UnityEngine_LineRenderer__SetPosition(pUVar5,0,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pUVar6 = (__this->fields).Anchor;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18214cb0a;
    pUVar5 = (__this->fields)._renderer;
    pUVar7 = UnityEngine_Transform__get_position(local_38,pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214cb0a;
    local_48.x = (pUVar7->fields).x;
    local_48.y = (pUVar7->fields).y;
    local_48.z = (pUVar7->fields).z;
    UnityEngine_LineRenderer__SetPosition(pUVar5,1,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    fVar9 = (__this->fields)._currentLiveTime;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pUVar5 = (__this->fields)._renderer;
    fVar8 = fVar8 + fVar9;
    (__this->fields)._currentLiveTime = fVar8;
    if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214cb0a;
    fVar9 = 0.1 - fVar8 * 0.2;
    UnityEngine_LineRenderer__set_endWidth(pUVar5,fVar9,(MethodInfo *)0x0);
    UnityEngine_LineRenderer__set_startWidth(pUVar5,fVar9,(MethodInfo *)0x0);
    if (0.5 < (__this->fields)._currentLiveTime) {
      pUVar5 = (__this->fields)._renderer;
      if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto label_18214cb0a;
      UnityEngine_LineRenderer__set_positionCount(pUVar5,0,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._endSprite;
      (__this->fields).State = 0;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18214cb0a;
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
  }
  if (((__this->fields).State == 0) || ((__this->fields)._tiling <= 0.0)) {
    return;
  }
  pUVar7 = Characters_Hook__GetHookPosition(local_38,__this,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).Anchor;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    fVar9 = (pUVar7->fields).z;
    uVar1 = (pUVar7->fields).x;
    uVar3 = (pUVar7->fields).y;
    pUVar7 = UnityEngine_Transform__get_position(local_38,pUVar6,(MethodInfo *)0x0);
    uVar2 = (pUVar7->fields).x;
    uVar4 = (pUVar7->fields).y;
    local_48.z = fVar9 - (pUVar7->fields).z;
    local_48.y = (float)uVar3 - (float)uVar4;
    local_48.x = (float)uVar1 - (float)uVar2;
    fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_48);
    if (fVar9 == (__this->fields)._lastLength) {
      return;
    }
    __this_01 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    (__this->fields)._lastLength = fVar9;
    if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
      __this_02 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Material_o *)0x0) {
        value.fields.y = 1.0;
        value.fields.x = fVar9 * (__this->fields)._tiling;
        UnityEngine_Material__set_mainTextureScale(__this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18214cb0a:
  ThrowNullReferenceException();
}


// Characters.Hook$$FixedUpdateMock
// il2cpp: void Characters_Hook__FixedUpdateMock (Characters_Hook_o* __this, const MethodInfo* method);
// 0x182149af0

void Characters_Hook__FixedUpdateMock(Characters_Hook_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_ParticleSystem_o *__this_00;
  Characters_Human_o *pCVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if ((__this->fields).State == 1) {
    Characters_Hook__FixedUpdateHooking(__this,(MethodInfo *)0x0);
  }
  if (((__this->fields).State != 1) && ((__this->fields).State != 2)) {
    return;
  }
  __this_00 = (__this->fields)._particles;
  if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pUVar6 = Characters_Hook__GetHookPosition(&local_18,__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      local_28.z = (pUVar6->fields).z;
      local_28.x = (pUVar6->fields).x;
      local_28.y = (pUVar6->fields).y;
      UnityEngine_Transform__set_position(pUVar5,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if ((__this->fields).State != 2) {
        return;
      }
      if (Il2CppMethodInitialized_184346c2e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184346c2e = '\x01';
      }
      pCVar2 = (__this->fields)._owner;
      if (pCVar2 != (Characters_Human_o *)0x0) {
        bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
        if (!bVar4) {
          return;
        }
        if ((__this->fields)._hasHookParent == false) {
          return;
        }
        pUVar5 = (__this->fields).HookParent;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          pCVar3 = (__this->fields).HookCharacter;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            return;
          }
          pCVar3 = (__this->fields).HookCharacter;
          if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_182149c79;
          if ((pCVar3->fields).Dead == false) {
            return;
          }
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((pCVar3->klass->_2).typeHierarchyDepth < bVar1) {
            return;
          }
          if ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_Human) {
            return;
          }
        }
        Characters_Hook__SetHookState(__this,4,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182149c79:
  ThrowNullReferenceException();
}


// Characters.Hook$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_Hook__GetHookPosition (Characters_Hook_o* __this, const MethodInfo* method);
// 0x182149c80

UnityEngine_Vector3_o *
Characters_Hook__GetHookPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  UnityEngine_Vector3_o *pUVar5;
  undefined8 uVar6;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c2f = '\x01';
  }
  if ((__this->fields)._hasHookParent == false) {
    uVar6._0_4_ = (__this->fields)._hookPosition.fields.x;
    uVar6._4_4_ = (__this->fields)._hookPosition.fields.y;
    fVar4 = (__this->fields)._hookPosition.fields.z;
  }
  else {
    pUVar1 = (__this->fields).HookParent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields).HookParent;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_28.x = (__this->fields)._hookPosition.fields.x;
      local_28.y = (__this->fields)._hookPosition.fields.y;
      local_28.z = (__this->fields)._hookPosition.fields.z;
      pUVar5 = UnityEngine_Transform__TransformPoint
                         (&local_18,pUVar1,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      fVar2 = (pUVar5->fields).y;
      fVar4 = (pUVar5->fields).z;
      (__this->fields)._lastWorldHookPosition.fields.x = (pUVar5->fields).x;
      (__this->fields)._lastWorldHookPosition.fields.y = fVar2;
      (__this->fields)._lastWorldHookPosition.fields.z = fVar4;
    }
    uVar6._0_4_ = (__this->fields)._lastWorldHookPosition.fields.x;
    uVar6._4_4_ = (__this->fields)._lastWorldHookPosition.fields.y;
    fVar4 = (__this->fields)._lastWorldHookPosition.fields.z;
  }
  (__return_storage_ptr__->fields).x = (float)(int)uVar6;
  (__return_storage_ptr__->fields).y = (float)(int)((ulonglong)uVar6 >> 0x20);
  (__return_storage_ptr__->fields).z = fVar4;
  return __return_storage_ptr__;
}


// Characters.Hook$$OnDestroy
// il2cpp: void Characters_Hook__OnDestroy (Characters_Hook_o* __this, const MethodInfo* method);
// 0x182149d70

void Characters_Hook__OnDestroy(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *pUVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c30 = '\x01';
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
label_182149e9d:
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
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_182149e9d;
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar4,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  }
  return;
}


// Characters.Hook$$.ctor
// il2cpp: void Characters_Hook___ctor (Characters_Hook_o* __this, const MethodInfo* method);
// 0x18214cca0

void Characters_Hook___ctor(Characters_Hook_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  System_Collections_Generic_List_Vector3__o *__this_00;
  
  if (Il2CppMethodInitialized_184346c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_184346c31 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._nodes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes,__this_00);
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._baseVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._baseVelocity.fields.y = fVar3;
  (__this->fields)._baseVelocity.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._relativeVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._relativeVelocity.fields.y = fVar3;
  (__this->fields)._relativeVelocity.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._hookPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._hookPosition.fields.y = fVar3;
  (__this->fields)._hookPosition.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
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
// 0x18214cb10

void Characters_Hook___cctor(MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  UnityEngine_RaycastHit_array *value;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_184346c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RaycastHit_array);
    Il2CppMethodInitialized_184346c32 = '\x01';
  }
  value = (UnityEngine_RaycastHit_array *)SZArrayNew(TypeInfo_UnityEngine_RaycastHit_array,0x40);
  TypeInfo_Characters_Hook->static_fields->_raycastHits = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_Hook->static_fields->_raycastHits,value);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
        2 < (uint)layers->max_length)) &&
       (((layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection,
         3 < (uint)layers->max_length &&
         (layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
         4 < (uint)layers->max_length)) &&
        (layers->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        5 < (uint)layers->max_length)))) {
      layers->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Characters_Hook->static_fields->HookMask).fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


