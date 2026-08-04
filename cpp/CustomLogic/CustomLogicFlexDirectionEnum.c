// Type: CustomLogic.CustomLogicFlexDirectionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFlexDirectionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFlexDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFlexDirectionEnum_o* CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41545b0

CustomLogic_CustomLogicFlexDirectionEnum_o *
CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicFlexDirectionEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057accb0 == '\0') {
    pSStack_20 = (System_String_o *)0x41545cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicFlexDirectionEnum);
    g_data_057accb0 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4154647;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41545f6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(_DAT_05577ea0);
    if (g_data_057accae == '\0') {
      pSStack_20 = (System_String_o *)0x415460e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057accae = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x415462d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4154637;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicFlexDirectionEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x415464f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4154662;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4154671;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicFlexDirectionEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4154680;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4154690;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x415469f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41546a7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x41546b7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41546c3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicFlexDirectionEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41546ce;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057accb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"RowReverse");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"ColumnReverse");
    g_data_057accb1 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Row",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Column",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accb3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Column_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
        g_data_057accb3 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFlexDirectionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"RowReverse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RowReverse_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
        g_data_057accb4 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFlexDirectionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ColumnReverse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accb5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColumnReverse_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
        g_data_057accb5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFlexDirectionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicFlexDirectionEnum not found");
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
  if (g_data_057accb2 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41548c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Row_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41548d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41548e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41548ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
    g_data_057accb2 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4154903;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x415491c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x415492b;
  pCVar8 = (CustomLogic_CustomLogicFlexDirectionEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4154945;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41546d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057accb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"RowReverse");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"ColumnReverse");
    g_data_057accb1 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Row",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Column",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accb3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Column_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
        g_data_057accb3 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"RowReverse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RowReverse_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
        g_data_057accb4 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ColumnReverse",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accb5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColumnReverse_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
        g_data_057accb5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicFlexDirectionEnum not found");
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
  if (g_data_057accb2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41548c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Row_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41548d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41548e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41548ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
    g_data_057accb2 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4154903;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415491c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415492b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4154945;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Row
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row (const MethodInfo* method);
// 0x41548b0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (g_data_057accb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Row_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
    g_data_057accb2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Column
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column (const MethodInfo* method);
// 0x4154950

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (g_data_057accb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Column_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
    g_data_057accb3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__RowReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse (const MethodInfo* method);
// 0x41549f0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (g_data_057accb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__RowReverse_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
    g_data_057accb4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__ColumnReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse (const MethodInfo* method);
// 0x4154a90

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this;
  
  if (g_data_057accb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColumnReverse_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
    g_data_057accb5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFlexDirectionEnum);
  return __this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x4154b30

void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057accb6 == '\0') {
    uStack_20 = 0x4154b49;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4154b55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4154b61;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x4154b6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4154b79;
    il2cpp_runtime_helper_023445d0(&"Column");
    uStack_20 = 0x4154b85;
    il2cpp_runtime_helper_023445d0(&"RowReverse");
    uStack_20 = 0x4154b91;
    il2cpp_runtime_helper_023445d0(&"Row");
    uStack_20 = 0x4154b9d;
    il2cpp_runtime_helper_023445d0(&"ColumnReverse");
    g_data_057accb6 = '\x01';
  }
  uStack_20 = 0x4154bb3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x4154bc8;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x4154bed;
    System_Collections_Generic_HashSet_object___Add(__this,"Row",MethodInfo_Boolean_Add);
    uStack_20 = 0x4154c02;
    System_Collections_Generic_HashSet_object___Add(__this,"Column",MethodInfo_Boolean_Add);
    uStack_20 = 0x4154c17;
    System_Collections_Generic_HashSet_object___Add(__this,"RowReverse",MethodInfo_Boolean_Add);
    uStack_20 = 0x4154c2c;
    System_Collections_Generic_HashSet_object___Add(__this,"ColumnReverse",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x4154c5e;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = CONCAT44(2,uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Row>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x4154c60

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Column>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x4154c80

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__RowReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x4154ca0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__ColumnReverse>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x4154cc0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum___ctor (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x41544a0

void CustomLogic_CustomLogicFlexDirectionEnum___ctor
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057accae = '\x01';
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


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Row
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row (const MethodInfo* method);
// 0x4154510

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Column
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column (const MethodInfo* method);
// 0x4154520

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_RowReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse (const MethodInfo* method);
// 0x4154530

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ColumnReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse (const MethodInfo* method);
// 0x4154540

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x4154550

System_String_o *
CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  if (g_data_057accaf == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexDirectionEnum");
    g_data_057accaf = '\x01';
  }
  return "FlexDirectionEnum";
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x4154580

bool_conflict
CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x4154590

bool_conflict
CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x41545a0

bool_conflict
CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


