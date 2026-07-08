// Type: CustomLogic.CustomLogicTitanTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanTypeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTitanTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanTypeEnum_o* CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ea72c0

CustomLogic_CustomLogicTitanTypeEnum_o *
CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance
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
  if (DAT_05703789 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanTypeEnum);
    DAT_05703789 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanTypeEnum);
      if (DAT_0570377f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570377f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTitanTypeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTitanTypeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTitanTypeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ea73e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_0570378a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Random");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Punk");
    il2cpp_init_method_metadata(&"Thrower");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Jumper");
    il2cpp_init_method_metadata(&"Crawler");
    il2cpp_init_method_metadata(&"Abnormal");
    DAT_0570378a = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x4b058385) {
    if (uVar1 < 0x2f9f45fa) {
      if (uVar1 == 0x19dc307e) {
        bVar2 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703791 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Default_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
            DAT_05703791 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2f9f45f9) &&
              (bVar2 = System_String__op_Equality(name,"Abnormal",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570378c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Abnormal_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
          DAT_0570378c = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x4115d182) {
      bVar2 = System_String__op_Equality(name,"Random",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703792 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Random_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
          DAT_05703792 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x4b058384) &&
            (bVar2 = System_String__op_Equality(name,"Thrower",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570378f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thrower_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
        DAT_0570378f = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x8f418f18) {
    if (uVar1 == 0x8f418f17) {
      bVar2 = System_String__op_Equality(name,"Crawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570378e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Crawler_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
          DAT_0570378e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x58de2772) &&
            (bVar2 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570378b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normal_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
        DAT_0570378b = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xe5828b91) {
    bVar2 = System_String__op_Equality(name,"Punk",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703790 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Punk_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
        DAT_05703790 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf331d01e) &&
          (bVar2 = System_String__op_Equality(name,"Jumper",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570378d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jumper_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
      DAT_0570378d = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTitanTypeEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x3ea77d0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_0570378b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Normal_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_0570378b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Abnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal (const MethodInfo* method);
// 0x3ea7870

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_0570378c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Abnormal_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_0570378c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Jumper
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper (const MethodInfo* method);
// 0x3ea7910

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_0570378d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jumper_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_0570378d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Crawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler (const MethodInfo* method);
// 0x3ea79b0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_0570378e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Crawler_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_0570378e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Thrower
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower (const MethodInfo* method);
// 0x3ea7a50

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_0570378f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thrower_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_0570378f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Punk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk (const MethodInfo* method);
// 0x3ea7af0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_05703790 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Punk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_05703790 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Default
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default (const MethodInfo* method);
// 0x3ea7b90

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_05703791 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Default_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_05703791 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Random
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random (const MethodInfo* method);
// 0x3ea7c30

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (DAT_05703792 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Random_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanTypeEnum__object);
    DAT_05703792 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3ea7cd0

void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703793 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Random");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Punk");
    il2cpp_init_method_metadata(&"Thrower");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Jumper");
    il2cpp_init_method_metadata(&"Crawler");
    il2cpp_init_method_metadata(&"Abnormal");
    DAT_05703793 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Normal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Abnormal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jumper",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Crawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Thrower",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Punk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Default",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Random",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7e90

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Normal>g____getter_2_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703780 == '\0') {
    il2cpp_init_method_metadata(&"Normal");
    DAT_05703780 = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Abnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7ec0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Abnormal>g____getter_3_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703781 == '\0') {
    il2cpp_init_method_metadata(&"Abnormal");
    DAT_05703781 = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Jumper>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7ef0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Jumper>g____getter_4_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703782 == '\0') {
    il2cpp_init_method_metadata(&"Jumper");
    DAT_05703782 = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Crawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7f20

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Crawler>g____getter_5_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703783 == '\0') {
    il2cpp_init_method_metadata(&"Crawler");
    DAT_05703783 = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Thrower>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7f50

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Thrower>g____getter_6_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703784 == '\0') {
    il2cpp_init_method_metadata(&"Thrower");
    DAT_05703784 = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Punk>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7f80

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Punk>g____getter_7_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703785 == '\0') {
    il2cpp_init_method_metadata(&"Punk");
    DAT_05703785 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7fb0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Default>g____getter_8_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703786 == '\0') {
    il2cpp_init_method_metadata(&"Default");
    DAT_05703786 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Random>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x3ea7fe0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__<__CreatePropertyBinding__Random>g____getter_9_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703787 == '\0') {
    il2cpp_init_method_metadata(&"Random");
    DAT_05703787 = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum___ctor (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x3ea7070

void CustomLogic_CustomLogicTitanTypeEnum___ctor
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570377f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570377f = '\x01';
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


// CustomLogic.CustomLogicTitanTypeEnum$$get_Normal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Normal (const MethodInfo* method);
// 0x3ea70e0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Normal(MethodInfo *method)

{
  if (DAT_05703780 == '\0') {
    il2cpp_init_method_metadata(&"Normal");
    DAT_05703780 = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Abnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal (const MethodInfo* method);
// 0x3ea7110

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal(MethodInfo *method)

{
  if (DAT_05703781 == '\0') {
    il2cpp_init_method_metadata(&"Abnormal");
    DAT_05703781 = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Jumper
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Jumper (const MethodInfo* method);
// 0x3ea7140

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Jumper(MethodInfo *method)

{
  if (DAT_05703782 == '\0') {
    il2cpp_init_method_metadata(&"Jumper");
    DAT_05703782 = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Crawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Crawler (const MethodInfo* method);
// 0x3ea7170

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Crawler(MethodInfo *method)

{
  if (DAT_05703783 == '\0') {
    il2cpp_init_method_metadata(&"Crawler");
    DAT_05703783 = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Thrower
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Thrower (const MethodInfo* method);
// 0x3ea71a0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Thrower(MethodInfo *method)

{
  if (DAT_05703784 == '\0') {
    il2cpp_init_method_metadata(&"Thrower");
    DAT_05703784 = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Punk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Punk (const MethodInfo* method);
// 0x3ea71d0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Punk(MethodInfo *method)

{
  if (DAT_05703785 == '\0') {
    il2cpp_init_method_metadata(&"Punk");
    DAT_05703785 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Default
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Default (const MethodInfo* method);
// 0x3ea7200

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Default(MethodInfo *method)

{
  if (DAT_05703786 == '\0') {
    il2cpp_init_method_metadata(&"Default");
    DAT_05703786 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Random
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Random (const MethodInfo* method);
// 0x3ea7230

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Random(MethodInfo *method)

{
  if (DAT_05703787 == '\0') {
    il2cpp_init_method_metadata(&"Random");
    DAT_05703787 = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_ClassName (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x3ea7260

System_String_o *
CustomLogic_CustomLogicTitanTypeEnum__get_ClassName
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703788 == '\0') {
    il2cpp_init_method_metadata(&"TitanTypeEnum");
    DAT_05703788 = '\x01';
  }
  return "TitanTypeEnum";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x3ea7290

bool_conflict
CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x3ea72a0

bool_conflict
CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x3ea72b0

bool_conflict
CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


