// Type: Cameras.InGameCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Cameras/InGameCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/InGameCamera.cs
// --------------------------------

// Cameras.InGameCamera.<>c$$.cctor
// il2cpp: void Cameras_InGameCamera___c___cctor (const MethodInfo* method);
// 0x1822fe8f0

void Cameras_InGameCamera___c___cctor(MethodInfo *method)

{
  Cameras_InGameCamera___c_o *__this;
  
  if (Il2CppMethodInitialized_1843476ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera_c);
    Il2CppMethodInitialized_1843476ac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Cameras_InGameCamera_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_InGameCamera_c->static_fields->__9,__this);
  return;
}


// Cameras.InGameCamera.<>c$$.ctor
// il2cpp: void Cameras_InGameCamera___c___ctor (Cameras_InGameCamera___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Cameras_InGameCamera___c___ctor(Cameras_InGameCamera___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera.<>c$$<GetSortedCharacters>b__65_0
// il2cpp: int32_t Cameras_InGameCamera___c___GetSortedCharacters_b__65_0 (Cameras_InGameCamera___c_o* __this, Characters_BaseCharacter_o* x, const MethodInfo* method);
// 0x1822fe770

int32_t Cameras_InGameCamera___c___GetSortedCharacters_b__65_0
                  (Cameras_InGameCamera___c_o *__this,Characters_BaseCharacter_o *x,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if ((((x != (Characters_BaseCharacter_o *)0x0) &&
       (pUVar1 = (x->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0)) &&
      (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) &&
     (pPVar3 = (pPVar2->fields)._Owner_k__BackingField, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
    return (pPVar3->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$get_UsesMouseLook
// il2cpp: bool Cameras_InGameCamera__get_UsesMouseLook (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f5bf0

bool Cameras_InGameCamera__get_UsesMouseLook(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  Settings_GeneralSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_InputSettings_o *pSVar5;
  Settings_GeneralInputSettings_o *pSVar6;
  Settings_KeybindSetting_o *__this_00;
  bool bVar7;
  
  if (Il2CppMethodInitialized_18434768e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434768e = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((((pSVar3 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).OriginalCameraWOWRotation, pSVar4 == (Settings_BoolSetting_o *)0x0)) ||
      (pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings,
      pSVar5 == (Settings_InputSettings_o *)0x0)) ||
     ((pSVar6 = (pSVar5->fields).General, pSVar6 == (Settings_GeneralInputSettings_o *)0x0 ||
      (__this_00 = (pSVar6->fields).RotateWOWCamera, __this_00 == (Settings_KeybindSetting_o *)0x0)))) {
    ThrowNullReferenceException();
  }
  uVar2 = (__this->fields).CurrentCameraMode;
  bVar1 = (pSVar4->fields)._value;
  bVar7 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  if ((TypeInfo_Cameras_InGameCamera->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera);
  }
  if ((uVar2 & 0xfffffffd) != 0) {
    if (!bVar7) {
      return false;
    }
    if (uVar2 != 3) {
      return (bool)(uVar2 == 1 & bVar1);
    }
  }
  return true;
}


// Cameras.InGameCamera$$ShouldUseMouseLook
// il2cpp: bool Cameras_InGameCamera__ShouldUseMouseLook (int32_t mode, bool originalWOWRotation, bool rotateHeld, const MethodInfo* method);
// 0x1822f1ae0

bool Cameras_InGameCamera__ShouldUseMouseLook
               (int32_t mode,bool originalWOWRotation,bool rotateHeld,MethodInfo *method)

{
  bool bVar1;
  
  if ((mode & 0xfffffffdU) != 0) {
    if (!rotateHeld) {
      return false;
    }
    if (mode != 3) {
      bVar1 = false;
      if (mode == 1) {
        bVar1 = originalWOWRotation;
      }
      return bVar1;
    }
  }
  return true;
}


// Cameras.InGameCamera$$CheckSpectateRateLimit
// il2cpp: bool Cameras_InGameCamera__CheckSpectateRateLimit (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef890

bool Cameras_InGameCamera__CheckSpectateRateLimit(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (1.0 <= fVar1 - (__this->fields)._lastChangeSpectateID) {
    fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastChangeSpectateID = fVar1;
    return true;
  }
  return false;
}


// Cameras.InGameCamera$$SetCameraDistance
// il2cpp: void Cameras_InGameCamera__SetCameraDistance (Cameras_InGameCamera_o* __this, float distance, const MethodInfo* method);
// 0x1812bf1f0

void
Cameras_InGameCamera__SetCameraDistance(Cameras_InGameCamera_o* __this, float distance, MethodInfo* method)

{
  (__this->fields)._cameraDistance = value;
  return;
}


// Cameras.InGameCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_InGameCamera__ApplyGraphicsSettings (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef490

void Cameras_InGameCamera__ApplyGraphicsSettings(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Camera_o *pUVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434768f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434768f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).RenderDistance, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (pUVar3 = (__this->fields).Camera, pUVar3 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(pUVar3,(float)(pSVar2->fields)._value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if (((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
        (pSVar4 = (pSVar1->fields).HDR, pSVar4 != (Settings_BoolSetting_o *)0x0)) &&
       (pUVar3 = (__this->fields).Camera, pUVar3 != (UnityEngine_Camera_o *)0x0)) {
      UnityEngine_Camera__set_allowHDR(pUVar3,(pSVar4->fields)._value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$ApplyGeneralSettings
// il2cpp: void Cameras_InGameCamera__ApplyGeneralSettings (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef2e0

void Cameras_InGameCamera__ApplyGeneralSettings(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  System_String_o *key;
  Settings_IntSetting_o *pSVar3;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184347690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347690 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).CameraDistance, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    (__this->fields)._cameraDistance = (pSVar2->fields)._value + 0.3;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res18[0] = (__this->fields)._cameraDistance;
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance;
    value = il2cpp_value_box(g_data_184354e38,local_res18);
    PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CameraDistance, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
      if ((pSVar2->fields)._value == 0.0) {
        (__this->fields)._cameraDistance = 0.0;
      }
      if (Il2CppMethodInitialized_184347691 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        Il2CppMethodInitialized_184347691 = '\x01';
      }
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar3 = (pSVar1->fields).CameraMode, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        (__this->fields).CurrentCameraMode = (pSVar3->fields)._value;
        return;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$ResetDistance
// il2cpp: void Cameras_InGameCamera__ResetDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0e80

void Cameras_InGameCamera__ResetDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184347690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347690 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).CameraDistance, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    (__this->fields)._cameraDistance = (pSVar2->fields)._value + 0.3;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res18[0] = (__this->fields)._cameraDistance;
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance;
    value = il2cpp_value_box(g_data_184354e38,local_res18);
    PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CameraDistance, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
      if ((pSVar2->fields)._value == 0.0) {
        (__this->fields)._cameraDistance = 0.0;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$ResetCameraMode
// il2cpp: void Cameras_InGameCamera__ResetCameraMode (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0e10

void Cameras_InGameCamera__ResetCameraMode(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347691 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347691 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).CameraMode, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    (__this->fields).CurrentCameraMode = (pSVar2->fields)._value;
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$NextCameraMode
// il2cpp: int32_t Cameras_InGameCamera__NextCameraMode (int32_t current, int32_t selected, const MethodInfo* method);
// 0x1822f0d60

int32_t Cameras_InGameCamera__NextCameraMode(int32_t current,int32_t selected,MethodInfo *method)

{
  int32_t iVar1;
  
  if (current == 0) {
    iVar1 = 1;
  }
  else {
    if (current == 1) {
      return 2;
    }
    iVar1 = 0;
    if (current == 2) {
      iVar1 = 0;
      if (selected == 3) {
        iVar1 = 3;
      }
      return iVar1;
    }
  }
  return iVar1;
}


// Cameras.InGameCamera$$GetCameraDistance
// il2cpp: float Cameras_InGameCamera__GetCameraDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef9b0

float Cameras_InGameCamera__GetCameraDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184347692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184347692 = '\x01';
  }
  pCVar1 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar1 = (__this->fields)._follow;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar4) goto label_1822efaa5;
      pCVar1 = (__this->fields)._follow;
      if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
        player = (pPVar3->fields)._Owner_k__BackingField;
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        fVar5 = PhotonExtensions__GetFloatProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance,1.0,
                           (MethodInfo *)0x0);
        return fVar5;
      }
    }
    ThrowNullReferenceException();
  }
label_1822efaa5:
  if ((__this->fields).CurrentCameraMode != 2) {
    return (__this->fields)._titanZoom + (__this->fields)._cameraDistance;
  }
  return 0.0;
}


// Cameras.InGameCamera$$StartShake
// il2cpp: void Cameras_InGameCamera__StartShake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f1b10

void Cameras_InGameCamera__StartShake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  (__this->fields)._shakeTimeLeft = 1.0;
  (__this->fields)._currentShakeDistance = 10.0;
  (__this->fields)._shakeFlip = false;
  return;
}


// Cameras.InGameCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_InGameCamera__SetDefaultCameraPosition (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0fd0

void Cameras_InGameCamera__SetDefaultCameraPosition(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  bool bVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184347693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347693 = '\x01';
  }
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  tag = TypeInfo_Map_MapTags->static_fields->CameraSpawnPoint;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  x = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    if (bVar6) {
      if (x != (UnityEngine_Object_o *)0x0) {
        pUVar10 = (pUVar3->fields).Transform;
        pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_position
                             ((UnityEngine_Vector3_o *)&local_18,pUVar7,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            local_28.x = (pUVar8->fields).x;
            local_28.y = (pUVar8->fields).y;
            local_28.z = (pUVar8->fields).z;
            UnityEngine_Transform__set_position(pUVar10,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).Cache;
            if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
              pUVar10 = (pUVar3->fields).Transform;
              pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar9 = UnityEngine_Transform__get_rotation
                                   ((UnityEngine_Quaternion_o *)&local_18,pUVar7,(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  local_18.x = (pUVar9->fields).x;
                  local_18.y = (pUVar9->fields).y;
                  local_18.z = (pUVar9->fields).z;
                  local_18.w = (pUVar9->fields).w;
                  goto label_1822f1161;
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar10 = (pUVar3->fields).Transform;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar4->upVector).fields.x;
      uVar2 = (pUVar4->upVector).fields.y;
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        local_28.y = (float)uVar2 * 100.0;
        local_28.x = (float)uVar1 * 100.0;
        local_28.z = (pUVar4->upVector).fields.z * 100.0;
        UnityEngine_Transform__set_position(pUVar10,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar10 = (pUVar3->fields).Transform;
          if (Il2CppMethodInitialized_18433de5b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_18433de5b = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
            local_18.x = (pUVar5->identityQuaternion).fields.x;
            local_18.y = (pUVar5->identityQuaternion).fields.y;
            local_18.z = (pUVar5->identityQuaternion).fields.z;
            local_18.w = (pUVar5->identityQuaternion).fields.w;
label_1822f1161:
            UnityEngine_Transform__set_rotation
                      (pUVar10,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$SetFollow
// il2cpp: void Cameras_InGameCamera__SetFollow (Cameras_InGameCamera_o* __this, Characters_BaseCharacter_o* character, bool resetRotation, const MethodInfo* method);
// 0x1822f1220
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f1ab0: xor r8d, r8d
// asm:   0x1822f1ab3: xor edx, edx
// asm:   0x1822f1ab5: call 0x182246530  ; UI_HUDBottomHandler__SetBottomHUD()
// asm:   0x1822f1aba: jmp 0x1822f1944

void Cameras_InGameCamera__SetFollow
               (Cameras_InGameCamera_o *__this,Characters_BaseCharacter_o *character,bool resetRotation,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  Characters_BaseCharacter_o *pCVar5;
  Characters_CameraDetection_o *__this_00;
  Characters_BaseCharacter_c *pCVar6;
  System_Collections_Generic_List_BaseUseable__o *pSVar7;
  Characters_BaseUseable_array *__this_01;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *__this_02;
  UI_InGameMenu_o *pUVar9;
  UI_HUDBottomHandler_o *pUVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  Photon_Realtime_Player_o *pPVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  int32_t iVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Vector3_o *pUVar19;
  UnityEngine_Quaternion_o *pUVar20;
  Photon_Realtime_Player_o *pPVar21;
  Il2CppObject *pIVar22;
  System_String_o *pSVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  int32_t local_res8 [2];
  UnityEngine_Quaternion_Fields local_a8;
  UnityEngine_Quaternion_o local_98 [8];
  
  if (Il2CppMethodInitialized_184347694 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347694 = '\x01';
  }
  pCVar5 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)character,(MethodInfo *)0x0);
  (__this->fields)._follow = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._follow,character);
  if (bVar15) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__Clear((MethodInfo *)0x0);
    __this_00 = (__this->fields)._detection;
    (__this->fields)._titanZoom = 0.0;
    if (__this_00 == (Characters_CameraDetection_o *)0x0) goto label_1822f1abf;
    Characters_CameraDetection__RefreshFollow(__this_00,(MethodInfo *)0x0);
  }
  pCVar5 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar16 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar16) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar21 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    iVar17 = PhotonExtensions__GetIntProperty
                       (pPVar21,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,-1,
                        (MethodInfo *)0x0);
    if ((iVar17 != -1) &&
       (fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0),
       1.0 <= fVar24 - (__this->fields)._lastChangeSpectateID)) {
      fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar24;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar21 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar23 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
      local_res8[0] = -1;
      pIVar22 = il2cpp_value_box(g_data_184354e08,local_res8);
      PhotonExtensions__SetCustomProperty(pPVar21,pSVar23,pIVar22,(MethodInfo *)0x0);
    }
    pUVar9 = (__this->fields)._menu;
    if ((pUVar9 != (UI_InGameMenu_o *)0x0) &&
       (pUVar10 = (pUVar9->fields).HUDBottomHandler, pUVar10 != (UI_HUDBottomHandler_o *)0x0)) {
      UI_HUDBottomHandler__SetBottomHUD(pUVar10,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    goto label_1822f1abf;
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
label_1822f167d:
    fVar24 = 1.0;
    fVar26 = 1.0;
  }
  else {
    pCVar6 = character->klass;
    bVar4 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar6->_2).typeHierarchyDepth < bVar4) ||
       ((pCVar6->_2).typeHierarchy[(ulonglong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar4 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (((pCVar6->_2).typeHierarchyDepth < bVar4) ||
         ((pCVar6->_2).typeHierarchy[(ulonglong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter))
      {
        bVar4 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar6->_2).typeHierarchyDepth < bVar4) ||
           ((pCVar6->_2).typeHierarchy[(ulonglong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) goto label_1822f167d;
        bVar4 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar6->_2).typeHierarchyDepth < bVar4) ||
           ((pCVar6->_2).typeHierarchy[(ulonglong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(character);
        }
        pSVar7 = (*(uint64_t *)((char *)character + 0x288));
        if ((pSVar7 == (System_Collections_Generic_List_BaseUseable__o *)0x0) ||
           (__this_01 = (*(uint64_t *)((char *)pSVar7 + 0x38)), __this_01 == (Characters_BaseUseable_array *)0x0))
        goto label_1822f1abf;
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Transform_o *)__this_01,
                             (MethodInfo *)0x0);
        pUVar8 = (character->fields).Cache;
        if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = (pUVar8->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f1abf;
        fVar24 = (pUVar19->fields).x;
        fVar26 = (pUVar19->fields).y;
        fVar27 = (pUVar19->fields).z;
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_a8,pUVar18,(MethodInfo *)0x0);
        fVar1 = (pUVar19->fields).x;
        fVar2 = (pUVar19->fields).y;
        fVar3 = (pUVar19->fields).z;
        if (Il2CppMethodInitialized_18433dee7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433dee7 = '\x01';
        }
        fVar24 = fVar24 - fVar1;
        fVar26 = fVar26 - fVar2;
        fVar27 = fVar27 - fVar3;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar25 = (double)(fVar26 * fVar26 + fVar24 * fVar24 + fVar27 * fVar27);
        if (dVar25 < 0.0) {
          dVar25 = sqrt(dVar25);
        }
        else {
          dVar25 = SQRT(dVar25);
        }
        fVar26 = (float)dVar25;
        (__this->fields)._occlusionRadius = fVar26 * 0.45;
        fVar24 = fVar26 * 1.39;
        fVar26 = fVar26 * 0.25;
      }
      else {
        pUVar18 = (*(pCVar6->vtable)._77_GetCameraAnchor.methodPtr)
                            (character,(pCVar6->vtable)._77_GetCameraAnchor.method);
        if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_1822f1abf;
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_a8,pUVar18,(MethodInfo *)0x0);
        pUVar8 = (character->fields).Cache;
        if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = (pUVar8->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f1abf;
        fVar24 = (pUVar19->fields).x;
        fVar26 = (pUVar19->fields).y;
        fVar27 = (pUVar19->fields).z;
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_a8,pUVar18,(MethodInfo *)0x0);
        fVar1 = (pUVar19->fields).x;
        fVar2 = (pUVar19->fields).y;
        fVar3 = (pUVar19->fields).z;
        if (Il2CppMethodInitialized_18433dee7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433dee7 = '\x01';
        }
        fVar24 = fVar24 - fVar1;
        fVar26 = fVar26 - fVar2;
        fVar27 = fVar27 - fVar3;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar25 = (double)(fVar26 * fVar26 + fVar24 * fVar24 + fVar27 * fVar27);
        if (dVar25 < 0.0) {
          dVar25 = sqrt(dVar25);
        }
        else {
          dVar25 = SQRT(dVar25);
        }
        fVar26 = (float)dVar25;
        (__this->fields)._occlusionRadius = fVar26 * 0.45;
        fVar24 = fVar26 * 0.35;
        fVar26 = fVar26 * 0.25;
      }
    }
    else {
      fVar24 = 0.64;
      fVar26 = 0.64;
    }
  }
  (__this->fields)._anchorDistance = fVar26;
  (__this->fields)._heightDistance = fVar24;
  if (resetRotation) {
    pUVar8 = (__this->fields).Cache;
    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) || (character == (Characters_BaseCharacter_o *)0x0))
    goto label_1822f1abf;
    pUVar18 = (pUVar8->fields).Transform;
    bVar16 = (*(character->klass->vtable)._74_IsMine.methodPtr)
                       (character,(character->klass->vtable)._74_IsMine.method);
    if (bVar16) {
      pCVar5 = (__this->fields)._follow;
      if (((pCVar5 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar8 = (pCVar5->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_02 = (pUVar8->fields).Transform, __this_02 == (UnityEngine_Transform_o *)0x0))
      goto label_1822f1abf;
      pUVar20 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_a8,__this_02,(MethodInfo *)0x0);
      local_a8.x = (pUVar20->fields).x;
      local_a8.y = (pUVar20->fields).y;
      local_a8.z = (pUVar20->fields).z;
      local_a8.w = (pUVar20->fields).w;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pUVar20 = Utility_Util__ConstrainedToY(local_98,(UnityEngine_Quaternion_o *)&local_a8,(MethodInfo *)0x0)
      ;
    }
    else {
      local_a8.x = 0.0;
      local_a8.y = 0.0;
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      pUVar20 = UnityEngine_Quaternion__Internal_FromEulerRad
                          (local_98,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
    }
    uVar13._0_4_ = (pUVar20->fields).x;
    uVar13._4_4_ = (pUVar20->fields).y;
    uVar14._0_4_ = (pUVar20->fields).z;
    uVar14._4_4_ = (pUVar20->fields).w;
    if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_1822f1abf;
    local_a8._0_8_ = uVar13;
    local_a8._8_8_ = uVar14;
    UnityEngine_Transform__set_rotation(pUVar18,(UnityEngine_Quaternion_o *)&local_a8,(MethodInfo *)0x0);
  }
  else if (character == (Characters_BaseCharacter_o *)0x0) goto label_1822f1abf;
  bVar16 = (*(character->klass->vtable)._74_IsMine.methodPtr)
                     (character,(character->klass->vtable)._74_IsMine.method);
  pUVar9 = (__this->fields)._menu;
  if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_1822f1abf;
  pUVar10 = (pUVar9->fields).HUDBottomHandler;
  if (bVar16) {
    if (pUVar10 == (UI_HUDBottomHandler_o *)0x0) goto label_1822f1abf;
    UI_HUDBottomHandler__SetBottomHUD(pUVar10,character,(MethodInfo *)0x0);
    if (!bVar15) {
      fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (fVar24 - (__this->fields)._lastChangeSpectateID < 1.0) goto label_1822f192d;
      fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar24;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar21 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar23 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
    local_res8[0] = -1;
label_1822f1908:
    pIVar22 = il2cpp_value_box(g_data_184354e08,local_res8);
    PhotonExtensions__SetCustomProperty(pPVar21,pSVar23,pIVar22,(MethodInfo *)0x0);
  }
  else {
    if (pUVar10 == (UI_HUDBottomHandler_o *)0x0) goto label_1822f1abf;
    UI_HUDBottomHandler__SetBottomHUD(pUVar10,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
    if (bVar15) {
label_1822f17ee:
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar21 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pUVar8 = (character->fields).Cache;
      if (((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
          (pPVar11 = (pUVar8->fields).PhotonView, pPVar11 == (Photon_Pun_PhotonView_o *)0x0)) ||
         (pPVar12 = (pPVar11->fields)._Owner_k__BackingField, pPVar12 == (Photon_Realtime_Player_o *)0x0)) {
        ThrowNullReferenceException();
      }
      pSVar23 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
      local_res8[0] = (pPVar12->fields).actorNumber;
      goto label_1822f1908;
    }
    fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (1.0 <= fVar24 - (__this->fields)._lastChangeSpectateID) {
      fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar24;
      goto label_1822f17ee;
    }
  }
label_1822f192d:
  pUVar9 = (__this->fields)._menu;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    (pUVar9->fields)._spectateUpdateTimeLeft = 0.0;
    return;
  }
label_1822f1abf:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$Awake
// il2cpp: void Cameras_InGameCamera__Awake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef550

void Cameras_InGameCamera__Awake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Camera_o *pUVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_GeneralSettings_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  UnityEngine_GameObject_o *__this_00;
  UI_SnapshotHandler_o *value_00;
  Characters_CameraDetection_o *__this_01;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347695 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CameraDetection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SnapshotHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347695 = '\x01';
  }
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434768f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434768f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).RenderDistance, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (pUVar3 = (__this->fields).Camera, pUVar3 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(pUVar3,(float)(pSVar2->fields)._value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if (((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
        (pSVar4 = (pSVar1->fields).HDR, pSVar4 != (Settings_BoolSetting_o *)0x0)) &&
       (pUVar3 = (__this->fields).Camera, pUVar3 != (UnityEngine_Camera_o *)0x0)) {
      UnityEngine_Camera__set_allowHDR(pUVar3,(pSVar4->fields)._value,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184347690 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
        Il2CppMethodInitialized_184347690 = '\x01';
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar5 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).CameraDistance, pSVar6 != (Settings_FloatSetting_o *)0x0)) {
        (__this->fields)._cameraDistance = (pSVar6->fields)._value + 0.3;
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        local_res8[0] = (__this->fields)._cameraDistance;
        key = TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance;
        value = il2cpp_value_box(g_data_184354e38,local_res8);
        PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar5 != (Settings_GeneralSettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).CameraDistance, pSVar6 != (Settings_FloatSetting_o *)0x0)) {
          if ((pSVar6->fields)._value == 0.0) {
            (__this->fields)._cameraDistance = 0.0;
          }
          if (Il2CppMethodInitialized_184347691 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
            Il2CppMethodInitialized_184347691 = '\x01';
          }
          pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar5 != (Settings_GeneralSettings_o *)0x0) &&
             (pSVar2 = (pSVar5->fields).CameraMode, pSVar2 != (Settings_IntSetting_o *)0x0)) {
            (__this->fields).CurrentCameraMode = (pSVar2->fields)._value;
            pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
            if ((pSVar5 != (Settings_GeneralSettings_o *)0x0) &&
               (pSVar4 = (pSVar5->fields).SnapshotsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
              if ((pSVar4->fields)._value != false) {
                __this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1822ef884;
                value_00 = UnityEngine_GameObject__AddComponent_object_
                                     (__this_00,
                                      (MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_SnapshotHandler);
                (__this->fields)._snapshotHandler = value_00;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshotHandler,value_00);
              }
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_CameraDetection);
              Characters_CameraDetection___ctor(__this_01,__this,(MethodInfo *)0x0);
              (__this->fields)._detection = __this_01;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._detection,__this_01);
              return;
            }
          }
          goto label_1822ef884;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1822ef884:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$TakeSnapshot
// il2cpp: void Cameras_InGameCamera__TakeSnapshot (Cameras_InGameCamera_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x1822f1ea0

void Cameras_InGameCamera__TakeSnapshot
               (Cameras_InGameCamera_o *__this,UnityEngine_Vector3_o *position,int32_t damage,
               MethodInfo *method)

{
  UI_SnapshotHandler_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184347696 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347696 = '\x01';
  }
  pUVar1 = (__this->fields)._snapshotHandler;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields)._snapshotHandler;
    if (pUVar1 == (UI_SnapshotHandler_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_38[0].x = (position->fields).x;
    local_38[0].y = (position->fields).y;
    local_38[0].z = (position->fields).z;
    UI_SnapshotHandler__TakeSnapshot(pUVar1,(UnityEngine_Vector3_o *)local_38,damage,(MethodInfo *)0x0);
  }
  return;
}


// Cameras.InGameCamera$$Start
// il2cpp: void Cameras_InGameCamera__Start (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f1b30

void Cameras_InGameCamera__Start(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *value;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *value_00;
  UI_InGameMenu_o *value_01;
  
  if (Il2CppMethodInitialized_184347697 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347697 = '\x01';
  }
  value = (GameManagers_InGameManager_o *)
          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (value == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._inGameManager = value;
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,value);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 == (Settings_InputSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_00 = (pSVar2->fields).General;
  (__this->fields)._input = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._input,value_00);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value_01 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._menu = (UI_InGameMenu_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,(void *)0x0);
    return;
  }
  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if (((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchyDepth < bVar1) ||
     ((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception(value_01);
  }
  (__this->fields)._menu = value_01;
  bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if ((bVar1 <= (((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchyDepth) &&
     ((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value_01);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_01);
}


// Cameras.InGameCamera$$SyncCustomPosition
// il2cpp: void Cameras_InGameCamera__SyncCustomPosition (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f1d20

void Cameras_InGameCamera__SyncCustomPosition(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Camera_o *__this_00;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  CustomLogic_CustomLogicManager_StaticFields *pCVar5;
  UnityEngine_Quaternion_o *pUVar6;
  float value;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_184347698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184347698 = '\x01';
  }
  __this_00 = (__this->fields).Camera;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV <= 0.0) {
    value = 50.0;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    value = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
  }
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(__this_00,value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar4 = (pUVar3->fields).Transform;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
        local_28.x = (pCVar5->CameraPosition).fields.x;
        local_28.y = (pCVar5->CameraPosition).fields.y;
        local_28.z = (pCVar5->CameraPosition).fields.z;
        UnityEngine_Transform__set_position(pUVar4,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar4 = (pUVar3->fields).Transform;
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          uVar1 = (pCVar5->CameraRotation).fields.x;
          uVar2 = (pCVar5->CameraRotation).fields.y;
          local_28.y = (float)uVar2 * 0.017453292;
          local_28.x = (float)uVar1 * 0.017453292;
          local_28.z = (pCVar5->CameraRotation).fields.z * 0.017453292;
          pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                             (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            local_28.x = (pUVar6->fields).x;
            local_28.y = (pUVar6->fields).y;
            local_28.z = (pUVar6->fields).z;
            local_28.w = (pUVar6->fields).w;
            UnityEngine_Transform__set_rotation
                      (pUVar4,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateMapLights
// il2cpp: void Cameras_InGameCamera__UpdateMapLights (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f4020
// eh: try 0x1822f4180..0x1822f420b -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f41cc: mov rdx, qword ptr [rip + 0x1d96db5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose
// asm:   0x1822f41d3: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822f41d8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f41dd: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822f41e2: test rcx, rcx
// asm:   0x1822f41e5: jne 0x1822f420b
// asm:   0x1822f420b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

void Cameras_InGameCamera__UpdateMapLights(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  Settings_GraphicsSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  System_Collections_Generic_List_MapLight__o *__this_01;
  bool bVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Vector3_Fields local_68;
  undefined1 local_58 [16];
  Map_MapLight_o *local_48;
  System_Collections_Generic_List_Enumerator_object__o local_40 [2];
  
  if (Il2CppMethodInitialized_184347699 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347699 = '\x01';
  }
  local_40[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40[0].fields._index = 0;
  local_40[0].fields._version = 0;
  local_40[0].fields._current = (Il2CppObject *)0x0;
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)&local_68,__this_00,(MethodInfo *)0x0);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar5 != (Settings_GraphicsSettings_o *)0x0) &&
       (pSVar6 = (pSVar5->fields).LightDistance, pSVar6 != (Settings_IntSetting_o *)0x0)) {
      uVar1._0_4_ = (pUVar8->fields).x;
      uVar1._4_4_ = (pUVar8->fields).y;
      fVar2 = (pUVar8->fields).z;
      iVar3 = (pSVar6->fields)._value;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_01 = TypeInfo_Map_MapLoader->static_fields->MapLights;
      if (__this_01 != (System_Collections_Generic_List_MapLight__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                   (System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
        local_40[0].fields._list = (System_Collections_Generic_List_T__o *)local_58._0_8_;
        local_40[0].fields._index = local_58._8_4_;
        local_40[0].fields._version = local_58._12_4_;
        local_40[0].fields._current = (Il2CppObject *)local_48;
        local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_58._8_8_ = local_40;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (local_40,(MethodInfo_153A2A0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext)
          ;
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
            return;
          }
          if ((Map_MapLight_o *)local_40[0].fields._current == (Map_MapLight_o *)0x0) break;
          local_68._0_8_ = uVar1;
          local_68.z = fVar2;
          Map_MapLight__UpdateCull
                    ((Map_MapLight_o *)local_40[0].fields._current,(UnityEngine_Vector3_o *)&local_68,
                     (float)iVar3,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$FixedUpdate
// il2cpp: void Cameras_InGameCamera__FixedUpdate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef970

void Cameras_InGameCamera__FixedUpdate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_CameraDetection_o *pCVar1;
  
  Cameras_InGameCamera__UpdateMapLights(__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._detection;
  if (pCVar1 != (Characters_CameraDetection_o *)0x0) {
    (*(pCVar1->klass->vtable)._6_OnFixedUpdate.methodPtr)
              (pCVar1,(pCVar1->klass->vtable)._6_OnFixedUpdate.method);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$LateUpdate
// il2cpp: void Cameras_InGameCamera__LateUpdate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0680

void Cameras_InGameCamera__LateUpdate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  GameManagers_InGameManager_o *pGVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_Cycle_InGameCamera_SpecateMode__o *pUVar6;
  Settings_GeneralInputSettings_o *pSVar7;
  Settings_KeybindSetting_o *__this_00;
  Settings_GeneralSettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Characters_BaseCharacter_c *pCVar10;
  UI_InGameMenu_o *pUVar11;
  UI_HUDBottomHandler_o *pUVar12;
  UnityEngine_Camera_o *__this_01;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  CustomLogic_CustomLogicManager_StaticFields *pCVar15;
  bool bVar16;
  int32_t iVar17;
  System_Collections_Generic_List_BaseCharacter__o *__this_02;
  Characters_BaseCharacter_o *pCVar18;
  UnityEngine_Quaternion_o *pUVar19;
  float fVar20;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_18434769a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Set);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434769a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera == false) {
      pGVar4 = (__this->fields)._inGameManager;
      if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_1822f0d4b;
      pCVar18 = (__this->fields)._follow;
      pCVar5 = (pGVar4->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)pCVar5,(MethodInfo *)0x0);
      if (bVar16) {
        pGVar4 = (__this->fields)._inGameManager;
        if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_1822f0d4b;
        pCVar18 = (pGVar4->fields).CurrentCharacter;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar16 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar16) {
          pGVar4 = (__this->fields)._inGameManager;
          if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_1822f0d4b;
          Cameras_InGameCamera__SetFollow(__this,(pGVar4->fields).CurrentCharacter,true,(MethodInfo *)0x0);
        }
      }
      pGVar4 = (__this->fields)._inGameManager;
      if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_1822f0d4b;
      pCVar18 = (pGVar4->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar16 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar16) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        bVar16 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
        if (!bVar16) {
          bVar16 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
          if (!bVar16) {
            pSVar7 = (__this->fields)._input;
            if ((pSVar7 == (Settings_GeneralInputSettings_o *)0x0) ||
               (__this_00 = (pSVar7->fields).ChangeCamera, __this_00 == (Settings_KeybindSetting_o *)0x0))
            goto label_1822f0d4b;
            bVar16 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
            if (bVar16) {
              pCVar18 = (__this->fields)._follow;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar16 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (bVar16) {
                pUVar6 = (__this->fields).SpecMode;
                if (pUVar6 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_1822f0d4b;
                iVar17 = Utility_Cycle_Int32Enum___Current
                                   ((Utility_Cycle_T__o *)pUVar6,
                                    (MethodInfo_1387080 *)
                                    MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
                if (iVar17 == 0) {
                  pUVar6 = (__this->fields).SpecMode;
                  if (pUVar6 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_1822f0d4b;
                  Utility_Cycle_Int32Enum___Set
                            ((Utility_Cycle_T__o *)pUVar6,2,
                             (MethodInfo_13872C0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Set);
                  goto label_1822f0939;
                }
              }
              pUVar6 = (__this->fields).SpecMode;
              if (pUVar6 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_1822f0d4b;
              Utility_Cycle_Int32Enum___Next
                        ((Utility_Cycle_T__o *)pUVar6,
                         (MethodInfo_13870B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
            }
          }
        }
      }
      else {
        pUVar6 = (__this->fields).SpecMode;
        if (pUVar6 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_1822f0d4b;
        Utility_Cycle_Int32Enum___Set
                  ((Utility_Cycle_T__o *)pUVar6,0,
                   (MethodInfo_13872C0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Set);
      }
label_1822f0939:
      pUVar6 = (__this->fields).SpecMode;
      if (pUVar6 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_1822f0d4b;
      iVar17 = Utility_Cycle_Int32Enum___Current
                         ((Utility_Cycle_T__o *)pUVar6,
                          (MethodInfo_1387080 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
      if (iVar17 == 2) {
        pCVar18 = (Characters_BaseCharacter_o *)0x0;
label_1822f09e4:
        Cameras_InGameCamera__SetFollow(__this,pCVar18,true,(MethodInfo *)0x0);
      }
      else {
        pCVar18 = (__this->fields)._follow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar16 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar16) {
          if (Il2CppMethodInitialized_1843476a6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
            Il2CppMethodInitialized_1843476a6 = '\x01';
          }
          __this_02 = Cameras_InGameCamera__GetSortedCharacters(__this,(MethodInfo *)0x0);
          if (__this_02 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) goto label_1822f0d4b;
          if ((__this_02->fields)._size < 1) {
            pCVar18 = (Characters_BaseCharacter_o *)0x0;
          }
          else {
            pCVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,0,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
          }
          goto label_1822f09e4;
        }
      }
      pCVar18 = (__this->fields)._follow;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar16) {
        pGVar4 = (__this->fields)._inGameManager;
        if (pGVar4 != (GameManagers_InGameManager_o *)0x0) {
          pCVar18 = (__this->fields)._follow;
          pCVar5 = (pGVar4->fields).CurrentCharacter;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar16 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)pCVar5,(MethodInfo *)0x0
                             );
          if (bVar16) {
            Cameras_InGameCamera__UpdateMain(__this,(MethodInfo *)0x0);
            pCVar18 = (__this->fields)._follow;
            if (pCVar18 == (Characters_BaseCharacter_o *)0x0) goto label_1822f0d4b;
            if ((pCVar18->fields).Dead != false) {
              pUVar11 = (__this->fields)._menu;
              if ((pUVar11 == (UI_InGameMenu_o *)0x0) ||
                 (pUVar12 = (pUVar11->fields).HUDBottomHandler, pUVar12 == (UI_HUDBottomHandler_o *)0x0))
              goto label_1822f0d4b;
              UI_HUDBottomHandler__SetBottomHUD(pUVar12,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
            }
          }
          else {
            Cameras_InGameCamera__UpdateSpectate(__this,(MethodInfo *)0x0);
          }
          pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar8 != (Settings_GeneralSettings_o *)0x0) &&
             (pSVar9 = (pSVar8->fields).CameraClipping, pSVar9 != (Settings_BoolSetting_o *)0x0)) {
            if (((pSVar9->fields)._value == false) &&
               (pCVar18 = (__this->fields)._follow, pCVar18 != (Characters_BaseCharacter_o *)0x0)) {
              pCVar10 = pCVar18->klass;
              bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
              if ((bVar3 <= (pCVar10->_2).typeHierarchyDepth) &&
                 ((pCVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
                  (Il2CppClass *)TypeInfo_Characters_Human)) {
                fVar20 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
                if (0.0 < fVar20) {
                  Cameras_InGameCamera__UpdateObstacles(__this,(MethodInfo *)0x0);
                }
              }
            }
            pCVar18 = (__this->fields)._follow;
            if (pCVar18 != (Characters_BaseCharacter_o *)0x0) {
              if ((pCVar18->fields).Dead != false) {
                pUVar11 = (__this->fields)._menu;
                if ((pUVar11 == (UI_InGameMenu_o *)0x0) ||
                   (pUVar12 = (pUVar11->fields).HUDBottomHandler, pUVar12 == (UI_HUDBottomHandler_o *)0x0))
                goto label_1822f0d4b;
                UI_HUDBottomHandler__SetBottomHUD(pUVar12,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0)
                ;
              }
label_1822f0b8f:
              Cameras_InGameCamera__UpdateOcclusion(__this,(MethodInfo *)0x0);
              Cameras_InGameCamera__UpdateFOV(__this,(MethodInfo *)0x0);
              Cameras_InGameCamera__UpdateNapeLockImage(__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        pUVar6 = (__this->fields).SpecMode;
        if (pUVar6 != (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) {
          iVar17 = Utility_Cycle_Int32Enum___Current
                             ((Utility_Cycle_T__o *)pUVar6,
                              (MethodInfo_1387080 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current)
          ;
          if (iVar17 == 2) {
            Cameras_InGameCamera__UpdateFreeCam(__this,(MethodInfo *)0x0);
          }
          goto label_1822f0b8f;
        }
      }
      goto label_1822f0d4b;
    }
  }
  if (Il2CppMethodInitialized_184347698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184347698 = '\x01';
  }
  __this_01 = (__this->fields).Camera;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV <= 0.0) {
    fVar20 = 50.0;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    fVar20 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
  }
  if (__this_01 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(__this_01,fVar20,(MethodInfo *)0x0);
    pUVar13 = (__this->fields).Cache;
    if (pUVar13 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar14 = (pUVar13->fields).Transform;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
        local_28.x = (pCVar15->CameraPosition).fields.x;
        local_28.y = (pCVar15->CameraPosition).fields.y;
        local_28.z = (pCVar15->CameraPosition).fields.z;
        UnityEngine_Transform__set_position(pUVar14,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        pUVar13 = (__this->fields).Cache;
        if (pUVar13 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar14 = (pUVar13->fields).Transform;
          pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          uVar1 = (pCVar15->CameraRotation).fields.x;
          uVar2 = (pCVar15->CameraRotation).fields.y;
          local_28.y = (float)uVar2 * 0.017453292;
          local_28.x = (float)uVar1 * 0.017453292;
          local_28.z = (pCVar15->CameraRotation).fields.z * 0.017453292;
          pUVar19 = UnityEngine_Quaternion__Internal_FromEulerRad
                              (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            local_28.x = (pUVar19->fields).x;
            local_28.y = (pUVar19->fields).y;
            local_28.z = (pUVar19->fields).z;
            local_28.w = (pUVar19->fields).w;
            UnityEngine_Transform__set_rotation
                      (pUVar14,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
            if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
            }
            Cameras_CameraOcclusion__Clear((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1822f0d4b:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateOcclusion
// il2cpp: void Cameras_InGameCamera__UpdateOcclusion (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f47b0

void Cameras_InGameCamera__UpdateOcclusion(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  Characters_BaseCharacter_o *x;
  GameManagers_InGameManager_o *pGVar6;
  Characters_BaseCharacter_o *y;
  Settings_GeneralSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  longlong lVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Camera_o *value;
  Utility_BaseComponentCache_o *pUVar11;
  Cameras_CameraOcclusion_StaticFields *pCVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  UnityEngine_Vector3_o *pUVar18;
  System_Action_T1__T2__o *pSVar19;
  float fVar20;
  UnityEngine_Vector3_Fields local_58 [6];
  
  if (Il2CppMethodInitialized_18434769b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434769b = '\x01';
  }
  x = (__this->fields)._follow;
  if (x != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar3 <= (x->klass->_2).typeHierarchyDepth) &&
       ((x->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pGVar6 = (__this->fields)._inGameManager;
      if (pGVar6 != (GameManagers_InGameManager_o *)0x0) {
        y = (pGVar6->fields).CurrentCharacter;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar17 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        if ((!bVar17) || ((x->fields).Dead != false)) goto label_1822f4b4c;
        pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar7 != (Settings_GeneralSettings_o *)0x0) &&
           (pSVar8 = (pSVar7->fields).CameraClipping, pSVar8 != (Settings_BoolSetting_o *)0x0)) {
          if (((pSVar8->fields)._value != false) ||
             (fVar20 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0), fVar20 <= 0.0))
          goto label_1822f4b4c;
          lVar9 = ((UnityEngine_Object_Fields *)&x[1].monitor)->m_CachedPtr;
          if ((lVar9 != 0) &&
             (pUVar10 = *(UnityEngine_Transform_o **)(lVar9 + 0x38), pUVar10 != (UnityEngine_Transform_o *)0x0
             )) {
            value = (__this->fields).Camera;
            pUVar18 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_58,pUVar10,(MethodInfo *)0x0);
            pUVar11 = (__this->fields).Cache;
            if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar10 = (pUVar11->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
              fVar13 = (pUVar18->fields).x;
              fVar14 = (pUVar18->fields).y;
              fVar20 = (pUVar18->fields).z;
              pUVar18 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_58,pUVar10,(MethodInfo *)0x0);
              pUVar11 = (x->fields).Cache;
              if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar10 = (pUVar11->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                fVar4 = (pUVar18->fields).z;
                fVar15 = (pUVar18->fields).x;
                fVar16 = (pUVar18->fields).y;
                fVar1 = (__this->fields)._occlusionRadius;
                pUVar18 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)local_58,pUVar10,(MethodInfo *)0x0);
                uVar2._0_4_ = (pUVar18->fields).x;
                uVar2._4_4_ = (pUVar18->fields).y;
                fVar5 = (pUVar18->fields).z;
                if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                }
                if (Il2CppMethodInitialized_18434767c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Action_ScriptableRenderContext_Camera);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
                  Il2CppMethodInitialized_18434767c = '\x01';
                }
                if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                }
                TypeInfo_Cameras_CameraOcclusion->static_fields->_camera = value;
                Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->_camera,value);
                pCVar12 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                (pCVar12->_start).fields.x = fVar13;
                (pCVar12->_start).fields.y = fVar14;
                (pCVar12->_start).fields.z = fVar20;
                pCVar12 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                (pCVar12->_end).fields.x = fVar15;
                (pCVar12->_end).fields.y = fVar16;
                (pCVar12->_end).fields.z = fVar4;
                TypeInfo_Cameras_CameraOcclusion->static_fields->_radius = fVar1;
                local_58[0]._0_8_ = uVar2;
                local_58[0].z = fVar5;
                Cameras_CameraOcclusion__UpdateGroundPlane
                          ((UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
                if (TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed != false) {
                  return;
                }
                pSVar19 = (System_Action_T1__T2__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
                System_Action_ScriptableRenderContext__object____ctor
                          (pSVar19,(Il2CppObject *)0x0,
                           (intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering,
                           (MethodInfo_1467F20 *)0x0);
                UnityEngine_Rendering_RenderPipelineManager__add_beginCameraRendering
                          ((System_Action_ScriptableRenderContext__Camera__o *)pSVar19,(MethodInfo *)0x0);
                pSVar19 = (System_Action_T1__T2__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
                System_Action_ScriptableRenderContext__object____ctor
                          (pSVar19,(Il2CppObject *)0x0,
                           (intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering,
                           (MethodInfo_1467F20 *)0x0);
                UnityEngine_Rendering_RenderPipelineManager__add_endCameraRendering
                          ((System_Action_ScriptableRenderContext__Camera__o *)pSVar19,(MethodInfo *)0x0);
                if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                }
                TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed = true;
                return;
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1822f4b4c:
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$OnDestroy
// il2cpp: void Cameras_InGameCamera__OnDestroy (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0d90

void Cameras_InGameCamera__OnDestroy(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434769c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_18434769c = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$OnDisable
// il2cpp: void Cameras_InGameCamera__OnDisable (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0dd0

void Cameras_InGameCamera__OnDisable(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434769d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_18434769d = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$UpdateNapeLockImage
// il2cpp: void Cameras_InGameCamera__UpdateNapeLockImage (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f4220
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f44a7: xor r8d, r8d
// asm:   0x1822f44aa: xor edx, edx
// asm:   0x1822f44ac: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x1822f44b1: jmp 0x1822f447d

void Cameras_InGameCamera__UpdateNapeLockImage(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar5;
  Characters_BaseCharacter_o *pCVar8;
  GameManagers_InGameManager_o *pGVar9;
  Characters_BaseCharacter_o *y;
  Characters_BaseTitan_o *pCVar10;
  UI_InGameMenu_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  Characters_BaseTitanComponentCache_o *pCVar13;
  Cameras_BaseCamera_o *pCVar14;
  UnityEngine_Camera_o *__this_00;
  bool bVar15;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_18434769e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_18434769e = '\x01';
  }
  pCVar8 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    pGVar9 = (__this->fields)._inGameManager;
    if (pGVar9 == (GameManagers_InGameManager_o *)0x0) goto label_1822f44b3;
    pCVar8 = (__this->fields)._follow;
    y = (pGVar9->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((bVar15) && ((__this->fields)._napeLock != false)) {
      pCVar10 = (__this->fields)._napeLockTitan;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar15 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar15) {
        pUVar11 = (__this->fields)._menu;
        if ((pUVar11 != (UI_InGameMenu_o *)0x0) &&
           (pUVar12 = (pUVar11->fields).NapeLock, pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
          pCVar10 = (__this->fields)._napeLockTitan;
          if ((pCVar10 != (Characters_BaseTitan_o *)0x0) &&
             ((pCVar13 = (pCVar10->fields).BaseTitanCache,
              pCVar13 != (Characters_BaseTitanComponentCache_o *)0x0 &&
              (pUVar17 = (pCVar13->fields).Neck, pUVar17 != (UnityEngine_Transform_o *)0x0)))) {
            pUVar16 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_48,pUVar17,(MethodInfo *)0x0);
            pCVar10 = (__this->fields)._napeLockTitan;
            if ((pCVar10 != (Characters_BaseTitan_o *)0x0) &&
               ((pCVar13 = (pCVar10->fields).BaseTitanCache,
                pCVar13 != (Characters_BaseTitanComponentCache_o *)0x0 &&
                (pUVar17 = (pCVar13->fields).Neck, pUVar17 != (UnityEngine_Transform_o *)0x0)))) {
              uVar3 = (pUVar16->fields).x;
              uVar6 = (pUVar16->fields).y;
              fVar1 = (pUVar16->fields).z;
              pUVar16 = UnityEngine_Transform__get_forward(local_38,pUVar17,(MethodInfo *)0x0);
              pCVar10 = (__this->fields)._napeLockTitan;
              if (pCVar10 != (Characters_BaseTitan_o *)0x0) {
                fVar2 = (pCVar10->fields).Size;
                uVar4 = (pUVar16->fields).x;
                uVar7 = (pUVar16->fields).y;
                pCVar14 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                if ((pCVar14 != (Cameras_BaseCamera_o *)0x0) &&
                   (__this_00 = (pCVar14->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
                  local_48.y = (float)uVar6 - (float)uVar7 * fVar2;
                  local_48.x = (float)uVar3 - (float)uVar4 * fVar2;
                  local_48.z = fVar1 - fVar2 * (pUVar16->fields).z;
                  pUVar16 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                      (local_38,__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0
                                      );
                  pUVar11 = (__this->fields)._menu;
                  if ((pUVar11 != (UI_InGameMenu_o *)0x0) &&
                     (pUVar12 = (pUVar11->fields).NapeLock, pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
                    uVar5._0_4_ = (pUVar16->fields).x;
                    uVar5._4_4_ = (pUVar16->fields).y;
                    fVar1 = (pUVar16->fields).z;
                    pUVar17 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                    if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                      local_48._0_8_ = uVar5;
                      local_48.z = fVar1;
                      UnityEngine_Transform__set_position
                                (pUVar17,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_1822f44b3;
      }
    }
  }
  pUVar11 = (__this->fields)._menu;
  if ((pUVar11 != (UI_InGameMenu_o *)0x0) &&
     (pUVar12 = (pUVar11->fields).NapeLock, pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
    return;
  }
label_1822f44b3:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateMain
// il2cpp: void Cameras_InGameCamera__UpdateMain (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f2940
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f2b9c: jmp 0x1822f2bd6
// asm:   0x1822f2ed3: movss xmm6, dword ptr [rip + 0x1066755]
// asm:   0x1822f3478: movsd qword ptr [rsp + 0x30], xmm7
// asm:   0x1822f347e: movaps xmm3, xmm6
// asm:   0x1822f3481: jmp 0x1822f3512
// asm:   0x1822f3508: movsd qword ptr [rsp + 0x30], xmm6
// asm:   0x1822f350e: movaps xmm3, xmm8
// asm:   0x1822f39e6: xorps xmm15, xmm15
// asm:   0x1822f39ea: movaps xmm14, xmmword ptr [rsp + 0x70]

void Cameras_InGameCamera__UpdateMain(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined8 uVar17;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar22;
  undefined4 uVar35;
  undefined4 uVar36;
  int iVar37;
  uint uVar38;
  Settings_GeneralInputSettings_o *pSVar39;
  Settings_KeybindSetting_o *pSVar40;
  Settings_GeneralSettings_o *pSVar41;
  Settings_IntSetting_o *pSVar42;
  Characters_BaseCharacter_o *pCVar43;
  Characters_BaseCharacter_c *pCVar44;
  Settings_InputSettings_o *pSVar45;
  Settings_HumanInputSettings_o *pSVar46;
  Utility_BaseComponentCache_o *pUVar47;
  UnityEngine_Transform_o *pUVar48;
  longlong lVar49;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar50;
  Settings_FloatSetting_o *pSVar51;
  Settings_BoolSetting_o *pSVar52;
  Settings_FloatSetting_o *pSVar53;
  Settings_FloatSetting_o *pSVar54;
  Characters_BaseTitanComponentCache_o *pCVar55;
  undefined8 uVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  uint32_t uVar60;
  int32_t iVar61;
  int32_t iVar62;
  Characters_BaseTitan_o *pCVar63;
  UnityEngine_Vector3_o *pUVar64;
  UnityEngine_Transform_o *pUVar65;
  UnityEngine_Quaternion_o *pUVar66;
  UnityEngine_Transform_o *__this_01;
  byte bVar67;
  int iVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float local_res18;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_Fields local_118;
  UnityEngine_Quaternion_Fields local_108;
  UnityEngine_Quaternion_Fields local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  if (Il2CppMethodInitialized_18434769f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_18434769f = '\x01';
  }
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  local_f8.z = 0.0;
  local_f8.w = 0.0;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar57 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  local_res18 = 0.1;
  uVar60 = 0;
  if ((!bVar57) && (bVar57 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar57)) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields.hasValue == false) {
      pSVar39 = (__this->fields)._input;
      if ((pSVar39 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar40 = (pSVar39->fields).ChangeCamera, pSVar40 == (Settings_KeybindSetting_o *)0x0))
      goto label_1822f4005;
      bVar57 = Settings_KeybindSetting__GetKeyDown(pSVar40,false,(MethodInfo *)0x0);
      if (bVar57) {
        pSVar41 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar41 == (Settings_GeneralSettings_o *)0x0) ||
           (pSVar42 = (pSVar41->fields).CameraMode, pSVar42 == (Settings_IntSetting_o *)0x0))
        goto label_1822f4005;
        iVar68 = (pSVar42->fields)._value;
        iVar37 = (__this->fields).CurrentCameraMode;
        if ((TypeInfo_Cameras_InGameCamera->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera);
        }
        if (iVar37 == 0) {
          uVar60 = 1;
        }
        else if (iVar37 == 1) {
          uVar60 = 2;
        }
        else if ((iVar37 == 2) && (iVar68 == 3)) {
          uVar60 = 3;
        }
        goto label_1822f2bd6;
      }
    }
    else {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      uVar60 = System_Nullable_uint___get_Value
                         ((System_Nullable_uint__o *)
                          &TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode,
                          (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_CameraInputMode_get_Value);
label_1822f2bd6:
      (__this->fields).CurrentCameraMode = uVar60;
    }
    if (Il2CppMethodInitialized_1843476a2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_1843476a2 = '\x01';
    }
    pCVar43 = (__this->fields)._follow;
    if (pCVar43 != (Characters_BaseCharacter_o *)0x0) {
      pCVar44 = pCVar43->klass;
      bVar67 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar67 <= (pCVar44->_2).typeHierarchyDepth) &&
         ((pCVar44->_2).typeHierarchy[(ulonglong)bVar67 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
      {
        pSVar39 = (__this->fields)._input;
        if ((pSVar39 == (Settings_GeneralInputSettings_o *)0x0) ||
           (pSVar40 = (pSVar39->fields).ZoomIn, pSVar40 == (Settings_KeybindSetting_o *)0x0))
        goto label_1822f4005;
        bVar57 = Settings_KeybindSetting__GetKeyDown(pSVar40,false,(MethodInfo *)0x0);
        if (bVar57) {
          fVar73 = -0.1;
        }
        else {
          fVar73 = 0.0;
        }
        pSVar39 = (__this->fields)._input;
        if ((pSVar39 == (Settings_GeneralInputSettings_o *)0x0) ||
           (pSVar40 = (pSVar39->fields).ZoomOut, pSVar40 == (Settings_KeybindSetting_o *)0x0))
        goto label_1822f4005;
        bVar57 = Settings_KeybindSetting__GetKeyDown(pSVar40,false,(MethodInfo *)0x0);
        if (bVar57) {
          fVar73 = fVar73 + 0.1;
        }
        if (fVar73 != 0.0) {
          fVar73 = (__this->fields)._titanZoom + (__this->fields)._cameraDistance + fVar73;
          fVar69 = 0.3;
          if ((0.3 <= fVar73) && (fVar69 = 2.0, fVar73 <= 2.0)) {
            fVar69 = fVar73;
          }
          (__this->fields)._titanZoom = fVar69 - (__this->fields)._cameraDistance;
        }
      }
    }
    pSVar45 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar45 == (Settings_InputSettings_o *)0x0) ||
        (pSVar46 = (pSVar45->fields).Human, pSVar46 == (Settings_HumanInputSettings_o *)0x0)) ||
       (pSVar40 = (pSVar46->fields).NapeLock, pSVar40 == (Settings_KeybindSetting_o *)0x0))
    goto label_1822f4005;
    bVar57 = Settings_KeybindSetting__GetKeyDown(pSVar40,false,(MethodInfo *)0x0);
    if ((bVar57) &&
       (bVar57 = (__this->fields)._napeLock, (__this->fields)._napeLock = bVar57 == false, bVar57 == false)) {
      pCVar63 = Cameras_InGameCamera__GetNearestTitan(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar57 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar63,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar57) {
        pCVar43 = (__this->fields)._follow;
        if (((pCVar43 == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar47 = (pCVar43->fields).Cache, pUVar47 == (Utility_BaseComponentCache_o *)0x0)) ||
           ((pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0 ||
            (((pUVar64 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Vector3_o *)&local_118,pUVar48,(MethodInfo *)0x0),
              pCVar63 == (Characters_BaseTitan_o *)0x0 ||
              (pUVar47 = (pCVar63->fields).Cache, pUVar47 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))))))
        goto label_1822f4005;
        uVar17._0_4_ = (pUVar64->fields).x;
        uVar17._4_4_ = (pUVar64->fields).y;
        fVar73 = (pUVar64->fields).z;
        pUVar64 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_128,pUVar48,(MethodInfo *)0x0);
        local_118.x = (pUVar64->fields).x;
        local_118.y = (pUVar64->fields).y;
        local_118.z = (pUVar64->fields).z;
        local_128._0_8_ = uVar17;
        local_128.z = fVar73;
        fVar73 = (float)il2cpp_runtime_helper_180562c80(&local_128);
        if (fVar73 < 150.0) {
          (__this->fields)._napeLockTitan = pCVar63;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._napeLockTitan,pCVar63);
          goto label_1822f2e34;
        }
      }
      (__this->fields)._napeLock = false;
    }
label_1822f2e34:
    if (((__this->fields)._napeLock != false) &&
       (pCVar43 = (__this->fields)._follow, pCVar43 != (Characters_BaseCharacter_o *)0x0)) {
      pCVar44 = pCVar43->klass;
      bVar67 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar67 <= (pCVar44->_2).typeHierarchyDepth) &&
         ((pCVar44->_2).typeHierarchy[(ulonglong)bVar67 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        pCVar43 = (__this->fields)._follow;
        bVar67 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((pCVar43->klass->_2).typeHierarchyDepth < bVar67) ||
           ((pCVar43->klass->_2).typeHierarchy[(ulonglong)bVar67 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_Human)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar43);
        }
        lVar49 = *(longlong *)&(*(uint8_t *)((char *)pCVar43 + 0x148));
        if (lVar49 == 0) goto label_1822f4005;
        if (*(int *)(lVar49 + 0x1d0) != 0) {
          (__this->fields)._napeLock = false;
        }
      }
    }
  }
  fVar73 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Camera;
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto label_1822f4005;
  fVar69 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
  if (fVar73 != 0.0) {
    local_res18 = ((200.0 - fVar69) * fVar73) / 150.0;
  }
  pUVar47 = (__this->fields).Cache;
  local_e8 = local_res18;
  fStack_e4 = local_res18;
  fStack_e0 = local_res18;
  fStack_dc = local_res18;
  if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
     (pCVar43 = (__this->fields)._follow, pCVar43 == (Characters_BaseCharacter_o *)0x0)) goto label_1822f4005;
  pUVar48 = (pUVar47->fields).Transform;
  pUVar65 = (*(pCVar43->klass->vtable)._77_GetCameraAnchor.methodPtr)
                      (pCVar43,(pCVar43->klass->vtable)._77_GetCameraAnchor.method);
  if ((pUVar65 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar64 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_128,pUVar65,(MethodInfo *)0x0),
     pUVar48 == (UnityEngine_Transform_o *)0x0)) goto label_1822f4005;
  local_118.x = (pUVar64->fields).x;
  local_118.y = (pUVar64->fields).y;
  local_118.z = (pUVar64->fields).z;
  UnityEngine_Transform__set_position(pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
  pUVar47 = (__this->fields).Cache;
  if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0)) goto label_1822f4005;
  pUVar64 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_118,pUVar48,(MethodInfo *)0x0)
  ;
  fVar69 = (pUVar64->fields).x;
  fVar72 = (pUVar64->fields).y;
  fVar74 = (pUVar64->fields).z;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar75 = (pUVar50->upVector).fields.x;
  fVar76 = (pUVar50->upVector).fields.y;
  fVar1 = (pUVar50->upVector).fields.z;
  fVar70 = Cameras_InGameCamera__GetHeightDistance(__this,(MethodInfo *)0x0);
  pSVar41 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar41 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar51 = (pSVar41->fields).CameraHeight, pSVar51 == (Settings_FloatSetting_o *)0x0))
  goto label_1822f4005;
  fVar2 = (pSVar51->fields)._value;
  local_118.z = fVar1 * fVar70 * fVar2 + fVar74;
  local_118.y = fVar76 * fVar70 * fVar2 + fVar72;
  local_118.x = fVar75 * fVar70 * fVar2 + fVar69;
  UnityEngine_Transform__set_position(pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
  if (fVar73 == 0.0) {
    fVar73 = 0.6;
  }
  pUVar47 = (__this->fields).Cache;
  if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0)) goto label_1822f4005;
  pUVar64 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_118,pUVar48,(MethodInfo *)0x0)
  ;
  uVar3 = (pUVar64->fields).x;
  uVar23 = (pUVar64->fields).y;
  fVar69 = (pUVar64->fields).z;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  fVar73 = 0.6 - fVar73;
  pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar50->upVector).fields.x;
  uVar24 = (pUVar50->upVector).fields.y;
  fVar72 = fVar73 * (pUVar50->upVector).fields.z;
  local_118.z = fVar69 - (fVar72 + fVar72);
  local_118.y = (float)uVar23 - (fVar73 * (float)uVar24 + fVar73 * (float)uVar24);
  local_118.x = (float)uVar3 - (fVar73 * (float)uVar4 + fVar73 * (float)uVar4);
  UnityEngine_Transform__set_position(pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
  if ((__this->fields)._napeLock == false) {
    bVar57 = false;
  }
  else {
    pCVar63 = (__this->fields)._napeLockTitan;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar57 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar63,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar58 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  fVar73 = local_res18;
  fVar69 = local_res18;
  if ((!bVar58) && (bVar58 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar58)) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked == false) {
      pSVar41 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if (((pSVar41 == (Settings_GeneralSettings_o *)0x0) ||
          (pSVar51 = (pSVar41->fields).MouseSpeed, pSVar51 == (Settings_FloatSetting_o *)0x0)) ||
         (pSVar52 = (pSVar41->fields).InvertMouse, pSVar52 == (Settings_BoolSetting_o *)0x0))
      goto label_1822f4005;
      iVar68 = -1;
      if ((pSVar52->fields)._value == false) {
        iVar68 = 1;
      }
      pSVar41 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      pSVar53 = (pSVar41->fields).OriginalCameraDeadzone;
      if ((pSVar53 == (Settings_FloatSetting_o *)0x0) ||
         (pSVar54 = (pSVar41->fields).OriginalCameraSpeed, pSVar54 == (Settings_FloatSetting_o *)0x0))
      goto label_1822f4005;
      fVar72 = (pSVar51->fields)._value;
      fVar73 = (pSVar53->fields)._value;
      fVar69 = (pSVar54->fields)._value;
      if (Il2CppMethodInitialized_18434768e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
        Il2CppMethodInitialized_18434768e = '\x01';
      }
      pSVar41 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if (((pSVar41 == (Settings_GeneralSettings_o *)0x0) ||
          (pSVar52 = (pSVar41->fields).OriginalCameraWOWRotation, pSVar52 == (Settings_BoolSetting_o *)0x0))
         || ((pSVar45 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings,
             pSVar45 == (Settings_InputSettings_o *)0x0 ||
             ((pSVar39 = (pSVar45->fields).General, pSVar39 == (Settings_GeneralInputSettings_o *)0x0 ||
              (pSVar40 = (pSVar39->fields).RotateWOWCamera, pSVar40 == (Settings_KeybindSetting_o *)0x0))))))
      goto label_1822f4005;
      bVar58 = (pSVar52->fields)._value;
      uVar38 = (__this->fields).CurrentCameraMode;
      bVar59 = Settings_KeybindSetting__GetKey(pSVar40,false,(MethodInfo *)0x0);
      if ((TypeInfo_Cameras_InGameCamera->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera);
      }
      if ((uVar38 & 0xfffffffd) == 0) {
        bVar67 = 1;
      }
      else if (bVar59) {
        if (uVar38 == 3) {
          bVar67 = 1;
        }
        else {
          bVar67 = uVar38 == 1 & bVar58;
        }
      }
      else {
        bVar67 = 0;
      }
      if (((__this->fields).CurrentCameraMode == 1) && (bVar67 == 0)) {
        iVar61 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        fVar75 = (float)iVar61;
        fVar74 = (1.0 - fVar73) * 0.5 * fVar75;
        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        pUVar64 = UI_CursorManager__GetInGameMousePosition
                            ((UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
        fVar76 = (pUVar64->fields).x;
        fVar1 = (pUVar64->fields).y;
        if (fVar76 < fVar74) {
label_1822f3486:
          fVar73 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar47 = (__this->fields).Cache;
          if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f4005;
          pUVar65 = (pUVar47->fields).Transform;
          fVar69 = fVar73 * fVar72 * 62.0 * -((fVar74 - fVar76) / fVar75) * fVar69;
          pUVar64 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_118,pUVar48,(MethodInfo *)0x0);
          uVar56._0_4_ = (pUVar64->fields).x;
          uVar56._4_4_ = (pUVar64->fields).y;
          fVar73 = (pUVar64->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
label_1822f3512:
          local_128._0_8_ = uVar56;
          pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_118.x = (pUVar50->upVector).fields.x;
          local_118.y = (pUVar50->upVector).fields.y;
          local_118.z = (pUVar50->upVector).fields.z;
          local_128.z = fVar73;
          UnityEngine_Transform__RotateAround
                    (pUVar65,(UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_118,fVar69,
                     (MethodInfo *)0x0);
        }
        else {
          fVar73 = (fVar73 + 1.0) * 0.5 * fVar75;
          if (fVar73 < fVar76) {
            if (fVar76 < fVar74) goto label_1822f3486;
            fVar74 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            pUVar47 = (__this->fields).Cache;
            if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
            goto label_1822f4005;
            pUVar65 = (pUVar47->fields).Transform;
            fVar69 = fVar74 * fVar72 * 62.0 * ((fVar76 - fVar73) / fVar75) * fVar69;
            pUVar64 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_118,pUVar48,(MethodInfo *)0x0);
            uVar56._0_4_ = (pUVar64->fields).x;
            uVar56._4_4_ = (pUVar64->fields).y;
            fVar73 = (pUVar64->fields).z;
            if (Il2CppMethodInitialized_18433de5c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5c = '\x01';
            }
            goto label_1822f3512;
          }
        }
        iVar61 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        iVar62 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        pUVar65 = (pUVar47->fields).Transform;
        pUVar66 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        local_f8.x = (pUVar66->fields).x;
        local_f8.y = (pUVar66->fields).y;
        local_f8.z = (pUVar66->fields).z;
        local_f8.w = (pUVar66->fields).w;
        pUVar64 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Quaternion_o *)&local_f8,
                             (MethodInfo *)0x0);
        uVar5 = (pUVar64->fields).x;
        uVar25 = (pUVar64->fields).y;
        local_118.x = (float)uVar5 * 57.29578;
        local_118.y = (float)uVar25 * 57.29578;
        local_118.z = (pUVar64->fields).z * 57.29578;
        pUVar64 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_118,
                             (MethodInfo *)0x0);
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        fVar73 = (pUVar64->fields).y;
        pUVar66 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        local_f8.x = (pUVar66->fields).x;
        local_f8.y = (pUVar66->fields).y;
        local_f8.z = (pUVar66->fields).z;
        local_f8.w = (pUVar66->fields).w;
        pUVar64 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Quaternion_o *)&local_f8,
                             (MethodInfo *)0x0);
        uVar6 = (pUVar64->fields).x;
        uVar26 = (pUVar64->fields).y;
        local_128.x = (float)uVar6 * 57.29578;
        local_128.y = (float)uVar26 * 57.29578;
        local_128.z = (pUVar64->fields).z * 57.29578;
        local_118.y = fVar73 * 0.017453292;
        local_118.x = ((((float)iVar61 * 0.6 - fVar1) * 280.0 * 0.5) / (float)iVar62) * 0.017453292;
        pUVar64 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_108,(UnityEngine_Vector3_o *)&local_128,
                             (MethodInfo *)0x0);
        local_118.z = (pUVar64->fields).z * 0.017453292;
        pUVar66 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)&local_108,(UnityEngine_Vector3_o *)&local_118,
                             (MethodInfo *)0x0);
        local_108.x = (pUVar66->fields).x;
        local_108.y = (pUVar66->fields).y;
        local_108.z = (pUVar66->fields).z;
        local_108.w = (pUVar66->fields).w;
        UnityEngine_Transform__set_rotation(pUVar65,(UnityEngine_Quaternion_o *)&local_108,(MethodInfo *)0x0);
      }
      fVar73 = local_e8;
      fVar69 = fStack_e4;
      if ((bVar57 == false) && (bVar67 != 0)) {
        fVar73 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        fVar69 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar18._0_4_ = (pUVar50->upVector).fields.x;
        uVar18._4_4_ = (pUVar50->upVector).fields.y;
        fVar74 = (pUVar50->upVector).fields.z;
        pUVar64 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0)
        ;
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        uVar19._0_4_ = (pUVar64->fields).x;
        uVar19._4_4_ = (pUVar64->fields).y;
        fVar70 = (pUVar64->fields).z;
        pUVar64 = UnityEngine_Transform__get_right
                            ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        fVar75 = (pUVar64->fields).x;
        fVar76 = (pUVar64->fields).y;
        fVar1 = (pUVar64->fields).z;
        local_128._0_8_ = uVar19;
        local_128.z = fVar70;
        local_118._0_8_ = uVar18;
        local_118.z = fVar74;
        fVar74 = (float)il2cpp_runtime_helper_181ebaeb0(&local_118,&local_128);
        fVar70 = -1.0;
        if ((local_128.z * local_118.y - local_128.y * local_118.z) * fVar75 +
            (local_128.x * local_118.z - local_128.z * local_118.x) * fVar76 +
            (local_128.y * local_118.x - local_128.x * local_118.y) * fVar1 < 0.0) {
          fVar75 = -1.0;
        }
        else {
          fVar75 = 1.0;
        }
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        fVar75 = fVar75 * fVar74;
        pUVar65 = (pUVar47->fields).Transform;
        fVar76 = -fVar69 * 10.0 * fVar72 * (float)iVar68;
        fVar74 = fVar75 + fVar76;
        pUVar64 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        uVar20._0_4_ = (pUVar64->fields).x;
        uVar20._4_4_ = (pUVar64->fields).y;
        fVar69 = (pUVar64->fields).z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_118.x = (pUVar50->upVector).fields.x;
        local_118.y = (pUVar50->upVector).fields.y;
        local_118.z = (pUVar50->upVector).fields.z;
        local_128._0_8_ = uVar20;
        local_128.z = fVar69;
        UnityEngine_Transform__RotateAround
                  (pUVar65,(UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_118,
                   fVar73 * 10.0 * fVar72,(MethodInfo *)0x0);
        if ((80.0 < fVar74) || (fVar74 < -80.0)) {
          pUVar47 = (__this->fields).Cache;
          if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f4005;
          pUVar65 = (pUVar47->fields).Transform;
          pUVar64 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
          pUVar47 = (__this->fields).Cache;
          if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f4005;
          uVar22._0_4_ = (pUVar64->fields).x;
          uVar22._4_4_ = (pUVar64->fields).y;
          fVar73 = (pUVar64->fields).z;
          pUVar64 = UnityEngine_Transform__get_right
                              ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
          if (0.0 <= fVar75) {
            fVar70 = 1.0;
          }
          local_118.x = (pUVar64->fields).x;
          local_118.y = (pUVar64->fields).y;
          local_118.z = (pUVar64->fields).z;
          local_128._0_8_ = uVar22;
          local_128.z = fVar73;
          UnityEngine_Transform__RotateAround
                    (pUVar65,(UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_118,
                     fVar70 * 80.0 - fVar75,(MethodInfo *)0x0);
          fVar73 = local_e8;
          fVar69 = fStack_e4;
        }
        else {
          pUVar47 = (__this->fields).Cache;
          if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f4005;
          pUVar65 = (pUVar47->fields).Transform;
          pUVar64 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
          pUVar47 = (__this->fields).Cache;
          if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f4005;
          uVar21._0_4_ = (pUVar64->fields).x;
          uVar21._4_4_ = (pUVar64->fields).y;
          fVar73 = (pUVar64->fields).z;
          pUVar64 = UnityEngine_Transform__get_right
                              ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
          local_118.x = (pUVar64->fields).x;
          local_118.y = (pUVar64->fields).y;
          local_118.z = (pUVar64->fields).z;
          local_128._0_8_ = uVar21;
          local_128.z = fVar73;
          UnityEngine_Transform__RotateAround
                    (pUVar65,(UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_118,fVar76,
                     (MethodInfo *)0x0);
          fVar73 = local_e8;
          fVar69 = fStack_e4;
        }
      }
    }
  }
  pUVar47 = (__this->fields).Cache;
  if ((pUVar47 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar48 = (pUVar47->fields).Transform, pUVar48 != (UnityEngine_Transform_o *)0x0)) {
    pUVar64 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
    pUVar47 = (__this->fields).Cache;
    if ((pUVar47 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar65 = (pUVar47->fields).Transform, pUVar65 != (UnityEngine_Transform_o *)0x0)) {
      uVar7 = (pUVar64->fields).x;
      uVar27 = (pUVar64->fields).y;
      fVar72 = (pUVar64->fields).z;
      pUVar64 = UnityEngine_Transform__get_forward
                          ((UnityEngine_Vector3_o *)&local_108,pUVar65,(MethodInfo *)0x0);
      fVar74 = (__this->fields)._anchorDistance;
      uVar8 = (pUVar64->fields).x;
      uVar28 = (pUVar64->fields).y;
      local_118.z = fVar72 - (pUVar64->fields).z * 10.0 * fVar74 * local_res18;
      local_118.y = (float)uVar27 - (float)uVar28 * 10.0 * fVar74 * fVar69;
      local_118.x = (float)uVar7 - (float)uVar8 * 10.0 * fVar74 * fVar73;
      UnityEngine_Transform__set_position(pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
      if (bVar57 != false) {
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        pUVar64 = UnityEngine_Transform__get_eulerAngles
                            ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        pCVar63 = (__this->fields)._napeLockTitan;
        if ((pCVar63 == (Characters_BaseTitan_o *)0x0) ||
           (((pCVar55 = (pCVar63->fields).BaseTitanCache,
             pCVar55 == (Characters_BaseTitanComponentCache_o *)0x0 ||
             (pUVar47 = (__this->fields).Cache, pUVar47 == (Utility_BaseComponentCache_o *)0x0)) ||
            (pCVar43 = (__this->fields)._follow, pCVar43 == (Characters_BaseCharacter_o *)0x0))))
        goto label_1822f4005;
        fVar73 = (pUVar64->fields).z;
        pUVar48 = (pUVar47->fields).Transform;
        pUVar65 = (pCVar55->fields).Neck;
        __this_01 = (*(pCVar43->klass->vtable)._77_GetCameraAnchor.methodPtr)
                              (pCVar43,(pCVar43->klass->vtable)._77_GetCameraAnchor.method);
        if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_1822f4005;
        pUVar64 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_108,__this_01,(MethodInfo *)0x0);
        uVar9 = (pUVar64->fields).x;
        uVar29 = (pUVar64->fields).y;
        if (pUVar65 == (UnityEngine_Transform_o *)0x0) goto label_1822f4005;
        fVar69 = (pUVar64->fields).z;
        pUVar64 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_108,pUVar65,(MethodInfo *)0x0);
        uVar10 = (pUVar64->fields).x;
        uVar30 = (pUVar64->fields).y;
        uVar71._0_4_ = (float)uVar10 * 0.2 + (float)uVar9 * 0.8;
        uVar71._4_4_ = (float)uVar30 * 0.2 + (float)uVar29 * 0.8;
        if (pUVar48 == (UnityEngine_Transform_o *)0x0) goto label_1822f4005;
        local_118.z = (pUVar64->fields).z * 0.2 + fVar69 * 0.8;
        local_118._0_8_ = uVar71;
        UnityEngine_Transform__LookAt_2f599f0(pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        pUVar65 = (pUVar47->fields).Transform;
        pUVar64 = UnityEngine_Transform__get_eulerAngles
                            ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar48 = (pUVar47->fields).Transform, pUVar48 == (UnityEngine_Transform_o *)0x0))
        goto label_1822f4005;
        local_118.x = (pUVar64->fields).x;
        pUVar64 = UnityEngine_Transform__get_eulerAngles
                            ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        local_118.y = (pUVar64->fields).y;
        local_118.z = fVar73;
        UnityEngine_Transform__set_localEulerAngles
                  (pUVar65,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
        pCVar63 = (__this->fields)._napeLockTitan;
        if (pCVar63 == (Characters_BaseTitan_o *)0x0) goto label_1822f4005;
        if ((pCVar63->fields).Dead != false) {
          (__this->fields)._napeLockTitan = (Characters_BaseTitan_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._napeLockTitan,(void *)0x0);
          (__this->fields)._napeLock = false;
        }
      }
      pUVar47 = (__this->fields).Cache;
      if ((pUVar47 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar48 = (pUVar47->fields).Transform, pUVar48 != (UnityEngine_Transform_o *)0x0)) {
        pUVar64 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
        pUVar47 = (__this->fields).Cache;
        if ((pUVar47 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar65 = (pUVar47->fields).Transform, pUVar65 != (UnityEngine_Transform_o *)0x0)) {
          uVar11 = (pUVar64->fields).x;
          uVar31 = (pUVar64->fields).y;
          fVar73 = (pUVar64->fields).z;
          pUVar64 = UnityEngine_Transform__get_right
                              ((UnityEngine_Vector3_o *)&local_108,pUVar65,(MethodInfo *)0x0);
          pSVar41 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar41 != (Settings_GeneralSettings_o *)0x0) &&
             (pSVar51 = (pSVar41->fields).CameraSide, pSVar51 != (Settings_FloatSetting_o *)0x0)) {
            uVar12 = (pUVar64->fields).x;
            uVar32 = (pUVar64->fields).y;
            fVar69 = (pSVar51->fields)._value - 1.0;
            local_118.z = fVar69 * (pUVar64->fields).z + fVar73;
            local_118.x = (float)uVar12 * fVar69 + (float)uVar11;
            local_118.y = (float)uVar32 * fVar69 + (float)uVar31;
            UnityEngine_Transform__set_position(pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0)
            ;
            fVar73 = (__this->fields)._shakeTimeLeft;
            if (0.0 < fVar73) {
              fVar69 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              pUVar47 = (__this->fields).Cache;
              (__this->fields)._shakeTimeLeft = fVar73 - fVar69;
              if (pUVar47 == (Utility_BaseComponentCache_o *)0x0) goto label_1822f4005;
              pUVar48 = (pUVar47->fields).Transform;
              if ((__this->fields)._shakeFlip == false) {
                if (pUVar48 == (UnityEngine_Transform_o *)0x0) goto label_1822f4005;
                pUVar64 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
                uVar13 = (pUVar64->fields).x;
                uVar33 = (pUVar64->fields).y;
                fVar73 = (pUVar64->fields).z;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                fVar69 = (__this->fields)._currentShakeDistance;
                pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar14 = (pUVar50->upVector).fields.x;
                uVar34 = (pUVar50->upVector).fields.y;
                local_118.z = fVar73 - fVar69 * (pUVar50->upVector).fields.z;
                local_118.y = (float)uVar33 - fVar69 * (float)uVar34;
                local_118.x = (float)uVar13 - fVar69 * (float)uVar14;
              }
              else {
                if (pUVar48 == (UnityEngine_Transform_o *)0x0) goto label_1822f4005;
                pUVar64 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)&local_108,pUVar48,(MethodInfo *)0x0);
                uVar15 = (pUVar64->fields).x;
                uVar35 = (pUVar64->fields).y;
                fVar73 = (pUVar64->fields).z;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                fVar69 = (__this->fields)._currentShakeDistance;
                pUVar50 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar16 = (pUVar50->upVector).fields.x;
                uVar36 = (pUVar50->upVector).fields.y;
                local_118.z = fVar69 * (pUVar50->upVector).fields.z + fVar73;
                local_118.x = fVar69 * (float)uVar16 + (float)uVar15;
                local_118.y = fVar69 * (float)uVar36 + (float)uVar35;
              }
              UnityEngine_Transform__set_position
                        (pUVar48,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
              (__this->fields)._shakeFlip = (__this->fields)._shakeFlip == false;
              fVar73 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              (__this->fields)._currentShakeDistance =
                   (1.0 - fVar73 * 0.15 * 60.0) * (__this->fields)._currentShakeDistance;
            }
            return;
          }
        }
      }
    }
  }
label_1822f4005:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateSpectate
// il2cpp: void Cameras_InGameCamera__UpdateSpectate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f4d70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f5639: mov eax, esi
// asm:   0x1822f563b: jmp 0x1822f5656
// asm:   0x1822f566e: mov ebx, esi
// asm:   0x1822f5670: jmp 0x1822f5687

void Cameras_InGameCamera__UpdateSpectate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar15;
  undefined4 uVar23;
  undefined4 uVar24;
  UnityEngine_Camera_o *__this_00;
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_01;
  Utility_BaseComponentCache_o *pUVar25;
  UnityEngine_Vector3_StaticFields *pUVar26;
  Settings_GeneralSettings_o *pSVar27;
  Settings_FloatSetting_o *pSVar28;
  Settings_BoolSetting_o *pSVar29;
  Settings_GeneralInputSettings_o *pSVar30;
  Settings_KeybindSetting_o *pSVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  bool bVar34;
  bool bVar35;
  int32_t iVar36;
  int32_t iVar37;
  Characters_BaseMovementSync_o *pCVar38;
  UnityEngine_Quaternion_o *pUVar39;
  UnityEngine_Transform_o *pUVar40;
  UnityEngine_Vector3_o *pUVar41;
  System_Collections_Generic_List_BaseCharacter__o *pSVar42;
  Characters_BaseCharacter_o *pCVar43;
  int iVar44;
  UnityEngine_Quaternion_Fields *value;
  UnityEngine_Transform_o *pUVar45;
  MethodInfo *method_00;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  UnityEngine_Quaternion_Fields local_d8;
  UnityEngine_Quaternion_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_o local_a8 [10];
  
  if (Il2CppMethodInitialized_1843476a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_1843476a0 = '\x01';
  }
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_b8.w = 0.0;
  fVar46 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Camera;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    fVar47 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
    fVar50 = fVar46;
    if (fVar46 <= 0.3) {
      fVar50 = 0.3;
    }
    pCVar43 = (__this->fields)._follow;
    fVar50 = ((200.0 - fVar47) * fVar50) / 150.0;
    if (((pCVar43 != (Characters_BaseCharacter_o *)0x0) &&
        (pCVar38 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pCVar43,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync),
        pCVar38 != (Characters_BaseMovementSync_o *)0x0)) &&
       (__this_01 = (__this->fields).SpecMode, __this_01 != (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0))
    {
      uVar32._0_4_ = (pCVar38->fields)._correctCamera.fields.x;
      uVar32._4_4_ = (pCVar38->fields)._correctCamera.fields.y;
      uVar33._0_4_ = (pCVar38->fields)._correctCamera.fields.z;
      uVar33._4_4_ = (pCVar38->fields)._correctCamera.fields.w;
      iVar36 = Utility_Cycle_Int32Enum___Current
                         ((Utility_Cycle_T__o *)__this_01,
                          (MethodInfo_1387080 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
      pUVar25 = (__this->fields).Cache;
      if (pUVar25 != (Utility_BaseComponentCache_o *)0x0) {
        if (iVar36 == 1) {
          pCVar43 = (__this->fields)._follow;
          if (pCVar43 == (Characters_BaseCharacter_o *)0x0) goto label_1822f5968;
          pUVar45 = (pUVar25->fields).Transform;
          pUVar40 = (*(pCVar43->klass->vtable)._77_GetCameraAnchor.methodPtr)
                              (pCVar43,(pCVar43->klass->vtable)._77_GetCameraAnchor.method);
          if ((pUVar40 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar41 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_c8,pUVar40,(MethodInfo *)0x0),
             pUVar45 == (UnityEngine_Transform_o *)0x0)) goto label_1822f5968;
          local_d8.x = (pUVar41->fields).x;
          local_d8.y = (pUVar41->fields).y;
          local_d8.z = (pUVar41->fields).z;
          UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          fVar47 = (pUVar41->fields).x;
          fVar49 = (pUVar41->fields).y;
          fVar1 = (pUVar41->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar26 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar2 = (pUVar26->upVector).fields.x;
          fVar3 = (pUVar26->upVector).fields.y;
          fVar4 = (pUVar26->upVector).fields.z;
          fVar48 = Cameras_InGameCamera__GetHeightDistance(__this,(MethodInfo *)0x0);
          pSVar27 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar27 == (Settings_GeneralSettings_o *)0x0) ||
             (pSVar28 = (pSVar27->fields).CameraHeight, pSVar28 == (Settings_FloatSetting_o *)0x0))
          goto label_1822f5968;
          fVar5 = (pSVar28->fields)._value;
          local_d8.y = fVar3 * fVar48 * fVar5 + fVar49;
          local_d8.x = fVar2 * fVar48 * fVar5 + fVar47;
          local_d8.z = fVar4 * fVar48 * fVar5 + fVar1;
          UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          if (fVar46 == 0.0) {
            fVar46 = 0.6;
          }
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          uVar10 = (pUVar41->fields).x;
          uVar20 = (pUVar41->fields).y;
          fVar47 = (pUVar41->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          fVar46 = 0.6 - fVar46;
          pUVar26 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar11 = (pUVar26->upVector).fields.x;
          uVar21 = (pUVar26->upVector).fields.y;
          fVar49 = fVar46 * (pUVar26->upVector).fields.z;
          local_d8.z = fVar47 - (fVar49 + fVar49);
          local_d8.y = (float)uVar20 - (fVar46 * (float)uVar21 + fVar46 * (float)uVar21);
          local_d8.x = (float)uVar10 - (fVar46 * (float)uVar11 + fVar46 * (float)uVar11);
          UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          pSVar27 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if (((pSVar27 == (Settings_GeneralSettings_o *)0x0) ||
              (pSVar28 = (pSVar27->fields).MouseSpeed, pSVar28 == (Settings_FloatSetting_o *)0x0)) ||
             (pSVar29 = (TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings->fields).
                        InvertMouse, pSVar29 == (Settings_BoolSetting_o *)0x0)) goto label_1822f5968;
          fVar46 = (pSVar28->fields)._value;
          iVar44 = -1;
          if ((pSVar29->fields)._value == false) {
            iVar44 = 1;
          }
          bVar35 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
          if (bVar35) {
            fVar46 = 0.0;
          }
          fVar47 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
          fVar49 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          local_c8.x = (pUVar41->fields).x;
          local_c8.y = (pUVar41->fields).y;
          local_c8.z = (pUVar41->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar26 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_d8.x = (pUVar26->upVector).fields.x;
          local_d8.y = (pUVar26->upVector).fields.y;
          local_d8.z = (pUVar26->upVector).fields.z;
          UnityEngine_Transform__RotateAround
                    (pUVar45,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_d8,
                     fVar47 * 10.0 * fVar46,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          fVar49 = -fVar49 * 10.0 * fVar46 * (float)iVar44;
          pUVar39 = UnityEngine_Transform__get_rotation(local_a8,pUVar45,(MethodInfo *)0x0);
          local_b8.x = (pUVar39->fields).x;
          local_b8.y = (pUVar39->fields).y;
          local_b8.z = (pUVar39->fields).z;
          local_b8.w = (pUVar39->fields).w;
          pUVar41 = UnityEngine_Quaternion__Internal_ToEulerRad
                              ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Quaternion_o *)&local_b8,
                               (MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          uVar12 = (pUVar41->fields).x;
          uVar22 = (pUVar41->fields).y;
          local_c8.y = (float)uVar22 * 57.29578;
          local_c8.x = (float)uVar12 * 57.29578;
          local_c8.z = (pUVar41->fields).z * 57.29578;
          pUVar41 = UnityEngine_Quaternion__Internal_MakePositive
                              ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_c8,
                               (MethodInfo *)0x0);
          fVar46 = il2cpp_runtime_helper_1804f41a0((pUVar41->fields).x,360.0,method_00);
          fVar47 = fVar46 + fVar49;
          if (0.0 < fVar49) {
            if ((260.0 <= fVar46) || (bVar35 = false, fVar47 <= 260.0)) {
              if (fVar46 < 80.0) {
                bVar35 = fVar47 <= 80.0;
              }
              else {
                bVar35 = true;
              }
            }
          }
          else {
            bVar35 = true;
          }
          bVar34 = true;
          if ((fVar49 < 0.0) &&
             (((fVar46 <= 280.0 || (bVar34 = false, 280.0 <= fVar47)) && (bVar34 = true, 100.0 < fVar46)))) {
            bVar34 = 100.0 <= fVar47;
          }
          if ((bool)(bVar34 & bVar35)) {
            pUVar25 = (__this->fields).Cache;
            if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
            goto label_1822f5968;
            pUVar41 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
            pUVar25 = (__this->fields).Cache;
            if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar40 = (pUVar25->fields).Transform, pUVar40 == (UnityEngine_Transform_o *)0x0))
            goto label_1822f5968;
            uVar15._0_4_ = (pUVar41->fields).x;
            uVar15._4_4_ = (pUVar41->fields).y;
            fVar46 = (pUVar41->fields).z;
            pUVar41 = UnityEngine_Transform__get_right
                                ((UnityEngine_Vector3_o *)&local_d8,pUVar40,(MethodInfo *)0x0);
            local_c8.x = (pUVar41->fields).x;
            local_c8.y = (pUVar41->fields).y;
            local_c8.z = (pUVar41->fields).z;
            local_d8.z = fVar46;
            local_d8._0_8_ = uVar15;
            UnityEngine_Transform__RotateAround
                      (pUVar45,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_c8,fVar49,
                       (MethodInfo *)0x0);
          }
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar40 = (pUVar25->fields).Transform, pUVar40 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          uVar13 = (pUVar41->fields).x;
          uVar23 = (pUVar41->fields).y;
          fVar46 = (pUVar41->fields).z;
          pUVar41 = UnityEngine_Transform__get_forward
                              ((UnityEngine_Vector3_o *)&local_d8,pUVar40,(MethodInfo *)0x0);
          fVar47 = (__this->fields)._anchorDistance;
          value = &local_c8;
          uVar14 = (pUVar41->fields).x;
          uVar24 = (pUVar41->fields).y;
          local_c8.y = (float)uVar23 - fVar47 * (float)uVar24 * 10.0 * fVar50;
          local_c8.x = (float)uVar13 - fVar47 * (float)uVar14 * 10.0 * fVar50;
          local_c8.z = fVar46 - fVar47 * (pUVar41->fields).z * 10.0 * fVar50;
        }
        else {
          pUVar45 = (pUVar25->fields).Transform;
          if (pUVar45 == (UnityEngine_Transform_o *)0x0) goto label_1822f5968;
          pUVar39 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)&local_d8,pUVar45,(MethodInfo *)0x0);
          local_d8.x = (pUVar39->fields).x;
          local_d8.y = (pUVar39->fields).y;
          local_d8.z = (pUVar39->fields).z;
          local_d8.w = (pUVar39->fields).w;
          local_c8._0_8_ = uVar32;
          local_c8._8_8_ = uVar33;
          fVar47 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar39 = UnityEngine_Quaternion__Internal_Lerp
                              (local_a8,(UnityEngine_Quaternion_o *)&local_d8,
                               (UnityEngine_Quaternion_o *)&local_c8,fVar47 * 10.0,(MethodInfo *)0x0);
          local_c8.x = (pUVar39->fields).x;
          local_c8.y = (pUVar39->fields).y;
          local_c8.z = (pUVar39->fields).z;
          local_c8.w = (pUVar39->fields).w;
          UnityEngine_Transform__set_rotation(pUVar45,(UnityEngine_Quaternion_o *)&local_c8,(MethodInfo *)0x0)
          ;
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pCVar43 = (__this->fields)._follow, pCVar43 == (Characters_BaseCharacter_o *)0x0))
          goto label_1822f5968;
          pUVar45 = (pUVar25->fields).Transform;
          pUVar40 = (*(pCVar43->klass->vtable)._77_GetCameraAnchor.methodPtr)
                              (pCVar43,(pCVar43->klass->vtable)._77_GetCameraAnchor.method);
          if ((pUVar40 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar41 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_c8,pUVar40,(MethodInfo *)0x0),
             pUVar45 == (UnityEngine_Transform_o *)0x0)) goto label_1822f5968;
          local_d8.x = (pUVar41->fields).x;
          local_d8.y = (pUVar41->fields).y;
          local_d8.z = (pUVar41->fields).z;
          UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          fVar47 = (pUVar41->fields).x;
          fVar49 = (pUVar41->fields).y;
          fVar1 = (pUVar41->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar26 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar2 = (pUVar26->upVector).fields.x;
          fVar3 = (pUVar26->upVector).fields.y;
          fVar4 = (pUVar26->upVector).fields.z;
          fVar48 = Cameras_InGameCamera__GetHeightDistance(__this,(MethodInfo *)0x0);
          pSVar27 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar27 == (Settings_GeneralSettings_o *)0x0) ||
             (pSVar28 = (pSVar27->fields).CameraHeight, pSVar28 == (Settings_FloatSetting_o *)0x0))
          goto label_1822f5968;
          fVar5 = (pSVar28->fields)._value;
          local_d8.y = fVar5 * fVar48 * fVar3 + fVar49;
          local_d8.x = fVar5 * fVar48 * fVar2 + fVar47;
          local_d8.z = fVar5 * fVar48 * fVar4 + fVar1;
          UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          uVar6 = (pUVar41->fields).x;
          uVar16 = (pUVar41->fields).y;
          fVar47 = (pUVar41->fields).z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          fVar46 = 0.6 - fVar46;
          pUVar26 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar7 = (pUVar26->upVector).fields.x;
          uVar17 = (pUVar26->upVector).fields.y;
          fVar49 = fVar46 * (pUVar26->upVector).fields.z;
          local_d8.z = fVar47 - (fVar49 + fVar49);
          local_d8.y = (float)uVar16 - (fVar46 * (float)uVar17 + fVar46 * (float)uVar17);
          local_d8.x = (float)uVar6 - (fVar46 * (float)uVar7 + fVar46 * (float)uVar7);
          UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar45 = (pUVar25->fields).Transform, pUVar45 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          pUVar41 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar45,(MethodInfo *)0x0);
          pUVar25 = (__this->fields).Cache;
          if ((pUVar25 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar40 = (pUVar25->fields).Transform, pUVar40 == (UnityEngine_Transform_o *)0x0))
          goto label_1822f5968;
          uVar8 = (pUVar41->fields).x;
          uVar18 = (pUVar41->fields).y;
          fVar46 = (pUVar41->fields).z;
          pUVar41 = UnityEngine_Transform__get_forward
                              ((UnityEngine_Vector3_o *)&local_c8,pUVar40,(MethodInfo *)0x0);
          fVar47 = (__this->fields)._anchorDistance;
          value = &local_d8;
          uVar9 = (pUVar41->fields).x;
          uVar19 = (pUVar41->fields).y;
          local_d8.y = (float)uVar18 - fVar47 * (float)uVar19 * 10.0 * fVar50;
          local_d8.x = (float)uVar8 - fVar47 * (float)uVar9 * 10.0 * fVar50;
          local_d8.z = fVar46 - fVar47 * (pUVar41->fields).z * 10.0 * fVar50;
        }
        UnityEngine_Transform__set_position(pUVar45,(UnityEngine_Vector3_o *)value,(MethodInfo *)0x0);
        bVar35 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        if (!bVar35) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          bVar35 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          if (!bVar35) {
            pSVar30 = (__this->fields)._input;
            if ((pSVar30 != (Settings_GeneralInputSettings_o *)0x0) &&
               (pSVar31 = (pSVar30->fields).SpectateNextPlayer, pSVar31 != (Settings_KeybindSetting_o *)0x0))
            {
              bVar35 = Settings_KeybindSetting__GetKeyDown(pSVar31,false,(MethodInfo *)0x0);
              if (bVar35) {
                pSVar42 = Cameras_InGameCamera__GetSortedCharacters(__this,(MethodInfo *)0x0);
                if (pSVar42 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) goto label_1822f5968;
                if (0 < (pSVar42->fields)._size) {
                  iVar37 = Cameras_InGameCamera__GetSpectateIndex(__this,pSVar42,(MethodInfo *)0x0);
                  iVar36 = 0;
                  if (iVar37 + 1 < (pSVar42->fields)._size) {
                    iVar36 = iVar37 + 1;
                  }
                  pCVar43 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar42,iVar36,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
                  Cameras_InGameCamera__SetFollow(__this,pCVar43,true,(MethodInfo *)0x0);
                }
              }
              pSVar30 = (__this->fields)._input;
              if ((pSVar30 != (Settings_GeneralInputSettings_o *)0x0) &&
                 (pSVar31 = (pSVar30->fields).SpectatePreviousPlayer,
                 pSVar31 != (Settings_KeybindSetting_o *)0x0)) {
                bVar35 = Settings_KeybindSetting__GetKeyDown(pSVar31,false,(MethodInfo *)0x0);
                if (!bVar35) {
                  return;
                }
                pSVar42 = Cameras_InGameCamera__GetSortedCharacters(__this,(MethodInfo *)0x0);
                if (pSVar42 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
                  if ((pSVar42->fields)._size < 1) {
                    return;
                  }
                  iVar36 = Cameras_InGameCamera__GetSpectateIndex(__this,pSVar42,(MethodInfo *)0x0);
                  iVar44 = iVar36 + -1;
                  if (iVar44 < 0) {
                    iVar44 = (pSVar42->fields)._size + -1;
                  }
                  pCVar43 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar42,iVar44,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
                  Cameras_InGameCamera__SetFollow(__this,pCVar43,true,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto label_1822f5968;
          }
        }
        return;
      }
    }
  }
label_1822f5968:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateFreeCam
// il2cpp: void Cameras_InGameCamera__UpdateFreeCam (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f22c0

void Cameras_InGameCamera__UpdateFreeCam(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  Settings_GeneralInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  Settings_GeneralSettings_o *pSVar10;
  Settings_FloatSetting_o *pSVar11;
  UnityEngine_Transform_o *__this_00;
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_01;
  bool bVar12;
  UnityEngine_Vector3_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88 [10];
  
  if (Il2CppMethodInitialized_1843476a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_1843476a1 = '\x01';
  }
  bVar12 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (!bVar12) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar12 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (bVar12) {
      return;
    }
    pSVar5 = (__this->fields)._input;
    if ((pSVar5 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar6 = (pSVar5->fields).SpectateNextPlayer, pSVar6 == (Settings_KeybindSetting_o *)0x0))
    goto label_1822f292e;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar6,false,(MethodInfo *)0x0);
    if (!bVar12) {
      pSVar5 = (__this->fields)._input;
      if ((pSVar5 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar6 = (pSVar5->fields).SpectatePreviousPlayer, pSVar6 == (Settings_KeybindSetting_o *)0x0))
      goto label_1822f292e;
      bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar6,false,(MethodInfo *)0x0);
      if (!bVar12) {
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).Modifier, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar15 = (pUVar7->zeroVector).fields.x;
          fVar16 = (pUVar7->zeroVector).fields.y;
          fVar17 = (pUVar7->zeroVector).fields.z;
          bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
          if (bVar12) {
            fVar18 = 400.0;
          }
          else {
            fVar18 = 200.0;
          }
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
             (pSVar6 = (pSVar5->fields).Forward, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
            bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
            if (bVar12) {
              pUVar8 = (__this->fields).Cache;
              if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
              goto label_1822f292e;
              pUVar13 = UnityEngine_Transform__get_forward
                                  ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
              fVar15 = fVar15 + (pUVar13->fields).x;
              fVar16 = fVar16 + (pUVar13->fields).y;
              fVar17 = fVar17 + (pUVar13->fields).z;
            }
            else {
              pSVar5 = (__this->fields)._input;
              if ((pSVar5 == (Settings_GeneralInputSettings_o *)0x0) ||
                 (pSVar6 = (pSVar5->fields).Back, pSVar6 == (Settings_KeybindSetting_o *)0x0))
              goto label_1822f292e;
              bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
              if (bVar12) {
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
                goto label_1822f292e;
                pUVar13 = UnityEngine_Transform__get_forward
                                    ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                fVar15 = fVar15 - (pUVar13->fields).x;
                fVar16 = fVar16 - (pUVar13->fields).y;
                fVar17 = fVar17 - (pUVar13->fields).z;
              }
            }
            pSVar5 = (__this->fields)._input;
            if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
               (pSVar6 = (pSVar5->fields).Right, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
              bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
              if (bVar12) {
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
                goto label_1822f292e;
                pUVar13 = UnityEngine_Transform__get_right
                                    ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                fVar15 = fVar15 + (pUVar13->fields).x;
                fVar16 = fVar16 + (pUVar13->fields).y;
                fVar17 = fVar17 + (pUVar13->fields).z;
              }
              else {
                pSVar5 = (__this->fields)._input;
                if ((pSVar5 == (Settings_GeneralInputSettings_o *)0x0) ||
                   (pSVar6 = (pSVar5->fields).Left, pSVar6 == (Settings_KeybindSetting_o *)0x0))
                goto label_1822f292e;
                bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
                if (bVar12) {
                  pUVar8 = (__this->fields).Cache;
                  if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
                  goto label_1822f292e;
                  pUVar13 = UnityEngine_Transform__get_right
                                      ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                  fVar15 = fVar15 - (pUVar13->fields).x;
                  fVar16 = fVar16 - (pUVar13->fields).y;
                  fVar17 = fVar17 - (pUVar13->fields).z;
                }
              }
              pSVar5 = (__this->fields)._input;
              if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
                 (pSVar6 = (pSVar5->fields).Up, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
                bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
                if (bVar12) {
                  pUVar8 = (__this->fields).Cache;
                  if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
                  goto label_1822f292e;
                  pUVar13 = UnityEngine_Transform__get_up
                                      ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                  fVar15 = fVar15 + (pUVar13->fields).x;
                  fVar16 = fVar16 + (pUVar13->fields).y;
                  fVar17 = fVar17 + (pUVar13->fields).z;
                }
                else {
                  pSVar5 = (__this->fields)._input;
                  if ((pSVar5 == (Settings_GeneralInputSettings_o *)0x0) ||
                     (pSVar6 = (pSVar5->fields).Down, pSVar6 == (Settings_KeybindSetting_o *)0x0))
                  goto label_1822f292e;
                  bVar12 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
                  if (bVar12) {
                    pUVar8 = (__this->fields).Cache;
                    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                       (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
                    goto label_1822f292e;
                    pUVar13 = UnityEngine_Transform__get_up
                                        ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                    fVar15 = fVar15 - (pUVar13->fields).x;
                    fVar16 = fVar16 - (pUVar13->fields).y;
                    fVar17 = fVar17 - (pUVar13->fields).z;
                  }
                }
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar9 = (pUVar8->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                  pUVar13 = UnityEngine_Transform__get_position
                                      ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                  fVar1 = (pUVar13->fields).x;
                  fVar2 = (pUVar13->fields).y;
                  fVar3 = (pUVar13->fields).z;
                  fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                  local_98.z = fVar17 * fVar14 * fVar18 + fVar3;
                  local_98.y = fVar16 * fVar14 * fVar18 + fVar2;
                  local_98.x = fVar15 * fVar14 * fVar18 + fVar1;
                  UnityEngine_Transform__set_position
                            (pUVar9,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
                  fVar15 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
                  fVar16 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
                  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
                  if ((pSVar10 != (Settings_GeneralSettings_o *)0x0) &&
                     (((pSVar11 = (pSVar10->fields).MouseSpeed, pSVar11 != (Settings_FloatSetting_o *)0x0 &&
                       (pUVar8 = (__this->fields).Cache, pUVar8 != (Utility_BaseComponentCache_o *)0x0)) &&
                      (pUVar9 = (pUVar8->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)))) {
                    fVar17 = (pSVar11->fields)._value * 10.0;
                    pUVar13 = UnityEngine_Transform__get_position
                                        ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                    local_88[0].x = (pUVar13->fields).x;
                    local_88[0].y = (pUVar13->fields).y;
                    local_88[0].z = (pUVar13->fields).z;
                    if (Il2CppMethodInitialized_18433de5c == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_18433de5c = '\x01';
                    }
                    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                    local_98.x = (pUVar7->upVector).fields.x;
                    local_98.y = (pUVar7->upVector).fields.y;
                    local_98.z = (pUVar7->upVector).fields.z;
                    UnityEngine_Transform__RotateAround
                              (pUVar9,(UnityEngine_Vector3_o *)local_88,(UnityEngine_Vector3_o *)&local_98,
                               fVar17 * fVar15,(MethodInfo *)0x0);
                    pUVar8 = (__this->fields).Cache;
                    if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                       (pUVar9 = (pUVar8->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar13 = UnityEngine_Transform__get_position
                                          ((UnityEngine_Vector3_o *)local_88,pUVar9,(MethodInfo *)0x0);
                      pUVar8 = (__this->fields).Cache;
                      if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                         (__this_00 = (pUVar8->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)
                         ) {
                        uVar4._0_4_ = (pUVar13->fields).x;
                        uVar4._4_4_ = (pUVar13->fields).y;
                        fVar15 = (pUVar13->fields).z;
                        pUVar13 = UnityEngine_Transform__get_right
                                            ((UnityEngine_Vector3_o *)&local_98,__this_00,(MethodInfo *)0x0);
                        local_88[0].x = (pUVar13->fields).x;
                        local_88[0].y = (pUVar13->fields).y;
                        local_88[0].z = (pUVar13->fields).z;
                        local_98._0_8_ = uVar4;
                        local_98.z = fVar15;
                        UnityEngine_Transform__RotateAround
                                  (pUVar9,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Vector3_o *)local_88
                                   ,-fVar16 * fVar17,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_1822f292e;
      }
    }
    __this_01 = (__this->fields).SpecMode;
    if (__this_01 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) {
label_1822f292e:
      ThrowNullReferenceException();
    }
    Utility_Cycle_Int32Enum___Next
              ((Utility_Cycle_T__o *)__this_01,
               (MethodInfo_13870B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
  }
  return;
}


// Cameras.InGameCamera$$UpdateTitanZoom
// il2cpp: void Cameras_InGameCamera__UpdateTitanZoom (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f5970

void Cameras_InGameCamera__UpdateTitanZoom(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  Settings_GeneralInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_1843476a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_1843476a2 = '\x01';
  }
  pCVar2 = (__this->fields)._follow;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pSVar4 = (__this->fields)._input;
      if ((pSVar4 != (Settings_GeneralInputSettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).ZoomIn, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
        bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
        if (bVar6) {
          fVar8 = -0.1;
        }
        else {
          fVar8 = 0.0;
        }
        pSVar4 = (__this->fields)._input;
        if ((pSVar4 != (Settings_GeneralInputSettings_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).ZoomOut, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
          bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
          if (bVar6) {
            fVar8 = fVar8 + 0.1;
          }
          if (fVar8 == 0.0) {
            return;
          }
          fVar8 = (__this->fields)._titanZoom + (__this->fields)._cameraDistance + fVar8;
          fVar7 = 0.3;
          if ((0.3 <= fVar8) && (fVar7 = 2.0, fVar8 <= 2.0)) {
            fVar7 = fVar8;
          }
          (__this->fields)._titanZoom = fVar7 - (__this->fields)._cameraDistance;
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Cameras.InGameCamera$$GetHeightDistance
// il2cpp: float Cameras_InGameCamera__GetHeightDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822efae0

float Cameras_InGameCamera__GetHeightDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843476a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476a3 = '\x01';
  }
  fVar5 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
  if (fVar5 == 0.0) {
    pCVar2 = (__this->fields)._follow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar4) && (pCVar2 = (__this->fields)._follow, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
      pCVar3 = pCVar2->klass;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        return 0.3;
      }
    }
  }
  return (__this->fields)._heightDistance;
}


// Cameras.InGameCamera$$UpdateObstacles
// il2cpp: void Cameras_InGameCamera__UpdateObstacles (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f44c0

void Cameras_InGameCamera__UpdateObstacles(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  bool bVar8;
  UnityEngine_LayerMask_o layerMask;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_RaycastHit_o local_a8 [3];
  
  if (Il2CppMethodInitialized_1843476a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843476a4 = '\x01';
  }
  pCVar5 = (__this->fields)._follow;
  local_a8[0].fields.m_Normal.fields.y = 0.0;
  local_a8[0].fields.m_Normal.fields.z = 0.0;
  local_a8[0].fields.m_FaceID = 0;
  local_a8[0].fields.m_Distance = 0.0;
  local_a8[0].fields.m_UV.fields.x = 0.0;
  local_a8[0].fields.m_UV.fields.y = 0.0;
  local_a8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_a8[0].fields.m_Point.fields.x = 0.0;
  local_a8[0].fields.m_Point.fields.y = 0.0;
  local_a8[0].fields.m_Point.fields.z = 0.0;
  local_a8[0].fields.m_Normal.fields.x = 0.0;
  if ((pCVar5 != (Characters_BaseCharacter_o *)0x0) &&
     (pUVar9 = (*(pCVar5->klass->vtable)._77_GetCameraAnchor.methodPtr)
                         (pCVar5,(pCVar5->klass->vtable)._77_GetCameraAnchor.method),
     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    pUVar10 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_b8,pUVar9,(MethodInfo *)0x0)
    ;
    pUVar6 = (__this->fields).Cache;
    if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar9 = (pUVar6->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      uVar3._0_4_ = (pUVar10->fields).x;
      uVar3._4_4_ = (pUVar10->fields).y;
      fVar1 = (pUVar10->fields).z;
      pUVar10 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_b8,pUVar9,(MethodInfo *)0x0);
      uVar2 = (pUVar10->fields).x;
      uVar4 = (pUVar10->fields).y;
      fVar13 = fVar1 - (pUVar10->fields).z;
      local_c8.y = uVar3._4_4_ - (float)uVar4;
      local_c8.x = (float)uVar3 - (float)uVar2;
      local_c8.z = fVar13;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar11 = (float)il2cpp_runtime_helper_180546a40(&local_c8);
      if (fVar11 <= 1e-05) {
        pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar12 = (pUVar7->zeroVector).fields.x;
        fVar14 = (pUVar7->zeroVector).fields.y;
        fVar13 = (pUVar7->zeroVector).fields.z;
      }
      else {
        fVar12 = ((float)uVar3 - (float)uVar2) / fVar11;
        fVar14 = (uVar3._4_4_ - (float)uVar4) / fVar11;
        fVar13 = fVar13 / fVar11;
      }
      fVar11 = (__this->fields)._anchorDistance;
      if ((TypeInfo_Cameras_InGameCamera->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera);
      }
      layerMask = UnityEngine_LayerMask__op_Implicit
                            ((TypeInfo_Cameras_InGameCamera->static_fields->_clipMask).fields.m_Mask,
                             (MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_b8.y = uVar3._4_4_ - fVar14 * 10.0 * fVar11;
      local_b8.x = (float)uVar3 - fVar12 * 10.0 * fVar11;
      local_c8._0_8_ = uVar3;
      local_c8.z = fVar1;
      local_b8.z = fVar1 - fVar13 * 10.0 * fVar11;
      bVar8 = UnityEngine_Physics__Linecast_2fe2eb0
                        ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)&local_b8,local_a8,
                         (int32_t)layerMask.fields.m_Mask,(MethodInfo *)0x0);
      if (!bVar8) {
        return;
      }
      pUVar6 = (__this->fields).Cache;
      if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar9 = (pUVar6->fields).Transform;
        pUVar10 = UnityEngine_RaycastHit__get_point
                            ((UnityEngine_Vector3_o *)&local_c8,local_a8,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          local_b8.x = (pUVar10->fields).x;
          local_b8.y = (pUVar10->fields).y;
          local_b8.z = (pUVar10->fields).z;
          UnityEngine_Transform__set_position(pUVar9,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateFOV
// il2cpp: void Cameras_InGameCamera__UpdateFOV (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f1f40

void Cameras_InGameCamera__UpdateFOV(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  Settings_GeneralSettings_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  bool bVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Camera_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_68;
  float local_60;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_1843476a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843476a5 = '\x01';
  }
  pCVar2 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar7) && (pCVar2 = (__this->fields)._follow, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    goto label_1822f2195;
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if (((pSVar4 == (Settings_GeneralSettings_o *)0x0) ||
        (pSVar5 = (pSVar4->fields).FOVMin, pSVar5 == (Settings_FloatSetting_o *)0x0)) ||
       (pSVar6 = (pSVar4->fields).FOVMax, pSVar6 == (Settings_FloatSetting_o *)0x0)) goto label_1822f22b1;
    fVar13 = (pSVar5->fields)._value;
    fVar11 = (pSVar6->fields)._value;
    fVar10 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
    if (fVar10 <= 0.0) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if (((pSVar4 == (Settings_GeneralSettings_o *)0x0) ||
          (pSVar5 = (pSVar4->fields).FPSFOVMin, pSVar5 == (Settings_FloatSetting_o *)0x0)) ||
         (pSVar6 = (pSVar4->fields).FPSFOVMax, pSVar6 == (Settings_FloatSetting_o *)0x0)) goto label_1822f22b1;
      fVar13 = (pSVar5->fields)._value;
      fVar11 = (pSVar6->fields)._value;
    }
    pCVar2 = (__this->fields)._follow;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_1822f22b1;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
    pUVar8 = Characters_BaseCharacter__GetVelocity(local_58,pCVar2,(MethodInfo *)0x0);
    local_68._0_4_ = (pUVar8->fields).x;
    local_68._4_4_ = (pUVar8->fields).y;
    local_60 = (pUVar8->fields).z;
    fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_68);
    if (10.0 < fVar10) {
      fVar12 = fVar13;
      if (fVar13 <= fVar11) {
        fVar12 = fVar11;
      }
      fVar11 = (fVar10 + fVar13) - 10.0;
      fVar13 = fVar12;
      if (fVar11 <= fVar12) {
        fVar13 = fVar11;
      }
    }
    pUVar9 = (__this->fields).Camera;
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_1822f22b1;
    fVar11 = UnityEngine_Camera__get_fieldOfView(pUVar9,(MethodInfo *)0x0);
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar10 = fVar10 * 5.0;
    if (fVar10 < 0.0) goto label_1822f2209;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
  }
  else {
label_1822f2195:
    pUVar9 = (__this->fields).Camera;
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_1822f22b1;
    fVar11 = UnityEngine_Camera__get_fieldOfView(pUVar9,(MethodInfo *)0x0);
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar4 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).FOVMin, pSVar5 == (Settings_FloatSetting_o *)0x0)) goto label_1822f22b1;
    fVar13 = (pSVar5->fields)._value;
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar10 = fVar10 * 5.0;
    if (fVar10 < 0.0) {
label_1822f2209:
      fVar10 = 0.0;
    }
    else if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
  }
  UnityEngine_Camera__set_fieldOfView(pUVar9,(fVar13 - fVar11) * fVar10 + fVar11,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (0.0 < TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV) {
    pUVar9 = (__this->fields).Camera;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) {
label_1822f22b1:
      ThrowNullReferenceException();
    }
    UnityEngine_Camera__set_fieldOfView
              (pUVar9,TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV,(MethodInfo *)0x0);
  }
  return;
}


// Cameras.InGameCamera$$FindNextSpectate
// il2cpp: void Cameras_InGameCamera__FindNextSpectate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822ef8e0

void Cameras_InGameCamera__FindNextSpectate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseCharacter__o *__this_00;
  Characters_BaseCharacter_o *character;
  
  if (Il2CppMethodInitialized_1843476a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
    Il2CppMethodInitialized_1843476a6 = '\x01';
  }
  __this_00 = Cameras_InGameCamera__GetSortedCharacters(__this,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      Cameras_InGameCamera__SetFollow(__this,(Characters_BaseCharacter_o *)0x0,true,(MethodInfo *)0x0);
      return;
    }
    character = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
    Cameras_InGameCamera__SetFollow(__this,character,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$GetSpectateIndex
// il2cpp: int32_t Cameras_InGameCamera__GetSpectateIndex (Cameras_InGameCamera_o* __this, System_Collections_Generic_List_BaseCharacter__o* characters, const MethodInfo* method);
// 0x1822f0580
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f0651: mov eax, ebx
// asm:   0x1822f0653: jmp 0x1822f065a

int32_t Cameras_InGameCamera__GetSpectateIndex
                  (Cameras_InGameCamera_o *__this,System_Collections_Generic_List_BaseCharacter__o *characters
                  ,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Characters_BaseCharacter_o *x;
  int index;
  
  if (Il2CppMethodInitialized_1843476a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476a7 = '\x01';
  }
  pCVar1 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    index = 0;
    if (characters == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
      ThrowNullReferenceException();
    }
    for (; index < (characters->fields)._size; index = index + 1) {
      x = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                    ((System_Collections_Generic_List_object__o *)characters,index,
                     (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
      pCVar1 = (__this->fields)._follow;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
    }
  }
  return -1;
}


// Cameras.InGameCamera$$GetSensitivityDeltaTime
// il2cpp: float Cameras_InGameCamera__GetSensitivityDeltaTime (Cameras_InGameCamera_o* __this, float sensitivity, const MethodInfo* method);
// 0x1822f0030

float Cameras_InGameCamera__GetSensitivityDeltaTime
                (Cameras_InGameCamera_o *__this,float sensitivity,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1 * sensitivity * 62.0;
}


// Cameras.InGameCamera$$GetNearestTitan
// il2cpp: Characters_BaseTitan_o* Cameras_InGameCamera__GetNearestTitan (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822efbb0
// eh: try 0x1822efce0..0x1822f0023 -> pad 0x1833288d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822efcd9: nop dword ptr [rax]
// asm:   0x1822eff31: movaps xmm7, xmm0
// asm:   0x1822eff34: mov r14, rbx
// asm:   0x1822eff37: mov qword ptr [rsp + 0xd0], rbx
// asm:   0x1822eff3f: jmp 0x1822efce0
// asm:   0x1822effa7: lea rcx, [rsp + 0x78]
// asm:   0x1822effac: call 0x180611640  ; il2cpp_runtime_helper_180611640()
// asm:   0x1822effb1: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1822effb6: test rcx, rcx
// asm:   0x1822effb9: jne 0x1822f0023
// asm:   0x1822effbb: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x1822f0023: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833288d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833288d5: push rbp
// asm:   0x1833288d6: sub rsp, 0x20
// asm:   0x1833288da: mov rbp, rdx
// asm:   0x1833288dd: mov rax, qword ptr [rbp + 0x20]
// asm:   0x1833288e1: mov rcx, qword ptr [rax]
// asm:   0x1833288e4: mov qword ptr [rbp + 0x70], rcx
// asm:   0x1833288e8: movabs rax, 0
// asm:   0x1833288f2: add rsp, 0x20
// asm:   0x1833288f6: pop rbp
// asm:   0x1833288f7: ret 

Characters_BaseTitan_o *
Cameras_InGameCamera__GetNearestTitan(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Characters_BaseCharacter_o *pCVar6;
  Characters_BaseTitanComponentCache_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  bool bVar9;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  Characters_BaseTitan_o *a;
  UnityEngine_Vector3_o *pUVar12;
  ushort uVar13;
  Characters_BaseTitan_o *pCVar14;
  float fVar15;
  float fVar16;
  Il2CppObject *local_res8;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_o local_58;
  undefined8 local_48;
  Il2CppObject **local_40 [5];
  
  if (Il2CppMethodInitialized_1843476a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_1843476a8 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._inGameManager;
  if ((__this_00 == (GameManagers_InGameManager_o *)0x0) ||
     (pIVar10 = (Il2CppObject *)
                GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0),
     pIVar10 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar4 = pIVar10->klass;
  uVar3 = (pIVar4->_2).interface_offsets_count;
  if (uVar3 != 0) {
    uVar13 = 0;
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    do {
      if (pIVar5[uVar13].interfaceType ==
          (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter) {
        pVVar11 = pIVar4->vtable + pIVar5[uVar13].offset;
        goto label_1822efcb6;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar3);
  }
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,0)
  ;
label_1822efcb6:
  local_res8 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
  local_48 = 0;
  local_40[0] = &local_res8;
  pCVar14 = (Characters_BaseTitan_o *)0x0;
  fVar16 = INFINITY;
  do {
    pIVar10 = local_res8;
    if (local_res8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_res8->klass;
    uVar3 = (pIVar4->_2).interface_offsets_count;
    if (uVar3 != 0) {
      uVar13 = 0;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar11 = pIVar4->vtable + pIVar5[uVar13].offset;
          goto label_1822efd46;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar3);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_res8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1822efd46:
    bVar9 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
    pIVar10 = local_res8;
    if (!bVar9) {
      il2cpp_runtime_helper_180611640(local_40);
      return pCVar14;
    }
    if (local_res8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_res8->klass;
    uVar3 = (pIVar4->_2).interface_offsets_count;
    if (uVar3 != 0) {
      uVar13 = 0;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar13].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
          pVVar11 = pIVar4->vtable + pIVar5[uVar13].offset;
          goto label_1822efdb6;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar3);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_res8,
                         (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_1822efdb6:
    a = (Characters_BaseTitan_o *)(*pVVar11->methodPtr)(pIVar10,pVVar11->method);
    if (a != (Characters_BaseTitan_o *)0x0) {
      bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar2 <= (a->klass->_2).typeHierarchyDepth) &&
         ((a->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
      {
        pCVar6 = (__this->fields)._follow;
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar9 = GameManagers_TeamInfo__SameTeam_1e770d0
                          ((Characters_BaseCharacter_o *)a,pCVar6,(MethodInfo *)0x0);
        if (!bVar9) {
          bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
          if (((a->klass->_2).typeHierarchyDepth < bVar2) ||
             ((a->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
            il2cpp_codegen_raise_invalid_cast_exception(a);
          }
          pCVar7 = (a->fields).BaseTitanCache;
          if (pCVar7 == (Characters_BaseTitanComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar6 = (__this->fields)._follow;
          if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = (pCVar6->fields).Cache;
          if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_01 = (pUVar8->fields).Transform;
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_02 = (pCVar7->fields).Neck;
          pUVar12 = UnityEngine_Transform__get_position(&local_68,__this_01,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar1._0_4_ = (pUVar12->fields).x;
          uVar1._4_4_ = (pUVar12->fields).y;
          fVar15 = (pUVar12->fields).z;
          pUVar12 = UnityEngine_Transform__get_position(&local_58,__this_02,(MethodInfo *)0x0);
          local_88._0_4_ = (pUVar12->fields).x;
          local_88._4_4_ = (pUVar12->fields).y;
          local_80 = (pUVar12->fields).z;
          local_78 = uVar1;
          local_70 = fVar15;
          fVar15 = (float)il2cpp_runtime_helper_180562c80(&local_78,&local_88);
          if (fVar15 < fVar16) {
            bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
            if (((a->klass->_2).typeHierarchyDepth < bVar2) ||
               (pCVar14 = a, fVar16 = fVar15,
               (a->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
               (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
              il2cpp_codegen_raise_invalid_cast_exception(a);
            }
          }
        }
      }
    }
  } while( true );
}


// Cameras.InGameCamera$$GetSortedCharacters
// il2cpp: System_Collections_Generic_List_BaseCharacter__o* Cameras_InGameCamera__GetSortedCharacters (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f0060
// eh: try 0x1822f0230..0x1822f0571 -> pad 0x183318130 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f0287: mov rdx, qword ptr [rip + 0x1d91c9a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x1822f028e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822f0293: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f0298: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822f029d: test rcx, rcx
// asm:   0x1822f02a0: jne 0x1822f054f
// asm:   0x1822f02a6: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1822f02ae: mov rdi, qword ptr [rsp + 0xd8]
// asm:   0x1822f02b6: mov r14, rdi
// asm:   0x1822f030d: nop dword ptr [rax]
// asm:   0x1822f0367: mov rdx, qword ptr [rip + 0x1d866a2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x1822f036e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822f0373: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f0378: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822f037d: test rcx, rcx
// asm:   0x1822f0380: jne 0x1822f0560
// asm:   0x1822f0386: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1822f038e: mov rdi, qword ptr [rsp + 0xd8]
// asm:   0x1822f0396: mov r14, rdi
// asm:   0x1822f03ed: nop dword ptr [rax]
// asm:   0x1822f0447: mov rdx, qword ptr [rip + 0x1d86b02]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x1822f044e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822f0453: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f0458: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822f045d: test rcx, rcx
// asm:   0x1822f0460: jne 0x1822f0571
// asm:   0x1822f0466: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x1822f054f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822f0560: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822f0571: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

System_Collections_Generic_List_BaseCharacter__o *
Cameras_InGameCamera__GetSortedCharacters(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *pSVar2;
  Il2CppObject *object;
  bool bVar3;
  System_Collections_Generic_List_BaseCharacter__o *pSVar4;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  undefined1 local_80 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_78;
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [8];
  uint64_t uStack_48;
  Il2CppObject *local_40;
  
  if (Il2CppMethodInitialized_1843476a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_BaseCharacter_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_BaseCharacter_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_InGameCamera_c_GetSortedCharacters_b__65_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera_c);
    Il2CppMethodInitialized_1843476a9 = '\x01';
  }
  local_80 = (undefined1  [8])0x0;
  pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_68 = (undefined1  [8])0x0;
  pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_50 = (undefined1  [8])0x0;
  uStack_48 = 0;
  local_40 = (Il2CppObject *)0x0;
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor);
  pGVar1 = (__this->fields)._inGameManager;
  if ((pGVar1 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).Humans,
     pSVar2 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,pSVar2,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_80 = (undefined1  [8])local_98._0_8_;
    pUStack_78 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
    local_70 = local_88;
    local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      if (!bVar3) break;
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(char *)&local_70[8].klass == '\0') {
        if (pSVar4 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar4,local_70,MethodInfo_System_Collections_Generic_List_BaseCharacter_Add);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pGVar1 = (__this->fields)._inGameManager;
    if ((pGVar1 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).Shifters,
       pSVar2 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,pSVar2,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator
                );
      local_68 = (undefined1  [8])local_98._0_8_;
      pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
      local_58 = local_88;
      local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
      while( true ) {
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
        if (!bVar3) break;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (*(char *)&local_58[8].klass == '\0') {
          if (pSVar4 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar4,local_58,MethodInfo_System_Collections_Generic_List_BaseCharacter_Add);
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
      pGVar1 = (__this->fields)._inGameManager;
      if ((pGVar1 != (GameManagers_InGameManager_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).Titans,
         pSVar2 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,pSVar2,
                   (MethodInfo_175C200 *)
                   MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
        local_50 = (undefined1  [8])local_98._0_8_;
        uStack_48 = local_98._8_8_;
        local_40 = local_88;
        local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
        while( true ) {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
            if ((TypeInfo_Cameras_InGameCamera_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c);
            }
            __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                        TypeInfo_Cameras_InGameCamera_c->static_fields->__9__65_0;
            if (__this_00 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
              if ((TypeInfo_Cameras_InGameCamera_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c);
              }
              object = (Il2CppObject *)TypeInfo_Cameras_InGameCamera_c->static_fields->__9;
              __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_BaseCharacter_int);
              System_Func_object__int____ctor
                        (__this_00,object,
                         (intptr_t)MethodInfo_Cameras_InGameCamera_c_GetSortedCharacters_b__65_0,
                         (MethodInfo_AF4D50 *)0x0);
              TypeInfo_Cameras_InGameCamera_c->static_fields->__9__65_0 =
                   (System_Func_BaseCharacter__int__o *)__this_00;
              Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_InGameCamera_c->static_fields->__9__65_0,__this_00);
            }
            source = System_Linq_Enumerable__OrderBy_object__int_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                                (System_Func_TSource__TKey__o *)__this_00,
                                (MethodInfo_6C12E0 *)
                                MethodInfo_System_Linq_Enumerable_OrderBy_BaseCharacter_int);
            pSVar4 = (System_Collections_Generic_List_BaseCharacter__o *)
                     System_Linq_Enumerable__ToList_object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_BaseCharacter);
            return pSVar4;
          }
          if (local_40 == (Il2CppObject *)0x0) break;
          if (*(char *)&local_40[8].klass == '\0') {
            if (pSVar4 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar4,local_40,MethodInfo_System_Collections_Generic_List_BaseCharacter_Add);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateShake
// il2cpp: void Cameras_InGameCamera__UpdateShake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f4ba0

void Cameras_InGameCamera__UpdateShake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_38 [4];
  
  fVar13 = (__this->fields)._shakeTimeLeft;
  if (0.0 < fVar13) {
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pUVar9 = (__this->fields).Cache;
    (__this->fields)._shakeTimeLeft = fVar13 - fVar12;
    if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) {
label_1822f4d5c:
      ThrowNullReferenceException();
    }
    __this_00 = (pUVar9->fields).Transform;
    if ((__this->fields)._shakeFlip == false) {
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1822f4d5c;
      pUVar11 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_38,__this_00,(MethodInfo *)0x0);
      uVar1 = (pUVar11->fields).x;
      uVar5 = (pUVar11->fields).y;
      local_38[0].z = (pUVar11->fields).z;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      fVar13 = (__this->fields)._currentShakeDistance;
      pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar10->upVector).fields.x;
      uVar6 = (pUVar10->upVector).fields.y;
      local_38[0].z = local_38[0].z - fVar13 * (pUVar10->upVector).fields.z;
      local_38[0].y = (float)uVar5 - (float)uVar6 * fVar13;
      local_38[0].x = (float)uVar1 - (float)uVar2 * fVar13;
    }
    else {
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1822f4d5c;
      pUVar11 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_38,__this_00,(MethodInfo *)0x0);
      uVar3 = (pUVar11->fields).x;
      uVar7 = (pUVar11->fields).y;
      local_38[0].z = (pUVar11->fields).z;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      fVar13 = (__this->fields)._currentShakeDistance;
      pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar4 = (pUVar10->upVector).fields.x;
      uVar8 = (pUVar10->upVector).fields.y;
      local_38[0].z = fVar13 * (pUVar10->upVector).fields.z + local_38[0].z;
      local_38[0].x = (float)uVar4 * fVar13 + (float)uVar3;
      local_38[0].y = (float)uVar8 * fVar13 + (float)uVar7;
    }
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
    (__this->fields)._shakeFlip = (__this->fields)._shakeFlip == false;
    fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._currentShakeDistance =
         (1.0 - fVar13 * 0.15 * 60.0) * (__this->fields)._currentShakeDistance;
  }
  return;
}


// Cameras.InGameCamera$$.ctor
// il2cpp: void Cameras_InGameCamera___ctor (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x1822f5b70

void Cameras_InGameCamera___ctor(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_00;
  
  if (Il2CppMethodInitialized_1843476aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Cycle_InGameCamera_SpecateMode);
    Il2CppMethodInitialized_1843476aa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Cycle_InGameCamera_SpecateMode);
  Utility_Cycle___Il2CppFullySharedGenericStructType____ctor
            ((Utility_Cycle_T__o *)__this_00,
             (MethodInfo_1387430 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_ctor);
  (__this->fields).SpecMode = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpecMode,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$.cctor
// il2cpp: void Cameras_InGameCamera___cctor (const MethodInfo* method);
// 0x1822f5aa0

void Cameras_InGameCamera___cctor(MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_1843476ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_1843476ab = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,2);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((int)layers->max_length != 0) &&
       (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
       1 < (uint)layers->max_length)) {
      layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Cameras_InGameCamera->static_fields->_clipMask).fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


