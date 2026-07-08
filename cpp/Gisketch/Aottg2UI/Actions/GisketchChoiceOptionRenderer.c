// Type: Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchChoiceOptionRenderer.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$Register
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register (System_String_o* key, System_Action_GisketchChoiceOptionRenderContext__o* renderer, const MethodInfo* method);
// 0x3b27600

void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
               (System_String_o *key,System_Action_GisketchChoiceOptionRenderContext__o *renderer,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057015a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderer);
    DAT_057015a6 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((renderer == (System_Action_GisketchChoiceOptionRenderContext__o *)0x0) ||
     ((char)bVar1 != '\0')) {
    return;
  }
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8),(Il2CppObject *)key,(Il2CppObject *)renderer,
               MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$TryRender
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender (System_String_o* key, Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x3b21460

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender
          (System_String_o *key,
          Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  Il2CppObject *local_20;
  
  if (DAT_057015a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderer);
    DAT_057015a7 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  bVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) &&
     ((char)bVar1 == '\0')) {
    if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03b21524:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8),(Il2CppObject *)key,&local_20,
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      if (local_20 == (Il2CppObject *)0x0) goto LAB_03b21524;
      (*local_20[1].monitor)(local_20[4].klass,context,local_20[2].monitor);
      bVar2 = 0x54d4601;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer___cctor (const MethodInfo* method);
// 0x3b276a0

void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057015a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Action_1_Giske);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Action_GisketchChoiceOptionRe);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderer);
    DAT_057015a8 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Action_GisketchChoiceOptionRe);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_Action_1_Giske);
  **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8),__this);
  return;
}


