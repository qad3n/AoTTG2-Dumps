// Type: UI.StylebarScaler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/StylebarScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/StylebarScaler.cs
// --------------------------------

// UI.StylebarScaler$$ApplyScale
// il2cpp: void UI_StylebarScaler__ApplyScale (UI_StylebarScaler_o* __this, const MethodInfo* method);
// 0x18221a900

void UI_StylebarScaler__ApplyScale(UI_StylebarScaler_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  UnityEngine_Vector3_o local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843470fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843470fe = '\x01';
  }
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).StylebarScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    fVar4 = (pSVar2->fields)._value;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      fVar4 = fVar4 * 0.8;
      pUVar3 = UnityEngine_Transform__get_localScale
                         (local_28,(UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      local_38.fields.z = 0.0;
      local_38.fields.x = fVar4 * (pUVar3->fields).x;
      local_38.fields.y = fVar4 * (pUVar3->fields).y;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_00,&local_38,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.StylebarScaler$$.ctor
// il2cpp: void UI_StylebarScaler___ctor (UI_StylebarScaler_o* __this, const MethodInfo* method);
// 0x182206f90

void
UI_StylebarScaler___ctor(UI_StylebarScaler_o* __this, MethodInfo* method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


