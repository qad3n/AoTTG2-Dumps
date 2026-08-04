// Type: CustomLogic.CustomLogicCollideModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollideModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideModeEnum_o* CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414ba50

CustomLogic_CustomLogicCollideModeEnum_o *
CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicCollideModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc13 == '\0') {
    pSStack_20 = (System_String_o *)0x414ba6c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollideModeEnum);
    g_data_057acc13 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414bae7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414ba96;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCollideModeEnum);
    if (g_data_057acc0e == '\0') {
      pSStack_20 = (System_String_o *)0x414baae;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc0e = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414bacd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414bad7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCollideModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414baef;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414bb02;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414bb11;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCollideModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414bb20;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414bb30;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414bb3f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414bb47;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x414bb57;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414bb63;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollideModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414bb6e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acc14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Physical");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Region");
    g_data_057acc14 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Region",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Physical",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc16 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Physical_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
        g_data_057acc16 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCollideModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"None",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc17 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
        g_data_057acc17 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCollideModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollideModeEnum not found");
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
  if (g_data_057acc15 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Region_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
    g_data_057acc15 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd53;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd6c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd7b;
  pCVar8 = (CustomLogic_CustomLogicCollideModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414bd95;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414bb70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acc14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Physical");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Region");
    g_data_057acc14 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Region",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Physical",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc16 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Physical_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
        g_data_057acc16 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc17 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
        g_data_057acc17 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCollideModeEnum not found");
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
  if (g_data_057acc15 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Region_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
    g_data_057acc15 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd53;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd6c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd7b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414bd95;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Region
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region (const MethodInfo* method);
// 0x414bd00

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this;
  
  if (g_data_057acc15 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Region_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
    g_data_057acc15 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Physical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical (const MethodInfo* method);
// 0x414bda0

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this;
  
  if (g_data_057acc16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Physical_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
    g_data_057acc16 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x414be40

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this;
  
  if (g_data_057acc17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__None_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCollideModeEnum_object);
    g_data_057acc17 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x414bee0

void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acc18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Physical");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Region");
    g_data_057acc18 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Region",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Physical",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"None",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acce6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acce6 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Region>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x414bff0

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acce6 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Physical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x414c060

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acce7 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x414c0d0

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acce8 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum___ctor (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x414b830

void CustomLogic_CustomLogicCollideModeEnum___ctor
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc0e = '\x01';
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


// CustomLogic.CustomLogicCollideModeEnum$$get_Region
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Region (const MethodInfo* method);
// 0x414b8a0

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Region(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acc0f = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_Physical
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Physical (const MethodInfo* method);
// 0x414b910

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Physical(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acc10 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_None (const MethodInfo* method);
// 0x414b980

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_None(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057acc11 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideMode + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_ClassName (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x414b9f0

System_String_o *
CustomLogic_CustomLogicCollideModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc12 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CollideModeEnum");
    g_data_057acc12 = '\x01';
  }
  return "CollideModeEnum";
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x414ba20

bool_conflict
CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsStatic (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x414ba30

bool_conflict
CustomLogic_CustomLogicCollideModeEnum__get_IsStatic
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x414ba40

bool_conflict
CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


