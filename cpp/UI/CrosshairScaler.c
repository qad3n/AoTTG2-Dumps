// Type: UI.CrosshairScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CrosshairScaler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/Scalers/CrosshairScaler.cs  [CHANGED since prior version]
// --------------------------------

// UI.CrosshairScaler$$ApplyScale
// il2cpp: void UI_CrosshairScaler__ApplyScale (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x4080150

void UI_CrosshairScaler__ApplyScale(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o value;
  
  if (DAT_0570450e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_0570450e = '\x01';
  }
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
    fVar1 = *(float *)(lVar3 + 0x14);
    pUVar4 = (UnityEngine_Transform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar5 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
      value.fields.x = UVar5.fields.x * fVar1;
      value.fields.y = UVar5.fields.y * fVar1;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
        fVar2 = *(float *)(lVar3 + 0x14);
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__Find(pUVar4,"DefaultLabel",(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            __this_00 = (UnityEngine_UI_Text_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              UnityEngine_UI_Text__set_fontSize(__this_00,0x10,(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Transform__Find(pUVar4,"DefaultLabel",(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = (UnityEngine_Transform_o *)
                           UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    UVar5.fields.x = fVar2 / fVar1;
                    UVar5.fields.y = UVar5.fields.x;
                    UVar5.fields.z = 0.0;
                    UnityEngine_Transform__set_localScale(pUVar4,UVar5,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CrosshairScaler$$.ctor
// il2cpp: void UI_CrosshairScaler___ctor (UI_CrosshairScaler_o* __this, const MethodInfo* method);
// 0x40803c0

void UI_CrosshairScaler___ctor(UI_CrosshairScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


