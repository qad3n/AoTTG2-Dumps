// Type: CustomLogic.CustomLogicTimeBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTimeBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTimeBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTimeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTimeBuiltin_o* CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41e6990

CustomLogic_CustomLogicTimeBuiltin_o *
CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicTimeBuiltin_o *pCVar8;
  System_Action_T__object__o *setter;
  System_ArgumentException_o **ppSVar9;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad7b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTimeBuiltin);
    g_data_057ad7b1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTimeBuiltin);
    if (g_data_057ad7ae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad7ae = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTimeBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTimeBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTimeBuiltin_CreateInstance);
  pSVar6 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppSVar9 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad7b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TickTime");
    il2cpp_runtime_helper_023445d0(&"GameTime");
    il2cpp_runtime_helper_023445d0(&"EngineTime");
    il2cpp_runtime_helper_023445d0(&"FrameTime");
    il2cpp_runtime_helper_023445d0(&"TimeScale");
    g_data_057ad7b2 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"TickTime",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"FrameTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pSVar6 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar6;
      if (g_data_057ad7b4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameTime_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b4 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTimeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"GameTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pSVar6 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar6;
      if (g_data_057ad7b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GameTime_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTimeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"EngineTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pSVar6 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar6;
      if (g_data_057ad7b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EngineTime_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b6 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTimeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"TimeScale",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar2;
      if (g_data_057ad7b7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTimeBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TimeScale_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TimeScale_g____setter_6_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b7 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTimeBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTimeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTimeBuiltin not found");
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
      ppSVar9 = (System_ArgumentException_o **)&uStack_18;
      pSVar6 = pSStack_28;
    }
    else {
      ppSVar9 = (System_ArgumentException_o **)&uStack_18;
      pSVar6 = pSStack_28;
    }
  }
  *(System_String_o **)((long)ppSVar9 + -8) = pSVar2;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x10) = pSVar6;
  *(undefined8 **)((long)ppSVar9 + -0x18) = puVar5;
  if (g_data_057ad7b3 == '\0') {
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6cf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TickTime_g____getter_2_0);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b3 = '\x01';
  }
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d33;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d4c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d5b;
  pCVar8 = (CustomLogic_CustomLogicTimeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x41e6d75;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return pCVar8;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41e6ab0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Action_T__object__o *setter;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad7b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TickTime");
    il2cpp_runtime_helper_023445d0(&"GameTime");
    il2cpp_runtime_helper_023445d0(&"EngineTime");
    il2cpp_runtime_helper_023445d0(&"FrameTime");
    il2cpp_runtime_helper_023445d0(&"TimeScale");
    g_data_057ad7b2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TickTime",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"FrameTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7b4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameTime_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b4 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"GameTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GameTime_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"EngineTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EngineTime_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b6 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"TimeScale",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7b7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTimeBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TimeScale_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TimeScale_g____setter_6_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
        g_data_057ad7b7 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
      System_Func_object__object____ctor();
      setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTimeBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTimeBuiltin not found");
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
  if (g_data_057ad7b3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6cf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TickTime_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b3 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d33;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d4c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d5b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41e6d75;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TickTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime (const MethodInfo* method);
// 0x41e6ce0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (g_data_057ad7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TickTime_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__FrameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime (const MethodInfo* method);
// 0x41e6d80

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (g_data_057ad7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__FrameTime_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__GameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime (const MethodInfo* method);
// 0x41e6e20

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (g_data_057ad7b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__GameTime_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__EngineTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime (const MethodInfo* method);
// 0x41e6ec0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (g_data_057ad7b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__EngineTime_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TimeScale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale (const MethodInfo* method);
// 0x41e6f60

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (g_data_057ad7b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicTimeBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TimeScale_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__TimeScale_g____setter_6_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTimeBuiltin_object);
    g_data_057ad7b7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicTimeBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41e7040

void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  float fVar1;
  undefined8 uStack_20;
  
  if (g_data_057ad7b8 == '\0') {
    uStack_20 = 0x41e7059;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x41e7065;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41e7071;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41e707d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41e7089;
    il2cpp_runtime_helper_023445d0(&"TickTime");
    uStack_20 = 0x41e7095;
    il2cpp_runtime_helper_023445d0(&"GameTime");
    uStack_20 = 0x41e70a1;
    il2cpp_runtime_helper_023445d0(&"EngineTime");
    uStack_20 = 0x41e70ad;
    il2cpp_runtime_helper_023445d0(&"FrameTime");
    uStack_20 = 0x41e70b9;
    il2cpp_runtime_helper_023445d0(&"TimeScale");
    g_data_057ad7b8 = '\x01';
  }
  uStack_20 = 0x41e70cf;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x41e70e4;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x41e7109;
    System_Collections_Generic_HashSet_object___Add(__this,"TickTime",MethodInfo_Boolean_Add);
    uStack_20 = 0x41e711e;
    System_Collections_Generic_HashSet_object___Add(__this,"FrameTime",MethodInfo_Boolean_Add);
    uStack_20 = 0x41e7133;
    System_Collections_Generic_HashSet_object___Add(__this,"GameTime",MethodInfo_Boolean_Add);
    uStack_20 = 0x41e7148;
    System_Collections_Generic_HashSet_object___Add(__this,"EngineTime",MethodInfo_Boolean_Add);
    uStack_20 = 0x41e715d;
    System_Collections_Generic_HashSet_object___Add(__this,"TimeScale",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x41e718f;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  uStack_20 = CONCAT44(fVar1,(undefined4)uStack_20);
  il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TickTime>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x41e7190

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__FrameTime>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x41e71c0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__GameTime>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_4_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x41e71f0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_4_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  undefined8 uStack_20;
  undefined4 local_c;
  
  if (g_data_057ad7af == '\0') {
    uStack_20 = 0x41e724f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad7af = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    uStack_20 = 0x41e726e;
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    local_c = *(undefined4 *)(lVar2 + 0x20);
    uStack_20 = 0x41e723d;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_c);
    return pIVar3;
  }
  uStack_20 = 0x41e7286;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  uStack_20 = CONCAT44(fVar4,(undefined4)uStack_20);
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
  return pIVar3;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__EngineTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_5_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x41e7290

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_5_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_time((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_6_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x41e72c0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_6_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_6_1 (CustomLogic_CustomLogicTimeBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41e72f0

void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_6_1
               (CustomLogic_CustomLogicTimeBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (g_data_057ad7b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7b9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin___ctor (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x41e67f0

void CustomLogic_CustomLogicTimeBuiltin___ctor
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad7ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad7ae = '\x01';
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


// CustomLogic.CustomLogicTimeBuiltin$$get_TickTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TickTime (const MethodInfo* method);
// 0x41e6860

float CustomLogic_CustomLogicTimeBuiltin__get_TickTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_FrameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime (const MethodInfo* method);
// 0x41e6870

float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_GameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_GameTime (const MethodInfo* method);
// 0x41e6880

float CustomLogic_CustomLogicTimeBuiltin__get_GameTime(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (g_data_057ad7af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad7af = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return *(float *)(lVar2 + 0x20);
  }
  il2cpp_runtime_helper_022b2c90();
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  return fVar3;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_EngineTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime (const MethodInfo* method);
// 0x41e6900

float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_TimeScale
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale (const MethodInfo* method);
// 0x41e6910

float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$set_TimeScale
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale (float value, const MethodInfo* method);
// 0x41e6920

void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale(float value,MethodInfo *method)

{
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTimeBuiltin__get_ClassName (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x41e6930

System_String_o *
CustomLogic_CustomLogicTimeBuiltin__get_ClassName
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad7b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Time");
    g_data_057ad7b0 = '\x01';
  }
  return "Time";
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x41e6960

bool_conflict
CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsStatic (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x41e6970

bool_conflict
CustomLogic_CustomLogicTimeBuiltin__get_IsStatic
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTimeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x41e6980

bool_conflict
CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


