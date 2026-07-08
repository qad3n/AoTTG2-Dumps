// Type: CustomLogic.CustomLogicProjectileNameEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProjectileNameEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicProjectileNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProjectileNameEnum_o* CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e8ebe0

CustomLogic_CustomLogicProjectileNameEnum_o *
CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057035ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicProjectileNameEnum);
    DAT_057035ac = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicProjectileNameEnum);
      if (DAT_057035a3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035a3 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicProjectileNameEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicProjectileNameEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicProjectileNameEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e8ed00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_057035ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Flare");
    il2cpp_init_method_metadata(&"Rock2");
    il2cpp_init_method_metadata(&"CannonBall");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Thunderspear");
    il2cpp_init_method_metadata(&"Rock1");
    DAT_057035ad = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x3c3eb8d8) {
    if (uVar1 == 0x23b28a7f) {
      bVar2 = System_String__op_Equality(name,"Rock1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057035b3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rock1_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
          DAT_057035b3 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x24b28c12) {
      bVar2 = System_String__op_Equality(name,"Rock2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057035b4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rock2_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
          DAT_057035b4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x3c3eb8d7) &&
            (bVar2 = System_String__op_Equality(name,"Flare",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057035b0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Flare_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
        DAT_057035b0 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x99d03dfb) {
    if (uVar1 == 0x8d87a40b) {
      bVar2 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057035b1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeThrow_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
          DAT_057035b1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x99d03dfa) &&
            (bVar2 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057035ae == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thunderspear_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
        DAT_057035ae = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0x9fc581fa) {
    bVar2 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057035b2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SmokeBomb_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
        DAT_057035b2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xcd667d01) &&
          (bVar2 = System_String__op_Equality(name,"CannonBall",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035af == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CannonBall_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
      DAT_057035af = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicProjectileNameEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x3e8f080

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thunderspear_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035ae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__CannonBall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall (const MethodInfo* method);
// 0x3e8f120

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CannonBall_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035af = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Flare
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare (const MethodInfo* method);
// 0x3e8f1c0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Flare_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035b0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x3e8f260

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeThrow_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035b1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x3e8f300

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SmokeBomb_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035b2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1 (const MethodInfo* method);
// 0x3e8f3a0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rock1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2 (const MethodInfo* method);
// 0x3e8f440

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (DAT_057035b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rock2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProjectileNameEnum__object);
    DAT_057035b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProjectileNameEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnu);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e8f4e0

void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057035b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Flare");
    il2cpp_init_method_metadata(&"Rock2");
    il2cpp_init_method_metadata(&"CannonBall");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Thunderspear");
    il2cpp_init_method_metadata(&"Rock1");
    DAT_057035b5 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Thunderspear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CannonBall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Flare",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SmokeBomb",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rock1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rock2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f680

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__Thunderspear>g____getter_2_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570382e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_0570382e = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__CannonBall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f6f0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__CannonBall>g____getter_3_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570382f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_0570382f = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Flare>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f760

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__Flare>g____getter_4_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703830 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_05703830 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f7d0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__BladeThrow>g____getter_5_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703831 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_05703831 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f840

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__SmokeBomb>g____getter_6_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703832 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_05703832 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f8b0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__Rock1>g____getter_7_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703833 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_05703833 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock2>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x3e8f920

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__<__CreatePropertyBinding__Rock2>g____getter_8_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703834 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_05703834 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicProjectileNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum___ctor (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x3e8e800

void CustomLogic_CustomLogicProjectileNameEnum___ctor
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035a3 = '\x01';
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


// CustomLogic.CustomLogicProjectileNameEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear (const MethodInfo* method);
// 0x3e8e870

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035a4 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_CannonBall
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall (const MethodInfo* method);
// 0x3e8e8e0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Flare
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Flare (const MethodInfo* method);
// 0x3e8e950

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Flare(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow (const MethodInfo* method);
// 0x3e8e9c0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb (const MethodInfo* method);
// 0x3e8ea30

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock1
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock1 (const MethodInfo* method);
// 0x3e8eaa0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock2
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock2 (const MethodInfo* method);
// 0x3e8eb10

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    DAT_057035aa = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_ClassName (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x3e8eb80

System_String_o *
CustomLogic_CustomLogicProjectileNameEnum__get_ClassName
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  if (DAT_057035ab == '\0') {
    il2cpp_init_method_metadata(&"ProjectileNameEnum");
    DAT_057035ab = '\x01';
  }
  return "ProjectileNameEnum";
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x3e8ebb0

bool_conflict
CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x3e8ebc0

bool_conflict
CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x3e8ebd0

bool_conflict
CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


