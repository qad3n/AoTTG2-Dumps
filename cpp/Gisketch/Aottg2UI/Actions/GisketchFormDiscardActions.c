// Type: Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFormDiscardActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$Register
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Register (System_String_o* overlayId, System_Action_GameObject__o* action, const MethodInfo* method);
// 0x53a3050

void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Register
               (System_String_o *overlayId,System_Action_GameObject__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542bba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    Il2CppMethodInitialized_07542bba = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(overlayId,(MethodInfo *)0x0);
  if ((action == (System_Action_GameObject__o *)0x0) || (bVar1)) {
    return;
  }
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
             (MethodInfo_4AAD4C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_set_Item);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$Invoke
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Invoke (System_String_o* overlayId, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x53a30f0

void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Invoke
               (System_String_o *overlayId,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_07542bbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    Il2CppMethodInitialized_07542bbb = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(overlayId,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_053a31a5:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)overlayId,&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_TryGetValue);
    if (bVar1) {
      if (local_20 == (Il2CppObject *)0x0) goto label_053a31a5;
      (*local_20[1].monitor)(local_20[4].klass,source,local_20[2].monitor);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions___cctor (const MethodInfo* method);
// 0x53a31b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a31d8: cmp byte ptr [rip + 0x219f6a7], 0

void Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__Action_GameObject___o *__this;
  
  if (Il2CppMethodInitialized_07542bbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542bbc = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_GameObject_ctor);
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->static_fields->Actions);
  return;
}


