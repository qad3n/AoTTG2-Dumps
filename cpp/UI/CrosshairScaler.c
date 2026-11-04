// Type: UI.CrosshairScaler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CrosshairScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/CrosshairScaler.cs
// --------------------------------

// UI.CrosshairScaler$$ApplyScale
// il2cpp: void UI_CrosshairScaler__ApplyScale (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x182206d90

void UI_CrosshairScaler__ApplyScale(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Text_o *__this_00;
  float fVar6;
  UnityEngine_Vector3_o local_48;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_1843470f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_1843470f8 = '\x01';
  }
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).CrosshairScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    fVar6 = (pSVar2->fields)._value;
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_localScale
                         (local_38,(UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
      local_48.fields.z = 0.0;
      local_48.fields.x = fVar6 * (pUVar4->fields).x;
      local_48.fields.y = fVar6 * (pUVar4->fields).y;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar3,&local_48,(MethodInfo *)0x0);
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).CrosshairTextScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
        fVar6 = (pSVar2->fields)._value / fVar6;
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__Find(pUVar5,"DefaultLabel",(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            __this_00 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar5,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              UnityEngine_UI_Text__set_fontSize(__this_00,0x10,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Transform__Find(pUVar5,"DefaultLabel",(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  pUVar3 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar5,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    local_48.fields.z = 0.0;
                    local_48.fields.x = fVar6;
                    local_48.fields.y = fVar6;
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)pUVar3,&local_48,(MethodInfo *)0x0);
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
// 0x182206f90

void
UI_CrosshairScaler___ctor(UI_CrosshairScaler_o* __this, MethodInfo* method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


