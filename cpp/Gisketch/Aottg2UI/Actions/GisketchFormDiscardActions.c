// Type: Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFormDiscardActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$Register
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Register (System_String_o* overlayId, System_Action_GameObject__o* action, const MethodInfo* method);
// 0x181900bd0

void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Register
               (System_String_o *overlayId,System_Action_GameObject__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434223b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    Il2CppMethodInitialized_18434223b = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(overlayId,(MethodInfo *)0x0);
  if ((!bVar1) && (action != (System_Action_GameObject__o *)0x0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)overlayId,(Il2CppObject *)action,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_set_Item);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$Invoke
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Invoke (System_String_o* overlayId, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181900b10

void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Invoke
               (System_String_o *overlayId,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_18434223c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    Il2CppMethodInitialized_18434223c = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(overlayId,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_181900bc8:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)overlayId,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_TryGetValue);
    if (bVar1) {
      if (local_res8 == (Il2CppObject *)0x0) goto label_181900bc8;
      (*local_res8[1].monitor)(local_res8[4].klass,source,local_res8[2].monitor);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions___cctor (const MethodInfo* method);
// 0x181900c70

void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__Action_GameObject___o *__this;
  
  if (Il2CppMethodInitialized_18434223d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_18434223d = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_ctor);
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions,__this);
  return;
}


