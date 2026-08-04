// Type: CustomLogic.CustomLogicFontScaleModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFontScaleModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFontScaleModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFontScaleModeEnum_o* CustomLogic_CustomLogicFontScaleModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4154dd0

CustomLogic_CustomLogicFontScaleModeEnum_o *
CustomLogic_CustomLogicFontScaleModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicFontScaleModeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057accb9 == '\0') {
    pSStack_20 = (System_String_o *)0x4154dec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicFontScaleModeEnum);
    g_data_057accb9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4154e67;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4154e16;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicFontScaleModeEnum);
    if (g_data_057accb7 == '\0') {
      pSStack_20 = (System_String_o *)0x4154e2e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057accb7 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4154e4d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4154e57;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicFontScaleModeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4154e6f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4154e82;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4154e91;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicFontScaleModeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4154ea0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4154eb0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4154ebf;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4154ec7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4154ed7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4154ee3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicFontScaleModeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4154eee;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057accba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Width");
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057accba = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Height",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Width",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057accbc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Width_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
        g_data_057accbc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicFontScaleModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicFontScaleModeEnum not found");
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
  if (g_data_057accbb == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155049;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155055;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155061;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x415506d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
    g_data_057accbb = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4155083;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x415509c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41550ab;
  pCVar8 = (CustomLogic_CustomLogicFontScaleModeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41550c5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFontScaleModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4154ef0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057accba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Width");
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057accba = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057accbc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Width_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
        g_data_057accbc = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicFontScaleModeEnum not found");
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
  if (g_data_057accbb == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155049;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155055;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155061;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415506d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
    g_data_057accbb = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4155083;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x415509c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41550ab;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41550c5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o* CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x4155030

CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *__this;
  
  if (g_data_057accbb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
    g_data_057accbb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$__CreatePropertyBinding__Width
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o* CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Width (const MethodInfo* method);
// 0x41550d0

CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings____CreatePropertyBinding__Width(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *__this;
  
  if (g_data_057accbc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Width_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
    g_data_057accbc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicFontScaleModeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicFontScaleModeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicFontScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicFontScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFontScaleModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x4155170

void CustomLogic_CustomLogicFontScaleModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057accbd == '\0') {
    uStack_20 = 0x4155189;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x4155195;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41551a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41551ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41551b9;
    il2cpp_runtime_helper_023445d0(&"Width");
    uStack_20 = 0x41551c5;
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057accbd = '\x01';
  }
  uStack_20 = 0x41551db;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x41551f0;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x4155211;
    System_Collections_Generic_HashSet_object___Add(__this,"Height",MethodInfo_Boolean_Add);
    uStack_20 = 0x4155226;
    System_Collections_Generic_HashSet_object___Add(__this,"Width",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x4155258;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontScaleModeEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0 (CustomLogic_CustomLogicFontScaleModeEnum_o* __i, const MethodInfo* method);
// 0x4155260

Il2CppObject *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontScaleModeEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0 (CustomLogic_CustomLogicFontScaleModeEnum_o* __i, const MethodInfo* method);
// 0x4155280

Il2CppObject *
CustomLogic_CustomLogicFontScaleModeEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontScaleModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFontScaleModeEnum___ctor (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4154ce0

void CustomLogic_CustomLogicFontScaleModeEnum___ctor
               (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057accb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057accb7 = '\x01';
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


// CustomLogic.CustomLogicFontScaleModeEnum$$get_Height
// il2cpp: int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Height (const MethodInfo* method);
// 0x4154d50

int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Height(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_Width
// il2cpp: int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Width (const MethodInfo* method);
// 0x4154d60

int32_t CustomLogic_CustomLogicFontScaleModeEnum__get_Width(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFontScaleModeEnum__get_ClassName (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4154d70

System_String_o *
CustomLogic_CustomLogicFontScaleModeEnum__get_ClassName
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057accb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FontScaleModeEnum");
    g_data_057accb8 = '\x01';
  }
  return "FontScaleModeEnum";
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFontScaleModeEnum__get_IsAbstract (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4154da0

bool_conflict
CustomLogic_CustomLogicFontScaleModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFontScaleModeEnum__get_IsStatic (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4154db0

bool_conflict
CustomLogic_CustomLogicFontScaleModeEnum__get_IsStatic
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicFontScaleModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFontScaleModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFontScaleModeEnum_o* __this, const MethodInfo* method);
// 0x4154dc0

bool_conflict
CustomLogic_CustomLogicFontScaleModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicFontScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


