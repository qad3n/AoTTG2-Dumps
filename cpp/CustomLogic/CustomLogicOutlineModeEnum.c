// Type: CustomLogic.CustomLogicOutlineModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOutlineModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicOutlineModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOutlineModeEnum_o* CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41857b0

CustomLogic_CustomLogicOutlineModeEnum_o *
CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_CustomLogicOutlineModeEnum_o *pCVar2;
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
  if (g_data_057ad18d == '\0') {
    pSStack_20 = (System_String_o *)0x41857cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad18d = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4185847;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41857f6;
    pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicOutlineModeEnum);
    if (g_data_057ad184 == '\0') {
      pSStack_20 = (System_String_o *)0x418580e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad184 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x418582d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4185837;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  pSStack_20 = (System_String_o *)0x418584f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4185862;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4185871;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicOutlineModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4185880;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4185890;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x418589f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41858a7;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41858b7;
  System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41858c3;
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicOutlineModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41858ce;
  pSVar7 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this,uVar5);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar3;
  if (g_data_057ad18e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OutlineAndSilhouette");
    il2cpp_runtime_helper_023445d0(&"SilhouetteOnly");
    il2cpp_runtime_helper_023445d0(&"OutlineAndLightenColor");
    il2cpp_runtime_helper_023445d0(&"OutlineHidden");
    il2cpp_runtime_helper_023445d0(&"OutlineVisible");
    il2cpp_runtime_helper_023445d0(&"OutlineAll");
    g_data_057ad18e = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"OutlineAll",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"OutlineVisible",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad190 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineVisible_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad190 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"OutlineHidden",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad191 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineHidden_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad191 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"OutlineAndSilhouette",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad192 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAndSilhouette_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad192 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"SilhouetteOnly",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad193 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SilhouetteOnly_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad193 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return pCVar2;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar7,"OutlineAndLightenColor",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad194 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAndLightenColor_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad194 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return pCVar2;
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicOutlineModeEnum not found");
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
  if (g_data_057ad18f == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185b59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAll_g____getter_2);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185b65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185b71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185b7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad18f = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185b93;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185bac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185bbb;
  pCVar2 = (CustomLogic_CustomLogicOutlineModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4185bd5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return pCVar2;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41858d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad18e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OutlineAndSilhouette");
    il2cpp_runtime_helper_023445d0(&"SilhouetteOnly");
    il2cpp_runtime_helper_023445d0(&"OutlineAndLightenColor");
    il2cpp_runtime_helper_023445d0(&"OutlineHidden");
    il2cpp_runtime_helper_023445d0(&"OutlineVisible");
    il2cpp_runtime_helper_023445d0(&"OutlineAll");
    g_data_057ad18e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"OutlineAll",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"OutlineVisible",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad190 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineVisible_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad190 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"OutlineHidden",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad191 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineHidden_g____gette);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad191 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"OutlineAndSilhouette",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad192 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAndSilhouette_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad192 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"SilhouetteOnly",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad193 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SilhouetteOnly_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad193 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"OutlineAndLightenColor",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad194 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAndLightenColor_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
        g_data_057ad194 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicOutlineModeEnum not found");
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
  if (g_data_057ad18f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185b59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAll_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185b65;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185b71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185b7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad18f = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185b93;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185bac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185bbb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4185bd5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAll
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll (const MethodInfo* method);
// 0x4185b40

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (g_data_057ad18f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAll_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad18f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineVisible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible (const MethodInfo* method);
// 0x4185be0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (g_data_057ad190 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineVisible_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad190 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineHidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden (const MethodInfo* method);
// 0x4185c80

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (g_data_057ad191 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineHidden_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad191 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndSilhouette
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette (const MethodInfo* method);
// 0x4185d20

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (g_data_057ad192 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAndSilhouette_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad192 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__SilhouetteOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly (const MethodInfo* method);
// 0x4185dc0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (g_data_057ad193 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SilhouetteOnly_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad193 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndLightenColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor (const MethodInfo* method);
// 0x4185e60

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this;
  
  if (g_data_057ad194 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__OutlineAndLightenColor_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicOutlineModeEnum_object);
    g_data_057ad194 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOutlineModeEnum);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x4185f00

void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad195 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"OutlineAndSilhouette");
    il2cpp_runtime_helper_023445d0(&"SilhouetteOnly");
    il2cpp_runtime_helper_023445d0(&"OutlineAndLightenColor");
    il2cpp_runtime_helper_023445d0(&"OutlineHidden");
    il2cpp_runtime_helper_023445d0(&"OutlineVisible");
    il2cpp_runtime_helper_023445d0(&"OutlineAll");
    g_data_057ad195 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"OutlineAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OutlineVisible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OutlineHidden",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OutlineAndSilhouette",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SilhouetteOnly",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"OutlineAndLightenColor",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad196 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad196 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad43b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAll>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x4186070

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad196 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad196 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad43b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineVisible>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x4186120

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad197 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad197 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad43c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineHidden>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x41861d0

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad198 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad198 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad43d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndSilhouette>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x4186280

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad199 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad199 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad43e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__SilhouetteOnly>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x4186330

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad19a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad19a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad43f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad43f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndLightenColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x41863e0

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad19b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad440 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad440 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicOutlineModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___ctor (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x4185260

void CustomLogic_CustomLogicOutlineModeEnum___ctor
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad184 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad184 = '\x01';
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


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAll
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll (const MethodInfo* method);
// 0x41852d0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad185 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad185 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineVisible
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible (const MethodInfo* method);
// 0x4185340

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad186 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad186 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineHidden
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden (const MethodInfo* method);
// 0x41853b0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad187 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndSilhouette
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette (const MethodInfo* method);
// 0x4185420

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad188 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad188 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_SilhouetteOnly
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly (const MethodInfo* method);
// 0x4185490

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad189 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad189 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndLightenColor
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor (const MethodInfo* method);
// 0x4185500

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad18a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    g_data_057ad18a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicOutlineModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_ClassName (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x4185570

System_String_o *
CustomLogic_CustomLogicOutlineModeEnum__get_ClassName
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad18b == '\0') {
    il2cpp_runtime_helper_023445d0(&"OutlineModeEnum");
    g_data_057ad18b = '\x01';
  }
  return "OutlineModeEnum";
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x41855a0

bool_conflict
CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x41855b0

bool_conflict
CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x41855c0

bool_conflict
CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOutlineModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___cctor (const MethodInfo* method);
// 0x41855d0

void CustomLogic_CustomLogicOutlineModeEnum___cctor(MethodInfo *method)

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
  
  if (g_data_057ad18c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicOutlineModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mode);
    g_data_057ad18c = '\x01';
  }
  SStack_28.klass = TypeInfo_Mode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8));
  SStack_40.klass = TypeInfo_Mode;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  SStack_58.klass = TypeInfo_Mode;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  SStack_70.klass = TypeInfo_Mode;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  SStack_88.klass = TypeInfo_Mode;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  SStack_a0.klass = TypeInfo_Mode;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicOutlineModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar2);
  return;
}


