// Type: CustomLogic.CustomLogicTitanTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicTitanTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanTypeEnum_o* CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5abff60

CustomLogic_CustomLogicTitanTypeEnum_o *
CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum);
    Il2CppMethodInitialized_07546c04 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanTypeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum);
  if (Il2CppMethodInitialized_07546bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546bfa = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTitanTypeEnum_o *)__this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac0080

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTitanTypeEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_07546c05 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x4b058385) {
    if (uVar2 < 0x2f9f45fa) {
      if (uVar2 == 0x19dc307e) {
        bVar1 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2f9f45f9) {
        bVar1 = System_String__op_Equality(name,"Abnormal",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x4115d182) {
      bVar1 = System_String__op_Equality(name,"Random",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x4b058384) {
      bVar1 = System_String__op_Equality(name,"Thrower",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x8f418f18) {
    if (uVar2 == 0x8f418f17) {
      bVar1 = System_String__op_Equality(name,"Crawler",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x58de2772) {
      bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe5828b91) {
    bVar1 = System_String__op_Equality(name,"Punk",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf331d01e) {
    bVar1 = System_String__op_Equality(name,"Jumper",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanTypeEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x5ac0470

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c06 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Abnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal (const MethodInfo* method);
// 0x5ac0510

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c07 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Jumper
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper (const MethodInfo* method);
// 0x5ac05b0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c08 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Crawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler (const MethodInfo* method);
// 0x5ac0650

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c09 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Thrower
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower (const MethodInfo* method);
// 0x5ac06f0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c0a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Punk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk (const MethodInfo* method);
// 0x5ac0790

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c0b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Default
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default (const MethodInfo* method);
// 0x5ac0830

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c0c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Random
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random (const MethodInfo* method);
// 0x5ac08d0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random(MethodInfo *method)

{
  System_Func_CustomLogicTitanTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
    Il2CppMethodInitialized_07546c0d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ac0970

void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546c0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_07546c0e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Abnormal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jumper",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Crawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thrower",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Punk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Default",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Random",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0b30

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07546bfb = '\x01';
  }
  return (Il2CppObject *)"Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Abnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0b60

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_07546bfc = '\x01';
  }
  return (Il2CppObject *)"Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Jumper>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0b90

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    Il2CppMethodInitialized_07546bfd = '\x01';
  }
  return (Il2CppObject *)"Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Crawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0bc0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    Il2CppMethodInitialized_07546bfe = '\x01';
  }
  return (Il2CppObject *)"Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Thrower>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0bf0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    Il2CppMethodInitialized_07546bff = '\x01';
  }
  return (Il2CppObject *)"Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Punk>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0c20

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    Il2CppMethodInitialized_07546c00 = '\x01';
  }
  return (Il2CppObject *)"Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0c50

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07546c01 = '\x01';
  }
  return (Il2CppObject *)"Default";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Random>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x5ac0c80

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_07546c02 = '\x01';
  }
  return (Il2CppObject *)"Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum___ctor (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x5abfd10

void CustomLogic_CustomLogicTitanTypeEnum___ctor
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546bfa = '\x01';
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


// CustomLogic.CustomLogicTitanTypeEnum$$get_Normal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Normal (const MethodInfo* method);
// 0x5abfd80

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Normal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07546bfb = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Abnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal (const MethodInfo* method);
// 0x5abfdb0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_07546bfc = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Jumper
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Jumper (const MethodInfo* method);
// 0x5abfde0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Jumper(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    Il2CppMethodInitialized_07546bfd = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Crawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Crawler (const MethodInfo* method);
// 0x5abfe10

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Crawler(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    Il2CppMethodInitialized_07546bfe = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Thrower
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Thrower (const MethodInfo* method);
// 0x5abfe40

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Thrower(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    Il2CppMethodInitialized_07546bff = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Punk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Punk (const MethodInfo* method);
// 0x5abfe70

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Punk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    Il2CppMethodInitialized_07546c00 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Default
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Default (const MethodInfo* method);
// 0x5abfea0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Default(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07546c01 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Random
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Random (const MethodInfo* method);
// 0x5abfed0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Random(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_07546c02 = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_ClassName (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x5abff00

System_String_o *
CustomLogic_CustomLogicTitanTypeEnum__get_ClassName
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanTypeEnum");
    Il2CppMethodInitialized_07546c03 = '\x01';
  }
  return "TitanTypeEnum";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x5abff30

bool CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x5abff40

bool CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x5abff50

bool CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


