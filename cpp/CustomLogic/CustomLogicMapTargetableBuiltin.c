// Type: CustomLogic.CustomLogicMapTargetableBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapTargetableBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapTargetableBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapTargetableBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40f34a0

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  undefined4 in_EAX;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar4;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar5;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *pCVar8;
  System_ArgumentException_o **ppSVar9;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  _uStack_18 = CONCAT44((int)args->max_length,uStack_18);
  pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicMapTargetableBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicMapTargetableBuiltin_CreateInstance);
  pSVar5 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar4);
  ppSVar9 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac7b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ac7b5 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar5,"Team",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar5,"Position",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pSVar5 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar5 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar5;
      if (g_data_057ac7b7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
        g_data_057ac7b7 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar6,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar5,"Enabled",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7b8 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Enabled_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Enabled_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
        g_data_057ac7b8 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicMapTargetableBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar2,(System_String_o *)pSVar5,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar5 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar5,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar5,uVar4);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar5 = pSStack_28;
  }
  else {
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar5 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar9 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x18) = pSVar5;
  if (g_data_057ac7b6 == '\0') {
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f36da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f36e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Team_g____getter_2_0);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f36f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Team_g____setter_2_1);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f36fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f370a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f3716;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
    g_data_057ac7b6 = '\x01';
  }
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f372c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f3745;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f3754;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f376d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f377c;
  pCVar8 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f3797;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
  return pCVar8;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40f3530

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_Func_T__object__o *pSVar3;
  System_Action_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined8 *puStack_18;
  
  if (g_data_057ac7b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ac7b5 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7b7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
        g_data_057ac7b7 = '\x01';
      }
      pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar3,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7b8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Enabled_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Enabled_g____setter_4_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
        g_data_057ac7b8 = '\x01';
      }
      pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
      System_Func_object__object____ctor();
      pSVar4 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar3,pSVar4,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicMapTargetableBuiltin not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar2);
    register0x00000020 = (BADSPACEBASE *)&puStack_18;
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac7b6 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f36da;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f36e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Team_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f36f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Team_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f36fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f370a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f3716;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
    g_data_057ac7b6 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f372c;
  pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f3745;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f3754;
  pSVar4 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f376d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f377c;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f3797;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar3,pSVar4,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x40f36c0

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this;
  
  if (g_data_057ac7b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Team_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Team_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
    g_data_057ac7b6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x40f37a0

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this;
  
  if (g_data_057ac7b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Position_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
    g_data_057ac7b7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x40f3840

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this;
  
  if (g_data_057ac7b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Enabled_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Enabled_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
    g_data_057ac7b8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicMapTargetableBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40f3920

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *pIVar3;
  MethodInfo_33E0570 *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  
  if (g_data_057ac7b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Enabled");
    g_data_057ac7b9 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  __this_00 = MethodInfo_HashSet_1_System_String;
  pSVar4 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Team",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Enabled",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (*(long *)&(pSVar4->fields)._version != 0)) {
    return;
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this;
  if (g_data_057ac7ba == '\0') {
    uStack_40 = 0x40f3a6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x40f3a7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40f3a9a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40f3aac;
  method_00 = MethodInfo_String_ConvertTo_String;
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)__this_00,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (lVar1 = *(long *)&(pSVar4->fields)._version, __this_00 = (MethodInfo_33E0570 *)0x0, lVar1 != 0)) {
    *(Il2CppObject **)(lVar1 + 0x28) = pIVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pIVar3);
    return;
  }
  uStack_40 = 0x40f3ad6;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_33E0570 *)0x0) {
    CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
              ((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__this_00,method_00);
    return;
  }
  uStack_48 = 0x40f3af1;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((__this_00 != (MethodInfo_33E0570 *)0x0) && (__this_00->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_48 = CONCAT17(*(undefined1 *)(__this_00->rgctx_data + 6),(undefined7)uStack_48);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__this_00 != (MethodInfo_33E0570 *)0x0) && (__this_00->rgctx_data != (Il2CppRGCTXData *)0x0)) {
    *(char *)(__this_00->rgctx_data + 6) = (char)bVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)method_00,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x40f3a30

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields)._Team_k__BackingField;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7ba == '\0') {
    uStack_28 = 0x40f3a6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x40f3a7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f3a9a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f3aac;
  method_00 = MethodInfo_String_ConvertTo_String;
  pSVar3 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, method = (MethodInfo *)0x0,
     pMVar1 != (Map_MapTargetable_o *)0x0)) {
    (pMVar1->fields)._Team_k__BackingField = pSVar3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&(pMVar1->fields)._Team_k__BackingField,pSVar3);
    return pIVar4;
  }
  uStack_28 = 0x40f3ad6;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    pCVar5 = CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
                       ((CustomLogic_CustomLogicMapTargetableBuiltin_o *)method,method_00);
    return (Il2CppObject *)pCVar5;
  }
  uStack_30 = 0x40f3af1;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    uStack_30 = CONCAT17(*(undefined1 *)((method->field7_0x38).rgctx_data + 6),(undefined7)uStack_30);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    *(char *)((method->field7_0x38).rgctx_data + 6) = (char)bVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)method_00,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f3a50

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7ba == '\0') {
    uStack_20 = 0x40f3a6f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x40f3a7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ba = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f3a9a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f3aac;
  method_00 = MethodInfo_String_ConvertTo_String;
  pSVar3 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, __v = (Il2CppObject *)0x0,
     pMVar1 != (Map_MapTargetable_o *)0x0)) {
    (pMVar1->fields)._Team_k__BackingField = pSVar3;
    il2cpp_runtime_helper_022b4080(&(pMVar1->fields)._Team_k__BackingField,pSVar3);
    return;
  }
  uStack_20 = 0x40f3ad6;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__v !=
      (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
              ((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__v,method_00);
    return;
  }
  uStack_28 = 0x40f3af1;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__v !=
       (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__v)->fields)._Value_k__BackingField,
     pMVar1 != (Map_MapTargetable_o *)0x0)) {
    uStack_28 = CONCAT17((char)(pMVar1->fields)._Enabled_k__BackingField,(undefined7)uStack_28);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if (((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__v !=
       (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (((CustomLogic_CustomLogicMapTargetableBuiltin_o *)__v)->fields)._Value_k__BackingField,
     pMVar1 != (Map_MapTargetable_o *)0x0)) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)bVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)method_00,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x40f3ae0

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  Il2CppObject *pIVar4;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX;
  undefined8 uStack_10;
  
  if (__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    pCVar3 = CustomLogic_CustomLogicMapTargetableBuiltin__get_Position(__i,method);
    return (Il2CppObject *)pCVar3;
  }
  uStack_10 = 0x40f3af1;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    uStack_10 = CONCAT17((char)(pMVar1->fields)._Enabled_k__BackingField,(undefined7)uStack_10);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_10 + 7);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)bVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)method,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x40f3b00

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     ((__i->fields)._Value_k__BackingField != (Map_MapTargetable_o *)0x0)) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)bVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)method,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f3b40

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  
  if (g_data_057ac7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7bb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)bVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__v,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3260

UnityEngine_GameObject_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._GameObject_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Value
// il2cpp: Map_MapTargetable_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Value (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3270

Map_MapTargetable_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Value
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin___ctor (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, UnityEngine_GameObject_o* gameObject, Map_MapTargetable_o* mapTargetable, const MethodInfo* method);
// 0x40f3280

void CustomLogic_CustomLogicMapTargetableBuiltin___ctor
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,UnityEngine_GameObject_o *gameObject,
               Map_MapTargetable_o *mapTargetable,MethodInfo *method)

{
  if (g_data_057ac7b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ac7b2 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._GameObject_k__BackingField = gameObject;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._GameObject_k__BackingField,gameObject);
  (__this->fields)._Value_k__BackingField = mapTargetable;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,mapTargetable);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3300

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Team
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  undefined1 uVar3;
  Map_MapTargetable_o *pMVar4;
  Map_MapTargetable_c *__this_01;
  UnityEngine_Vector3_o UVar5;
  
  pMVar4 = (__this->fields)._Value_k__BackingField;
  if (pMVar4 != (Map_MapTargetable_o *)0x0) {
    return (pMVar4->fields)._Team_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = (__this->fields)._Value_k__BackingField;
  if (pMVar4 != (Map_MapTargetable_o *)0x0) {
    (pMVar4->fields)._Team_k__BackingField = (System_String_o *)method;
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(&(pMVar4->fields)._Team_k__BackingField);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar3 = SUB81(method,0);
  if (g_data_057ac7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7b3 = '\x01';
  }
  __this_01 = pMVar4[1].klass;
  if (__this_01 != (Map_MapTargetable_c *)0x0) {
    UVar5 = Map_MapTargetable__GetPosition((Map_MapTargetable_o *)__this_01,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = UVar5.fields._0_8_;
    *(float *)&__this_00[1].monitor = UVar5.fields.z;
    return (System_String_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = *(long *)&(__this_01->_1).this_arg.bits;
  if (lVar1 != 0) {
    return (System_String_o *)CONCAT71((int7)((ulong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x30));
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  lVar1 = *(long *)&(__this_01->_1).this_arg.bits;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x30) = uVar3;
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapTargetable");
    g_data_057ac7b4 = '\x01';
  }
  return "MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40f3320

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  long lVar1;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  undefined1 uVar2;
  Map_MapTargetable_o *pMVar3;
  Map_MapTargetable_c *__this_01;
  UnityEngine_Vector3_o UVar4;
  
  pMVar3 = (__this->fields)._Value_k__BackingField;
  if (pMVar3 != (Map_MapTargetable_o *)0x0) {
    (pMVar3->fields)._Team_k__BackingField = value;
    il2cpp_runtime_helper_022b4080(&(pMVar3->fields)._Team_k__BackingField);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar2 = SUB81(value,0);
  if (g_data_057ac7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7b3 = '\x01';
  }
  __this_01 = pMVar3[1].klass;
  if (__this_01 != (Map_MapTargetable_c *)0x0) {
    UVar4 = Map_MapTargetable__GetPosition((Map_MapTargetable_o *)__this_01,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = UVar4.fields._0_8_;
    *(float *)&__this_00[1].monitor = UVar4.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)&(__this_01->_1).this_arg.bits != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = *(long *)&(__this_01->_1).this_arg.bits;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x30) = uVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapTargetable");
    g_data_057ac7b4 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Position (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3340

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_c *pMVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  undefined1 uVar3;
  Map_MapTargetable_o *__this_00;
  UnityEngine_Vector3_o UVar4;
  
  uVar3 = SUB81(method,0);
  if (g_data_057ac7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7b3 = '\x01';
  }
  __this_00 = (__this->fields)._Value_k__BackingField;
  if (__this_00 != (Map_MapTargetable_o *)0x0) {
    UVar4 = Map_MapTargetable__GetPosition(__this_00,(MethodInfo *)0x0);
    pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    (pCVar2->fields).Value.fields.x = (float)(int)UVar4.fields._0_8_;
    (pCVar2->fields).Value.fields.y = (float)(int)((ulong)UVar4.fields._0_8_ >> 0x20);
    (pCVar2->fields).Value.fields.z = UVar4.fields.z;
    return pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar1 = __this_00[1].klass;
  if (pMVar1 != (Map_MapTargetable_c *)0x0) {
    return (CustomLogic_CustomLogicVector3Builtin_o *)
           CONCAT71((int7)((ulong)pMVar1 >> 8),*(undefined1 *)&(pMVar1->_1).this_arg.data);
  }
  pCVar2 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_022b2c90();
  if (__this_00[1].klass != (Map_MapTargetable_c *)0x0) {
    *(undefined1 *)&((__this_00[1].klass)->_1).this_arg.data = uVar3;
    return pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapTargetable");
    g_data_057ac7b4 = '\x01';
  }
  return "MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3400

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  undefined1 uVar3;
  
  uVar3 = SUB81(method,0);
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pMVar1 >> 8),(char)(pMVar1->fields)._Enabled_k__BackingField)
    ;
  }
  bVar2 = il2cpp_runtime_helper_022b2c90();
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    *(undefined1 *)&(pMVar1->fields)._Enabled_k__BackingField = uVar3;
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapTargetable");
    g_data_057ac7b4 = '\x01';
  }
  return (bool_conflict)"MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40f3420

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)value;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapTargetable");
    g_data_057ac7b4 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3440

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapTargetable");
    g_data_057ac7b4 = '\x01';
  }
  return "MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3470

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3480

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x40f3490

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


