// Type: CustomLogic.CustomLogicShifterSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterSoundEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicShifterSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterSoundEnum_o* CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e91340

CustomLogic_CustomLogicShifterSoundEnum_o *
CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance
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
  if (DAT_057035d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterSoundEnum);
    DAT_057035d7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterSoundEnum);
      if (DAT_057035cf == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035cf = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicShifterSoundEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicShifterSoundEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicShifterSoundEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e91460

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057035d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ColossalSteam1");
    il2cpp_init_method_metadata(&"ErenRoar");
    il2cpp_init_method_metadata(&"AnnieRoar");
    il2cpp_init_method_metadata(&"ColossalSteam2");
    il2cpp_init_method_metadata(&"AnnieHurt");
    il2cpp_init_method_metadata(&"Thunder");
    DAT_057035d8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Thunder",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035d9 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thunder_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
      DAT_057035d9 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"ErenRoar",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035da == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ErenRoar_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
      DAT_057035da = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"AnnieRoar",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"AnnieHurt",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057035dc == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AnnieHurt_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
        DAT_057035dc = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ColossalSteam1",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(name,"ColossalSteam2",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicShifterSoundEnum not found");
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
      if (DAT_057035de == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalSteam2);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
        DAT_057035de = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035dd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalSteam1);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
      DAT_057035dd = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057035db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AnnieRoar_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035db = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__Thunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder (const MethodInfo* method);
// 0x3e916d0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (DAT_057035d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thunder_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ErenRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar (const MethodInfo* method);
// 0x3e91770

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (DAT_057035da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ErenRoar_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar (const MethodInfo* method);
// 0x3e91810

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (DAT_057035db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AnnieRoar_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieHurt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt (const MethodInfo* method);
// 0x3e918b0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (DAT_057035dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AnnieHurt_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1 (const MethodInfo* method);
// 0x3e91950

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (DAT_057035dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalSteam1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2 (const MethodInfo* method);
// 0x3e919f0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (DAT_057035de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ColossalSteam2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterSoundEnum__object);
    DAT_057035de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e91a90

void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057035df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ColossalSteam1");
    il2cpp_init_method_metadata(&"ErenRoar");
    il2cpp_init_method_metadata(&"AnnieRoar");
    il2cpp_init_method_metadata(&"ColossalSteam2");
    il2cpp_init_method_metadata(&"AnnieHurt");
    il2cpp_init_method_metadata(&"Thunder");
    DAT_057035df = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Thunder",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ErenRoar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AnnieRoar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AnnieHurt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColossalSteam1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ColossalSteam2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__Thunder>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x3e91c00

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__<__CreatePropertyBinding__Thunder>g____getter_2_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703835 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_05703835 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ErenRoar>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x3e91c70

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__<__CreatePropertyBinding__ErenRoar>g____getter_3_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703836 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_05703836 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieRoar>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x3e91ce0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__<__CreatePropertyBinding__AnnieRoar>g____getter_4_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703837 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_05703837 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieHurt>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x3e91d50

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__<__CreatePropertyBinding__AnnieHurt>g____getter_5_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703838 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_05703838 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam1>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x3e91dc0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__<__CreatePropertyBinding__ColossalSteam1>g____getter_6_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703839 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_05703839 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam2>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x3e91e30

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__<__CreatePropertyBinding__ColossalSteam2>g____getter_7_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570383a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_0570383a = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicShifterSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum___ctor (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x3e90fd0

void CustomLogic_CustomLogicShifterSoundEnum___ctor
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035cf = '\x01';
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


// CustomLogic.CustomLogicShifterSoundEnum$$get_Thunder
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_Thunder (const MethodInfo* method);
// 0x3e91040

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_Thunder(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057035d0 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ErenRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar (const MethodInfo* method);
// 0x3e910b0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057035d1 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar (const MethodInfo* method);
// 0x3e91120

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057035d2 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieHurt
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt (const MethodInfo* method);
// 0x3e91190

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057035d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam1
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1 (const MethodInfo* method);
// 0x3e91200

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057035d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam2
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2 (const MethodInfo* method);
// 0x3e91270

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057035d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ClassName (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x3e912e0

System_String_o *
CustomLogic_CustomLogicShifterSoundEnum__get_ClassName
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  if (DAT_057035d6 == '\0') {
    il2cpp_init_method_metadata(&"ShifterSoundEnum");
    DAT_057035d6 = '\x01';
  }
  return "ShifterSoundEnum";
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x3e91310

bool_conflict
CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x3e91320

bool_conflict
CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x3e91330

bool_conflict
CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


