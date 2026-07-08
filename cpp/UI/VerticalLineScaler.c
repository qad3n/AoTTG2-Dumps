// Type: UI.VerticalLineScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/VerticalLineScaler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/Scalers/VerticalLineScaler.cs  [CHANGED since prior version]
// --------------------------------

// UI.VerticalLineScaler$$ApplyScale
// il2cpp: void UI_VerticalLineScaler__ApplyScale (UI_VerticalLineScaler_o* __this, const MethodInfo* method);
// 0x4080830

void UI_VerticalLineScaler__ApplyScale(UI_VerticalLineScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  
  if (DAT_05704515 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704515 = '\x01';
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
    UVar2.fields.x = fVar3;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.VerticalLineScaler$$.ctor
// il2cpp: void UI_VerticalLineScaler___ctor (UI_VerticalLineScaler_o* __this, const MethodInfo* method);
// 0x4080900

void UI_VerticalLineScaler___ctor(UI_VerticalLineScaler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


