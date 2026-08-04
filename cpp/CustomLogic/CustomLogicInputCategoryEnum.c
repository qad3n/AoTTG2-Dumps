// Type: CustomLogic.CustomLogicInputCategoryEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputCategoryEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputCategoryEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputCategoryEnum_o* CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4171070

CustomLogic_CustomLogicInputCategoryEnum_o *
CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicInputCategoryEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057aced7 == '\0') {
    pSStack_20 = (System_String_o *)0x417108c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputCategoryEnum);
    g_data_057aced7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4171107;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41710b6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputCategoryEnum);
    if (g_data_057acecf == '\0') {
      pSStack_20 = (System_String_o *)0x41710ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acecf = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41710ed;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41710f7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicInputCategoryEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x417110f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4171122;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4171131;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputCategoryEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4171140;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4171150;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x417115f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4171167;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4171177;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4171183;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputCategoryEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x417118e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057aced8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057aced8 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"General",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Human",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057aceda == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057aceda = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicInputCategoryEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acedb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acedb = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicInputCategoryEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Interaction",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acedc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interaction_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acedc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicInputCategoryEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"AnnieShifter",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acedd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieShifter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acedd = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicInputCategoryEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ErenShifter",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acede == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ErenShifter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acede = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicInputCategoryEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputCategoryEnum not found");
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
  if (g_data_057aced9 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4171419;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__General_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4171425;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4171431;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x417143d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057aced9 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4171453;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x417146c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x417147b;
  pCVar8 = (CustomLogic_CustomLogicInputCategoryEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4171495;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4171190

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057aced8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057aced8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"General",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aceda == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057aceda = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acedb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acedb = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Interaction",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acedc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interaction_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acedc = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"AnnieShifter",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acedd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieShifter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acedd = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ErenShifter",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acede == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ErenShifter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
        g_data_057acede = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputCategoryEnum not found");
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
  if (g_data_057aced9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4171419;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__General_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4171425;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4171431;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417143d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057aced9 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4171453;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417146c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x417147b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4171495;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__General
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General (const MethodInfo* method);
// 0x4171400

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (g_data_057aced9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__General_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057aced9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x41714a0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (g_data_057aceda == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057aceda = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x4171540

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (g_data_057acedb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057acedb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Interaction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction (const MethodInfo* method);
// 0x41715e0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (g_data_057acedc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Interaction_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057acedc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__AnnieShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter (const MethodInfo* method);
// 0x4171680

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (g_data_057acedd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieShifter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057acedd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__ErenShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter (const MethodInfo* method);
// 0x4171720

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this;
  
  if (g_data_057acede == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ErenShifter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputCategoryEnum_object);
    g_data_057acede = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputCategoryEnum);
  return __this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor (const MethodInfo* method);
// 0x41717c0

void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acedf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057acedf = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"General",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Human",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Titan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Interaction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AnnieShifter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ErenShifter",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aced0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057aced0 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__General>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x4171930

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (g_data_057aced0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057aced0 = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x4171960

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (g_data_057aced1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Human");
    g_data_057aced1 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x4171990

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (g_data_057aced2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057aced2 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Interaction>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x41719c0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (g_data_057aced3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057aced3 = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__AnnieShifter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x41719f0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (g_data_057aced4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    g_data_057aced4 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__ErenShifter>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x4171a20

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (g_data_057aced5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    g_data_057aced5 = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum___ctor (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x4170e80

void CustomLogic_CustomLogicInputCategoryEnum___ctor
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acecf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acecf = '\x01';
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


// CustomLogic.CustomLogicInputCategoryEnum$$get_General
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_General (const MethodInfo* method);
// 0x4170ef0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_General(MethodInfo *method)

{
  if (g_data_057aced0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057aced0 = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Human (const MethodInfo* method);
// 0x4170f20

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Human(MethodInfo *method)

{
  if (g_data_057aced1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Human");
    g_data_057aced1 = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Titan (const MethodInfo* method);
// 0x4170f50

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Titan(MethodInfo *method)

{
  if (g_data_057aced2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057aced2 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Interaction
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Interaction (const MethodInfo* method);
// 0x4170f80

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Interaction(MethodInfo *method)

{
  if (g_data_057aced3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057aced3 = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_AnnieShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter (const MethodInfo* method);
// 0x4170fb0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter(MethodInfo *method)

{
  if (g_data_057aced4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    g_data_057aced4 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ErenShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter (const MethodInfo* method);
// 0x4170fe0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter(MethodInfo *method)

{
  if (g_data_057aced5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    g_data_057aced5 = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ClassName (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x4171010

System_String_o *
CustomLogic_CustomLogicInputCategoryEnum__get_ClassName
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  if (g_data_057aced6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputCategoryEnum");
    g_data_057aced6 = '\x01';
  }
  return "InputCategoryEnum";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x4171040

bool_conflict
CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x4171050

bool_conflict
CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x4171060

bool_conflict
CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


