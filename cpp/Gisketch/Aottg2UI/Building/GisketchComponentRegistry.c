// Type: Gisketch.Aottg2UI.Building.GisketchComponentRegistry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* factory, const MethodInfo* method);
// 0x1818da6c0

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
               Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434212e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
    Il2CppMethodInitialized_18434212e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if ((!bVar1) && (factory != (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._factories;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)type,(Il2CppObject *)factory,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$TryBuild
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818da740

bool Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
               UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  undefined1 uVar2;
  Il2CppObject *local_res10 [3];
  
  if (Il2CppMethodInitialized_18434212f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue);
    Il2CppMethodInitialized_18434212f = '\x01';
  }
  local_res10[0] = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._factories;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)type,local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue
                      );
    if (!bVar1) {
      return false;
    }
    if (local_res10[0] != (Il2CppObject *)0x0) {
      uVar2 = (*local_res10[0][1].monitor)
                        (local_res10[0][4].klass,go,node,context,view,local_res10[0][2].monitor);
      return (bool)uVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, const MethodInfo* method);
// 0x1818da940

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__GisketchComponentFactory__o *__this_00;
  
  if (Il2CppMethodInitialized_184342130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184342130 = '\x01';
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_ctor);
  (__this->fields)._factories = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._factories,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor (const MethodInfo* method);
// 0x1818da800

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_Collections_Generic_Dictionary_string__GisketchComponentFactory__o *__this_00;
  
  if (Il2CppMethodInitialized_184342131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    Il2CppMethodInitialized_184342131 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  if (Il2CppMethodInitialized_184342130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184342130 = '\x01';
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
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_ctor);
  (__this->fields)._factories = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._factories,__this_00);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default,__this);
  return;
}


