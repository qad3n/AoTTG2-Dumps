// Type: CustomLogic.CustomLogicOutlineModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOutlineModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicOutlineModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOutlineModeEnum_o* CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e7f4e0

CustomLogic_CustomLogicOutlineModeEnum_o *
CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicOutlineModeEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057033dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033dc = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicOutlineModeEnum);
      if (DAT_057033d3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033d3 = '\x01';
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
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicOutlineModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicOutlineModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e7f600

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057033dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"OutlineAndSilhouette");
    il2cpp_init_method_metadata(&"SilhouetteOnly");
    il2cpp_init_method_metadata(&"OutlineAndLightenColor");
    il2cpp_init_method_metadata(&"OutlineHidden");
    il2cpp_init_method_metadata(&"OutlineVisible");
    il2cpp_init_method_metadata(&"OutlineAll");
    DAT_057033dd = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"OutlineAll",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033de == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineAll_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
      DAT_057033de = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"OutlineVisible",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033df == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineVisible);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
      DAT_057033df = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"OutlineHidden",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"OutlineAndSilhouette",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057033e1 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineAndSilho);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
        DAT_057033e1 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"SilhouetteOnly",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(name,"OutlineAndLightenColor",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicOutlineModeEnum not found");
        pSVar2 = System_String__Concat(pSVar2,name,str2,(MethodInfo *)0x0);
        uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
        System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
        uVar3 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this,uVar3);
      }
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057033e3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineAndLight);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
        DAT_057033e3 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033e2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SilhouetteOnly);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
      DAT_057033e2 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineHidden_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033e0 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAll
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll (const MethodInfo* method);
// 0x3e7f870

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (DAT_057033de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineAll_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineVisible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible (const MethodInfo* method);
// 0x3e7f910

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (DAT_057033df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineVisible);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineHidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden (const MethodInfo* method);
// 0x3e7f9b0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (DAT_057033e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineHidden_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndSilhouette
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette (const MethodInfo* method);
// 0x3e7fa50

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (DAT_057033e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineAndSilho);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__SilhouetteOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly (const MethodInfo* method);
// 0x3e7faf0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (DAT_057033e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SilhouetteOnly);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndLightenColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor (const MethodInfo* method);
// 0x3e7fb90

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (DAT_057033e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OutlineAndLight);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOutlineModeEnum__object);
    DAT_057033e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOutlineModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e7fc30

void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"OutlineAndSilhouette");
    il2cpp_init_method_metadata(&"SilhouetteOnly");
    il2cpp_init_method_metadata(&"OutlineAndLightenColor");
    il2cpp_init_method_metadata(&"OutlineHidden");
    il2cpp_init_method_metadata(&"OutlineVisible");
    il2cpp_init_method_metadata(&"OutlineAll");
    DAT_057033e4 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"OutlineAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OutlineVisible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OutlineHidden",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OutlineAndSilhouette",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SilhouetteOnly",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OutlineAndLightenColor",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAll>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x3e7fda0

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__<__CreatePropertyBinding__OutlineAll>g____getter_2_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033e5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570359a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_0570359a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineVisible>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x3e7fe50

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__<__CreatePropertyBinding__OutlineVisible>g____getter_3_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033e6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570359b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_0570359b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineHidden>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x3e7ff00

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__<__CreatePropertyBinding__OutlineHidden>g____getter_4_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033e7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570359c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_0570359c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndSilhouette>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x3e7ffb0

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__<__CreatePropertyBinding__OutlineAndSilhouette>g____getter_5_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033e8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570359d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_0570359d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__SilhouetteOnly>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x3e80060

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__<__CreatePropertyBinding__SilhouetteOnly>g____getter_6_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033e9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570359e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_0570359e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndLightenColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x3e80110

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__<__CreatePropertyBinding__OutlineAndLightenColor>g____getter_7_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033ea = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570359f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_0570359f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicOutlineModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___ctor (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x3e7ef90

void CustomLogic_CustomLogicOutlineModeEnum___ctor
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033d3 = '\x01';
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


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAll
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll (const MethodInfo* method);
// 0x3e7f000

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineVisible
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible (const MethodInfo* method);
// 0x3e7f070

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineHidden
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden (const MethodInfo* method);
// 0x3e7f0e0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033d6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndSilhouette
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette (const MethodInfo* method);
// 0x3e7f150

System_String_o *
CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033d7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_SilhouetteOnly
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly (const MethodInfo* method);
// 0x3e7f1c0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndLightenColor
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor (const MethodInfo* method);
// 0x3e7f230

System_String_o *
CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    DAT_057033d9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_ClassName (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x3e7f2a0

System_String_o *
CustomLogic_CustomLogicOutlineModeEnum__get_ClassName
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033da == '\0') {
    il2cpp_init_method_metadata(&"OutlineModeEnum");
    DAT_057033da = '\x01';
  }
  return "OutlineModeEnum";
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x3e7f2d0

bool_conflict
CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x3e7f2e0

bool_conflict
CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x3e7f2f0

bool_conflict
CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOutlineModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___cctor (const MethodInfo* method);
// 0x3e7f300

void CustomLogic_CustomLogicOutlineModeEnum___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (DAT_057033db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOutlineModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Mode);
    DAT_057033db = '\x01';
  }
  SStack_28.klass = TypeInfo_Mode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8));
  SStack_40.klass = TypeInfo_Mode;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8);
  SStack_58.klass = TypeInfo_Mode;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10);
  SStack_70.klass = TypeInfo_Mode;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18);
  SStack_88.klass = TypeInfo_Mode;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x20);
  SStack_a0.klass = TypeInfo_Mode;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar2);
  return;
}


