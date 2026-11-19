// Type: CustomLogic.CustomLogicHorseAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicHorseAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHorseAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHorseAnimationEnum_o* CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a66510

CustomLogic_CustomLogicHorseAnimationEnum_o *
CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075463d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum);
    Il2CppMethodInitialized_075463d7 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHorseAnimationEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum);
  if (Il2CppMethodInitialized_075463ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicHorseAnimationEnum_o *)__this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a66630

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHorseAnimationEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_075463d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle2");
    il2cpp_codegen_initialize_runtime_metadata(&"Crazy");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle0");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle3");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle1");
    Il2CppMethodInitialized_075463d8 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x2bc30014) {
    if (uVar2 == 0x22ccd730) {
      bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x2ac2fe80) {
      bVar1 = System_String__op_Equality(name,"Idle3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x2bc30013) {
      bVar1 = System_String__op_Equality(name,"Idle2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x2dc3033a) {
    if (uVar2 == 0x2cc301a6) {
      bVar1 = System_String__op_Equality(name,"Idle1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x2dc30339) {
      bVar1 = System_String__op_Equality(name,"Idle0",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0x8d57e66a) {
    bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xbbd1f9d6) {
    bVar1 = System_String__op_Equality(name,"Crazy",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHorseAnimationEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0 (const MethodInfo* method);
// 0x5a669b0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1 (const MethodInfo* method);
// 0x5a66a50

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2 (const MethodInfo* method);
// 0x5a66af0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463db = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3 (const MethodInfo* method);
// 0x5a66b90

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Crazy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy (const MethodInfo* method);
// 0x5a66c30

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x5a66cd0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a66d70

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicHorseAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object);
    Il2CppMethodInitialized_075463df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHorseAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a66e10

void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075463e0 == '\0') {
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
    Il2CppMethodInitialized_075463e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle0",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Crazy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle0>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a66fb0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465a9 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle0;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle1>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a67020

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465aa = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 8);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle2>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a67090

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465ab = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle3>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a67100

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465ac = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Idle3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Crazy>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a67170

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465ad = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Crazy;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a671e0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465ae = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Run;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a67250

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075465af = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HorseAnimations->static_fields->Walk;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum___ctor (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a66130

void CustomLogic_CustomLogicHorseAnimationEnum___ctor
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463ce = '\x01';
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


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle0
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0 (const MethodInfo* method);
// 0x5a661a0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463cf = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Idle0;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle1
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1 (const MethodInfo* method);
// 0x5a66210

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463d0 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Idle1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 8);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle2
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2 (const MethodInfo* method);
// 0x5a66280

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463d1 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Idle2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle3
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3 (const MethodInfo* method);
// 0x5a662f0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463d2 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Idle3;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Crazy
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy (const MethodInfo* method);
// 0x5a66360

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463d3 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Crazy;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Run (const MethodInfo* method);
// 0x5a663d0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Run(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463d4 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Run;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Walk (const MethodInfo* method);
// 0x5a66440

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Walk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    Il2CppMethodInitialized_075463d5 = '\x01';
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HorseAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseAnimations);
    return TypeInfo_Characters_HorseAnimations->static_fields->Walk;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HorseAnimations)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a664b0

System_String_o *
CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075463d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HorseAnimationEnum");
    Il2CppMethodInitialized_075463d6 = '\x01';
  }
  return "HorseAnimationEnum";
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a664e0

bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a664f0

bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a66500

bool CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


