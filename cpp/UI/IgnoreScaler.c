// Type: UI.IgnoreScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IgnoreScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/IgnoreScaler.cs
// --------------------------------

// UI.IgnoreScaler$$ApplyScale
// il2cpp: void UI_IgnoreScaler__ApplyScale (UI_IgnoreScaler_o* __this, const MethodInfo* method);
// 0x5cec8b0

void UI_IgnoreScaler__ApplyScale(UI_IgnoreScaler_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07547c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547c68 = '\x01';
  }
  __this_00 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (__this_00 != (Settings_UISettings_o *)0x0) {
    fVar1 = Settings_UISettings__get_AppliedMasterScale(__this_00,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    value.fields.x = 1.0 / fVar1;
    (__this->fields).Scale = value.fields.x;
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = value.fields.x;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.IgnoreScaler$$.ctor
// il2cpp: void UI_IgnoreScaler___ctor (UI_IgnoreScaler_o* __this, const MethodInfo* method);
// 0x5cec960

void UI_IgnoreScaler___ctor(UI_IgnoreScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


