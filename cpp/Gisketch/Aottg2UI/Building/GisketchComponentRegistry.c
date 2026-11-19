// Type: Gisketch.Aottg2UI.Building.GisketchComponentRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* factory, const MethodInfo* method);
// 0x536b2f0

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
               Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
    Il2CppMethodInitialized_07542aad = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if ((factory == (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) || (bVar1)) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._factories;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)type,(Il2CppObject *)factory,
             (MethodInfo_4AAD4C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$TryBuild
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x537b730

bool Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
               UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  undefined1 uVar2;
  Il2CppObject *pIStack_40;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGStack_38;
  
  pGStack_38 = view;
  if (Il2CppMethodInitialized_07542aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue);
    Il2CppMethodInitialized_07542aae = '\x01';
  }
  pIStack_40 = (Il2CppObject *)0x0;
  uVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._factories;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0537b7e9:
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)type,&pIStack_40,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue
                      );
    if (bVar1) {
      if (pIStack_40 == (Il2CppObject *)0x0) goto label_0537b7e9;
      uVar2 = (*pIStack_40[1].monitor)(pIStack_40[4].klass,go,node,context,pGStack_38,pIStack_40[2].monitor);
    }
    else {
      uVar2 = 0;
    }
  }
  return (bool)uVar2;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, const MethodInfo* method);
// 0x537b7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537b81c: cmp byte ptr [rip + 0x21c7063], 0

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__GisketchComponentFactory__o *__this_00;
  
  if (Il2CppMethodInitialized_07542aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542aaf = '\x01';
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_ctor);
  (__this->fields)._factories = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._factories);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor (const MethodInfo* method);
// 0x537b910

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07542ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    Il2CppMethodInitialized_07542ab0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor(__this,in_RSI);
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default);
  return;
}


