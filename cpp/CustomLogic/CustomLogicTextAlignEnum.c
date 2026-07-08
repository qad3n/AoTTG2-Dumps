// Type: CustomLogic.CustomLogicTextAlignEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextAlignEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTextAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextAlignEnum_o* CustomLogic_CustomLogicTextAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e97e40

CustomLogic_CustomLogicTextAlignEnum_o *
CustomLogic_CustomLogicTextAlignEnum_Factory__CreateInstance
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
  if (DAT_0570365c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTextAlignEnum);
    DAT_0570365c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTextAlignEnum);
      if (DAT_0570365a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570365a = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTextAlignEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTextAlignEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTextAlignEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e97f60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextAlignEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_0570365d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"UpperCenter");
    il2cpp_init_method_metadata(&"UpperLeft");
    il2cpp_init_method_metadata(&"MiddleRight");
    il2cpp_init_method_metadata(&"LowerLeft");
    il2cpp_init_method_metadata(&"LowerCenter");
    il2cpp_init_method_metadata(&"MiddleCenter");
    il2cpp_init_method_metadata(&"LowerRight");
    il2cpp_init_method_metadata(&"UpperRight");
    il2cpp_init_method_metadata(&"MiddleLeft");
    DAT_0570365d = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x516feaaa) {
    if (uVar1 < 0x2505c52f) {
      if (uVar1 == 0x166f6d4a) {
        bVar2 = System_String__op_Equality(name,"UpperCenter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570365f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UpperCenter_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
            DAT_0570365f = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2505c52e) &&
              (bVar2 = System_String__op_Equality(name,"UpperLeft",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570365e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UpperLeft_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
          DAT_0570365e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x30130eca) {
      bVar2 = System_String__op_Equality(name,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703663 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleRight_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
          DAT_05703663 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x516feaa9) &&
            (bVar2 = System_String__op_Equality(name,"MiddleLeft",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703661 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleLeft_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
        DAT_05703661 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb23900c2) {
    if (uVar1 == 0xae5b608f) {
      bVar2 = System_String__op_Equality(name,"LowerCenter",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703665 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowerCenter_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
          DAT_05703665 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb23900c1) &&
            (bVar2 = System_String__op_Equality(name,"MiddleCenter",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703662 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleCenter_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
        DAT_05703662 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xd4e02b97) {
    bVar2 = System_String__op_Equality(name,"LowerLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703664 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowerLeft_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
        DAT_05703664 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xdc00e203) {
    bVar2 = System_String__op_Equality(name,"UpperRight",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703660 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UpperRight_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
        DAT_05703660 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xe58fc308) &&
          (bVar2 = System_String__op_Equality(name,"LowerRight",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703666 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowerRight_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
      DAT_05703666 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTextAlignEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft (const MethodInfo* method);
// 0x3e983c0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_0570365e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UpperLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_0570365e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperCenter (const MethodInfo* method);
// 0x3e98460

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperCenter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_0570365f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UpperCenter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_0570365f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperRight (const MethodInfo* method);
// 0x3e98500

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703660 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UpperRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703660 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleLeft (const MethodInfo* method);
// 0x3e985a0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703661 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703661 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleCenter (const MethodInfo* method);
// 0x3e98640

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleCenter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703662 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleCenter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703662 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleRight (const MethodInfo* method);
// 0x3e986e0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703663 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703663 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerLeft (const MethodInfo* method);
// 0x3e98780

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703664 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowerLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703664 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerCenter (const MethodInfo* method);
// 0x3e98820

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerCenter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703665 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowerCenter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703665 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerRight (const MethodInfo* method);
// 0x3e988c0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (DAT_05703666 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowerRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTextAlignEnum__object);
    DAT_05703666 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTextAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e98960

void CustomLogic_CustomLogicTextAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703667 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"UpperCenter");
    il2cpp_init_method_metadata(&"UpperLeft");
    il2cpp_init_method_metadata(&"MiddleRight");
    il2cpp_init_method_metadata(&"LowerLeft");
    il2cpp_init_method_metadata(&"LowerCenter");
    il2cpp_init_method_metadata(&"MiddleCenter");
    il2cpp_init_method_metadata(&"LowerRight");
    il2cpp_init_method_metadata(&"UpperRight");
    il2cpp_init_method_metadata(&"MiddleLeft");
    DAT_05703667 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"UpperLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UpperCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UpperRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MiddleLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MiddleCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MiddleRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LowerLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LowerCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LowerRight",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperLeft>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperLeft_g____getter_2_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98b40

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__UpperLeft>g____getter_2_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperCenter>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperCenter_g____getter_3_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98b60

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__UpperCenter>g____getter_3_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperRight>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperRight_g____getter_4_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98b80

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__UpperRight>g____getter_4_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_5_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98ba0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__MiddleLeft>g____getter_5_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_6_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98bc0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__MiddleCenter>g____getter_6_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98be0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__MiddleRight>g____getter_7_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerLeft>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerLeft_g____getter_8_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98c00

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__LowerLeft>g____getter_8_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerCenter>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerCenter_g____getter_9_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98c20

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__LowerCenter>g____getter_9_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerRight>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerRight_g____getter_10_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x3e98c40

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings__<__CreatePropertyBinding__LowerRight>g____getter_10_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextAlignEnum___ctor (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x3e97ce0

void CustomLogic_CustomLogicTextAlignEnum___ctor
               (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570365a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570365a = '\x01';
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


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperLeft (const MethodInfo* method);
// 0x3e97d50

int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperLeft(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperCenter (const MethodInfo* method);
// 0x3e97d60

int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperCenter(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperRight (const MethodInfo* method);
// 0x3e97d70

int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperRight(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleLeft (const MethodInfo* method);
// 0x3e97d80

int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleLeft(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleCenter (const MethodInfo* method);
// 0x3e97d90

int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleCenter(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleRight (const MethodInfo* method);
// 0x3e97da0

int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleRight(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerLeft (const MethodInfo* method);
// 0x3e97db0

int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerLeft(MethodInfo *method)

{
  return 6;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerCenter (const MethodInfo* method);
// 0x3e97dc0

int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerCenter(MethodInfo *method)

{
  return 7;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerRight (const MethodInfo* method);
// 0x3e97dd0

int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerRight(MethodInfo *method)

{
  return 8;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextAlignEnum__get_ClassName (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x3e97de0

System_String_o *
CustomLogic_CustomLogicTextAlignEnum__get_ClassName
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570365b == '\0') {
    il2cpp_init_method_metadata(&"TextAlignEnum");
    DAT_0570365b = '\x01';
  }
  return "TextAlignEnum";
}


// CustomLogic.CustomLogicTextAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_IsAbstract (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x3e97e10

bool_conflict
CustomLogic_CustomLogicTextAlignEnum__get_IsAbstract
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_IsStatic (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x3e97e20

bool_conflict
CustomLogic_CustomLogicTextAlignEnum__get_IsStatic
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x3e97e30

bool_conflict
CustomLogic_CustomLogicTextAlignEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


