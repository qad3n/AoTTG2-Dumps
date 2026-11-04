// Type: UI.IgnoreScaler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IgnoreScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/IgnoreScaler.cs
// --------------------------------

// UI.IgnoreScaler$$ApplyScale
// il2cpp: void UI_IgnoreScaler__ApplyScale (UI_IgnoreScaler_o* __this, const MethodInfo* method);
// 0x182212120

void UI_IgnoreScaler__ApplyScale(UI_IgnoreScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_UISettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843470fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843470fb = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).UIMasterScale, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
    fVar1 = (pSVar3->fields)._value;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    local_28[0].fields.x = 1.0 / fVar1;
    (__this->fields).Scale = local_28[0].fields.x;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      local_28[0].fields.z = 0.0;
      local_28[0].fields.y = local_28[0].fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_00,local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.IgnoreScaler$$.ctor
// il2cpp: void UI_IgnoreScaler___ctor (UI_IgnoreScaler_o* __this, const MethodInfo* method);
// 0x182206f90

void
UI_IgnoreScaler___ctor(UI_IgnoreScaler_o* __this, MethodInfo* method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


