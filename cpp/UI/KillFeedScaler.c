// Type: UI.KillFeedScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KillFeedScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/KillFeedScaler.cs
// --------------------------------

// UI.KillFeedScaler$$ApplyScale
// il2cpp: void UI_KillFeedScaler__ApplyScale (UI_KillFeedScaler_o* __this, const MethodInfo* method);
// 0x5cecb30

void UI_KillFeedScaler__ApplyScale(UI_KillFeedScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_UISettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_07547c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07547c69 = '\x01';
  }
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).KillFeedScale, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
    fVar1 = (pSVar3->fields)._value;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      UVar4.fields.x = UVar4.fields.x * fVar1;
      (__this->fields).Scale = UVar4.fields.x;
      UVar4.fields.y = UVar4.fields.x;
      UVar4.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_00,UVar4,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.KillFeedScaler$$.ctor
// il2cpp: void UI_KillFeedScaler___ctor (UI_KillFeedScaler_o* __this, const MethodInfo* method);
// 0x5cecc00

void UI_KillFeedScaler___ctor(UI_KillFeedScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


