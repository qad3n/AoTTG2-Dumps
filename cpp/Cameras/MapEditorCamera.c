// Type: Cameras.MapEditorCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Cameras/MapEditorCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MapEditorCamera.cs
// --------------------------------

// Cameras.MapEditorCamera$$GetClampedDeltaTime
// il2cpp: float Cameras_MapEditorCamera__GetClampedDeltaTime (const MethodInfo* method);
// 0x5dd5cd0

float Cameras_MapEditorCamera__GetClampedDeltaTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (0.033333335 <= fVar1) {
    fVar1 = 0.033333335;
  }
  return fVar1;
}


// Cameras.MapEditorCamera$$GetScreenScale
// il2cpp: float Cameras_MapEditorCamera__GetScreenScale (const MethodInfo* method);
// 0x5dd5cf0

float Cameras_MapEditorCamera__GetScreenScale(MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar2 = 1.0;
  if (1.0 <= (float)iVar1) {
    fVar2 = (float)iVar1;
  }
  return fVar2 / 1080.0;
}


// Cameras.MapEditorCamera$$Awake
// il2cpp: void Cameras_MapEditorCamera__Awake (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd5d20

void Cameras_MapEditorCamera__Awake(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_MapEditorSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Rendering_Universal_UniversalAdditionalCameraData_o *__this_01;
  
  if (Il2CppMethodInitialized_0754822c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754822c = '\x01';
  }
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  __this_01 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData
                        ((__this->fields).Camera,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Rendering_Universal_UniversalAdditionalCameraData_o *)0x0) {
    UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__set_requiresDepthTexture
              (__this_01,true,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar1 != (Settings_InputSettings_o *)0x0) {
      (__this->fields)._input = (pSVar1->fields).MapEditor;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._input);
      (__this->fields)._settings = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._settings);
      if (Il2CppMethodInitialized_0754822d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        Il2CppMethodInitialized_0754822d = '\x01';
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if (((pSVar2 != (Settings_MapEditorSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).RenderDistance, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
         (__this_00 = (__this->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
        UnityEngine_Camera__set_farClipPlane(__this_00,(float)(pSVar3->fields)._value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_MapEditorCamera__ApplyGraphicsSettings (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd5e20

void Cameras_MapEditorCamera__ApplyGraphicsSettings(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Camera_o *__this_00;
  
  if (Il2CppMethodInitialized_0754822d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754822d = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (((pSVar1 == (Settings_MapEditorSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).RenderDistance, pSVar2 == (Settings_IntSetting_o *)0x0)) ||
     (__this_00 = (__this->fields).Camera, __this_00 == (UnityEngine_Camera_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Camera__set_farClipPlane(__this_00,(float)(pSVar2->fields)._value,(MethodInfo *)0x0);
  return;
}


// Cameras.MapEditorCamera$$CreateUICamera
// il2cpp: void Cameras_MapEditorCamera__CreateUICamera (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd5e90

void Cameras_MapEditorCamera__CreateUICamera(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.MapEditorCamera$$Update
// il2cpp: void Cameras_MapEditorCamera__Update (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd5ea0

void Cameras_MapEditorCamera__Update(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754822e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754822e = '\x01';
  }
  bVar2 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields)._menu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pUVar1->fields).IsInputFocused == false) {
        Cameras_MapEditorCamera__UpdateMovement(__this,method_00);
      }
      Cameras_MapEditorCamera__UpdateRotation(__this,method_00);
      return;
    }
  }
  return;
}


// Cameras.MapEditorCamera$$UpdateMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateMovement (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd5f30
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd5f55: jmp 0x5dd6409
// asm:   0x5dd609c: movss dword ptr [rsp + 0xc], xmm0
// asm:   0x5dd6162: movss dword ptr [rsp + 0xc], xmm0
// asm:   0x5dd6228: movss dword ptr [rsp + 0xc], xmm0
// asm:   0x5dd628f: jmp 0x5dd6409

void Cameras_MapEditorCamera__UpdateMovement(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  float speed;
  Settings_MapEditorInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Settings_MapEditorSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  UnityEngine_Camera_o *pUVar8;
  bool bVar9;
  int32_t iVar10;
  MethodInfo *method_00;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  float local_4c;
  undefined8 local_48;
  
  if (Il2CppMethodInitialized_0754822f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754822f = '\x01';
    if (Il2CppMethodInitialized_0753e4b6 == '\0') goto label_05dd5f76;
label_05dd5f4c:
    pSVar1 = (__this->fields)._input;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 != '\0') goto label_05dd5f4c;
label_05dd5f76:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
    pSVar1 = (__this->fields)._input;
  }
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).SaveMap, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_48._0_4_ = (pUVar3->zeroVector).fields.x;
  local_48._4_4_ = (pUVar3->zeroVector).fields.y;
  local_4c = (pUVar3->zeroVector).fields.z;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Forward, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05dd6409;
    UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
    local_48 = CONCAT44(local_48._4_4_ + UVar12.fields.y,(float)local_48 + UVar12.fields.x);
    local_4c = local_4c + UVar12.fields.z;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Back, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05dd6409;
      UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
      local_48 = CONCAT44(local_48._4_4_ - UVar12.fields.y,(float)local_48 - UVar12.fields.x);
      local_4c = local_4c - UVar12.fields.z;
    }
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Right, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05dd6409;
    UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
    local_48 = CONCAT44(local_48._4_4_ + UVar12.fields.y,(float)local_48 + UVar12.fields.x);
    local_4c = local_4c + UVar12.fields.z;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Left, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05dd6409;
      UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
      local_48 = CONCAT44(local_48._4_4_ - UVar12.fields.y,(float)local_48 - UVar12.fields.x);
      local_4c = local_4c - UVar12.fields.z;
    }
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Up, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05dd6409;
    UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
    local_48 = CONCAT44(local_48._4_4_ + UVar12.fields.y,(float)local_48 + UVar12.fields.x);
    local_4c = local_4c + UVar12.fields.z;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Down, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05dd6409;
      UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
      local_48 = CONCAT44(local_48._4_4_ - UVar12.fields.y,(float)local_48 - UVar12.fields.x);
      local_4c = local_4c - UVar12.fields.z;
    }
  }
  pSVar6 = (__this->fields)._settings;
  if ((((pSVar6 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).CameraMoveSpeed, pSVar7 == (Settings_FloatSetting_o *)0x0)) ||
      (pSVar1 = (__this->fields)._input, pSVar1 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields).Slow, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
  speed = (pSVar7->fields)._value;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar9) {
    pSVar6 = (__this->fields)._settings;
    if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto label_05dd6409;
    pSVar7 = (pSVar6->fields).CameraSlowMoveSpeed;
joined_r0x05dd62cf:
    if (pSVar7 == (Settings_FloatSetting_o *)0x0) goto label_05dd6409;
    speed = (pSVar7->fields)._value;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Fast, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05dd6409;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar9) {
      pSVar6 = (__this->fields)._settings;
      if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto label_05dd6409;
      pSVar7 = (pSVar6->fields).CameraFastMoveSpeed;
      goto joined_r0x05dd62cf;
    }
  }
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    if (0.033333335 <= fVar11) {
      fVar11 = 0.033333335;
    }
    UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    value.fields.x = UVar12.fields.x + speed * (float)local_48 * fVar11;
    value.fields.y = UVar12.fields.y + speed * local_48._4_4_ * fVar11;
    value.fields.z = UVar12.fields.z + local_4c * fVar11 * speed;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__set_position(pUVar5,value,(MethodInfo *)0x0);
    Cameras_MapEditorCamera__UpdateDragMovement(__this,speed,method_00);
    Cameras_MapEditorCamera__UpdateZoomMovement(__this,speed,method_00);
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ToggleOrthographic, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
      bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
      if (!bVar9) {
        return;
      }
      pUVar8 = (__this->fields).Camera;
      if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
        bVar9 = UnityEngine_Camera__get_orthographic(pUVar8,(MethodInfo *)0x0);
        UnityEngine_Camera__set_orthographic(pUVar8,!bVar9,(MethodInfo *)0x0);
        pUVar8 = (__this->fields).Camera;
        if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
          bVar9 = UnityEngine_Camera__get_orthographic(pUVar8,(MethodInfo *)0x0);
          if (!bVar9) {
            return;
          }
          pUVar8 = (__this->fields).Camera;
          iVar10 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
            UnityEngine_Camera__set_orthographicSize(pUVar8,(float)iVar10 * 0.25,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05dd6409:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$UpdateDragMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateDragMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x5dd67d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd6a82: mov byte ptr [rbx + 0x59], 0
// asm:   0x5dd6a86: jmp 0x5dd681e

void Cameras_MapEditorCamera__UpdateDragMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  bool bVar8;
  int32_t iVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_68;
  float fStack_64;
  
  pSVar3 = (__this->fields)._input;
  if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).Pan, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
    if (bVar8) {
      (__this->fields)._startDrag = true;
      UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      (__this->fields)._lastDragPosition.fields.x = UVar12.fields.x;
      (__this->fields)._lastDragPosition.fields.y = UVar12.fields.y;
      (__this->fields)._lastDragPosition.fields.z = UVar12.fields.z;
      return;
    }
    pSVar3 = (__this->fields)._input;
    if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).Pan, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
      bVar8 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
      if (bVar8) {
        if ((__this->fields)._startDrag == false) {
          return;
        }
        UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar1 = (__this->fields)._lastDragPosition.fields.x;
        uVar2 = (__this->fields)._lastDragPosition.fields.y;
        UVar13 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        (__this->fields)._lastDragPosition.fields.x = UVar13.fields.x;
        (__this->fields)._lastDragPosition.fields.y = UVar13.fields.y;
        (__this->fields)._lastDragPosition.fields.z = UVar13.fields.z;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        iVar9 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar5 = (__this->fields).Cache;
        if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UVar13 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Cache;
          if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar7 = (pUVar5->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            if (0.033333335 <= fVar10) {
              fVar10 = 0.033333335;
            }
            local_98 = UVar12.fields.x;
            fStack_94 = UVar12.fields.y;
            local_98 = local_98 - (float)uVar1;
            fStack_94 = fStack_94 - (float)uVar2;
            fVar11 = 1.0;
            if (1.0 <= (float)iVar9) {
              fVar11 = (float)iVar9;
            }
            fVar11 = fVar11 / 1080.0;
            UVar12 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
            local_68 = UVar13.fields.x;
            fStack_64 = UVar13.fields.y;
            value.fields.x = local_68 - local_98 * UVar12.fields.x * fVar10 * speed * fVar11;
            value.fields.y = fStack_64 - local_98 * UVar12.fields.y * fVar10 * speed * fVar11;
            value.fields.z = UVar13.fields.z - UVar12.fields.z * local_98 * fVar10 * speed * fVar11;
            UnityEngine_Transform__set_position(pUVar6,value,(MethodInfo *)0x0);
            pUVar5 = (__this->fields).Cache;
            if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).Cache;
              if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar7 = (pUVar5->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                UVar13 = UnityEngine_Transform__get_up(pUVar7,(MethodInfo *)0x0);
                local_68 = UVar12.fields.x;
                fStack_64 = UVar12.fields.y;
                value_00.fields.x = local_68 - fVar11 * fVar10 * UVar13.fields.x * fStack_94 * speed;
                value_00.fields.y = fStack_64 - fVar11 * fVar10 * UVar13.fields.y * fStack_94 * speed;
                value_00.fields.z = UVar12.fields.z - fVar11 * fVar10 * UVar13.fields.z * fStack_94 * speed;
                UnityEngine_Transform__set_position(pUVar6,value_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pSVar3 = (__this->fields)._input;
        if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pSVar4 = (pSVar3->fields).Pan, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar4,false,(MethodInfo *)0x0);
          if (bVar8) {
            (__this->fields)._startDrag = false;
            return;
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$UpdateZoomMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateZoomMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x5dd6a90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd6cdb: jmp 0x5dd6b44

void Cameras_MapEditorCamera__UpdateZoomMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_MapEditorMenu_o *pUVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Settings_MapEditorInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  bool bVar9;
  GameManagers_BaseGameManager_o *x;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Transform_o *__this_00;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07548230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07548230 = '\x01';
  }
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_05dd6e0a;
  if ((pUVar3->fields).IsMouseUI != false) {
    return;
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) {
label_05dd6b2f:
    x = (GameManagers_BaseGameManager_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if ((pGVar4->klass->_2).typeHierarchyDepth < bVar1) goto label_05dd6b2f;
    x = (GameManagers_BaseGameManager_o *)0x0;
    if ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager) {
      x = pGVar4;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (x == (GameManagers_BaseGameManager_o *)0x0) goto label_05dd6e0a;
    if (((*(uint64_t *)((char *)x + 0xa0)) != (GameManagers_BaseGameManager_c *)0x0) && (*(char *)&(((*(Il2CppClass **)((char *)x + 0xa0)))->_1).name != '\0'))
    {
      return;
    }
  }
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar10 = (__this->fields).Camera;
  if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
    if (0.033333335 <= fVar11) {
      fVar11 = 0.033333335;
    }
    bVar9 = UnityEngine_Camera__get_orthographic(pUVar10,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._input;
    if (bVar9) {
      if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).ZoomIn, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
        bVar9 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
        if (bVar9) {
          pUVar10 = (__this->fields).Camera;
          if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
            fVar12 = UnityEngine_Camera__get_orthographicSize(pUVar10,(MethodInfo *)0x0);
            fVar12 = fVar12 - (fVar11 * speed + fVar11 * speed);
label_05dd6d37:
            UnityEngine_Camera__set_orthographicSize(pUVar10,fVar12,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pSVar6 = (pSVar5->fields).ZoomOut, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
            bVar9 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
            if (!bVar9) {
              return;
            }
            pUVar10 = (__this->fields).Camera;
            if (pUVar10 != (UnityEngine_Camera_o *)0x0) {
              fVar12 = UnityEngine_Camera__get_orthographicSize(pUVar10,(MethodInfo *)0x0);
              fVar12 = fVar12 + fVar11 * speed + fVar11 * speed;
              goto label_05dd6d37;
            }
          }
        }
      }
    }
    else if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
            (pSVar6 = (pSVar5->fields).ZoomIn, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
      bVar9 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
      if (bVar9) {
        pUVar7 = (__this->fields).Cache;
        if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
           (__this_00 = (pUVar7->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
          UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          pUVar7 = (__this->fields).Cache;
          if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UVar15 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
            fVar13 = UVar15.fields.z * fVar11 * speed;
            fVar12 = UVar15.fields.x * fVar11 * speed;
            fVar11 = UVar15.fields.y * fVar11 * speed;
            local_38 = UVar14.fields.x;
            fStack_34 = UVar14.fields.y;
            local_38 = fVar12 + fVar12 + local_38;
            fStack_34 = fVar11 + fVar11 + fStack_34;
            fVar11 = fVar13 + fVar13 + UVar14.fields.z;
label_05dd6dfa:
            UVar14.fields.y = fStack_34;
            UVar14.fields.x = local_38;
            UVar14.fields.z = fVar11;
            UnityEngine_Transform__set_position(__this_00,UVar14,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).ZoomOut, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
          bVar9 = Settings_KeybindSetting__GetKey(pSVar6,false,(MethodInfo *)0x0);
          if (!bVar9) {
            return;
          }
          pUVar7 = (__this->fields).Cache;
          if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
             (__this_00 = (pUVar7->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
            UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
            pUVar7 = (__this->fields).Cache;
            if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
              UVar15 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
              fVar12 = UVar15.fields.z * fVar11 * speed;
              fVar13 = speed * fVar11 * UVar15.fields.x;
              fVar11 = speed * fVar11 * UVar15.fields.y;
              local_28 = UVar14.fields.x;
              fStack_24 = UVar14.fields.y;
              local_38 = local_28 - (fVar13 + fVar13);
              fStack_34 = fStack_24 - (fVar11 + fVar11);
              fVar11 = UVar14.fields.z - (fVar12 + fVar12);
              goto label_05dd6dfa;
            }
          }
        }
      }
    }
  }
label_05dd6e0a:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$UpdateRotation
// il2cpp: void Cameras_MapEditorCamera__UpdateRotation (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd6410

void Cameras_MapEditorCamera__UpdateRotation(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Settings_MapEditorSettings_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  Settings_MapEditorInputSettings_o *pSVar8;
  Settings_KeybindSetting_o *pSVar9;
  UI_MapEditorMenu_o *pUVar10;
  bool bVar11;
  int32_t iVar12;
  float *pfVar13;
  MethodInfo *in_RCX;
  UnityEngine_Vector3_o *pUVar14;
  MethodInfo *method_00;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o direction;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [24];
  
  if (Il2CppMethodInitialized_07548231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07548231 = '\x01';
  }
  fStack_2c = 0.0;
  fStack_30 = 0.0;
  if ((__this->fields)._wasRotating == false) {
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto label_05dd67c9;
    if ((pUVar10->fields).IsMouseUI != false) {
      return;
    }
  }
  (__this->fields)._wasRotating = false;
  bVar11 = Cameras_MapEditorCamera__GetLookInput(__this,&fStack_2c,&fStack_30,in_RCX);
  if (bVar11) {
    pSVar4 = (__this->fields)._settings;
    if ((pSVar4 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).CameraRotateSpeed, pSVar5 == (Settings_FloatSetting_o *)0x0))
    goto label_05dd67c9;
    fVar1 = (pSVar5->fields)._value;
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    pUVar6 = (__this->fields).Cache;
    if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05dd67c9;
    if (0.033333335 <= fVar15) {
      fVar15 = 0.033333335;
    }
    fVar18 = 1.0;
    if (1.0 <= (float)iVar12) {
      fVar18 = (float)iVar12;
    }
    UVar19 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    fVar16 = UVar19.fields.x;
    fVar17 = UVar19.fields.y;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_8_ = UVar19.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
      fVar16 = (float)auStack_28._0_4_;
      fVar17 = (float)auStack_28._4_4_;
    }
    UVar19.fields.y = fVar17;
    UVar19.fields.x = fVar16;
    UnityEngine_Transform__RotateAround
              (pUVar7,UVar19,
               (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,
               fStack_2c * fVar15 * fVar1 * (fVar18 / 1080.0),(MethodInfo *)0x0);
    pUVar6 = (__this->fields).Cache;
    if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar7 = (pUVar6->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05dd67c9;
    UVar19 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    point.fields.z = UVar19.fields.z;
    pUVar6 = (__this->fields).Cache;
    if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd67c9;
    auStack_28._8_4_ = extraout_XMM0_Dc_00;
    auStack_28._0_8_ = UVar19.fields._0_8_;
    auStack_28._12_4_ = extraout_XMM0_Dd_00;
    __this_00 = (pUVar6->fields).Transform;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05dd67c9;
    UVar19 = UnityEngine_Transform__get_right(__this_00,(MethodInfo *)0x0);
    point.fields.x = (float)auStack_28._0_4_;
    point.fields.y = (float)auStack_28._4_4_;
    UnityEngine_Transform__RotateAround
              (pUVar7,point,UVar19,(fVar18 / 1080.0) * fVar1 * fVar15 * -fStack_30,(MethodInfo *)0x0);
    (__this->fields)._wasRotating = true;
  }
  pSVar8 = (__this->fields)._input;
  if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar9 = (pSVar8->fields).SnapCameraLeft, pSVar9 == (Settings_KeybindSetting_o *)0x0)) {
label_05dd67c9:
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
  if (bVar11) {
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    pUVar14 = &TypeInfo_UnityEngine_Vector3->static_fields->downVector;
    pfVar13 = &(TypeInfo_UnityEngine_Vector3->static_fields->downVector).fields.z;
  }
  else {
    pSVar8 = (__this->fields)._input;
    if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar9 = (pSVar8->fields).SnapCameraRight, pSVar9 == (Settings_KeybindSetting_o *)0x0))
    goto label_05dd67c9;
    method_00 = (MethodInfo *)0x0;
    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
    if (bVar11) {
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar14 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
      pfVar13 = &(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.z;
    }
    else {
      pSVar8 = (__this->fields)._input;
      if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar9 = (pSVar8->fields).SnapCameraUp, pSVar9 == (Settings_KeybindSetting_o *)0x0))
      goto label_05dd67c9;
      method_00 = (MethodInfo *)0x0;
      bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
      if (bVar11) {
        if (Il2CppMethodInitialized_07544d56 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07544d56 = '\x01';
        }
        pUVar14 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
        pfVar13 = &(TypeInfo_UnityEngine_Vector3->static_fields->rightVector).fields.z;
      }
      else {
        pSVar8 = (__this->fields)._input;
        if ((pSVar8 == (Settings_MapEditorInputSettings_o *)0x0) ||
           (pSVar9 = (pSVar8->fields).SnapCameraDown, pSVar9 == (Settings_KeybindSetting_o *)0x0))
        goto label_05dd67c9;
        method_00 = (MethodInfo *)0x0;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if (Il2CppMethodInitialized_07545e29 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07545e29 = '\x01';
        }
        pUVar14 = &TypeInfo_UnityEngine_Vector3->static_fields->leftVector;
        pfVar13 = &(TypeInfo_UnityEngine_Vector3->static_fields->leftVector).fields.z;
      }
    }
  }
  uVar2 = (pUVar14->fields).x;
  uVar3 = (pUVar14->fields).y;
  direction.fields.y = (float)uVar3;
  direction.fields.x = (float)uVar2;
  direction.fields.z = *pfVar13;
  Cameras_MapEditorCamera__SnapCameraToAxis(__this,direction,method_00);
  return;
}


// Cameras.MapEditorCamera$$GetLookInput
// il2cpp: bool Cameras_MapEditorCamera__GetLookInput (Cameras_MapEditorCamera_o* __this, float* inputX, float* inputY, const MethodInfo* method);
// 0x5dd6e10

bool Cameras_MapEditorCamera__GetLookInput
               (Cameras_MapEditorCamera_o *__this,float *inputX,float *inputY,MethodInfo *method)

{
  Settings_MapEditorInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07548232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_07548232 = '\x01';
  }
  fVar3 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  *inputX = fVar3;
  fVar3 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  *inputY = fVar3;
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (__this_00 = (pSVar1->fields).RotateCamera, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar2;
}


// Cameras.MapEditorCamera$$AlignedWithWorldAxis
// il2cpp: bool Cameras_MapEditorCamera__AlignedWithWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd74a0

bool Cameras_MapEditorCamera__AlignedWithWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

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
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Vector3_StaticFields *pUVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  
  pUVar13 = (__this->fields).Cache;
  if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0)) {
label_05dd7833:
    ThrowNullReferenceException();
  }
  UVar20 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72e = '\x01';
  }
  pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar15->forwardVector).fields.x;
  uVar7 = (pUVar15->forwardVector).fields.y;
  fVar17 = UVar20.fields.y - (float)uVar7;
  fVar18 = UVar20.fields.z - (pUVar15->forwardVector).fields.z;
  fVar19 = UVar20.fields.x - (float)uVar1;
  bVar16 = true;
  if (9.9999994e-11 <= fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18) {
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_05dd7833;
    UVar20 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07545a60 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07545a60 = '\x01';
    }
    pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar15->backVector).fields.x;
    uVar8 = (pUVar15->backVector).fields.y;
    fVar19 = UVar20.fields.y - (float)uVar8;
    fVar17 = UVar20.fields.z - (pUVar15->backVector).fields.z;
    fVar18 = UVar20.fields.x - (float)uVar2;
    if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
      pUVar13 = (__this->fields).Cache;
      if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
      goto label_05dd7833;
      UVar20 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545e29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07545e29 = '\x01';
      }
      pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3 = (pUVar15->leftVector).fields.x;
      uVar9 = (pUVar15->leftVector).fields.y;
      fVar19 = UVar20.fields.y - (float)uVar9;
      fVar17 = UVar20.fields.z - (pUVar15->leftVector).fields.z;
      fVar18 = UVar20.fields.x - (float)uVar3;
      if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
        pUVar13 = (__this->fields).Cache;
        if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
        goto label_05dd7833;
        UVar20 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07544d56 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07544d56 = '\x01';
        }
        pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar4 = (pUVar15->rightVector).fields.x;
        uVar10 = (pUVar15->rightVector).fields.y;
        fVar19 = UVar20.fields.y - (float)uVar10;
        fVar17 = UVar20.fields.z - (pUVar15->rightVector).fields.z;
        fVar18 = UVar20.fields.x - (float)uVar4;
        if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
          pUVar13 = (__this->fields).Cache;
          if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
          goto label_05dd7833;
          UVar20 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar5 = (pUVar15->upVector).fields.x;
          uVar11 = (pUVar15->upVector).fields.y;
          fVar19 = UVar20.fields.y - (float)uVar11;
          fVar17 = UVar20.fields.z - (pUVar15->upVector).fields.z;
          fVar18 = UVar20.fields.x - (float)uVar5;
          if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
            pUVar13 = (__this->fields).Cache;
            if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
            goto label_05dd7833;
            UVar20 = UnityEngine_Transform__get_forward(pUVar14,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_075450a5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_075450a5 = '\x01';
            }
            pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar6 = (pUVar15->downVector).fields.x;
            uVar12 = (pUVar15->downVector).fields.y;
            fVar19 = UVar20.fields.y - (float)uVar12;
            fVar17 = UVar20.fields.z - (pUVar15->downVector).fields.z;
            fVar18 = UVar20.fields.x - (float)uVar6;
            bVar16 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 < 9.9999994e-11;
          }
        }
      }
    }
  }
  return bVar16;
}


// Cameras.MapEditorCamera$$AlignToWorldAxis
// il2cpp: void Cameras_MapEditorCamera__AlignToWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd7840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd7c3e: jmp 0x5dd7d2a

void Cameras_MapEditorCamera__AlignToWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  float *pfVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  undefined8 local_88;
  
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_05dd7f11;
  UVar19 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_05dd7f11;
  UVar20 = UnityEngine_Transform__get_up(pUVar8,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar10->zeroVector).fields.x;
  uVar4 = (pUVar10->zeroVector).fields.y;
  fVar16 = (pUVar10->zeroVector).fields.z;
  local_88._0_4_ = UVar19.fields.x;
  local_88._4_4_ = UVar19.fields.y;
  fVar12 = ABS((float)local_88);
  fVar13 = ABS(local_88._4_4_);
  fVar14 = ABS(UVar19.fields.z);
  fVar18 = ABS(UVar20.fields.x);
  fVar17 = ABS(UVar20.fields.y);
  fVar15 = ABS(UVar20.fields.z);
  if ((fVar12 <= fVar13) || (fVar12 <= fVar14)) {
    if ((fVar12 < fVar13) && (fVar14 < fVar13)) {
      if (local_88._4_4_ <= 0.0) {
        if (Il2CppMethodInitialized_075450a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_075450a5 = '\x01';
          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        }
        pUVar11 = &pUVar10->downVector;
        pfVar9 = &(pUVar10->downVector).fields.z;
      }
      else {
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        }
        pUVar11 = &pUVar10->upVector;
        pfVar9 = &(pUVar10->upVector).fields.z;
      }
      goto label_05dd7cc7;
    }
    if ((fVar12 < fVar14) && (fVar13 < fVar14)) {
      if (UVar19.fields.z <= 0.0) {
        if (Il2CppMethodInitialized_07545a60 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07545a60 = '\x01';
          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        }
        pUVar11 = &pUVar10->backVector;
        pfVar9 = &(pUVar10->backVector).fields.z;
      }
      else {
        if (Il2CppMethodInitialized_0753e72e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72e = '\x01';
          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        }
        pUVar11 = &pUVar10->forwardVector;
        pfVar9 = &(pUVar10->forwardVector).fields.z;
      }
      goto label_05dd7cc7;
    }
    uVar2 = uVar1;
    uVar5 = uVar4;
    fVar12 = fVar16;
    if (fVar17 < fVar18) goto label_05dd7cd5;
label_05dd7d2a:
    if ((fVar18 < fVar17) && (fVar15 < fVar17)) {
      if (UVar20.fields.y <= 0.0) {
        if (Il2CppMethodInitialized_075450a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_075450a5 = '\x01';
        }
        pUVar11 = &TypeInfo_UnityEngine_Vector3->static_fields->downVector;
        pfVar9 = &(TypeInfo_UnityEngine_Vector3->static_fields->downVector).fields.z;
      }
      else {
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar11 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
        pfVar9 = &(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.z;
      }
      goto label_05dd7eaf;
    }
    uVar3 = uVar1;
    uVar6 = uVar4;
    if ((fVar18 < fVar15) && (fVar17 < fVar15)) {
      if (UVar20.fields.z <= 0.0) {
        if (Il2CppMethodInitialized_07545a60 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07545a60 = '\x01';
        }
        pUVar11 = &TypeInfo_UnityEngine_Vector3->static_fields->backVector;
        pfVar9 = &(TypeInfo_UnityEngine_Vector3->static_fields->backVector).fields.z;
      }
      else {
        if (Il2CppMethodInitialized_0753e72e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72e = '\x01';
        }
        pUVar11 = &TypeInfo_UnityEngine_Vector3->static_fields->forwardVector;
        pfVar9 = &(TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields.z;
      }
      goto label_05dd7eaf;
    }
  }
  else {
    if ((float)local_88 <= 0.0) {
      if (Il2CppMethodInitialized_07545e29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07545e29 = '\x01';
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      }
      pUVar11 = &pUVar10->leftVector;
      pfVar9 = &(pUVar10->leftVector).fields.z;
    }
    else {
      if (Il2CppMethodInitialized_07544d56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07544d56 = '\x01';
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      }
      pUVar11 = &pUVar10->rightVector;
      pfVar9 = &(pUVar10->rightVector).fields.z;
    }
label_05dd7cc7:
    uVar2 = (pUVar11->fields).x;
    uVar5 = (pUVar11->fields).y;
    fVar12 = *pfVar9;
    if (fVar18 <= fVar17) goto label_05dd7d2a;
label_05dd7cd5:
    if (fVar18 <= fVar15) goto label_05dd7d2a;
    if (UVar20.fields.x <= 0.0) {
      if (Il2CppMethodInitialized_07545e29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07545e29 = '\x01';
      }
      pUVar11 = &TypeInfo_UnityEngine_Vector3->static_fields->leftVector;
      pfVar9 = &(TypeInfo_UnityEngine_Vector3->static_fields->leftVector).fields.z;
    }
    else {
      if (Il2CppMethodInitialized_07544d56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07544d56 = '\x01';
      }
      pUVar11 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
      pfVar9 = &(TypeInfo_UnityEngine_Vector3->static_fields->rightVector).fields.z;
    }
label_05dd7eaf:
    uVar3 = (pUVar11->fields).x;
    uVar6 = (pUVar11->fields).y;
    fVar16 = *pfVar9;
  }
  pUVar7 = (__this->fields).Cache;
  if (pUVar7 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar8 = (pUVar7->fields).Transform;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UVar19.fields.y = (float)uVar5;
      UVar19.fields.x = (float)uVar2;
      UVar19.fields.z = fVar12;
      UnityEngine_Transform__set_forward(pUVar8,UVar19,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).Cache;
      if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        UVar20.fields.z = fVar16;
        UVar20.fields.x = (float)uVar3;
        UVar20.fields.y = (float)uVar6;
        UnityEngine_Transform__set_up(pUVar8,UVar20,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05dd7f11:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$SnapCameraToAxis
// il2cpp: void Cameras_MapEditorCamera__SnapCameraToAxis (Cameras_MapEditorCamera_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5dd6ea0
// eh: try 0x5dd7034..0x5dd741e -> pad 0x5dd7435 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dd744d..0x5dd7452 -> pad 0x5dd7477 cleanup
// eh: try 0x5dd747a..0x5dd7484 -> pad 0x5dd748c catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd70eb: jmp 0x5dd741e
// asm:   0x5dd742b: jmp 0x5dd7435
// asm:   0x5dd742d: jmp 0x5dd7435
// asm:   0x5dd742f: jmp 0x5dd7435
// asm:   0x5dd7431: jmp 0x5dd7435
// asm:   0x5dd7433: jmp 0x5dd7435
// asm:   0x5dd7435: mov rbx, rax
// asm:   0x5dd7438: cmp edx, 1
// asm:   0x5dd743b: jne 0x5dd747a
// asm:   0x5dd743d: mov rdi, rbx
// asm:   0x5dd7440: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd7445: mov rbx, qword ptr [rax]
// asm:   0x5dd7448: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5dd744d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd7452: lea rax, [rip + 0x14b6f4f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5dd7459: mov rsi, qword ptr [rax]
// asm:   0x5dd745c: lea rdi, [rsp + 0x50]
// asm:   0x5dd7461: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5dd7466: test rbx, rbx
// asm:   0x5dd7469: je 0x5dd70a8
// asm:   0x5dd746f: mov rdi, rbx
// asm:   0x5dd7472: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd7477: mov rbx, rax
// asm:   0x5dd747a: lea rdi, [rsp + 0x38]
// asm:   0x5dd747f: call 0x2fde790  ; il2cpp_runtime_helper_02fde790()
// asm:   0x5dd7484: mov rdi, rbx
// asm:   0x5dd7487: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd748c: mov rdi, rax
// asm:   0x5dd748f: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_MapEditorCamera__SnapCameraToAxis
               (Cameras_MapEditorCamera_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  long lVar6;
  Utility_BaseComponentCache_o *pUVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  UnityEngine_Transform_o *pUVar10;
  MethodInfo *method_00;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar14;
  undefined4 extraout_XMM0_Dd_03;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o worldPosition;
  UnityEngine_Quaternion_o UVar20;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_90 [16];
  Il2CppObject *pIStack_80;
  undefined1 auStack_78 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_70;
  Il2CppObject *pIStack_68;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [24];
  
  auStack_38._0_4_ = direction.fields.z;
  uStack_40 = in_XMM0_Dc;
  auStack_48 = (undefined1  [8])direction.fields._0_8_;
  uStack_3c = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07548233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07548233 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar3 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar3) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
    }
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  if ((pGVar4 == (GameManagers_BaseGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x38)),
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_05dd741e;
  if ((__this_00->fields)._count == 0) {
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar10 = (pUVar7->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05dd741e;
    UVar18 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar10 = (pUVar7->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05dd741e;
    UVar19 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
    auStack_b8._0_4_ = UVar18.fields.x;
    auStack_b8._4_4_ = UVar18.fields.y;
    auStack_b8._4_4_ = (float)auStack_b8._4_4_ + UVar19.fields.y * 50.0;
    auStack_b8._0_4_ = (float)auStack_b8._0_4_ + UVar19.fields.x * 50.0;
    fStack_b0 = extraout_XMM0_Dc_00 + extraout_XMM0_Dc_01 * 0.0;
    fStack_ac = extraout_XMM0_Dd_00 + extraout_XMM0_Dd_01 * 0.0;
    fStack_bc = UVar18.fields.z + UVar19.fields.z * 50.0;
    pUVar7 = (__this->fields).Cache;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar5->zeroVector).fields.x;
    uVar2 = (pUVar5->zeroVector).fields.y;
    auStack_b8._4_4_ = uVar2;
    auStack_b8._0_4_ = uVar1;
    _fStack_b0 = 0;
    fStack_bc = (pUVar5->zeroVector).fields.z;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_90,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    pIStack_68 = pIStack_80;
    auStack_78 = (undefined1  [8])auStack_90._0_8_;
    pSStack_70 = (System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_90._8_8_;
    auStack_90._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    auStack_90._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78;
    while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78,
                              (MethodInfo_4C456D0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext),
          bVar9) {
      if (pIStack_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (pIStack_68[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar10 = UnityEngine_GameObject__get_transform(pIStack_68[1].monitor,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar18 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      auStack_b8._4_4_ = (float)auStack_b8._4_4_ + UVar18.fields.y;
      auStack_b8._0_4_ = (float)auStack_b8._0_4_ + UVar18.fields.x;
      fStack_b0 = fStack_b0 + extraout_XMM0_Dc;
      fStack_ac = fStack_ac + extraout_XMM0_Dd;
      fStack_bc = fStack_bc + UVar18.fields.z;
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    lVar6 = (*(uint64_t *)((char *)pGVar4 + 0x38));
    if (lVar6 == 0) goto label_05dd741e;
    fVar11 = (float)*(int *)(lVar6 + 0x20);
    fStack_bc = fStack_bc / fVar11;
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar11;
    auVar8._8_4_ = fVar11;
    auVar8._12_4_ = fVar11;
    _auStack_b8 = divps(_auStack_b8,auVar8);
    pUVar7 = (__this->fields).Cache;
  }
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar10 = (pUVar7->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UVar18 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    fVar11 = UVar18.fields.x - (float)auStack_b8._0_4_;
    fVar12 = UVar18.fields.y - (float)auStack_b8._4_4_;
    fVar13 = extraout_XMM0_Dc_02 - fStack_b0;
    fVar14 = extraout_XMM0_Dd_02 - fStack_ac;
    if (g_data_0753e729 == '\0') {
      fStack_58 = fVar11;
      fStack_54 = fVar12;
      fStack_50 = extraout_XMM0_Dc_02 - fStack_b0;
      fStack_4c = extraout_XMM0_Dd_02 - fStack_ac;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      g_data_0753e729 = '\x01';
      fVar11 = fStack_58;
      fVar12 = fStack_54;
      fVar13 = fStack_50;
      fVar14 = fStack_4c;
    }
    fVar15 = UVar18.fields.z - fStack_bc;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      fStack_58 = fVar11;
      fStack_54 = fVar12;
      fStack_50 = fVar13;
      fStack_4c = fVar14;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar11 = fStack_58;
      fVar12 = fStack_54;
    }
    fVar11 = fVar15 * fVar15 + fVar12 * fVar12 + fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    bVar9 = Cameras_MapEditorCamera__AlignedWithWorldAxis(__this,method_00);
    if (!bVar9) {
      Cameras_MapEditorCamera__AlignToWorldAxis(__this,method_00);
      return;
    }
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar10 = (pUVar7->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
      UVar18.fields.z = (float)auStack_38._0_4_;
      UVar18.fields.x = (float)auStack_48._0_4_;
      UVar18.fields.y = (float)auStack_48._4_4_;
      uVar16 = 0;
      uVar17 = 0;
      UVar18 = UnityEngine_Transform__TransformDirection(pUVar10,UVar18,(MethodInfo *)0x0);
      auStack_90._0_8_ = UVar18.fields._0_8_;
      auStack_90._8_4_ = UVar18.fields.z;
      UVar20 = UnityEngine_Quaternion__Internal_AngleAxis
                         (90.0,(UnityEngine_Vector3_o *)auStack_90,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).Cache;
      if (pUVar7 != (Utility_BaseComponentCache_o *)0x0) {
        uStack_40 = uVar16;
        auStack_48 = (undefined1  [8])UVar20.fields._8_8_;
        uStack_3c = uVar17;
        auStack_38._8_4_ = extraout_XMM0_Dc_03;
        auStack_38._0_8_ = UVar20.fields._0_8_;
        auStack_38._12_4_ = extraout_XMM0_Dd_03;
        pUVar10 = (pUVar7->fields).Transform;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UVar20 = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
          fVar12 = UVar20.fields.x;
          fVar13 = UVar20.fields.y;
          fVar14 = UVar20.fields.z;
          fVar15 = UVar20.fields.w;
          UVar20.fields.z =
               ((float)auStack_48._0_4_ * fVar15 + (float)auStack_48._4_4_ * fVar14 +
               fVar13 * (float)auStack_38._0_4_) - fVar12 * (float)auStack_38._4_4_;
          UVar20.fields.w =
               ((fVar15 * (float)auStack_48._4_4_ - (float)auStack_38._0_4_ * fVar12) -
               (float)auStack_38._4_4_ * fVar13) - fVar14 * (float)auStack_48._0_4_;
          UVar20.fields.y =
               ((float)auStack_48._4_4_ * fVar13 + (float)auStack_38._4_4_ * fVar15 +
               (float)auStack_48._0_4_ * fVar12) - fVar14 * (float)auStack_38._0_4_;
          UVar20.fields.x =
               ((float)auStack_48._4_4_ * fVar12 + (float)auStack_38._0_4_ * fVar15 +
               (float)auStack_38._4_4_ * fVar14) - fVar13 * (float)auStack_48._0_4_;
          UnityEngine_Transform__set_rotation(pUVar10,UVar20,(MethodInfo *)0x0);
          pUVar7 = (__this->fields).Cache;
          if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar10 = (pUVar7->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
            UVar18 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
            UVar19.fields.x = (float)auStack_b8._0_4_ - fVar11 * UVar18.fields.x;
            UVar19.fields.y = (float)auStack_b8._4_4_ - fVar11 * UVar18.fields.y;
            UVar19.fields.z = fStack_bc - UVar18.fields.z * fVar11;
            UnityEngine_Transform__set_position(pUVar10,UVar19,(MethodInfo *)0x0);
            pUVar7 = (__this->fields).Cache;
            if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar10 = (pUVar7->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
              worldPosition.fields.z = fStack_bc;
              worldPosition.fields.x = (float)auStack_b8._0_4_;
              worldPosition.fields.y = (float)auStack_b8._4_4_;
              UnityEngine_Transform__LookAt_692e330(pUVar10,worldPosition,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05dd741e:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_MapEditorCamera__SetDefaultCameraPosition (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd7f20
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd7fb7: lea rdi, [r14 + 0x48]
// asm:   0x5dd7fbb: jmp 0x5dd8042
// asm:   0x5dd813e: mov rdi, r14
// asm:   0x5dd8141: jmp 0x5dd81f7

void Cameras_MapEditorCamera__SetDefaultCameraPosition(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UI_MapEditorMenu_c *pUVar6;
  bool bVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar8;
  UI_MapEditorMenu_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Quaternion_Fields value;
  UnityEngine_Vector3_o UVar11;
  
  if (Il2CppMethodInitialized_07548234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548234 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dd801a;
label_05dd7f4c:
    pUVar9 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar9 != (UI_MapEditorMenu_o *)0x0) goto label_05dd7f60;
label_05dd8036:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dd7f4c;
label_05dd801a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar9 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar9 == (UI_MapEditorMenu_o *)0x0) goto label_05dd8036;
label_05dd7f60:
    pUVar6 = TypeInfo_UI_MapEditorMenu;
    bVar3 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar9->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((UI_BaseMenu_c *)pUVar9->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
label_05dd8208:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar9,pUVar6);
    }
    (__this->fields)._menu = pUVar9;
    if (((((UI_BaseMenu_c *)pUVar9->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((UI_BaseMenu_c *)pUVar9->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)pUVar6))
    goto label_05dd8208;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
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
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if (bVar7) {
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) && (x != (UnityEngine_Object_o *)0x0)) {
      pUVar10 = (pUVar4->fields).Transform;
      pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
         (UVar11 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_position(pUVar10,UVar11,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Cache;
        if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar10 = (pUVar4->fields).Transform;
          pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
          if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
             (value = (UnityEngine_Quaternion_Fields)
                      UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0),
             pUVar10 != (UnityEngine_Transform_o *)0x0)) goto label_05dd81f7;
        }
      }
    }
  }
  else if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar10 = (pUVar4->fields).Transform;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar11.fields.z = (pUVar5->upVector).fields.z * 100.0;
      uVar1 = (pUVar5->upVector).fields.x;
      uVar2 = (pUVar5->upVector).fields.y;
      UVar11.fields.x = (float)uVar1 * 100.0;
      UVar11.fields.y = (float)uVar2 * 100.0;
      UnityEngine_Transform__set_position(pUVar10,UVar11,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).Cache;
      if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar10 = (pUVar4->fields).Transform;
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          value = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
label_05dd81f7:
          UnityEngine_Transform__set_rotation(pUVar10,(UnityEngine_Quaternion_o)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$.ctor
// il2cpp: void Cameras_MapEditorCamera___ctor (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x5dd8220

void Cameras_MapEditorCamera___ctor(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


