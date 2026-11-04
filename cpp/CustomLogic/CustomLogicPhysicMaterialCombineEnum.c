// Type: CustomLogic.CustomLogicPhysicMaterialCombineEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicMaterialCombineEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0280

CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345ef1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum);
    Il2CppMethodInitialized_184345ef1 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum);
      if (Il2CppMethodInitialized_184345eef == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345eef = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicMaterialCombineEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd87c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Average");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum");
    il2cpp_codegen_initialize_runtime_metadata(&"Maximum");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiply");
    Il2CppMethodInitialized_184345ef2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Minimum",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345ef3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
      Il2CppMethodInitialized_184345ef3 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345ef4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
        Il2CppMethodInitialized_184345ef4 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Maximum",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ef5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
          Il2CppMethodInitialized_184345ef5 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Average",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicMaterialCombineEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ef6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
          Il2CppMethodInitialized_184345ef6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Minimum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum (const MethodInfo* method);
// 0x181fe5b40

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_184345ef3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Multiply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply (const MethodInfo* method);
// 0x181fe5be0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_184345ef4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Maximum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum (const MethodInfo* method);
// 0x181fe55a0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_184345ef5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Average
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average (const MethodInfo* method);
// 0x181fe05a0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_184345ef6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fea2b0

void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Average");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum");
    il2cpp_codegen_initialize_runtime_metadata(&"Maximum");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiply");
    Il2CppMethodInitialized_184345ef7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Minimum",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Multiply",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Maximum",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Average",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->static_fields->MemberNames
               ,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Minimum>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Multiply>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Maximum>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Average>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x181feea70

void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345eef = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Minimum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Multiply
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Maximum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Average
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x181feeac0

System_String_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicMaterialCombineEnum");
    Il2CppMethodInitialized_184345ef0 = '\x01';
  }
  return "PhysicMaterialCombineEnum";
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers(CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, MethodInfo* method)

{
  return true;
}


