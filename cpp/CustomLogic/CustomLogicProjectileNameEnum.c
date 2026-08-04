// Type: CustomLogic.CustomLogicProjectileNameEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProjectileNameEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProjectileNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProjectileNameEnum_o* CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4194eb0

CustomLogic_CustomLogicProjectileNameEnum_o *
CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicProjectileNameEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad2d7 == '\0') {
    pSStack_20 = (System_String_o *)0x4194ecc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicProjectileNameEnum);
    g_data_057ad2d7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4194f47;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4194ef6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicProjectileNameEnum);
    if (g_data_057ad2ce == '\0') {
      pSStack_20 = (System_String_o *)0x4194f0e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad2ce = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x4194f2d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4194f37;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicProjectileNameEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x4194f4f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4194f62;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4194f71;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicProjectileNameEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4194f80;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4194f90;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4194f9f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4194fa7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x4194fb7;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4194fc3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicProjectileNameEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x4194fce;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad2d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Flare");
    il2cpp_runtime_helper_023445d0(&"Rock2");
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"Rock1");
    g_data_057ad2d8 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x3c3eb8d8) {
    if (uVar1 == 0x23b28a7f) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Rock1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad2de == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rock1_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
          g_data_057ad2de = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x24b28c12) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Rock2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad2df == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rock2_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
          g_data_057ad2df = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x3c3eb8d7) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Flare",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad2db == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Flare_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        g_data_057ad2db = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0x99d03dfb) {
    if (uVar1 == 0x8d87a40b) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad2dc == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrow_g____getter_5);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
          g_data_057ad2dc = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x99d03dfa) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Thunderspear",(MethodInfo *)0x0),
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
      goto CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear;
    }
  }
  else if (uVar1 == 0x9fc581fa) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"SmokeBomb",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad2dd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SmokeBomb_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        g_data_057ad2dd = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xcd667d01) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"CannonBall",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057ad2da == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CannonBall_g____getter_3);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
      g_data_057ad2da = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicProjectileNameEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad2d9 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4195369;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunderspear_g____getter);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4195375;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4195381;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x419538d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2d9 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41953a3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41953bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41953cb;
  pCVar9 = (CustomLogic_CustomLogicProjectileNameEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41953e5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4194fd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  undefined8 *puVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad2d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Flare");
    il2cpp_runtime_helper_023445d0(&"Rock2");
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"Rock1");
    g_data_057ad2d8 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x3c3eb8d8) {
    if (uVar1 == 0x23b28a7f) {
      bVar2 = System_String__op_Equality(name,"Rock1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad2de == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rock1_g____getter_7_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
          g_data_057ad2de = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x24b28c12) {
      bVar2 = System_String__op_Equality(name,"Rock2",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad2df == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rock2_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
          g_data_057ad2df = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x3c3eb8d7) &&
            (bVar2 = System_String__op_Equality(name,"Flare",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2db == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Flare_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        g_data_057ad2db = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x99d03dfb) {
    if (uVar1 == 0x8d87a40b) {
      bVar2 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad2dc == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrow_g____getter_5);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
          g_data_057ad2dc = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x99d03dfa) &&
            (bVar2 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puVar4 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear;
    }
  }
  else if (uVar1 == 0x9fc581fa) {
    bVar2 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad2dd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SmokeBomb_g____getter_6);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
        g_data_057ad2dd = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xcd667d01) &&
          (bVar2 = System_String__op_Equality(name,"CannonBall",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad2da == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CannonBall_g____getter_3);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
      g_data_057ad2da = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicProjectileNameEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad2d9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4195369;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunderspear_g____getter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4195375;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4195381;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419538d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2d9 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41953a3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41953bc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41953cb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41953e5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x4195350

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunderspear_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__CannonBall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall (const MethodInfo* method);
// 0x41953f0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2da == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CannonBall_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Flare
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare (const MethodInfo* method);
// 0x4195490

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Flare_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x4195530

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__BladeThrow_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x41955d0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SmokeBomb_g____getter_6);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1 (const MethodInfo* method);
// 0x4195670

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rock1_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2 (const MethodInfo* method);
// 0x4195710

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this;
  
  if (g_data_057ad2df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Rock2_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProjectileNameEnum_object);
    g_data_057ad2df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProjectileNameEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProjectileNameEnum);
  return __this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x41957b0

void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad2e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Flare");
    il2cpp_runtime_helper_023445d0(&"Rock2");
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"Rock1");
    g_data_057ad2e0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Thunderspear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"CannonBall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Flare",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"BladeThrow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SmokeBomb",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Rock1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Rock2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad444 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad444 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x4195950

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad444 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad444 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__CannonBall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x41959c0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad445 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad445 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Flare>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x4195a30

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad446 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad446 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x4195aa0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad447 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad447 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x4195b10

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad448 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad448 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x4195b80

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad449 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad449 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock2>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x4195bf0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad44a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad44a = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicProjectileNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum___ctor (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x4194ad0

void CustomLogic_CustomLogicProjectileNameEnum___ctor
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad2ce = '\x01';
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


// CustomLogic.CustomLogicProjectileNameEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear (const MethodInfo* method);
// 0x4194b40

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2cf = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_CannonBall
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall (const MethodInfo* method);
// 0x4194bb0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2d0 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 8);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Flare
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Flare (const MethodInfo* method);
// 0x4194c20

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Flare(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2d1 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow (const MethodInfo* method);
// 0x4194c90

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2d2 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb (const MethodInfo* method);
// 0x4194d00

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock1
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock1 (const MethodInfo* method);
// 0x4194d70

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock2
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock2 (const MethodInfo* method);
// 0x4194de0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    g_data_057ad2d5 = '\x01';
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_ClassName (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x4194e50

System_String_o *
CustomLogic_CustomLogicProjectileNameEnum__get_ClassName
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad2d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ProjectileNameEnum");
    g_data_057ad2d6 = '\x01';
  }
  return "ProjectileNameEnum";
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x4194e80

bool_conflict
CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x4194e90

bool_conflict
CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x4194ea0

bool_conflict
CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


