// Type: CustomLogic.CustomLogicHorseAnimationEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHorseAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHorseAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHorseAnimationEnum_o* CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fcebe0

CustomLogic_CustomLogicHorseAnimationEnum_o *
CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_184345a51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum);
    Il2CppMethodInitialized_184345a51 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum);
      if (Il2CppMethodInitialized_184345a48 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345a48 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHorseAnimationEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHorseAnimationEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa7fc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345a52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle2");
    il2cpp_codegen_initialize_runtime_metadata(&"Crazy");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle0");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle3");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle1");
    Il2CppMethodInitialized_184345a52 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x2bc30014) {
    if (uVar2 == 0x22ccd730) {
      bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a59 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
          Il2CppMethodInitialized_184345a59 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0
        ;
label_181fa8457:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_00;
      }
    }
    else if (uVar2 == 0x2ac2fe80) {
      bVar1 = System_String__op_Equality(name,"Idle3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a56 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
          Il2CppMethodInitialized_184345a56 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5
        ;
        goto label_181fa8457;
      }
    }
    else if (uVar2 == 0x2bc30013) {
      bVar1 = System_String__op_Equality(name,"Idle2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a55 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
          Il2CppMethodInitialized_184345a55 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4
        ;
        goto label_181fa8457;
      }
    }
  }
  else if (uVar2 < 0x2dc3033a) {
    if (uVar2 == 0x2cc301a6) {
      bVar1 = System_String__op_Equality(name,"Idle1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a54 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
          Il2CppMethodInitialized_184345a54 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3
        ;
        goto label_181fa8457;
      }
    }
    else if (uVar2 == 0x2dc30339) {
      bVar1 = System_String__op_Equality(name,"Idle0",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a53 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
          Il2CppMethodInitialized_184345a53 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2
        ;
        goto label_181fa8457;
      }
    }
  }
  else if (uVar2 == 0x8d57e66a) {
    bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345a58 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345a58 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0
      ;
      goto label_181fa8457;
    }
  }
  else if (uVar2 == 0xbbd1f9d6) {
    bVar1 = System_String__op_Equality(name,"Crazy",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345a57 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345a57 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6
      ;
      goto label_181fa8457;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHorseAnimationEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0 (const MethodInfo* method);
// 0x181fbf070

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a53 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1 (const MethodInfo* method);
// 0x181fbf110

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a54 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2 (const MethodInfo* method);
// 0x181fbf1b0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a55 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3 (const MethodInfo* method);
// 0x181fbf250

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a56 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Crazy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy (const MethodInfo* method);
// 0x181fbc870

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a57 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x181fc19b0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a58 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181fc3210

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_184345a59 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc4070

void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle2");
    il2cpp_codegen_initialize_runtime_metadata(&"Crazy");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle0");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle3");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle1");
    Il2CppMethodInitialized_184345a5a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle0",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Crazy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle0>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5ae0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d01 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle0;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle1>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5b30

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d02 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle1;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle2>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5b80

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d03 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle2;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle3>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5bd0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d04 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle3;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Crazy>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb40a0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d05 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Crazy;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7980

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d06 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Run;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8a50

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345d07 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Walk;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum___ctor (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fc6470

void CustomLogic_CustomLogicHorseAnimationEnum___ctor
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345a48 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle0
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0 (const MethodInfo* method);
// 0x181fc6540

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a49 = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Idle0;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle1
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1 (const MethodInfo* method);
// 0x181fc6590

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a4a = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Idle1;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle2
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2 (const MethodInfo* method);
// 0x181fc65e0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a4b = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Idle2;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle3
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3 (const MethodInfo* method);
// 0x181fc6630

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a4c = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Idle3;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Crazy
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy (const MethodInfo* method);
// 0x181fc64f0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a4d = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Crazy;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Run (const MethodInfo* method);
// 0x181fc6680

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Run(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a4e = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Run;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Walk (const MethodInfo* method);
// 0x181fc66d0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_184345a4f = '\x01';
  }
  if ((TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
  }
  return TypeInfo_Characters_HorseAnimations->static_fields->Walk;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fc64c0

System_String_o *
CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HorseAnimationEnum");
    Il2CppMethodInitialized_184345a50 = '\x01';
  }
  return "HorseAnimationEnum";
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract(CustomLogic_CustomLogicHorseAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic(CustomLogic_CustomLogicHorseAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers(CustomLogic_CustomLogicHorseAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


