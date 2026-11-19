// Type: UI.MobileControlsScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileControlsScaler.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileControlsScaler$$ApplyScale
// il2cpp: void UI_MobileControlsScaler__ApplyScale (UI_MobileControlsScaler_o* __this, const MethodInfo* method);
// 0x5c6daa0

void UI_MobileControlsScaler__ApplyScale(UI_MobileControlsScaler_o *__this,MethodInfo *method)

{
  bool bVar1;
  UI_MobileControlsOverlay_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MobileControlsOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478d1 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)
                         MethodInfo_UnityEngine_Component_GetComponent_MobileControlsOverlay);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (UI_MobileControlsOverlay_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_MobileControlsOverlay__RebuildAllControls(__this_00,method_00);
    return;
  }
  return;
}


// UI.MobileControlsScaler$$.ctor
// il2cpp: void UI_MobileControlsScaler___ctor (UI_MobileControlsScaler_o* __this, const MethodInfo* method);
// 0x5c6db20

void UI_MobileControlsScaler___ctor(UI_MobileControlsScaler_o *__this,MethodInfo *method)

{
  UI_BaseScaler___ctor((UI_BaseScaler_o *)__this,(MethodInfo *)0x0);
  return;
}


