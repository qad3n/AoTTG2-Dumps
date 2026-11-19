// Type: UI.VerticalLineScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/VerticalLineScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/VerticalLineScaler.cs
// --------------------------------

// UI.VerticalLineScaler$$ApplyScale
// il2cpp: void UI_VerticalLineScaler__ApplyScale (UI_VerticalLineScaler_o* __this, const MethodInfo* method);
// 0x5cecdc0

void UI_VerticalLineScaler__ApplyScale(UI_VerticalLineScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547c6c = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  fVar1 = TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar3 = 1.0;
  if (fVar1 < 1.0) {
    fVar3 = 1.0 / fVar1;
  }
  UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
  UVar2.fields.x = fVar3;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar2,(MethodInfo *)0x0);
  return;
}


// UI.VerticalLineScaler$$.ctor
// il2cpp: void UI_VerticalLineScaler___ctor (UI_VerticalLineScaler_o* __this, const MethodInfo* method);
// 0x5cece90

void UI_VerticalLineScaler___ctor(UI_VerticalLineScaler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


