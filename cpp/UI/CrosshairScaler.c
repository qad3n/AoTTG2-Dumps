// Type: UI.CrosshairScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CrosshairScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/CrosshairScaler.cs
// --------------------------------

// UI.CrosshairScaler$$ApplyScale
// il2cpp: void UI_CrosshairScaler__ApplyScale (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x438df80

void UI_CrosshairScaler__ApplyScale(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  long lVar3;
  UI_CrosshairScaler_o *pUVar4;
  UI_CrosshairScaler_o *pUVar5;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UI_CrosshairScaler_o *__this_01;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if (g_data_057ae289 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    g_data_057ae289 = '\x01';
  }
  __this_01 = __this;
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
    fVar1 = *(float *)(lVar3 + 0x14);
    __this_01 = __this;
    pUVar4 = (UI_CrosshairScaler_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar4 != (UI_CrosshairScaler_o *)0x0) {
      UVar7 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
      value.fields.x = UVar7.fields.x * fVar1;
      value.fields.y = UVar7.fields.y * fVar1;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar4,value,(MethodInfo *)0x0);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      __this_01 = pUVar4;
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
        fVar2 = *(float *)(lVar3 + 0x14);
        __this_01 = __this;
        pUVar4 = (UI_CrosshairScaler_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UI_CrosshairScaler_o *)0x0) {
          pUVar5 = (UI_CrosshairScaler_o *)
                   UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)pUVar4,"DefaultLabel",(MethodInfo *)0x0);
          __this_01 = pUVar4;
          if (pUVar5 != (UI_CrosshairScaler_o *)0x0) {
            __this_00 = (UnityEngine_UI_Text_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
            __this_01 = pUVar5;
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              UnityEngine_UI_Text__set_fontSize(__this_00,0x10,(MethodInfo *)0x0);
              pUVar4 = (UI_CrosshairScaler_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              __this_01 = __this;
              if (pUVar4 != (UI_CrosshairScaler_o *)0x0) {
                pUVar5 = (UI_CrosshairScaler_o *)
                         UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar4,"DefaultLabel",(MethodInfo *)0x0);
                __this_01 = pUVar4;
                if (pUVar5 != (UI_CrosshairScaler_o *)0x0) {
                  pUVar6 = (UnityEngine_Transform_o *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform);
                  __this_01 = pUVar5;
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    value_00.fields.x = fVar2 / fVar1;
                    value_00.fields.y = value_00.fields.x;
                    value_00.fields.z = 0.0;
                    UnityEngine_Transform__set_localScale(pUVar6,value_00,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = __this_01;
  if (g_data_057ae28c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUVar4 = (UI_CrosshairScaler_o *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae28c = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
    UVar7.fields.x = 1.0 / *(float *)(lVar3 + 0x14);
    pUVar4 = __this_01;
    pUVar6 = (UnityEngine_Transform_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this_01->fields).Scale = UVar7.fields.x;
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar7.fields.y = UVar7.fields.x;
      UVar7.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(pUVar6,UVar7,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (pUVar4->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar4,(MethodInfo *)0x0);
  return;
}


// UI.CrosshairScaler$$.ctor
// il2cpp: void UI_CrosshairScaler___ctor (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x438e1f0

void UI_CrosshairScaler___ctor(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


