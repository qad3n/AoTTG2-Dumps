// Type: Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchChoiceOptionRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$Register
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register (System_String_o* key, System_Action_GisketchChoiceOptionRenderContext__o* renderer, const MethodInfo* method);
// 0x1818fce90

void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
               (System_String_o *key,System_Action_GisketchChoiceOptionRenderContext__o *renderer,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    Il2CppMethodInitialized_184342214 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((!bVar1) && (renderer != (System_Action_GisketchChoiceOptionRenderContext__o *)0x0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->static_fields->Renderers;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)key,(Il2CppObject *)renderer,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext_set_Item
              );
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$TryRender
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender (System_String_o* key, Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x1818fcf30

bool Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender
               (System_String_o *key,Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184342215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext_TryGetValu
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    Il2CppMethodInitialized_184342215 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((bVar1) || (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0)) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->static_fields->Renderers;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)key,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext_TryGetValu
                      );
    if (!bVar1) {
      return false;
    }
    if (local_res8 != (Il2CppObject *)0x0) {
      (*local_res8[1].monitor)(local_res8[4].klass,context,local_res8[2].monitor);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer___cctor (const MethodInfo* method);
// 0x1818fd010

void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action_GisketchChoiceOptionRenderContext___o *__this;
  
  if (Il2CppMethodInitialized_184342216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    Il2CppMethodInitialized_184342216 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchChoiceOptionRenderContext_ctor
            );
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->static_fields->Renderers = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->static_fields->Renderers,__this
            );
  return;
}


