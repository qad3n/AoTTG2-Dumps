// Type: Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDebugActionHandler.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler__HandleAction (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b30640

void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler__HandleAction
               (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o *__this,
               System_String_o *actionId,Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               MethodInfo *method)

{
  System_String_o *message;
  
  if (DAT_057015f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"Gisketch AoTTG2 UI action: {0} ({1})");
    DAT_057015f5 = '\x01';
  }
  message = System_String__Format
                      ("Gisketch AoTTG2 UI action: {0} ({1})",(Il2CppObject *)actionId,
                       (Il2CppObject *)context.fields.ElementId,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDebugActionHandler$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler___ctor (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o* __this, const MethodInfo* method);
// 0x3b306c0

void Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDebugActionHandler_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


