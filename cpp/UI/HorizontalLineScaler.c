// Type: UI.HorizontalLineScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HorizontalLineScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/HorizontalLineScaler.cs
// --------------------------------

// UI.HorizontalLineScaler$$ApplyScale
// il2cpp: void UI_HorizontalLineScaler__ApplyScale (UI_HorizontalLineScaler_o* __this, const MethodInfo* method);
// 0x438e210

void UI_HorizontalLineScaler__ApplyScale(UI_HorizontalLineScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *__this_00;
  float fVar3;
  
  if (g_data_057ae28a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae28a = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar1 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38);
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
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
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.HorizontalLineScaler$$.ctor
// il2cpp: void UI_HorizontalLineScaler___ctor (UI_HorizontalLineScaler_o* __this, const MethodInfo* method);
// 0x438e2e0

void UI_HorizontalLineScaler___ctor(UI_HorizontalLineScaler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


