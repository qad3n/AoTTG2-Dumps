// Type: Cameras.InGameCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Cameras/InGameCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/InGameCamera.cs
// --------------------------------

// Cameras.InGameCamera.<>c$$.cctor
// il2cpp: void Cameras_InGameCamera___c___cctor (const MethodInfo* method);
// 0x5dd5c10

void Cameras_InGameCamera___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754822b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera_c);
    Il2CppMethodInitialized_0754822b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Cameras_InGameCamera_c->static_fields->__9 = (Cameras_InGameCamera___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_InGameCamera_c->static_fields->__9);
  return;
}


// Cameras.InGameCamera.<>c$$.ctor
// il2cpp: void Cameras_InGameCamera___c___ctor (Cameras_InGameCamera___c_o* __this, const MethodInfo* method);
// 0x5dd5c80

void Cameras_InGameCamera___c___ctor(Cameras_InGameCamera___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera.<>c$$<GetSortedCharacters>b__68_0
// il2cpp: int32_t Cameras_InGameCamera___c___GetSortedCharacters_b__68_0 (Cameras_InGameCamera___c_o* __this, Characters_BaseCharacter_o* x, const MethodInfo* method);
// 0x5dd5c90

int32_t Cameras_InGameCamera___c___GetSortedCharacters_b__68_0
                  (Cameras_InGameCamera___c_o *__this,Characters_BaseCharacter_o *x,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if ((((x == (Characters_BaseCharacter_o *)0x0) ||
       (pUVar1 = (x->fields).Cache, pUVar1 == (Utility_BaseComponentCache_o *)0x0)) ||
      (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) ||
     (pPVar3 = (pPVar2->fields)._Owner_k__BackingField, pPVar3 == (Photon_Realtime_Player_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pPVar3->fields).actorNumber;
}


// Cameras.InGameCamera$$get_UsesMouseLook
// il2cpp: bool Cameras_InGameCamera__get_UsesMouseLook (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dcfdf0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcfe9d: mov al, 1
// asm:   0x5dcfe9f: test ebp, 0xfffffffd
// asm:   0x5dcfea5: jne 0x5dcfebb

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
  
  if (Il2CppMethodInitialized_0754820b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0754820b = '\x01';
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
      return uVar2 == 1 && bVar1 != false;
    }
  }
  return true;
}


// Cameras.InGameCamera$$ShouldUseMouseLook
// il2cpp: bool Cameras_InGameCamera__ShouldUseMouseLook (int32_t mode, bool originalWOWRotation, bool rotateHeld, const MethodInfo* method);
// 0x5dcfef0

bool Cameras_InGameCamera__ShouldUseMouseLook
               (int32_t mode,bool originalWOWRotation,bool rotateHeld,MethodInfo *method)

{
  if ((mode & 0xfffffffdU) != 0) {
    if (!rotateHeld) {
      return false;
    }
    if (mode != 3) {
      return mode == 1 && originalWOWRotation;
    }
  }
  return true;
}


// Cameras.InGameCamera$$CheckSpectateRateLimit
// il2cpp: bool Cameras_InGameCamera__CheckSpectateRateLimit (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dcff20

bool Cameras_InGameCamera__CheckSpectateRateLimit(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastChangeSpectateID;
  if (1.0 <= fVar1) {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastChangeSpectateID = fVar2;
  }
  return 1.0 <= fVar1;
}


// Cameras.InGameCamera$$SetCameraDistance
// il2cpp: void Cameras_InGameCamera__SetCameraDistance (Cameras_InGameCamera_o* __this, float distance, const MethodInfo* method);
// 0x5dcff80

void Cameras_InGameCamera__SetCameraDistance(Cameras_InGameCamera_o *__this,float distance,MethodInfo *method)

{
  (__this->fields)._cameraDistance = distance;
  return;
}


// Cameras.InGameCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_InGameCamera__ApplyGraphicsSettings (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dcff90

void Cameras_InGameCamera__ApplyGraphicsSettings(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Camera_o *pUVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754820c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754820c = '\x01';
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
// 0x5dd0050

void Cameras_InGameCamera__ApplyGeneralSettings(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  Cameras_InGameCamera__ResetDistance(__this,method);
  if (Il2CppMethodInitialized_0754820e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754820e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).CameraMode, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this->fields).CurrentCameraMode = (pSVar2->fields)._value;
  return;
}


// Cameras.InGameCamera$$ResetDistance
// il2cpp: void Cameras_InGameCamera__ResetDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd00c0

void Cameras_InGameCamera__ResetDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  System_String_o *key;
  undefined8 in_RAX;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754820d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754820d = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar2 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).CameraDistance, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
    (__this->fields)._cameraDistance = (pSVar3->fields)._value + 0.3;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance;
    uStack_28 = CONCAT44((__this->fields)._cameraDistance,(undefined4)uStack_28);
    value = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_28 + 4));
    PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar2 != (Settings_GeneralSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).CameraDistance, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
      fVar1 = (pSVar3->fields)._value;
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
        (__this->fields)._cameraDistance = 0.0;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$ResetCameraMode
// il2cpp: void Cameras_InGameCamera__ResetCameraMode (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd0210

void Cameras_InGameCamera__ResetCameraMode(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754820e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754820e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).CameraMode, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this->fields).CurrentCameraMode = (pSVar2->fields)._value;
  return;
}


// Cameras.InGameCamera$$SetCameraMode
// il2cpp: void Cameras_InGameCamera__SetCameraMode (Cameras_InGameCamera_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dd0270

void Cameras_InGameCamera__SetCameraMode(Cameras_InGameCamera_o *__this,int32_t mode,MethodInfo *method)

{
  (__this->fields).CurrentCameraMode = mode;
  return;
}


// Cameras.InGameCamera$$NextCameraMode
// il2cpp: int32_t Cameras_InGameCamera__NextCameraMode (int32_t current, int32_t selected, const MethodInfo* method);
// 0x5dd0280

int32_t Cameras_InGameCamera__NextCameraMode(int32_t current,int32_t selected,MethodInfo *method)

{
  if (current == 2) {
    return (uint)(selected == 3) * 3;
  }
  if (current == 1) {
    return 2;
  }
  if (current == 0) {
    return 1;
  }
  return 0;
}


// Cameras.InGameCamera$$GetCameraDistance
// il2cpp: float Cameras_InGameCamera__GetCameraDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd02b0

float Cameras_InGameCamera__GetCameraDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754820f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754820f = '\x01';
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
      if (bVar4) goto label_05dd032c;
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
label_05dd032c:
  fVar5 = 0.0;
  if ((__this->fields).CurrentCameraMode != 2) {
    fVar5 = (__this->fields)._cameraDistance + (__this->fields)._titanZoom;
  }
  return fVar5;
}


// Cameras.InGameCamera$$StartShake
// il2cpp: void Cameras_InGameCamera__StartShake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd03c0

void Cameras_InGameCamera__StartShake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  (__this->fields)._shakeTimeLeft = 1.0;
  (__this->fields)._currentShakeDistance = 10.0;
  (__this->fields)._shakeFlip = false;
  return;
}


// Cameras.InGameCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_InGameCamera__SetDefaultCameraPosition (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd03e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd0513: mov rdi, r14
// asm:   0x5dd0516: jmp 0x5dd05cc

void Cameras_InGameCamera__SetDefaultCameraPosition(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Quaternion_Fields value;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_07548210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548210 = '\x01';
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
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).Cache;
  if (bVar5) {
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) && (x != (UnityEngine_Object_o *)0x0)) {
      pUVar7 = (pUVar3->fields).Transform;
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
         (UVar8 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0),
         pUVar7 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_position(pUVar7,UVar8,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar7 = (pUVar3->fields).Transform;
          pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
          if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
             (value = (UnityEngine_Quaternion_Fields)
                      UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) goto label_05dd05cc;
        }
      }
    }
  }
  else if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar7 = (pUVar3->fields).Transform;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar8.fields.z = (pUVar4->upVector).fields.z * 100.0;
      uVar1 = (pUVar4->upVector).fields.x;
      uVar2 = (pUVar4->upVector).fields.y;
      UVar8.fields.x = (float)uVar1 * 100.0;
      UVar8.fields.y = (float)uVar2 * 100.0;
      UnityEngine_Transform__set_position(pUVar7,UVar8,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).Cache;
      if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar7 = (pUVar3->fields).Transform;
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          value = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
label_05dd05cc:
          UnityEngine_Transform__set_rotation(pUVar7,(UnityEngine_Quaternion_o)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$SetFollow
// il2cpp: void Cameras_InGameCamera__SetFollow (Cameras_InGameCamera_o* __this, Characters_BaseCharacter_o* character, bool resetRotation, const MethodInfo* method);
// 0x5dd05e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd0975: jmp 0x5dd0dee

void Cameras_InGameCamera__SetFollow
               (Cameras_InGameCamera_o *__this,Characters_BaseCharacter_o *character,bool resetRotation,
               MethodInfo *method)

{
  Characters_BaseCharacter_o **targetAddress;
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_CameraDetection_o *__this_00;
  UI_InGameMenu_o *pUVar4;
  UI_HUDBottomHandler_o *pUVar5;
  Characters_BaseCharacter_c *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  Photon_Pun_PhotonView_o *pPVar8;
  Photon_Realtime_Player_o *pPVar9;
  System_Collections_Generic_List_BaseUseable__o *pSVar10;
  Characters_BaseUseable_array *__this_02;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int32_t iVar14;
  Photon_Realtime_Player_o *pPVar15;
  Il2CppObject *pIVar16;
  UnityEngine_Transform_o *pUVar17;
  undefined7 in_register_00000011;
  System_String_o *pSVar18;
  Cameras_CameraOcclusion_c *method_00;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar23;
  float fVar24;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar25;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_Fields local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  undefined1 local_58 [16];
  float local_48;
  
  local_88._0_4_ = (int)CONCAT71(in_register_00000011,resetRotation);
  if (Il2CppMethodInitialized_07548211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548211 = '\x01';
  }
  targetAddress = &(__this->fields)._follow;
  pCVar3 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)character,(MethodInfo *)0x0);
  *targetAddress = character;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (bVar11) {
    method_00 = TypeInfo_Cameras_CameraOcclusion;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__Clear((MethodInfo *)method_00);
    (__this->fields)._titanZoom = 0.0;
    __this_00 = (__this->fields)._detection;
    if (__this_00 == (Characters_CameraDetection_o *)0x0) goto label_05dd0dee;
    Characters_CameraDetection__RefreshFollow(__this_00,(MethodInfo *)0x0);
  }
  pCVar3 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar15 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    iVar14 = PhotonExtensions__GetIntProperty
                       (pPVar15,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,-1,
                        (MethodInfo *)0x0);
    if ((iVar14 != -1) &&
       (fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0),
       1.0 <= fVar19 - (__this->fields)._lastChangeSpectateID)) {
      fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar19;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar15 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar18 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
      local_98.x = -NAN;
      pIVar16 = il2cpp_vm_Object_Box(g_data_07556710,&local_98);
      PhotonExtensions__SetCustomProperty(pPVar15,pSVar18,pIVar16,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields)._menu;
    if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
       (pUVar5 = (pUVar4->fields).HUDBottomHandler, pUVar5 != (UI_HUDBottomHandler_o *)0x0)) {
      UI_HUDBottomHandler__SetBottomHUD(pUVar5,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    goto label_05dd0dee;
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
label_05dd08bf:
    uVar20 = 0x3f800000;
    uVar21 = 0x3f800000;
label_05dd08c7:
    (__this->fields)._heightDistance = (float)uVar20;
    (__this->fields)._anchorDistance = (float)uVar21;
    cVar13 = local_88[0];
  }
  else {
    pCVar6 = character->klass;
    bVar1 = (pCVar6->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      uVar20 = 0x3f23d70a;
      uVar21 = 0x3f23d70a;
      goto label_05dd08c7;
    }
    bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
      bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan))
      goto label_05dd08bf;
      pSVar10 = (*(uint64_t *)((char *)character + 0x2a0));
      if ((pSVar10 == (System_Collections_Generic_List_BaseUseable__o *)0x0) ||
         (__this_02 = (*(uint64_t *)((char *)pSVar10 + 0x38)), __this_02 == (Characters_BaseUseable_array *)0x0))
      goto label_05dd0dee;
      UVar26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      pUVar7 = (character->fields).Cache;
      if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd0dee;
      local_58._8_4_ = extraout_XMM0_Dc_02;
      local_58._0_8_ = UVar26.fields._0_8_;
      local_58._12_4_ = extraout_XMM0_Dd_02;
      pUVar17 = (pUVar7->fields).Transform;
      local_48 = UVar26.fields.z;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05dd0dee;
      UVar26 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar19 = UVar26.fields.z;
      fVar22 = UVar26.fields.x;
      fVar23 = UVar26.fields.y;
      uVar20 = extraout_XMM0_Dc_03;
      uVar21 = extraout_XMM0_Dd_03;
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        uStack_70 = extraout_XMM0_Dc_03;
        local_78 = (undefined1  [8])UVar26.fields._0_8_;
        uStack_6c = extraout_XMM0_Dd_03;
        local_68 = UVar26.fields.z;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        fVar19 = local_68;
        fVar22 = (float)local_78._0_4_;
        fVar23 = (float)local_78._4_4_;
        uVar20 = uStack_70;
        uVar21 = uStack_6c;
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        local_78._4_4_ = fVar23;
        local_78._0_4_ = fVar22;
        uStack_70 = uVar20;
        uStack_6c = uVar21;
        local_68 = fVar19;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        fVar19 = local_68;
        fVar22 = (float)local_78._0_4_;
        fVar23 = (float)local_78._4_4_;
      }
      fVar19 = ((float)local_58._4_4_ - fVar23) * ((float)local_58._4_4_ - fVar23) +
               ((float)local_58._0_4_ - fVar22) * ((float)local_58._0_4_ - fVar22) +
               (local_48 - fVar19) * (local_48 - fVar19);
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      cVar13 = local_88[0];
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      (__this->fields)._anchorDistance = fVar19 * 0.25;
      (__this->fields)._occlusionRadius = fVar19 * 0.45;
      (__this->fields)._heightDistance = fVar19 * 1.39;
    }
    else {
      pUVar17 = (*(pCVar6->vtable)._77_GetCameraAnchor.methodPtr)
                          (character,(pCVar6->vtable)._77_GetCameraAnchor.method);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05dd0dee;
      UVar26 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar7 = (character->fields).Cache;
      if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd0dee;
      local_58._8_4_ = extraout_XMM0_Dc_00;
      local_58._0_8_ = UVar26.fields._0_8_;
      local_58._12_4_ = extraout_XMM0_Dd_00;
      pUVar17 = (pUVar7->fields).Transform;
      local_48 = UVar26.fields.z;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05dd0dee;
      UVar26 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar19 = UVar26.fields.z;
      fVar22 = UVar26.fields.x;
      fVar23 = UVar26.fields.y;
      uVar20 = extraout_XMM0_Dc_01;
      uVar21 = extraout_XMM0_Dd_01;
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        uStack_70 = extraout_XMM0_Dc_01;
        local_78 = (undefined1  [8])UVar26.fields._0_8_;
        uStack_6c = extraout_XMM0_Dd_01;
        local_68 = UVar26.fields.z;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        fVar19 = local_68;
        fVar22 = (float)local_78._0_4_;
        fVar23 = (float)local_78._4_4_;
        uVar20 = uStack_70;
        uVar21 = uStack_6c;
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        local_78._4_4_ = fVar23;
        local_78._0_4_ = fVar22;
        uStack_70 = uVar20;
        uStack_6c = uVar21;
        local_68 = fVar19;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        fVar19 = local_68;
        fVar22 = (float)local_78._0_4_;
        fVar23 = (float)local_78._4_4_;
      }
      fVar19 = ((float)local_58._4_4_ - fVar23) * ((float)local_58._4_4_ - fVar23) +
               ((float)local_58._0_4_ - fVar22) * ((float)local_58._0_4_ - fVar22) +
               (local_48 - fVar19) * (local_48 - fVar19);
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      cVar13 = local_88[0];
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      (__this->fields)._anchorDistance = fVar19 * 0.25;
      (__this->fields)._occlusionRadius = fVar19 * 0.45;
      (__this->fields)._heightDistance = fVar19 * 0.35;
    }
  }
  if (cVar13 == '\0') {
    if (character == (Characters_BaseCharacter_o *)0x0) goto label_05dd0dee;
  }
  else {
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) || (character == (Characters_BaseCharacter_o *)0x0))
    goto label_05dd0dee;
    pUVar17 = (pUVar7->fields).Transform;
    bVar12 = (*(character->klass->vtable)._74_IsMine.methodPtr)
                       (character,(character->klass->vtable)._74_IsMine.method);
    if (bVar12) {
      if (((*targetAddress == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar7 = ((*targetAddress)->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_01 = (pUVar7->fields).Transform, __this_01 == (UnityEngine_Transform_o *)0x0))
      goto label_05dd0dee;
      UVar25 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
      fVar19 = UVar25.fields.x;
      fVar22 = UVar25.fields.y;
      fVar23 = UVar25.fields.z;
      fVar24 = UVar25.fields.w;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        local_88._8_4_ = extraout_XMM0_Dc;
        local_88._0_8_ = UVar25.fields._0_8_;
        local_88._12_4_ = extraout_XMM0_Dd;
        local_58._8_4_ = in_XMM1_Dc;
        local_58._0_8_ = UVar25.fields._8_8_;
        local_58._12_4_ = in_XMM1_Dd;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        fVar19 = (float)local_88._0_4_;
        fVar22 = (float)local_88._4_4_;
        fVar23 = (float)local_58._0_4_;
        fVar24 = (float)local_58._4_4_;
      }
      UVar25.fields.y = fVar22;
      UVar25.fields.x = fVar19;
      UVar25.fields.w = fVar24;
      UVar25.fields.z = fVar23;
      UVar25 = Utility_Util__ConstrainedToY(UVar25,(MethodInfo *)0x0);
      fVar23 = UVar25.fields.z;
      fVar24 = UVar25.fields.w;
      fVar19 = UVar25.fields.x;
      fVar22 = UVar25.fields.y;
    }
    else {
      local_98.x = 0.0;
      local_98.y = 0.0;
      local_98.z = 0.0;
      UVar25 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
      fVar23 = UVar25.fields.z;
      fVar24 = UVar25.fields.w;
      fVar19 = UVar25.fields.x;
      fVar22 = UVar25.fields.y;
    }
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_05dd0dee;
    value.fields.y = fVar22;
    value.fields.x = fVar19;
    value.fields.w = fVar24;
    value.fields.z = fVar23;
    UnityEngine_Transform__set_rotation(pUVar17,value,(MethodInfo *)0x0);
  }
  bVar12 = (*(character->klass->vtable)._74_IsMine.methodPtr)
                     (character,(character->klass->vtable)._74_IsMine.method);
  pUVar4 = (__this->fields)._menu;
  if (bVar12) {
    if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).HUDBottomHandler, pUVar5 == (UI_HUDBottomHandler_o *)0x0))
    goto label_05dd0dee;
    UI_HUDBottomHandler__SetBottomHUD(pUVar5,character,(MethodInfo *)0x0);
    if (bVar11) {
label_05dd0a1e:
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar15 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar18 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
      local_98.x = -NAN;
      pIVar16 = il2cpp_vm_Object_Box(g_data_07556710,&local_98);
      goto label_05dd0b81;
    }
    fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (1.0 <= fVar19 - (__this->fields)._lastChangeSpectateID) {
      fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar19;
      goto label_05dd0a1e;
    }
  }
  else {
    if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).HUDBottomHandler, pUVar5 == (UI_HUDBottomHandler_o *)0x0))
    goto label_05dd0dee;
    UI_HUDBottomHandler__SetBottomHUD(pUVar5,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
    if (!bVar11) {
      fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (fVar19 - (__this->fields)._lastChangeSpectateID < 1.0) goto label_05dd0b8b;
      fVar19 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar19;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar15 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pUVar7 = (character->fields).Cache;
    if (((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
        (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 == (Photon_Pun_PhotonView_o *)0x0)) ||
       (pPVar9 = (pPVar8->fields)._Owner_k__BackingField, pPVar9 == (Photon_Realtime_Player_o *)0x0))
    goto label_05dd0dee;
    pSVar18 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
    local_98.x = (float)(pPVar9->fields).actorNumber;
    pIVar16 = il2cpp_vm_Object_Box(g_data_07556710,&local_98);
label_05dd0b81:
    PhotonExtensions__SetCustomProperty(pPVar15,pSVar18,pIVar16,(MethodInfo *)0x0);
  }
label_05dd0b8b:
  pUVar4 = (__this->fields)._menu;
  if (pUVar4 != (UI_InGameMenu_o *)0x0) {
    (pUVar4->fields)._spectateUpdateTimeLeft = 0.0;
    return;
  }
label_05dd0dee:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$Awake
// il2cpp: void Cameras_InGameCamera__Awake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd0e00

void Cameras_InGameCamera__Awake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  UI_SnapshotHandler_o *pUVar4;
  Characters_CameraDetection_o *__this_01;
  
  if (Il2CppMethodInitialized_07548212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CameraDetection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SnapshotHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07548212 = '\x01';
  }
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  Cameras_InGameCamera__ApplyGraphicsSettings(__this,method);
  Cameras_InGameCamera__ResetDistance(__this,method);
  if (Il2CppMethodInitialized_0754820e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754820e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).CameraMode, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    (__this->fields).CurrentCameraMode = (pSVar2->fields)._value;
    pSVar3 = (pSVar1->fields).SnapshotsEnabled;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      if ((pSVar3->fields)._value != false) {
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05dd0f3b;
        pUVar4 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_SnapshotHandler);
        (__this->fields)._snapshotHandler = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshotHandler);
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_CameraDetection);
      Characters_CameraDetection___ctor(__this_01,__this,(MethodInfo *)0x0);
      (__this->fields)._detection = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._detection);
      return;
    }
  }
label_05dd0f3b:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$TakeSnapshot
// il2cpp: void Cameras_InGameCamera__TakeSnapshot (Cameras_InGameCamera_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x5dd0f40

void Cameras_InGameCamera__TakeSnapshot
               (Cameras_InGameCamera_o *__this,UnityEngine_Vector3_o position,int32_t damage,
               MethodInfo *method)

{
  UI_SnapshotHandler_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548213 = '\x01';
  }
  pUVar1 = (__this->fields)._snapshotHandler;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._snapshotHandler;
  if (pUVar1 == (UI_SnapshotHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_SnapshotHandler__TakeSnapshot(pUVar1,position,damage,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$Start
// il2cpp: void Cameras_InGameCamera__Start (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd0fe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd10a4: lea rdi, [rbx + 0x48]
// asm:   0x5dd10a8: jmp 0x5dd10b6

void Cameras_InGameCamera__Start(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Il2CppClass *pIVar3;
  UI_InGameMenu_o *pUVar4;
  
  if (Il2CppMethodInitialized_07548214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548214 = '\x01';
  }
  pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  pUVar4 = (UI_InGameMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar4 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05dd1154;
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)pUVar4;
    if (((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3))
    goto label_05dd1154;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 == (Settings_InputSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._input = (pSVar2->fields).General;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._input);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar4 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar3 = (Il2CppClass *)TypeInfo_UI_InGameMenu;
  }
  else {
    pUVar4 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar3 = (Il2CppClass *)TypeInfo_UI_InGameMenu;
  }
  TypeInfo_UI_InGameMenu = (UI_InGameMenu_c *)pIVar3;
  if (pUVar4 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._menu = (UI_InGameMenu_o *)0x0;
label_05dd117f:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
    return;
  }
  bVar1 = (pIVar3->_2).typeHierarchyDepth;
  if ((bVar1 <= (((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth) &&
     ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
    (__this->fields)._menu = pUVar4;
    if ((bVar1 <= (((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
    goto label_05dd117f;
  }
label_05dd1154:
  il2cpp_codegen_raise_invalid_cast_exception(pUVar4,pIVar3);
}


// Cameras.InGameCamera$$SyncCustomPosition
// il2cpp: void Cameras_InGameCamera__SyncCustomPosition (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd11a0

void Cameras_InGameCamera__SyncCustomPosition(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Camera_o *__this_00;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  CustomLogic_CustomLogicManager_StaticFields *pCVar5;
  float value;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_07548215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07548215 = '\x01';
  }
  __this_00 = (__this->fields).Camera;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  value = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
  if (value <= 0.0) {
    value = 50.0;
  }
  else if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
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
        UnityEngine_Transform__set_position
                  (pUVar4,(UnityEngine_Vector3_o)
                          (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraPosition).fields,
                   (MethodInfo *)0x0);
        pUVar3 = (__this->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar4 = (pUVar3->fields).Transform;
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          uVar1 = (pCVar5->CameraRotation).fields.x;
          uVar2 = (pCVar5->CameraRotation).fields.y;
          local_28.x = (float)uVar1 * 0.017453292;
          local_28.y = (float)uVar2 * 0.017453292;
          local_28.z = (pCVar5->CameraRotation).fields.z * 0.017453292;
          value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar4,value_00,(MethodInfo *)0x0);
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
// 0x5dd12e0
// eh: try 0x5dd1433..0x5dd1484 -> pad 0x5dd148d (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dd14a5..0x5dd14aa -> pad 0x5dd14cb cleanup
// eh: try 0x5dd14ce..0x5dd14d8 -> pad 0x5dd14e0 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd1489: jmp 0x5dd148d
// asm:   0x5dd148b: jmp 0x5dd148d
// asm:   0x5dd148d: mov rbx, rax
// asm:   0x5dd1490: cmp edx, 1
// asm:   0x5dd1493: jne 0x5dd14ce
// asm:   0x5dd1495: mov rdi, rbx
// asm:   0x5dd1498: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd149d: mov rbx, qword ptr [rax]
// asm:   0x5dd14a0: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5dd14a5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd14aa: lea rax, [rip + 0x14bcedf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose
// asm:   0x5dd14b1: mov rsi, qword ptr [rax]
// asm:   0x5dd14b4: lea rdi, [rsp + 0x10]
// asm:   0x5dd14b9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5dd14be: test rbx, rbx
// asm:   0x5dd14c1: je 0x5dd1477
// asm:   0x5dd14c3: mov rdi, rbx
// asm:   0x5dd14c6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd14cb: mov rbx, rax
// asm:   0x5dd14ce: lea rdi, [rsp + 0x30]
// asm:   0x5dd14d3: call 0x2fde640  ; il2cpp_runtime_helper_02fde640()
// asm:   0x5dd14d8: mov rdi, rbx
// asm:   0x5dd14db: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd14e0: mov rdi, rax
// asm:   0x5dd14e3: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_InGameCamera__UpdateMapLights(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  int iVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Settings_GraphicsSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  System_Collections_Generic_List_MapLight__o *__this_01;
  bool bVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  System_Collections_Generic_List_Enumerator_T__o *local_30;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_07548216 == '\0') {
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
    Il2CppMethodInitialized_07548216 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar6 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    local_28._8_4_ = extraout_XMM0_Dc;
    local_28._0_8_ = UVar6.fields._0_8_;
    local_28._12_4_ = extraout_XMM0_Dd;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar3 != (Settings_GraphicsSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).LightDistance, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      iVar1 = (pSVar4->fields)._value;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_01 = TypeInfo_Map_MapLoader->static_fields->MapLights;
      if (__this_01 != (System_Collections_Generic_List_MapLight__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapLight_GetEnumerator);
        local_38 = 0;
        local_30 = &local_58;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_MoveNext);
          if (!bVar5) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapLight_Dispose);
            return;
          }
          if ((Map_MapLight_o *)local_58.fields._current == (Map_MapLight_o *)0x0) break;
          UVar6.fields.x = (float)local_28._0_4_;
          UVar6.fields.y = (float)local_28._4_4_;
          Map_MapLight__UpdateCull
                    ((Map_MapLight_o *)local_58.fields._current,UVar6,(float)iVar1,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$FixedUpdate
// il2cpp: void Cameras_InGameCamera__FixedUpdate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd14f0

void Cameras_InGameCamera__FixedUpdate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_CameraDetection_o *pCVar1;
  
  Cameras_InGameCamera__UpdateMapLights(__this,method);
  pCVar1 = (__this->fields)._detection;
  if (pCVar1 == (Characters_CameraDetection_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pCVar1->klass->vtable)._6_OnFixedUpdate.methodPtr)
            (pCVar1,(pCVar1->klass->vtable)._6_OnFixedUpdate.method);
  return;
}


// Cameras.InGameCamera$$LateUpdate
// il2cpp: void Cameras_InGameCamera__LateUpdate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd1520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd155c: jmp 0x5dd160c

void Cameras_InGameCamera__LateUpdate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  GameManagers_InGameManager_o *pGVar4;
  Characters_BaseCharacter_o *pCVar5;
  Settings_GeneralInputSettings_o *pSVar6;
  Settings_KeybindSetting_o *__this_00;
  UI_InGameMenu_o *pUVar7;
  UI_HUDBottomHandler_o *pUVar8;
  Settings_GeneralSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Characters_BaseCharacter_c *pCVar11;
  bool bVar12;
  int32_t iVar13;
  System_Collections_Generic_List_BaseCharacter__o *__this_01;
  Characters_BaseCharacter_o *pCVar14;
  MethodInfo **in_RCX;
  MethodInfo *method_00;
  Cameras_CameraOcclusion_c *method_01;
  Utility_Cycle_InGameCamera_SpecateMode__o *pUVar15;
  float fVar16;
  
  if (Il2CppMethodInitialized_07548217 == '\0') {
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
    Il2CppMethodInitialized_07548217 = '\x01';
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dd154b;
label_05dd15f7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    cVar1 = pCVar3->Cutscene;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dd15f7;
label_05dd154b:
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    cVar1 = pCVar3->Cutscene;
  }
  if (cVar1 != '\0') {
label_05dd161b:
    Cameras_InGameCamera__SyncCustomPosition(__this,method);
    method_01 = TypeInfo_Cameras_CameraOcclusion;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__Clear((MethodInfo *)method_01);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    cVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera;
  }
  else {
    cVar1 = pCVar3->ManualCamera;
  }
  if (cVar1 != '\0') goto label_05dd161b;
  pGVar4 = (__this->fields)._inGameManager;
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_05dd1a8f;
  pCVar14 = (__this->fields)._follow;
  pCVar5 = (pGVar4->fields).CurrentCharacter;
  if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)pCVar5,(MethodInfo *)0x0);
  if (bVar12) {
    pGVar4 = (__this->fields)._inGameManager;
    if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_05dd1a8f;
    pCVar14 = (pGVar4->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      pGVar4 = (__this->fields)._inGameManager;
      if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_05dd1a8f;
      Cameras_InGameCamera__SetFollow(__this,(pGVar4->fields).CurrentCharacter,true,(MethodInfo *)in_RCX);
    }
  }
  pGVar4 = (__this->fields)._inGameManager;
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_05dd1a8f;
  pCVar14 = (pGVar4->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar12 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((!bVar12) && (bVar12 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar12)) {
      pSVar6 = (__this->fields)._input;
      if ((pSVar6 == (Settings_GeneralInputSettings_o *)0x0) ||
         (__this_00 = (pSVar6->fields).ChangeCamera, __this_00 == (Settings_KeybindSetting_o *)0x0))
      goto label_05dd1a8f;
      bVar12 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
      if (bVar12) {
        pCVar14 = (__this->fields)._follow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          pUVar15 = (__this->fields).SpecMode;
          if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_05dd1a8f;
          iVar13 = Utility_Cycle_Int32Enum___Current
                             ((Utility_Cycle_T__o *)pUVar15,
                              (MethodInfo_494C4B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current)
          ;
          if (iVar13 == 0) {
            pUVar15 = (__this->fields).SpecMode;
            if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_05dd1a8f;
            iVar13 = 2;
            goto label_05dd1818;
          }
        }
        pUVar15 = (__this->fields).SpecMode;
        if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_05dd1a8f;
        Utility_Cycle_Int32Enum___Next
                  ((Utility_Cycle_T__o *)pUVar15,
                   (MethodInfo_494C440 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
      }
    }
  }
  else {
    pUVar15 = (__this->fields).SpecMode;
    if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_05dd1a8f;
    iVar13 = 0;
label_05dd1818:
    Utility_Cycle_Int32Enum___Set
              ((Utility_Cycle_T__o *)pUVar15,iVar13,
               (MethodInfo_494C4E0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Set);
  }
  pUVar15 = (__this->fields).SpecMode;
  if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto label_05dd1a8f;
  iVar13 = Utility_Cycle_Int32Enum___Current
                     ((Utility_Cycle_T__o *)pUVar15,
                      (MethodInfo_494C4B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
  if (iVar13 == 2) {
label_05dd183e:
    pCVar14 = (Characters_BaseCharacter_o *)0x0;
label_05dd18be:
    Cameras_InGameCamera__SetFollow(__this,pCVar14,true,(MethodInfo *)in_RCX);
  }
  else {
    pCVar14 = (__this->fields)._follow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (Il2CppMethodInitialized_07548223 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
        Il2CppMethodInitialized_07548223 = '\x01';
      }
      __this_01 = Cameras_InGameCamera__GetSortedCharacters(__this,method_00);
      if (__this_01 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) goto label_05dd1a8f;
      if ((__this_01->fields)._size < 1) goto label_05dd183e;
      in_RCX = &MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item;
      pCVar14 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,0,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
      goto label_05dd18be;
    }
  }
  pCVar14 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    pGVar4 = (__this->fields)._inGameManager;
    if (pGVar4 != (GameManagers_InGameManager_o *)0x0) {
      pCVar5 = (__this->fields)._follow;
      pCVar14 = (pGVar4->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)pCVar14,(MethodInfo *)0x0);
      if (bVar12) {
        Cameras_InGameCamera__UpdateMain(__this,(MethodInfo *)pCVar14);
        pCVar5 = (__this->fields)._follow;
        if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_05dd1a8f;
        if ((pCVar5->fields).Dead != false) {
          pUVar7 = (__this->fields)._menu;
          if ((pUVar7 == (UI_InGameMenu_o *)0x0) ||
             (pUVar8 = (pUVar7->fields).HUDBottomHandler, pUVar8 == (UI_HUDBottomHandler_o *)0x0))
          goto label_05dd1a8f;
          pCVar14 = (Characters_BaseCharacter_o *)0x0;
          UI_HUDBottomHandler__SetBottomHUD(pUVar8,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
        }
      }
      else {
        Cameras_InGameCamera__UpdateSpectate(__this,(MethodInfo *)pCVar14);
      }
      pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar9 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar10 = (pSVar9->fields).CameraClipping, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar10->fields)._value == false) {
          pCVar5 = (__this->fields)._follow;
          if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_05dd1a8f;
          pCVar11 = pCVar5->klass;
          bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if (((bVar2 <= (pCVar11->_2).typeHierarchyDepth) &&
              ((pCVar11->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) &&
             (fVar16 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)pCVar14), 0.0 < fVar16)) {
            Cameras_InGameCamera__UpdateObstacles(__this,(MethodInfo *)pCVar14);
          }
        }
        pCVar5 = (__this->fields)._follow;
        if (pCVar5 != (Characters_BaseCharacter_o *)0x0) {
          if ((pCVar5->fields).Dead != false) {
            pUVar7 = (__this->fields)._menu;
            if ((pUVar7 == (UI_InGameMenu_o *)0x0) ||
               (pUVar8 = (pUVar7->fields).HUDBottomHandler, pUVar8 == (UI_HUDBottomHandler_o *)0x0))
            goto label_05dd1a8f;
            pCVar14 = (Characters_BaseCharacter_o *)0x0;
            UI_HUDBottomHandler__SetBottomHUD(pUVar8,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
          }
label_05dd1a4f:
          Cameras_InGameCamera__UpdateOcclusion(__this,(MethodInfo *)pCVar14);
          Cameras_InGameCamera__UpdateFOV(__this,(MethodInfo *)pCVar14);
          Cameras_InGameCamera__UpdateNapeLockImage(__this,(MethodInfo *)pCVar14);
          return;
        }
      }
    }
  }
  else {
    pUVar15 = (__this->fields).SpecMode;
    if (pUVar15 != (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) {
      pCVar14 = (Characters_BaseCharacter_o *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current;
      iVar13 = Utility_Cycle_Int32Enum___Current
                         ((Utility_Cycle_T__o *)pUVar15,
                          (MethodInfo_494C4B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
      if (iVar13 == 2) {
        Cameras_InGameCamera__UpdateFreeCam(__this,(MethodInfo *)pCVar14);
      }
      goto label_05dd1a4f;
    }
  }
label_05dd1a8f:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateOcclusion
// il2cpp: void Cameras_InGameCamera__UpdateOcclusion (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd3f00

void Cameras_InGameCamera__UpdateOcclusion(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *x;
  GameManagers_InGameManager_o *pGVar2;
  Settings_GeneralSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Camera_o *camera;
  Utility_BaseComponentCache_o *pUVar6;
  bool bVar7;
  Characters_BaseCharacter_o *method_00;
  MethodInfo *method_01;
  Cameras_CameraOcclusion_c *method_02;
  float fVar8;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_o groundOrigin;
  
  if (Il2CppMethodInitialized_07548218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07548218 = '\x01';
  }
  x = (__this->fields)._follow;
  if (x != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (x->klass->_2).typeHierarchyDepth) &&
       ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pGVar2 = (__this->fields)._inGameManager;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
label_05dd4142:
        ThrowNullReferenceException();
      }
      method_00 = (pGVar2->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)method_00,(MethodInfo *)0x0);
      if ((bVar7) && ((x->fields).Dead == false)) {
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar3 == (Settings_GeneralSettings_o *)0x0) ||
           (pSVar4 = (pSVar3->fields).CameraClipping, pSVar4 == (Settings_BoolSetting_o *)0x0))
        goto label_05dd4142;
        if ((pSVar4->fields)._value == false) {
          fVar8 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)method_00);
          if (0.0 < fVar8) {
            if (((*(uint64_t *)((char *)x + 0x108)) != (void *)0x0) &&
               (pUVar5 = *(UnityEngine_Transform_o **)((long)(*(uint64_t *)((char *)x + 0x108)) + 0x38),
               pUVar5 != (UnityEngine_Transform_o *)0x0)) {
              camera = (__this->fields).Camera;
              start = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).Cache;
              if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar5 = (pUVar6->fields).Transform;
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  end = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                  pUVar6 = (x->fields).Cache;
                  if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                    pUVar5 = (pUVar6->fields).Transform;
                    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                      fVar8 = (__this->fields)._occlusionRadius;
                      method_01 = (MethodInfo *)0x0;
                      groundOrigin = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                      }
                      Cameras_CameraOcclusion__SetCapsule(camera,start,end,fVar8,groundOrigin,method_01);
                      return;
                    }
                  }
                }
              }
            }
            goto label_05dd4142;
          }
        }
      }
    }
  }
  method_02 = TypeInfo_Cameras_CameraOcclusion;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)method_02);
  return;
}


// Cameras.InGameCamera$$OnDestroy
// il2cpp: void Cameras_InGameCamera__OnDestroy (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd47c0

void Cameras_InGameCamera__OnDestroy(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_07548219 = '\x01';
    uVar1 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
  }
  else {
    uVar1 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
  }
  TypeInfo_Cameras_CameraOcclusion = (Cameras_CameraOcclusion_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    Cameras_CameraOcclusion__Clear((MethodInfo *)klass);
    return;
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)klass);
  return;
}


// Cameras.InGameCamera$$OnDisable
// il2cpp: void Cameras_InGameCamera__OnDisable (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd4820
// fidelity: the machine code has facts this C leaves out:
//   tail call to Cameras_CameraOcclusion__Clear
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd483d: pop rax
// asm:   0x5dd483e: jmp 0x5dccab0  ; Cameras_CameraOcclusion__Clear()

void Cameras_InGameCamera__OnDisable(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Cameras_CameraOcclusion_StaticFields *pCVar3;
  System_Action_T1__T2__o *pSVar4;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754821a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_0754821a = '\x01';
    uVar2 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  if (Il2CppMethodInitialized_075481fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_ScriptableRenderContext_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_075481fb = '\x01';
    uVar2 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    cVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed;
    klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion)->static_fields + 0xb4);
    klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
  }
  if (cVar1 == '\0') {
    TypeInfo_Cameras_CameraOcclusion = (Cameras_CameraOcclusion_c *)klass;
    return;
  }
  TypeInfo_Cameras_CameraOcclusion = (Cameras_CameraOcclusion_c *)klass;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  Cameras_CameraOcclusion__RestoreMaterials((MethodInfo *)klass);
  pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  pCVar3->_camera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pCVar3->_camera);
  TypeInfo_Cameras_CameraOcclusion->static_fields->_radius = 0.0;
  pSVar4 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
  System_Action_ScriptableRenderContext__object____ctor
            (pSVar4,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering,
             (MethodInfo_4A8AA40 *)0x0);
  UnityEngine_Rendering_RenderPipelineManager__remove_beginCameraRendering
            ((System_Action_ScriptableRenderContext__Camera__o *)pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
  System_Action_ScriptableRenderContext__object____ctor
            (pSVar4,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering,
             (MethodInfo_4A8AA40 *)0x0);
  UnityEngine_Rendering_RenderPipelineManager__remove_endCameraRendering
            ((System_Action_ScriptableRenderContext__Camera__o *)pSVar4,(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed = false;
  return;
}


// Cameras.InGameCamera$$UpdateNapeLockImage
// il2cpp: void Cameras_InGameCamera__UpdateNapeLockImage (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd4550

void Cameras_InGameCamera__UpdateNapeLockImage(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BaseCharacter_o *pCVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *y;
  Characters_BaseTitan_o *pCVar4;
  UI_InGameMenu_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  Characters_BaseTitanComponentCache_o *pCVar7;
  Cameras_BaseCamera_o *pCVar8;
  UnityEngine_Camera_o *__this_00;
  bool bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o position;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754821b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_0754821b = '\x01';
  }
  pCVar2 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pGVar3 = (__this->fields)._inGameManager;
    if (pGVar3 == (GameManagers_InGameManager_o *)0x0) goto label_05dd47af;
    pCVar2 = (__this->fields)._follow;
    y = (pGVar3->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((bVar9) && ((__this->fields)._napeLock != false)) {
      pCVar4 = (__this->fields)._napeLockTitan;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        pUVar5 = (__this->fields)._menu;
        if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
           (pUVar6 = (pUVar5->fields).NapeLock, pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._napeLockTitan;
          if ((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
             ((pCVar7 = (pCVar4->fields).BaseTitanCache, pCVar7 != (Characters_BaseTitanComponentCache_o *)0x0
              && (pUVar10 = (pCVar7->fields).Neck, pUVar10 != (UnityEngine_Transform_o *)0x0)))) {
            UVar11 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            pCVar4 = (__this->fields)._napeLockTitan;
            if ((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
               (pCVar7 = (pCVar4->fields).BaseTitanCache,
               pCVar7 != (Characters_BaseTitanComponentCache_o *)0x0)) {
              pUVar10 = (pCVar7->fields).Neck;
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                UVar12 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
                pCVar4 = (__this->fields)._napeLockTitan;
                if (((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
                    (pCVar8 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,
                    pCVar8 != (Cameras_BaseCamera_o *)0x0)) &&
                   (__this_00 = (pCVar8->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
                  fVar1 = (pCVar4->fields).Size;
                  fStack_38 = UVar11.fields.x;
                  fStack_34 = UVar11.fields.y;
                  position.fields.y = fStack_34 - UVar12.fields.y * fVar1;
                  position.fields.x = fStack_38 - UVar12.fields.x * fVar1;
                  position.fields.z = UVar11.fields.z - UVar12.fields.z * fVar1;
                  UVar11 = UnityEngine_Camera__WorldToScreenPoint_68c0c30
                                     (__this_00,position,(MethodInfo *)0x0);
                  pUVar5 = (__this->fields)._menu;
                  if (pUVar5 != (UI_InGameMenu_o *)0x0) {
                    pUVar6 = (pUVar5->fields).NapeLock;
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar10 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                        UnityEngine_Transform__set_position(pUVar10,UVar11,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_05dd47af;
      }
    }
  }
  pUVar5 = (__this->fields)._menu;
  if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
     (pUVar6 = (pUVar5->fields).NapeLock, pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
    return;
  }
label_05dd47af:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateMain
// il2cpp: void Cameras_InGameCamera__UpdateMain (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd1b20
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd1bfe: jmp 0x5dd1f6d
// asm:   0x5dd1fb0: jmp 0x5dd2c08
// asm:   0x5dd220a: jmp 0x5dd2911
// asm:   0x5dd225a: jmp 0x5dd2279
// asm:   0x5dd26b9: jmp 0x5dd2c08

void Cameras_InGameCamera__UpdateMain(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o **ppUVar1;
  Characters_BaseTitan_o **targetAddress;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  Settings_InputSettings_o *pSVar10;
  Settings_HumanInputSettings_o *pSVar11;
  Settings_KeybindSetting_o *pSVar12;
  Settings_GeneralInputSettings_o *pSVar13;
  Settings_IntSetting_o *pSVar14;
  System_String_o *pSVar15;
  UnityEngine_Camera_o *__this_00;
  Utility_BaseComponentCache_o *pUVar16;
  Characters_BaseCharacter_o *pCVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  Settings_GeneralSettings_o *pSVar19;
  Settings_FloatSetting_o *pSVar20;
  Settings_BoolSetting_o *pSVar21;
  Settings_FloatSetting_o *pSVar22;
  Characters_BaseTitanComponentCache_o *pCVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int32_t iVar28;
  int32_t iVar29;
  CustomLogic_CustomLogicManager_StaticFields *pCVar30;
  UnityEngine_Transform_o *pUVar31;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar32;
  Characters_BaseTitan_o *pCVar33;
  MethodInfo *pMVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o worldPosition;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Quaternion_o value_03;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o axis_00;
  float local_d8;
  float fStack_d4;
  float local_b8;
  float fStack_b4;
  float local_98;
  float fStack_94;
  undefined4 local_88;
  float fStack_84;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_0754821c == '\0') {
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
    Il2CppMethodInitialized_0754821c = '\x01';
  }
  local_68 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar24 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  }
  else {
    bVar24 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  }
  if ((!bVar24) && (bVar24 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar24)) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar30 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      if ((pCVar30->CameraMode).fields.hasValue == false) goto label_05dd1e41;
label_05dd1c4e:
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar30 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      }
      pMVar34 = MethodInfo_System_Nullable_CameraInputMode_get_Value;
      iVar27 = System_Nullable_Int32Enum___get_Value
                         ((System_Nullable_Int32Enum__o *)&pCVar30->CameraMode,
                          (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_CameraInputMode_get_Value);
label_05dd1c7c:
      (__this->fields).CurrentCameraMode = iVar27;
    }
    else {
      pCVar30 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      if ((pCVar30->CameraMode).fields.hasValue != false) goto label_05dd1c4e;
label_05dd1e41:
      pSVar13 = (__this->fields)._input;
      if ((pSVar13 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar12 = (pSVar13->fields).ChangeCamera, pSVar12 == (Settings_KeybindSetting_o *)0x0))
      goto label_05dd2c08;
      pMVar34 = (MethodInfo *)0x0;
      bVar24 = Settings_KeybindSetting__GetKeyDown(pSVar12,false,(MethodInfo *)0x0);
      if (bVar24) {
        pSVar19 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar19 == (Settings_GeneralSettings_o *)0x0) ||
           (pSVar14 = (pSVar19->fields).CameraMode, pSVar14 == (Settings_IntSetting_o *)0x0))
        goto label_05dd2c08;
        iVar27 = (__this->fields).CurrentCameraMode;
        iVar9 = (pSVar14->fields)._value;
        if ((TypeInfo_Cameras_InGameCamera->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera);
        }
        if (iVar27 == 2) {
          iVar27 = (uint)(iVar9 == 3) * 3;
        }
        else if (iVar27 == 1) {
          iVar27 = 2;
        }
        else if (iVar27 == 0) {
          iVar27 = 1;
        }
        else {
          iVar27 = 0;
        }
        goto label_05dd1c7c;
      }
    }
    Cameras_InGameCamera__UpdateTitanZoom(__this,pMVar34);
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar10 == (Settings_InputSettings_o *)0x0) ||
        (pSVar11 = (pSVar10->fields).Human, pSVar11 == (Settings_HumanInputSettings_o *)0x0)) ||
       (pSVar12 = (pSVar11->fields).NapeLock, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd2c08;
    method = (MethodInfo *)0x0;
    bVar24 = Settings_KeybindSetting__GetKeyDown(pSVar12,false,(MethodInfo *)0x0);
    if ((bVar24) &&
       (bVar24 = (__this->fields)._napeLock, (__this->fields)._napeLock = (bool)(bVar24 ^ 1), bVar24 == false)
       ) {
      method = (MethodInfo *)Cameras_InGameCamera__GetNearestTitan(__this,method);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pCVar33 = (Characters_BaseTitan_o *)0x0;
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar24) {
        pCVar17 = (__this->fields)._follow;
        if (((pCVar17 == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar16 = (pCVar17->fields).Cache, pUVar16 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar32 = (pUVar16->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
        if ((((Characters_BaseTitan_o *)method == (Characters_BaseTitan_o *)0x0) ||
            (pUVar16 = (((Characters_BaseTitan_o *)method)->fields).Cache,
            pUVar16 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar32 = (pUVar16->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        pCVar33 = (Characters_BaseTitan_o *)0x0;
        UVar43 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e7b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b7 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        local_b8 = UVar42.fields.x;
        fStack_b4 = UVar42.fields.y;
        fStack_b4 = fStack_b4 - UVar43.fields.y;
        fVar35 = UVar42.fields.z - UVar43.fields.z;
        local_b8 = local_b8 - UVar43.fields.x;
        fVar35 = fStack_b4 * fStack_b4 + local_b8 * local_b8 + fVar35 * fVar35;
        if (fVar35 < 0.0) {
          fVar35 = sqrtf(fVar35);
        }
        else {
          fVar35 = SQRT(fVar35);
        }
        if (fVar35 < 150.0) {
          (__this->fields)._napeLockTitan = (Characters_BaseTitan_o *)method;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._napeLockTitan);
          goto label_05dd1f0e;
        }
      }
      method = (MethodInfo *)pCVar33;
      (__this->fields)._napeLock = false;
    }
label_05dd1f0e:
    if (((__this->fields)._napeLock != false) &&
       (pCVar17 = (__this->fields)._follow, pCVar17 != (Characters_BaseCharacter_o *)0x0)) {
      bVar7 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      method = (MethodInfo *)(ulong)bVar7;
      if ((bVar7 <= (pCVar17->klass->_2).typeHierarchyDepth) &&
         ((pCVar17->klass->_2).typeHierarchy
          [(long)&(((Characters_BaseTitan_o *)((long)method + -0x2a0))->fields).field_0x28f] ==
          (Il2CppClass *)TypeInfo_Characters_Human)) {
        pSVar15 = (*(uint64_t *)((char *)pCVar17 + 0x150));
        if (pSVar15 == (System_String_o *)0x0) goto label_05dd2c08;
        if (*(int *)&pSVar15[0x13].monitor != 0) {
          (__this->fields)._napeLock = false;
        }
      }
    }
  }
  fVar35 = Cameras_InGameCamera__GetCameraDistance(__this,method);
  __this_00 = (__this->fields).Camera;
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto label_05dd2c08;
  fVar36 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
  if ((fVar35 != 0.0) || (NAN(fVar35))) {
    fVar36 = ((200.0 - fVar36) * fVar35) / 150.0;
    pUVar16 = (__this->fields).Cache;
  }
  else {
    fVar36 = 0.1;
    pUVar16 = (__this->fields).Cache;
  }
  if (pUVar16 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd2c08;
  local_48 = ZEXT416((uint)fVar36);
  pCVar17 = (__this->fields)._follow;
  if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_05dd2c08;
  pUVar32 = (pUVar16->fields).Transform;
  pUVar31 = (*(pCVar17->klass->vtable)._77_GetCameraAnchor.methodPtr)
                      (pCVar17,(pCVar17->klass->vtable)._77_GetCameraAnchor.method);
  if ((pUVar31 == (UnityEngine_Transform_o *)0x0) ||
     (UVar42 = UnityEngine_Transform__get_position(pUVar31,(MethodInfo *)0x0),
     pUVar32 == (UnityEngine_Transform_o *)0x0)) goto label_05dd2c08;
  ppUVar1 = &(__this->fields).Cache;
  UnityEngine_Transform__set_position(pUVar32,UVar42,(MethodInfo *)0x0);
  if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0)) goto label_05dd2c08;
  pMVar34 = (MethodInfo *)0x0;
  UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar18->upVector).fields.x;
  uVar5 = (pUVar18->upVector).fields.y;
  fVar36 = (pUVar18->upVector).fields.z;
  fVar37 = Cameras_InGameCamera__GetHeightDistance(__this,pMVar34);
  pSVar19 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar19 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar20 = (pSVar19->fields).CameraHeight, pSVar20 == (Settings_FloatSetting_o *)0x0)) goto label_05dd2c08;
  fVar38 = (pSVar20->fields)._value;
  local_d8 = UVar42.fields.x;
  fStack_d4 = UVar42.fields.y;
  UVar43.fields.x = local_d8 + fVar38 * (float)uVar2 * fVar37;
  UVar43.fields.y = fStack_d4 + fVar38 * (float)uVar5 * fVar37;
  UVar43.fields.z = UVar42.fields.z + fVar36 * fVar37 * fVar38;
  UnityEngine_Transform__set_position(pUVar32,UVar43,(MethodInfo *)0x0);
  if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0)) goto label_05dd2c08;
  bVar24 = false;
  UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar3 = (pUVar18->upVector).fields.x;
  uVar6 = (pUVar18->upVector).fields.y;
  fVar35 = (float)(~-(uint)(fVar35 == 0.0) & (uint)(0.6 - fVar35));
  fVar36 = (pUVar18->upVector).fields.z * fVar35;
  value.fields.x = UVar42.fields.x - (fVar35 * (float)uVar3 + fVar35 * (float)uVar3);
  value.fields.y = UVar42.fields.y - (fVar35 * (float)uVar6 + fVar35 * (float)uVar6);
  value.fields.z = UVar42.fields.z - (fVar36 + fVar36);
  UnityEngine_Transform__set_position(pUVar32,value,(MethodInfo *)0x0);
  if ((__this->fields)._napeLock != false) {
    pCVar33 = (__this->fields)._napeLockTitan;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar24 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar25 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  }
  else {
    bVar25 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  }
  if ((!bVar25) && (bVar25 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar25)) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      cVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked;
    }
    else {
      cVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked;
    }
    if (cVar8 == '\0') {
      pSVar19 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((((pSVar19 == (Settings_GeneralSettings_o *)0x0) ||
           (pSVar20 = (pSVar19->fields).MouseSpeed, pSVar20 == (Settings_FloatSetting_o *)0x0)) ||
          (pSVar21 = (pSVar19->fields).InvertMouse, pSVar21 == (Settings_BoolSetting_o *)0x0)) ||
         ((pMVar34 = (MethodInfo *)(pSVar19->fields).OriginalCameraDeadzone, pMVar34 == (MethodInfo *)0x0 ||
          (pSVar22 = (pSVar19->fields).OriginalCameraSpeed, pSVar22 == (Settings_FloatSetting_o *)0x0))))
      goto label_05dd2c08;
      fVar35 = (pSVar20->fields)._value;
      bVar25 = (pSVar21->fields)._value;
      fVar36 = *(float *)((long)&pMVar34->name + 4);
      fVar37 = (pSVar22->fields)._value;
      bVar26 = Cameras_InGameCamera__get_UsesMouseLook(__this,pMVar34);
      if (((__this->fields).CurrentCameraMode == 1) && (!bVar26)) {
        iVar28 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        fVar38 = (float)iVar28;
        fVar41 = (1.0 - fVar36) * 0.5 * fVar38;
        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        fVar40 = (fVar36 + 1.0) * 0.5 * fVar38;
        UVar42 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        fVar36 = UVar42.fields.x;
        if ((fVar36 < fVar41) || (fVar40 < fVar36)) {
          if (fVar41 <= fVar36) {
            if (fVar36 <= fVar40) goto label_05dd24d2;
            fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
            goto label_05dd2c08;
            fVar36 = fVar37 * ((fVar36 - fVar40) / fVar38) * fVar41 * fVar35 * 62.0;
          }
          else {
            fVar40 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
            goto label_05dd2c08;
            fVar36 = fVar37 * ((fVar41 - fVar36) / fVar38) * fVar40 * fVar35 * -62.0;
          }
          UVar43 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
          fVar37 = UVar43.fields.z;
          axis.fields._0_8_ = il2cpp_runtime_helper_05bbcf10(0);
          axis.fields.z = fVar37;
          UnityEngine_Transform__RotateAround(pUVar32,UVar43,axis,fVar36,(MethodInfo *)0x0);
        }
label_05dd24d2:
        iVar28 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        iVar29 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        local_68 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Transform__get_rotation(pUVar32,(MethodInfo *)0x0);
        UVar43 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
        euler.fields.x = UVar43.fields.x * 57.29578;
        euler.fields.y = UVar43.fields.y * 57.29578;
        euler.fields.z = UVar43.fields.z * 57.29578;
        UVar43 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        if (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd2c08;
        pUVar31 = ((*ppUVar1)->fields).Transform;
        fStack_84 = UVar42.fields.y;
        if (pUVar31 == (UnityEngine_Transform_o *)0x0) goto label_05dd2c08;
        local_68 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Transform__get_rotation(pUVar31,(MethodInfo *)0x0);
        UVar42 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
        euler_00.fields.x = UVar42.fields.x * 57.29578;
        euler_00.fields.y = UVar42.fields.y * 57.29578;
        euler_00.fields.z = UVar42.fields.z * 57.29578;
        UVar42 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
        fStack_94 = UVar43.fields.y;
        local_58.y = fStack_94 * 0.017453292;
        local_58.x = ((((float)iVar28 * 0.6 - fStack_84) * 280.0 * 0.5) / (float)iVar29) * 0.017453292;
        local_58.z = UVar42.fields.z * 0.017453292;
        value_03 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar32,value_03,(MethodInfo *)0x0);
      }
      if (bVar24 == false && bVar26) {
        if (Il2CppMethodInitialized_07548225 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
          il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
          Il2CppMethodInitialized_07548225 = '\x01';
        }
        fVar37 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        fVar36 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
        fVar36 = fVar36 * -10.0 * fVar35;
        if (bVar25 == false) {
          if (Il2CppMethodInitialized_0753e72c != '\0') goto label_05dd26cb;
label_05dd269e:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
          pUVar16 = *ppUVar1;
        }
        else {
          fVar36 = -fVar36;
          if (Il2CppMethodInitialized_0753e72c == '\0') goto label_05dd269e;
label_05dd26cb:
          pUVar16 = *ppUVar1;
        }
        if ((pUVar16 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar32 = (pUVar16->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        uVar4 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
        fVar38 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.z;
        UVar42 = UnityEngine_Transform__get_up(pUVar32,(MethodInfo *)0x0);
        if (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd2c08;
        pUVar32 = ((*ppUVar1)->fields).Transform;
        if (pUVar32 == (UnityEngine_Transform_o *)0x0) goto label_05dd2c08;
        UVar43 = UnityEngine_Transform__get_right(pUVar32,(MethodInfo *)0x0);
        fVar38 = (float)il2cpp_runtime_helper_059fb780(uVar4,fVar38,UVar42.fields._0_8_,UVar42.fields.z,UVar43.fields._0_8_,
                                     UVar43.fields.z,0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        UnityEngine_Transform__RotateAround
                  (pUVar32,UVar42,
                   (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,
                   fVar35 * fVar37 * 10.0,(MethodInfo *)0x0);
        pUVar16 = *ppUVar1;
        if ((80.0 < fVar36 + fVar38) || (fVar36 + fVar38 < -80.0)) {
          if ((pUVar16 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar32 = (pUVar16->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd2c08;
          UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
          fVar35 = UVar42.fields.z;
          if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar31 = ((*ppUVar1)->fields).Transform, pUVar31 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd2c08;
          UVar43 = UnityEngine_Transform__get_right(pUVar31,(MethodInfo *)0x0);
          fVar37 = UVar43.fields.z;
          uVar39 = UVar43.fields._0_8_;
          fVar36 = *(float *)(&g_data_0100ac18 + (ulong)(0.0 <= fVar38) * 4) - fVar38;
          local_b8 = UVar42.fields.x;
          fStack_b4 = UVar42.fields.y;
        }
        else {
          if ((pUVar16 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar32 = (pUVar16->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd2c08;
          UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
          fVar35 = UVar42.fields.z;
          if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar31 = ((*ppUVar1)->fields).Transform, pUVar31 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd2c08;
          UVar43 = UnityEngine_Transform__get_right(pUVar31,(MethodInfo *)0x0);
          fVar37 = UVar43.fields.z;
          uVar39 = UVar43.fields._0_8_;
          local_b8 = UVar42.fields.x;
          fStack_b4 = UVar42.fields.y;
        }
        UVar42.fields.y = fStack_b4;
        UVar42.fields.x = local_b8;
        UVar42.fields.z = fVar35;
        axis_00.fields.z = fVar37;
        axis_00.fields.x = (float)(int)uVar39;
        axis_00.fields.y = (float)(int)((ulong)uVar39 >> 0x20);
        UnityEngine_Transform__RotateAround(pUVar32,UVar42,axis_00,fVar36,(MethodInfo *)0x0);
      }
    }
  }
  if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
    UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
    if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar31 = ((*ppUVar1)->fields).Transform, pUVar31 != (UnityEngine_Transform_o *)0x0)) {
      UVar43 = UnityEngine_Transform__get_forward(pUVar31,(MethodInfo *)0x0);
      fVar35 = (__this->fields)._anchorDistance;
      local_d8 = UVar42.fields.x;
      fStack_d4 = UVar42.fields.y;
      value_00.fields.x = UVar43.fields.x * -10.0 * fVar35 * (float)local_48._0_4_ + local_d8;
      value_00.fields.y = UVar43.fields.y * -10.0 * fVar35 * (float)local_48._0_4_ + fStack_d4;
      value_00.fields.z = UVar43.fields.z * -10.0 * fVar35 * (float)local_48._0_4_ + UVar42.fields.z;
      UnityEngine_Transform__set_position(pUVar32,value_00,(MethodInfo *)0x0);
      if (bVar24 != false) {
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        UVar42 = UnityEngine_Transform__get_eulerAngles(pUVar32,(MethodInfo *)0x0);
        value_01.fields.z = UVar42.fields.z;
        pCVar33 = (__this->fields)._napeLockTitan;
        if ((pCVar33 == (Characters_BaseTitan_o *)0x0) ||
           (((pCVar23 = (pCVar33->fields).BaseTitanCache,
             pCVar23 == (Characters_BaseTitanComponentCache_o *)0x0 ||
             (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0)) ||
            (pCVar17 = (__this->fields)._follow, pCVar17 == (Characters_BaseCharacter_o *)0x0))))
        goto label_05dd2c08;
        pUVar32 = (pCVar23->fields).Neck;
        pUVar31 = ((*ppUVar1)->fields).Transform;
        __this_01 = (*(pCVar17->klass->vtable)._77_GetCameraAnchor.methodPtr)
                              (pCVar17,(pCVar17->klass->vtable)._77_GetCameraAnchor.method);
        if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05dd2c08;
        UVar42 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        if (pUVar32 == (UnityEngine_Transform_o *)0x0) goto label_05dd2c08;
        UVar43 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
        if (pUVar31 == (UnityEngine_Transform_o *)0x0) goto label_05dd2c08;
        worldPosition.fields.z = UVar43.fields.z * 0.2 + UVar42.fields.z * 0.8;
        local_b8 = UVar42.fields.x;
        fStack_b4 = UVar42.fields.y;
        worldPosition.fields.x = UVar43.fields.x * 0.2 + local_b8 * 0.8;
        worldPosition.fields.y = UVar43.fields.y * 0.2 + fStack_b4 * 0.8;
        UnityEngine_Transform__LookAt_692e330(pUVar31,worldPosition,(MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        UVar42 = UnityEngine_Transform__get_eulerAngles(pUVar32,(MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar31 = ((*ppUVar1)->fields).Transform, pUVar31 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd2c08;
        targetAddress = &(__this->fields)._napeLockTitan;
        UVar43 = UnityEngine_Transform__get_eulerAngles(pUVar31,(MethodInfo *)0x0);
        value_01.fields.y = UVar43.fields.y;
        local_b8 = UVar42.fields.x;
        value_01.fields.x = local_b8;
        UnityEngine_Transform__set_localEulerAngles(pUVar32,value_01,(MethodInfo *)0x0);
        pCVar33 = *targetAddress;
        if (pCVar33 == (Characters_BaseTitan_o *)0x0) goto label_05dd2c08;
        if ((pCVar33->fields).Dead != false) {
          (__this->fields)._napeLockTitan = (Characters_BaseTitan_o *)0x0;
          Il2CppCodeGenWriteBarrier(targetAddress);
          (__this->fields)._napeLock = false;
        }
      }
      if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar32 = ((*ppUVar1)->fields).Transform, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
        UVar42 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
        if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar31 = ((*ppUVar1)->fields).Transform, pUVar31 != (UnityEngine_Transform_o *)0x0)) {
          UVar43 = UnityEngine_Transform__get_right(pUVar31,(MethodInfo *)0x0);
          pSVar19 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar19 != (Settings_GeneralSettings_o *)0x0) &&
             (pSVar20 = (pSVar19->fields).CameraSide, pSVar20 != (Settings_FloatSetting_o *)0x0)) {
            fVar35 = (pSVar20->fields)._value + -1.0;
            local_b8 = UVar42.fields.x;
            fStack_b4 = UVar42.fields.y;
            pMVar34 = (MethodInfo *)0x0;
            value_02.fields.y = fStack_b4 + UVar43.fields.y * fVar35;
            value_02.fields.x = local_b8 + UVar43.fields.x * fVar35;
            value_02.fields.z = UVar42.fields.z + UVar43.fields.z * fVar35;
            UnityEngine_Transform__set_position(pUVar32,value_02,(MethodInfo *)0x0);
            Cameras_InGameCamera__UpdateShake(__this,pMVar34);
            return;
          }
        }
      }
    }
  }
label_05dd2c08:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateSpectate
// il2cpp: void Cameras_InGameCamera__UpdateSpectate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd2c10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd3504: jmp 0x5dd3608

void Cameras_InGameCamera__UpdateSpectate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  UnityEngine_Camera_o *__this_00;
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_01;
  UnityEngine_Transform_o *pUVar13;
  Utility_BaseComponentCache_o *pUVar14;
  UnityEngine_Vector3_StaticFields *pUVar15;
  Settings_GeneralSettings_o *pSVar16;
  Settings_FloatSetting_o *pSVar17;
  Settings_BoolSetting_o *pSVar18;
  Settings_GeneralInputSettings_o *pSVar19;
  Settings_KeybindSetting_o *pSVar20;
  bool bVar21;
  bool bVar22;
  int32_t iVar23;
  uint uVar24;
  int32_t iVar25;
  Characters_BaseMovementSync_o *pCVar26;
  UnityEngine_Transform_o *pUVar27;
  System_Collections_Generic_List_BaseCharacter__o *pSVar28;
  Characters_BaseCharacter_o *pCVar29;
  MethodInfo *pMVar30;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  UnityEngine_Quaternion_o UVar37;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  float local_b8;
  float fStack_b4;
  float fStack_a4;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  UnityEngine_Quaternion_o local_58;
  UnityEngine_Quaternion_o local_40;
  UnityEngine_Quaternion_o local_30;
  
  if (Il2CppMethodInitialized_0754821d == '\0') {
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
    Il2CppMethodInitialized_0754821d = '\x01';
  }
  local_58.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  fVar32 = Cameras_InGameCamera__GetCameraDistance(__this,method);
  __this_00 = (__this->fields).Camera;
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    fVar33 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
    pCVar29 = (__this->fields)._follow;
    if (((pCVar29 != (Characters_BaseCharacter_o *)0x0) &&
        (pCVar26 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pCVar29,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync),
        pCVar26 != (Characters_BaseMovementSync_o *)0x0)) &&
       (__this_01 = (__this->fields).SpecMode, __this_01 != (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0))
    {
      uVar1 = (pCVar26->fields)._correctCamera.fields.x;
      uVar7 = (pCVar26->fields)._correctCamera.fields.y;
      uVar2 = (pCVar26->fields)._correctCamera.fields.z;
      uVar8 = (pCVar26->fields)._correctCamera.fields.w;
      iVar23 = Utility_Cycle_Int32Enum___Current
                         ((Utility_Cycle_T__o *)__this_01,
                          (MethodInfo_494C4B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
      pMVar30 = (MethodInfo *)(__this->fields).Cache;
      if (iVar23 == 1) {
        if ((pMVar30 == (MethodInfo *)0x0) ||
           (pCVar29 = (__this->fields)._follow, pCVar29 == (Characters_BaseCharacter_o *)0x0))
        goto label_05dd3617;
        pUVar13 = (UnityEngine_Transform_o *)pMVar30->invoker_method;
        pUVar27 = (*(pCVar29->klass->vtable)._77_GetCameraAnchor.methodPtr)
                            (pCVar29,(pCVar29->klass->vtable)._77_GetCameraAnchor.method);
        if ((pUVar27 == (UnityEngine_Transform_o *)0x0) ||
           (UVar38 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05dd3617;
        UnityEngine_Transform__set_position(pUVar13,UVar38,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd3617;
        pMVar30 = (MethodInfo *)0x0;
        UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar3 = (pUVar15->upVector).fields.x;
        uVar9 = (pUVar15->upVector).fields.y;
        fVar36 = (pUVar15->upVector).fields.z;
        fVar34 = Cameras_InGameCamera__GetHeightDistance(__this,pMVar30);
        pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar16 == (Settings_GeneralSettings_o *)0x0) ||
           (pSVar17 = (pSVar16->fields).CameraHeight, pSVar17 == (Settings_FloatSetting_o *)0x0))
        goto label_05dd3617;
        fVar35 = (pSVar17->fields)._value;
        local_b8 = UVar38.fields.x;
        fStack_b4 = UVar38.fields.y;
        value.fields.x = local_b8 + fVar35 * (float)uVar3 * fVar34;
        value.fields.y = fStack_b4 + fVar35 * (float)uVar9 * fVar34;
        value.fields.z = UVar38.fields.z + fVar36 * fVar34 * fVar35;
        UnityEngine_Transform__set_position(pUVar13,value,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd3617;
        UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar4 = (pUVar15->upVector).fields.x;
        uVar10 = (pUVar15->upVector).fields.y;
        fVar36 = (float)(~-(uint)(fVar32 == 0.0) & (uint)(0.6 - fVar32));
        fVar34 = (pUVar15->upVector).fields.z * fVar36;
        value_00.fields.x = UVar38.fields.x - (fVar36 * (float)uVar4 + fVar36 * (float)uVar4);
        value_00.fields.y = UVar38.fields.y - (fVar36 * (float)uVar10 + fVar36 * (float)uVar10);
        value_00.fields.z = UVar38.fields.z - (fVar34 + fVar34);
        UnityEngine_Transform__set_position(pUVar13,value_00,(MethodInfo *)0x0);
        pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if (((pSVar16 == (Settings_GeneralSettings_o *)0x0) ||
            (pSVar17 = (pSVar16->fields).MouseSpeed, pSVar17 == (Settings_FloatSetting_o *)0x0)) ||
           (pSVar18 = (pSVar16->fields).InvertMouse, pSVar18 == (Settings_BoolSetting_o *)0x0))
        goto label_05dd3617;
        fVar36 = (pSVar17->fields)._value;
        bVar22 = (pSVar18->fields)._value;
        bVar21 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        fVar34 = 0.0;
        if (!bVar21) {
          fVar34 = fVar36;
        }
        if (Il2CppMethodInitialized_07548225 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
          il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
          Il2CppMethodInitialized_07548225 = '\x01';
        }
        fVar36 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        fVar35 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
        fVar35 = fVar35 * -10.0 * fVar34;
        if (bVar22 != false) {
          fVar35 = -fVar35;
        }
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd3617;
        UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        UnityEngine_Transform__RotateAround
                  (pUVar13,UVar38,
                   (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,
                   fVar34 * fVar36 * 10.0,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd3617;
        local_58 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
        UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_58,(MethodInfo *)0x0);
        euler.fields.x = UVar38.fields.x * 57.29578;
        euler.fields.y = UVar38.fields.y * 57.29578;
        euler.fields.z = UVar38.fields.z * 57.29578;
        pMVar30 = (MethodInfo *)0x0;
        UVar38 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        fVar36 = fmodf(UVar38.fields.x,360.0,pMVar30);
        fVar34 = fVar35 + fVar36;
        uVar24 = 1;
        pMVar30 = (MethodInfo *)0x1;
        if ((0.0 < fVar35) &&
           (((260.0 <= fVar36 || (pMVar30 = (MethodInfo *)0x0, fVar34 <= 260.0)) &&
            (pMVar30 = (MethodInfo *)0x1, fVar36 < 80.0)))) {
          pMVar30 = (MethodInfo *)(ulong)(fVar34 <= 80.0);
        }
        if (((fVar35 < 0.0) && ((fVar36 <= 280.0 || (uVar24 = 0, 280.0 <= fVar34)))) &&
           (uVar24 = 1, 100.0 < fVar36)) {
          uVar24 = (uint)(100.0 <= fVar34);
        }
        if ((uVar24 & (uint)pMVar30) != 0) {
          pUVar14 = (__this->fields).Cache;
          if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd3617;
          UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
          pUVar14 = (__this->fields).Cache;
          if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar27 = (pUVar14->fields).Transform, pUVar27 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd3617;
          UVar39 = UnityEngine_Transform__get_right(pUVar27,(MethodInfo *)0x0);
          UnityEngine_Transform__RotateAround(pUVar13,UVar38,UVar39,fVar35,(MethodInfo *)0x0);
        }
      }
      else {
        if ((pMVar30 == (MethodInfo *)0x0) ||
           (pUVar13 = (UnityEngine_Transform_o *)pMVar30->invoker_method,
           pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05dd3617;
        UVar37 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
        fVar36 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        local_88 = UVar37.fields.x;
        fStack_84 = UVar37.fields.y;
        local_30.fields.z = UVar37.fields.z;
        local_30.fields.w = UVar37.fields.w;
        local_30.fields.x = local_88;
        local_30.fields.y = fStack_84;
        local_40.fields.x = (float)uVar1;
        local_40.fields.y = (float)uVar7;
        local_40.fields.w = (float)uVar8;
        local_40.fields.z = (float)uVar2;
        UVar37 = UnityEngine_Quaternion__Internal_Lerp(&local_30,&local_40,fVar36 * 10.0,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar13,UVar37,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pCVar29 = (__this->fields)._follow, pCVar29 == (Characters_BaseCharacter_o *)0x0))
        goto label_05dd3617;
        pUVar13 = (pUVar14->fields).Transform;
        pUVar27 = (*(pCVar29->klass->vtable)._77_GetCameraAnchor.methodPtr)
                            (pCVar29,(pCVar29->klass->vtable)._77_GetCameraAnchor.method);
        if ((pUVar27 == (UnityEngine_Transform_o *)0x0) ||
           (UVar38 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05dd3617;
        UnityEngine_Transform__set_position(pUVar13,UVar38,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd3617;
        pMVar31 = (MethodInfo *)0x0;
        UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar5 = (pUVar15->upVector).fields.x;
        uVar11 = (pUVar15->upVector).fields.y;
        fVar36 = (pUVar15->upVector).fields.z;
        fVar34 = Cameras_InGameCamera__GetHeightDistance(__this,pMVar31);
        pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
        if ((pSVar16 == (Settings_GeneralSettings_o *)0x0) ||
           (pSVar17 = (pSVar16->fields).CameraHeight, pSVar17 == (Settings_FloatSetting_o *)0x0))
        goto label_05dd3617;
        fVar35 = (pSVar17->fields)._value;
        local_b8 = UVar38.fields.x;
        fStack_b4 = UVar38.fields.y;
        UVar39.fields.x = local_b8 + fVar35 * (float)uVar5 * fVar34;
        UVar39.fields.y = fStack_b4 + fVar35 * (float)uVar11 * fVar34;
        UVar39.fields.z = UVar38.fields.z + fVar36 * fVar34 * fVar35;
        UnityEngine_Transform__set_position(pUVar13,UVar39,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd3617;
        UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar6 = (pUVar15->upVector).fields.x;
        uVar12 = (pUVar15->upVector).fields.y;
        fVar34 = 0.6 - fVar32;
        fVar36 = (pUVar15->upVector).fields.z * fVar34;
        value_01.fields.x = UVar38.fields.x - (fVar34 * (float)uVar6 + fVar34 * (float)uVar6);
        value_01.fields.y = UVar38.fields.y - (fVar34 * (float)uVar12 + fVar34 * (float)uVar12);
        value_01.fields.z = UVar38.fields.z - (fVar36 + fVar36);
        UnityEngine_Transform__set_position(pUVar13,value_01,(MethodInfo *)0x0);
      }
      pUVar14 = (__this->fields).Cache;
      if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar13 = (pUVar14->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
        UVar38 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        pUVar14 = (__this->fields).Cache;
        if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar27 = (pUVar14->fields).Transform, pUVar27 != (UnityEngine_Transform_o *)0x0)) {
          UVar39 = UnityEngine_Transform__get_forward(pUVar27,(MethodInfo *)0x0);
          fVar36 = (__this->fields)._anchorDistance;
          if (fVar32 <= 0.3) {
            fVar32 = 0.3;
          }
          fVar32 = ((200.0 - fVar33) * fVar32) / 150.0;
          value_02.fields.z = UVar38.fields.z - fVar36 * UVar39.fields.z * 10.0 * fVar32;
          local_b8 = UVar38.fields.x;
          fStack_b4 = UVar38.fields.y;
          value_02.fields.x = local_b8 - fVar32 * UVar39.fields.x * 10.0 * fVar36;
          value_02.fields.y = fStack_b4 - fVar32 * fVar36 * UVar39.fields.y * 10.0;
          UnityEngine_Transform__set_position(pUVar13,value_02,(MethodInfo *)0x0);
          bVar22 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
          if (bVar22) {
            return;
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            bVar22 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
            if (bVar22) {
              return;
            }
          }
          else {
            bVar22 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
            if (bVar22) {
              return;
            }
          }
          pSVar19 = (__this->fields)._input;
          if ((pSVar19 != (Settings_GeneralInputSettings_o *)0x0) &&
             (pSVar20 = (pSVar19->fields).SpectateNextPlayer, pSVar20 != (Settings_KeybindSetting_o *)0x0)) {
            pMVar31 = (MethodInfo *)0x0;
            bVar22 = Settings_KeybindSetting__GetKeyDown(pSVar20,false,(MethodInfo *)0x0);
            if (bVar22) {
              pSVar28 = Cameras_InGameCamera__GetSortedCharacters(__this,pMVar31);
              if (pSVar28 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) goto label_05dd3617;
              if (0 < (pSVar28->fields)._size) {
                iVar25 = Cameras_InGameCamera__GetSpectateIndex(__this,pSVar28,method_01);
                iVar23 = 0;
                if (iVar25 + 1 < (pSVar28->fields)._size) {
                  iVar23 = iVar25 + 1;
                }
                pCVar29 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar28,iVar23,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
                Cameras_InGameCamera__SetFollow(__this,pCVar29,true,pMVar30);
              }
            }
            pSVar19 = (__this->fields)._input;
            if ((pSVar19 != (Settings_GeneralInputSettings_o *)0x0) &&
               (pSVar20 = (pSVar19->fields).SpectatePreviousPlayer,
               pSVar20 != (Settings_KeybindSetting_o *)0x0)) {
              pMVar30 = (MethodInfo *)0x0;
              bVar22 = Settings_KeybindSetting__GetKeyDown(pSVar20,false,(MethodInfo *)0x0);
              if (bVar22) {
                pSVar28 = Cameras_InGameCamera__GetSortedCharacters(__this,pMVar30);
                if (pSVar28 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) goto label_05dd3617;
                if (0 < (pSVar28->fields)._size) {
                  iVar23 = Cameras_InGameCamera__GetSpectateIndex(__this,pSVar28,method_02);
                  iVar23 = iVar23 + -1;
                  if (iVar23 < 0) {
                    iVar23 = (pSVar28->fields)._size + -1;
                  }
                  method_00 = &MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item;
                  pCVar29 = System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar28,iVar23,
                                       (MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
                  Cameras_InGameCamera__SetFollow(__this,pCVar29,true,(MethodInfo *)method_00);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
label_05dd3617:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateFreeCam
// il2cpp: void Cameras_InGameCamera__UpdateFreeCam (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd3920
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd3b64: movss dword ptr [rsp], xmm0
// asm:   0x5dd3c27: movss dword ptr [rsp], xmm0
// asm:   0x5dd3cea: movss dword ptr [rsp], xmm0

void Cameras_InGameCamera__UpdateFreeCam(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Settings_GeneralSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  UnityEngine_Transform_o *__this_01;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  undefined8 local_58;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754821e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754821e = '\x01';
  }
  bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
  else {
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).SpectateNextPlayer, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto label_05dd3ef9;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if (!bVar8) {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).SpectatePreviousPlayer, pSVar2 == (Settings_KeybindSetting_o *)0x0))
    goto label_05dd3ef9;
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (!bVar8) {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pSVar1 = (__this->fields)._input;
      if ((pSVar1 != (Settings_GeneralInputSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).Modifier, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_58._0_4_ = (pUVar3->zeroVector).fields.x;
        local_58._4_4_ = (pUVar3->zeroVector).fields.y;
        fVar10 = (pUVar3->zeroVector).fields.z;
        bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
        if (bVar8) {
          fVar9 = 400.0;
        }
        else {
          fVar9 = 200.0;
        }
        pSVar1 = (__this->fields)._input;
        if ((pSVar1 != (Settings_GeneralInputSettings_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).Forward, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar4 = (__this->fields).Cache;
            if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
            goto label_05dd3ef9;
            UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
            local_58 = CONCAT44(local_58._4_4_ + UVar12.fields.y,(float)local_58 + UVar12.fields.x);
            fVar10 = fVar10 + UVar12.fields.z;
          }
          else {
            pSVar1 = (__this->fields)._input;
            if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
               (pSVar2 = (pSVar1->fields).Back, pSVar2 == (Settings_KeybindSetting_o *)0x0))
            goto label_05dd3ef9;
            bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
            if (bVar8) {
              pUVar4 = (__this->fields).Cache;
              if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
              goto label_05dd3ef9;
              UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
              local_58 = CONCAT44(local_58._4_4_ - UVar12.fields.y,(float)local_58 - UVar12.fields.x);
              fVar10 = fVar10 - UVar12.fields.z;
            }
          }
          pSVar1 = (__this->fields)._input;
          if ((pSVar1 != (Settings_GeneralInputSettings_o *)0x0) &&
             (pSVar2 = (pSVar1->fields).Right, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
            bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
            if (bVar8) {
              pUVar4 = (__this->fields).Cache;
              if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
              goto label_05dd3ef9;
              UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
              local_58 = CONCAT44(local_58._4_4_ + UVar12.fields.y,(float)local_58 + UVar12.fields.x);
              fVar10 = fVar10 + UVar12.fields.z;
            }
            else {
              pSVar1 = (__this->fields)._input;
              if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
                 (pSVar2 = (pSVar1->fields).Left, pSVar2 == (Settings_KeybindSetting_o *)0x0))
              goto label_05dd3ef9;
              bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
              if (bVar8) {
                pUVar4 = (__this->fields).Cache;
                if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
                goto label_05dd3ef9;
                UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
                local_58 = CONCAT44(local_58._4_4_ - UVar12.fields.y,(float)local_58 - UVar12.fields.x);
                fVar10 = fVar10 - UVar12.fields.z;
              }
            }
            pSVar1 = (__this->fields)._input;
            if ((pSVar1 != (Settings_GeneralInputSettings_o *)0x0) &&
               (pSVar2 = (pSVar1->fields).Up, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
              bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
              if (bVar8) {
                pUVar4 = (__this->fields).Cache;
                if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
                goto label_05dd3ef9;
                UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
                local_58 = CONCAT44(local_58._4_4_ + UVar12.fields.y,(float)local_58 + UVar12.fields.x);
                fVar10 = fVar10 + UVar12.fields.z;
              }
              else {
                pSVar1 = (__this->fields)._input;
                if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
                   (pSVar2 = (pSVar1->fields).Down, pSVar2 == (Settings_KeybindSetting_o *)0x0))
                goto label_05dd3ef9;
                bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
                if (bVar8) {
                  pUVar4 = (__this->fields).Cache;
                  if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
                  goto label_05dd3ef9;
                  UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
                  local_58 = CONCAT44(local_58._4_4_ - UVar12.fields.y,(float)local_58 - UVar12.fields.x);
                  fVar10 = fVar10 - UVar12.fields.z;
                }
              }
              pUVar4 = (__this->fields).Cache;
              if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                local_38 = UVar12.fields.x;
                fStack_34 = UVar12.fields.y;
                UVar13.fields.x = fVar11 * (float)local_58 * fVar9 + local_38;
                UVar13.fields.y = fVar11 * local_58._4_4_ * fVar9 + fStack_34;
                UVar13.fields.z = fVar10 * fVar11 * fVar9 + UVar12.fields.z;
                UnityEngine_Transform__set_position(pUVar5,UVar13,(MethodInfo *)0x0);
                pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
                if ((pSVar6 != (Settings_GeneralSettings_o *)0x0) &&
                   (pSVar7 = (pSVar6->fields).MouseSpeed, pSVar7 != (Settings_FloatSetting_o *)0x0)) {
                  fVar10 = (pSVar7->fields)._value;
                  if (Il2CppMethodInitialized_07548226 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
                    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
                    Il2CppMethodInitialized_07548226 = '\x01';
                  }
                  fVar9 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
                  fVar11 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).Cache;
                  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                    fVar10 = fVar10 * 10.0;
                    UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_0753e72c == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_0753e72c = '\x01';
                    }
                    UnityEngine_Transform__RotateAround
                              (pUVar5,UVar12,
                               (UnityEngine_Vector3_o)
                               (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,fVar9 * fVar10,
                               (MethodInfo *)0x0);
                    pUVar4 = (__this->fields).Cache;
                    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                      UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                      pUVar4 = (__this->fields).Cache;
                      if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                         (__this_01 = (pUVar4->fields).Transform, __this_01 != (UnityEngine_Transform_o *)0x0)
                         ) {
                        UVar13 = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
                        UnityEngine_Transform__RotateAround
                                  (pUVar5,UVar12,UVar13,fVar10 * -fVar11,(MethodInfo *)0x0);
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
      goto label_05dd3ef9;
    }
  }
  __this_00 = (__this->fields).SpecMode;
  if (__this_00 != (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) {
    Utility_Cycle_Int32Enum___Next
              ((Utility_Cycle_T__o *)__this_00,
               (MethodInfo_494C440 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Next);
    return;
  }
label_05dd3ef9:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateTitanZoom
// il2cpp: void Cameras_InGameCamera__UpdateTitanZoom (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd4880
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd493e: movaps xmm3, xmmword ptr [rsp]
// asm:   0x5dd4942: xorps xmm0, xmm0
// asm:   0x5dd4945: ucomiss xmm3, xmm0
// asm:   0x5dd4948: jne 0x5dd4968
// asm:   0x5dd494a: jp 0x5dd4968
// asm:   0x5dd494c: jmp 0x5dd48d7

void Cameras_InGameCamera__UpdateTitanZoom(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  Settings_GeneralInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_0754821f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_0754821f = '\x01';
  }
  pCVar3 = (__this->fields)._follow;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    pCVar4 = pCVar3->klass;
    bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar2 <= (pCVar4->_2).typeHierarchyDepth) &&
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pSVar5 = (__this->fields)._input;
      if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).ZoomIn, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
        bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar6,false,(MethodInfo *)0x0);
        if (bVar7) {
          fVar8 = -0.1;
        }
        else {
          fVar8 = 0.0;
        }
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).ZoomOut, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
          bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar6,false,(MethodInfo *)0x0);
          if (bVar7) {
            fVar8 = fVar8 + 0.1;
          }
          if ((fVar8 == 0.0) && (!NAN(fVar8))) {
            return;
          }
          fVar1 = (__this->fields)._cameraDistance;
          fVar8 = fVar8 + (__this->fields)._titanZoom + fVar1;
          fVar9 = 2.0;
          if (fVar8 <= 2.0) {
            fVar9 = fVar8;
          }
          (__this->fields)._titanZoom =
               (float)(~-(uint)(0.3 <= fVar8) & 0x3e99999a | (uint)fVar9 & -(uint)(0.3 <= fVar8)) - fVar1;
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
// 0x5dd4ee0

float Cameras_InGameCamera__GetHeightDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07548220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548220 = '\x01';
  }
  fVar5 = Cameras_InGameCamera__GetCameraDistance(__this,method);
  if ((fVar5 == 0.0) && (!NAN(fVar5))) {
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
         ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        return 0.3;
      }
    }
  }
  return (__this->fields)._heightDistance;
}


// Cameras.InGameCamera$$UpdateObstacles
// il2cpp: void Cameras_InGameCamera__UpdateObstacles (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd3620

void Cameras_InGameCamera__UpdateObstacles(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  undefined8 local_78;
  undefined1 local_60 [12];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [56];
  
  if (Il2CppMethodInitialized_07548221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07548221 = '\x01';
  }
  local_48._32_4_ = 0.0;
  local_48._36_4_ = 0.0;
  local_48._40_4_ = 0.0;
  local_48._16_4_ = 0.0;
  local_48._20_4_ = 0.0;
  local_48._24_4_ = 0.0;
  local_48._28_4_ = 0.0;
  local_48._0_4_ = 0.0;
  local_48._4_4_ = 0.0;
  local_48._8_4_ = 0.0;
  local_48._12_4_ = 0.0;
  pCVar3 = (__this->fields)._follow;
  if ((pCVar3 == (Characters_BaseCharacter_o *)0x0) ||
     (pUVar7 = (*(pCVar3->klass->vtable)._77_GetCameraAnchor.methodPtr)
                         (pCVar3,(pCVar3->klass->vtable)._77_GetCameraAnchor.method),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05dd3914;
  UVar15 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd3914;
  fStack_50 = (float)extraout_XMM0_Dc;
  unique0x1000010c = UVar15.fields._0_8_;
  fStack_4c = (float)extraout_XMM0_Dd;
  pUVar7 = (pUVar4->fields).Transform;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05dd3914;
  UVar16 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
  }
  else {
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
  }
  local_60._0_4_ = 0.0;
  local_60._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_60._0_4_ = 0.0;
    local_60._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar14._0_4_ = (float)local_60._8_4_ - UVar16.fields.x;
  auVar14._4_4_ = fStack_54 - UVar16.fields.y;
  auVar14._8_4_ = fStack_50 - extraout_XMM0_Dc_00;
  auVar14._12_4_ = fStack_4c - extraout_XMM0_Dd_00;
  fVar13 = UVar15.fields.z - UVar16.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar10 = 0;
  fVar9 = fVar13 * fVar13 + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    uVar10 = extraout_XMM0_Db;
    if (1e-05 < fVar9) goto label_05dd379e;
label_05dd375c:
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar13 = (pUVar8->zeroVector).fields.z;
  }
  else {
    fVar9 = SQRT(fVar9);
    if (fVar9 <= 1e-05) goto label_05dd375c;
label_05dd379e:
    fVar13 = fVar13 / fVar9;
    auVar5._4_4_ = fVar9;
    auVar5._0_4_ = fVar9;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar10;
    auVar14 = divps(auVar14,auVar5);
    local_60._0_4_ = auVar14._0_4_;
    local_60._4_4_ = auVar14._4_4_;
    pUVar8 = (UnityEngine_Vector3_StaticFields *)local_60;
  }
  uVar1 = (pUVar8->zeroVector).fields.x;
  uVar2 = (pUVar8->zeroVector).fields.y;
  fVar9 = (__this->fields)._anchorDistance;
  if ((TypeInfo_Cameras_InGameCamera->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera);
  }
  fVar11 = fVar9 * (float)uVar1 * -10.0 + (float)local_60._8_4_;
  fVar12 = fVar9 * (float)uVar2 * -10.0 + fStack_54;
  UVar16.fields.z = fVar13 * -10.0 * fVar9 + UVar15.fields.z;
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (TypeInfo_Cameras_InGameCamera->static_fields->_clipMask).fields.m_Mask,
                         (MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  UVar15.fields.x = (float)local_60._8_4_;
  UVar15.fields.y = fStack_54;
  UVar16.fields.x = fVar11;
  UVar16.fields.y = fVar12;
  bVar6 = UnityEngine_Physics__Linecast_69da590
                    (UVar15,UVar16,(UnityEngine_RaycastHit_o *)local_48,layerMask,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pUVar4 = (__this->fields).Cache;
  if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar7 = (pUVar4->fields).Transform;
    UVar15 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)local_48,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(pUVar7,UVar15,(MethodInfo *)0x0);
      return;
    }
  }
label_05dd3914:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateFOV
// il2cpp: void Cameras_InGameCamera__UpdateFOV (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd4150

void Cameras_InGameCamera__UpdateFOV(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  Settings_GeneralSettings_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  bool bVar8;
  MethodInfo *method_00;
  UnityEngine_Camera_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  float local_40;
  
  if (Il2CppMethodInitialized_07548222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07548222 = '\x01';
  }
  pCVar3 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar8) && (pCVar3 = (__this->fields)._follow, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
    pCVar4 = pCVar3->klass;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar4->_2).typeHierarchyDepth < bVar2) ||
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    goto label_05dd420b;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if (((pSVar5 == (Settings_GeneralSettings_o *)0x0) ||
        (pSVar6 = (pSVar5->fields).FOVMin, pSVar6 == (Settings_FloatSetting_o *)0x0)) ||
       (pSVar7 = (pSVar5->fields).FOVMax, pSVar7 == (Settings_FloatSetting_o *)0x0)) goto label_05dd453a;
    fVar1 = (pSVar6->fields)._value;
    local_40 = (pSVar7->fields)._value;
    fVar12 = Cameras_InGameCamera__GetCameraDistance(__this,method_00);
    if (fVar12 <= 0.0) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if (((pSVar5 == (Settings_GeneralSettings_o *)0x0) ||
          (pSVar6 = (pSVar5->fields).FPSFOVMin, pSVar6 == (Settings_FloatSetting_o *)0x0)) ||
         (pSVar7 = (pSVar5->fields).FPSFOVMax, pSVar7 == (Settings_FloatSetting_o *)0x0)) goto label_05dd453a;
      fVar1 = (pSVar6->fields)._value;
      local_40 = (pSVar7->fields)._value;
    }
    pCVar3 = (__this->fields)._follow;
    if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_05dd453a;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    UVar15 = Characters_BaseCharacter__GetVelocity(pCVar3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar12 = UVar15.fields.z * UVar15.fields.z +
             UVar15.fields.y * UVar15.fields.y + UVar15.fields.x * UVar15.fields.x;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    pUVar9 = (__this->fields).Camera;
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_05dd453a;
    fVar11 = fVar1;
    if (fVar1 <= local_40) {
      fVar11 = local_40;
    }
    fVar14 = fVar1 + fVar12 + -10.0;
    if (fVar14 <= fVar11) {
      fVar11 = fVar14;
    }
    fVar10 = UnityEngine_Camera__get_fieldOfView(pUVar9,(MethodInfo *)0x0);
    fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar13 = fVar13 * 5.0;
    fVar14 = 1.0;
    if (fVar13 <= 1.0) {
      fVar14 = fVar13;
    }
    fVar10 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14) *
             ((float)(~-(uint)(10.0 < fVar12) & (uint)fVar1 | (uint)fVar11 & -(uint)(10.0 < fVar12)) - fVar10)
             + fVar10;
  }
  else {
label_05dd420b:
    pUVar9 = (__this->fields).Camera;
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_05dd453a;
    fVar10 = UnityEngine_Camera__get_fieldOfView(pUVar9,(MethodInfo *)0x0);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if (pSVar5 == (Settings_GeneralSettings_o *)0x0) goto label_05dd453a;
    pSVar6 = (pSVar5->fields).FOVMin;
    if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_05dd453a;
    fVar1 = (pSVar6->fields)._value;
    fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar11 = fVar11 * 5.0;
    fVar12 = 1.0;
    if (fVar11 <= 1.0) {
      fVar12 = fVar11;
    }
    fVar10 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar12) * (fVar1 - fVar10) + fVar10;
  }
  UnityEngine_Camera__set_fieldOfView(pUVar9,fVar10,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV <= 0.0) {
    return;
  }
  pUVar9 = (__this->fields).Camera;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView
              (pUVar9,TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV,(MethodInfo *)0x0);
    return;
  }
label_05dd453a:
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$FindNextSpectate
// il2cpp: void Cameras_InGameCamera__FindNextSpectate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd1aa0

void Cameras_InGameCamera__FindNextSpectate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseCharacter__o *__this_00;
  Characters_BaseCharacter_o *character;
  MethodInfo *in_RCX;
  MethodInfo **method_00;
  
  if (Il2CppMethodInitialized_07548223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
    Il2CppMethodInitialized_07548223 = '\x01';
  }
  __this_00 = Cameras_InGameCamera__GetSortedCharacters(__this,method);
  if (__this_00 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._size < 1) {
    Cameras_InGameCamera__SetFollow(__this,(Characters_BaseCharacter_o *)0x0,true,in_RCX);
    return;
  }
  method_00 = &MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item;
  character = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,0,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
  Cameras_InGameCamera__SetFollow(__this,character,true,(MethodInfo *)method_00);
  return;
}


// Cameras.InGameCamera$$GetSpectateIndex
// il2cpp: int32_t Cameras_InGameCamera__GetSpectateIndex (Cameras_InGameCamera_o* __this, System_Collections_Generic_List_BaseCharacter__o* characters, const MethodInfo* method);
// 0x5dd5950
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd59dc: nop dword ptr [rax]
// asm:   0x5dd5a26: mov ecx, 0xffffffff
// asm:   0x5dd5a2b: jmp 0x5dd5a2f

int32_t Cameras_InGameCamera__GetSpectateIndex
                  (Cameras_InGameCamera_o *__this,System_Collections_Generic_List_BaseCharacter__o *characters
                  ,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Characters_BaseCharacter_o *x;
  int32_t index;
  
  if (Il2CppMethodInitialized_07548224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548224 = '\x01';
  }
  pCVar1 = (__this->fields)._follow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (characters == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (characters->fields)._size) {
      index = 0;
      do {
        x = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)characters,index,
                       (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_get_Item
                      );
        pCVar1 = (__this->fields)._follow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
        if (bVar2) {
          return index;
        }
        index = index + 1;
      } while (index < (characters->fields)._size);
    }
  }
  return -1;
}


// Cameras.InGameCamera$$GetSensitivityDeltaTime
// il2cpp: float Cameras_InGameCamera__GetSensitivityDeltaTime (Cameras_InGameCamera_o* __this, float sensitivity, const MethodInfo* method);
// 0x5dd4fa0

float Cameras_InGameCamera__GetSensitivityDeltaTime
                (Cameras_InGameCamera_o *__this,float sensitivity,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1 * sensitivity * 62.0;
}


// Cameras.InGameCamera$$GetLookInput
// il2cpp: void Cameras_InGameCamera__GetLookInput (Cameras_InGameCamera_o* __this, float sensitivity, int32_t invertY, float* inputX, float* inputY, const MethodInfo* method);
// 0x5dd4fc0

void Cameras_InGameCamera__GetLookInput
               (Cameras_InGameCamera_o *__this,float sensitivity,int32_t invertY,float *inputX,float *inputY,
               MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07548225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_07548225 = '\x01';
  }
  fVar1 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  *inputX = fVar1 * 10.0 * sensitivity;
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  *inputY = (float)invertY * fVar1 * -10.0 * sensitivity;
  return;
}


// Cameras.InGameCamera$$GetFreeCamLookInput
// il2cpp: void Cameras_InGameCamera__GetFreeCamLookInput (Cameras_InGameCamera_o* __this, float camSpeed, float* inputX, float* inputY, const MethodInfo* method);
// 0x5dd5a50

void Cameras_InGameCamera__GetFreeCamLookInput
               (Cameras_InGameCamera_o *__this,float camSpeed,float *inputX,float *inputY,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07548226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_07548226 = '\x01';
  }
  fVar1 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  *inputX = fVar1 * camSpeed;
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  *inputY = fVar1 * camSpeed;
  return;
}


// Cameras.InGameCamera$$GetNearestTitan
// il2cpp: Characters_BaseTitan_o* Cameras_InGameCamera__GetNearestTitan (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd49b0
// eh: try 0x5dd4b2f..0x5dd4e6f -> pad 0x5dd4e95 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5dd4ead..0x5dd4eb2 -> pad 0x5dd4eb7 cleanup
// eh: try 0x5dd4eba..0x5dd4ec4 -> pad 0x5dd4ecc catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd4aec: nop dword ptr [rax]
// asm:   0x5dd4b1d: nop dword ptr [rax]
// asm:   0x5dd4cf7: jmp 0x5dd4d1f
// asm:   0x5dd4d71: jmp 0x5dd4d87
// asm:   0x5dd4dee: nop 
// asm:   0x5dd4e6f: mov rdi, rbp
// asm:   0x5dd4e72: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd4e77: jmp 0x5dd4e95
// asm:   0x5dd4e79: jmp 0x5dd4e95
// asm:   0x5dd4e7b: jmp 0x5dd4e95
// asm:   0x5dd4e7d: jmp 0x5dd4e95
// asm:   0x5dd4e7f: jmp 0x5dd4e95
// asm:   0x5dd4e81: jmp 0x5dd4e95
// asm:   0x5dd4e83: jmp 0x5dd4e95
// asm:   0x5dd4e85: jmp 0x5dd4e95
// asm:   0x5dd4e87: jmp 0x5dd4e95
// asm:   0x5dd4e89: jmp 0x5dd4e95
// asm:   0x5dd4e8b: jmp 0x5dd4e95
// asm:   0x5dd4e8d: jmp 0x5dd4e95
// asm:   0x5dd4e8f: jmp 0x5dd4e95
// asm:   0x5dd4e91: jmp 0x5dd4e95
// asm:   0x5dd4e93: jmp 0x5dd4e95
// asm:   0x5dd4e95: mov rbx, rax
// asm:   0x5dd4e98: cmp edx, 1
// asm:   0x5dd4e9b: jne 0x5dd4eba
// asm:   0x5dd4e9d: mov rdi, rbx
// asm:   0x5dd4ea0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd4ea5: mov rbp, qword ptr [rax]
// asm:   0x5dd4ea8: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5dd4ead: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd4eb2: jmp 0x5dd4dbe
// asm:   0x5dd4eb7: mov rbx, rax
// asm:   0x5dd4eba: lea rdi, [rsp + 0x20]
// asm:   0x5dd4ebf: call 0x2fde670  ; il2cpp_runtime_helper_02fde670()
// asm:   0x5dd4ec4: mov rdi, rbx
// asm:   0x5dd4ec7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd4ecc: mov rdi, rax
// asm:   0x5dd4ecf: call 0x2ab61e0  ; __clang_call_terminate()

Characters_BaseTitan_o *
Cameras_InGameCamera__GetNearestTitan(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Characters_BaseCharacter_o *pCVar5;
  Characters_BaseTitanComponentCache_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  bool bVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  Characters_BaseTitan_o *a;
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar14;
  Il2CppObject *local_a0;
  float local_94;
  Characters_BaseTitan_o *local_90;
  undefined8 local_88;
  Il2CppObject **local_80;
  undefined1 local_78 [16];
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_07548227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07548227 = '\x01';
  }
  local_a0 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._inGameManager;
  if ((__this_00 == (GameManagers_InGameManager_o *)0x0) ||
     (pIVar9 = (Il2CppObject *)
               GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0),
     pIVar9 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar3 = pIVar9->klass;
  uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_BaseCharacter__c **)((long)&pIVar4->interfaceType + lVar12)
          == TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter) {
        pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
        goto label_05dd4aa1;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,0);
label_05dd4aa1:
  local_a0 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
  local_88 = 0;
  local_80 = &local_a0;
  local_94 = INFINITY;
  a = (Characters_BaseTitan_o *)0x0;
  do {
    local_90 = a;
label_05dd4af0:
    do {
      do {
        do {
          do {
            pIVar9 = local_a0;
            if (local_a0 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar3 = local_a0->klass;
            uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar11 != 0) {
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar12 = 0;
              do {
                if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
                    TypeInfo_System_Collections_IEnumerator) {
                  pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
                  goto label_05dd4b53;
                }
                lVar12 = lVar12 + 0x10;
              } while (uVar11 * 0x10 != lVar12);
            }
            pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_a0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05dd4b53:
            bVar8 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
            pIVar9 = local_a0;
            if (!bVar8) {
              if (local_a0 == (Il2CppObject *)0x0) {
                return local_90;
              }
              pIVar3 = local_a0->klass;
              uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
              if (uVar11 == 0) goto label_05dd4dff;
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar12 = 0;
              goto label_05dd4df0;
            }
            if (local_a0 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar3 = local_a0->klass;
            uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar11 != 0) {
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar12 = 0;
              do {
                if (*(System_Collections_Generic_IEnumerator_BaseCharacter__c **)
                     ((long)&pIVar4->interfaceType + lVar12) ==
                    TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
                  pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
                  goto label_05dd4bd3;
                }
                lVar12 = lVar12 + 0x10;
              } while (uVar11 * 0x10 != lVar12);
            }
            pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_a0,(Il2CppClass *)
                                          TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_05dd4bd3:
            a = (Characters_BaseTitan_o *)(*pVVar10->methodPtr)(pIVar9,pVVar10->method);
          } while (a == (Characters_BaseTitan_o *)0x0);
          bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
        } while (((a->klass->_2).typeHierarchyDepth < bVar1) ||
                ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                 (Il2CppClass *)TypeInfo_Characters_BaseTitan));
        pCVar5 = (__this->fields)._follow;
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar8 = GameManagers_TeamInfo__SameTeam_5858900
                          ((Characters_BaseCharacter_o *)a,pCVar5,(MethodInfo *)0x0);
      } while (bVar8);
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if (((a->klass->_2).typeHierarchyDepth < bVar1) ||
         ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        il2cpp_codegen_raise_invalid_cast_exception(a);
      }
      pCVar6 = (a->fields).BaseTitanCache;
      if (pCVar6 == (Characters_BaseTitanComponentCache_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar5 = (__this->fields)._follow;
      if (pCVar5 == (Characters_BaseCharacter_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar7 = (pCVar5->fields).Cache;
      if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = (pUVar7->fields).Transform;
      if (__this_01 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = (pCVar6->fields).Neck;
      UVar14 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      local_58 = UVar14.fields.z;
      local_48._8_4_ = extraout_XMM0_Dc;
      local_48._0_8_ = UVar14.fields._0_8_;
      local_48._12_4_ = extraout_XMM0_Dd;
      uStack_54 = in_XMM1_Db;
      uStack_50 = in_XMM1_Dc;
      uStack_4c = in_XMM1_Dd;
      if (__this_02 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar14 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      local_68 = UVar14.fields.z;
      local_78._8_4_ = extraout_XMM0_Dc_00;
      local_78._0_8_ = UVar14.fields._0_8_;
      local_78._12_4_ = extraout_XMM0_Dd_00;
      uStack_64 = in_XMM1_Db;
      uStack_60 = in_XMM1_Dc;
      uStack_5c = in_XMM1_Dd;
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar13 = ((float)local_48._4_4_ - (float)local_78._4_4_) *
               ((float)local_48._4_4_ - (float)local_78._4_4_) +
               ((float)local_48._0_4_ - (float)local_78._0_4_) *
               ((float)local_48._0_4_ - (float)local_78._0_4_) + (local_58 - local_68) * (local_58 - local_68)
      ;
      if (0.0 <= fVar13) {
        fVar13 = SQRT(fVar13);
        in_XMM1_Db = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        if (fVar13 < local_94) break;
        goto label_05dd4af0;
      }
      fVar13 = sqrtf(fVar13);
      in_XMM1_Db = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
    } while (local_94 <= fVar13);
    in_XMM1_Dd = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Db = 0;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((a->klass->_2).typeHierarchyDepth < bVar1) ||
       (local_94 = fVar13,
       (a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      il2cpp_codegen_raise_invalid_cast_exception(a);
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
label_05dd4df0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
      goto label_05dd4e1d;
    }
  }
label_05dd4dff:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_a0,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dd4e1d:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
  return local_90;
}


// Cameras.InGameCamera$$GetSortedCharacters
// il2cpp: System_Collections_Generic_List_BaseCharacter__o* Cameras_InGameCamera__GetSortedCharacters (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd5210
// eh: try 0x5dd53fa..0x5dd5821 -> pad 0x5dd582a (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dd5862..0x5dd5867 -> pad 0x5dd5889 cleanup
// eh: try 0x5dd588c..0x5dd5896 -> pad 0x5dd593d catch (...) [compiler noexcept guard]
// eh: try 0x5dd58b3..0x5dd58b8 -> pad 0x5dd58d7 cleanup
// eh: try 0x5dd58da..0x5dd58e4 -> pad 0x5dd593d catch (...) [compiler noexcept guard]
// eh: try 0x5dd58fe..0x5dd5903 -> pad 0x5dd5928 cleanup
// eh: try 0x5dd592b..0x5dd5935 -> pad 0x5dd593d catch (...) [compiler noexcept guard]
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd547f: nop 
// asm:   0x5dd5549: nop dword ptr [rax]
// asm:   0x5dd55bf: nop 
// asm:   0x5dd5689: nop dword ptr [rax]
// asm:   0x5dd56fe: nop 
// asm:   0x5dd5762: jmp 0x5dd577c
// asm:   0x5dd5826: jmp 0x5dd584a
// asm:   0x5dd5828: jmp 0x5dd589b
// asm:   0x5dd582a: jmp 0x5dd58e6
// asm:   0x5dd582f: jmp 0x5dd584a
// asm:   0x5dd5831: jmp 0x5dd589b
// asm:   0x5dd5833: jmp 0x5dd58e6
// asm:   0x5dd5838: jmp 0x5dd584a
// asm:   0x5dd583a: jmp 0x5dd589b
// asm:   0x5dd583c: jmp 0x5dd58e6
// asm:   0x5dd5841: jmp 0x5dd584a
// asm:   0x5dd5843: jmp 0x5dd589b
// asm:   0x5dd5845: jmp 0x5dd58e6
// asm:   0x5dd584a: mov r15, rax
// asm:   0x5dd584d: cmp edx, 1
// asm:   0x5dd5850: jne 0x5dd588c
// asm:   0x5dd5852: mov rdi, r15
// asm:   0x5dd5855: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd585a: mov rbx, qword ptr [rax]
// asm:   0x5dd585d: mov qword ptr [rsp + 8], rbx
// asm:   0x5dd5862: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd5867: lea rax, [rip + 0x14b7f9a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5dd586e: mov rsi, qword ptr [rax]
// asm:   0x5dd5871: lea rdi, [rsp + 0x20]
// asm:   0x5dd5876: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5dd587b: test rbx, rbx
// asm:   0x5dd587e: je 0x5dd573f
// asm:   0x5dd5884: jmp 0x5dd5920
// asm:   0x5dd5889: mov r15, rax
// asm:   0x5dd588c: lea rdi, [rsp + 8]
// asm:   0x5dd5891: call 0x2fde760  ; il2cpp_runtime_helper_02fde760()
// asm:   0x5dd5896: jmp 0x5dd5935
// asm:   0x5dd589b: mov r15, rax
// asm:   0x5dd589e: cmp edx, 1
// asm:   0x5dd58a1: jne 0x5dd58da
// asm:   0x5dd58a3: mov rdi, r15
// asm:   0x5dd58a6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd58ab: mov rbx, qword ptr [rax]
// asm:   0x5dd58ae: mov qword ptr [rsp + 8], rbx
// asm:   0x5dd58b3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd58b8: lea rax, [rip + 0x14b7f19]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x5dd58bf: mov rsi, qword ptr [rax]
// asm:   0x5dd58c2: lea rdi, [rsp + 0x40]
// asm:   0x5dd58c7: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5dd58cc: test rbx, rbx
// asm:   0x5dd58cf: je 0x5dd55ff
// asm:   0x5dd58d5: jmp 0x5dd5920
// asm:   0x5dd58d7: mov r15, rax
// asm:   0x5dd58da: lea rdi, [rsp + 8]
// asm:   0x5dd58df: call 0x2fde730  ; il2cpp_runtime_helper_02fde730()
// asm:   0x5dd58e4: jmp 0x5dd5935
// asm:   0x5dd58e6: mov r15, rax
// asm:   0x5dd58e9: cmp edx, 1
// asm:   0x5dd58ec: jne 0x5dd592b
// asm:   0x5dd58ee: mov rdi, r15
// asm:   0x5dd58f1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd58f6: mov rbx, qword ptr [rax]
// asm:   0x5dd58f9: mov qword ptr [rsp + 8], rbx
// asm:   0x5dd58fe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd5903: lea rax, [rip + 0x14b855e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5dd590a: mov rsi, qword ptr [rax]
// asm:   0x5dd590d: lea rdi, [rsp + 0x60]
// asm:   0x5dd5912: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5dd5917: test rbx, rbx
// asm:   0x5dd591a: je 0x5dd54bf
// asm:   0x5dd5920: mov rdi, rbx
// asm:   0x5dd5923: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd5928: mov r15, rax
// asm:   0x5dd592b: lea rdi, [rsp + 8]
// asm:   0x5dd5930: call 0x2fde700  ; il2cpp_runtime_helper_02fde700()
// asm:   0x5dd5935: mov rdi, r15
// asm:   0x5dd5938: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd593d: mov rdi, rax
// asm:   0x5dd5940: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_BaseCharacter__o *
Cameras_InGameCamera__GetSortedCharacters(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  Characters_BaseCharacter_array *pCVar5;
  Il2CppObject *object;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_BaseCharacter__o *pSVar8;
  Cameras_InGameCamera___c_StaticFields *pCVar9;
  System_Func_BaseCharacter__int__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  undefined1 local_a0 [16];
  Characters_BaseCharacter_o *local_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  Characters_BaseCharacter_o *local_78;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_BaseCharacter_o *local_58;
  undefined1 local_48 [8];
  undefined1 *puStack_40;
  Characters_BaseCharacter_o *local_38;
  
  if (Il2CppMethodInitialized_07548228 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_InGameCamera_c_GetSortedCharacters_b__68_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera_c);
    Il2CppMethodInitialized_07548228 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  puStack_40 = (undefined1 *)0x0;
  local_38 = (Characters_BaseCharacter_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_BaseCharacter_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_78 = (Characters_BaseCharacter_o *)0x0;
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor);
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Humans,
     pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,pSVar4,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_38 = local_90;
    local_48 = (undefined1  [8])local_a0._0_8_;
    puStack_40 = (undefined1 *)local_a0._8_8_;
    local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_a0._8_8_ = local_48;
    if (pSVar8 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
      do {
        bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
        if (!bVar7) goto label_05dd54ab;
        if (local_38 == (Characters_BaseCharacter_o *)0x0) goto label_05dd5812;
      } while ((local_38->fields).AI != false);
label_05dd54a6:
      ThrowNullReferenceException();
    }
    while (bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_4C456D0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
          pMVar6 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add, bVar7) {
      if (local_38 == (Characters_BaseCharacter_o *)0x0) {
label_05dd5812:
        ThrowNullReferenceException();
      }
      if ((local_38->fields).AI == false) {
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pCVar5 = (pSVar8->fields)._items;
        if (pCVar5 == (Characters_BaseCharacter_array *)0x0) goto label_05dd54a6;
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pCVar5->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pCVar5->m_Items[(int)uVar2] = local_38;
          Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)local_38,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
    }
label_05dd54ab:
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pGVar3 = (__this->fields)._inGameManager;
    if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Shifters,
       pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,pSVar4,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator
                );
      local_58 = local_90;
      local_68 = (undefined1  [8])local_a0._0_8_;
      puStack_60 = (undefined1 *)local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_a0._8_8_ = local_68;
      if (pSVar8 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
        do {
          bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
          if (!bVar7) goto label_05dd55eb;
          if (local_58 == (Characters_BaseCharacter_o *)0x0) goto label_05dd5817;
        } while ((local_58->fields).AI != false);
label_05dd55e6:
        ThrowNullReferenceException();
      }
      while (bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext)
            , pMVar6 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add, bVar7) {
        if (local_58 == (Characters_BaseCharacter_o *)0x0) {
label_05dd5817:
          ThrowNullReferenceException();
        }
        if ((local_58->fields).AI == false) {
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar5 = (pSVar8->fields)._items;
          if (pCVar5 == (Characters_BaseCharacter_array *)0x0) goto label_05dd55e6;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pCVar5->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pCVar5->m_Items[(int)uVar2] = local_58;
            Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)local_58,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        }
      }
label_05dd55eb:
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
      pGVar3 = (__this->fields)._inGameManager;
      if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Titans,
         pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,pSVar4,
                   (MethodInfo_4FB3DA0 *)
                   MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
        local_78 = local_90;
        local_88 = (undefined1  [8])local_a0._0_8_;
        uStack_80 = (undefined1 *)local_a0._8_8_;
        local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_a0._8_8_ = local_88;
        if (pSVar8 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
          do {
            bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
                               (MethodInfo_4C456D0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
            if (!bVar7) goto label_05dd572b;
            if (local_78 == (Characters_BaseCharacter_o *)0x0) goto label_05dd581c;
          } while ((local_78->fields).AI != false);
label_05dd5726:
          ThrowNullReferenceException();
        }
        do {
          do {
            bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
                               (MethodInfo_4C456D0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
            pMVar6 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add;
            if (!bVar7) {
label_05dd572b:
              System_Collections_Generic_HashSet_Enumerator_object___Dispose
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
                         (MethodInfo_4C456C0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
              if ((TypeInfo_Cameras_InGameCamera_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c);
                pCVar9 = TypeInfo_Cameras_InGameCamera_c->static_fields;
                __this_00 = pCVar9->__9__68_0;
              }
              else {
                pCVar9 = TypeInfo_Cameras_InGameCamera_c->static_fields;
                __this_00 = pCVar9->__9__68_0;
              }
              if (__this_00 == (System_Func_BaseCharacter__int__o *)0x0) {
                if ((((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c)->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_InGameCamera_c);
                  pCVar9 = TypeInfo_Cameras_InGameCamera_c->static_fields;
                }
                object = (Il2CppObject *)pCVar9->__9;
                __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_BaseCharacter_int);
                System_Func_object__int____ctor
                          ((System_Func_object__int__o *)__this_00,object,
                           (intptr_t)MethodInfo_Cameras_InGameCamera_c_GetSortedCharacters_b__68_0,
                           (MethodInfo_4F198F0 *)0x0);
                pCVar9 = TypeInfo_Cameras_InGameCamera_c->static_fields;
                pCVar9->__9__68_0 = __this_00;
                Il2CppCodeGenWriteBarrier(&pCVar9->__9__68_0);
              }
              source = System_Linq_Enumerable__OrderBy_object__int_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                                  (System_Func_TSource__TKey__o *)__this_00,
                                  (MethodInfo_34F1DD0 *)
                                  MethodInfo_System_Linq_Enumerable_OrderBy_BaseCharacter_int);
              pSVar8 = (System_Collections_Generic_List_BaseCharacter__o *)
                       System_Linq_Enumerable__ToList_object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                  (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_BaseCharacter
                                 );
              return pSVar8;
            }
            if (local_78 == (Characters_BaseCharacter_o *)0x0) {
label_05dd581c:
              ThrowNullReferenceException();
            }
          } while ((local_78->fields).AI != false);
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar5 = (pSVar8->fields)._items;
          if (pCVar5 == (Characters_BaseCharacter_array *)0x0) goto label_05dd5726;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pCVar5->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pCVar5->m_Items[(int)uVar2] = local_78;
            Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)local_78,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.InGameCamera$$UpdateShake
// il2cpp: void Cameras_InGameCamera__UpdateShake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd5060

void Cameras_InGameCamera__UpdateShake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Transform_o *__this_00;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  
  fVar10 = (__this->fields)._shakeTimeLeft;
  if (0.0 < fVar10) {
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shakeTimeLeft = fVar10 - fVar8;
    pUVar6 = (__this->fields).Cache;
    if ((__this->fields)._shakeFlip == false) {
      if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
         (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_05dd5209;
      UVar11 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3 = (pUVar7->upVector).fields.x;
      uVar5 = (pUVar7->upVector).fields.y;
      fVar10 = (__this->fields)._currentShakeDistance;
      fVar8 = UVar11.fields.x - fVar10 * (float)uVar3;
      fVar9 = UVar11.fields.y - fVar10 * (float)uVar5;
      fVar10 = UVar11.fields.z - (pUVar7->upVector).fields.z * fVar10;
    }
    else {
      if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
         (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
label_05dd5209:
        ThrowNullReferenceException();
      }
      UVar11 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar7->upVector).fields.x;
      uVar4 = (pUVar7->upVector).fields.y;
      fVar10 = (__this->fields)._currentShakeDistance;
      fVar8 = UVar11.fields.x + fVar10 * (float)uVar2;
      fVar9 = UVar11.fields.y + fVar10 * (float)uVar4;
      fVar10 = UVar11.fields.z + (pUVar7->upVector).fields.z * fVar10;
    }
    UVar11.fields.y = fVar9;
    UVar11.fields.x = fVar8;
    UVar11.fields.z = fVar10;
    UnityEngine_Transform__set_position(__this_00,UVar11,(MethodInfo *)0x0);
    pbVar1 = &(__this->fields)._shakeFlip;
    *pbVar1 = (bool)(*pbVar1 ^ 1);
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._currentShakeDistance =
         (fVar10 * -0.15 * 60.0 + 1.0) * (__this->fields)._currentShakeDistance;
  }
  return;
}


// Cameras.InGameCamera$$.ctor
// il2cpp: void Cameras_InGameCamera___ctor (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x5dd5ad0

void Cameras_InGameCamera___ctor(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_00;
  
  if (Il2CppMethodInitialized_07548229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Cycle_InGameCamera_SpecateMode);
    Il2CppMethodInitialized_07548229 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Cycle_InGameCamera_SpecateMode);
  Utility_Cycle_Int32Enum____ctor
            ((Utility_Cycle_T__o *)__this_00,
             (MethodInfo_494C320 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_ctor);
  (__this->fields).SpecMode = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpecMode);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$.cctor
// il2cpp: void Cameras_InGameCamera___cctor (const MethodInfo* method);
// 0x5dd5b50

void Cameras_InGameCamera___cctor(MethodInfo *method)

{
  int iVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_0754822a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_0754822a = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,2);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (int)layers->max_length;
  if (iVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->MapObjectAll;
    if (iVar1 != 1) {
      layers->m_Items[1] = pUVar2->MapObjectEntities;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Cameras_InGameCamera->static_fields->_clipMask).fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


