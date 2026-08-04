// Type: CustomLogic.CustomLogicWrapEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWrapEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWrapEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWrapEnum_o* CustomLogic_CustomLogicWrapEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41b1430

CustomLogic_CustomLogicWrapEnum_o *
CustomLogic_CustomLogicWrapEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicWrapEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad520 == '\0') {
    pSStack_20 = (System_String_o *)0x41b144c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWrapEnum);
    g_data_057ad520 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41b14c7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41b1476;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicWrapEnum);
    if (g_data_057ad51e == '\0') {
      pSStack_20 = (System_String_o *)0x41b148e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad51e = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41b14ad;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41b14b7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicWrapEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41b14cf;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41b14e2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41b14f1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicWrapEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41b1500;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41b1510;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41b151f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41b1527;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x41b1537;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41b1543;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicWrapEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41b154e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad521 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"NoWrap");
    il2cpp_runtime_helper_023445d0(&"WrapReverse");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    g_data_057ad521 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"NoWrap",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Wrap",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad523 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Wrap_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
        g_data_057ad523 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicWrapEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"WrapReverse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad524 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WrapReverse_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
        g_data_057ad524 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicWrapEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicWrapEnum not found");
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
  if (g_data_057ad522 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b16f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NoWrap_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b1705;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b1711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b171d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
    g_data_057ad522 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b1733;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b174c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b175b;
  pCVar8 = (CustomLogic_CustomLogicWrapEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41b1775;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWrapEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41b1550

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWrapEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad521 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"NoWrap");
    il2cpp_runtime_helper_023445d0(&"WrapReverse");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    g_data_057ad521 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"NoWrap",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Wrap",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad523 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Wrap_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
        g_data_057ad523 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"WrapReverse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad524 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WrapReverse_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
        g_data_057ad524 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicWrapEnum not found");
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
  if (g_data_057ad522 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b16f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NoWrap_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b1705;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b1711;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b171d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
    g_data_057ad522 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b1733;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b174c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b175b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b1775;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__NoWrap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap (const MethodInfo* method);
// 0x41b16e0

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this;
  
  if (g_data_057ad522 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__NoWrap_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
    g_data_057ad522 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return __this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__Wrap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap (const MethodInfo* method);
// 0x41b1780

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this;
  
  if (g_data_057ad523 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Wrap_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
    g_data_057ad523 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return __this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__WrapReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse (const MethodInfo* method);
// 0x41b1820

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this;
  
  if (g_data_057ad524 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__WrapReverse_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicWrapEnum_object);
    g_data_057ad524 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicWrapEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return __this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWrapEnum_Bindings___cctor (const MethodInfo* method);
// 0x41b18c0

void CustomLogic_CustomLogicWrapEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad525 == '\0') {
    uStack_20 = 0x41b18d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x41b18e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41b18f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41b18fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41b1909;
    il2cpp_runtime_helper_023445d0(&"NoWrap");
    uStack_20 = 0x41b1915;
    il2cpp_runtime_helper_023445d0(&"WrapReverse");
    uStack_20 = 0x41b1921;
    il2cpp_runtime_helper_023445d0(&"Wrap");
    g_data_057ad525 = '\x01';
  }
  uStack_20 = 0x41b1937;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x41b194c;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x41b196d;
    System_Collections_Generic_HashSet_object___Add(__this,"NoWrap",MethodInfo_Boolean_Add);
    uStack_20 = 0x41b1982;
    System_Collections_Generic_HashSet_object___Add(__this,"Wrap",MethodInfo_Boolean_Add);
    uStack_20 = 0x41b1997;
    System_Collections_Generic_HashSet_object___Add(__this,"WrapReverse",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x41b19c9;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__NoWrap>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__NoWrap_g____getter_2_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x41b19d0

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__NoWrap_g____getter_2_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__Wrap>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__Wrap_g____getter_3_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x41b19f0

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__Wrap_g____getter_3_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__WrapReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__WrapReverse_g____getter_4_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x41b1a10

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__WrapReverse_g____getter_4_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWrapEnum___ctor (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x41b1330

void CustomLogic_CustomLogicWrapEnum___ctor(CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad51e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad51e = '\x01';
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


// CustomLogic.CustomLogicWrapEnum$$get_NoWrap
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_NoWrap (const MethodInfo* method);
// 0x41b13a0

int32_t CustomLogic_CustomLogicWrapEnum__get_NoWrap(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicWrapEnum$$get_Wrap
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_Wrap (const MethodInfo* method);
// 0x41b13b0

int32_t CustomLogic_CustomLogicWrapEnum__get_Wrap(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicWrapEnum$$get_WrapReverse
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_WrapReverse (const MethodInfo* method);
// 0x41b13c0

int32_t CustomLogic_CustomLogicWrapEnum__get_WrapReverse(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicWrapEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWrapEnum__get_ClassName (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x41b13d0

System_String_o *
CustomLogic_CustomLogicWrapEnum__get_ClassName(CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad51f == '\0') {
    il2cpp_runtime_helper_023445d0(&"WrapEnum");
    g_data_057ad51f = '\x01';
  }
  return "WrapEnum";
}


// CustomLogic.CustomLogicWrapEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_IsAbstract (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x41b1400

bool_conflict
CustomLogic_CustomLogicWrapEnum__get_IsAbstract(CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWrapEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_IsStatic (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x41b1410

bool_conflict
CustomLogic_CustomLogicWrapEnum__get_IsStatic(CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWrapEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x41b1420

bool_conflict
CustomLogic_CustomLogicWrapEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


