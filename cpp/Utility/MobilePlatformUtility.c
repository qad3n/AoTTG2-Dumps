// Type: Utility.MobilePlatformUtility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Utility/MobilePlatformUtility.cs
// Prior real C# source: none
// --------------------------------

// Utility.MobilePlatformUtility$$IsMobileRuntime
// il2cpp: bool Utility_MobilePlatformUtility__IsMobileRuntime (const MethodInfo* method);
// 0x5de0c00

bool Utility_MobilePlatformUtility__IsMobileRuntime(MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754827f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_0754827f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  bVar2 = true;
  if (iVar1 != 0xb) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    bVar2 = iVar1 == 8;
  }
  return bVar2;
}


// Utility.MobilePlatformUtility$$TryGetHeldPointerPosition
// il2cpp: bool Utility_MobilePlatformUtility__TryGetHeldPointerPosition (int32_t pointerId, UnityEngine_Vector2_o* position, const MethodInfo* method);
// 0x5de0c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de0cbf: nop 

bool Utility_MobilePlatformUtility__TryGetHeldPointerPosition
               (int32_t pointerId,UnityEngine_Vector2_o *position,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t index;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Touch_Fields local_b8;
  UnityEngine_Touch_Fields local_70;
  
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
  if (pointerId < 0) {
    UVar4 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    position->fields = UVar4.fields._0_8_;
    bVar2 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
    return bVar2;
  }
  index = 0;
  iVar3 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
  if (0 < iVar3) {
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
      iVar3 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
      if (iVar3 == pointerId) {
        UVar1 = (UnityEngine_Vector2_Fields)
                UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
        position->fields = UVar1;
        iVar3 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
        if (iVar3 == 3) {
          return false;
        }
        iVar3 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_b8,(MethodInfo *)0x0);
        return iVar3 != 4;
      }
      index = index + 1;
      iVar3 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    } while (index < iVar3);
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  position->fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  return false;
}


