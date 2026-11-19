// Type: UI.MobileMapEditorPointer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileMapEditorPointer.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileMapEditorPointer$$get_Enabled
// il2cpp: bool UI_MobileMapEditorPointer__get_Enabled (const MethodInfo* method);
// 0x5cb1780

bool UI_MobileMapEditorPointer__get_Enabled(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07547aa2 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    bVar2 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
    return bVar2;
  }
  bVar2 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  return bVar2;
}


// UI.MobileMapEditorPointer$$TryGetSelectDown
// il2cpp: bool UI_MobileMapEditorPointer__TryGetSelectDown (UI_MobileMapEditorPointer_o* __this, UnityEngine_Vector3_o* position, const MethodInfo* method);
// 0x5cb17e0

bool UI_MobileMapEditorPointer__TryGetSelectDown
               (UI_MobileMapEditorPointer_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  bool bVar3;
  int32_t iVar4;
  int index;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Touch_Fields local_c8;
  UnityEngine_Touch_Fields local_78;
  
  if (Il2CppMethodInitialized_07547aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_07547aa3 = '\x01';
  }
  local_c8.m_maximumPossiblePressure = 0.0;
  local_c8.m_Radius = 0.0;
  local_c8.m_RadiusVariance = 0.0;
  local_c8.m_AltitudeAngle = 0.0;
  local_c8.m_TapCount = 0;
  local_c8.m_Phase = 0;
  local_c8.m_Type = 0;
  local_c8.m_Pressure = 0.0;
  local_c8.m_RawPosition.fields.y = 0.0;
  local_c8.m_PositionDelta.fields.x = 0.0;
  local_c8.m_PositionDelta.fields.y = 0.0;
  local_c8.m_TimeDelta = 0.0;
  local_c8.m_FingerId = 0;
  local_c8.m_Position.fields.x = 0.0;
  local_c8.m_Position.fields.y = 0.0;
  local_c8.m_RawPosition.fields.x = 0.0;
  local_c8.m_AzimuthAngle = 0.0;
  UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (position->fields).x = UVar5.fields.x;
  (position->fields).y = UVar5.fields.y;
  (position->fields).z = UVar5.fields.z;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  index = 0;
  bVar3 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (bVar3) {
    index = 0;
    iVar4 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    if (0 < iVar4) {
      do {
        UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)&local_78,index,(MethodInfo *)0x0);
        local_c8.m_AzimuthAngle = local_78.m_AzimuthAngle;
        local_c8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
        local_c8.m_Radius = local_78.m_Radius;
        local_c8.m_RadiusVariance = local_78.m_RadiusVariance;
        local_c8.m_AltitudeAngle = local_78.m_AltitudeAngle;
        local_c8.m_TapCount = local_78.m_TapCount;
        local_c8.m_Phase = local_78.m_Phase;
        local_c8.m_Type = local_78.m_Type;
        local_c8.m_Pressure = local_78.m_Pressure;
        local_c8.m_RawPosition.fields.y = local_78.m_RawPosition.fields.y;
        local_c8.m_PositionDelta.fields.x = local_78.m_PositionDelta.fields.x;
        local_c8.m_PositionDelta.fields.y = local_78.m_PositionDelta.fields.y;
        local_c8.m_TimeDelta = local_78.m_TimeDelta;
        local_c8.m_FingerId = local_78.m_FingerId;
        local_c8.m_Position.fields.x = local_78.m_Position.fields.x;
        local_c8.m_Position.fields.y = local_78.m_Position.fields.y;
        local_c8.m_RawPosition.fields.x = local_78.m_RawPosition.fields.x;
        iVar4 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
        if (iVar4 == 0) {
          method_00 = (MethodInfo *)0x0;
          iVar4 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
          }
          bVar3 = UI_MobileMapEditorPointer__IsTouchOverUI(iVar4,method_00);
          if (!bVar3) {
            iVar4 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
            (__this->fields)._selectPointerId = iVar4;
            UVar1 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
            (position->fields).x = UVar1.fields.x;
            (position->fields).y = UVar1.fields.y;
            (position->fields).z = 0.0;
            fVar2 = (position->fields).y;
            (__this->fields)._lastPosition.fields.x = (position->fields).x;
            (__this->fields)._lastPosition.fields.y = fVar2;
            (__this->fields)._lastPosition.fields.z = 0.0;
            index = 1;
            goto label_05cb1986;
          }
        }
        index = index + 1;
        iVar4 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      } while (index < iVar4);
      index = 0;
    }
  }
label_05cb1986:
  return SUB41(index,0);
}


// UI.MobileMapEditorPointer$$TryGetSelectUp
// il2cpp: bool UI_MobileMapEditorPointer__TryGetSelectUp (UI_MobileMapEditorPointer_o* __this, UnityEngine_Vector3_o* releasePosition, const MethodInfo* method);
// 0x5cb1a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb1aee: nop 

bool UI_MobileMapEditorPointer__TryGetSelectUp
               (UI_MobileMapEditorPointer_o *__this,UnityEngine_Vector3_o *releasePosition,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int32_t iVar5;
  bool bVar6;
  int index;
  UnityEngine_Touch_Fields local_b8;
  UnityEngine_Touch_Fields local_70;
  
  if (Il2CppMethodInitialized_07547aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07547aa4 = '\x01';
  }
  local_b8.m_maximumPossiblePressure = 0.0;
  local_b8.m_Radius = 0.0;
  local_b8.m_RadiusVariance = 0.0;
  local_b8.m_AltitudeAngle = 0.0;
  local_b8.m_TapCount = 0;
  local_b8.m_Phase = 0;
  local_b8.m_Type = 0;
  local_b8.m_Pressure = 0.0;
  local_b8.m_RawPosition.fields.y = 0.0;
  local_b8.m_PositionDelta.fields.x = 0.0;
  local_b8.m_PositionDelta.fields.y = 0.0;
  local_b8.m_TimeDelta = 0.0;
  local_b8.m_FingerId = 0;
  local_b8.m_Position.fields.x = 0.0;
  local_b8.m_Position.fields.y = 0.0;
  local_b8.m_RawPosition.fields.x = 0.0;
  local_b8.m_AzimuthAngle = 0.0;
  fVar2 = (__this->fields)._lastPosition.fields.x;
  fVar3 = (__this->fields)._lastPosition.fields.y;
  (releasePosition->fields).z = (__this->fields)._lastPosition.fields.z;
  (releasePosition->fields).x = fVar2;
  (releasePosition->fields).y = fVar3;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  bVar6 = false;
  bVar4 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields)._selectPointerId == -0x80000000) {
      bVar6 = false;
    }
    else {
      index = 0;
      iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      if (0 < iVar5) {
        do {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)&local_70,index,(MethodInfo *)0x0);
          local_b8.m_AzimuthAngle = local_70.m_AzimuthAngle;
          local_b8.m_maximumPossiblePressure = local_70.m_maximumPossiblePressure;
          local_b8.m_Radius = local_70.m_Radius;
          local_b8.m_RadiusVariance = local_70.m_RadiusVariance;
          local_b8.m_AltitudeAngle = local_70.m_AltitudeAngle;
          local_b8.m_TapCount = local_70.m_TapCount;
          local_b8.m_Phase = local_70.m_Phase;
          local_b8.m_Type = local_70.m_Type;
          local_b8.m_Pressure = local_70.m_Pressure;
          local_b8.m_RawPosition.fields.y = local_70.m_RawPosition.fields.y;
          local_b8.m_PositionDelta.fields.x = local_70.m_PositionDelta.fields.x;
          local_b8.m_PositionDelta.fields.y = local_70.m_PositionDelta.fields.y;
          local_b8.m_TimeDelta = local_70.m_TimeDelta;
          local_b8.m_FingerId = local_70.m_FingerId;
          local_b8.m_Position.fields.x = local_70.m_Position.fields.x;
          local_b8.m_Position.fields.y = local_70.m_Position.fields.y;
          local_b8.m_RawPosition.fields.x = local_70.m_RawPosition.fields.x;
          iVar5 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
          if (iVar5 == (__this->fields)._selectPointerId) {
            UVar1 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
            (__this->fields)._lastPosition.fields.x = UVar1.fields.x;
            (__this->fields)._lastPosition.fields.y = UVar1.fields.y;
            (__this->fields)._lastPosition.fields.z = 0.0;
            iVar5 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
            if ((iVar5 != 3) &&
               (iVar5 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0),
               iVar5 != 4)) {
              return false;
            }
            UVar1 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
            (releasePosition->fields).x = UVar1.fields.x;
            (releasePosition->fields).y = UVar1.fields.y;
            (releasePosition->fields).z = 0.0;
            (__this->fields)._selectPointerId = -0x80000000;
            goto label_05cb1bbf;
          }
          index = index + 1;
          iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
        } while (index < iVar5);
      }
      (__this->fields)._selectPointerId = -0x80000000;
      fVar2 = (__this->fields)._lastPosition.fields.x;
      fVar3 = (__this->fields)._lastPosition.fields.y;
      (releasePosition->fields).z = (__this->fields)._lastPosition.fields.z;
      (releasePosition->fields).x = fVar2;
      (releasePosition->fields).y = fVar3;
label_05cb1bbf:
      bVar6 = true;
    }
  }
  return bVar6;
}


// UI.MobileMapEditorPointer$$TryGetPointerPosition
// il2cpp: bool UI_MobileMapEditorPointer__TryGetPointerPosition (UI_MobileMapEditorPointer_o* __this, UnityEngine_Vector3_o* position, const MethodInfo* method);
// 0x5cb1be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb1d13: jmp 0x5cb1d3f

bool UI_MobileMapEditorPointer__TryGetPointerPosition
               (UI_MobileMapEditorPointer_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int32_t iVar5;
  int index;
  bool bVar6;
  UnityEngine_Touch_Fields local_c8;
  UnityEngine_Touch_Fields local_78;
  
  if (Il2CppMethodInitialized_07547aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07547aa5 = '\x01';
  }
  local_c8.m_maximumPossiblePressure = 0.0;
  local_c8.m_Radius = 0.0;
  local_c8.m_RadiusVariance = 0.0;
  local_c8.m_AltitudeAngle = 0.0;
  local_c8.m_TapCount = 0;
  local_c8.m_Phase = 0;
  local_c8.m_Type = 0;
  local_c8.m_Pressure = 0.0;
  local_c8.m_RawPosition.fields.y = 0.0;
  local_c8.m_PositionDelta.fields.x = 0.0;
  local_c8.m_PositionDelta.fields.y = 0.0;
  local_c8.m_TimeDelta = 0.0;
  local_c8.m_FingerId = 0;
  local_c8.m_Position.fields.x = 0.0;
  local_c8.m_Position.fields.y = 0.0;
  local_c8.m_RawPosition.fields.x = 0.0;
  local_c8.m_AzimuthAngle = 0.0;
  fVar2 = (__this->fields)._lastPosition.fields.x;
  fVar3 = (__this->fields)._lastPosition.fields.y;
  (position->fields).z = (__this->fields)._lastPosition.fields.z;
  (position->fields).x = fVar2;
  (position->fields).y = fVar3;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  bVar6 = false;
  bVar4 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields)._selectPointerId == -0x80000000) {
      bVar6 = false;
    }
    else {
      index = 0;
      iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      bVar6 = true;
      if (0 < iVar5) {
        do {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)&local_78,index,(MethodInfo *)0x0);
          local_c8.m_AzimuthAngle = local_78.m_AzimuthAngle;
          local_c8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
          local_c8.m_Radius = local_78.m_Radius;
          local_c8.m_RadiusVariance = local_78.m_RadiusVariance;
          local_c8.m_AltitudeAngle = local_78.m_AltitudeAngle;
          local_c8.m_TapCount = local_78.m_TapCount;
          local_c8.m_Phase = local_78.m_Phase;
          local_c8.m_Type = local_78.m_Type;
          local_c8.m_Pressure = local_78.m_Pressure;
          local_c8.m_RawPosition.fields.y = local_78.m_RawPosition.fields.y;
          local_c8.m_PositionDelta.fields.x = local_78.m_PositionDelta.fields.x;
          local_c8.m_PositionDelta.fields.y = local_78.m_PositionDelta.fields.y;
          local_c8.m_TimeDelta = local_78.m_TimeDelta;
          local_c8.m_FingerId = local_78.m_FingerId;
          local_c8.m_Position.fields.x = local_78.m_Position.fields.x;
          local_c8.m_Position.fields.y = local_78.m_Position.fields.y;
          local_c8.m_RawPosition.fields.x = local_78.m_RawPosition.fields.x;
          iVar5 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
          if (iVar5 == (__this->fields)._selectPointerId) {
            UVar1 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
            (position->fields).x = UVar1.fields.x;
            (position->fields).y = UVar1.fields.y;
            (position->fields).z = 0.0;
            fVar2 = (position->fields).y;
            (__this->fields)._lastPosition.fields.x = (position->fields).x;
            (__this->fields)._lastPosition.fields.y = fVar2;
            (__this->fields)._lastPosition.fields.z = 0.0;
            return true;
          }
          index = index + 1;
          iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
        } while (index < iVar5);
      }
    }
  }
  return bVar6;
}


// UI.MobileMapEditorPointer$$TryGetGizmoPointerDown
// il2cpp: bool UI_MobileMapEditorPointer__TryGetGizmoPointerDown (UnityEngine_Vector3_o* position, const MethodInfo* method);
// 0x5cb1d60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb1e17: jmp 0x5cb1ef2

bool UI_MobileMapEditorPointer__TryGetGizmoPointerDown(UnityEngine_Vector3_o *position,MethodInfo *method)

{
  UI_MobileMapEditorPointer_StaticFields *pUVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  bool bVar4;
  int32_t iVar5;
  int iVar6;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Touch_Fields local_c8;
  UnityEngine_Touch_Fields local_78;
  
  if (Il2CppMethodInitialized_07547aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_07547aa6 = '\x01';
  }
  local_c8.m_maximumPossiblePressure = 0.0;
  local_c8.m_Radius = 0.0;
  local_c8.m_RadiusVariance = 0.0;
  local_c8.m_AltitudeAngle = 0.0;
  local_c8.m_TapCount = 0;
  local_c8.m_Phase = 0;
  local_c8.m_Type = 0;
  local_c8.m_Pressure = 0.0;
  local_c8.m_RawPosition.fields.y = 0.0;
  local_c8.m_PositionDelta.fields.x = 0.0;
  local_c8.m_PositionDelta.fields.y = 0.0;
  local_c8.m_TimeDelta = 0.0;
  local_c8.m_FingerId = 0;
  local_c8.m_Position.fields.x = 0.0;
  local_c8.m_Position.fields.y = 0.0;
  local_c8.m_RawPosition.fields.x = 0.0;
  local_c8.m_AzimuthAngle = 0.0;
  UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (position->fields).x = UVar7.fields.x;
  (position->fields).y = UVar7.fields.y;
  (position->fields).z = UVar7.fields.z;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  iVar6 = 0;
  bVar4 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
      iVar6 = TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId;
    }
    else {
      iVar6 = TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId;
    }
    if (iVar6 == -0x80000000) {
      iVar6 = 0;
      iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      if (iVar5 < 1) goto label_05cb1ef4;
      do {
        UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)&local_78,iVar6,(MethodInfo *)0x0);
        local_c8.m_AzimuthAngle = local_78.m_AzimuthAngle;
        local_c8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
        local_c8.m_Radius = local_78.m_Radius;
        local_c8.m_RadiusVariance = local_78.m_RadiusVariance;
        local_c8.m_AltitudeAngle = local_78.m_AltitudeAngle;
        local_c8.m_TapCount = local_78.m_TapCount;
        local_c8.m_Phase = local_78.m_Phase;
        local_c8.m_Type = local_78.m_Type;
        local_c8.m_Pressure = local_78.m_Pressure;
        local_c8.m_RawPosition.fields.y = local_78.m_RawPosition.fields.y;
        local_c8.m_PositionDelta.fields.x = local_78.m_PositionDelta.fields.x;
        local_c8.m_PositionDelta.fields.y = local_78.m_PositionDelta.fields.y;
        local_c8.m_TimeDelta = local_78.m_TimeDelta;
        local_c8.m_FingerId = local_78.m_FingerId;
        local_c8.m_Position.fields.x = local_78.m_Position.fields.x;
        local_c8.m_Position.fields.y = local_78.m_Position.fields.y;
        local_c8.m_RawPosition.fields.x = local_78.m_RawPosition.fields.x;
        iVar5 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
        if (iVar5 == 0) {
          method_00 = (MethodInfo *)0x0;
          iVar5 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
          }
          bVar4 = UI_MobileMapEditorPointer__IsTouchOverUI(iVar5,method_00);
          if (!bVar4) {
            iVar5 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
            if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
            }
            TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId = iVar5;
            UVar2 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_c8,(MethodInfo *)0x0);
            (position->fields).x = UVar2.fields.x;
            (position->fields).y = UVar2.fields.y;
            (position->fields).z = 0.0;
            pUVar1 = TypeInfo_UI_MobileMapEditorPointer->static_fields;
            fVar3 = (position->fields).y;
            (pUVar1->_gizmoLastPosition).fields.x = (position->fields).x;
            (pUVar1->_gizmoLastPosition).fields.y = fVar3;
            (pUVar1->_gizmoLastPosition).fields.z = 0.0;
            iVar6 = 1;
            goto label_05cb1ef4;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      } while (iVar6 < iVar5);
    }
    iVar6 = 0;
  }
label_05cb1ef4:
  return SUB41(iVar6,0);
}


// UI.MobileMapEditorPointer$$TryGetGizmoPointerPosition
// il2cpp: bool UI_MobileMapEditorPointer__TryGetGizmoPointerPosition (UnityEngine_Vector3_o* position, const MethodInfo* method);
// 0x5cb1f70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb2041: jmp 0x5cb2198
// asm:   0x5cb20fe: jmp 0x5cb2175
// asm:   0x5cb2198: xor ebx, ebx

bool UI_MobileMapEditorPointer__TryGetGizmoPointerPosition(UnityEngine_Vector3_o *position,MethodInfo *method)

{
  UI_MobileMapEditorPointer_StaticFields *pUVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Touch_Fields local_d8;
  undefined1 local_88 [16];
  UnityEngine_Touch_Fields local_78;
  
  if (Il2CppMethodInitialized_07547aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_07547aa7 = '\x01';
  }
  local_d8.m_maximumPossiblePressure = 0.0;
  local_d8.m_Radius = 0.0;
  local_d8.m_RadiusVariance = 0.0;
  local_d8.m_AltitudeAngle = 0.0;
  local_d8.m_TapCount = 0;
  local_d8.m_Phase = 0;
  local_d8.m_Type = 0;
  local_d8.m_Pressure = 0.0;
  local_d8.m_RawPosition.fields.y = 0.0;
  local_d8.m_PositionDelta.fields.x = 0.0;
  local_d8.m_PositionDelta.fields.y = 0.0;
  local_d8.m_TimeDelta = 0.0;
  local_d8.m_FingerId = 0;
  local_d8.m_Position.fields.x = 0.0;
  local_d8.m_Position.fields.y = 0.0;
  local_d8.m_RawPosition.fields.x = 0.0;
  local_d8.m_AzimuthAngle = 0.0;
  if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
  }
  pUVar1 = TypeInfo_UI_MobileMapEditorPointer->static_fields;
  fVar6 = (pUVar1->_gizmoLastPosition).fields.x;
  fVar7 = (pUVar1->_gizmoLastPosition).fields.y;
  (position->fields).z = (pUVar1->_gizmoLastPosition).fields.z;
  (position->fields).x = fVar6;
  (position->fields).y = fVar7;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  bVar3 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
      iVar5 = TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId;
    }
    else {
      iVar5 = TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId;
    }
    if (iVar5 != -0x80000000) {
      iVar5 = 0;
      iVar4 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      if (0 < iVar4) {
        do {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)&local_78,iVar5,(MethodInfo *)0x0);
          local_d8.m_AzimuthAngle = local_78.m_AzimuthAngle;
          local_d8.m_maximumPossiblePressure = local_78.m_maximumPossiblePressure;
          local_d8.m_Radius = local_78.m_Radius;
          local_d8.m_RadiusVariance = local_78.m_RadiusVariance;
          local_d8.m_AltitudeAngle = local_78.m_AltitudeAngle;
          local_d8.m_TapCount = local_78.m_TapCount;
          local_d8.m_Phase = local_78.m_Phase;
          local_d8.m_Type = local_78.m_Type;
          local_d8.m_Pressure = local_78.m_Pressure;
          local_d8.m_RawPosition.fields.y = local_78.m_RawPosition.fields.y;
          local_d8.m_PositionDelta.fields.x = local_78.m_PositionDelta.fields.x;
          local_d8.m_PositionDelta.fields.y = local_78.m_PositionDelta.fields.y;
          local_d8.m_TimeDelta = local_78.m_TimeDelta;
          local_d8.m_FingerId = local_78.m_FingerId;
          local_d8.m_Position.fields.x = local_78.m_Position.fields.x;
          local_d8.m_Position.fields.y = local_78.m_Position.fields.y;
          local_d8.m_RawPosition.fields.x = local_78.m_RawPosition.fields.x;
          iVar4 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_d8,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
          }
          if (iVar4 == TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId) {
            UVar2 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_d8,(MethodInfo *)0x0);
            fVar6 = UVar2.fields.x;
            fVar7 = UVar2.fields.y;
            if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
              local_88._8_4_ = extraout_XMM0_Dc;
              local_88._0_4_ = UVar2.fields.x;
              local_88._4_4_ = UVar2.fields.y;
              local_88._12_4_ = extraout_XMM0_Dd;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
              fVar6 = (float)local_88._0_4_;
              fVar7 = (float)local_88._4_4_;
            }
            pUVar1 = TypeInfo_UI_MobileMapEditorPointer->static_fields;
            (pUVar1->_gizmoLastPosition).fields.x = fVar6;
            (pUVar1->_gizmoLastPosition).fields.y = fVar7;
            (pUVar1->_gizmoLastPosition).fields.z = 0.0;
            pUVar1 = TypeInfo_UI_MobileMapEditorPointer->static_fields;
            fVar6 = (pUVar1->_gizmoLastPosition).fields.x;
            fVar7 = (pUVar1->_gizmoLastPosition).fields.y;
            (position->fields).z = (pUVar1->_gizmoLastPosition).fields.z;
            (position->fields).x = fVar6;
            (position->fields).y = fVar7;
            iVar4 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_d8,(MethodInfo *)0x0);
            if ((iVar4 != 3) &&
               (iVar4 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_d8,(MethodInfo *)0x0),
               iVar4 != 4)) {
              return true;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          iVar4 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
        } while (iVar5 < iVar4);
      }
      if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
      }
      TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId = -0x80000000;
    }
  }
  return false;
}


// UI.MobileMapEditorPointer$$CancelGizmoPointer
// il2cpp: void UI_MobileMapEditorPointer__CancelGizmoPointer (const MethodInfo* method);
// 0x5cb21b0

void UI_MobileMapEditorPointer__CancelGizmoPointer(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_07547aa8 = '\x01';
    uVar1 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
    TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId = -0x80000000;
    return;
  }
  *(undefined4 *)((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer)->static_fields = 0x80000000;
  return;
}


// UI.MobileMapEditorPointer$$IsTouchOverUI
// il2cpp: bool UI_MobileMapEditorPointer__IsTouchOverUI (int32_t fingerId, const MethodInfo* method);
// 0x5cb19a0

bool UI_MobileMapEditorPointer__IsTouchOverUI(int32_t fingerId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *__this;
  
  if (Il2CppMethodInitialized_07547aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547aa9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  __this = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject_6d09e40
                      (__this,fingerId,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// UI.MobileMapEditorPointer$$.ctor
// il2cpp: void UI_MobileMapEditorPointer___ctor (UI_MobileMapEditorPointer_o* __this, const MethodInfo* method);
// 0x5cb2220

void UI_MobileMapEditorPointer___ctor(UI_MobileMapEditorPointer_o *__this,MethodInfo *method)

{
  (__this->fields)._selectPointerId = -0x80000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileMapEditorPointer$$.cctor
// il2cpp: void UI_MobileMapEditorPointer___cctor (const MethodInfo* method);
// 0x5cb2230

void UI_MobileMapEditorPointer___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_07547aaa = '\x01';
  }
  TypeInfo_UI_MobileMapEditorPointer->static_fields->_gizmoPointerId = -0x80000000;
  return;
}


