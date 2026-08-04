// Type: CustomLogic.CustomLogicLodBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLodBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLodBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLodBuiltin_o* CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40f2bf0

CustomLogic_CustomLogicLodBuiltin_o *
CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_CustomLogicLodBuiltin_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar5;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar6;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  System_ArgumentException_o **ppSVar9;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac7ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLodBuiltin);
    g_data_057ac7ab = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar2 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLodBuiltin);
    (pCVar2->fields)._detailPriority = 1.0;
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar2,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar2;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicLodBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicLodBuiltin_CreateInstance);
  pSVar6 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar5);
  ppSVar9 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac7ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"DetailPriority");
    il2cpp_runtime_helper_023445d0(&"DistanceThreshold");
    g_data_057ac7ac = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"DistanceThreshold",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"DetailPriority",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7ae == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLodBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DetailPriority_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DetailPriority_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLodBuiltin_object);
        g_data_057ac7ae = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLodBuiltin_object);
      System_Func_object__object____ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLodBuiltin_object);
      System_Action_object__object____ctor();
      pCVar2 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
      return pCVar2;
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLodBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar6,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar6,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar6,uVar5);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar6 = pSStack_28;
  }
  else {
    ppSVar9 = (System_ArgumentException_o **)&uStack_18;
    pSVar6 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar9 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar9 + -0x18) = pSVar6;
  if (g_data_057ac7ad == '\0') {
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e4a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLodBuiltin_object);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DistanceThreshold_g____g);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e62;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DistanceThreshold_g____set);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e6e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e7a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e86;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLodBuiltin_object);
    g_data_057ac7ad = '\x01';
  }
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2e9c;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLodBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2eb5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2ec4;
  pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLodBuiltin_object);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2edd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2eec;
  pCVar2 = (CustomLogic_CustomLogicLodBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  *(undefined8 *)((long)ppSVar9 + -0x20) = 0x40f2f07;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar2,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return pCVar2;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40f2cf0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  undefined1 auStack_18 [8];
  
  if (g_data_057ac7ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"DetailPriority");
    il2cpp_runtime_helper_023445d0(&"DistanceThreshold");
    g_data_057ac7ac = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"DistanceThreshold",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"DetailPriority",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7ae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLodBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DetailPriority_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DetailPriority_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLodBuiltin_object);
        g_data_057ac7ae = '\x01';
      }
      pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLodBuiltin_object);
      System_Func_object__object____ctor();
      pSVar4 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLodBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar3,pSVar4,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicLodBuiltin not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar2);
    register0x00000020 = (BADSPACEBASE *)auStack_18;
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac7ad == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e4a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLodBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DistanceThreshold_g____g);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e62;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DistanceThreshold_g____set);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e6e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e7a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e86;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLodBuiltin_object);
    g_data_057ac7ad = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2e9c;
  pSVar3 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLodBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2eb5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2ec4;
  pSVar4 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLodBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2edd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2eec;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f2f07;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar3,pSVar4,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DistanceThreshold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold (const MethodInfo* method);
// 0x40f2e30

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this;
  
  if (g_data_057ac7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLodBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DistanceThreshold_g____g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DistanceThreshold_g____set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLodBuiltin_object);
    g_data_057ac7ad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLodBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLodBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DetailPriority
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority (const MethodInfo* method);
// 0x40f2f10

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this;
  
  if (g_data_057ac7ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicLodBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__DetailPriority_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__DetailPriority_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicLodBuiltin_object);
    g_data_057ac7ae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicLodBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicLodBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLodBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40f2ff0

void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  UnityEngine_LOD_array *pUVar2;
  MethodInfo_33E0570 *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  CustomLogic_CustomLogicLodBuiltin_o *__this_01;
  float fVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ac7af == '\0') {
    uStack_20 = 0x40f3009;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40f3015;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40f3021;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40f302d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40f3039;
    il2cpp_runtime_helper_023445d0(&"DetailPriority");
    uStack_20 = 0x40f3045;
    il2cpp_runtime_helper_023445d0(&"DistanceThreshold");
    g_data_057ac7af = '\x01';
  }
  uStack_20 = 0x40f305b;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40f3070;
  __this_00 = MethodInfo_HashSet_1_System_String;
  pSVar3 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40f3091;
    System_Collections_Generic_HashSet_object___Add(__this,"DistanceThreshold",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f30a6;
    System_Collections_Generic_HashSet_object___Add(__this,"DetailPriority",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x40f30d8;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  __this_01 = (CustomLogic_CustomLogicLodBuiltin_o *)0x0;
  if ((pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (__this_01 = *(CustomLogic_CustomLogicLodBuiltin_o **)&(pSVar3->fields)._version,
     __this_01 != (CustomLogic_CustomLogicLodBuiltin_o *)0x0)) {
    __this_00 = (MethodInfo_33E0570 *)0x0;
    pUVar2 = UnityEngine_LODGroup__GetLODs((UnityEngine_LODGroup_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar2->max_length != 0) {
        uStack_20 = CONCAT44(pUVar2->m_Items[0].fields.screenRelativeTransitionHeight,(undefined4)uStack_20);
        il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
        return;
      }
      goto label_040f3124;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040f3124:
  uStack_38 = il2cpp_runtime_helper_022b2ca0();
  pSStack_30 = __this;
  if (g_data_057ac7b0 == '\0') {
    uStack_40 = 0x40f314f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40f315b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40f317a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40f318c;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)__this_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__this_01 != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold(__this_01,fVar4,method_00);
    return;
  }
  uStack_40 = 0x40f31a5;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo_33E0570 *)0x0) {
    uVar1._0_2_ = __this_00->slot;
    uVar1._2_1_ = __this_00->parameters_count;
    uVar1._3_1_ = __this_00->bitflags;
    uStack_40 = CONCAT44(uVar1,(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__this_00 != (MethodInfo_33E0570 *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
              ((CustomLogic_CustomLogicLodBuiltin_o *)__this_00,fVar4,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x40f30e0

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_LOD_array *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CustomLogic_CustomLogicLodBuiltin_o *__this;
  float fVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  __this = (CustomLogic_CustomLogicLodBuiltin_o *)0x0;
  if ((__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) &&
     (__this = (CustomLogic_CustomLogicLodBuiltin_o *)(__i->fields).Value,
     __this != (CustomLogic_CustomLogicLodBuiltin_o *)0x0)) {
    method = (MethodInfo *)0x0;
    pUVar2 = UnityEngine_LODGroup__GetLODs((UnityEngine_LODGroup_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar2->max_length != 0) {
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
        return pIVar3;
      }
      goto label_040f3124;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040f3124:
  uStack_20 = il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7b0 == '\0') {
    uStack_28 = 0x40f314f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40f315b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f317a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f318c;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__this != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold(__this,fVar4,method_00);
    return extraout_RAX;
  }
  uStack_28 = 0x40f31a5;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    uVar1._0_2_ = method->slot;
    uVar1._2_1_ = method->parameters_count;
    uVar1._3_1_ = method->bitflags;
    uStack_28 = CONCAT44(uVar1,(undefined4)uStack_28);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Single_ConvertTo_Single;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (method != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
              ((CustomLogic_CustomLogicLodBuiltin_o *)method,fVar4,method_01);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)method_00->parameters;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f3130

void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar1;
  undefined8 uStack_20;
  
  if (g_data_057ac7b0 == '\0') {
    uStack_20 = 0x40f314f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40f315b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f317a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f318c;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold(__i,fVar1,method_00);
    return;
  }
  uStack_20 = 0x40f31a5;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_CustomLogicLodBuiltin_o *)__v != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    uStack_20 = CONCAT44((((CustomLogic_CustomLogicLodBuiltin_o *)__v)->fields)._detailPriority,
                         (undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = MethodInfo_Single_ConvertTo_Single;
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((CustomLogic_CustomLogicLodBuiltin_o *)__v != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
              ((CustomLogic_CustomLogicLodBuiltin_o *)__v,fVar1,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x40f31b0

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  float value;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DetailPriority(__i,value,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)method->parameters;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f31e0

void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (g_data_057ac7b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Single_ConvertTo_Single;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    CustomLogic_CustomLogicLodBuiltin__set_DetailPriority(__i,value,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f26d0

void CustomLogic_CustomLogicLodBuiltin___ctor(CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  (__this->fields)._detailPriority = 1.0;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x40f26e0

void CustomLogic_CustomLogicLodBuiltin___ctor_3ff26e0
               (CustomLogic_CustomLogicLodBuiltin_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *pCVar3;
  UnityEngine_LODGroup_o *pUVar4;
  float fVar5;
  undefined4 uVar6;
  Il2CppClass *pIVar7;
  bool_conflict bVar8;
  UnityEngine_Component_o *component;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *pUVar9;
  undefined8 uVar10;
  UnityEngine_LOD_array *pUVar11;
  CustomLogic_CustomLogicLodBuiltin_o *unaff_RBX;
  undefined1 *puVar12;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar13;
  UnityEngine_Renderer_array *pUVar14;
  UnityEngine_LODGroup_o *__this_01;
  CustomLogic_CustomLogicMapObjectBuiltin_o *unaff_R14;
  undefined8 unaff_R15;
  undefined4 uVar15;
  float in_XMM1_Da;
  UnityEngine_LOD_o __this_02;
  undefined1 auStack_18 [8];
  
  puVar12 = auStack_18;
  pCVar13 = owner;
  if (g_data_057ac7a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LODGroup_GetOrAddComponent_LODGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LODGroup);
    g_data_057ac7a7 = '\x01';
  }
  (__this->fields)._detailPriority = 1.0;
  if ((owner == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
     (pMVar2 = (owner->fields).Value, pMVar2 == (Map_MapObject_o *)0x0)) {
label_040f27f8:
    il2cpp_runtime_helper_022b2c90();
label_040f27fd:
    uVar15 = il2cpp_runtime_helper_022b2fd0();
    unaff_RBX = __this;
  }
  else {
    component = (UnityEngine_Component_o *)
                CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                          ((pMVar2->fields).GameObject,MethodInfo_LODGroup_GetOrAddComponent_LODGroup);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,component,(MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    pCVar13 = owner;
    il2cpp_runtime_helper_022b4080(&(__this->fields).OwnerMapObject);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 == (Map_MapObject_o *)0x0) goto label_040f27f8;
    (__this->fields).Owner = (pMVar2->fields).GameObject;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Owner);
    pIVar7 = TypeInfo_LODGroup;
    pCVar13 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)(__this->fields).Component;
    if (pCVar13 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      bVar1 = (TypeInfo_LODGroup->_2).naturalAligment;
      if ((bVar1 <= (pCVar13->klass->_2).naturalAligment) &&
         ((pCVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_LODGroup)) {
        (__this->fields).Value = (UnityEngine_LODGroup_o *)pCVar13;
        if ((bVar1 <= (pCVar13->klass->_2).naturalAligment) &&
           ((pCVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar7)) goto label_040f27df;
      }
      goto label_040f27fd;
    }
    (__this->fields).Value = (UnityEngine_LODGroup_o *)0x0;
label_040f27df:
    il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
    uVar15 = 0x3f800000;
    puVar12 = (undefined1 *)register0x00000020;
    pCVar13 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)__this;
    owner = unaff_R14;
  }
  *(undefined8 *)(puVar12 + -8) = unaff_R15;
  *(CustomLogic_CustomLogicMapObjectBuiltin_o **)(puVar12 + -0x10) = owner;
  *(CustomLogic_CustomLogicLodBuiltin_o **)(puVar12 + -0x18) = unaff_RBX;
  *(undefined4 *)(puVar12 + -0x2c) = uVar15;
  if (g_data_057ac7a9 == '\0') {
    *(undefined8 *)(puVar12 + -0x40) = 0x40f2837;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    *(undefined8 *)(puVar12 + -0x40) = 0x40f2843;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LOD);
    *(undefined8 *)(puVar12 + -0x40) = 0x40f284f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac7a9 = '\x01';
  }
  pUVar9 = (UnityEngine_LOD_array *)(pCVar13->fields)._rigidBody;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar12 + -0x40) = 0x40f2872;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40f287e;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  __this_00 = *(UnityEngine_GameObject_o **)&(pCVar13->fields)._internalRotation.fields.z;
  pUVar14 = (UnityEngine_Renderer_array *)0x0;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_040f294c:
    *(undefined8 *)(puVar12 + -0x40) = 0x40f2951;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    *(undefined8 *)(puVar12 + -0x40) = 0x40f28a2;
    renderers = (UnityEngine_Renderer_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(__this_00,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    *(undefined8 *)(puVar12 + -0x40) = 0x40f28b9;
    pUVar9 = (UnityEngine_LOD_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_LOD,1);
    *(undefined8 *)(puVar12 + -0x28) = 0;
    *(undefined8 *)(puVar12 + -0x20) = 0;
    pUVar14 = (UnityEngine_Renderer_array *)(puVar12 + -0x28);
    *(undefined8 *)(puVar12 + -0x40) = 0x40f28d9;
    __this_02.fields.fadeTransitionWidth = 0.0;
    __this_02.fields.screenRelativeTransitionHeight = (float)*(uint *)(puVar12 + -0x2c);
    __this_02.fields.renderers = pUVar14;
    UnityEngine_LOD___ctor(__this_02,in_XMM1_Da,renderers,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_LOD_array *)0x0) goto label_040f294c;
    if ((int)pUVar9->max_length != 0) {
      fVar5 = *(float *)(puVar12 + -0x24);
      uVar15 = *(undefined4 *)(puVar12 + -0x20);
      uVar6 = *(undefined4 *)(puVar12 + -0x1c);
      pUVar9->m_Items[0].fields.screenRelativeTransitionHeight = *(float *)(puVar12 + -0x28);
      pUVar9->m_Items[0].fields.fadeTransitionWidth = fVar5;
      *(undefined4 *)&pUVar9->m_Items[0].fields.renderers = uVar15;
      *(undefined4 *)((long)&pUVar9->m_Items[0].fields.renderers + 4) = uVar6;
      *(undefined8 *)(puVar12 + -0x40) = 0x40f28fb;
      il2cpp_runtime_helper_022b4080(&pUVar9->m_Items[0].fields.renderers);
      pCVar3 = (pCVar13->fields)._rigidBody;
      pUVar14 = (UnityEngine_Renderer_array *)0x0;
      if (pCVar3 != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
        *(undefined8 *)(puVar12 + -0x40) = 0x40f290e;
        UnityEngine_LODGroup__SetLODs((UnityEngine_LODGroup_o *)pCVar3,pUVar9,(MethodInfo *)0x0);
        pCVar3 = (pCVar13->fields)._rigidBody;
        pUVar14 = (UnityEngine_Renderer_array *)0x0;
        if (pCVar3 != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
          *(undefined8 *)(puVar12 + -0x40) = 0x40f2920;
          UnityEngine_LODGroup__set_fadeMode((UnityEngine_LODGroup_o *)pCVar3,0,(MethodInfo *)0x0);
          pCVar3 = (pCVar13->fields)._rigidBody;
          pUVar14 = (UnityEngine_Renderer_array *)0x0;
          if (pCVar3 != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
            *(undefined8 *)(puVar12 + -0x40) = 0x40f2932;
            UnityEngine_LODGroup__set_animateCrossFading((UnityEngine_LODGroup_o *)pCVar3,0,(MethodInfo *)0x0)
            ;
            pCVar3 = (pCVar13->fields)._rigidBody;
            pUVar14 = (UnityEngine_Renderer_array *)0x0;
            if (pCVar3 != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
              *(undefined8 *)(puVar12 + -0x40) = 0x40f2942;
              UnityEngine_LODGroup__RecalculateBounds((UnityEngine_LODGroup_o *)pCVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_040f294c;
    }
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40f2956;
  uVar10 = il2cpp_runtime_helper_022b2ca0();
  *(undefined8 *)(puVar12 + -0x40) = uVar10;
  __this_01 = (UnityEngine_LODGroup_o *)pUVar14->m_Items[3];
  if (__this_01 == (UnityEngine_LODGroup_o *)0x0) {
label_040f2983:
    *(undefined8 *)(puVar12 + -0x48) = 0x40f2988;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    *(undefined8 *)(puVar12 + -0x48) = 0x40f2971;
    pUVar11 = UnityEngine_LODGroup__GetLODs(__this_01,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_LOD_array *)0x0) goto label_040f2983;
    if ((int)pUVar11->max_length != 0) {
      return;
    }
  }
  *(undefined8 *)(puVar12 + -0x48) = 0x40f298d;
  uVar15 = il2cpp_runtime_helper_022b2ca0();
  *(UnityEngine_LOD_array **)(puVar12 + -0x48) = pUVar9;
  *(undefined4 *)(puVar12 + -0x4c) = uVar15;
  pUVar4 = __this_01[2].monitor;
  if (pUVar4 != (UnityEngine_LODGroup_o *)0x0) {
    *(undefined8 *)(puVar12 + -0x60) = 0x40f29ae;
    pUVar9 = UnityEngine_LODGroup__GetLODs(pUVar4,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_LOD_array *)0x0) {
      if (pUVar9->max_length == 0) {
        return;
      }
      if ((int)pUVar9->max_length == 0) goto label_040f29fe;
      pUVar9->m_Items[0].fields.screenRelativeTransitionHeight = *(float *)(puVar12 + -0x4c);
      pUVar4 = __this_01[2].monitor;
      if (pUVar4 != (UnityEngine_LODGroup_o *)0x0) {
        *(undefined8 *)(puVar12 + -0x60) = 0x40f29de;
        UnityEngine_LODGroup__SetLODs(pUVar4,pUVar9,(MethodInfo *)0x0);
        if (__this_01[2].monitor != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__RecalculateBounds(__this_01[2].monitor,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  *(undefined8 *)(puVar12 + -0x60) = 0x40f29fe;
  il2cpp_runtime_helper_022b2c90();
label_040f29fe:
  *(undefined8 *)(puVar12 + -0x60) = 0x40f2a03;
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$get_DistanceThreshold
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f2960

float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LOD_array *pUVar1;
  UnityEngine_LODGroup_o *__this_00;
  UnityEngine_LODGroup_o *__this_01;
  float fVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_LODGroup_o *)0x0) {
label_040f2983:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this_00,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_LOD_array *)0x0) goto label_040f2983;
    if ((int)pUVar1->max_length != 0) {
      return pUVar1->m_Items[0].fields.screenRelativeTransitionHeight;
    }
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2ca0();
  __this_01 = __this_00[2].monitor;
  if (__this_01 != (UnityEngine_LODGroup_o *)0x0) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this_01,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if (pUVar1->max_length == 0) {
        return extraout_XMM0_Da;
      }
      if ((int)pUVar1->max_length == 0) goto label_040f29fe;
      pUVar1->m_Items[0].fields.screenRelativeTransitionHeight = fVar2;
      __this_01 = (UnityEngine_LODGroup_o *)0x0;
      if (__this_00[2].monitor != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(__this_00[2].monitor,pUVar1,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_LODGroup_o *)0x0;
        if (__this_00[2].monitor != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__RecalculateBounds(__this_00[2].monitor,(MethodInfo *)0x0);
          return extraout_XMM0_Da_00;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040f29fe:
  il2cpp_runtime_helper_022b2ca0();
  return *(float *)&__this_01[3].monitor;
}


// CustomLogic.CustomLogicLodBuiltin$$set_DistanceThreshold
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f2990

void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LODGroup_o *pUVar1;
  UnityEngine_LOD_array *lods;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
    lods = UnityEngine_LODGroup__GetLODs(pUVar1,(MethodInfo *)0x0);
    if (lods != (UnityEngine_LOD_array *)0x0) {
      if (lods->max_length == 0) {
        return;
      }
      if ((int)lods->max_length == 0) goto label_040f29fe;
      lods->m_Items[0].fields.screenRelativeTransitionHeight = value;
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040f29fe:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$get_DetailPriority
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f2a10

float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._detailPriority;
}


// CustomLogic.CustomLogicLodBuiltin$$set_DetailPriority
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f2a20

void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  uint uVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  float fVar6;
  
  if (g_data_057ac7a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ac7a8 = '\x01';
  }
  fVar6 = 1.0;
  if (value <= 1.0) {
    fVar6 = value;
  }
  fVar6 = (float)(-(uint)(0.0 <= value) & (uint)fVar6);
  (__this->fields)._detailPriority = fVar6;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)) &&
     (__this_00 = (__this->fields).Owner, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    iVar1 = *(int *)(lVar2 + 0x14);
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(__this_00,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if ((float)iVar1 <= fVar6) {
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar4->max_length;
        if ((int)uVar3 < 1) {
          return;
        }
        uVar5 = 0;
        while (uVar5 < uVar3) {
          if ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0)
          goto label_040f2b80;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5],1,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar3 = (uint)pSVar4->max_length;
          if ((int)uVar3 <= (int)uVar5) {
            return;
          }
        }
        goto label_040f2b85;
      }
    }
    else if (pSVar4 != (System_Object_array *)0x0) {
      uVar3 = (uint)pSVar4->max_length;
      if (0 < (int)uVar3) {
        uVar5 = 0;
        do {
          if (uVar3 <= uVar5) goto label_040f2b85;
          if ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5] == (UnityEngine_Renderer_o *)0x0)
          goto label_040f2b80;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar5],0,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar3 = (uint)pSVar4->max_length;
        } while ((int)uVar5 < (int)uVar3);
      }
      return;
    }
  }
label_040f2b80:
  il2cpp_runtime_helper_022b2c90();
label_040f2b85:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7aa == '\0') {
    il2cpp_runtime_helper_023445d0(&"LodBuiltin");
    g_data_057ac7aa = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$SetupSingleLod
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod (CustomLogic_CustomLogicLodBuiltin_o* __this, float threshold, const MethodInfo* method);
// 0x40f2810

void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float threshold,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *pUVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_LODGroup_o *pUVar4;
  float fVar5;
  float in_XMM1_Da;
  UnityEngine_LOD_o __this_01;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  
  if (g_data_057ac7a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LOD);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac7a9 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Value;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (__this->fields).Owner;
  pUVar3 = (UnityEngine_Renderer_array *)0x0;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_040f294c:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    renderers = (UnityEngine_Renderer_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(__this_00,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUVar2 = (UnityEngine_LOD_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_LOD,1);
    auStack_28 = (undefined1  [8])0x0;
    uStack_20 = (void *)0x0;
    pUVar3 = (UnityEngine_Renderer_array *)auStack_28;
    __this_01.fields.fadeTransitionWidth = 0.0;
    __this_01.fields.screenRelativeTransitionHeight = threshold;
    __this_01.fields.renderers = pUVar3;
    UnityEngine_LOD___ctor(__this_01,in_XMM1_Da,renderers,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_LOD_array *)0x0) goto label_040f294c;
    if ((int)pUVar2->max_length != 0) {
      pUVar2->m_Items[0].fields.screenRelativeTransitionHeight = (float)auStack_28._0_4_;
      pUVar2->m_Items[0].fields.fadeTransitionWidth = (float)auStack_28._4_4_;
      *(undefined4 *)&pUVar2->m_Items[0].fields.renderers = (undefined4)uStack_20;
      *(undefined4 *)((long)&pUVar2->m_Items[0].fields.renderers + 4) = uStack_20._4_4_;
      il2cpp_runtime_helper_022b4080(&pUVar2->m_Items[0].fields.renderers);
      pUVar4 = (__this->fields).Value;
      pUVar3 = (UnityEngine_Renderer_array *)0x0;
      if (pUVar4 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar4,pUVar2,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Value;
        pUVar3 = (UnityEngine_Renderer_array *)0x0;
        if (pUVar4 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__set_fadeMode(pUVar4,0,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).Value;
          pUVar3 = (UnityEngine_Renderer_array *)0x0;
          if (pUVar4 != (UnityEngine_LODGroup_o *)0x0) {
            UnityEngine_LODGroup__set_animateCrossFading(pUVar4,0,(MethodInfo *)0x0);
            pUVar4 = (__this->fields).Value;
            pUVar3 = (UnityEngine_Renderer_array *)0x0;
            if (pUVar4 != (UnityEngine_LODGroup_o *)0x0) {
              UnityEngine_LODGroup__RecalculateBounds(pUVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_040f294c;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar4 = (UnityEngine_LODGroup_o *)pUVar3->m_Items[3];
  if ((pUVar4 == (UnityEngine_LODGroup_o *)0x0) ||
     (pUVar2 = UnityEngine_LODGroup__GetLODs(pUVar4,(MethodInfo *)0x0), pUVar2 == (UnityEngine_LOD_array *)0x0
     )) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pUVar2->max_length != 0) {
    return;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2ca0();
  if ((pUVar4[2].monitor != (UnityEngine_LODGroup_o *)0x0) &&
     (pUVar2 = UnityEngine_LODGroup__GetLODs(pUVar4[2].monitor,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_LOD_array *)0x0)) {
    if (pUVar2->max_length == 0) {
      return;
    }
    if ((int)pUVar2->max_length == 0) goto label_040f29fe;
    pUVar2->m_Items[0].fields.screenRelativeTransitionHeight = fVar5;
    if (pUVar4[2].monitor != (UnityEngine_LODGroup_o *)0x0) {
      UnityEngine_LODGroup__SetLODs(pUVar4[2].monitor,pUVar2,(MethodInfo *)0x0);
      if (pUVar4[2].monitor != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__RecalculateBounds(pUVar4[2].monitor,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040f29fe:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLodBuiltin__get_ClassName (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f2b90

System_String_o *
CustomLogic_CustomLogicLodBuiltin__get_ClassName
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac7aa == '\0') {
    il2cpp_runtime_helper_023445d0(&"LodBuiltin");
    g_data_057ac7aa = '\x01';
  }
  return "LodBuiltin";
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsAbstract (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f2bc0

bool_conflict
CustomLogic_CustomLogicLodBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsStatic (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f2bd0

bool_conflict
CustomLogic_CustomLogicLodBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLodBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x40f2be0

bool_conflict
CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


