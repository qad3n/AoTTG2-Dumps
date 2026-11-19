// Type: CustomLogic.BuiltinClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinClassInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.BuiltinClassInstance.<>c$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___cctor (const MethodInfo* method);
// 0x5b6a5d0

void CustomLogic_BuiltinClassInstance___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance_c);
    Il2CppMethodInitialized_07547312 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_BuiltinClassInstance_c->static_fields->__9 =
       (CustomLogic_BuiltinClassInstance___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_BuiltinClassInstance_c->static_fields->__9);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___c___ctor (CustomLogic_BuiltinClassInstance___c_o* __this, const MethodInfo* method);
// 0x5b6a640

void CustomLogic_BuiltinClassInstance___c___ctor
               (CustomLogic_BuiltinClassInstance___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.BuiltinClassInstance.<>c$$<.cctor>b__12_0
// il2cpp: Il2CppObject* CustomLogic_BuiltinClassInstance___c____cctor_b__12_0 (CustomLogic_BuiltinClassInstance___c_o* __this, CustomLogic_BuiltinClassInstance_o* __, System_Object_array* __, const MethodInfo* method);
// 0x5b6a650

Il2CppObject *
CustomLogic_BuiltinClassInstance___c____cctor_b__12_0
          (CustomLogic_BuiltinClassInstance___c_o *__this,CustomLogic_BuiltinClassInstance_o *__,
          System_Object_array *___2,MethodInfo *methodInfo)

{
  return (Il2CppObject *)0x0;
}


// CustomLogic.BuiltinClassInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinClassInstance___ctor (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a190

void CustomLogic_BuiltinClassInstance___ctor(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o **targetAddress;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  ulong in_RAX;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  System_String_o *value;
  Il2CppObject *value_00;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547310 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_07547310 = '\x01';
  }
  if (Il2CppMethodInitialized_07547350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    Il2CppMethodInitialized_07547350 = '\x01';
  }
  (__this->fields)._Enabled_k__BackingField = true;
  (__this->fields)._LookupBaseClassForVariables_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  targetAddress = &(__this->fields).Variables;
  (__this->fields).Variables = __this_00;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  value = (*(__this->klass->vtable)._6_get_ClassName.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_ClassName.method);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)"Type",(Il2CppObject *)value,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"Init",
                 (Il2CppObject *)TypeInfo_CustomLogic_BuiltinClassInstance->static_fields->Init,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item
                );
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
      uStack_28 = uStack_28 & 0xffffffffffffff;
      value_00 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 7));
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)"IsCharacter",value_00,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.BuiltinClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a3b0

bool CustomLogic_BuiltinClassInstance__get_LookupBaseClassForVariables
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._10_get_InheritBaseMembers.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_InheritBaseMembers.method);
  return bVar1;
}


// CustomLogic.BuiltinClassInstance$$get_ClassName
// il2cpp: System_String_o* CustomLogic_BuiltinClassInstance__get_ClassName (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a3d0

System_String_o *
CustomLogic_BuiltinClassInstance__get_ClassName(CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_ClassName);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$get_IsAbstract
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsAbstract (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a410

bool CustomLogic_BuiltinClassInstance__get_IsAbstract
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_IsAbstract);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$get_IsStatic
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_IsStatic (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a450

bool CustomLogic_BuiltinClassInstance__get_IsStatic
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_get_IsStatic);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_BuiltinClassInstance__get_InheritBaseMembers (CustomLogic_BuiltinClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a490

bool CustomLogic_BuiltinClassInstance__get_InheritBaseMembers
               (CustomLogic_BuiltinClassInstance_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_BuiltinClassInstance_get_InheritBaseMembers);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.BuiltinClassInstance$$.cctor
// il2cpp: void CustomLogic_BuiltinClassInstance___cctor (const MethodInfo* method);
// 0x5b6a4d0

void CustomLogic_BuiltinClassInstance___cctor(MethodInfo *method)

{
  Il2CppObject *object;
  System_Func_BuiltinClassInstance__object____object__o *__this;
  CustomLogic_CLMethodBinding_BuiltinClassInstance__o *__this_00;
  
  if (Il2CppMethodInitialized_07547311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_BuiltinClassInstance_object_array_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_BuiltinClassInstance_c_cctor_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance_c);
    Il2CppMethodInitialized_07547311 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance_c);
  }
  object = (Il2CppObject *)TypeInfo_CustomLogic_BuiltinClassInstance_c->static_fields->__9;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_BuiltinClassInstance_object_array_object);
  System_Func_object__object__object____ctor
            ((System_Func_object__object__object__o *)__this,object,
             (intptr_t)MethodInfo_CustomLogic_BuiltinClassInstance_c_cctor_b__12_0,(MethodInfo_4F20F30 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_BuiltinClassInstance_ctor);
  TypeInfo_CustomLogic_BuiltinClassInstance->static_fields->Init = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_BuiltinClassInstance->static_fields->Init);
  return;
}


