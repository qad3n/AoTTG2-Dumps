// Type: UI.StylebarScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/StylebarScaler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/Scalers/StylebarScaler.cs  [CHANGED since prior version]
// --------------------------------

// UI.StylebarScaler$$ApplyScale
// il2cpp: void UI_StylebarScaler__ApplyScale (UI_StylebarScaler_o* __this, const MethodInfo* method);
// 0x4080750

void UI_StylebarScaler__ApplyScale(UI_StylebarScaler_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o value;
  
  if (DAT_05704514 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704514 = '\x01';
  }
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x70), lVar1 != 0)) {
    fVar2 = *(float *)(lVar1 + 0x14);
    __this_00 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      fVar2 = fVar2 * 0.8;
      UVar3 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
      value.fields.x = UVar3.fields.x * fVar2;
      value.fields.y = UVar3.fields.y * fVar2;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.StylebarScaler$$.ctor
// il2cpp: void UI_StylebarScaler___ctor (UI_StylebarScaler_o* __this, const MethodInfo* method);
// 0x4080820

void UI_StylebarScaler___ctor(UI_StylebarScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


