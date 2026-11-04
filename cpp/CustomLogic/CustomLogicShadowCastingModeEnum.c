// Type: CustomLogic.CustomLogicShadowCastingModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShadowCastingModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShadowCastingModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShadowCastingModeEnum_o* CustomLogic_CustomLogicShadowCastingModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fef7d0

CustomLogic_CustomLogicShadowCastingModeEnum_o *
CustomLogic_CustomLogicShadowCastingModeEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_18434603f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum);
    Il2CppMethodInitialized_18434603f = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum)
      ;
      if (Il2CppMethodInitialized_18434603d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434603d = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicShadowCastingModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShadowCastingModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd84a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowsOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoSided");
    Il2CppMethodInitialized_184346040 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Off",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346041 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
      Il2CppMethodInitialized_184346041 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"On",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346042 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
        Il2CppMethodInitialized_184346042 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"TwoSided",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346043 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
          Il2CppMethodInitialized_184346043 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"ShadowsOnly",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShadowCastingModeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346044 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
          Il2CppMethodInitialized_184346044 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__Off
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off (const MethodInfo* method);
// 0x181fe5e60

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off(MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_184346041 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__On
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On (const MethodInfo* method);
// 0x181fe5fa0

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On(MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_184346042 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__TwoSided
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided (const MethodInfo* method);
// 0x181fe8de0

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided(MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_184346043 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__ShadowsOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly (const MethodInfo* method);
// 0x181fe7120

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly
          (MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_184346044 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fec230

void CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346045 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowsOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoSided");
    Il2CppMethodInitialized_184346045 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Off",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"On",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TwoSided",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowsOnly",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0(CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__On>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__On_g____getter_3_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__On_g____getter_3_0(CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__TwoSided>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__TwoSided_g____getter_4_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__TwoSided_g____getter_4_0(CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__ShadowsOnly>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__ShadowsOnly_g____getter_5_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__ShadowsOnly_g____getter_5_0(CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShadowCastingModeEnum___ctor (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x181fef090

void CustomLogic_CustomLogicShadowCastingModeEnum___ctor
               (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434603d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434603d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_Off
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_Off (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicShadowCastingModeEnum__get_Off(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_On
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_On (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicShadowCastingModeEnum__get_On(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_TwoSided
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_TwoSided (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicShadowCastingModeEnum__get_TwoSided(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_ShadowsOnly
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_ShadowsOnly (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicShadowCastingModeEnum__get_ShadowsOnly(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShadowCastingModeEnum__get_ClassName (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x181fef0e0

System_String_o *
CustomLogic_CustomLogicShadowCastingModeEnum__get_ClassName
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434603e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowCastingModeEnum");
    Il2CppMethodInitialized_18434603e = '\x01';
  }
  return "ShadowCastingModeEnum";
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsAbstract (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShadowCastingModeEnum__get_IsAbstract(CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsStatic (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShadowCastingModeEnum__get_IsStatic(CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShadowCastingModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


