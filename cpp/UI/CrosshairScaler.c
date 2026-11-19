// Type: UI.CrosshairScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CrosshairScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/CrosshairScaler.cs
// --------------------------------

// UI.CrosshairScaler$$ApplyScale
// il2cpp: void UI_CrosshairScaler__ApplyScale (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x5cec6f0

void UI_CrosshairScaler__ApplyScale(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Settings_UISettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07547c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_07547c65 = '\x01';
  }
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).CrosshairScale, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
    fVar1 = (pSVar4->fields)._value;
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar7 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
      value.fields.x = UVar7.fields.x * fVar1;
      value.fields.y = UVar7.fields.y * fVar1;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar5,value,(MethodInfo *)0x0);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).CrosshairTextScale, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
        fVar2 = (pSVar4->fields)._value;
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"DefaultLabel",(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            __this_00 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar6,
                                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              UnityEngine_UI_Text__set_fontSize(__this_00,0x10,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                pUVar6 = UnityEngine_Transform__Find(pUVar6,"DefaultLabel",(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  pUVar5 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar6,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar7.fields.x = fVar2 / fVar1;
                    UVar7.fields.y = UVar7.fields.x;
                    UVar7.fields.z = 0.0;
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)pUVar5,UVar7,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.CrosshairScaler$$.ctor
// il2cpp: void UI_CrosshairScaler___ctor (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x5cec950

void UI_CrosshairScaler___ctor(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


