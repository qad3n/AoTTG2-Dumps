// Type: UI.HorizontalLineScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/HorizontalLineScaler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/Scalers/HorizontalLineScaler.cs  [CHANGED since prior version]
// --------------------------------

// UI.HorizontalLineScaler$$ApplyScale
// il2cpp: void UI_HorizontalLineScaler__ApplyScale (UI_HorizontalLineScaler_o* __this, const MethodInfo* method);
// 0x40804c0

void UI_HorizontalLineScaler__ApplyScale(UI_HorizontalLineScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *__this_00;
  float fVar3;
  
  if (DAT_05704510 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704510 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38);
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    fVar3 = 1.0;
    if (fVar1 < 1.0) {
      fVar3 = 1.0 / fVar1;
    }
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    value.fields.y = fVar3;
    value.fields.x = UVar2.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HorizontalLineScaler$$.ctor
// il2cpp: void UI_HorizontalLineScaler___ctor (UI_HorizontalLineScaler_o* __this, const MethodInfo* method);
// 0x4080590

void UI_HorizontalLineScaler___ctor(UI_HorizontalLineScaler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


