// Type: CustomLogic.CustomLogicUILabelEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUILabelEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUILabelEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicUILabelEnum_o* CustomLogic_CustomLogicUILabelEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ae560

CustomLogic_CustomLogicUILabelEnum_o *
CustomLogic_CustomLogicUILabelEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CustomLogicUILabelEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad4e9 == '\0') {
    pSStack_20 = (System_String_o *)0x41ae57c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUILabelEnum);
    g_data_057ad4e9 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41ae5f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41ae5a6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicUILabelEnum);
    if (g_data_057ad4de == '\0') {
      pSStack_20 = (System_String_o *)0x41ae5be;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad4de = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41ae5dd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41ae5e7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicUILabelEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41ae5ff;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41ae612;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ae621;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicUILabelEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41ae630;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41ae640;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ae64f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41ae657;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41ae667;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ae673;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicUILabelEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41ae67e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ad4ea = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x516feaaa) {
    if (uVar1 < 0xb6af656) {
      if (uVar1 == 0x6348be7) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BottomLeft",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad4f2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomLeft_g____getter_9);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
            g_data_057ad4f2 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          return pCVar9;
        }
      }
      else if ((uVar1 == 0xb6af655) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TopCenter",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar7 = pSStack_28;
          pSVar3 = pSStack_20;
        }
        else {
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar7 = pSStack_28;
          pSVar3 = pSStack_20;
        }
        goto CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter;
      }
    }
    else if (uVar1 == 0x30130eca) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4f0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleRight_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
          g_data_057ad4f0 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x516feaa9) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"MiddleLeft",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4ef == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleLeft_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ef = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0x984f3d99) {
    if (uVar1 == 0x984f3d98) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BottomRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4f3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomRight_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
          g_data_057ad4f3 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x7dfdc8a6) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TopRight",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4ed == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopRight_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ed = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xa87d916d) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4ec == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopLeft_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ec = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xb23900c1) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"MiddleCenter",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4ee == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleCenter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ee = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xbd631cff) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BottomCenter",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057ad4f1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomCenter_g____getter);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
      g_data_057ad4f1 = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicUILabelEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad4eb == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeae9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopCenter_g____getter_2);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeaf5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeb01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeb0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4eb = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeb23;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeb3c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeb4b;
  pCVar9 = (CustomLogic_CustomLogicUILabelEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41aeb65;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicUILabelEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41ae680

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicUILabelEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ad4ea = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x516feaaa) {
    if (uVar1 < 0xb6af656) {
      if (uVar1 == 0x6348be7) {
        bVar2 = System_String__op_Equality(name,"BottomLeft",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad4f2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomLeft_g____getter_9);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
            g_data_057ad4f2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0xb6af655) &&
              (bVar2 = System_String__op_Equality(name,"TopCenter",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puVar3 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar3 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter;
      }
    }
    else if (uVar1 == 0x30130eca) {
      bVar2 = System_String__op_Equality(name,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4f0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleRight_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
          g_data_057ad4f0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x516feaa9) &&
            (bVar2 = System_String__op_Equality(name,"MiddleLeft",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4ef == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleLeft_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ef = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x984f3d99) {
    if (uVar1 == 0x984f3d98) {
      bVar2 = System_String__op_Equality(name,"BottomRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4f3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomRight_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
          g_data_057ad4f3 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x7dfdc8a6) &&
            (bVar2 = System_String__op_Equality(name,"TopRight",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4ed == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopRight_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ed = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xa87d916d) {
    bVar2 = System_String__op_Equality(name,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4ec == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopLeft_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ec = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xb23900c1) {
    bVar2 = System_String__op_Equality(name,"MiddleCenter",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4ee == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleCenter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
        g_data_057ad4ee = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xbd631cff) &&
          (bVar2 = System_String__op_Equality(name,"BottomCenter",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad4f1 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomCenter_g____getter);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
      g_data_057ad4f1 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicUILabelEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar4);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar3;
  if (g_data_057ad4eb == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeae9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopCenter_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeaf5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeb01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeb0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4eb = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeb23;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeb3c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeb4b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41aeb65;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter (const MethodInfo* method);
// 0x41aead0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopCenter_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopLeft (const MethodInfo* method);
// 0x41aeb70

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopLeft_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__TopRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopRight (const MethodInfo* method);
// 0x41aec10

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__TopRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__TopRight_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleCenter (const MethodInfo* method);
// 0x41aecb0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleCenter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleLeft (const MethodInfo* method);
// 0x41aed50

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleLeft_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__MiddleRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleRight (const MethodInfo* method);
// 0x41aedf0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__MiddleRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleRight_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomCenter (const MethodInfo* method);
// 0x41aee90

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomCenter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomLeft (const MethodInfo* method);
// 0x41aef30

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomLeft_g____getter_9);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$__CreatePropertyBinding__BottomRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o* CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomRight (const MethodInfo* method);
// 0x41aefd0

CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *
CustomLogic_CustomLogicUILabelEnum_Bindings____CreatePropertyBinding__BottomRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *__this;
  
  if (g_data_057ad4f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BottomRight_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicUILabelEnum_object);
    g_data_057ad4f3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicUILabelEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicUILabelEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicUILabelEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicUILabelEnum);
  return __this;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicUILabelEnum_Bindings___cctor (const MethodInfo* method);
// 0x41af070

void CustomLogic_CustomLogicUILabelEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad4f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ad4f4 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"TopCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TopLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"TopRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MiddleCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MiddleLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"MiddleRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BottomCenter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BottomLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BottomRight",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad4df == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    g_data_057ad4df = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopCenter>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopCenter_g____getter_2_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af250

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopCenter_g____getter_2_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4df == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    g_data_057ad4df = '\x01';
  }
  return "TopCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopLeft>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopLeft_g____getter_3_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af280

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopLeft_g____getter_3_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    g_data_057ad4e0 = '\x01';
  }
  return "TopLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__TopRight>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopRight_g____getter_4_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af2b0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__TopRight_g____getter_4_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    g_data_057ad4e1 = '\x01';
  }
  return "TopRight";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_5_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af2e0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_5_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    g_data_057ad4e2 = '\x01';
  }
  return "MiddleCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_6_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af310

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_6_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    g_data_057ad4e3 = '\x01';
  }
  return "MiddleLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af340

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    g_data_057ad4e4 = '\x01';
  }
  return "MiddleRight";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomCenter>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomCenter_g____getter_8_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af370

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomCenter_g____getter_8_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    g_data_057ad4e5 = '\x01';
  }
  return "BottomCenter";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomLeft>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomLeft_g____getter_9_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af3a0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomLeft_g____getter_9_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    g_data_057ad4e6 = '\x01';
  }
  return "BottomLeft";
}


// CustomLogic.CustomLogicUILabelEnum.Bindings$$<__CreatePropertyBinding__BottomRight>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomRight_g____getter_10_0 (CustomLogic_CustomLogicUILabelEnum_o* __i, const MethodInfo* method);
// 0x41af3d0

Il2CppObject *
CustomLogic_CustomLogicUILabelEnum_Bindings_____CreatePropertyBinding__BottomRight_g____getter_10_0
          (CustomLogic_CustomLogicUILabelEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ad4e7 = '\x01';
  }
  return "BottomRight";
}


// CustomLogic.CustomLogicUILabelEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicUILabelEnum___ctor (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x41ae2e0

void CustomLogic_CustomLogicUILabelEnum___ctor
               (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad4de = '\x01';
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


// CustomLogic.CustomLogicUILabelEnum$$get_TopCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopCenter (const MethodInfo* method);
// 0x41ae350

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopCenter(MethodInfo *method)

{
  if (g_data_057ad4df == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    g_data_057ad4df = '\x01';
  }
  return "TopCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopLeft (const MethodInfo* method);
// 0x41ae380

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopLeft(MethodInfo *method)

{
  if (g_data_057ad4e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    g_data_057ad4e0 = '\x01';
  }
  return "TopLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_TopRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_TopRight (const MethodInfo* method);
// 0x41ae3b0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_TopRight(MethodInfo *method)

{
  if (g_data_057ad4e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    g_data_057ad4e1 = '\x01';
  }
  return "TopRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleCenter (const MethodInfo* method);
// 0x41ae3e0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleCenter(MethodInfo *method)

{
  if (g_data_057ad4e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    g_data_057ad4e2 = '\x01';
  }
  return "MiddleCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleLeft (const MethodInfo* method);
// 0x41ae410

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleLeft(MethodInfo *method)

{
  if (g_data_057ad4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    g_data_057ad4e3 = '\x01';
  }
  return "MiddleLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_MiddleRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_MiddleRight (const MethodInfo* method);
// 0x41ae440

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_MiddleRight(MethodInfo *method)

{
  if (g_data_057ad4e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    g_data_057ad4e4 = '\x01';
  }
  return "MiddleRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomCenter
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomCenter (const MethodInfo* method);
// 0x41ae470

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomCenter(MethodInfo *method)

{
  if (g_data_057ad4e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    g_data_057ad4e5 = '\x01';
  }
  return "BottomCenter";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomLeft (const MethodInfo* method);
// 0x41ae4a0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomLeft(MethodInfo *method)

{
  if (g_data_057ad4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    g_data_057ad4e6 = '\x01';
  }
  return "BottomLeft";
}


// CustomLogic.CustomLogicUILabelEnum$$get_BottomRight
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_BottomRight (const MethodInfo* method);
// 0x41ae4d0

System_String_o * CustomLogic_CustomLogicUILabelEnum__get_BottomRight(MethodInfo *method)

{
  if (g_data_057ad4e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ad4e7 = '\x01';
  }
  return "BottomRight";
}


// CustomLogic.CustomLogicUILabelEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicUILabelEnum__get_ClassName (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x41ae500

System_String_o *
CustomLogic_CustomLogicUILabelEnum__get_ClassName
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad4e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UILabelEnum");
    g_data_057ad4e8 = '\x01';
  }
  return "UILabelEnum";
}


// CustomLogic.CustomLogicUILabelEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_IsAbstract (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x41ae530

bool_conflict
CustomLogic_CustomLogicUILabelEnum__get_IsAbstract
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUILabelEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_IsStatic (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x41ae540

bool_conflict
CustomLogic_CustomLogicUILabelEnum__get_IsStatic
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicUILabelEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicUILabelEnum__get_InheritBaseMembers (CustomLogic_CustomLogicUILabelEnum_o* __this, const MethodInfo* method);
// 0x41ae550

bool_conflict
CustomLogic_CustomLogicUILabelEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicUILabelEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


