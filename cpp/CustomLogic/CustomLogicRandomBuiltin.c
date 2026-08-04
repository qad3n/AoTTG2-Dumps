// Type: CustomLogic.CustomLogicRandomBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRandomBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRandomBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRandomBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRandomBuiltin_o* CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x424f350

CustomLogic_CustomLogicRandomBuiltin_o *
CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  long lVar2;
  uint in_EAX;
  uint uVar3;
  uint32_t uVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicRandomBuiltin_o *pCVar6;
  il2cpp_array_size_t iVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *str2;
  System_Exception_o *pSVar10;
  undefined8 uVar11;
  System_ArgumentException_o *__this;
  System_Func_T__object____object__o *pSVar12;
  System_Exception_o **ppSVar13;
  MethodInfo *method_00;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  System_Exception_o *pSStack_30;
  System_Exception_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057adb4a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicRandomBuiltin);
    g_data_057adb4a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    iVar7 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar7 = args->max_length;
    if (iVar7 == 0) {
      pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRandomBuiltin);
      if (g_data_057adb45 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057adb45 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,method);
      return pCVar6;
    }
    if ((int)iVar7 == 1) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_Int32_ConvertTo_Int32;
      uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(obj,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRandomBuiltin);
      if (g_data_057adb46 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057adb46 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,method_00);
      uVar3 = uVar3 << 0xd ^ uVar3;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      (pCVar6->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
      *(undefined1 *)&(pCVar6->fields).UseInstanceRandom = 1;
      return pCVar6;
    }
  }
  uStack_18 = CONCAT44((int)iVar7,(uint)uStack_18);
  pSVar8 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicRandomBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar10 = (System_Exception_o *)System_String__Concat_3af7150(pSVar9,pSVar8,str2,(MethodInfo *)0x0);
  uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar11);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)pSVar10,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicRandomBuiltin_CreateInstance);
  pSStack_30 = (System_Exception_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = pSVar10;
  if (g_data_057adb4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RandomBool");
    il2cpp_runtime_helper_023445d0(&"RandomDirection");
    il2cpp_runtime_helper_023445d0(&"PerlinNoise");
    il2cpp_runtime_helper_023445d0(&"RandomFloat");
    il2cpp_runtime_helper_023445d0(&"RandomVector3");
    il2cpp_runtime_helper_023445d0(&"RandomInt");
    il2cpp_runtime_helper_023445d0(&"RandomSign");
    g_data_057adb4b = '\x01';
  }
  uVar4 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)__this,(MethodInfo *)0x0);
  if (uVar4 < 0x90354281) {
    if (uVar4 == 0x82de4eee) {
      bVar5 = System_String__op_Equality((System_String_o *)__this,"RandomVector3",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomVector3_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb4f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return pCVar6;
      }
    }
    else if (uVar4 == 0x885c07e3) {
      bVar5 = System_String__op_Equality((System_String_o *)__this,"PerlinNoise",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb52 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PerlinNoise_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb52 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar12);
        }
        pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return pCVar6;
      }
    }
    else if ((uVar4 == 0x90354280) &&
            (bVar5 = System_String__op_Equality((System_String_o *)__this,"RandomFloat",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb4d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomFloat_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb4d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
      }
      pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return pCVar6;
    }
  }
  else if (uVar4 < 0xb5b881f8) {
    if (uVar4 == 0x91b5efce) {
      bVar5 = System_String__op_Equality((System_String_o *)__this,"RandomBool",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057adb4e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomBool_b__4_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb4e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
        }
        pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return pCVar6;
      }
    }
    else if ((uVar4 == 0xb5b881f7) &&
            (bVar5 = System_String__op_Equality((System_String_o *)__this,"RandomDirection",(MethodInfo *)0x0),
            (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb50 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomDirection_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb50 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
      }
      pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return pCVar6;
    }
  }
  else if (uVar4 == 0xfb77f8cf) {
    bVar5 = System_String__op_Equality((System_String_o *)__this,"RandomSign",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057adb51 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomSign_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb51 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar12);
      }
      pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return pCVar6;
    }
  }
  else if ((uVar4 == 0xfa877c5b) &&
          (bVar5 = System_String__op_Equality((System_String_o *)__this,"RandomInt",(MethodInfo *)0x0),
          (char)bVar5 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      ppSVar13 = (System_Exception_o **)&uStack_18;
      pSVar10 = pSStack_28;
    }
    else {
      ppSVar13 = (System_Exception_o **)&uStack_18;
      pSVar10 = pSStack_28;
    }
    goto CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt;
  }
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicRandomBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(pSVar8,(System_String_o *)__this,pSVar9,(MethodInfo *)0x0);
  uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar11);
  System_Exception___ctor_3cf6120(pSVar10,unaff_R14,(MethodInfo *)0x0);
  uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar10,uVar11);
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar13 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)ppSVar13 + -0x18) = pSVar10;
  if (g_data_057adb4c == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f965;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f971;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomInt_b__2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb4c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f9ac;
    il2cpp_runtime_helper_02337ed0();
    pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f8fb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f917;
    pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f931;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f94b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f9d2;
  pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x424f9ea;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar6,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return pCVar6;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4250380

void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adb54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb54 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x42503f0

void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomInt>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4250400

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__object__o *pSVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int32_t maxExclusive;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 uVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  CustomLogic_CustomLogicVector3Builtin_o *unaff_RBX;
  MethodInfo *pMVar14;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  undefined8 *unaff_R12;
  ulong unaff_R14;
  float fVar17;
  undefined1 extraout_var [12];
  undefined1 auVar18 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar19 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o value;
  undefined1 auVar25 [16];
  undefined8 uStack_d8;
  CustomLogic_CustomLogicVector3Builtin_o *pCStack_d0;
  undefined1 auStack_c8 [8];
  MethodInfo *pMStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  long lStack_a0;
  System_Object_array *pSStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  MethodInfo *pMStack_78;
  CustomLogic_CustomLogicVector3Builtin_o *pCStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicVector3Builtin_o *pCStack_58;
  undefined8 *puStack_50;
  ulong uStack_48;
  CustomLogic_CustomLogicRandomBuiltin_o *pCStack_40;
  int iStack_2c;
  undefined1 auVar24 [16];
  
  pMVar14 = (MethodInfo *)__c;
  if (g_data_057adb55 == '\0') {
    pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x4250427;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x4250433;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb55 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_RBX = (CustomLogic_CustomLogicVector3Builtin_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x4250469;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_Int32_ConvertTo_Int32;
      pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x425047c;
      pMVar14 = MethodInfo_Int32_ConvertTo_Int32;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)unaff_RBX;
      uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        ((Il2CppObject *)unaff_RBX,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)__a->max_length) {
        unaff_R14 = (ulong)uVar5;
        __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__a->m_Items[1];
        pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x4250492;
        pMVar14 = MethodInfo_Int32_ConvertTo_Int32;
        maxExclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                                 ((Il2CppObject *)__this,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
        if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
          if ((char)(__c->fields).UseInstanceRandom == '\0') {
            pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x42504d7;
            iStack_2c = UnityEngine_Random__Range_4df2410(uVar5,maxExclusive,(MethodInfo *)0x0);
          }
          else {
            uVar10 = (__c->fields).Rand.fields.state;
            uVar11 = uVar10 << 0xd ^ uVar10;
            uVar11 = uVar11 >> 0x11 ^ uVar11;
            (__c->fields).Rand.fields.state = uVar11 << 5 ^ uVar11;
            iStack_2c = (int)((ulong)(maxExclusive - uVar5) * (ulong)uVar10 >> 0x20) + uVar5;
          }
          pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x42504f0;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
          return pIVar7;
        }
        goto label_04250502;
      }
    }
    pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x4250502;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250502:
  pCStack_40 = (CustomLogic_CustomLogicRandomBuiltin_o *)0x4250507;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  lVar12 = auVar25._8_8_;
  uStack_60 = auVar25._0_8_;
  pMVar15 = pMVar14;
  pCStack_58 = unaff_RBX;
  puStack_50 = unaff_R12;
  uStack_48 = unaff_R14;
  pCStack_40 = __c;
  if (g_data_057adb56 == '\0') {
    uStack_68 = 0x4250533;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_68 = 0x425053f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb56 = '\x01';
  }
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      __c = *(CustomLogic_CustomLogicRandomBuiltin_o **)(lVar12 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_68 = 0x4250575;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_Single_ConvertTo_Single;
      uStack_68 = 0x4250588;
      pMVar15 = MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__c;
      fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__c,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_60 = CONCAT44(uStack_60._4_4_,fVar17);
      if (1 < *(uint *)(lVar12 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar12 + 0x28);
        uStack_68 = 0x42505a4;
        pMVar15 = MethodInfo_Single_ConvertTo_Single;
        fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pMVar14 != (MethodInfo *)0x0) {
          if (*(char *)((long)&pMVar14->parameters + 4) == '\0') {
            uStack_68 = 0x4250607;
            fVar17 = UnityEngine_Random__Range((float)uStack_60,fVar17,(MethodInfo *)0x0);
          }
          else {
            uVar5 = *(uint *)&pMVar14->parameters;
            uVar10 = uVar5 << 0xd ^ uVar5;
            uVar10 = uVar10 >> 0x11 ^ uVar10;
            *(uint *)&pMVar14->parameters = uVar10 << 5 ^ uVar10;
            fVar17 = (fVar17 - (float)uStack_60) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) +
                     (float)uStack_60;
          }
          uStack_60 = CONCAT44(fVar17,(float)uStack_60);
          uStack_68 = 0x4250625;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
          return pIVar7;
        }
        goto label_04250636;
      }
    }
    uStack_68 = 0x4250636;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250636:
  uStack_68 = 0x425063b;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if (pMVar15 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar15->parameters + 4) == '\0') {
      pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x4250672;
      bVar6 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
      bVar3 = (byte)bVar6;
    }
    else {
      uVar5 = *(uint *)&pMVar15->parameters;
      uVar10 = uVar5 << 0xd ^ uVar5;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar15->parameters = uVar10 << 5 ^ uVar10;
      bVar3 = (byte)uVar5 & 1;
    }
    uStack_68 = CONCAT17(bVar3,(undefined7)uStack_68);
    pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x425068b;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_68 + 7);
    return pIVar7;
  }
  pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x4250692;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  lVar13 = auVar25._8_8_;
  uStack_90 = auVar25._0_8_;
  pMVar16 = pMVar15;
  lStack_88 = lVar12;
  puStack_80 = unaff_R12;
  pMStack_78 = pMVar14;
  pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)__c;
  if (g_data_057adb57 == '\0') {
    pSStack_98 = (System_Object_array *)0x42506c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_98 = (System_Object_array *)0x42506cf;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb57 = '\x01';
  }
  if (lVar13 != 0) {
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)__c;
    if (*(int *)(lVar13 + 0x18) != 0) {
      pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)(lVar13 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_98 = (System_Object_array *)0x42506fd;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pSStack_98 = (System_Object_array *)0x4250710;
      pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar8;
      __c = (CustomLogic_CustomLogicRandomBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)(lVar13 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar13 + 0x28);
        pSStack_98 = (System_Object_array *)0x4250726;
        pMVar16 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pMVar15 != (MethodInfo *)0x0) {
          pCVar8 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3
                             ((CustomLogic_CustomLogicRandomBuiltin_o *)pMVar15,
                              (CustomLogic_CustomLogicVector3Builtin_o *)__c,pCVar8,method);
          return (Il2CppObject *)pCVar8;
        }
        goto label_04250749;
      }
    }
    __c = (CustomLogic_CustomLogicRandomBuiltin_o *)pCVar8;
    pSStack_98 = (System_Object_array *)0x4250749;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250749:
  pSStack_98 = (System_Object_array *)0x425074e;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  pCVar8 = auVar25._8_8_;
  uStack_a8 = auVar25._0_8_;
  pMVar14 = pMVar16;
  lStack_a0 = lVar13;
  pSStack_98 = (System_Object_array *)pMVar15;
  if (g_data_057adb58 == '\0') {
    auStack_b8._8_8_ = 0x425076f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    auStack_b8._8_8_ = 0x425077b;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb58 = '\x01';
  }
  if (pCVar8 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_042507e0:
    auStack_b8._8_8_ = 0x42507e5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (pCVar8->fields).Variables;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      cVar4 = '\0';
joined_r0x042507de:
      if (pMVar16 == (MethodInfo *)0x0) goto label_042507e0;
      pSStack_98 = __a;
      if (g_data_057adb48 == '\0') {
        pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424efe0;
        il2cpp_runtime_helper_023445d0();
        g_data_057adb48 = '\x01';
      }
      if (*(char *)((long)&pMVar16->parameters + 4) == '\0') {
        pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f041;
        auVar25._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auVar25._4_12_ = extraout_var;
        if (*(char *)((long)&pMVar16->parameters + 4) != '\0') goto label_0424f04b;
        pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f23b;
        _auStack_c8 = auVar25;
        fVar17 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auStack_b8._4_4_ = extraout_var_01._0_4_;
        auVar25 = _auStack_c8;
        if (*(char *)((long)&pMVar16->parameters + 4) == '\0') {
          auStack_b8._0_4_ = fVar17;
          auStack_b8._8_4_ = extraout_var_01._4_4_;
          auStack_b8._12_4_ = extraout_var_01._8_4_;
          pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f269;
          fVar17 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
          auVar21._4_4_ = extraout_var_02._0_4_;
          auVar21._0_4_ = fVar17;
          auVar21._8_4_ = extraout_var_02._4_4_;
          auVar21._12_4_ = extraout_var_02._8_4_;
          auVar24._8_4_ = auStack_c8._4_4_;
          auVar24._0_8_ = auStack_c8;
          auVar24._12_4_ = auStack_b8._4_4_;
          auVar23._8_8_ = auVar24._8_8_;
          auVar23._0_4_ = auStack_c8._0_4_;
          auVar23._4_4_ = auStack_b8._0_4_;
          auStack_b8 = auVar23;
          auVar25 = _auStack_c8;
          goto joined_r0x0424f27e;
        }
      }
      else {
        uVar5 = *(uint *)&pMVar16->parameters;
        uVar10 = uVar5 << 0xd ^ uVar5;
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        *(uint *)&pMVar16->parameters = uVar10 << 5 ^ uVar10;
        fVar17 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
        auVar25 = ZEXT416((uint)(fVar17 + fVar17 + -1.0));
label_0424f04b:
        uVar5 = *(uint *)&pMVar16->parameters;
        uVar10 = uVar5 << 0xd ^ uVar5;
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        *(uint *)&pMVar16->parameters = uVar10 << 5 ^ uVar10;
        fVar17 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
        fVar17 = fVar17 + fVar17 + -1.0;
        auStack_b8._4_4_ = 0;
      }
      uVar5 = *(uint *)&pMVar16->parameters;
      uVar10 = uVar5 << 0xd ^ uVar5;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar16->parameters = uVar10 << 5 ^ uVar10;
      fVar20 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
      auVar21 = ZEXT416((uint)(fVar20 + fVar20 + -1.0));
      auVar22._0_8_ = auVar25._0_8_;
      auVar22._8_4_ = auVar25._4_4_;
      auVar22._12_4_ = auStack_b8._4_4_;
      auStack_b8._8_8_ = auVar22._8_8_;
      auStack_b8._0_4_ = auVar25._0_4_;
      auStack_b8._4_4_ = fVar17;
joined_r0x0424f27e:
      if (cVar4 != '\0') {
        auStack_b8._4_4_ = 0;
        auStack_b8._0_4_ = auVar25._0_4_;
      }
      stack0xffffffffffffff3c = auStack_c8._4_12_;
      auStack_c8._0_4_ = auVar21._0_4_;
      if (g_data_057a6845 == '\0') {
        pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1e4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar21 = ZEXT416((uint)auStack_c8._0_4_);
        g_data_057a6845 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f211;
        il2cpp_runtime_helper_02337ed0();
        auVar21 = ZEXT416((uint)auStack_c8._0_4_);
      }
      auVar18._4_12_ = auVar21._4_12_;
      fVar17 = auVar21._0_4_ * auVar21._0_4_ +
               auStack_b8._4_4_ * auStack_b8._4_4_ + auStack_b8._0_4_ * auStack_b8._0_4_;
      if (fVar17 < 0.0) {
        pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f180;
        auVar18._0_4_ = sqrtf(fVar17);
        auVar18._4_12_ = extraout_var_00;
        auVar21 = ZEXT416((uint)auStack_c8._0_4_);
        fVar17 = auVar18._0_4_;
      }
      else {
        auVar18._0_4_ = SQRT(fVar17);
        fVar17 = auVar18._0_4_;
      }
      if (1e-05 < fVar17) {
        auVar19._0_4_ = auVar18._0_4_;
        auStack_c8._0_4_ = auVar21._0_4_ / auVar19._0_4_;
        auVar19._8_4_ = auVar18._8_4_;
        auVar19._12_4_ = auVar18._12_4_;
        auVar19._4_4_ = auVar19._0_4_;
        auStack_b8 = divps(auStack_b8,auVar19);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f14e;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        auStack_b8._8_8_ = 0;
        auStack_b8._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        auStack_c8._0_4_ = (int)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1];
      }
      pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1b7;
      pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar25 = auStack_b8;
      pCStack_d0 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1ce;
      value.fields.z = (float)auStack_c8._0_4_;
      value.fields.x = (float)auStack_b8._0_4_;
      value.fields.y = (float)auStack_b8._4_4_;
      auStack_b8 = auVar25;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar8;
    }
    if ((int)pSVar2 != 0) {
      pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)&(pCVar8->fields)._containsTypeOverride;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        auStack_b8._8_8_ = 0x42507b0;
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_b8._8_8_ = 0x42507c2;
      pMVar14 = MethodInfo_Boolean_ConvertTo_Boolean;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar8;
      bVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        ((Il2CppObject *)pCVar8,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
      cVar4 = (char)bVar6;
      goto joined_r0x042507de;
    }
  }
  auStack_b8._8_8_ = 0x42507ea;
  uVar9 = il2cpp_runtime_helper_022b2ca0();
  auStack_b8._8_8_ = uVar9;
  if (pMVar14 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar14->parameters + 4) == '\0') {
      auStack_b8._0_8_ = 0x4250822;
      uVar5 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar5 = *(uint *)&pMVar14->parameters;
      uVar10 = uVar5 << 0xd ^ uVar5;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar14->parameters = uVar10 << 5 ^ uVar10;
      uVar5 = (uint)((byte)uVar5 & 1);
    }
    auStack_b8._12_4_ = (uVar5 & 0xff) * 2 + -1;
    auStack_b8._0_8_ = 0x4250844;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_b8 + 0xc);
    return pIVar7;
  }
  auStack_b8._0_8_ = 0x425084b;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  lVar12 = auVar25._8_8_;
  uStack_d8 = auVar25._0_8_;
  auStack_b8._0_8_ = __c;
  pMStack_c0 = pMVar16;
  auStack_c8 = (undefined1  [8])unaff_R12;
  pMVar15 = pMVar14;
  pCStack_d0 = pCVar8;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar12 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar15 = MethodInfo_Single_ConvertTo_Single;
      fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,fVar17);
      if (1 < *(uint *)(lVar12 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar12 + 0x28);
        pMVar15 = MethodInfo_Single_ConvertTo_Single;
        fVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pMVar14 != (MethodInfo *)0x0) {
          fVar17 = UnityEngine_Mathf__PerlinNoise((float)uStack_d8,fVar17,(MethodInfo *)0x0);
          uStack_d8 = CONCAT44(fVar17,(float)uStack_d8);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_d8 + 4);
          return pIVar7;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar15);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar15);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4250510

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__object__o *pSVar2;
  byte bVar3;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  undefined8 in_RAX;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 uVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  uint uVar10;
  long extraout_RDX;
  long lVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  undefined8 *unaff_R12;
  CustomLogic_CustomLogicVector3Builtin_o *unaff_R15;
  float fVar14;
  undefined1 extraout_var [12];
  undefined1 auVar15 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar16 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o value;
  undefined1 auVar22 [16];
  undefined8 uStack_a0;
  CustomLogic_CustomLogicVector3Builtin_o *pCStack_98;
  undefined1 auStack_90 [8];
  MethodInfo *pMStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 auVar21 [16];
  
  pMVar12 = (MethodInfo *)__c;
  uStack_28 = in_RAX;
  if (g_data_057adb56 == '\0') {
    uStack_30 = 0x4250533;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_30 = 0x425053f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb56 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R15 = (CustomLogic_CustomLogicVector3Builtin_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_30 = 0x4250575;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_Single_ConvertTo_Single;
      uStack_30 = 0x4250588;
      pMVar12 = MethodInfo_Single_ConvertTo_Single;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)unaff_R15;
      fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)unaff_R15,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_28 = CONCAT44(uStack_28._4_4_,fVar14);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__a->m_Items[1];
        uStack_30 = 0x42505a4;
        pMVar12 = MethodInfo_Single_ConvertTo_Single;
        fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
          if ((char)(__c->fields).UseInstanceRandom == '\0') {
            uStack_30 = 0x4250607;
            fVar14 = UnityEngine_Random__Range((float)uStack_28,fVar14,(MethodInfo *)0x0);
          }
          else {
            uVar6 = (__c->fields).Rand.fields.state;
            uVar10 = uVar6 << 0xd ^ uVar6;
            uVar10 = uVar10 >> 0x11 ^ uVar10;
            (__c->fields).Rand.fields.state = uVar10 << 5 ^ uVar10;
            fVar14 = (fVar14 - (float)uStack_28) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) +
                     (float)uStack_28;
          }
          uStack_28 = CONCAT44(fVar14,(float)uStack_28);
          uStack_30 = 0x4250625;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
          return pIVar7;
        }
        goto label_04250636;
      }
    }
    uStack_30 = 0x4250636;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250636:
  uStack_30 = 0x425063b;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (pMVar12 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar12->parameters + 4) == '\0') {
      bVar5 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
      bVar3 = (byte)bVar5;
    }
    else {
      uVar6 = *(uint *)&pMVar12->parameters;
      uVar10 = uVar6 << 0xd ^ uVar6;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar12->parameters = uVar10 << 5 ^ uVar10;
      bVar3 = (byte)uVar6 & 1;
    }
    uStack_30 = CONCAT17(bVar3,(undefined7)uStack_30);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
    return pIVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  if (g_data_057adb57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb57 = '\x01';
  }
  if (extraout_RDX != 0) {
    pCVar8 = unaff_R15;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar8;
      unaff_R15 = (CustomLogic_CustomLogicVector3Builtin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pCVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pMVar13 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (pMVar12 != (MethodInfo *)0x0) {
          pCVar8 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3
                             ((CustomLogic_CustomLogicRandomBuiltin_o *)pMVar12,unaff_R15,pCVar8,method);
          return (Il2CppObject *)pCVar8;
        }
        goto label_04250749;
      }
    }
    unaff_R15 = pCVar8;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250749:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  pCVar8 = auVar22._8_8_;
  uStack_70 = auVar22._0_8_;
  pMVar12 = pMVar13;
  lStack_68 = extraout_RDX;
  if (g_data_057adb58 == '\0') {
    auStack_80._8_8_ = 0x425076f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    auStack_80._8_8_ = 0x425077b;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb58 = '\x01';
  }
  if (pCVar8 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_042507e0:
    auStack_80._8_8_ = 0x42507e5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (pCVar8->fields).Variables;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      cVar4 = '\0';
joined_r0x042507de:
      if (pMVar13 == (MethodInfo *)0x0) goto label_042507e0;
      if (g_data_057adb48 == '\0') {
        pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424efe0;
        il2cpp_runtime_helper_023445d0();
        g_data_057adb48 = '\x01';
      }
      if (*(char *)((long)&pMVar13->parameters + 4) == '\0') {
        pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f041;
        auVar22._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auVar22._4_12_ = extraout_var;
        if (*(char *)((long)&pMVar13->parameters + 4) != '\0') goto label_0424f04b;
        pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f23b;
        _auStack_90 = auVar22;
        fVar14 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auStack_80._4_4_ = extraout_var_01._0_4_;
        auVar22 = _auStack_90;
        if (*(char *)((long)&pMVar13->parameters + 4) == '\0') {
          auStack_80._0_4_ = fVar14;
          auStack_80._8_4_ = extraout_var_01._4_4_;
          auStack_80._12_4_ = extraout_var_01._8_4_;
          pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f269;
          fVar14 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
          auVar18._4_4_ = extraout_var_02._0_4_;
          auVar18._0_4_ = fVar14;
          auVar18._8_4_ = extraout_var_02._4_4_;
          auVar18._12_4_ = extraout_var_02._8_4_;
          auVar21._8_4_ = auStack_90._4_4_;
          auVar21._0_8_ = auStack_90;
          auVar21._12_4_ = auStack_80._4_4_;
          auVar20._8_8_ = auVar21._8_8_;
          auVar20._0_4_ = auStack_90._0_4_;
          auVar20._4_4_ = auStack_80._0_4_;
          auStack_80 = auVar20;
          auVar22 = _auStack_90;
          goto joined_r0x0424f27e;
        }
      }
      else {
        uVar6 = *(uint *)&pMVar13->parameters;
        uVar10 = uVar6 << 0xd ^ uVar6;
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        *(uint *)&pMVar13->parameters = uVar10 << 5 ^ uVar10;
        fVar14 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
        auVar22 = ZEXT416((uint)(fVar14 + fVar14 + -1.0));
label_0424f04b:
        uVar6 = *(uint *)&pMVar13->parameters;
        uVar10 = uVar6 << 0xd ^ uVar6;
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        *(uint *)&pMVar13->parameters = uVar10 << 5 ^ uVar10;
        fVar14 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
        fVar14 = fVar14 + fVar14 + -1.0;
        auStack_80._4_4_ = 0;
      }
      uVar6 = *(uint *)&pMVar13->parameters;
      uVar10 = uVar6 << 0xd ^ uVar6;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar13->parameters = uVar10 << 5 ^ uVar10;
      fVar17 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
      auVar18 = ZEXT416((uint)(fVar17 + fVar17 + -1.0));
      auVar19._0_8_ = auVar22._0_8_;
      auVar19._8_4_ = auVar22._4_4_;
      auVar19._12_4_ = auStack_80._4_4_;
      auStack_80._8_8_ = auVar19._8_8_;
      auStack_80._0_4_ = auVar22._0_4_;
      auStack_80._4_4_ = fVar14;
joined_r0x0424f27e:
      if (cVar4 != '\0') {
        auStack_80._4_4_ = 0;
        auStack_80._0_4_ = auVar22._0_4_;
      }
      stack0xffffffffffffff74 = auStack_90._4_12_;
      auStack_90._0_4_ = auVar18._0_4_;
      if (g_data_057a6845 == '\0') {
        pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1e4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar18 = ZEXT416((uint)auStack_90._0_4_);
        g_data_057a6845 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f211;
        il2cpp_runtime_helper_02337ed0();
        auVar18 = ZEXT416((uint)auStack_90._0_4_);
      }
      auVar15._4_12_ = auVar18._4_12_;
      fVar14 = auVar18._0_4_ * auVar18._0_4_ +
               auStack_80._4_4_ * auStack_80._4_4_ + auStack_80._0_4_ * auStack_80._0_4_;
      if (fVar14 < 0.0) {
        pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f180;
        auVar15._0_4_ = sqrtf(fVar14);
        auVar15._4_12_ = extraout_var_00;
        auVar18 = ZEXT416((uint)auStack_90._0_4_);
        fVar14 = auVar15._0_4_;
      }
      else {
        auVar15._0_4_ = SQRT(fVar14);
        fVar14 = auVar15._0_4_;
      }
      if (1e-05 < fVar14) {
        auVar16._0_4_ = auVar15._0_4_;
        auStack_90._0_4_ = auVar18._0_4_ / auVar16._0_4_;
        auVar16._8_4_ = auVar15._8_4_;
        auVar16._12_4_ = auVar15._12_4_;
        auVar16._4_4_ = auVar16._0_4_;
        auStack_80 = divps(auStack_80,auVar16);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f14e;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        auStack_80._8_8_ = 0;
        auStack_80._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        auStack_90._0_4_ = (int)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1];
      }
      pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1b7;
      pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar22 = auStack_80;
      pCStack_98 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1ce;
      value.fields.z = (float)auStack_90._0_4_;
      value.fields.x = (float)auStack_80._0_4_;
      value.fields.y = (float)auStack_80._4_4_;
      auStack_80 = auVar22;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar8;
    }
    if ((int)pSVar2 != 0) {
      pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)&(pCVar8->fields)._containsTypeOverride;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        auStack_80._8_8_ = 0x42507b0;
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_80._8_8_ = 0x42507c2;
      pMVar12 = MethodInfo_Boolean_ConvertTo_Boolean;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar8;
      bVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        ((Il2CppObject *)pCVar8,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
      cVar4 = (char)bVar5;
      goto joined_r0x042507de;
    }
  }
  auStack_80._8_8_ = 0x42507ea;
  uVar9 = il2cpp_runtime_helper_022b2ca0();
  auStack_80._8_8_ = uVar9;
  if (pMVar12 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar12->parameters + 4) == '\0') {
      auStack_80._0_8_ = 0x4250822;
      uVar6 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar6 = *(uint *)&pMVar12->parameters;
      uVar10 = uVar6 << 0xd ^ uVar6;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar12->parameters = uVar10 << 5 ^ uVar10;
      uVar6 = (uint)((byte)uVar6 & 1);
    }
    auStack_80._12_4_ = (uVar6 & 0xff) * 2 + -1;
    auStack_80._0_8_ = 0x4250844;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_80 + 0xc);
    return pIVar7;
  }
  auStack_80._0_8_ = 0x425084b;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  lVar11 = auVar22._8_8_;
  uStack_a0 = auVar22._0_8_;
  auStack_80._0_8_ = unaff_R15;
  pMStack_88 = pMVar13;
  auStack_90 = (undefined1  [8])unaff_R12;
  pMVar13 = pMVar12;
  pCStack_98 = pCVar8;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar11 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = MethodInfo_Single_ConvertTo_Single;
      fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar14);
      if (1 < *(uint *)(lVar11 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar11 + 0x28);
        pMVar13 = MethodInfo_Single_ConvertTo_Single;
        fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pMVar12 != (MethodInfo *)0x0) {
          fVar14 = UnityEngine_Mathf__PerlinNoise((float)uStack_a0,fVar14,(MethodInfo *)0x0);
          uStack_a0 = CONCAT44(fVar14,(float)uStack_a0);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a0 + 4);
          return pIVar7;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar13);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar13);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4250640

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__object__o *pSVar2;
  byte bVar3;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  undefined8 in_RAX;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 uVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  uint uVar10;
  long extraout_RDX;
  long lVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  undefined8 *unaff_R12;
  CustomLogic_CustomLogicVector3Builtin_o *unaff_R15;
  float fVar14;
  undefined1 extraout_var [12];
  undefined1 auVar15 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar16 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  UnityEngine_Vector3_o value;
  undefined1 auVar22 [16];
  undefined8 uStack_78;
  CustomLogic_CustomLogicVector3Builtin_o *pCStack_70;
  undefined1 auStack_68 [8];
  MethodInfo *pMStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_8;
  undefined1 auVar21 [16];
  
  if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    if ((char)(__c->fields).UseInstanceRandom == '\0') {
      bVar5 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
      bVar3 = (byte)bVar5;
    }
    else {
      uVar6 = (__c->fields).Rand.fields.state;
      uVar10 = uVar6 << 0xd ^ uVar6;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      (__c->fields).Rand.fields.state = uVar10 << 5 ^ uVar10;
      bVar3 = (byte)uVar6 & 1;
    }
    uStack_8 = CONCAT17(bVar3,(undefined7)uStack_8);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = (MethodInfo *)__c;
  if (g_data_057adb57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb57 = '\x01';
  }
  if (extraout_RDX != 0) {
    pCVar8 = unaff_R15;
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMVar12 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar8;
      unaff_R15 = (CustomLogic_CustomLogicVector3Builtin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pCVar8,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pMVar12 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if ((MethodInfo *)__c != (MethodInfo *)0x0) {
          pCVar8 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3(__c,unaff_R15,pCVar8,method);
          return (Il2CppObject *)pCVar8;
        }
        goto label_04250749;
      }
    }
    unaff_R15 = pCVar8;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250749:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  pCVar8 = auVar22._8_8_;
  uStack_48 = auVar22._0_8_;
  pMVar13 = pMVar12;
  lStack_40 = extraout_RDX;
  if (g_data_057adb58 == '\0') {
    auStack_58._8_8_ = 0x425076f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    auStack_58._8_8_ = 0x425077b;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb58 = '\x01';
  }
  if (pCVar8 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_042507e0:
    auStack_58._8_8_ = 0x42507e5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (pCVar8->fields).Variables;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      cVar4 = '\0';
joined_r0x042507de:
      if (pMVar12 == (MethodInfo *)0x0) goto label_042507e0;
      if (g_data_057adb48 == '\0') {
        pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424efe0;
        il2cpp_runtime_helper_023445d0();
        g_data_057adb48 = '\x01';
      }
      if (*(char *)((long)&pMVar12->parameters + 4) == '\0') {
        pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f041;
        auVar22._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auVar22._4_12_ = extraout_var;
        if (*(char *)((long)&pMVar12->parameters + 4) != '\0') goto label_0424f04b;
        pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f23b;
        _auStack_68 = auVar22;
        fVar14 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auStack_58._4_4_ = extraout_var_01._0_4_;
        auVar22 = _auStack_68;
        if (*(char *)((long)&pMVar12->parameters + 4) == '\0') {
          auStack_58._0_4_ = fVar14;
          auStack_58._8_4_ = extraout_var_01._4_4_;
          auStack_58._12_4_ = extraout_var_01._8_4_;
          pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f269;
          fVar14 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
          auVar18._4_4_ = extraout_var_02._0_4_;
          auVar18._0_4_ = fVar14;
          auVar18._8_4_ = extraout_var_02._4_4_;
          auVar18._12_4_ = extraout_var_02._8_4_;
          auVar21._8_4_ = auStack_68._4_4_;
          auVar21._0_8_ = auStack_68;
          auVar21._12_4_ = auStack_58._4_4_;
          auVar20._8_8_ = auVar21._8_8_;
          auVar20._0_4_ = auStack_68._0_4_;
          auVar20._4_4_ = auStack_58._0_4_;
          auStack_58 = auVar20;
          auVar22 = _auStack_68;
          goto joined_r0x0424f27e;
        }
      }
      else {
        uVar6 = *(uint *)&pMVar12->parameters;
        uVar10 = uVar6 << 0xd ^ uVar6;
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        *(uint *)&pMVar12->parameters = uVar10 << 5 ^ uVar10;
        fVar14 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
        auVar22 = ZEXT416((uint)(fVar14 + fVar14 + -1.0));
label_0424f04b:
        uVar6 = *(uint *)&pMVar12->parameters;
        uVar10 = uVar6 << 0xd ^ uVar6;
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        *(uint *)&pMVar12->parameters = uVar10 << 5 ^ uVar10;
        fVar14 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
        fVar14 = fVar14 + fVar14 + -1.0;
        auStack_58._4_4_ = 0;
      }
      uVar6 = *(uint *)&pMVar12->parameters;
      uVar10 = uVar6 << 0xd ^ uVar6;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar12->parameters = uVar10 << 5 ^ uVar10;
      fVar17 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
      auVar18 = ZEXT416((uint)(fVar17 + fVar17 + -1.0));
      auVar19._0_8_ = auVar22._0_8_;
      auVar19._8_4_ = auVar22._4_4_;
      auVar19._12_4_ = auStack_58._4_4_;
      auStack_58._8_8_ = auVar19._8_8_;
      auStack_58._0_4_ = auVar22._0_4_;
      auStack_58._4_4_ = fVar14;
joined_r0x0424f27e:
      if (cVar4 != '\0') {
        auStack_58._4_4_ = 0;
        auStack_58._0_4_ = auVar22._0_4_;
      }
      stack0xffffffffffffff9c = auStack_68._4_12_;
      auStack_68._0_4_ = auVar18._0_4_;
      if (g_data_057a6845 == '\0') {
        pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1e4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar18 = ZEXT416((uint)auStack_68._0_4_);
        g_data_057a6845 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f211;
        il2cpp_runtime_helper_02337ed0();
        auVar18 = ZEXT416((uint)auStack_68._0_4_);
      }
      auVar15._4_12_ = auVar18._4_12_;
      fVar14 = auVar18._0_4_ * auVar18._0_4_ +
               auStack_58._4_4_ * auStack_58._4_4_ + auStack_58._0_4_ * auStack_58._0_4_;
      if (fVar14 < 0.0) {
        pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f180;
        auVar15._0_4_ = sqrtf(fVar14);
        auVar15._4_12_ = extraout_var_00;
        auVar18 = ZEXT416((uint)auStack_68._0_4_);
        fVar14 = auVar15._0_4_;
      }
      else {
        auVar15._0_4_ = SQRT(fVar14);
        fVar14 = auVar15._0_4_;
      }
      if (1e-05 < fVar14) {
        auVar16._0_4_ = auVar15._0_4_;
        auStack_68._0_4_ = auVar18._0_4_ / auVar16._0_4_;
        auVar16._8_4_ = auVar15._8_4_;
        auVar16._12_4_ = auVar15._12_4_;
        auVar16._4_4_ = auVar16._0_4_;
        auStack_58 = divps(auStack_58,auVar16);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f14e;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        auStack_58._8_8_ = 0;
        auStack_58._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        auStack_68._0_4_ = (int)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1];
      }
      pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1b7;
      pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar22 = auStack_58;
      pCStack_70 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1ce;
      value.fields.z = (float)auStack_68._0_4_;
      value.fields.x = (float)auStack_58._0_4_;
      value.fields.y = (float)auStack_58._4_4_;
      auStack_58 = auVar22;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar8;
    }
    if ((int)pSVar2 != 0) {
      pCVar8 = *(CustomLogic_CustomLogicVector3Builtin_o **)&(pCVar8->fields)._containsTypeOverride;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        auStack_58._8_8_ = 0x42507b0;
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_58._8_8_ = 0x42507c2;
      pMVar13 = MethodInfo_Boolean_ConvertTo_Boolean;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar8;
      bVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        ((Il2CppObject *)pCVar8,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
      cVar4 = (char)bVar5;
      goto joined_r0x042507de;
    }
  }
  auStack_58._8_8_ = 0x42507ea;
  uVar9 = il2cpp_runtime_helper_022b2ca0();
  auStack_58._8_8_ = uVar9;
  if (pMVar13 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar13->parameters + 4) == '\0') {
      auStack_58._0_8_ = 0x4250822;
      uVar6 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar6 = *(uint *)&pMVar13->parameters;
      uVar10 = uVar6 << 0xd ^ uVar6;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      *(uint *)&pMVar13->parameters = uVar10 << 5 ^ uVar10;
      uVar6 = (uint)((byte)uVar6 & 1);
    }
    auStack_58._12_4_ = (uVar6 & 0xff) * 2 + -1;
    auStack_58._0_8_ = 0x4250844;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_58 + 0xc);
    return pIVar7;
  }
  auStack_58._0_8_ = 0x425084b;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  lVar11 = auVar22._8_8_;
  uStack_78 = auVar22._0_8_;
  auStack_58._0_8_ = unaff_R15;
  pMStack_60 = pMVar12;
  auStack_68 = (undefined1  [8])unaff_R12;
  pMVar12 = pMVar13;
  pCStack_70 = pCVar8;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar11 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar12 = MethodInfo_Single_ConvertTo_Single;
      fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_78 = CONCAT44(uStack_78._4_4_,fVar14);
      if (1 < *(uint *)(lVar11 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar11 + 0x28);
        pMVar12 = MethodInfo_Single_ConvertTo_Single;
        fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pMVar13 != (MethodInfo *)0x0) {
          fVar14 = UnityEngine_Mathf__PerlinNoise((float)uStack_78,fVar14,(MethodInfo *)0x0);
          uStack_78 = CONCAT44(fVar14,(float)uStack_78);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_78 + 4);
          return pIVar7;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar12);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar12);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomVector3>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42506a0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__object__o *pSVar2;
  char cVar3;
  uint uVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  uint uVar9;
  long lVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  undefined8 *unaff_R12;
  CustomLogic_CustomLogicVector3Builtin_o *unaff_R15;
  float fVar13;
  undefined1 extraout_var [12];
  undefined1 auVar14 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar15 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  UnityEngine_Vector3_o value;
  undefined1 auVar21 [16];
  undefined8 uStack_70;
  CustomLogic_CustomLogicVector3Builtin_o *pCStack_68;
  undefined1 auStack_60 [8];
  MethodInfo *pMStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  System_Object_array *pSStack_38;
  bool_conflict bVar4;
  undefined1 auVar20 [16];
  
  pMVar11 = (MethodInfo *)__c;
  if (g_data_057adb57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb57 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pCVar6 = unaff_R15;
    if ((int)__a->max_length != 0) {
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = &MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      pMVar11 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar6;
      unaff_R15 = (CustomLogic_CustomLogicVector3Builtin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            ((Il2CppObject *)pCVar6,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__a->m_Items[1];
        pMVar11 = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
        pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
        if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
          pCVar6 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3(__c,unaff_R15,pCVar6,method);
          return (Il2CppObject *)pCVar6;
        }
        goto label_04250749;
      }
    }
    unaff_R15 = pCVar6;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250749:
  auVar21 = il2cpp_runtime_helper_022b2c90();
  pCVar6 = auVar21._8_8_;
  uStack_40 = auVar21._0_8_;
  pMVar12 = pMVar11;
  pSStack_38 = __a;
  if (g_data_057adb58 == '\0') {
    auStack_50._8_8_ = 0x425076f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    auStack_50._8_8_ = 0x425077b;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb58 = '\x01';
  }
  if (pCVar6 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_042507e0:
    auStack_50._8_8_ = 0x42507e5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (pCVar6->fields).Variables;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      cVar3 = '\0';
joined_r0x042507de:
      if (pMVar11 == (MethodInfo *)0x0) goto label_042507e0;
      if (g_data_057adb48 == '\0') {
        pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424efe0;
        il2cpp_runtime_helper_023445d0();
        g_data_057adb48 = '\x01';
      }
      if (*(char *)((long)&pMVar11->parameters + 4) == '\0') {
        pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f041;
        auVar21._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auVar21._4_12_ = extraout_var;
        if (*(char *)((long)&pMVar11->parameters + 4) != '\0') goto label_0424f04b;
        pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f23b;
        _auStack_60 = auVar21;
        fVar13 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auStack_50._4_4_ = extraout_var_01._0_4_;
        auVar21 = _auStack_60;
        if (*(char *)((long)&pMVar11->parameters + 4) == '\0') {
          auStack_50._0_4_ = fVar13;
          auStack_50._8_4_ = extraout_var_01._4_4_;
          auStack_50._12_4_ = extraout_var_01._8_4_;
          pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f269;
          fVar13 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
          auVar17._4_4_ = extraout_var_02._0_4_;
          auVar17._0_4_ = fVar13;
          auVar17._8_4_ = extraout_var_02._4_4_;
          auVar17._12_4_ = extraout_var_02._8_4_;
          auVar20._8_4_ = auStack_60._4_4_;
          auVar20._0_8_ = auStack_60;
          auVar20._12_4_ = auStack_50._4_4_;
          auVar19._8_8_ = auVar20._8_8_;
          auVar19._0_4_ = auStack_60._0_4_;
          auVar19._4_4_ = auStack_50._0_4_;
          auStack_50 = auVar19;
          auVar21 = _auStack_60;
          goto joined_r0x0424f27e;
        }
      }
      else {
        uVar5 = *(uint *)&pMVar11->parameters;
        uVar9 = uVar5 << 0xd ^ uVar5;
        uVar9 = uVar9 >> 0x11 ^ uVar9;
        *(uint *)&pMVar11->parameters = uVar9 << 5 ^ uVar9;
        fVar13 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
        auVar21 = ZEXT416((uint)(fVar13 + fVar13 + -1.0));
label_0424f04b:
        uVar5 = *(uint *)&pMVar11->parameters;
        uVar9 = uVar5 << 0xd ^ uVar5;
        uVar9 = uVar9 >> 0x11 ^ uVar9;
        *(uint *)&pMVar11->parameters = uVar9 << 5 ^ uVar9;
        fVar13 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
        fVar13 = fVar13 + fVar13 + -1.0;
        auStack_50._4_4_ = 0;
      }
      uVar5 = *(uint *)&pMVar11->parameters;
      uVar9 = uVar5 << 0xd ^ uVar5;
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      *(uint *)&pMVar11->parameters = uVar9 << 5 ^ uVar9;
      fVar16 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
      auVar17 = ZEXT416((uint)(fVar16 + fVar16 + -1.0));
      auVar18._0_8_ = auVar21._0_8_;
      auVar18._8_4_ = auVar21._4_4_;
      auVar18._12_4_ = auStack_50._4_4_;
      auStack_50._8_8_ = auVar18._8_8_;
      auStack_50._0_4_ = auVar21._0_4_;
      auStack_50._4_4_ = fVar13;
joined_r0x0424f27e:
      if (cVar3 != '\0') {
        auStack_50._4_4_ = 0;
        auStack_50._0_4_ = auVar21._0_4_;
      }
      stack0xffffffffffffffa4 = auStack_60._4_12_;
      auStack_60._0_4_ = auVar17._0_4_;
      if (g_data_057a6845 == '\0') {
        pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1e4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar17 = ZEXT416((uint)auStack_60._0_4_);
        g_data_057a6845 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f211;
        il2cpp_runtime_helper_02337ed0();
        auVar17 = ZEXT416((uint)auStack_60._0_4_);
      }
      auVar14._4_12_ = auVar17._4_12_;
      fVar13 = auVar17._0_4_ * auVar17._0_4_ +
               auStack_50._4_4_ * auStack_50._4_4_ + auStack_50._0_4_ * auStack_50._0_4_;
      if (fVar13 < 0.0) {
        pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f180;
        auVar14._0_4_ = sqrtf(fVar13);
        auVar14._4_12_ = extraout_var_00;
        auVar17 = ZEXT416((uint)auStack_60._0_4_);
        fVar13 = auVar14._0_4_;
      }
      else {
        auVar14._0_4_ = SQRT(fVar13);
        fVar13 = auVar14._0_4_;
      }
      if (1e-05 < fVar13) {
        auVar15._0_4_ = auVar14._0_4_;
        auStack_60._0_4_ = auVar17._0_4_ / auVar15._0_4_;
        auVar15._8_4_ = auVar14._8_4_;
        auVar15._12_4_ = auVar14._12_4_;
        auVar15._4_4_ = auVar15._0_4_;
        auStack_50 = divps(auStack_50,auVar15);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f14e;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        auStack_50._8_8_ = 0;
        auStack_50._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        auStack_60._0_4_ = (int)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1];
      }
      pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1b7;
      pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar21 = auStack_50;
      pCStack_68 = (CustomLogic_CustomLogicVector3Builtin_o *)0x424f1ce;
      value.fields.z = (float)auStack_60._0_4_;
      value.fields.x = (float)auStack_50._0_4_;
      value.fields.y = (float)auStack_50._4_4_;
      auStack_50 = auVar21;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar6,value,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar6;
    }
    if ((int)pSVar2 != 0) {
      pCVar6 = *(CustomLogic_CustomLogicVector3Builtin_o **)&(pCVar6->fields)._containsTypeOverride;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        auStack_50._8_8_ = 0x42507b0;
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_50._8_8_ = 0x42507c2;
      pMVar12 = MethodInfo_Boolean_ConvertTo_Boolean;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)pCVar6;
      bVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        ((Il2CppObject *)pCVar6,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
      cVar3 = (char)bVar4;
      goto joined_r0x042507de;
    }
  }
  auStack_50._8_8_ = 0x42507ea;
  uVar7 = il2cpp_runtime_helper_022b2ca0();
  auStack_50._8_8_ = uVar7;
  if (pMVar12 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar12->parameters + 4) == '\0') {
      auStack_50._0_8_ = 0x4250822;
      uVar5 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar5 = *(uint *)&pMVar12->parameters;
      uVar9 = uVar5 << 0xd ^ uVar5;
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      *(uint *)&pMVar12->parameters = uVar9 << 5 ^ uVar9;
      uVar5 = (uint)((byte)uVar5 & 1);
    }
    auStack_50._12_4_ = (uVar5 & 0xff) * 2 + -1;
    auStack_50._0_8_ = 0x4250844;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_50 + 0xc);
    return pIVar8;
  }
  auStack_50._0_8_ = 0x425084b;
  auVar21 = il2cpp_runtime_helper_022b2c90();
  lVar10 = auVar21._8_8_;
  uStack_70 = auVar21._0_8_;
  auStack_50._0_8_ = unaff_R15;
  pMStack_58 = pMVar11;
  auStack_60 = (undefined1  [8])unaff_R12;
  pMVar11 = pMVar12;
  pCStack_68 = pCVar6;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar10 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar11 = MethodInfo_Single_ConvertTo_Single;
      fVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_70 = CONCAT44(uStack_70._4_4_,fVar13);
      if (1 < *(uint *)(lVar10 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar10 + 0x28);
        pMVar11 = MethodInfo_Single_ConvertTo_Single;
        fVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pMVar12 != (MethodInfo *)0x0) {
          fVar13 = UnityEngine_Mathf__PerlinNoise((float)uStack_70,fVar13,(MethodInfo *)0x0);
          uStack_70 = CONCAT44(fVar13,(float)uStack_70);
          pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
          return pIVar8;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar11);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,pMVar11);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomDirection>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4250750

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  uint uVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  uint uVar7;
  long lVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  undefined8 unaff_R15;
  float fVar10;
  undefined1 extraout_var [12];
  undefined1 auVar11 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar12 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o value;
  undefined1 auVar17 [16];
  undefined8 uStack_48;
  System_Object_array *pSStack_40;
  undefined1 auStack_28 [16];
  undefined8 uStack_20;
  bool_conflict bVar3;
  
  pMVar9 = (MethodInfo *)__c;
  if (g_data_057adb58 == '\0') {
    uStack_20 = 0x425076f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    uStack_20 = 0x425077b;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb58 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_042507e0:
    uStack_20 = 0x42507e5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (__a->max_length == 0) {
      cVar2 = '\0';
joined_r0x042507de:
      if (__c == (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) goto label_042507e0;
      if (g_data_057adb48 == '\0') {
        pSStack_40 = (System_Object_array *)0x424efe0;
        il2cpp_runtime_helper_023445d0();
        g_data_057adb48 = '\x01';
      }
      if ((char)(__c->fields).UseInstanceRandom == '\0') {
        pSStack_40 = (System_Object_array *)0x424f041;
        auVar17._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auVar17._4_12_ = extraout_var;
        if ((char)(__c->fields).UseInstanceRandom != '\0') goto label_0424f04b;
        pSStack_40 = (System_Object_array *)0x424f23b;
        fVar10 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auStack_28._0_4_ = extraout_var_01._0_4_;
        if ((char)(__c->fields).UseInstanceRandom == '\0') {
          auStack_28._4_4_ = auStack_28._0_4_;
          auStack_28._0_4_ = fVar10;
          uStack_20._0_4_ = extraout_var_01._4_4_;
          uStack_20._4_4_ = extraout_var_01._8_4_;
          pSStack_40 = (System_Object_array *)0x424f269;
          fVar10 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
          auVar14._4_4_ = extraout_var_02._0_4_;
          auVar14._0_4_ = fVar10;
          auVar14._8_4_ = extraout_var_02._4_4_;
          auVar14._12_4_ = extraout_var_02._8_4_;
          auVar16._8_4_ = extraout_var._0_4_;
          auVar16._0_8_ = auVar17._0_8_;
          auVar16._12_4_ = auStack_28._4_4_;
          uStack_20 = auVar16._8_8_;
          auStack_28._4_4_ = auStack_28._0_4_;
          auStack_28._0_4_ = auVar17._0_4_;
          goto joined_r0x0424f27e;
        }
      }
      else {
        uVar4 = (__c->fields).Rand.fields.state;
        uVar7 = uVar4 << 0xd ^ uVar4;
        uVar7 = uVar7 >> 0x11 ^ uVar7;
        (__c->fields).Rand.fields.state = uVar7 << 5 ^ uVar7;
        fVar10 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
        auVar17 = ZEXT416((uint)(fVar10 + fVar10 + -1.0));
label_0424f04b:
        uVar4 = (__c->fields).Rand.fields.state;
        uVar7 = uVar4 << 0xd ^ uVar4;
        uVar7 = uVar7 >> 0x11 ^ uVar7;
        (__c->fields).Rand.fields.state = uVar7 << 5 ^ uVar7;
        fVar10 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
        fVar10 = fVar10 + fVar10 + -1.0;
        auStack_28._0_4_ = 0;
      }
      uVar4 = (__c->fields).Rand.fields.state;
      uVar7 = uVar4 << 0xd ^ uVar4;
      uVar7 = uVar7 >> 0x11 ^ uVar7;
      (__c->fields).Rand.fields.state = uVar7 << 5 ^ uVar7;
      fVar13 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
      auVar14 = ZEXT416((uint)(fVar13 + fVar13 + -1.0));
      auVar15._0_8_ = auVar17._0_8_;
      auVar15._8_4_ = auVar17._4_4_;
      auVar15._12_4_ = auStack_28._0_4_;
      uStack_20 = auVar15._8_8_;
      auStack_28._0_4_ = auVar17._0_4_;
      auStack_28._4_4_ = fVar10;
joined_r0x0424f27e:
      if (cVar2 != '\0') {
        auStack_28._4_4_ = 0;
        auStack_28._0_4_ = auVar17._0_4_;
      }
      uVar4 = auVar14._0_4_;
      if (g_data_057a6845 == '\0') {
        pSStack_40 = (System_Object_array *)0x424f1e4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar14 = ZEXT416(uVar4);
        g_data_057a6845 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        pSStack_40 = (System_Object_array *)0x424f211;
        il2cpp_runtime_helper_02337ed0();
        auVar14 = ZEXT416(uVar4);
      }
      auVar11._4_12_ = auVar14._4_12_;
      fVar10 = auVar14._0_4_ * auVar14._0_4_ +
               auStack_28._4_4_ * auStack_28._4_4_ + auStack_28._0_4_ * auStack_28._0_4_;
      if (fVar10 < 0.0) {
        pSStack_40 = (System_Object_array *)0x424f180;
        auVar11._0_4_ = sqrtf(fVar10);
        auVar11._4_12_ = extraout_var_00;
        auVar14 = ZEXT416(uVar4);
        fVar10 = auVar11._0_4_;
      }
      else {
        auVar11._0_4_ = SQRT(fVar10);
        fVar10 = auVar11._0_4_;
      }
      if (1e-05 < fVar10) {
        auVar12._0_4_ = auVar11._0_4_;
        fVar10 = auVar14._0_4_ / auVar12._0_4_;
        auVar12._8_4_ = auVar11._8_4_;
        auVar12._12_4_ = auVar11._12_4_;
        auVar12._4_4_ = auVar12._0_4_;
        auStack_28 = divps(auStack_28,auVar12);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          pSStack_40 = (System_Object_array *)0x424f14e;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uStack_20 = 0;
        auStack_28._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        fVar10 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      pSStack_40 = (System_Object_array *)0x424f1b7;
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      auVar17 = auStack_28;
      pSStack_40 = (System_Object_array *)0x424f1ce;
      value.fields.z = fVar10;
      auStack_28._4_4_ = (undefined4)(auStack_28._0_8_ >> 0x20);
      value.fields.x = (float)auStack_28._0_4_;
      value.fields.y = (float)auStack_28._4_4_;
      auStack_28 = auVar17;
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
    if ((int)__a->max_length != 0) {
      __a = (System_Object_array *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_20 = 0x42507b0;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_20 = 0x42507c2;
      pMVar9 = MethodInfo_Boolean_ConvertTo_Boolean;
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__a;
      bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        ((Il2CppObject *)__a,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
      cVar2 = (char)bVar3;
      goto joined_r0x042507de;
    }
  }
  uStack_20 = 0x42507ea;
  uVar5 = il2cpp_runtime_helper_022b2ca0();
  uStack_20 = uVar5;
  if (pMVar9 != (MethodInfo *)0x0) {
    if (*(char *)((long)&pMVar9->parameters + 4) == '\0') {
      auStack_28._0_8_ = 0x4250822;
      uVar4 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar4 = *(uint *)&pMVar9->parameters;
      uVar7 = uVar4 << 0xd ^ uVar4;
      uVar7 = uVar7 >> 0x11 ^ uVar7;
      *(uint *)&pMVar9->parameters = uVar7 << 5 ^ uVar7;
      uVar4 = (uint)((byte)uVar4 & 1);
    }
    uStack_20._4_4_ = (uVar4 & 0xff) * 2 + -1;
    auStack_28._0_8_ = 0x4250844;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return pIVar6;
  }
  auVar17 = il2cpp_runtime_helper_022b2c90();
  lVar8 = auVar17._8_8_;
  uStack_48 = auVar17._0_8_;
  auStack_28._0_8_ = unaff_R15;
  method_00 = pMVar9;
  pSStack_40 = __a;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar8 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_Single_ConvertTo_Single;
      fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_48 = CONCAT44(uStack_48._4_4_,fVar10);
      if (1 < *(uint *)(lVar8 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar8 + 0x28);
        method_00 = MethodInfo_Single_ConvertTo_Single;
        fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (pMVar9 != (MethodInfo *)0x0) {
          fVar10 = UnityEngine_Mathf__PerlinNoise((float)uStack_48,fVar10,(MethodInfo *)0x0);
          uStack_48 = CONCAT44(fVar10,(float)uStack_48);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
          return pIVar6;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomSign>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x42507f0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  uint uVar3;
  long lVar4;
  MethodInfo *method_00;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  undefined1 auStack_4 [4];
  
  if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    if ((char)(__c->fields).UseInstanceRandom == '\0') {
      Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar3 = (__c->fields).Rand.fields.state;
      uVar3 = uVar3 << 0xd ^ uVar3;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      (__c->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar2;
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  lVar4 = auVar6._8_8_;
  uStack_30 = auVar6._0_8_;
  method_00 = (MethodInfo *)__c;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar4 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_Single_ConvertTo_Single;
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_30 = CONCAT44(uStack_30._4_4_,fVar5);
      if (1 < *(uint *)(lVar4 + 0x18)) {
        __this = *(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o **)(lVar4 + 0x28);
        method_00 = MethodInfo_Single_ConvertTo_Single;
        fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if ((MethodInfo *)__c != (MethodInfo *)0x0) {
          fVar5 = UnityEngine_Mathf__PerlinNoise((float)uStack_30,fVar5,(MethodInfo *)0x0);
          uStack_30 = CONCAT44(fVar5,(float)uStack_30);
          pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_30 + 4);
          return pIVar2;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__PerlinNoise>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4250850

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo *method_00;
  float fVar3;
  undefined8 uStack_28;
  
  method_00 = (MethodInfo *)__c;
  uStack_28 = in_RAX;
  if (g_data_057adb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb59 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_Single_ConvertTo_Single;
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
      uStack_28 = CONCAT44(uStack_28._4_4_,fVar3);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__a->m_Items[1];
        method_00 = MethodInfo_Single_ConvertTo_Single;
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
        if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
          fVar3 = UnityEngine_Mathf__PerlinNoise((float)uStack_28,fVar3,(MethodInfo *)0x0);
          uStack_28 = CONCAT44(fVar3,(float)uStack_28);
          pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
          return pIVar2;
        }
        goto label_04250920;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04250920:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb5a = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x424f530

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object____object__o *pSVar6;
  CustomLogic_CLMethodBinding_T__o *pCVar7;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057adb4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"RandomBool");
    il2cpp_runtime_helper_023445d0(&"RandomDirection");
    il2cpp_runtime_helper_023445d0(&"PerlinNoise");
    il2cpp_runtime_helper_023445d0(&"RandomFloat");
    il2cpp_runtime_helper_023445d0(&"RandomVector3");
    il2cpp_runtime_helper_023445d0(&"RandomInt");
    il2cpp_runtime_helper_023445d0(&"RandomSign");
    g_data_057adb4b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x90354281) {
    if (uVar3 == 0x82de4eee) {
      bVar4 = System_String__op_Equality(name,"RandomVector3",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomVector3_b__5_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb4f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if (uVar3 == 0x885c07e3) {
      bVar4 = System_String__op_Equality(name,"PerlinNoise",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb52 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PerlinNoise_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb52 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0x90354280) &&
            (bVar4 = System_String__op_Equality(name,"RandomFloat",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb4d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomFloat_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb4d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 < 0xb5b881f8) {
    if (uVar3 == 0x91b5efce) {
      bVar4 = System_String__op_Equality(name,"RandomBool",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057adb4e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomBool_b__4_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057adb4e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar6);
        }
        pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar7;
      }
    }
    else if ((uVar3 == 0xb5b881f7) &&
            (bVar4 = System_String__op_Equality(name,"RandomDirection",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb50 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomDirection_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb50 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if (uVar3 == 0xfb77f8cf) {
    bVar4 = System_String__op_Equality(name,"RandomSign",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adb51 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomSign_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adb51 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
      }
      pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar3 == 0xfa877c5b) &&
          (bVar4 = System_String__op_Equality(name,"RandomInt",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicRandomBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057adb4c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f965;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f971;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomInt_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb4c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f9ac;
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f8fb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f917;
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f931;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f94b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f9d2;
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x424f9ea;
  CustomLogic_CLMethodBinding_object____ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt (const MethodInfo* method);
// 0x424f8b0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb4c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomInt_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb4c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat (const MethodInfo* method);
// 0x424fa00

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomFloat_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb4d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool (const MethodInfo* method);
// 0x424fb50

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomBool_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb4e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomVector3
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3 (const MethodInfo* method);
// 0x424fca0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomVector3_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb4f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection (const MethodInfo* method);
// 0x424fdf0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb50 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomDirection_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb50 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomSign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign (const MethodInfo* method);
// 0x424ff40

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RandomSign_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb51 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__PerlinNoise
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise (const MethodInfo* method);
// 0x4250090

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (g_data_057adb52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__PerlinNoise_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb52 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicRandomBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x42501e0

void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057adb53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"RandomBool");
    il2cpp_runtime_helper_023445d0(&"RandomDirection");
    il2cpp_runtime_helper_023445d0(&"PerlinNoise");
    il2cpp_runtime_helper_023445d0(&"RandomFloat");
    il2cpp_runtime_helper_023445d0(&"RandomVector3");
    il2cpp_runtime_helper_023445d0(&"RandomInt");
    il2cpp_runtime_helper_023445d0(&"RandomSign");
    g_data_057adb53 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"RandomInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RandomFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RandomBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RandomVector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RandomDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"RandomSign",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"PerlinNoise",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adb54 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424ec50

void CustomLogic_CustomLogicRandomBuiltin___ctor
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057adb45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb45 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t seed, const MethodInfo* method);
// 0x424ecb0

void CustomLogic_CustomLogicRandomBuiltin___ctor_414ecb0
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t seed,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  undefined4 in_register_00000034;
  
  iVar2 = seed;
  if (g_data_057adb46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb46 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar2));
  uVar1 = seed << 0xd ^ seed;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  (__this->fields).Rand.fields.state = uVar1 << 5 ^ uVar1;
  *(undefined1 *)&(__this->fields).UseInstanceRandom = 1;
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomInt
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t min, int32_t max, const MethodInfo* method);
// 0x424ed20

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t min,int32_t max,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  uint uVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    return (int)((ulong)(uint)(max - min) * (ulong)uVar1 >> 0x20) + min;
  }
  iVar2 = UnityEngine_Random__Range_4df2410(min,max,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomFloat
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__RandomFloat (CustomLogic_CustomLogicRandomBuiltin_o* __this, float min, float max, const MethodInfo* method);
// 0x424ed60

float CustomLogic_CustomLogicRandomBuiltin__RandomFloat
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float min,float max,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = uVar1 << 0xd ^ uVar1;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    return (max - min) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + min;
  }
  fVar3 = UnityEngine_Random__Range(min,max,(MethodInfo *)0x0);
  return fVar3;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomBool
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__RandomBool (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424edb0

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__RandomBool
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    return uVar1 & 0xffffff01;
  }
  bVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomVector3
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomVector3 (CustomLogic_CustomLogicRandomBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x424ede0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomVector3
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *a,
          CustomLogic_CustomLogicVector3Builtin_o *b,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  uint uVar4;
  char cVar5;
  CustomLogic_CustomLogicRandomBuiltin_o *pCVar6;
  undefined4 uVar9;
  undefined1 extraout_var [12];
  undefined1 auVar7 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar8 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined8 local_70;
  float local_3c;
  undefined1 auVar15 [16];
  
  pCVar3 = a;
  pCVar6 = __this;
  if (g_data_057adb47 == '\0') {
    pCVar6 = (CustomLogic_CustomLogicRandomBuiltin_o *)&TypeInfo_CustomLogicVector3Builtin;
    il2cpp_runtime_helper_023445d0();
    g_data_057adb47 = '\x01';
  }
  cVar5 = (char)pCVar3;
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adb48 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057adb48 = '\x01';
    }
    if ((char)(pCVar6->fields).UseInstanceRandom == '\0') {
      auVar16._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
      auVar16._4_12_ = extraout_var;
      if ((char)(pCVar6->fields).UseInstanceRandom != '\0') goto label_0424f04b;
      fVar10 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
      uVar9 = extraout_var_01._0_4_;
      if ((char)(pCVar6->fields).UseInstanceRandom == '\0') {
        fVar13 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
        auVar12._4_4_ = extraout_var_02._0_4_;
        auVar12._0_4_ = fVar13;
        auVar12._8_4_ = extraout_var_02._4_4_;
        auVar12._12_4_ = extraout_var_02._8_4_;
        auVar17._8_4_ = extraout_var._0_4_;
        auVar17._0_8_ = auVar16._0_8_;
        auVar17._12_4_ = uVar9;
        auVar14._8_8_ = auVar17._8_8_;
        auVar14._4_4_ = fVar10;
        auVar14._0_4_ = auVar16._0_4_;
        goto joined_r0x0424f27e;
      }
    }
    else {
      uVar11 = (pCVar6->fields).Rand.fields.state;
      uVar4 = uVar11 << 0xd ^ uVar11;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      (pCVar6->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
      fVar10 = (float)(uVar11 >> 9 | 0x3f800000) + -1.0;
      auVar16 = ZEXT416((uint)(fVar10 + fVar10 + -1.0));
label_0424f04b:
      uVar11 = (pCVar6->fields).Rand.fields.state;
      uVar4 = uVar11 << 0xd ^ uVar11;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      (pCVar6->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
      fVar10 = (float)(uVar11 >> 9 | 0x3f800000) + -1.0;
      fVar10 = fVar10 + fVar10 + -1.0;
      uVar9 = 0;
    }
    uVar11 = (pCVar6->fields).Rand.fields.state;
    uVar4 = uVar11 << 0xd ^ uVar11;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    (pCVar6->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
    fVar13 = (float)(uVar11 >> 9 | 0x3f800000) + -1.0;
    auVar12 = ZEXT416((uint)(fVar13 + fVar13 + -1.0));
    auVar15._0_8_ = auVar16._0_8_;
    auVar15._8_4_ = auVar16._4_4_;
    auVar15._12_4_ = uVar9;
    auVar14._8_8_ = auVar15._8_8_;
    auVar14._0_4_ = auVar16._0_4_;
    auVar14._4_4_ = fVar10;
joined_r0x0424f27e:
    if (cVar5 != '\0') {
      auVar14._4_4_ = 0;
      auVar14._0_4_ = auVar16._0_4_;
    }
    uVar11 = auVar12._0_4_;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      auVar12 = ZEXT416(uVar11);
      g_data_057a6845 = '\x01';
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      auVar12 = ZEXT416(uVar11);
    }
    auVar7._4_12_ = auVar12._4_12_;
    fVar10 = auVar12._0_4_ * auVar12._0_4_ + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
    if (fVar10 < 0.0) {
      auVar7._0_4_ = sqrtf(fVar10);
      auVar7._4_12_ = extraout_var_00;
      auVar12 = ZEXT416(uVar11);
      fVar10 = auVar7._0_4_;
    }
    else {
      auVar7._0_4_ = SQRT(fVar10);
      fVar10 = auVar7._0_4_;
    }
    if (1e-05 < fVar10) {
      auVar8._0_4_ = auVar7._0_4_;
      fVar10 = auVar12._0_4_ / auVar8._0_4_;
      auVar8._8_4_ = auVar7._8_4_;
      auVar8._12_4_ = auVar7._12_4_;
      auVar8._4_4_ = auVar8._0_4_;
      auVar16 = divps(auVar14,auVar8);
      local_70 = auVar16._0_8_;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      local_70 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar10 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_00.fields.z = fVar10;
    value_00.fields.x = (float)(undefined4)local_70;
    value_00.fields.y = (float)local_70._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar3,value_00,(MethodInfo *)0x0);
    return pCVar3;
  }
  fVar10 = (a->fields).Value.fields.x;
  fVar13 = (b->fields).Value.fields.x;
  if ((char)(__this->fields).UseInstanceRandom == '\0') {
    fVar10 = UnityEngine_Random__Range(fVar10,fVar13,(MethodInfo *)0x0);
    fVar13 = (a->fields).Value.fields.y;
    fVar1 = (b->fields).Value.fields.y;
    if ((char)(__this->fields).UseInstanceRandom != '\0') goto label_0424ee9e;
    fVar13 = UnityEngine_Random__Range(fVar13,fVar1,(MethodInfo *)0x0);
    local_3c = (a->fields).Value.fields.z;
    fVar1 = (b->fields).Value.fields.z;
    if ((char)(__this->fields).UseInstanceRandom == '\0') {
      local_3c = UnityEngine_Random__Range(local_3c,fVar1,(MethodInfo *)0x0);
      goto label_0424ef26;
    }
  }
  else {
    uVar11 = (__this->fields).Rand.fields.state;
    uVar4 = uVar11 << 0xd ^ uVar11;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    (__this->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
    fVar10 = (fVar13 - fVar10) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) + fVar10;
    fVar13 = (a->fields).Value.fields.y;
    fVar1 = (b->fields).Value.fields.y;
label_0424ee9e:
    uVar11 = (__this->fields).Rand.fields.state;
    uVar4 = uVar11 << 0xd ^ uVar11;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    (__this->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
    fVar13 = (fVar1 - fVar13) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) + fVar13;
    local_3c = (a->fields).Value.fields.z;
    fVar1 = (b->fields).Value.fields.z;
  }
  uVar11 = (__this->fields).Rand.fields.state;
  uVar4 = uVar11 << 0xd ^ uVar11;
  uVar4 = uVar4 >> 0x11 ^ uVar4;
  (__this->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
  local_3c = (fVar1 - local_3c) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) + local_3c;
label_0424ef26:
  value.fields.y = fVar13;
  value.fields.x = fVar10;
  pCVar3 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  value.fields.z = local_3c;
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar3,value,(MethodInfo *)0x0);
  return pCVar3;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomDirection (CustomLogic_CustomLogicRandomBuiltin_o* __this, bool _flat, const MethodInfo* method);
// 0x424efc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomDirection
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,bool_conflict _flat,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  uint uVar2;
  float fVar3;
  undefined4 uVar6;
  undefined1 extraout_var [12];
  undefined1 auVar4 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar5 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o value;
  undefined8 uStack_28;
  undefined1 auVar11 [16];
  
  if (g_data_057adb48 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057adb48 = '\x01';
  }
  if ((char)(__this->fields).UseInstanceRandom == '\0') {
    auVar12._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
    auVar12._4_12_ = extraout_var;
    if ((char)(__this->fields).UseInstanceRandom != '\0') goto label_0424f04b;
    fVar3 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
    uVar6 = extraout_var_01._0_4_;
    if ((char)(__this->fields).UseInstanceRandom == '\0') {
      fVar7 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
      auVar9._4_4_ = extraout_var_02._0_4_;
      auVar9._0_4_ = fVar7;
      auVar9._8_4_ = extraout_var_02._4_4_;
      auVar9._12_4_ = extraout_var_02._8_4_;
      auVar13._8_4_ = extraout_var._0_4_;
      auVar13._0_8_ = auVar12._0_8_;
      auVar13._12_4_ = uVar6;
      auVar10._8_8_ = auVar13._8_8_;
      auVar10._4_4_ = fVar3;
      auVar10._0_4_ = auVar12._0_4_;
      goto joined_r0x0424f27e;
    }
  }
  else {
    uVar8 = (__this->fields).Rand.fields.state;
    uVar2 = uVar8 << 0xd ^ uVar8;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    fVar3 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
    auVar12 = ZEXT416((uint)(fVar3 + fVar3 + -1.0));
label_0424f04b:
    uVar8 = (__this->fields).Rand.fields.state;
    uVar2 = uVar8 << 0xd ^ uVar8;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    fVar3 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
    fVar3 = fVar3 + fVar3 + -1.0;
    uVar6 = 0;
  }
  uVar8 = (__this->fields).Rand.fields.state;
  uVar2 = uVar8 << 0xd ^ uVar8;
  uVar2 = uVar2 >> 0x11 ^ uVar2;
  (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
  fVar7 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
  auVar9 = ZEXT416((uint)(fVar7 + fVar7 + -1.0));
  auVar11._0_8_ = auVar12._0_8_;
  auVar11._8_4_ = auVar12._4_4_;
  auVar11._12_4_ = uVar6;
  auVar10._8_8_ = auVar11._8_8_;
  auVar10._0_4_ = auVar12._0_4_;
  auVar10._4_4_ = fVar3;
joined_r0x0424f27e:
  if ((char)_flat != '\0') {
    auVar10._4_4_ = 0;
    auVar10._0_4_ = auVar12._0_4_;
  }
  uVar8 = auVar9._0_4_;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    auVar9 = ZEXT416(uVar8);
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    auVar9 = ZEXT416(uVar8);
  }
  auVar4._4_12_ = auVar9._4_12_;
  fVar3 = auVar9._0_4_ * auVar9._0_4_ + auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
  if (fVar3 < 0.0) {
    auVar4._0_4_ = sqrtf(fVar3);
    auVar4._4_12_ = extraout_var_00;
    auVar9 = ZEXT416(uVar8);
    fVar3 = auVar4._0_4_;
  }
  else {
    auVar4._0_4_ = SQRT(fVar3);
    fVar3 = auVar4._0_4_;
  }
  if (1e-05 < fVar3) {
    auVar5._0_4_ = auVar4._0_4_;
    fVar3 = auVar9._0_4_ / auVar5._0_4_;
    auVar5._8_4_ = auVar4._8_4_;
    auVar5._12_4_ = auVar4._12_4_;
    auVar5._4_4_ = auVar5._0_4_;
    auVar12 = divps(auVar10,auVar5);
    uStack_28 = auVar12._0_8_;
  }
  else {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uStack_28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
  value.fields.z = fVar3;
  value.fields.x = (float)(undefined4)uStack_28;
  value.fields.y = (float)uStack_28._4_4_;
  CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_00,value,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomSign
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424f290

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar2 = (__this->fields).Rand.fields.state;
    uVar3 = uVar2 << 0xd ^ uVar2;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    bVar1 = (byte)uVar2 & 1;
    return (uint)bVar1 + (uint)bVar1 + -1;
  }
  uVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  return (uVar2 & 0xff) * 2 + -1;
}


// CustomLogic.CustomLogicRandomBuiltin$$PerlinNoise
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise (CustomLogic_CustomLogicRandomBuiltin_o* __this, float x, float y, const MethodInfo* method);
// 0x424f2e0

float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRandomBuiltin__get_ClassName (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424f2f0

System_String_o *
CustomLogic_CustomLogicRandomBuiltin__get_ClassName
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057adb49 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Random");
    g_data_057adb49 = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424f320

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsStatic (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424f330

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRandomBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x424f340

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


