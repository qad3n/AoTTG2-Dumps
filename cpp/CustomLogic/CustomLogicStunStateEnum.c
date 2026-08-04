// Type: CustomLogic.CustomLogicStunStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStunStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicStunStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStunStateEnum_o* CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x419ba90

CustomLogic_CustomLogicStunStateEnum_o *
CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar5;
  System_ArgumentException_o *pSVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CustomLogicStunStateEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad358 == '\0') {
    pSStack_20 = (System_String_o *)0x419baac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicStunStateEnum);
    g_data_057ad358 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x419bb27;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x419bad6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicStunStateEnum);
    if (g_data_057ad356 == '\0') {
      pSStack_20 = (System_String_o *)0x419baee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad356 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419bb0d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x419bb17;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicStunStateEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419bb2f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x419bb42;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419bb51;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicStunStateEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x419bb60;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x419bb70;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419bb7f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x419bb87;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x419bb97;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419bba3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicStunStateEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419bbae;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad359 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Stunned");
    il2cpp_runtime_helper_023445d0(&"Recovering");
    g_data_057ad359 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"None",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Stunned",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad35b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stunned_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
        g_data_057ad35b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicStunStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Recovering",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad35c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Recovering_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
        g_data_057ad35c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicStunStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicStunStateEnum not found");
    pSVar2 = System_String__Concat_3af7150(pSVar2,(System_String_o *)pSVar6,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar6,pSVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar5 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar6,uVar4);
  }
  else {
    puVar5 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
    else {
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
  }
  *(System_String_o **)((long)ppuVar9 + -8) = pSVar2;
  *(System_ArgumentException_o **)((long)ppuVar9 + -0x10) = pSVar6;
  *(undefined8 **)((long)ppuVar9 + -0x18) = puVar5;
  if (g_data_057ad35a == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bd59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bd65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bd71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bd7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
    g_data_057ad35a = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bd93;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bdac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bdbb;
  pCVar8 = (CustomLogic_CustomLogicStunStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419bdd5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x419bbb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad359 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Stunned");
    il2cpp_runtime_helper_023445d0(&"Recovering");
    g_data_057ad359 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Stunned",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad35b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stunned_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
        g_data_057ad35b = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad35c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Recovering_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
        g_data_057ad35c = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicStunStateEnum not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar2 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
    register0x00000020 = (BADSPACEBASE *)&puStack_18;
  }
  else {
    puVar2 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar2 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
  }
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar2;
  if (g_data_057ad35a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bd59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bd65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bd71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bd7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
    g_data_057ad35a = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bd93;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bdac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bdbb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419bdd5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x419bd40

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this;
  
  if (g_data_057ad35a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
    g_data_057ad35a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return __this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Stunned
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned (const MethodInfo* method);
// 0x419bde0

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this;
  
  if (g_data_057ad35b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Stunned_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
    g_data_057ad35b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return __this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x419be80

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this;
  
  if (g_data_057ad35c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Recovering_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicStunStateEnum_object);
    g_data_057ad35c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return __this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x419bf20

void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad35d == '\0') {
    uStack_20 = 0x419bf39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x419bf45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x419bf51;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419bf5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x419bf69;
    il2cpp_runtime_helper_023445d0(&"None");
    uStack_20 = 0x419bf75;
    il2cpp_runtime_helper_023445d0(&"Stunned");
    uStack_20 = 0x419bf81;
    il2cpp_runtime_helper_023445d0(&"Recovering");
    g_data_057ad35d = '\x01';
  }
  uStack_20 = 0x419bf97;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x419bfac;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x419bfcd;
    System_Collections_Generic_HashSet_object___Add(__this,"None",MethodInfo_Boolean_Add);
    uStack_20 = 0x419bfe2;
    System_Collections_Generic_HashSet_object___Add(__this,"Stunned",MethodInfo_Boolean_Add);
    uStack_20 = 0x419bff7;
    System_Collections_Generic_HashSet_object___Add(__this,"Recovering",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x419c029;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x419c030

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Stunned>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x419c050

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x419c070

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum___ctor (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x419b990

void CustomLogic_CustomLogicStunStateEnum___ctor
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad356 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad356 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStunStateEnum$$get_None
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_None (const MethodInfo* method);
// 0x419ba00

int32_t CustomLogic_CustomLogicStunStateEnum__get_None(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Stunned
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned (const MethodInfo* method);
// 0x419ba10

int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering (const MethodInfo* method);
// 0x419ba20

int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicStunStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStunStateEnum__get_ClassName (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x419ba30

System_String_o *
CustomLogic_CustomLogicStunStateEnum__get_ClassName
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad357 == '\0') {
    il2cpp_runtime_helper_023445d0(&"StunStateEnum");
    g_data_057ad357 = '\x01';
  }
  return "StunStateEnum";
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsAbstract (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x419ba60

bool_conflict
CustomLogic_CustomLogicStunStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsStatic (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x419ba70

bool_conflict
CustomLogic_CustomLogicStunStateEnum__get_IsStatic
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStunStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x419ba80

bool_conflict
CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


