// Type: CustomLogic.CustomLogicLoadoutEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLoadoutEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLoadoutEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLoadoutEnum_o* CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e7dfc0

CustomLogic_CustomLogicLoadoutEnum_o *
CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicLoadoutEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057033c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033c2 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicLoadoutEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLoadoutEnum);
      if (DAT_057033b8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033b8 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLoadoutEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLoadoutEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e7e0e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_057033c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"HumanBlades");
    il2cpp_init_method_metadata(&"TitanLarge");
    il2cpp_init_method_metadata(&"HumanAHSS");
    il2cpp_init_method_metadata(&"TitanSmall");
    il2cpp_init_method_metadata(&"HumanThunderspears");
    il2cpp_init_method_metadata(&"TitanMedium");
    il2cpp_init_method_metadata(&"HumanAPG");
    DAT_057033c3 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x7b873af1) {
    if (uVar1 == 0x1ca57968) {
      bVar2 = System_String__op_Equality(name,"TitanLarge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057033ca == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanLarge_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
          DAT_057033ca = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x54c554de) {
      bVar2 = System_String__op_Equality(name,"HumanThunderspears",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057033c7 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanThunderspe);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
          DAT_057033c7 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7b873af0) &&
            (bVar2 = System_String__op_Equality(name,"TitanSmall",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057033c8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanSmall_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
        DAT_057033c8 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb7cd2303) {
    if (uVar1 == 0x927a02b5) {
      bVar2 = System_String__op_Equality(name,"HumanBlades",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057033c4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanBlades_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
          DAT_057033c4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb7cd2302) &&
            (bVar2 = System_String__op_Equality(name,"TitanMedium",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057033c9 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanMedium_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
        DAT_057033c9 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xea115bcc) {
    bVar2 = System_String__op_Equality(name,"HumanAPG",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057033c6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanAPG_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
        DAT_057033c6 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xea789261) &&
          (bVar2 = System_String__op_Equality(name,"HumanAHSS",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033c5 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanAHSS_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
      DAT_057033c5 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLoadoutEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanBlades
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades (const MethodInfo* method);
// 0x3e7e460

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanBlades_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS (const MethodInfo* method);
// 0x3e7e500

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanAHSS_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033c5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAPG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG (const MethodInfo* method);
// 0x3e7e5a0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanAPG_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033c6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanThunderspears
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears (const MethodInfo* method);
// 0x3e7e640

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HumanThunderspe);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033c7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanSmall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall (const MethodInfo* method);
// 0x3e7e6e0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanSmall_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033c8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanMedium
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium (const MethodInfo* method);
// 0x3e7e780

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanMedium_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033c9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanLarge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge (const MethodInfo* method);
// 0x3e7e820

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this;
  
  if (DAT_057033ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TitanLarge_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLoadoutEnum__object);
    DAT_057033ca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLoadoutEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLoadoutEnum);
  return __this;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e7e8c0

void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"HumanBlades");
    il2cpp_init_method_metadata(&"ShifterAnnie");
    il2cpp_init_method_metadata(&"TitanLarge");
    il2cpp_init_method_metadata(&"ShifterArmored");
    il2cpp_init_method_metadata(&"HumanAHSS");
    il2cpp_init_method_metadata(&"TitanSmall");
    il2cpp_init_method_metadata(&"HumanThunderspears");
    il2cpp_init_method_metadata(&"ShifterWallColossal");
    il2cpp_init_method_metadata(&"TitanMedium");
    il2cpp_init_method_metadata(&"HumanAPG");
    il2cpp_init_method_metadata(&"ShifterEren");
    DAT_057033cb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"ShifterAnnie",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShifterEren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShifterArmored",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShifterWallColossal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HumanBlades",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HumanAHSS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HumanAPG",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HumanThunderspears",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanSmall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanMedium",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TitanLarge",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanBlades>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7eae0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__HumanBlades>g____getter_2_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033cc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703596 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05703596 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7eba0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__HumanAHSS>g____getter_3_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033cd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703597 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05703597 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAPG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7ec60

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__HumanAPG>g____getter_4_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033ce = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703598 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05703598 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanThunderspears>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7ed20

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__HumanThunderspears>g____getter_5_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033cf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703599 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05703599 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanSmall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_6_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7ede0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__TitanSmall>g____getter_6_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033d0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033bd == '\0') {
    il2cpp_init_method_metadata(&"Small");
    DAT_057033bd = 1;
    return "Small";
  }
  return "Small";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanMedium>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_7_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7ee70

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__TitanMedium>g____getter_7_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033d1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033be == '\0') {
    il2cpp_init_method_metadata(&"Medium");
    DAT_057033be = 1;
    return "Medium";
  }
  return "Medium";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanLarge>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_8_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x3e7ef00

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings__<__CreatePropertyBinding__TitanLarge>g____getter_8_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    DAT_057033d2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLoadoutEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033bf == '\0') {
    il2cpp_init_method_metadata(&"Large");
    DAT_057033bf = 1;
    return "Large";
  }
  return "Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___ctor (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x3e7dbb0

void CustomLogic_CustomLogicLoadoutEnum___ctor
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033b8 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanBlades
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades (const MethodInfo* method);
// 0x3e7dc20

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057033b9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS (const MethodInfo* method);
// 0x3e7dc90

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057033ba = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAPG
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG (const MethodInfo* method);
// 0x3e7dd00

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057033bb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanThunderspears
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears (const MethodInfo* method);
// 0x3e7dd70

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057033bc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanSmall
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall (const MethodInfo* method);
// 0x3e7dde0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall(MethodInfo *method)

{
  if (DAT_057033bd == '\0') {
    il2cpp_init_method_metadata(&"Small");
    DAT_057033bd = '\x01';
  }
  return "Small";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanMedium
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium (const MethodInfo* method);
// 0x3e7de10

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium(MethodInfo *method)

{
  if (DAT_057033be == '\0') {
    il2cpp_init_method_metadata(&"Medium");
    DAT_057033be = '\x01';
  }
  return "Medium";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanLarge
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge (const MethodInfo* method);
// 0x3e7de40

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge(MethodInfo *method)

{
  if (DAT_057033bf == '\0') {
    il2cpp_init_method_metadata(&"Large");
    DAT_057033bf = '\x01';
  }
  return "Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_ClassName (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x3e7de70

System_String_o *
CustomLogic_CustomLogicLoadoutEnum__get_ClassName
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033c0 == '\0') {
    il2cpp_init_method_metadata(&"LoadoutEnum");
    DAT_057033c0 = '\x01';
  }
  return "LoadoutEnum";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x3e7dea0

bool_conflict
CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsStatic (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x3e7deb0

bool_conflict
CustomLogic_CustomLogicLoadoutEnum__get_IsStatic
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLoadoutEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x3e7dec0

bool_conflict
CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLoadoutEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___cctor (const MethodInfo* method);
// 0x3e7ded0

void CustomLogic_CustomLogicLoadoutEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057033c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLoadoutEnum);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"WallColossal");
    il2cpp_init_method_metadata(&"Armored");
    DAT_057033c1 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicLoadoutEnum + 0xb8) = "Annie";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8),"Annie");
  lVar1 = *(long *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Eren";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Armored";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicLoadoutEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "WallColossal";
  il2cpp_runtime_glue(lVar1 + 0x18);
  return;
}


