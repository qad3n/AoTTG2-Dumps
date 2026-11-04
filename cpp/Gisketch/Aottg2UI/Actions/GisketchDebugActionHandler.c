// Type: Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebugActionHandler.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler__HandleAction (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18190ba60

void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *message;
  
  if (Il2CppMethodInitialized_18434228f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch AoTTG2 UI action: {0} ({1})");
    Il2CppMethodInitialized_18434228f = '\x01';
  }
  message = System_String__Format_196d440
                      ("Gisketch AoTTG2 UI action: {0} ({1})",(Il2CppObject *)actionId,
                       (Il2CppObject *)(context->fields).ElementId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler___ctor (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler___ctor(Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


