// Type: CustomLogic.CustomLogicInputCategoryEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputCategoryEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputCategoryEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputCategoryEnum_o* CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce4c0

CustomLogic_CustomLogicInputCategoryEnum_o *
CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345c17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum);
    Il2CppMethodInitialized_184345c17 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum);
      if (Il2CppMethodInitialized_184345c0f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345c0f = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicInputCategoryEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputCategoryEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa8510

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345c18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_184345c18 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"General",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345c19 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
      Il2CppMethodInitialized_184345c19 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345c1a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
        Il2CppMethodInitialized_184345c1a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345c1b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
          Il2CppMethodInitialized_184345c1b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Interaction",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345c1c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
            Il2CppMethodInitialized_184345c1c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"AnnieShifter",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c1d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
              Il2CppMethodInitialized_184345c1d = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get
            ;
          }
          else {
            bVar1 = System_String__op_Equality(name,"ErenShifter",(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputCategoryEnum not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
              pMVar3 = il2cpp_codegen_get_runtime_metadata
                                 (&
                                  MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings_CreateMemberBinding
                                 );
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
            }
            if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345c1e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
              Il2CppMethodInitialized_184345c1e = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett
            ;
          }
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__General
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General (const MethodInfo* method);
// 0x181fbde50

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_184345c19 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x181fbefd0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_184345c1a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x181fc2e50

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_184345c1b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Interaction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction (const MethodInfo* method);
// 0x181fbf930

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_184345c1c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__AnnieShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter (const MethodInfo* method);
// 0x181fba6b0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_184345c1d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__ErenShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter (const MethodInfo* method);
// 0x181fbd590

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345c1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_184345c1e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc5be0

void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345c1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_184345c1f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"General",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Human",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interaction",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AnnieShifter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ErenShifter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__General>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x181fb4f00

Il2CppObject*
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0(CustomLogic_CustomLogicInputCategoryEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345c10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_184345c10 = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x181fb5ab0

Il2CppObject*
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0(CustomLogic_CustomLogicInputCategoryEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345c11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_184345c11 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x181fb8600

Il2CppObject*
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0(CustomLogic_CustomLogicInputCategoryEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345c12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184345c12 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Interaction>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x181fb6040

Il2CppObject*
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0(CustomLogic_CustomLogicInputCategoryEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345c13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_184345c13 = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__AnnieShifter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x181fb29b0

Il2CppObject*
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0(CustomLogic_CustomLogicInputCategoryEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    Il2CppMethodInitialized_184345c14 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__ErenShifter>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x181fb4940

Il2CppObject*
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0(CustomLogic_CustomLogicInputCategoryEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184345c15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    Il2CppMethodInitialized_184345c15 = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum___ctor (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x181fcb520

void CustomLogic_CustomLogicInputCategoryEnum___ctor
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345c0f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_General
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_General (const MethodInfo* method);
// 0x181fb4f00

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_General(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_184345c10 = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Human (const MethodInfo* method);
// 0x181fb5ab0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Human(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_184345c11 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Titan (const MethodInfo* method);
// 0x181fb8600

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Titan(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184345c12 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Interaction
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Interaction (const MethodInfo* method);
// 0x181fb6040

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Interaction(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_184345c13 = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_AnnieShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter (const MethodInfo* method);
// 0x181fb29b0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    Il2CppMethodInitialized_184345c14 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ErenShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter (const MethodInfo* method);
// 0x181fb4940

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    Il2CppMethodInitialized_184345c15 = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ClassName (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x181fcb570

System_String_o *
CustomLogic_CustomLogicInputCategoryEnum__get_ClassName
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputCategoryEnum");
    Il2CppMethodInitialized_184345c16 = '\x01';
  }
  return "InputCategoryEnum";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract(CustomLogic_CustomLogicInputCategoryEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic(CustomLogic_CustomLogicInputCategoryEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputCategoryEnum_o* __this, MethodInfo* method)

{
  return true;
}


