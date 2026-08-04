// Type: Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebugActionHandler.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler__HandleAction (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b9d2a0

void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *message;
  
  if (g_data_057a9f2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"Gisketch AoTTG2 UI action: {0} ({1})");
    g_data_057a9f2e = '\x01';
  }
  message = System_String__Format_3af78e0
                      ("Gisketch AoTTG2 UI action: {0} ({1})",(Il2CppObject *)actionId,(Il2CppObject *)context.fields.ElementId,
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler___ctor (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, const MethodInfo* method);
// 0x3b9d320

void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


