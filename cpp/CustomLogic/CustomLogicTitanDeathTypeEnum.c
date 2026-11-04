// Type: CustomLogic.CustomLogicTitanDeathTypeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanDeathTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanDeathTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanDeathTypeEnum_o* CustomLogic_CustomLogicTitanDeathTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182016fc0

CustomLogic_CustomLogicTitanDeathTypeEnum_o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_1843461dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum);
    Il2CppMethodInitialized_1843461dc = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum);
      if (Il2CppMethodInitialized_1843461da == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843461da = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanDeathTypeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanDeathTypeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff56c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843461dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    Il2CppMethodInitialized_1843461dd = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_1843461de == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
      Il2CppMethodInitialized_1843461de = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843461df == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
        ;
        Il2CppMethodInitialized_1843461df = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Decapitate",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461e0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
          Il2CppMethodInitialized_1843461e0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Knockback",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanDeathTypeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843461e1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
          Il2CppMethodInitialized_1843461e1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Default
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Default (const MethodInfo* method);
// 0x182003870

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Default(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_1843461de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x182006930

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_1843461df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Decapitate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Decapitate (const MethodInfo* method);
// 0x182003730

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Decapitate(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_1843461e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Knockback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Knockback (const MethodInfo* method);
// 0x182005cb0

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Knockback(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843461e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_1843461e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x182009ee0

void CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843461e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    Il2CppMethodInitialized_1843461e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Default",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Decapitate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Knockback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_2_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_2_0(CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_3_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_3_0(CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Decapitate>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_4_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_4_0(CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Knockback>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Knockback_g____getter_5_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Knockback_g____getter_5_0
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanDeathTypeEnum___ctor (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x182015240

void CustomLogic_CustomLogicTitanDeathTypeEnum___ctor
               (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843461da = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Default
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Default (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicTitanDeathTypeEnum__get_Default(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Normal
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Normal (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicTitanDeathTypeEnum__get_Normal(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Decapitate
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Decapitate (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicTitanDeathTypeEnum__get_Decapitate(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Knockback
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Knockback (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicTitanDeathTypeEnum__get_Knockback(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanDeathTypeEnum__get_ClassName (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x182015290

System_String_o *
CustomLogic_CustomLogicTitanDeathTypeEnum__get_ClassName
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843461db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDeathTypeEnum");
    Il2CppMethodInitialized_1843461db = '\x01';
  }
  return "TitanDeathTypeEnum";
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsAbstract (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsAbstract(CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsStatic (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsStatic(CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanDeathTypeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


