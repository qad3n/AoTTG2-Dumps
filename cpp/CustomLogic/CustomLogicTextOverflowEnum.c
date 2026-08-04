// Type: CustomLogic.CustomLogicTextOverflowEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextOverflowEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextOverflowEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextOverflowEnum_o* CustomLogic_CustomLogicTextOverflowEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x419ddf0

CustomLogic_CustomLogicTextOverflowEnum_o *
CustomLogic_CustomLogicTextOverflowEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicTextOverflowEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad37d == '\0') {
    pSStack_20 = (System_String_o *)0x419de0c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTextOverflowEnum);
    g_data_057ad37d = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x419de87;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x419de36;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTextOverflowEnum);
    if (g_data_057ad37b == '\0') {
      pSStack_20 = (System_String_o *)0x419de4e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad37b = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419de6d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x419de77;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTextOverflowEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419de8f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x419dea2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419deb1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTextOverflowEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x419dec0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x419ded0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419dedf;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x419dee7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x419def7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419df03;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTextOverflowEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419df0e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad37e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Ellipsis");
    il2cpp_runtime_helper_023445d0(&"Clip");
    g_data_057ad37e = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Clip",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Ellipsis",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad380 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ellipsis_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextOverflowEnum_object);
        g_data_057ad380 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextOverflowEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicTextOverflowEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTextOverflowEnum not found");
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
  if (g_data_057ad37f == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Clip_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e075;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e081;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e08d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextOverflowEnum_object);
    g_data_057ad37f = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e0a3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextOverflowEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e0bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e0cb;
  pCVar8 = (CustomLogic_CustomLogicTextOverflowEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419e0e5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextOverflowEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x419df10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextOverflowEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad37e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Ellipsis");
    il2cpp_runtime_helper_023445d0(&"Clip");
    g_data_057ad37e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Clip",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Ellipsis",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad380 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ellipsis_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextOverflowEnum_object);
        g_data_057ad380 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextOverflowEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTextOverflowEnum not found");
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
  if (g_data_057ad37f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e069;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Clip_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e075;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e081;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e08d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextOverflowEnum_object);
    g_data_057ad37f = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e0a3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextOverflowEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e0bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e0cb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419e0e5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$__CreatePropertyBinding__Clip
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o* CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Clip (const MethodInfo* method);
// 0x419e050

CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *
CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Clip(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *__this;
  
  if (g_data_057ad37f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Clip_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextOverflowEnum_object);
    g_data_057ad37f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextOverflowEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
  return __this;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$__CreatePropertyBinding__Ellipsis
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o* CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Ellipsis (const MethodInfo* method);
// 0x419e0f0

CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *
CustomLogic_CustomLogicTextOverflowEnum_Bindings____CreatePropertyBinding__Ellipsis(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *__this;
  
  if (g_data_057ad380 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Ellipsis_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextOverflowEnum_object);
    g_data_057ad380 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextOverflowEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextOverflowEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextOverflowEnum);
  return __this;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextOverflowEnum_Bindings___cctor (const MethodInfo* method);
// 0x419e190

void CustomLogic_CustomLogicTextOverflowEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad381 == '\0') {
    uStack_20 = 0x419e1a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x419e1b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x419e1c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419e1cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x419e1d9;
    il2cpp_runtime_helper_023445d0(&"Ellipsis");
    uStack_20 = 0x419e1e5;
    il2cpp_runtime_helper_023445d0(&"Clip");
    g_data_057ad381 = '\x01';
  }
  uStack_20 = 0x419e1fb;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x419e210;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x419e231;
    System_Collections_Generic_HashSet_object___Add(__this,"Clip",MethodInfo_Boolean_Add);
    uStack_20 = 0x419e246;
    System_Collections_Generic_HashSet_object___Add(__this,"Ellipsis",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x419e278;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$<__CreatePropertyBinding__Clip>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Clip_g____getter_2_0 (CustomLogic_CustomLogicTextOverflowEnum_o* __i, const MethodInfo* method);
// 0x419e280

Il2CppObject *
CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Clip_g____getter_2_0
          (CustomLogic_CustomLogicTextOverflowEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextOverflowEnum.Bindings$$<__CreatePropertyBinding__Ellipsis>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Ellipsis_g____getter_3_0 (CustomLogic_CustomLogicTextOverflowEnum_o* __i, const MethodInfo* method);
// 0x419e2a0

Il2CppObject *
CustomLogic_CustomLogicTextOverflowEnum_Bindings_____CreatePropertyBinding__Ellipsis_g____getter_3_0
          (CustomLogic_CustomLogicTextOverflowEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextOverflowEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextOverflowEnum___ctor (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x419dd00

void CustomLogic_CustomLogicTextOverflowEnum___ctor
               (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad37b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad37b = '\x01';
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


// CustomLogic.CustomLogicTextOverflowEnum$$get_Clip
// il2cpp: int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Clip (const MethodInfo* method);
// 0x419dd70

int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Clip(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_Ellipsis
// il2cpp: int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Ellipsis (const MethodInfo* method);
// 0x419dd80

int32_t CustomLogic_CustomLogicTextOverflowEnum__get_Ellipsis(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextOverflowEnum__get_ClassName (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x419dd90

System_String_o *
CustomLogic_CustomLogicTextOverflowEnum__get_ClassName
          (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad37c == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextOverflowEnum");
    g_data_057ad37c = '\x01';
  }
  return "TextOverflowEnum";
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextOverflowEnum__get_IsAbstract (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x419ddc0

bool_conflict
CustomLogic_CustomLogicTextOverflowEnum__get_IsAbstract
          (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextOverflowEnum__get_IsStatic (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x419ddd0

bool_conflict
CustomLogic_CustomLogicTextOverflowEnum__get_IsStatic
          (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextOverflowEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextOverflowEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTextOverflowEnum_o* __this, const MethodInfo* method);
// 0x419dde0

bool_conflict
CustomLogic_CustomLogicTextOverflowEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTextOverflowEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


