// Type: CustomLogic.CustomLogicHorseAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHorseAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicHorseAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHorseAnimationEnum_o* CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e51230

CustomLogic_CustomLogicHorseAnimationEnum_o *
CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance
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
  if (DAT_05702fb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHorseAnimationEnum);
    DAT_05702fb1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHorseAnimationEnum);
      if (DAT_05702fa8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702fa8 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHorseAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHorseAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHorseAnimationEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e51350

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_05702fb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"Idle2");
    il2cpp_init_method_metadata(&"Crazy");
    il2cpp_init_method_metadata(&"Idle0");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"Idle3");
    il2cpp_init_method_metadata(&"Idle1");
    DAT_05702fb2 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x2bc30014) {
    if (uVar1 == 0x22ccd730) {
      bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702fb9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
          DAT_05702fb9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x2ac2fe80) {
      bVar2 = System_String__op_Equality(name,"Idle3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702fb6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle3_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
          DAT_05702fb6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x2bc30013) &&
            (bVar2 = System_String__op_Equality(name,"Idle2",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702fb5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle2_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
        DAT_05702fb5 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x2dc3033a) {
    if (uVar1 == 0x2cc301a6) {
      bVar2 = System_String__op_Equality(name,"Idle1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702fb4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle1_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
          DAT_05702fb4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x2dc30339) &&
            (bVar2 = System_String__op_Equality(name,"Idle0",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702fb3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle0_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
        DAT_05702fb3 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0x8d57e66a) {
    bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702fb8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
        DAT_05702fb8 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xbbd1f9d6) &&
          (bVar2 = System_String__op_Equality(name,"Crazy",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702fb7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Crazy_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
      DAT_05702fb7 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHorseAnimationEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0 (const MethodInfo* method);
// 0x3e516d0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle0_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1 (const MethodInfo* method);
// 0x3e51770

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2 (const MethodInfo* method);
// 0x3e51810

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3 (const MethodInfo* method);
// 0x3e518b0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Crazy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy (const MethodInfo* method);
// 0x3e51950

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Crazy_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x3e519f0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Run_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e51a90

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (DAT_05702fb9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
    DAT_05702fb9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHorseAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e51b30

void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702fba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Run");
    il2cpp_init_method_metadata(&"Idle2");
    il2cpp_init_method_metadata(&"Crazy");
    il2cpp_init_method_metadata(&"Idle0");
    il2cpp_init_method_metadata(&"Walk");
    il2cpp_init_method_metadata(&"Idle3");
    il2cpp_init_method_metadata(&"Idle1");
    DAT_05702fba = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle0",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Crazy",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Walk",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle0>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51cd0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Idle0>g____getter_2_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570312e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_0570312e = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle1>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51d40

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Idle1>g____getter_3_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570312f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_0570312f = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle2>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51db0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Idle2>g____getter_4_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703130 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05703130 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle3>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51e20

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Idle3>g____getter_5_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703131 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05703131 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Crazy>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51e90

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Crazy>g____getter_6_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703132 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05703132 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51f00

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Run>g____getter_7_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703133 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05703133 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e51f70

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_8_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05703134 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum___ctor (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e50e50

void CustomLogic_CustomLogicHorseAnimationEnum___ctor
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fa8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702fa8 = '\x01';
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


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle0
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0 (const MethodInfo* method);
// 0x3e50ec0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fa9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702fa9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle1
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1 (const MethodInfo* method);
// 0x3e50f30

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702faa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702faa = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle2
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2 (const MethodInfo* method);
// 0x3e50fa0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702fab = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle3
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3 (const MethodInfo* method);
// 0x3e51010

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702fac = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Crazy
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy (const MethodInfo* method);
// 0x3e51080

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702fad = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Run (const MethodInfo* method);
// 0x3e510f0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Run(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702fae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702fae = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Walk (const MethodInfo* method);
// 0x3e51160

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702faf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_05702faf = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e511d0

System_String_o *
CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702fb0 == '\0') {
    il2cpp_init_method_metadata(&"HorseAnimationEnum");
    DAT_05702fb0 = '\x01';
  }
  return "HorseAnimationEnum";
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e51200

bool_conflict
CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e51210

bool_conflict
CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e51220

bool_conflict
CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


