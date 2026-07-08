// Type: CustomLogic.CustomLogicInputCategoryEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputCategoryEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputCategoryEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputCategoryEnum_o* CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e6ada0

CustomLogic_CustomLogicInputCategoryEnum_o *
CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance
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
  if (DAT_0570323c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputCategoryEnum);
    DAT_0570323c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputCategoryEnum);
      if (DAT_05703234 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703234 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicInputCategoryEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputCategoryEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputCategoryEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e6aec0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_0570323d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"AnnieShifter");
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"ErenShifter");
    il2cpp_init_method_metadata(&"Interaction");
    DAT_0570323d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"General",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570323e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__General_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
      DAT_0570323e = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570323f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Human_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
      DAT_0570323f = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Interaction",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703241 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interaction_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
        DAT_05703241 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"AnnieShifter",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(name,"ErenShifter",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputCategoryEnum not found");
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
      if (DAT_05703243 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ErenShifter_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
        DAT_05703243 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703242 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AnnieShifter_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
      DAT_05703242 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703240 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_05703240 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__General
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General (const MethodInfo* method);
// 0x3e6b130

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (DAT_0570323e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__General_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_0570323e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x3e6b1d0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (DAT_0570323f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Human_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_0570323f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x3e6b270

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (DAT_05703240 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_05703240 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Interaction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction (const MethodInfo* method);
// 0x3e6b310

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (DAT_05703241 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interaction_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_05703241 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__AnnieShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter (const MethodInfo* method);
// 0x3e6b3b0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (DAT_05703242 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AnnieShifter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_05703242 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__ErenShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter (const MethodInfo* method);
// 0x3e6b450

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (DAT_05703243 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ErenShifter_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputCategoryEnum__object);
    DAT_05703243 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputCategoryEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e6b4f0

void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"AnnieShifter");
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"ErenShifter");
    il2cpp_init_method_metadata(&"Interaction");
    DAT_05703244 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"General",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Human",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Interaction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AnnieShifter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ErenShifter",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__General>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x3e6b660

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__<__CreatePropertyBinding__General>g____getter_2_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703235 == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_05703235 = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x3e6b690

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__<__CreatePropertyBinding__Human>g____getter_3_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703236 == '\0') {
    il2cpp_init_method_metadata(&"Human");
    DAT_05703236 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x3e6b6c0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__<__CreatePropertyBinding__Titan>g____getter_4_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703237 == '\0') {
    il2cpp_init_method_metadata(&"Titan");
    DAT_05703237 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Interaction>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x3e6b6f0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__<__CreatePropertyBinding__Interaction>g____getter_5_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703238 == '\0') {
    il2cpp_init_method_metadata(&"Interaction");
    DAT_05703238 = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__AnnieShifter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x3e6b720

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__<__CreatePropertyBinding__AnnieShifter>g____getter_6_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703239 == '\0') {
    il2cpp_init_method_metadata(&"AnnieShifter");
    DAT_05703239 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__ErenShifter>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x3e6b750

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__<__CreatePropertyBinding__ErenShifter>g____getter_7_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570323a == '\0') {
    il2cpp_init_method_metadata(&"ErenShifter");
    DAT_0570323a = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum___ctor (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x3e6abb0

void CustomLogic_CustomLogicInputCategoryEnum___ctor
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703234 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703234 = '\x01';
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


// CustomLogic.CustomLogicInputCategoryEnum$$get_General
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_General (const MethodInfo* method);
// 0x3e6ac20

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_General(MethodInfo *method)

{
  if (DAT_05703235 == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_05703235 = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Human (const MethodInfo* method);
// 0x3e6ac50

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Human(MethodInfo *method)

{
  if (DAT_05703236 == '\0') {
    il2cpp_init_method_metadata(&"Human");
    DAT_05703236 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Titan (const MethodInfo* method);
// 0x3e6ac80

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Titan(MethodInfo *method)

{
  if (DAT_05703237 == '\0') {
    il2cpp_init_method_metadata(&"Titan");
    DAT_05703237 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Interaction
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Interaction (const MethodInfo* method);
// 0x3e6acb0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Interaction(MethodInfo *method)

{
  if (DAT_05703238 == '\0') {
    il2cpp_init_method_metadata(&"Interaction");
    DAT_05703238 = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_AnnieShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter (const MethodInfo* method);
// 0x3e6ace0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter(MethodInfo *method)

{
  if (DAT_05703239 == '\0') {
    il2cpp_init_method_metadata(&"AnnieShifter");
    DAT_05703239 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ErenShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter (const MethodInfo* method);
// 0x3e6ad10

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter(MethodInfo *method)

{
  if (DAT_0570323a == '\0') {
    il2cpp_init_method_metadata(&"ErenShifter");
    DAT_0570323a = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ClassName (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x3e6ad40

System_String_o *
CustomLogic_CustomLogicInputCategoryEnum__get_ClassName
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570323b == '\0') {
    il2cpp_init_method_metadata(&"InputCategoryEnum");
    DAT_0570323b = '\x01';
  }
  return "InputCategoryEnum";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x3e6ad70

bool_conflict
CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x3e6ad80

bool_conflict
CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x3e6ad90

bool_conflict
CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


