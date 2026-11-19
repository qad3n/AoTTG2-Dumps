// Type: UI.MobileCameraInput
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileCameraInput.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileCameraInput$$UpdateGyroscopeState
// il2cpp: void UI_MobileCameraInput__UpdateGyroscopeState (const MethodInfo* method);
// 0x5c71d70

void UI_MobileCameraInput__UpdateGyroscopeState(MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  bool value;
  UnityEngine_Gyroscope_o *__this;
  
  if (Il2CppMethodInitialized_0754790e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0754790e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).MobileGyroscope, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
label_05c71e58:
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._value == false) {
    value = false;
  }
  else {
    value = false;
    bVar3 = UnityEngine_SystemInfo__get_supportsGyroscope((MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
      }
      value = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
    }
  }
  if (TypeInfo_UI_MobileCameraInput->static_fields->_gyroWasEnabled != value) {
    __this = UnityEngine_Input__get_gyro((MethodInfo *)0x0);
    if (__this == (UnityEngine_Gyroscope_o *)0x0) goto label_05c71e58;
    UnityEngine_Gyroscope__set_enabled(__this,value,(MethodInfo *)0x0);
    TypeInfo_UI_MobileCameraInput->static_fields->_gyroWasEnabled = value;
  }
  return;
}


// UI.MobileCameraInput$$GetLookInput
// il2cpp: void UI_MobileCameraInput__GetLookInput (float sensitivity, int32_t invertY, float mobileLookMultiplier, float* inputX, float* inputY, const MethodInfo* method);
// 0x5c71e60

void UI_MobileCameraInput__GetLookInput
               (float sensitivity,int32_t invertY,float mobileLookMultiplier,float *inputX,float *inputY,
               MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_Vector2_o UVar3;
  int32_t iVar4;
  UnityEngine_Gyroscope_o *__this;
  UI_MobileCameraInput_c **method_00;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_0754790f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754790f = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  method_00 = (UI_MobileCameraInput_c **)0x0;
  UVar3 = Settings_MobileInputBridge__ConsumeLookDelta((MethodInfo *)0x0);
  *inputX = UVar3.fields.x * mobileLookMultiplier * sensitivity;
  *inputY = -UVar3.fields.y * mobileLookMultiplier * sensitivity * (float)invertY;
  if (g_data_07547915 == '\0') {
    method_00 = &TypeInfo_UI_MobileCameraInput;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    g_data_07547915 = '\x01';
  }
  UI_MobileCameraInput__UpdateGyroscopeState((MethodInfo *)method_00);
  if (TypeInfo_UI_MobileCameraInput->static_fields->_gyroWasEnabled == false) {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UVar7 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  }
  else {
    __this = UnityEngine_Input__get_gyro((MethodInfo *)0x0);
    if (__this == (UnityEngine_Gyroscope_o *)0x0) goto label_05c72085;
    UVar8 = UnityEngine_Gyroscope__get_rotationRateUnbiased(__this,(MethodInfo *)0x0);
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar5 * UVar8.fields.x * 57.29578;
    fVar5 = fVar5 * UVar8.fields.y * 57.29578;
    iVar4 = UnityEngine_Screen__get_orientation((MethodInfo *)0x0);
    if (iVar4 == 1) {
      UVar7.x = -fVar6;
      UVar7.y = -fVar5;
    }
    else if (iVar4 == 2) {
      UVar7.y = fVar5;
      UVar7.x = fVar6;
    }
    else {
      if (iVar4 == 4) {
        fVar6 = -fVar6;
      }
      else {
        fVar5 = -fVar5;
      }
      UVar7.y = fVar6;
      UVar7.x = fVar5;
    }
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).MobileGyroscopeHorizontalSensitivity, pSVar2 != (Settings_FloatSetting_o *)0x0
     )) {
    *inputX = UVar7.x * 10.0 * (pSVar2->fields)._value + *inputX;
    pSVar2 = (pSVar1->fields).MobileGyroscopeVerticalSensitivity;
    if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
      *inputY = UVar7.y * -10.0 * (pSVar2->fields)._value * (float)invertY + *inputY;
      return;
    }
  }
label_05c72085:
  ThrowNullReferenceException();
}


// UI.MobileCameraInput$$GetFreeCamLookInput
// il2cpp: void UI_MobileCameraInput__GetFreeCamLookInput (float camSpeed, float* inputX, float* inputY, const MethodInfo* method);
// 0x5c721a0

void UI_MobileCameraInput__GetFreeCamLookInput(float camSpeed,float *inputX,float *inputY,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_Vector2_o UVar3;
  int32_t iVar4;
  UnityEngine_Gyroscope_o *__this;
  UI_MobileCameraInput_c **method_00;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_07547910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07547910 = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  method_00 = (UI_MobileCameraInput_c **)0x0;
  UVar3 = Settings_MobileInputBridge__ConsumeLookDelta((MethodInfo *)0x0);
  *inputX = UVar3.fields.x * 0.1 * camSpeed;
  *inputY = UVar3.fields.y * 0.1 * camSpeed;
  if (g_data_07547915 == '\0') {
    method_00 = &TypeInfo_UI_MobileCameraInput;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    g_data_07547915 = '\x01';
  }
  UI_MobileCameraInput__UpdateGyroscopeState((MethodInfo *)method_00);
  if (TypeInfo_UI_MobileCameraInput->static_fields->_gyroWasEnabled == false) {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UVar7 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  }
  else {
    __this = UnityEngine_Input__get_gyro((MethodInfo *)0x0);
    if (__this == (UnityEngine_Gyroscope_o *)0x0) goto label_05c72397;
    UVar8 = UnityEngine_Gyroscope__get_rotationRateUnbiased(__this,(MethodInfo *)0x0);
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar5 * UVar8.fields.x * 57.29578;
    fVar5 = fVar5 * UVar8.fields.y * 57.29578;
    iVar4 = UnityEngine_Screen__get_orientation((MethodInfo *)0x0);
    if (iVar4 == 1) {
      UVar7.x = -fVar6;
      UVar7.y = -fVar5;
    }
    else if (iVar4 == 2) {
      UVar7.y = fVar5;
      UVar7.x = fVar6;
    }
    else {
      if (iVar4 == 4) {
        fVar6 = -fVar6;
      }
      else {
        fVar5 = -fVar5;
      }
      UVar7.y = fVar6;
      UVar7.x = fVar5;
    }
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).MobileGyroscopeHorizontalSensitivity, pSVar2 != (Settings_FloatSetting_o *)0x0
     )) {
    *inputX = UVar7.x * 0.1 * (pSVar2->fields)._value + *inputX;
    pSVar2 = (pSVar1->fields).MobileGyroscopeVerticalSensitivity;
    if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
      *inputY = UVar7.y * -0.1 * (pSVar2->fields)._value + *inputY;
      return;
    }
  }
label_05c72397:
  ThrowNullReferenceException();
}


// UI.MobileCameraInput$$TryApplyOriginalRelativeMovement
// il2cpp: bool UI_MobileCameraInput__TryApplyOriginalRelativeMovement (UnityEngine_Transform_o* cameraTransform, float sensitivity, int32_t invertY, float mobileLookMultiplier, float deadzone, float cameraSpeed, const MethodInfo* method);
// 0x5c723a0

bool UI_MobileCameraInput__TryApplyOriginalRelativeMovement
               (UnityEngine_Transform_o *cameraTransform,float sensitivity,int32_t invertY,
               float mobileLookMultiplier,float deadzone,float cameraSpeed,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  float fVar7;
  float fVar10;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_Fields UVar9;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o euler_00;
  float fStack_a4;
  float fStack_94;
  undefined8 uStack_58;
  UnityEngine_Quaternion_o UStack_48;
  UnityEngine_Vector3_Fields UStack_30;
  
  if (Il2CppMethodInitialized_07547911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547911 = '\x01';
  }
  UStack_48.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  bVar4 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)cameraTransform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return false;
  }
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar7 = (float)iVar5;
  fVar10 = (float)iVar6;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  UVar8 = Settings_MobileInputBridge__ConsumeLookDelta((MethodInfo *)0x0);
  UVar1 = (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields;
  UVar9.x = sensitivity * mobileLookMultiplier * UVar8.fields.x + UVar1.x;
  UVar9.y = sensitivity * mobileLookMultiplier * (float)invertY * UVar8.fields.y + UVar1.y;
  (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields = UVar9;
  UVar1 = (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar7;
  auVar3._8_8_ = 0;
  auVar11._8_8_ = 0;
  auVar11._0_4_ = UVar1.x;
  auVar11._4_4_ = UVar1.y;
  auVar11 = minps(auVar3,auVar11);
  fVar12 = (float)(-(uint)(0.0 <= UVar1.x) & auVar11._0_4_);
  UVar1.y = (float)(-(uint)(0.0 <= UVar1.y) & auVar11._4_4_);
  UVar1.x = fVar12;
  (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields = UVar1;
  fVar13 = (1.0 - deadzone) * 0.5 * fVar7;
  if (fVar13 <= fVar12) {
    fVar13 = (deadzone + 1.0) * 0.5 * fVar7;
    if (fVar12 <= fVar13) {
      if (cameraTransform == (UnityEngine_Transform_o *)0x0) {
label_05c7279b:
        ThrowNullReferenceException();
      }
      goto label_05c726a2;
    }
    if (cameraTransform == (UnityEngine_Transform_o *)0x0) goto label_05c7279b;
    fVar13 = fVar12 - fVar13;
    UVar14 = UnityEngine_Transform__get_position(cameraTransform,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    uStack_58._0_4_ = (pUVar2->upVector).fields.x;
    uStack_58._4_4_ = (pUVar2->upVector).fields.y;
    fStack_a4 = (pUVar2->upVector).fields.z;
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar12 = sensitivity * fVar12 * 62.0;
  }
  else {
    if (cameraTransform == (UnityEngine_Transform_o *)0x0) goto label_05c7279b;
    fVar13 = fVar13 - fVar12;
    UVar14 = UnityEngine_Transform__get_position(cameraTransform,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    uStack_58._0_4_ = (pUVar2->upVector).fields.x;
    uStack_58._4_4_ = (pUVar2->upVector).fields.y;
    fStack_a4 = (pUVar2->upVector).fields.z;
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar12 = sensitivity * fVar12 * -62.0;
  }
  UVar15.fields.z = fStack_a4;
  UVar15.fields.x = (float)(undefined4)uStack_58;
  UVar15.fields.y = (float)uStack_58._4_4_;
  UnityEngine_Transform__RotateAround
            (cameraTransform,UVar14,UVar15,(fVar13 / fVar7) * cameraSpeed * fVar12,(MethodInfo *)0x0);
label_05c726a2:
  fVar7 = (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields.y;
  UStack_48 = UnityEngine_Transform__get_rotation(cameraTransform,(MethodInfo *)0x0);
  UVar14 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_48,(MethodInfo *)0x0);
  euler.fields.x = UVar14.fields.x * 57.29578;
  euler.fields.y = UVar14.fields.y * 57.29578;
  euler.fields.z = UVar14.fields.z * 57.29578;
  UVar14 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  UStack_48 = UnityEngine_Transform__get_rotation(cameraTransform,(MethodInfo *)0x0);
  UVar15 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_48,(MethodInfo *)0x0);
  euler_00.fields.x = UVar15.fields.x * 57.29578;
  euler_00.fields.y = UVar15.fields.y * 57.29578;
  euler_00.fields.z = UVar15.fields.z * 57.29578;
  UVar15 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
  fStack_94 = UVar14.fields.y;
  UStack_30.x = (((fVar10 * 0.6 - fVar7) * 280.0 * 0.5) / fVar10) * 0.017453292;
  UStack_30.y = fStack_94 * 0.017453292;
  UStack_30.z = UVar15.fields.z * 0.017453292;
  value = UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&UStack_30,(MethodInfo *)0x0)
  ;
  UnityEngine_Transform__set_rotation(cameraTransform,value,(MethodInfo *)0x0);
  return true;
}


// UI.MobileCameraInput$$TryHandleTouchRotation
// il2cpp: bool UI_MobileCameraInput__TryHandleTouchRotation (UnityEngine_Transform_o* cameraTransform, UnityEngine_Vector3_o anchorPoint, UI_CharacterEditorMenu_o* menu, const MethodInfo* method);
// 0x5c727c0

bool UI_MobileCameraInput__TryHandleTouchRotation
               (UnityEngine_Transform_o *cameraTransform,UnityEngine_Vector3_o anchorPoint,
               UI_CharacterEditorMenu_o *menu,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  undefined8 uVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_EventSystems_EventSystem_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar10;
  float fStack_108;
  UnityEngine_Touch_Fields UStack_e8;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  UnityEngine_Touch_Fields UStack_78;
  
  if (Il2CppMethodInitialized_07547912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547912 = '\x01';
  }
  iVar4 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
  if (iVar4 != 0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)cameraTransform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) goto label_05c72ab5;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)menu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) goto label_05c72ab5;
    UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)&UStack_78,0,(MethodInfo *)0x0);
    UStack_e8.m_AzimuthAngle = UStack_78.m_AzimuthAngle;
    UStack_e8.m_maximumPossiblePressure = UStack_78.m_maximumPossiblePressure;
    UStack_e8.m_Radius = UStack_78.m_Radius;
    UStack_e8.m_RadiusVariance = UStack_78.m_RadiusVariance;
    UStack_e8.m_AltitudeAngle = UStack_78.m_AltitudeAngle;
    UStack_e8.m_TapCount = UStack_78.m_TapCount;
    UStack_e8.m_Phase = UStack_78.m_Phase;
    UStack_e8.m_Type = UStack_78.m_Type;
    UStack_e8.m_Pressure = UStack_78.m_Pressure;
    UStack_e8.m_RawPosition.fields.y = UStack_78.m_RawPosition.fields.y;
    UStack_e8.m_PositionDelta.fields.x = UStack_78.m_PositionDelta.fields.x;
    UStack_e8.m_PositionDelta.fields.y = UStack_78.m_PositionDelta.fields.y;
    UStack_e8.m_TimeDelta = UStack_78.m_TimeDelta;
    UStack_e8.m_FingerId = UStack_78.m_FingerId;
    UStack_e8.m_Position.fields.x = UStack_78.m_Position.fields.x;
    UStack_e8.m_Position.fields.y = UStack_78.m_Position.fields.y;
    UStack_e8.m_RawPosition.fields.x = UStack_78.m_RawPosition.fields.x;
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      iVar5 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&UStack_e8,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_05c72acc;
      bVar3 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject_6d09e40
                        (pUVar6,iVar5,(MethodInfo *)0x0);
      if (bVar3) goto label_05c72ab5;
    }
    UVar1 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&UStack_e8,(MethodInfo *)0x0);
    if (menu == (UI_CharacterEditorMenu_o *)0x0) {
label_05c72acc:
      ThrowNullReferenceException();
    }
    fVar7 = (*(menu->klass->vtable)._11_GetMinMouseX.methodPtr)
                      (menu,(menu->klass->vtable)._11_GetMinMouseX.method);
    fStack_108 = UVar1.fields.x;
    if (fVar7 <= fStack_108) {
      fVar7 = fStack_108;
      fVar8 = (*(menu->klass->vtable)._12_GetMaxMouseX.methodPtr)
                        (menu,(menu->klass->vtable)._12_GetMaxMouseX.method);
      if (fStack_108 <= fVar8) {
        iVar5 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&UStack_e8,(MethodInfo *)0x0);
        if (iVar5 == 1) {
          UVar1 = UnityEngine_Touch__get_deltaPosition((UnityEngine_Touch_o *)&UStack_e8,(MethodInfo *)0x0);
          auStack_88._8_4_ = extraout_XMM0_Dc;
          auStack_88._0_4_ = UVar1.fields.x;
          auStack_88._4_4_ = UVar1.fields.y;
          auStack_88._12_4_ = extraout_XMM0_Dd;
          if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
          }
          fVar8 = Utility_MobileFullscreenUtility__GetResolutionInputScale((MethodInfo *)0x0);
          fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          uVar2 = il2cpp_runtime_helper_05bbcf10(0);
          if (cameraTransform == (UnityEngine_Transform_o *)0x0) goto label_05c72acc;
          fStack_98 = (float)auStack_88._4_4_ * fVar8;
          fStack_94 = (float)auStack_88._4_4_;
          fStack_90 = (float)auStack_88._4_4_;
          fStack_8c = (float)auStack_88._4_4_;
          UVar10.fields.z = fVar7;
          UVar10.fields.x = (float)(int)uVar2;
          UVar10.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
          UnityEngine_Transform__RotateAround
                    (cameraTransform,anchorPoint,UVar10,fVar8 * (float)auStack_88._0_4_ * 0.05 * fVar9 * 200.0
                     ,(MethodInfo *)0x0);
          UVar10 = UnityEngine_Transform__get_right(cameraTransform,(MethodInfo *)0x0);
          UnityEngine_Transform__RotateAround
                    (cameraTransform,anchorPoint,UVar10,fStack_98 * -0.05 * fVar9 * 200.0,(MethodInfo *)0x0);
        }
      }
    }
  }
label_05c72ab5:
  return iVar4 != 0;
}


// UI.MobileCameraInput$$GetOriginalVirtualCursorPosition
// il2cpp: UnityEngine_Vector3_o UI_MobileCameraInput__GetOriginalVirtualCursorPosition (const MethodInfo* method);
// 0x5c72b40

UnityEngine_Vector3_o UI_MobileCameraInput__GetOriginalVirtualCursorPosition(MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (Il2CppMethodInitialized_07547913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    Il2CppMethodInitialized_07547913 = '\x01';
  }
  UVar1.fields.z = 0.0;
  UVar1.fields._0_8_ = (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// UI.MobileCameraInput$$ResetOriginalVirtualCursor
// il2cpp: void UI_MobileCameraInput__ResetOriginalVirtualCursor (const MethodInfo* method);
// 0x5c72b80

void UI_MobileCameraInput__ResetOriginalVirtualCursor(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  if (Il2CppMethodInitialized_07547914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    Il2CppMethodInitialized_07547914 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar3.x = (float)iVar1 * 0.5;
  UVar3.y = (float)iVar2 * 0.6;
  (TypeInfo_UI_MobileCameraInput->static_fields->_originalVirtualCursor).fields = UVar3;
  return;
}


// UI.MobileCameraInput$$GetSensitivityDeltaTime
// il2cpp: float UI_MobileCameraInput__GetSensitivityDeltaTime (float sensitivity, const MethodInfo* method);
// 0x5c727a0

float UI_MobileCameraInput__GetSensitivityDeltaTime(float sensitivity,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1 * sensitivity * 62.0;
}


// UI.MobileCameraInput$$IsInsidePreviewArea
// il2cpp: bool UI_MobileCameraInput__IsInsidePreviewArea (UI_CharacterEditorMenu_o* menu, float screenX, const MethodInfo* method);
// 0x5c72ae0

bool UI_MobileCameraInput__IsInsidePreviewArea
               (UI_CharacterEditorMenu_o *menu,float screenX,MethodInfo *method)

{
  float fVar1;
  
  if (menu == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = (*(menu->klass->vtable)._11_GetMinMouseX.methodPtr)
                    (menu,(menu->klass->vtable)._11_GetMinMouseX.method);
  if (screenX < fVar1) {
    return false;
  }
  fVar1 = (*(menu->klass->vtable)._12_GetMaxMouseX.methodPtr)
                    (menu,(menu->klass->vtable)._12_GetMaxMouseX.method);
  return screenX <= fVar1;
}


// UI.MobileCameraInput$$GetGyroscopeLookDelta
// il2cpp: UnityEngine_Vector2_o UI_MobileCameraInput__GetGyroscopeLookDelta (const MethodInfo* method);
// 0x5c72090

UnityEngine_Vector2_o UI_MobileCameraInput__GetGyroscopeLookDelta(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  int32_t iVar2;
  UnityEngine_Gyroscope_o *__this;
  UI_MobileCameraInput_c **ppUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  if (g_data_07547915 == '\0') {
    ppUVar3 = &TypeInfo_UI_MobileCameraInput;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileCameraInput);
    g_data_07547915 = '\x01';
    method = (MethodInfo *)ppUVar3;
  }
  UI_MobileCameraInput__UpdateGyroscopeState(method);
  if (TypeInfo_UI_MobileCameraInput->static_fields->_gyroWasEnabled == false) {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    return (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  }
  __this = UnityEngine_Input__get_gyro((MethodInfo *)0x0);
  if (__this == (UnityEngine_Gyroscope_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar6 = UnityEngine_Gyroscope__get_rotationRateUnbiased(__this,(MethodInfo *)0x0);
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar4 * UVar6.fields.x * 57.29578;
  fVar4 = fVar4 * UVar6.fields.y * 57.29578;
  iVar2 = UnityEngine_Screen__get_orientation((MethodInfo *)0x0);
  if (iVar2 == 1) {
    return (UnityEngine_Vector2_o)(CONCAT44(fVar4,fVar5) ^ 0x8000000080000000);
  }
  if (iVar2 == 2) {
    UVar1.y = fVar4;
    UVar1.x = fVar5;
    return (UnityEngine_Vector2_o)UVar1;
  }
  if (iVar2 == 4) {
    return (UnityEngine_Vector2_o)(CONCAT44(fVar5,fVar4) ^ 0x8000000000000000);
  }
  return (UnityEngine_Vector2_o)(CONCAT44(fVar5,fVar4) ^ 0x80000000);
}


