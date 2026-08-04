// Type: CustomLogic.CustomLogicTextAlignEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextAlignEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextAlignEnum_o* CustomLogic_CustomLogicTextAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x419cee0

CustomLogic_CustomLogicTextAlignEnum_o *
CustomLogic_CustomLogicTextAlignEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicTextAlignEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad36f == '\0') {
    pSStack_20 = (System_String_o *)0x419cefc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTextAlignEnum);
    g_data_057ad36f = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x419cf77;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x419cf26;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTextAlignEnum);
    if (g_data_057ad36d == '\0') {
      pSStack_20 = (System_String_o *)0x419cf3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad36d = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419cf5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x419cf67;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTextAlignEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419cf7f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x419cf92;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419cfa1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTextAlignEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x419cfb0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x419cfc0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419cfcf;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x419cfd7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x419cfe7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419cff3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTextAlignEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419cffe;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad370 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"UpperCenter");
    il2cpp_runtime_helper_023445d0(&"UpperLeft");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"LowerLeft");
    il2cpp_runtime_helper_023445d0(&"LowerCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"LowerRight");
    il2cpp_runtime_helper_023445d0(&"UpperRight");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    g_data_057ad370 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x516feaaa) {
    if (uVar1 < 0x2505c52f) {
      if (uVar1 == 0x166f6d4a) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"UpperCenter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad372 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperCenter_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
            g_data_057ad372 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          return pCVar9;
        }
      }
      else if ((uVar1 == 0x2505c52e) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"UpperLeft",(MethodInfo *)0x0),
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
        goto CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft;
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
        if (g_data_057ad376 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleRight_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
          g_data_057ad376 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
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
      if (g_data_057ad374 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleLeft_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad374 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0xb23900c2) {
    if (uVar1 == 0xae5b608f) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LowerCenter",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad378 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerCenter_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
          g_data_057ad378 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0xb23900c1) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"MiddleCenter",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad375 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleCenter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad375 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xd4e02b97) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LowerLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad377 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerLeft_g____getter_8);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad377 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return pCVar9;
    }
  }
  else if (uVar1 == 0xdc00e203) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"UpperRight",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad373 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperRight_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad373 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xe58fc308) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"LowerRight",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057ad379 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerRight_g____getter_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
      g_data_057ad379 = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTextAlignEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad371 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d479;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperLeft_g____getter_2);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d485;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d491;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d49d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad371 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d4b3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d4cc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d4db;
  pCVar9 = (CustomLogic_CustomLogicTextAlignEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419d4f5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x419d000

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextAlignEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad370 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"UpperCenter");
    il2cpp_runtime_helper_023445d0(&"UpperLeft");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"LowerLeft");
    il2cpp_runtime_helper_023445d0(&"LowerCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"LowerRight");
    il2cpp_runtime_helper_023445d0(&"UpperRight");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    g_data_057ad370 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x516feaaa) {
    if (uVar1 < 0x2505c52f) {
      if (uVar1 == 0x166f6d4a) {
        bVar2 = System_String__op_Equality(name,"UpperCenter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad372 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperCenter_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
            g_data_057ad372 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2505c52e) &&
              (bVar2 = System_String__op_Equality(name,"UpperLeft",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puVar3 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar3 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft;
      }
    }
    else if (uVar1 == 0x30130eca) {
      bVar2 = System_String__op_Equality(name,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad376 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleRight_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
          g_data_057ad376 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x516feaa9) &&
            (bVar2 = System_String__op_Equality(name,"MiddleLeft",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad374 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleLeft_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad374 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0xb23900c2) {
    if (uVar1 == 0xae5b608f) {
      bVar2 = System_String__op_Equality(name,"LowerCenter",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad378 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerCenter_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
          g_data_057ad378 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0xb23900c1) &&
            (bVar2 = System_String__op_Equality(name,"MiddleCenter",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad375 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleCenter_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad375 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xd4e02b97) {
    bVar2 = System_String__op_Equality(name,"LowerLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad377 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerLeft_g____getter_8);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad377 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xdc00e203) {
    bVar2 = System_String__op_Equality(name,"UpperRight",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad373 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperRight_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
        g_data_057ad373 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xe58fc308) &&
          (bVar2 = System_String__op_Equality(name,"LowerRight",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad379 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerRight_g____getter_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
      g_data_057ad379 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTextAlignEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar4);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar3;
  if (g_data_057ad371 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d479;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperLeft_g____getter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d485;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d491;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d49d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad371 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d4b3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d4cc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d4db;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419d4f5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft (const MethodInfo* method);
// 0x419d460

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad371 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperLeft_g____getter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad371 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperCenter (const MethodInfo* method);
// 0x419d500

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad372 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperCenter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad372 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__UpperRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperRight (const MethodInfo* method);
// 0x419d5a0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__UpperRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad373 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__UpperRight_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad373 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleLeft (const MethodInfo* method);
// 0x419d640

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad374 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleLeft_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad374 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleCenter (const MethodInfo* method);
// 0x419d6e0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad375 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleCenter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad375 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__MiddleRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleRight (const MethodInfo* method);
// 0x419d780

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__MiddleRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad376 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MiddleRight_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad376 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerLeft (const MethodInfo* method);
// 0x419d820

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerLeft(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad377 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerLeft_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad377 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerCenter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerCenter (const MethodInfo* method);
// 0x419d8c0

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerCenter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad378 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerCenter_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad378 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$__CreatePropertyBinding__LowerRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o* CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerRight (const MethodInfo* method);
// 0x419d960

CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *
CustomLogic_CustomLogicTextAlignEnum_Bindings____CreatePropertyBinding__LowerRight(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *__this;
  
  if (g_data_057ad379 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowerRight_g____getter_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTextAlignEnum_object);
    g_data_057ad379 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTextAlignEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTextAlignEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTextAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTextAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x419da00

void CustomLogic_CustomLogicTextAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad37a == '\0') {
    uStack_20 = 0x419da1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x419da29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x419da35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419da41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x419da4d;
    il2cpp_runtime_helper_023445d0(&"UpperCenter");
    uStack_20 = 0x419da59;
    il2cpp_runtime_helper_023445d0(&"UpperLeft");
    uStack_20 = 0x419da65;
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    uStack_20 = 0x419da71;
    il2cpp_runtime_helper_023445d0(&"LowerLeft");
    uStack_20 = 0x419da7d;
    il2cpp_runtime_helper_023445d0(&"LowerCenter");
    uStack_20 = 0x419da89;
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    uStack_20 = 0x419da95;
    il2cpp_runtime_helper_023445d0(&"LowerRight");
    uStack_20 = 0x419daa1;
    il2cpp_runtime_helper_023445d0(&"UpperRight");
    uStack_20 = 0x419daad;
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    g_data_057ad37a = '\x01';
  }
  uStack_20 = 0x419dac3;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x419dad8;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x419dafd;
    System_Collections_Generic_HashSet_object___Add(__this,"UpperLeft",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db12;
    System_Collections_Generic_HashSet_object___Add(__this,"UpperCenter",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db27;
    System_Collections_Generic_HashSet_object___Add(__this,"UpperRight",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db3c;
    System_Collections_Generic_HashSet_object___Add(__this,"MiddleLeft",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db51;
    System_Collections_Generic_HashSet_object___Add(__this,"MiddleCenter",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db66;
    System_Collections_Generic_HashSet_object___Add(__this,"MiddleRight",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db7b;
    System_Collections_Generic_HashSet_object___Add(__this,"LowerLeft",MethodInfo_Boolean_Add);
    uStack_20 = 0x419db90;
    System_Collections_Generic_HashSet_object___Add(__this,"LowerCenter",MethodInfo_Boolean_Add);
    uStack_20 = 0x419dba5;
    System_Collections_Generic_HashSet_object___Add(__this,"LowerRight",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x419dbd7;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperLeft>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperLeft_g____getter_2_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dbe0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperLeft_g____getter_2_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperCenter>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperCenter_g____getter_3_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dc00

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperCenter_g____getter_3_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__UpperRight>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperRight_g____getter_4_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dc20

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__UpperRight_g____getter_4_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleLeft>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_5_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dc40

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleLeft_g____getter_5_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleCenter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_6_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dc60

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleCenter_g____getter_6_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__MiddleRight>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dc80

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__MiddleRight_g____getter_7_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerLeft>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerLeft_g____getter_8_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dca0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerLeft_g____getter_8_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerCenter>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerCenter_g____getter_9_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dcc0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerCenter_g____getter_9_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum.Bindings$$<__CreatePropertyBinding__LowerRight>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerRight_g____getter_10_0 (CustomLogic_CustomLogicTextAlignEnum_o* __i, const MethodInfo* method);
// 0x419dce0

Il2CppObject *
CustomLogic_CustomLogicTextAlignEnum_Bindings_____CreatePropertyBinding__LowerRight_g____getter_10_0
          (CustomLogic_CustomLogicTextAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTextAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextAlignEnum___ctor (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x419cd80

void CustomLogic_CustomLogicTextAlignEnum___ctor
               (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad36d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad36d = '\x01';
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


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperLeft (const MethodInfo* method);
// 0x419cdf0

int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperLeft(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperCenter (const MethodInfo* method);
// 0x419ce00

int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperCenter(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_UpperRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperRight (const MethodInfo* method);
// 0x419ce10

int32_t CustomLogic_CustomLogicTextAlignEnum__get_UpperRight(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleLeft (const MethodInfo* method);
// 0x419ce20

int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleLeft(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleCenter (const MethodInfo* method);
// 0x419ce30

int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleCenter(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_MiddleRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleRight (const MethodInfo* method);
// 0x419ce40

int32_t CustomLogic_CustomLogicTextAlignEnum__get_MiddleRight(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerLeft
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerLeft (const MethodInfo* method);
// 0x419ce50

int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerLeft(MethodInfo *method)

{
  return 6;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerCenter
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerCenter (const MethodInfo* method);
// 0x419ce60

int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerCenter(MethodInfo *method)

{
  return 7;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_LowerRight
// il2cpp: int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerRight (const MethodInfo* method);
// 0x419ce70

int32_t CustomLogic_CustomLogicTextAlignEnum__get_LowerRight(MethodInfo *method)

{
  return 8;
}


// CustomLogic.CustomLogicTextAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextAlignEnum__get_ClassName (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x419ce80

System_String_o *
CustomLogic_CustomLogicTextAlignEnum__get_ClassName
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad36e == '\0') {
    il2cpp_runtime_helper_023445d0(&"TextAlignEnum");
    g_data_057ad36e = '\x01';
  }
  return "TextAlignEnum";
}


// CustomLogic.CustomLogicTextAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_IsAbstract (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x419ceb0

bool_conflict
CustomLogic_CustomLogicTextAlignEnum__get_IsAbstract
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_IsStatic (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x419cec0

bool_conflict
CustomLogic_CustomLogicTextAlignEnum__get_IsStatic
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTextAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTextAlignEnum_o* __this, const MethodInfo* method);
// 0x419ced0

bool_conflict
CustomLogic_CustomLogicTextAlignEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTextAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


