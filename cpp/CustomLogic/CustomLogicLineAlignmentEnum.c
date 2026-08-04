// Type: CustomLogic.CustomLogicLineAlignmentEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineAlignmentEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineAlignmentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineAlignmentEnum_o* CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4183040

CustomLogic_CustomLogicLineAlignmentEnum_o *
CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicLineAlignmentEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad15a == '\0') {
    pSStack_20 = (System_String_o *)0x418305c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLineAlignmentEnum);
    g_data_057ad15a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41830d7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4183086;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLineAlignmentEnum);
    if (g_data_057ad158 == '\0') {
      pSStack_20 = (System_String_o *)0x418309e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad158 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41830bd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41830c7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicLineAlignmentEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41830df;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41830f2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4183101;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLineAlignmentEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4183110;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4183120;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418312f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4183137;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4183147;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4183153;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLineAlignmentEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x418315e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad15b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TransformZ");
    il2cpp_runtime_helper_023445d0(&"Local");
    il2cpp_runtime_helper_023445d0(&"View");
    g_data_057ad15b = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"View",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Local",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad15d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Local_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
        g_data_057ad15d = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicLineAlignmentEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"TransformZ",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad15e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TransformZ_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
        g_data_057ad15e = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicLineAlignmentEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLineAlignmentEnum not found");
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
  if (g_data_057ad15c == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183309;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__View_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183315;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183321;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x418332d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
    g_data_057ad15c = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183343;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x418335c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x418336b;
  pCVar8 = (CustomLogic_CustomLogicLineAlignmentEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4183385;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4183160

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad15b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TransformZ");
    il2cpp_runtime_helper_023445d0(&"Local");
    il2cpp_runtime_helper_023445d0(&"View");
    g_data_057ad15b = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"View",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Local",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad15d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Local_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
        g_data_057ad15d = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"TransformZ",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad15e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TransformZ_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
        g_data_057ad15e = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLineAlignmentEnum not found");
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
  if (g_data_057ad15c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183309;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__View_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183315;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183321;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x418332d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
    g_data_057ad15c = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183343;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x418335c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x418336b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4183385;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__View
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View (const MethodInfo* method);
// 0x41832f0

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this;
  
  if (g_data_057ad15c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__View_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
    g_data_057ad15c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return __this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__Local
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local (const MethodInfo* method);
// 0x4183390

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this;
  
  if (g_data_057ad15d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Local_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
    g_data_057ad15d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return __this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__TransformZ
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ (const MethodInfo* method);
// 0x4183430

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this;
  
  if (g_data_057ad15e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TransformZ_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
    g_data_057ad15e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineAlignmentEnum);
  return __this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor (const MethodInfo* method);
// 0x41834d0

void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad15f == '\0') {
    uStack_20 = 0x41834e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x41834f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x4183501;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x418350d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x4183519;
    il2cpp_runtime_helper_023445d0(&"TransformZ");
    uStack_20 = 0x4183525;
    il2cpp_runtime_helper_023445d0(&"Local");
    uStack_20 = 0x4183531;
    il2cpp_runtime_helper_023445d0(&"View");
    g_data_057ad15f = '\x01';
  }
  uStack_20 = 0x4183547;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x418355c;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x418357d;
    System_Collections_Generic_HashSet_object___Add(__this,"View",MethodInfo_Boolean_Add);
    uStack_20 = 0x4183592;
    System_Collections_Generic_HashSet_object___Add(__this,"Local",MethodInfo_Boolean_Add);
    uStack_20 = 0x41835a7;
    System_Collections_Generic_HashSet_object___Add(__this,"TransformZ",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x41835d9;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__View>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x41835e0

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__Local>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x4183600

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__TransformZ>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x4183620

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum___ctor (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x4182f40

void CustomLogic_CustomLogicLineAlignmentEnum___ctor
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad158 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad158 = '\x01';
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


// CustomLogic.CustomLogicLineAlignmentEnum$$get_View
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View (const MethodInfo* method);
// 0x4182fb0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_Local
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local (const MethodInfo* method);
// 0x4182fc0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_TransformZ
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ (const MethodInfo* method);
// 0x4182fd0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x4182fe0

System_String_o *
CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad159 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LineAlignmentEnum");
    g_data_057ad159 = '\x01';
  }
  return "LineAlignmentEnum";
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x4183010

bool_conflict
CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x4183020

bool_conflict
CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x4183030

bool_conflict
CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


