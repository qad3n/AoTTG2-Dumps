// Type: CustomLogic.CustomLogicShifterTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterTypeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicShifterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterTypeEnum_o* CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e92030

CustomLogic_CustomLogicShifterTypeEnum_o *
CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance
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
  if (DAT_057035e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterTypeEnum);
    DAT_057035e6 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterTypeEnum);
      if (DAT_057035e0 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035e0 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicShifterTypeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicShifterTypeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicShifterTypeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e92150

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057035e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"WallColossal");
    il2cpp_init_method_metadata(&"Armored");
    DAT_057035e7 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035e8 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
      DAT_057035e8 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035e9 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Armored_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
      DAT_057035e9 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"WallColossal",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicShifterTypeEnum not found");
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
    if (DAT_057035eb == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallColossal_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
      DAT_057035eb = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057035ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    DAT_057035ea = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x3e92330

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (DAT_057035e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    DAT_057035e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x3e923d0

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (DAT_057035e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Armored_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    DAT_057035e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x3e92470

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (DAT_057035ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    DAT_057035ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__WallColossal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal (const MethodInfo* method);
// 0x3e92510

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this;
  
  if (DAT_057035eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallColossal_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterTypeEnum__object);
    DAT_057035eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e925b0

void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057035ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"WallColossal");
    il2cpp_init_method_metadata(&"Armored");
    DAT_057035ec = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Armored",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WallColossal",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e926e0

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__<__CreatePropertyBinding__Annie>g____getter_2_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035e1 == '\0') {
    il2cpp_init_method_metadata(&"Annie");
    DAT_057035e1 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e92710

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__<__CreatePropertyBinding__Armored>g____getter_3_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035e2 == '\0') {
    il2cpp_init_method_metadata(&"Armored");
    DAT_057035e2 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e92740

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__<__CreatePropertyBinding__Eren>g____getter_4_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035e3 == '\0') {
    il2cpp_init_method_metadata(&"Eren");
    DAT_057035e3 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__WallColossal>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e92770

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__<__CreatePropertyBinding__WallColossal>g____getter_5_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (DAT_057035e4 == '\0') {
    il2cpp_init_method_metadata(&"WallColossal");
    DAT_057035e4 = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum___ctor (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e91ea0

void CustomLogic_CustomLogicShifterTypeEnum___ctor
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035e0 = '\x01';
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


// CustomLogic.CustomLogicShifterTypeEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Annie (const MethodInfo* method);
// 0x3e91f10

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Annie(MethodInfo *method)

{
  if (DAT_057035e1 == '\0') {
    il2cpp_init_method_metadata(&"Annie");
    DAT_057035e1 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Armored (const MethodInfo* method);
// 0x3e91f40

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Armored(MethodInfo *method)

{
  if (DAT_057035e2 == '\0') {
    il2cpp_init_method_metadata(&"Armored");
    DAT_057035e2 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Eren (const MethodInfo* method);
// 0x3e91f70

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Eren(MethodInfo *method)

{
  if (DAT_057035e3 == '\0') {
    il2cpp_init_method_metadata(&"Eren");
    DAT_057035e3 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_WallColossal
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal (const MethodInfo* method);
// 0x3e91fa0

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal(MethodInfo *method)

{
  if (DAT_057035e4 == '\0') {
    il2cpp_init_method_metadata(&"WallColossal");
    DAT_057035e4 = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_ClassName (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e91fd0

System_String_o *
CustomLogic_CustomLogicShifterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  if (DAT_057035e5 == '\0') {
    il2cpp_init_method_metadata(&"ShifterTypeEnum");
    DAT_057035e5 = '\x01';
  }
  return "ShifterTypeEnum";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e92000

bool_conflict
CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e92010

bool_conflict
CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e92020

bool_conflict
CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


