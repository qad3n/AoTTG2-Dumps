// Type: UI.MobileInputRaycastArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputRaycastArea.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputRaycastArea$$OnPopulateMesh
// il2cpp: void UI_MobileInputRaycastArea__OnPopulateMesh (UI_MobileInputRaycastArea_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x5c9c680

void UI_MobileInputRaycastArea__OnPopulateMesh
               (UI_MobileInputRaycastArea_o *__this,UnityEngine_UI_VertexHelper_o *vh,MethodInfo *method)

{
  if (vh == (UnityEngine_UI_VertexHelper_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputRaycastArea$$.ctor
// il2cpp: void UI_MobileInputRaycastArea___ctor (UI_MobileInputRaycastArea_o* __this, const MethodInfo* method);
// 0x5c9c6a0

void UI_MobileInputRaycastArea___ctor(UI_MobileInputRaycastArea_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547a17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Graphic);
    Il2CppMethodInitialized_07547a17 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_UI_Graphic->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_UI_Graphic->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_Graphic);
    UnityEngine_UI_Graphic___ctor((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_UI_Graphic___ctor((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  return;
}


