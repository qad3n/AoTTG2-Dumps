// Type: CustomLogic.CustomLogicTSKillSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTSKillSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTSKillSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTSKillSoundEnum_o* CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ad600

CustomLogic_CustomLogicTSKillSoundEnum_o *
CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_CustomLogicTSKillSoundEnum_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad4cf == '\0') {
    pSStack_20 = (System_String_o *)0x41ad61c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4cf = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41ad697;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41ad646;
    pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTSKillSoundEnum);
    if (g_data_057ad4c6 == '\0') {
      pSStack_20 = (System_String_o *)0x41ad65e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad4c6 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41ad67d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41ad687;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  pSStack_20 = (System_String_o *)0x41ad69f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41ad6b2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ad6c1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTSKillSoundEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41ad6d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41ad6e0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ad6ef;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41ad6f7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41ad707;
  System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ad713;
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTSKillSoundEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41ad71e;
  pSVar7 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this,uVar5);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar3;
  if (g_data_057ad4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ArmorHit");
    il2cpp_runtime_helper_023445d0(&"MaxRangeShot");
    il2cpp_runtime_helper_023445d0(&"Air");
    il2cpp_runtime_helper_023445d0(&"Ground");
    il2cpp_runtime_helper_023445d0(&"CloseShot");
    il2cpp_runtime_helper_023445d0(&"Kill");
    g_data_057ad4d0 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Kill",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Air",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4d2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d2 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"Ground",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4d3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ground_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d3 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"ArmorHit",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4d4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmorHit_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d4 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"CloseShot",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CloseShot_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d5 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"MaxRangeShot",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4d6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MaxRangeShot_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d6 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return pCVar2;
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTSKillSoundEnum not found");
    pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
  }
  else {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar7 = pSStack_28;
      pSVar3 = pSStack_20;
    }
    else {
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar7 = pSStack_28;
      pSVar3 = pSStack_20;
    }
  }
  *(System_String_o **)((long)ppuVar9 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar9 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar9 + -0x18) = puVar6;
  if (g_data_057ad4d1 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ad9a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kill_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ad9b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ad9c1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ad9cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d1 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ad9e3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ad9fc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ada0b;
  pCVar2 = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41ada25;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return pCVar2;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41ad720

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ArmorHit");
    il2cpp_runtime_helper_023445d0(&"MaxRangeShot");
    il2cpp_runtime_helper_023445d0(&"Air");
    il2cpp_runtime_helper_023445d0(&"Ground");
    il2cpp_runtime_helper_023445d0(&"CloseShot");
    il2cpp_runtime_helper_023445d0(&"Kill");
    g_data_057ad4d0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kill",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Air",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4d2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d2 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Ground",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4d3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ground_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d3 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ArmorHit",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4d4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmorHit_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d4 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"CloseShot",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CloseShot_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"MaxRangeShot",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4d6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MaxRangeShot_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
        g_data_057ad4d6 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTSKillSoundEnum not found");
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
  if (g_data_057ad4d1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ad9a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kill_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ad9b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ad9c1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ad9cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d1 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ad9e3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ad9fc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ada0b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ada25;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Kill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill (const MethodInfo* method);
// 0x41ad990

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (g_data_057ad4d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kill_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Air
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air (const MethodInfo* method);
// 0x41ada30

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (g_data_057ad4d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Air_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Ground
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground (const MethodInfo* method);
// 0x41adad0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (g_data_057ad4d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ground_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__ArmorHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit (const MethodInfo* method);
// 0x41adb70

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (g_data_057ad4d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ArmorHit_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__CloseShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot (const MethodInfo* method);
// 0x41adc10

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (g_data_057ad4d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CloseShot_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__MaxRangeShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot (const MethodInfo* method);
// 0x41adcb0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (g_data_057ad4d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MaxRangeShot_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
    g_data_057ad4d6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x41add50

void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad4d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ArmorHit");
    il2cpp_runtime_helper_023445d0(&"MaxRangeShot");
    il2cpp_runtime_helper_023445d0(&"Air");
    il2cpp_runtime_helper_023445d0(&"Ground");
    il2cpp_runtime_helper_023445d0(&"CloseShot");
    il2cpp_runtime_helper_023445d0(&"Kill");
    g_data_057ad4d7 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Kill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Air",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Ground",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ArmorHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CloseShot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MaxRangeShot",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad4d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad68b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad68b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Kill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x41adec0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4d8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad68b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad68b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Air>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x41adf70

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4d9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad68c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad68c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Ground>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x41ae020

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4da = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad68d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad68d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__ArmorHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x41ae0d0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4db = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad68e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad68e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__CloseShot>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x41ae180

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4dc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad68f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad68f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__MaxRangeShot>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x41ae230

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4dd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad690 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad690 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___ctor (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x41ad0b0

void CustomLogic_CustomLogicTSKillSoundEnum___ctor
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad4c6 = '\x01';
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


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Kill
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Kill (const MethodInfo* method);
// 0x41ad120

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Kill(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4c7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Air
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Air (const MethodInfo* method);
// 0x41ad190

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Air(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Ground
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Ground (const MethodInfo* method);
// 0x41ad200

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Ground(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4c9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ArmorHit
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit (const MethodInfo* method);
// 0x41ad270

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4ca = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_CloseShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot (const MethodInfo* method);
// 0x41ad2e0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4cb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_MaxRangeShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot (const MethodInfo* method);
// 0x41ad350

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    g_data_057ad4cc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x41ad3c0

System_String_o *
CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad4cd == '\0') {
    il2cpp_runtime_helper_023445d0(&"TSKillSoundEnum");
    g_data_057ad4cd = '\x01';
  }
  return "TSKillSoundEnum";
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x41ad3f0

bool_conflict
CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x41ad400

bool_conflict
CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x41ad410

bool_conflict
CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___cctor (const MethodInfo* method);
// 0x41ad420

void CustomLogic_CustomLogicTSKillSoundEnum___cctor(MethodInfo *method)

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
  
  if (g_data_057ad4ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTSKillSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TSKillType);
    g_data_057ad4ce = '\x01';
  }
  SStack_28.klass = TypeInfo_TSKillType;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 2;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8));
  SStack_40.klass = TypeInfo_TSKillType;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 0;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  SStack_58.klass = TypeInfo_TSKillType;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 1;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  SStack_70.klass = TypeInfo_TSKillType;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  SStack_88.klass = TypeInfo_TSKillType;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  SStack_a0.klass = TypeInfo_TSKillType;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar2);
  return;
}


