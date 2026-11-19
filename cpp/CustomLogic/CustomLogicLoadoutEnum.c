// Type: CustomLogic.CustomLogicLoadoutEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLoadoutEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLoadoutEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLoadoutEnum_o* CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a95960

CustomLogic_CustomLogicLoadoutEnum_o *
CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLoadoutEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754682f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_0754682f = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLoadoutEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  if (Il2CppMethodInitialized_07546823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546823 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a95a80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLoadoutEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanLarge");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSmall");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanMedium");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAPG");
    Il2CppMethodInitialized_07546830 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7b873af1) {
    if (uVar2 < 0x1ca57969) {
      if (uVar2 == 0x19acadc0) {
        bVar1 = System_String__op_Equality(name,"HumanUnarmed",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanUnarmed
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanUnarmed
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1ca57968) {
        bVar1 = System_String__op_Equality(name,"TitanLarge",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x54c554de) {
      bVar1 = System_String__op_Equality(name,"HumanThunderspears",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7b873af0) {
      bVar1 = System_String__op_Equality(name,"TitanSmall",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb7cd2303) {
    if (uVar2 == 0x927a02b5) {
      bVar1 = System_String__op_Equality(name,"HumanBlades",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb7cd2302) {
      bVar1 = System_String__op_Equality(name,"TitanMedium",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xea115bcc) {
    bVar1 = System_String__op_Equality(name,"HumanAPG",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings)
        ;
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xea789261) {
    bVar1 = System_String__op_Equality(name,"HumanAHSS",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings)
        ;
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfacf0a23) {
    bVar1 = System_String__op_Equality(name,"HumanCivilian",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings)
        ;
        pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanCivilian
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanCivilian
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLoadoutEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanBlades
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades (const MethodInfo* method);
// 0x5a95ee0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546831 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS (const MethodInfo* method);
// 0x5a95f80

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546832 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAPG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG (const MethodInfo* method);
// 0x5a96020

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546833 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanThunderspears
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears (const MethodInfo* method);
// 0x5a960c0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546834 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanUnarmed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanUnarmed (const MethodInfo* method);
// 0x5a96160

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanUnarmed(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546835 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanCivilian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanCivilian (const MethodInfo* method);
// 0x5a96200

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanCivilian(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546836 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanSmall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall (const MethodInfo* method);
// 0x5a962a0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546837 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanMedium
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium (const MethodInfo* method);
// 0x5a96340

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546838 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanLarge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge (const MethodInfo* method);
// 0x5a963e0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_07546839 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a96480

void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754683a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAnnie");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanLarge");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterArmored");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSmall");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterWallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanMedium");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterEren");
    Il2CppMethodInitialized_0754683a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterAnnie",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterEren",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterArmored",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterWallColossal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanBlades",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanAHSS",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanAPG",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanThunderspears",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanUnarmed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanCivilian",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanSmall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanMedium",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanLarge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanBlades>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a966e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a966fd: cmp byte ptr [rip + 0x1ab02fa], 0
// asm:   0x5a96704: je 0x5a96759

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754683b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_0754683b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_075469fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_075469fe = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a967a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a967bd: cmp byte ptr [rip + 0x1ab023b], 0
// asm:   0x5a967c4: je 0x5a9681a

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754683c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_0754683c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_075469ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_075469ff = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 8);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAPG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a96860
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9687d: cmp byte ptr [rip + 0x1ab017c], 0
// asm:   0x5a96884: je 0x5a968da

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754683d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_0754683d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_07546a00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546a00 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x18);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanThunderspears>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a96920
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a9693d: cmp byte ptr [rip + 0x1ab00bd], 0
// asm:   0x5a96944: je 0x5a9699a

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754683e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_0754683e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_07546a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546a01 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x10);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanUnarmed>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanUnarmed_g____getter_6_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a969e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a969fd: cmp byte ptr [rip + 0x1aafffe], 0
// asm:   0x5a96a04: je 0x5a96a5a

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanUnarmed_g____getter_6_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754683f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_0754683f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_07546a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546a02 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x20);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanCivilian>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanCivilian_g____getter_7_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a96aa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a96abd: cmp byte ptr [rip + 0x1aaff3f], 0
// asm:   0x5a96ac4: je 0x5a96b1a

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanCivilian_g____getter_7_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_07546840 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_07546a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546a03 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x28);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanSmall>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_8_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a96b60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a96b7d: cmp byte ptr [rip + 0x1aafca6], 0
// asm:   0x5a96b84: je 0x5a96bc6

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_8_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_07546841 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_0754682a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    Il2CppMethodInitialized_0754682a = 1;
    return (Il2CppObject *)"Small";
  }
  return (Il2CppObject *)"Small";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanMedium>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_9_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a96bf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a96c0d: cmp byte ptr [rip + 0x1aafc17], 0
// asm:   0x5a96c14: je 0x5a96c56

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_9_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_07546842 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_0754682b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_0754682b = 1;
    return (Il2CppObject *)"Medium";
  }
  return (Il2CppObject *)"Medium";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanLarge>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_10_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x5a96c80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a96c9d: cmp byte ptr [rip + 0x1aafb88], 0
// asm:   0x5a96ca4: je 0x5a96ce6

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_10_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_07546843 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_0754682c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    Il2CppMethodInitialized_0754682c = 1;
    return (Il2CppObject *)"Large";
  }
  return (Il2CppObject *)"Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___ctor (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x5a95470

void CustomLogic_CustomLogicLoadoutEnum___ctor
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546823 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanBlades
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades (const MethodInfo* method);
// 0x5a954e0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546824 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546824 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS (const MethodInfo* method);
// 0x5a95550

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546825 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 8);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAPG
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG (const MethodInfo* method);
// 0x5a955c0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546826 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x18);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanThunderspears
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears (const MethodInfo* method);
// 0x5a95630

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546827 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x10);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanUnarmed
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanUnarmed (const MethodInfo* method);
// 0x5a956a0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanUnarmed(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546828 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546828 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x20);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanCivilian
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanCivilian (const MethodInfo* method);
// 0x5a95710

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanCivilian(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546829 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x28);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanSmall
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall (const MethodInfo* method);
// 0x5a95780

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754682a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    Il2CppMethodInitialized_0754682a = '\x01';
  }
  return "Small";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanMedium
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium (const MethodInfo* method);
// 0x5a957b0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754682b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_0754682b = '\x01';
  }
  return "Medium";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanLarge
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge (const MethodInfo* method);
// 0x5a957e0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754682c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    Il2CppMethodInitialized_0754682c = '\x01';
  }
  return "Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_ClassName (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x5a95810

System_String_o *
CustomLogic_CustomLogicLoadoutEnum__get_ClassName
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754682d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadoutEnum");
    Il2CppMethodInitialized_0754682d = '\x01';
  }
  return "LoadoutEnum";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x5a95840

bool CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsStatic (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x5a95850

bool CustomLogic_CustomLogicLoadoutEnum__get_IsStatic
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x5a95860

bool CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLoadoutEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___cctor (const MethodInfo* method);
// 0x5a95870

void CustomLogic_CustomLogicLoadoutEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicLoadoutEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_0754682e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_0754682e = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterAnnie = "Annie";
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterAnnie);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields;
  pCVar1->ShifterEren = "Eren";
  Il2CppCodeGenWriteBarrier(&pCVar1->ShifterEren);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields;
  pCVar1->ShifterArmored = "Armored";
  Il2CppCodeGenWriteBarrier(&pCVar1->ShifterArmored);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields;
  pCVar1->ShifterWallColossal = "WallColossal";
  Il2CppCodeGenWriteBarrier(&pCVar1->ShifterWallColossal);
  return;
}


