// Type: CustomLogic.CustomLogicWallColossalAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWallColossalAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicWallColossalAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWallColossalAnimationEnum_o* CustomLogic_CustomLogicWallColossalAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ea9810

CustomLogic_CustomLogicWallColossalAnimationEnum_o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Factory__CreateInstance
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
  if (DAT_057037bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalAnimationEnum);
    DAT_057037bc = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalAnimationEnum);
      if (DAT_057037b2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057037b2 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicWallColossalAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicWallColossalAnimationEnum_CreateInsta);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ea9930

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_057037bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AttackSteam");
    il2cpp_init_method_metadata(&"AttackWallSlap1R");
    il2cpp_init_method_metadata(&"AttackWallSlap2R");
    il2cpp_init_method_metadata(&"AttackWallSlap1L");
    il2cpp_init_method_metadata(&"AttackWallSlap2L");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"AttackSweep");
    DAT_057037bd = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x67ff8d2c) {
    if (uVar1 < 0x513bb56c) {
      if (uVar1 == 0x45aa17b3) {
        bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057037be == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
            DAT_057037be = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x513bb56b) &&
              (bVar2 = System_String__op_Equality(name,"AttackWallSlap2R",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037c2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap2);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
          DAT_057037c2 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x5f3bcb75) {
      bVar2 = System_String__op_Equality(name,"AttackWallSlap2L",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037c1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap2);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
          DAT_057037c1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x67ff8d2b) &&
            (bVar2 = System_String__op_Equality(name,"AttackSteam",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037c3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSteam_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
        DAT_057037c3 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x826affcc) {
    if (uVar1 == 0x826affcb) {
      bVar2 = System_String__op_Equality(name,"AttackSweep",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037c4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSweep_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
          DAT_057037c4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7d3e3946) &&
            (bVar2 = System_String__op_Equality(name,"AttackWallSlap1L",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037bf == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
        DAT_057037bf = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0x973e6234) {
    bVar2 = System_String__op_Equality(name,"AttackWallSlap1R",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037c0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
        DAT_057037c0 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xc8f30ee7) &&
          (bVar2 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037c5 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
      DAT_057037c5 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicWallColossalAnimationEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x3ea9d20

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037be = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L (const MethodInfo* method);
// 0x3ea9dc0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037bf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R (const MethodInfo* method);
// 0x3ea9e60

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037c0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L (const MethodInfo* method);
// 0x3ea9f00

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037c1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R (const MethodInfo* method);
// 0x3ea9fa0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWallSlap2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037c2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSteam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam (const MethodInfo* method);
// 0x3eaa040

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSteam_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSweep
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep (const MethodInfo* method);
// 0x3eaa0e0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSweep_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x3eaa180

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this;
  
  if (DAT_057037c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackKick_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
    DAT_057037c5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalAnimationEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalAnimati);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalAnima);
  return __this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3eaa220

void CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057037c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AttackSteam");
    il2cpp_init_method_metadata(&"AttackWallSlap1R");
    il2cpp_init_method_metadata(&"AttackWallSlap2R");
    il2cpp_init_method_metadata(&"AttackWallSlap1L");
    il2cpp_init_method_metadata(&"AttackWallSlap2L");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"AttackKick");
    il2cpp_init_method_metadata(&"AttackSweep");
    DAT_057037c6 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackWallSlap1L",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackWallSlap1R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackWallSlap2L",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackWallSlap2R",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSteam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSweep",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackKick",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa3e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__Idle>g____getter_2_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b3 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_idle");
    DAT_057037b3 = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1L>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1L_g____getter_3_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa410

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackWallSlap1L>g____getter_3_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b4 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap1_L");
    DAT_057037b4 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1R>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1R_g____getter_4_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa440

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackWallSlap1R>g____getter_4_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b5 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap1_R");
    DAT_057037b5 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2L>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2L_g____getter_5_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa470

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackWallSlap2L>g____getter_5_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b6 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap2_L");
    DAT_057037b6 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2R>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2R_g____getter_6_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa4a0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackWallSlap2R>g____getter_6_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b7 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap2_R");
    DAT_057037b7 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSteam>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSteam_g____getter_7_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa4d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSteam>g____getter_7_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b8 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_steam");
    DAT_057037b8 = '\x01';
  }
  return "Armature_VER2|wall_attack_steam";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSweep>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSweep_g____getter_8_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa500

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackSweep>g____getter_8_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037b9 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_sweep");
    DAT_057037b9 = '\x01';
  }
  return "Armature_VER2|wall_attack_sweep";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_9_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x3eaa530

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__<__CreatePropertyBinding__AttackKick>g____getter_9_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_057037ba == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_kick");
    DAT_057037ba = '\x01';
  }
  return "Armature_VER2|wall_colossal_kick";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalAnimationEnum___ctor (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x3ea95c0

void CustomLogic_CustomLogicWallColossalAnimationEnum___ctor
               (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057037b2 = '\x01';
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


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_Idle (const MethodInfo* method);
// 0x3ea9630

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_Idle(MethodInfo *method)

{
  if (DAT_057037b3 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_idle");
    DAT_057037b3 = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1L
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1L (const MethodInfo* method);
// 0x3ea9660

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1L(MethodInfo *method)

{
  if (DAT_057037b4 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap1_L");
    DAT_057037b4 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1R
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1R (const MethodInfo* method);
// 0x3ea9690

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1R(MethodInfo *method)

{
  if (DAT_057037b5 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap1_R");
    DAT_057037b5 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2L
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2L (const MethodInfo* method);
// 0x3ea96c0

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2L(MethodInfo *method)

{
  if (DAT_057037b6 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap2_L");
    DAT_057037b6 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2R
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2R (const MethodInfo* method);
// 0x3ea96f0

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2R(MethodInfo *method)

{
  if (DAT_057037b7 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap2_R");
    DAT_057037b7 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSteam
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSteam (const MethodInfo* method);
// 0x3ea9720

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSteam(MethodInfo *method)

{
  if (DAT_057037b8 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_steam");
    DAT_057037b8 = '\x01';
  }
  return "Armature_VER2|wall_attack_steam";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSweep
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSweep (const MethodInfo* method);
// 0x3ea9750

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSweep(MethodInfo *method)

{
  if (DAT_057037b9 == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_sweep");
    DAT_057037b9 = '\x01';
  }
  return "Armature_VER2|wall_attack_sweep";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x3ea9780

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (DAT_057037ba == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_kick");
    DAT_057037ba = '\x01';
  }
  return "Armature_VER2|wall_colossal_kick";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_ClassName (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x3ea97b0

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_057037bb == '\0') {
    il2cpp_init_method_metadata(&"WallColossalAnimationEnum");
    DAT_057037bb = '\x01';
  }
  return "WallColossalAnimationEnum";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x3ea97e0

bool_conflict
CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsStatic (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x3ea97f0

bool_conflict
CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x3ea9800

bool_conflict
CustomLogic_CustomLogicWallColossalAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


