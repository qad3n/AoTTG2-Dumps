// Type: CustomLogic.CustomLogicUILabelEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUILabelEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicUILabelEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUILabelEnum_o* CustomLogic_CustomLogicUILabelEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ea8290

CustomLogic_CustomLogicUILabelEnum_o *
CustomLogic_CustomLogicUILabelEnum_Factory__CreateInstance
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
  if (DAT_0570379f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUILabelEnum);
    DAT_0570379f = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicUILabelEnum);
      if (DAT_05703794 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703794 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicUILabelEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicUILabelEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicUILabelEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUILabelEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ea83b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUILabelEnum_Bindings__CreateMemberBinding
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
  
  if (DAT_057037a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"TopRight");
    il2cpp_init_method_metadata(&"MiddleRight");
    il2cpp_init_method_metadata(&"MiddleCenter");
    il2cpp_init_method_metadata(&"BottomCenter");
    il2cpp_init_method_metadata(&"MiddleLeft");
    il2cpp_init_method_metadata(&"TopLeft");
    il2cpp_init_method_metadata(&"TopCenter");
    il2cpp_init_method_metadata(&"BottomLeft");
    il2cpp_init_method_metadata(&"BottomRight");
    DAT_057037a0 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x516feaaa) {
    if (uVar1 < 0xb6af656) {
      if (uVar1 == 0x6348be7) {
        bVar2 = System_String__op_Equality(name,"BottomLeft",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057037a8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BottomLeft_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
            DAT_057037a8 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xb6af655) &&
              (bVar2 = System_String__op_Equality(name,"TopCenter",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037a1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TopCenter_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
          DAT_057037a1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x30130eca) {
      bVar2 = System_String__op_Equality(name,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037a6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleRight_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
          DAT_057037a6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x516feaa9) &&
            (bVar2 = System_String__op_Equality(name,"MiddleLeft",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037a5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleLeft_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
        DAT_057037a5 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x984f3d99) {
    if (uVar1 == 0x984f3d98) {
      bVar2 = System_String__op_Equality(name,"BottomRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057037a9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BottomRight_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
          DAT_057037a9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7dfdc8a6) &&
            (bVar2 = System_String__op_Equality(name,"TopRight",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037a3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TopRight_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
        DAT_057037a3 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xa87d916d) {
    bVar2 = System_String__op_Equality(name,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037a2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TopLeft_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
        DAT_057037a2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xb23900c1) {
    bVar2 = System_String__op_Equality(name,"MiddleCenter",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057037a4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleCenter_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
        DAT_057037a4 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xbd631cff) &&
          (bVar2 = System_String__op_Equality(name,"BottomCenter",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037a7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BottomCenter_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
      DAT_057037a7 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicUILabelEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter (const MethodInfo* method);
// 0x3ea8800

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TopCenter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopLeft (const MethodInfo* method);
// 0x3ea88a0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TopLeft_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopRight (const MethodInfo* method);
// 0x3ea8940

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TopRight_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleCenter (const MethodInfo* method);
// 0x3ea89e0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleCenter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleCenter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleLeft (const MethodInfo* method);
// 0x3ea8a80

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleRight (const MethodInfo* method);
// 0x3ea8b20

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MiddleRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomCenter (const MethodInfo* method);
// 0x3ea8bc0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomCenter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BottomCenter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomLeft (const MethodInfo* method);
// 0x3ea8c60

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BottomLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomRight (const MethodInfo* method);
// 0x3ea8d00

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (DAT_057037a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BottomRight_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicUILabelEnum__object);
    DAT_057037a9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicUILabelEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUILabelEnum_Bindings___cctor (const MethodInfo* method);
// 0x3ea8da0

void CustomLogic_CustomLogicUILabelEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057037aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"TopRight");
    il2cpp_init_method_metadata(&"MiddleRight");
    il2cpp_init_method_metadata(&"MiddleCenter");
    il2cpp_init_method_metadata(&"BottomCenter");
    il2cpp_init_method_metadata(&"MiddleLeft");
    il2cpp_init_method_metadata(&"TopLeft");
    il2cpp_init_method_metadata(&"TopCenter");
    il2cpp_init_method_metadata(&"BottomLeft");
    il2cpp_init_method_metadata(&"BottomRight");
    DAT_057037aa = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"TopCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TopLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TopRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MiddleCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MiddleLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MiddleRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BottomCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BottomLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BottomRight",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopCenter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopCenter_g____getter_2_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea8f80

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__TopCenter>g____getter_2_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703795 == '\0') {
    il2cpp_init_method_metadata(&"TopCenter");
    DAT_05703795 = '\x01';
  }
  return "TopCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopLeft>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopLeft_g____getter_3_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea8fb0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__TopLeft>g____getter_3_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703796 == '\0') {
    il2cpp_init_method_metadata(&"TopLeft");
    DAT_05703796 = '\x01';
  }
  return "TopLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopRight>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopRight_g____getter_4_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea8fe0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__TopRight>g____getter_4_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703797 == '\0') {
    il2cpp_init_method_metadata(&"TopRight");
    DAT_05703797 = '\x01';
  }
  return "TopRight";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_5_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea9010

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__MiddleCenter>g____getter_5_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703798 == '\0') {
    il2cpp_init_method_metadata(&"MiddleCenter");
    DAT_05703798 = '\x01';
  }
  return "MiddleCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_6_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea9040

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__MiddleLeft>g____getter_6_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703799 == '\0') {
    il2cpp_init_method_metadata(&"MiddleLeft");
    DAT_05703799 = '\x01';
  }
  return "MiddleLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea9070

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__MiddleRight>g____getter_7_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570379a == '\0') {
    il2cpp_init_method_metadata(&"MiddleRight");
    DAT_0570379a = '\x01';
  }
  return "MiddleRight";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomCenter>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomCenter_g____getter_8_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea90a0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__BottomCenter>g____getter_8_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570379b == '\0') {
    il2cpp_init_method_metadata(&"BottomCenter");
    DAT_0570379b = '\x01';
  }
  return "BottomCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomLeft>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomLeft_g____getter_9_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea90d0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__BottomLeft>g____getter_9_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570379c == '\0') {
    il2cpp_init_method_metadata(&"BottomLeft");
    DAT_0570379c = '\x01';
  }
  return "BottomLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomRight>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomRight_g____getter_10_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x3ea9100

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings__<__CreatePropertyBinding__BottomRight>g____getter_10_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570379d == '\0') {
    il2cpp_init_method_metadata(&"BottomRight");
    DAT_0570379d = '\x01';
  }
  return "BottomRight";
}


// CustomLogic.CustomLogicUILabelEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicUILabelEnum___ctor (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x3ea8010

void CustomLogic_CustomLogicUILabelEnum___ctor
               (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703794 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703794 = '\x01';
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


// CustomLogic.CustomLogicUILabelEnum$$get_TopCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopCenter (const MethodInfo* method);
// 0x3ea8080

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopCenter(MethodInfo *method)

{
  if (DAT_05703795 == '\0') {
    il2cpp_init_method_metadata(&"TopCenter");
    DAT_05703795 = '\x01';
  }
  return "TopCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopLeft (const MethodInfo* method);
// 0x3ea80b0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopLeft(MethodInfo *method)

{
  if (DAT_05703796 == '\0') {
    il2cpp_init_method_metadata(&"TopLeft");
    DAT_05703796 = '\x01';
  }
  return "TopLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopRight (const MethodInfo* method);
// 0x3ea80e0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopRight(MethodInfo *method)

{
  if (DAT_05703797 == '\0') {
    il2cpp_init_method_metadata(&"TopRight");
    DAT_05703797 = '\x01';
  }
  return "TopRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleCenter (const MethodInfo* method);
// 0x3ea8110

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleCenter(MethodInfo *method)

{
  if (DAT_05703798 == '\0') {
    il2cpp_init_method_metadata(&"MiddleCenter");
    DAT_05703798 = '\x01';
  }
  return "MiddleCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleLeft (const MethodInfo* method);
// 0x3ea8140

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleLeft(MethodInfo *method)

{
  if (DAT_05703799 == '\0') {
    il2cpp_init_method_metadata(&"MiddleLeft");
    DAT_05703799 = '\x01';
  }
  return "MiddleLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleRight (const MethodInfo* method);
// 0x3ea8170

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleRight(MethodInfo *method)

{
  if (DAT_0570379a == '\0') {
    il2cpp_init_method_metadata(&"MiddleRight");
    DAT_0570379a = '\x01';
  }
  return "MiddleRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomCenter (const MethodInfo* method);
// 0x3ea81a0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomCenter(MethodInfo *method)

{
  if (DAT_0570379b == '\0') {
    il2cpp_init_method_metadata(&"BottomCenter");
    DAT_0570379b = '\x01';
  }
  return "BottomCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomLeft (const MethodInfo* method);
// 0x3ea81d0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomLeft(MethodInfo *method)

{
  if (DAT_0570379c == '\0') {
    il2cpp_init_method_metadata(&"BottomLeft");
    DAT_0570379c = '\x01';
  }
  return "BottomLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomRight (const MethodInfo* method);
// 0x3ea8200

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomRight(MethodInfo *method)

{
  if (DAT_0570379d == '\0') {
    il2cpp_init_method_metadata(&"BottomRight");
    DAT_0570379d = '\x01';
  }
  return "BottomRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_ClassName (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x3ea8230

System_String_o *
CustomLogic_CustomLogicUILabelEnum__get_ClassName
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570379e == '\0') {
    il2cpp_init_method_metadata(&"UILabelEnum");
    DAT_0570379e = '\x01';
  }
  return "UILabelEnum";
}


// CustomLogic.CustomLogicUILabelEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_IsAbstract (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x3ea8260

bool_conflict
CustomLogic_CustomLogicUILabelEnum__get_IsAbstract
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUILabelEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_IsStatic (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x3ea8270

bool_conflict
CustomLogic_CustomLogicUILabelEnum__get_IsStatic
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUILabelEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_InheritBaseMembers (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x3ea8280

bool_conflict
CustomLogic_CustomLogicUILabelEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


