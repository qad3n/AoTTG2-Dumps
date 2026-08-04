// Type: CustomLogic.CustomLogicSliderBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSliderBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41f0d10

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *pSVar10;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  System_ArgumentException_o **ppSVar13;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicSliderBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSliderBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad847 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"IsIntSlider");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"PageSize");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ShowInputField");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    il2cpp_runtime_helper_023445d0(&"Direction");
    g_data_057ad847 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x86253654) {
    if (uVar3 < 0x3a2089b8) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad84a == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84a = '\x01';
            message = pSStack_28;
          }
          pSStack_28 = message;
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          System_Action_object__object____ctor();
          pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x3a2089b7) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"PageSize",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad84c == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PageSize_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PageSize_g____setter_6_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad84c = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x86253653) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"IsIntSlider",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ad84f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsIntSlider_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad84f = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x4c979c42) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"HighValue",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad84b == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad84b = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x61fefc0a) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Direction",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad84d == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Direction_g____getter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Direction_g____setter_7_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
        g_data_057ad84d = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0xacc881fd) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        goto CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label;
      }
    }
    else if ((uVar3 == 0xacc881fc) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ShowInputField",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad84e == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShowInputField_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShowInputField_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
        g_data_057ad84e = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad849 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
        g_data_057ad849 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad851 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__1);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad851 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ad850 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__10_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad850 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = message;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar12 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar12 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
    }
    pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSliderBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar8;
  if (g_data_057ad848 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f127a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f1286;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f1292;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f129e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f12aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f12b6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad848 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f12cc;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f12e5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f12f4;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f130d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f131c;
  pCVar11 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41f1337;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41f2480

void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad85a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41f24f0

void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41f2500

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_UserMethod_o *pCVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  
  visualElement = (UnityEngine_UIElements_VisualElement_o *)__c;
  if (g_data_057ad85b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this = (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad85b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041f258b:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    visualElement = MethodInfo_UserMethod_ConvertTo_UserMethod;
    pCVar1 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      il2cpp_runtime_helper_022b4080(&(__c->fields)._valueChangedEvent,pCVar1);
      return (Il2CppObject *)__c;
    }
    goto label_041f258b;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (method_00 != (MethodInfo *)0x0) {
    if (*(int *)&method_00->name == 0) goto label_041f25c6;
    __this = (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *)0x0;
    if (visualElement != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify
                ((CustomLogic_CustomLogicSliderBuiltin_o *)visualElement,(Il2CppObject *)method_00->klass,
                 method_00);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041f25c6:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  pIVar2 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),
                              visualElement);
  return pIVar2;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41f25a0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041f25c6;
    __this = (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041f25c6:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)__c,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)__c;
  pIVar1 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),__c);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41f0da0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined8 *puStack_18;
  
  if (g_data_057ad847 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"IsIntSlider");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"PageSize");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ShowInputField");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    il2cpp_runtime_helper_023445d0(&"Direction");
    g_data_057ad847 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x86253654) {
    if (uVar3 < 0x3a2089b8) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad84a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84a = '\x01';
          }
          pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          System_Func_object__object____ctor();
          pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x3a2089b7) &&
              (bVar4 = System_String__op_Equality(name,"PageSize",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad84c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PageSize_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PageSize_g____setter_6_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad84c = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x86253653) {
      bVar4 = System_String__op_Equality(name,"IsIntSlider",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad84f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsIntSlider_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad84f = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar6,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x4c979c42) {
      bVar4 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad84b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad84b = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x61fefc0a) &&
            (bVar4 = System_String__op_Equality(name,"Direction",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad84d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Direction_g____getter_7);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Direction_g____setter_7_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
        g_data_057ad84d = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xacc881fd) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label;
      }
    }
    else if ((uVar3 == 0xacc881fc) &&
            (bVar4 = System_String__op_Equality(name,"ShowInputField",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad84e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShowInputField_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShowInputField_g____setter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
        g_data_057ad84e = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad849 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
        g_data_057ad849 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad851 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__1);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad851 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad850 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__10_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad850 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSliderBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad848 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f127a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f1286;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f1292;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f129e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f12aa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f12b6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad848 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f12cc;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f12e5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f12f4;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f130d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f131c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41f1337;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x41f1260

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad848 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad848 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x41f1340

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad849 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad849 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x41f1420

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad84a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad84a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x41f1500

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad84b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad84b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__PageSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize (const MethodInfo* method);
// 0x41f15e0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad84c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PageSize_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PageSize_g____setter_6_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad84c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Direction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction (const MethodInfo* method);
// 0x41f16c0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad84d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Direction_g____getter_7);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Direction_g____setter_7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad84d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__ShowInputField
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField (const MethodInfo* method);
// 0x41f17a0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad84e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShowInputField_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShowInputField_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad84e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__IsIntSlider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider (const MethodInfo* method);
// 0x41f1880

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad84f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsIntSlider_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
    g_data_057ad84f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x41f1920

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad850 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad850 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x41f1a70

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (g_data_057ad851 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad851 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41f1bc0

void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  System_String_c *pSVar1;
  void *pvVar2;
  UnityEngine_UIElements_BaseField_int__o *__this;
  System_Collections_Generic_HashSet_Slot_T__array *__this_00;
  InvokerMethod pIVar3;
  UnityEngine_UIElements_Slider_o *pUVar4;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar5;
  bool_conflict bVar6;
  undefined4 uVar7;
  uint uVar8;
  float *pfVar9;
  Il2CppClass **ppIVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Type_o *enumType;
  System_String_o *pSVar13;
  System_ArgumentException_o *__this_01;
  undefined8 uVar14;
  System_Collections_Generic_HashSet_object__o *pSVar15;
  MethodInfo_33E0570 *value;
  Il2CppObject *pIVar16;
  MethodInfo *method_00;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar17;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar18;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar19;
  undefined1 *puVar20;
  undefined8 unaff_RBP;
  int32_t iVar21;
  Il2CppObject *pIVar22;
  undefined8 *puVar23;
  MethodInfo_33E0570 *pMVar24;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar25;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar26;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar27;
  long *plVar28;
  System_Collections_Generic_HashSet_object__o *pSVar29;
  long lVar30;
  MethodInfo_33E0570 *pMVar31;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar32;
  undefined1 __this_02 [8];
  MethodInfo_24EED20 *pMVar33;
  long lVar34;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar35;
  undefined1 auVar36 [16];
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  MethodInfo_24EED20 *pMStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_e8 [3];
  undefined1 auStack_d0 [12];
  int32_t iStack_c4;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_c0;
  undefined8 uStack_b8;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_b0;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_90;
  undefined1 auStack_88 [8];
  Il2CppObject *pIStack_80;
  Il2CppObject *pIStack_78;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_70;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  
  if (g_data_057ad852 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"IsIntSlider");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"PageSize");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ShowInputField");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    il2cpp_runtime_helper_023445d0(&"Direction");
    g_data_057ad852 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pMVar24 = MethodInfo_HashSet_1_System_String;
  pSVar29 = pSVar15;
  System_Collections_Generic_HashSet_object____ctor(pSVar15,MethodInfo_HashSet_1_System_String);
  if (pSVar15 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(pSVar15,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"LowValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"HighValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"PageSize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"Direction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"ShowInputField",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"IsIntSlider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(pSVar15,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = pSVar15;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),pSVar15);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar29 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ad83c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad83c = '\x01';
    }
    pSVar15 = pSVar29;
    if ((char)pSVar29[1].fields._freeList == '\0') {
      __this_00 = pSVar29[1].fields._slots;
      if (__this_00 != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
        UnityEngine_UIElements_BaseField_float___get_label
                  ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,MethodInfo_String_get_label);
        return;
      }
    }
    else {
      __this = *(UnityEngine_UIElements_BaseField_int__o **)&pSVar29[1].fields._count;
      if (__this != (UnityEngine_UIElements_BaseField_int__o *)0x0) {
        UnityEngine_UIElements_BaseField_int___get_label(__this,MethodInfo_String_get_label);
        return;
      }
    }
  }
  lVar30 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = pSVar15;
  if (g_data_057ad853 == '\0') {
    uStack_40 = 0x41f1e4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x41f1e5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad853 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41f1e7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41f1e8c;
  pCVar17 = MethodInfo_String_ConvertTo_String;
  pMVar31 = pMVar24;
  value = (MethodInfo_33E0570 *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    ((Il2CppObject *)pMVar24,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (lVar30 != 0) {
    if (g_data_057ad83d == '\0') {
      uStack_40 = 0x41f1ea9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      uStack_40 = 0x41f1eb5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad83d = '\x01';
    }
    pMVar24 = value;
    if (*(char *)(lVar30 + 0x70) == '\0') {
      pMVar31 = (MethodInfo_33E0570 *)0x0;
      if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar30 + 0x60) !=
          (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
        UnityEngine_UIElements_BaseField_float___set_label
                  (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar30 + 0x60),
                   (System_String_o *)value,MethodInfo_Void_set_label);
        return;
      }
    }
    else {
      pMVar31 = (MethodInfo_33E0570 *)0x0;
      if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar30 + 0x68) !=
          (UnityEngine_UIElements_BaseField_int__o *)0x0) {
        UnityEngine_UIElements_BaseField_int___set_label
                  (*(UnityEngine_UIElements_BaseField_int__o **)(lVar30 + 0x68),(System_String_o *)value,
                   MethodInfo_Void_set_label);
        return;
      }
    }
  }
  uStack_40 = 0x41f1f0b;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (pMVar31 != (MethodInfo_33E0570 *)0x0) {
    if (*(char *)&pMVar31[1].name == '\0') {
      vtableDispatch = pMVar31[1].virtualMethodPointer;
      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
        pMStack_48 = (MethodInfo_33E0570 *)0x41f1f6c;
        uVar7 = (**(code **)(*(long *)vtableDispatch + 0x7c8))
                          (vtableDispatch,*(undefined8 *)(*(long *)vtableDispatch + 2000));
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar7);
        pMStack_48 = (MethodInfo_33E0570 *)0x41f1f87;
        il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_40);
        return;
      }
    }
    else {
      pIVar3 = pMVar31[1].invoker_method;
      if (pIVar3 != (InvokerMethod)0x0) {
        pMStack_48 = (MethodInfo_33E0570 *)0x41f1f35;
        uVar7 = (**(code **)(*(long *)pIVar3 + 0x7c8))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 2000));
        uStack_40 = CONCAT44(uVar7,(undefined4)uStack_40);
        pMStack_48 = (MethodInfo_33E0570 *)0x41f1f51;
        il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
        return;
      }
    }
  }
  pCVar32 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
  pMStack_48 = (MethodInfo_33E0570 *)0x41f1f8e;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar30;
  pMStack_48 = pMVar24;
  if (g_data_057ad854 == '\0') {
    uStack_60 = 0x41f1faf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_60 = 0x41f1fbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad854 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x41f1fda;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x41f1fec;
  pCVar25 = MethodInfo_Object_ConvertTo_Object;
  __this_02 = (undefined1  [8])pCVar17;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar17,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (pCVar32 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(pCVar32,pIVar16,method_00);
    return;
  }
  uStack_60 = 0x41f2008;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (undefined1  [8])0x0) {
    CustomLogic_CustomLogicSliderBuiltin__get_LowValue
              ((CustomLogic_CustomLogicSliderBuiltin_o *)__this_02,(MethodInfo *)pCVar25);
    return;
  }
  pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2021;
  pIStack_78 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pCStack_70 = pCVar32;
  pCStack_68 = pCVar17;
  if (g_data_057ad855 == '\0') {
    pIStack_80 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_80 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_80 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_80 = (Il2CppObject *)0x41f208c;
  pCVar17 = MethodInfo_Object_ConvertTo_Object;
  pCVar32 = pCVar25;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar25,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__this_02 == (undefined1  [8])0x0) {
    pIStack_80 = (Il2CppObject *)0x41f20a8;
    pIStack_80 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (pCVar32 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__get_HighValue(pCVar32,(MethodInfo *)pCVar17);
      return;
    }
    auStack_88 = (undefined1  [8])0x41f20c1;
    uStack_98 = il2cpp_runtime_helper_022b2c90();
    pCStack_90 = (CustomLogic_CustomLogicSliderBuiltin_o *)__this_02;
    auStack_88 = (undefined1  [8])pCVar25;
    if (g_data_057ad856 == '\0') {
      uStack_a0 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_a0 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_a0 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_a0 = 0x41f212c;
    pCVar25 = MethodInfo_Object_ConvertTo_Object;
    pCVar18 = pCVar17;
    pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar17,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (pCVar32 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_a0 = 0x41f2148;
      uStack_a0 = il2cpp_runtime_helper_022b2c90();
      if (pCVar18 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar18->fields)._isIntSlider == '\0') {
          pUVar4 = (pCVar18->fields)._floatSlider;
        }
        else {
          pUVar4 = (UnityEngine_UIElements_Slider_o *)(pCVar18->fields)._intSlider;
        }
        if (pUVar4 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar7 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._120_get_pageSize.
                    methodPtr)(pUVar4,(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable).
                                      _120_get_pageSize.method);
          uStack_a0 = CONCAT44(uVar7,(undefined4)uStack_a0);
          pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_a0 + 4);
          return;
        }
      }
      pCVar18 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_b8 = il2cpp_runtime_helper_022b2c90();
      pCStack_b0 = pCVar32;
      pCStack_a8 = pCVar17;
      if (g_data_057ad857 == '\0') {
        pCStack_c0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_c0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_c0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_c0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj = MethodInfo_Single_ConvertTo_Single;
      pCVar17 = pCVar25;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar25,MethodInfo_Single_ConvertTo_Single);
      if (pCVar18 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar18->fields)._isIntSlider == '\0') {
          pUVar4 = (pCVar18->fields)._floatSlider;
        }
        else {
          pUVar4 = (UnityEngine_UIElements_Slider_o *)(pCVar18->fields)._intSlider;
        }
        pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar4 != (UnityEngine_UIElements_Slider_o *)0x0) {
          (*(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._121_set_pageSize.methodPtr)
                    (pUVar4,(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._121_set_pageSize.
                            method);
          return;
        }
      }
      pCStack_c0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_c0 = pCVar18;
      if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_e8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_e8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar18 = pCVar17;
        if ((char)(pCVar17->fields)._isIntSlider == '\0') {
          pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
          if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_e8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_c4 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar27,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
          if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_e8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_c4 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar26,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_e8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_c4);
            return;
          }
        }
      }
      lVar30 = 0;
      apCStack_e8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_e8[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_e8[1] = pCVar18;
      apCStack_e8[2] = pCVar25;
      if (g_data_057ad858 == '\0') {
        _uStack_f0 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_f0 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_f0 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_f0 = 0x41f233c;
      obj_00 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar33 = obj;
      iVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar30 == 0) {
        _uStack_f0 = 0x41f2357;
        _uStack_f0 = il2cpp_runtime_helper_022b2c90();
        if (pMVar33 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar33[1].name == '\0') {
            pIVar3 = (InvokerMethod)pMVar33[1].virtualMethodPointer;
          }
          else {
            pIVar3 = pMVar33[1].invoker_method;
          }
          if (pIVar3 != (InvokerMethod)0x0) {
            pMStack_f8 = (MethodInfo_24EED20 *)0x41f2385;
            uVar5 = (**(code **)(*(long *)pIVar3 + 0x8d8))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 0x8e0));
            _uStack_f0 = CONCAT17(uVar5,uStack_f0);
            pMStack_f8 = (MethodInfo_24EED20 *)0x41f239e;
            il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_e9);
            return;
          }
        }
        lVar34 = 0;
        pMStack_f8 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_108 = il2cpp_runtime_helper_022b2c90();
        uStack_100 = lVar30;
        pMStack_f8 = obj;
        if (g_data_057ad859 == '\0') {
          uStack_110 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_110 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_110 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_110 = 0x41f240c;
        uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar34 != 0) {
          if (*(char *)(lVar34 + 0x70) == '\0') {
            plVar28 = *(long **)(lVar34 + 0x60);
          }
          else {
            plVar28 = *(long **)(lVar34 + 0x68);
          }
          obj_00 = (MethodInfo_24EE950 *)0x0;
          if (plVar28 != (long *)0x0) {
            lVar30 = *plVar28;
            (**(code **)(lVar30 + 0x8e8))
                      (plVar28,uVar8 & 0xff,*(undefined8 *)(lVar30 + 0x8f0),lVar30,*(code **)(lVar30 + 0x8e8))
            ;
            return;
          }
        }
        uStack_110 = 0x41f244c;
        uStack_110 = il2cpp_runtime_helper_022b2c90();
        if (obj_00 != (MethodInfo_24EE950 *)0x0) {
          uStack_110 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_110);
          il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_109);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar16;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar16);
        return;
      }
      puVar20 = auStack_d0;
      pCVar17 = apCStack_e8[1];
      pCVar32 = apCStack_e8[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar19 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_80;
    pCVar17 = pCStack_90;
    pIVar22 = pIVar16;
    __this_02 = auStack_88;
  }
  else {
    pIVar22 = pIVar16;
    pIStack_78 = pIVar16;
    if (g_data_057ad83f == '\0') {
      pIStack_80 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_80 = (Il2CppObject *)0x41f057b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(((CustomLogic_CustomLogicSliderBuiltin_o *)__this_02)->fields)._isIntSlider == '\0') {
      if (pIVar16 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar16->klass == g_data_057b9be8) {
        pIStack_80 = (Il2CppObject *)0x41f0613;
        pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_02)->fields)._floatSlider;
        if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar35 = *pfVar9;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar16->klass != g_data_057b9bb8) {
          return;
        }
        pIStack_80 = (Il2CppObject *)0x41f062a;
        piVar12 = (int *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_02)->fields)._floatSlider;
        if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar35 = (float)*piVar12;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar27,fVar35,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    else {
      if (pIVar16 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar16->klass == g_data_057b9bb8) {
        pIStack_80 = (Il2CppObject *)0x41f05ea;
        piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_02)->fields)._intSlider;
        if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar21 = *piVar11;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar16->klass != g_data_057b9be8) {
          return;
        }
        pIStack_80 = (Il2CppObject *)0x41f05ac;
        pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_02)->fields)._intSlider;
        if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar21 = (int32_t)*pfVar9;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar26,iVar21,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_80 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar19 = &pCStack_90;
    pIStack_80 = pIVar16;
    if (g_data_057ad840 == '\0') {
      uStack_98 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_98 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar17->fields)._isIntSlider == '\0') {
      pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
      if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_98 = 0x41f06dc;
        fVar35 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar27,MethodInfo_Single_get_highValue);
        puVar23 = (undefined8 *)auStack_88;
        auStack_88._0_4_ = fVar35;
        ppIVar10 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_98 = 0x41f06ae;
        iVar21 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar26,MethodInfo_Int32_get_highValue);
        puVar23 = (undefined8 *)((long)auStack_88 + 4);
        auStack_88._4_4_ = iVar21;
        ppIVar10 = &g_data_057b9bb8;
label_041f06f2:
        uStack_98 = 0x41f06fa;
        il2cpp_runtime_helper_02304f30(*ppIVar10,puVar23);
        return;
      }
    }
    pCVar32 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_98 = 0x41f0705;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(undefined1 (*) [8])((long)ppCVar19 + -8) = __this_02;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar19 + -0x10) = pCVar17;
  *(Il2CppObject **)((long)ppCVar19 + -0x18) = pIVar16;
  pIVar16 = pIVar22;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar21 = (int32_t)pIVar16;
  if ((char)(pCVar32->fields)._isIntSlider == '\0') {
    if (pIVar22 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar22->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07d3;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar32->fields)._floatSlider;
      if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = *pfVar9;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar22->klass != g_data_057b9bb8) {
        return;
      }
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07ea;
      piVar12 = (int *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar32->fields)._floatSlider;
      if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = (float)*piVar12;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar27,fVar35,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pIVar22 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar22->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07aa;
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar32->fields)._intSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar21 = *piVar11;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar22->klass != g_data_057b9be8) {
        return;
      }
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f076c;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar32->fields)._intSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar21 = (int32_t)*pfVar9;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar26,iVar21,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar30 = 0;
  *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f0812;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar19 + -0x20) = auVar36._0_8_;
  if (*(char *)(lVar30 + 0x70) == '\0') {
    plVar28 = *(long **)(lVar30 + 0x60);
  }
  else {
    plVar28 = *(long **)(lVar30 + 0x68);
  }
  if (plVar28 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar28 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_01)
              (plVar28,*(undefined8 *)(*plVar28 + 0x8c0),auVar36._8_8_,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)((long)ppCVar19 + -0x28) = 0x41f0852;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar19 + -0x28) = auVar36._0_8_;
  if ((char)plVar28[0xe] == '\0') {
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar28[0xc];
  }
  else {
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar28[0xd];
  }
  if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar17->klass[4].vtable._7_get_IsStatic.methodPtr;
    (*vtableDispatch)
              (pCVar17,pCVar17->klass[4].vtable._7_get_IsStatic.method,auVar36._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)((long)ppCVar19 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar20 = (undefined1 *)((long)ppCVar19 + -0x30);
  *(Il2CppObject **)((long)ppCVar19 + -0x30) = pIVar22;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar17->fields)._isIntSlider == '\0') {
    pUVar27 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
    if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar27,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else {
    pUVar26 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
    if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar26,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  lVar30 = 0;
  *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar20 + -8) = unaff_RBP;
  *(undefined8 *)(puVar20 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar20 + -0x18) = pCVar32;
  *(undefined8 *)(puVar20 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar20 + -0x28) = pCVar17;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar20 + -0x2c) = iVar21;
  *(undefined8 *)(puVar20 + -0x40) = 0x41f099e;
  pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar20 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f09c4;
  bVar6 = System_Enum__IsDefined(enumType,pIVar16,(MethodInfo *)0x0);
  uVar5 = SUB81(pIVar16,0);
  if ((char)bVar6 == '\0') {
    *(int32_t *)(puVar20 + -0x30) = iVar21;
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a30;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar20 + -0x30);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a3f;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a4c;
    pSVar13 = System_String__Format(pSVar13,pIVar16,(MethodInfo *)0x0);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a5b;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a63;
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this_01,pSVar13,(MethodInfo *)0x0);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a7f;
    uVar14 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this_01,uVar14);
    uVar5 = (undefined1)uVar14;
  }
  else if (*(char *)(lVar30 + 0x70) == '\0') {
    pUVar27 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar30 + 0x60);
    __this_01 = (System_ArgumentException_o *)0x0;
    if (pUVar27 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar27,iVar21,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    pUVar26 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar30 + 0x68);
    __this_01 = (System_ArgumentException_o *)0x0;
    if (pUVar26 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar26,iVar21,MethodInfo_Void_set_direction);
      return;
    }
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f0a8f;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar20 + -0x40) = auVar36._0_8_;
  if (*(char *)&(__this_01->fields)._safeSerializationManager == '\0') {
    pSVar13 = *(System_String_o **)&(__this_01->fields)._HResult;
  }
  else {
    pSVar13 = (__this_01->fields)._source;
  }
  if (pSVar13 == (System_String_o *)0x0) {
    *(undefined8 *)(puVar20 + -0x48) = 0x41f0ac2;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar20 + -0x48) = uVar14;
    if ((char)pSVar13[4].fields._stringLength == '\0') {
      pSVar1 = pSVar13[4].klass;
    }
    else {
      pSVar1 = pSVar13[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      *(undefined8 *)(puVar20 + -0x50) = 0x41f0b06;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_01)(pSVar1,uVar5,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
    return;
  }
  UNRECOVERED_JUMPTABLE_01 = pSVar13->klass[3]._1.byval_arg.data;
  (*UNRECOVERED_JUMPTABLE_01)
            (pSVar13,*(undefined8 *)&pSVar13->klass[3]._1.byval_arg.bits,auVar36._8_8_,
             UNRECOVERED_JUMPTABLE_01);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f1dc0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar1;
  UnityEngine_UIElements_SliderInt_o *__this;
  InvokerMethod pIVar2;
  UnityEngine_UIElements_Slider_o *pUVar3;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar4;
  bool_conflict bVar5;
  undefined4 uVar6;
  uint uVar7;
  Il2CppObject *pIVar8;
  float *pfVar9;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppClass **ppIVar10;
  int32_t *piVar11;
  Il2CppObject *extraout_RAX_01;
  int *piVar12;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_ArgumentException_o *__this_00;
  undefined8 uVar13;
  System_String_o *pSVar14;
  MethodInfo *value;
  Il2CppObject *extraout_RAX_05;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *pIVar15;
  Il2CppObject *extraout_RAX_07;
  MethodInfo *method_00;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar16;
  CustomLogic_CustomLogicSliderBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar17;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar18;
  undefined1 *puVar19;
  undefined8 unaff_RBP;
  int32_t iVar20;
  Il2CppObject *pIVar21;
  undefined8 *puVar22;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar23;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar24;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar25;
  long *plVar26;
  System_String_c *pSVar27;
  long lVar28;
  MethodInfo *pMVar29;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar30;
  undefined1 __this_01 [8];
  MethodInfo_24EED20 *pMVar31;
  long lVar32;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar33;
  undefined1 auVar34 [16];
  undefined8 auStack_108 [2];
  undefined8 uStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  MethodInfo_24EED20 *pMStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_d0 [3];
  undefined1 auStack_b8 [12];
  int32_t iStack_ac;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_a8;
  undefined8 uStack_a0;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_98;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_78;
  undefined1 auStack_70 [8];
  Il2CppObject *pIStack_68;
  Il2CppObject *pIStack_60;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_58;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_18;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (g_data_057ad83c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
      g_data_057ad83c = '\x01';
    }
    unaff_RBX = __i;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar3 = (__i->fields)._floatSlider;
      if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
        pSVar14 = UnityEngine_UIElements_BaseField_float___get_label
                            ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar3,MethodInfo_String_get_label);
        return (Il2CppObject *)pSVar14;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        pSVar14 = UnityEngine_UIElements_BaseField_int___get_label
                            ((UnityEngine_UIElements_BaseField_int__o *)__this,MethodInfo_String_get_label);
        return (Il2CppObject *)pSVar14;
      }
    }
  }
  lVar28 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  pCStack_18 = unaff_RBX;
  if (g_data_057ad853 == '\0') {
    uStack_28 = 0x41f1e4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x41f1e5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad853 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41f1e7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41f1e8c;
  pCVar16 = MethodInfo_String_ConvertTo_String;
  pMVar29 = method;
  value = (MethodInfo *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (lVar28 != 0) {
    if (g_data_057ad83d == '\0') {
      uStack_28 = 0x41f1ea9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      uStack_28 = 0x41f1eb5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad83d = '\x01';
    }
    method = value;
    if (*(char *)(lVar28 + 0x70) == '\0') {
      pMVar29 = (MethodInfo *)0x0;
      if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar28 + 0x60) !=
          (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
        UnityEngine_UIElements_BaseField_float___set_label
                  (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar28 + 0x60),
                   (System_String_o *)value,MethodInfo_Void_set_label);
        return extraout_RAX_06;
      }
    }
    else {
      pMVar29 = (MethodInfo *)0x0;
      if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar28 + 0x68) !=
          (UnityEngine_UIElements_BaseField_int__o *)0x0) {
        UnityEngine_UIElements_BaseField_int___set_label
                  (*(UnityEngine_UIElements_BaseField_int__o **)(lVar28 + 0x68),(System_String_o *)value,
                   MethodInfo_Void_set_label);
        return extraout_RAX_05;
      }
    }
  }
  uStack_28 = 0x41f1f0b;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (pMVar29 != (MethodInfo *)0x0) {
    if (*(char *)&pMVar29[1].name == '\0') {
      vtableDispatch = pMVar29[1].virtualMethodPointer;
      if (vtableDispatch != (Il2CppMethodPointer)0x0) {
        pMStack_30 = (MethodInfo *)0x41f1f6c;
        uVar6 = (**(code **)(*(long *)vtableDispatch + 0x7c8))
                          (vtableDispatch,*(undefined8 *)(*(long *)vtableDispatch + 2000));
        uStack_28 = CONCAT44(uStack_28._4_4_,uVar6);
        pMStack_30 = (MethodInfo *)0x41f1f87;
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_28);
        return pIVar15;
      }
    }
    else {
      pIVar2 = pMVar29[1].invoker_method;
      if (pIVar2 != (InvokerMethod)0x0) {
        pMStack_30 = (MethodInfo *)0x41f1f35;
        uVar6 = (**(code **)(*(long *)pIVar2 + 0x7c8))(pIVar2,*(undefined8 *)(*(long *)pIVar2 + 2000));
        uStack_28 = CONCAT44(uVar6,(undefined4)uStack_28);
        pMStack_30 = (MethodInfo *)0x41f1f51;
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
        return pIVar15;
      }
    }
  }
  pCVar30 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
  pMStack_30 = (MethodInfo *)0x41f1f8e;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar28;
  pMStack_30 = method;
  if (g_data_057ad854 == '\0') {
    uStack_48 = 0x41f1faf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_48 = 0x41f1fbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad854 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x41f1fda;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x41f1fec;
  pCVar23 = MethodInfo_Object_ConvertTo_Object;
  __this_01 = (undefined1  [8])pCVar16;
  pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar16,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (pCVar30 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(pCVar30,pIVar15,method_00);
    return extraout_RAX_07;
  }
  uStack_48 = 0x41f2008;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (undefined1  [8])0x0) {
    pIVar15 = CustomLogic_CustomLogicSliderBuiltin__get_LowValue
                        ((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01,(MethodInfo *)pCVar23);
    return pIVar15;
  }
  pCStack_50 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2021;
  pIStack_60 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pCStack_58 = pCVar30;
  pCStack_50 = pCVar16;
  if (g_data_057ad855 == '\0') {
    pIStack_68 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_68 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_68 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_68 = (Il2CppObject *)0x41f208c;
  pCVar16 = MethodInfo_Object_ConvertTo_Object;
  pCVar30 = pCVar23;
  pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar23,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__this_01 == (undefined1  [8])0x0) {
    pIStack_68 = (Il2CppObject *)0x41f20a8;
    pIStack_68 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (pCVar30 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      pIVar15 = CustomLogic_CustomLogicSliderBuiltin__get_HighValue(pCVar30,(MethodInfo *)pCVar16);
      return pIVar15;
    }
    auStack_70 = (undefined1  [8])0x41f20c1;
    uStack_80 = il2cpp_runtime_helper_022b2c90();
    pCStack_78 = (CustomLogic_CustomLogicSliderBuiltin_o *)__this_01;
    auStack_70 = (undefined1  [8])pCVar23;
    if (g_data_057ad856 == '\0') {
      uStack_88 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_88 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_88 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_88 = 0x41f212c;
    pCVar23 = MethodInfo_Object_ConvertTo_Object;
    pCVar17 = pCVar16;
    pIVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar16,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (pCVar30 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_88 = 0x41f2148;
      uStack_88 = il2cpp_runtime_helper_022b2c90();
      if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar17->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar17->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar17->fields)._intSlider;
        }
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_90 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar6 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._120_get_pageSize.
                    methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                      _120_get_pageSize.method);
          uStack_88 = CONCAT44(uVar6,(undefined4)uStack_88);
          pCStack_90 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_88 + 4);
          return pIVar15;
        }
      }
      pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_90 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_a0 = il2cpp_runtime_helper_022b2c90();
      pCStack_98 = pCVar30;
      pCStack_90 = pCVar16;
      if (g_data_057ad857 == '\0') {
        pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj = MethodInfo_Single_ConvertTo_Single;
      pCVar16 = pCVar23;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar23,MethodInfo_Single_ConvertTo_Single);
      if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar17->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar17->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar17->fields)._intSlider;
        }
        pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pIVar15 = (Il2CppObject *)
                    (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.
                      methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                        _121_set_pageSize.method);
          return pIVar15;
        }
      }
      pCStack_a8 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_a8 = pCVar17;
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_d0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_d0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar17 = pCVar16;
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar16->fields)._floatSlider;
          if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_d0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_ac = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar25,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar16->fields)._intSlider;
          if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_d0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_ac = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar24,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_d0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_ac);
            return pIVar15;
          }
        }
      }
      lVar28 = 0;
      apCStack_d0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_d0[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_d0[1] = pCVar17;
      apCStack_d0[2] = pCVar23;
      if (g_data_057ad858 == '\0') {
        _uStack_d8 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_d8 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_d8 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_d8 = 0x41f233c;
      obj_00 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar31 = obj;
      iVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar28 == 0) {
        _uStack_d8 = 0x41f2357;
        _uStack_d8 = il2cpp_runtime_helper_022b2c90();
        if (pMVar31 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar31[1].name == '\0') {
            pIVar2 = (InvokerMethod)pMVar31[1].virtualMethodPointer;
          }
          else {
            pIVar2 = pMVar31[1].invoker_method;
          }
          if (pIVar2 != (InvokerMethod)0x0) {
            pMStack_e0 = (MethodInfo_24EED20 *)0x41f2385;
            uVar4 = (**(code **)(*(long *)pIVar2 + 0x8d8))(pIVar2,*(undefined8 *)(*(long *)pIVar2 + 0x8e0));
            _uStack_d8 = CONCAT17(uVar4,uStack_d8);
            pMStack_e0 = (MethodInfo_24EED20 *)0x41f239e;
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_d1);
            return pIVar15;
          }
        }
        lVar32 = 0;
        pMStack_e0 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_f0 = il2cpp_runtime_helper_022b2c90();
        uStack_e8 = lVar28;
        pMStack_e0 = obj;
        if (g_data_057ad859 == '\0') {
          uStack_f8 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_f8 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_f8 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_f8 = 0x41f240c;
        uVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar32 != 0) {
          if (*(char *)(lVar32 + 0x70) == '\0') {
            plVar26 = *(long **)(lVar32 + 0x60);
          }
          else {
            plVar26 = *(long **)(lVar32 + 0x68);
          }
          obj_00 = (MethodInfo_24EE950 *)0x0;
          if (plVar26 != (long *)0x0) {
            lVar28 = *plVar26;
            pIVar15 = (Il2CppObject *)
                      (**(code **)(lVar28 + 0x8e8))
                                (plVar26,uVar7 & 0xff,*(undefined8 *)(lVar28 + 0x8f0),lVar28,
                                 *(code **)(lVar28 + 0x8e8));
            return pIVar15;
          }
        }
        uStack_f8 = 0x41f244c;
        uStack_f8 = il2cpp_runtime_helper_022b2c90();
        if (obj_00 != (MethodInfo_24EE950 *)0x0) {
          uStack_f8 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_f8);
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_f1);
          return pIVar15;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar15,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar15;
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar15);
        return pIVar15;
      }
      puVar19 = auStack_b8;
      pCVar16 = apCStack_d0[1];
      pCVar30 = apCStack_d0[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar18 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_68;
    pCVar16 = pCStack_78;
    pIVar21 = pIVar15;
    __this_01 = auStack_70;
  }
  else {
    pIVar8 = pIVar15;
    pIVar21 = pIVar15;
    pIStack_60 = pIVar15;
    if (g_data_057ad83f == '\0') {
      pIStack_68 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_68 = (Il2CppObject *)0x41f057b;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._isIntSlider == '\0') {
      if (pIVar15 == (Il2CppObject *)0x0) {
        return pIVar8;
      }
      if (pIVar15->klass == g_data_057b9be8) {
        pIStack_68 = (Il2CppObject *)0x41f0613;
        pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar15);
        pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._floatSlider;
        if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar33 = *pfVar9;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar15->klass != g_data_057b9bb8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        pIStack_68 = (Il2CppObject *)0x41f062a;
        piVar12 = (int *)il2cpp_runtime_helper_02305440(pIVar15);
        pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._floatSlider;
        if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar33 = (float)*piVar12;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar25,fVar33,MethodInfo_Void_set_lowValue);
          return extraout_RAX_00;
        }
      }
    }
    else {
      if (pIVar15 == (Il2CppObject *)0x0) {
        return pIVar8;
      }
      if (pIVar15->klass == g_data_057b9bb8) {
        pIStack_68 = (Il2CppObject *)0x41f05ea;
        piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar15);
        pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._intSlider;
        if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar20 = *piVar11;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar15->klass != g_data_057b9be8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        pIStack_68 = (Il2CppObject *)0x41f05ac;
        pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar15);
        pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._intSlider;
        if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar20 = (int32_t)*pfVar9;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar24,iVar20,MethodInfo_Void_set_lowValue);
          return extraout_RAX;
        }
      }
    }
    pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_68 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar18 = &pCStack_78;
    pIStack_68 = pIVar15;
    if (g_data_057ad840 == '\0') {
      uStack_80 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_80 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar16->fields)._isIntSlider == '\0') {
      pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar16->fields)._floatSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_80 = 0x41f06dc;
        fVar33 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar25,MethodInfo_Single_get_highValue);
        puVar22 = (undefined8 *)auStack_70;
        auStack_70._0_4_ = fVar33;
        ppIVar10 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar16->fields)._intSlider;
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_80 = 0x41f06ae;
        iVar20 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar24,MethodInfo_Int32_get_highValue);
        puVar22 = (undefined8 *)((long)auStack_70 + 4);
        auStack_70._4_4_ = iVar20;
        ppIVar10 = &g_data_057b9bb8;
label_041f06f2:
        uStack_80 = 0x41f06fa;
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*ppIVar10,puVar22);
        return pIVar15;
      }
    }
    pCVar30 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_80 = 0x41f0705;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(undefined1 (*) [8])((long)ppCVar18 + -8) = __this_01;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar18 + -0x10) = pCVar16;
  *(Il2CppObject **)((long)ppCVar18 + -0x18) = pIVar15;
  pIVar8 = pIVar21;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f073b;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar20 = (int32_t)pIVar8;
  if ((char)(pCVar30->fields)._isIntSlider == '\0') {
    if (pIVar21 == (Il2CppObject *)0x0) {
      return pIVar15;
    }
    if (pIVar21->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f07d3;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar21);
      pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar30->fields)._floatSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar33 = *pfVar9;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar21->klass != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f07ea;
      piVar12 = (int *)il2cpp_runtime_helper_02305440(pIVar21);
      pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar30->fields)._floatSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar33 = (float)*piVar12;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar25,fVar33,MethodInfo_Void_set_highValue);
        return extraout_RAX_02;
      }
    }
  }
  else {
    if (pIVar21 == (Il2CppObject *)0x0) {
      return pIVar15;
    }
    if (pIVar21->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f07aa;
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar21);
      pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar30->fields)._intSlider;
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar20 = *piVar11;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar21->klass != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f076c;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pIVar21);
      pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar30->fields)._intSlider;
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar20 = (int32_t)*pfVar9;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar24,iVar20,MethodInfo_Void_set_highValue);
        return extraout_RAX_01;
      }
    }
  }
  lVar28 = 0;
  *(undefined8 *)((long)ppCVar18 + -0x20) = 0x41f0812;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar18 + -0x20) = auVar34._0_8_;
  if (*(char *)(lVar28 + 0x70) == '\0') {
    plVar26 = *(long **)(lVar28 + 0x60);
  }
  else {
    plVar26 = *(long **)(lVar28 + 0x68);
  }
  if (plVar26 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar26 + 0x8b8);
    pIVar15 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (plVar26,*(undefined8 *)(*plVar26 + 0x8c0),auVar34._8_8_,UNRECOVERED_JUMPTABLE_01);
    return pIVar15;
  }
  *(undefined8 *)((long)ppCVar18 + -0x28) = 0x41f0852;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar18 + -0x28) = auVar34._0_8_;
  if ((char)plVar26[0xe] == '\0') {
    pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar26[0xc];
  }
  else {
    pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar26[0xd];
  }
  if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar16->klass[4].vtable._7_get_IsStatic.methodPtr;
    pIVar15 = (Il2CppObject *)
              (*vtableDispatch)
                        (pCVar16,pCVar16->klass[4].vtable._7_get_IsStatic.method,auVar34._8_8_,
                         vtableDispatch);
    return pIVar15;
  }
  *(undefined8 *)((long)ppCVar18 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar19 = (undefined1 *)((long)ppCVar18 + -0x30);
  *(Il2CppObject **)((long)ppCVar18 + -0x30) = pIVar21;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar18 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar18 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar16->fields)._isIntSlider == '\0') {
    pUVar25 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar16->fields)._floatSlider;
    if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar20 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar25,MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar20);
    }
  }
  else {
    pUVar24 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar16->fields)._intSlider;
    if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar20 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar24,MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var,iVar20);
    }
  }
  lVar28 = 0;
  *(undefined8 *)((long)ppCVar18 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar19 + -8) = unaff_RBP;
  *(undefined8 *)(puVar19 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar19 + -0x18) = pCVar30;
  *(undefined8 *)(puVar19 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar19 + -0x28) = pCVar16;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar19 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar19 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar19 + -0x2c) = iVar20;
  *(undefined8 *)(puVar19 + -0x40) = 0x41f099e;
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar19 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar19 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar19 + -0x40) = 0x41f09c4;
  bVar5 = System_Enum__IsDefined(enumType,pIVar15,(MethodInfo *)0x0);
  uVar4 = SUB81(pIVar15,0);
  if ((char)bVar5 == '\0') {
    *(int32_t *)(puVar19 + -0x30) = iVar20;
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a30;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar19 + -0x30);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a3f;
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a4c;
    pSVar14 = System_String__Format(pSVar14,pIVar15,(MethodInfo *)0x0);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a5b;
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a63;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this_00,pSVar14,(MethodInfo *)0x0);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a7f;
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar19 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this_00,uVar13);
    uVar4 = (undefined1)uVar13;
  }
  else if (*(char *)(lVar28 + 0x70) == '\0') {
    pUVar25 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar28 + 0x60);
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar19 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar25,iVar20,MethodInfo_Void_set_direction);
      return extraout_RAX_04;
    }
  }
  else {
    pUVar24 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar28 + 0x68);
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar19 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar24,iVar20,MethodInfo_Void_set_direction);
      return extraout_RAX_03;
    }
  }
  *(undefined8 *)(puVar19 + -0x40) = 0x41f0a8f;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar19 + -0x40) = auVar34._0_8_;
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar14 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar14 = (__this_00->fields)._source;
  }
  if (pSVar14 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = pSVar14->klass[3]._1.byval_arg.data;
    pIVar15 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (pSVar14,*(undefined8 *)&pSVar14->klass[3]._1.byval_arg.bits,auVar34._8_8_,
                         UNRECOVERED_JUMPTABLE_01);
    return pIVar15;
  }
  *(undefined8 *)(puVar19 + -0x48) = 0x41f0ac2;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar19 + -0x48) = uVar13;
  if ((char)pSVar14[4].fields._stringLength == '\0') {
    pSVar27 = pSVar14[4].klass;
  }
  else {
    pSVar27 = pSVar14[4].monitor;
  }
  if (pSVar27 == (System_String_c *)0x0) {
    *(undefined8 *)(puVar19 + -0x50) = 0x41f0b06;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar13 >> 8),*(undefined1 *)&(pSVar27->_1).interopData);
  }
  pvVar1 = (pSVar27->_1).image;
  UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar1 + 0x8e8);
  pIVar15 = (Il2CppObject *)
            (*UNRECOVERED_JUMPTABLE_01)
                      (pSVar27,uVar4,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
  return pIVar15;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f1e30

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  System_String_c *pSVar1;
  void *pvVar2;
  UnityEngine_UIElements_SliderInt_o *__this;
  Il2CppClass *pIVar3;
  UnityEngine_UIElements_Slider_o *pUVar4;
  InvokerMethod pIVar5;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar6;
  bool_conflict bVar7;
  undefined4 uVar8;
  uint uVar9;
  float *pfVar10;
  Il2CppClass **ppIVar11;
  int32_t *piVar12;
  int *piVar13;
  System_Type_o *enumType;
  System_ArgumentException_o *__this_00;
  undefined8 uVar14;
  System_String_o *pSVar15;
  Il2CppObject *pIVar16;
  MethodInfo *method_00;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar17;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar18;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar19;
  undefined1 *puVar20;
  undefined8 unaff_RBP;
  int32_t iVar21;
  Il2CppObject *pIVar22;
  undefined8 *puVar23;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar24;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar25;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar26;
  long *plVar27;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar28;
  undefined1 __this_01 [8];
  long lVar29;
  MethodInfo_24EED20 *pMVar30;
  long lVar31;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar32;
  undefined1 auVar33 [16];
  undefined8 auStack_100 [2];
  undefined8 uStack_f0;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  MethodInfo_24EED20 *pMStack_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_c8 [3];
  undefined1 auStack_b0 [12];
  int32_t iStack_a4;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_a0;
  undefined8 uStack_98;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_90;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_70;
  undefined1 auStack_68 [8];
  Il2CppObject *pIStack_60;
  Il2CppObject *pIStack_58;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_50;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_30;
  System_String_o *pSStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad853 == '\0') {
    uStack_20 = 0x41f1e4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x41f1e5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad853 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41f1e7a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41f1e8c;
  pCVar17 = MethodInfo_String_ConvertTo_String;
  pIVar16 = __v;
  pSVar15 = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (g_data_057ad83d == '\0') {
      uStack_20 = 0x41f1ea9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      uStack_20 = 0x41f1eb5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
      g_data_057ad83d = '\x01';
    }
    __v = (Il2CppObject *)pSVar15;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar4 = (__i->fields)._floatSlider;
      pIVar16 = (Il2CppObject *)0x0;
      if (pUVar4 != (UnityEngine_UIElements_Slider_o *)0x0) {
        UnityEngine_UIElements_BaseField_float___set_label
                  ((UnityEngine_UIElements_BaseField_TValueType__o *)pUVar4,pSVar15,MethodInfo_Void_set_label);
        return;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      pIVar16 = (Il2CppObject *)0x0;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        UnityEngine_UIElements_BaseField_int___set_label
                  ((UnityEngine_UIElements_BaseField_int__o *)__this,pSVar15,MethodInfo_Void_set_label);
        return;
      }
    }
  }
  uStack_20 = 0x41f1f0b;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (pIVar16 != (Il2CppObject *)0x0) {
    if (*(char *)&pIVar16[7].klass == '\0') {
      pIVar3 = pIVar16[6].klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar3->_1).image;
        pSStack_28 = (System_String_o *)0x41f1f6c;
        uVar8 = (**(code **)((long)pvVar2 + 0x7c8))(pIVar3,*(undefined8 *)((long)pvVar2 + 2000));
        uStack_20 = CONCAT44(uStack_20._4_4_,uVar8);
        pSStack_28 = (System_String_o *)0x41f1f87;
        il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_20);
        return;
      }
    }
    else {
      plVar27 = pIVar16[6].monitor;
      if (plVar27 != (long *)0x0) {
        pSStack_28 = (System_String_o *)0x41f1f35;
        uVar8 = (**(code **)(*plVar27 + 0x7c8))(plVar27,*(undefined8 *)(*plVar27 + 2000));
        uStack_20 = CONCAT44(uVar8,(undefined4)uStack_20);
        pSStack_28 = (System_String_o *)0x41f1f51;
        il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
        return;
      }
    }
  }
  pCVar28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
  pSStack_28 = (System_String_o *)0x41f1f8e;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pSStack_28 = (System_String_o *)__v;
  if (g_data_057ad854 == '\0') {
    uStack_40 = 0x41f1faf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_40 = 0x41f1fbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad854 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41f1fda;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41f1fec;
  pCVar24 = MethodInfo_Object_ConvertTo_Object;
  __this_01 = (undefined1  [8])pCVar17;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar17,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (pCVar28 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(pCVar28,pIVar16,method_00);
    return;
  }
  uStack_40 = 0x41f2008;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (undefined1  [8])0x0) {
    CustomLogic_CustomLogicSliderBuiltin__get_LowValue
              ((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01,(MethodInfo *)pCVar24);
    return;
  }
  pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2021;
  pIStack_58 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pCStack_50 = pCVar28;
  pCStack_48 = pCVar17;
  if (g_data_057ad855 == '\0') {
    pIStack_60 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_60 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_60 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_60 = (Il2CppObject *)0x41f208c;
  pCVar17 = MethodInfo_Object_ConvertTo_Object;
  pCVar28 = pCVar24;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar24,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__this_01 == (undefined1  [8])0x0) {
    pIStack_60 = (Il2CppObject *)0x41f20a8;
    pIStack_60 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (pCVar28 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__get_HighValue(pCVar28,(MethodInfo *)pCVar17);
      return;
    }
    auStack_68 = (undefined1  [8])0x41f20c1;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    pCStack_70 = (CustomLogic_CustomLogicSliderBuiltin_o *)__this_01;
    auStack_68 = (undefined1  [8])pCVar24;
    if (g_data_057ad856 == '\0') {
      uStack_80 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_80 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_80 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_80 = 0x41f212c;
    pCVar24 = MethodInfo_Object_ConvertTo_Object;
    pCVar18 = pCVar17;
    pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar17,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (pCVar28 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_80 = 0x41f2148;
      uStack_80 = il2cpp_runtime_helper_022b2c90();
      if (pCVar18 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar18->fields)._isIntSlider == '\0') {
          pUVar4 = (pCVar18->fields)._floatSlider;
        }
        else {
          pUVar4 = (UnityEngine_UIElements_Slider_o *)(pCVar18->fields)._intSlider;
        }
        if (pUVar4 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar8 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._120_get_pageSize.
                    methodPtr)(pUVar4,(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable).
                                      _120_get_pageSize.method);
          uStack_80 = CONCAT44(uVar8,(undefined4)uStack_80);
          pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
          return;
        }
      }
      pCVar18 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_98 = il2cpp_runtime_helper_022b2c90();
      pCStack_90 = pCVar28;
      pCStack_88 = pCVar17;
      if (g_data_057ad857 == '\0') {
        pCStack_a0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_a0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_a0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_a0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj = MethodInfo_Single_ConvertTo_Single;
      pCVar17 = pCVar24;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar24,MethodInfo_Single_ConvertTo_Single);
      if (pCVar18 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar18->fields)._isIntSlider == '\0') {
          pUVar4 = (pCVar18->fields)._floatSlider;
        }
        else {
          pUVar4 = (UnityEngine_UIElements_Slider_o *)(pCVar18->fields)._intSlider;
        }
        pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar4 != (UnityEngine_UIElements_Slider_o *)0x0) {
          (*(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._121_set_pageSize.methodPtr)
                    (pUVar4,(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._121_set_pageSize.
                            method);
          return;
        }
      }
      pCStack_a0 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_a0 = pCVar18;
      if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_c8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_c8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar18 = pCVar17;
        if ((char)(pCVar17->fields)._isIntSlider == '\0') {
          pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
          if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_c8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_a4 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar26,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
          if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_c8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_a4 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar25,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_c8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_a4);
            return;
          }
        }
      }
      lVar29 = 0;
      apCStack_c8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_c8[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_c8[1] = pCVar18;
      apCStack_c8[2] = pCVar24;
      if (g_data_057ad858 == '\0') {
        _uStack_d0 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_d0 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_d0 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_d0 = 0x41f233c;
      obj_00 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar30 = obj;
      iVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar29 == 0) {
        _uStack_d0 = 0x41f2357;
        _uStack_d0 = il2cpp_runtime_helper_022b2c90();
        if (pMVar30 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar30[1].name == '\0') {
            pIVar5 = (InvokerMethod)pMVar30[1].virtualMethodPointer;
          }
          else {
            pIVar5 = pMVar30[1].invoker_method;
          }
          if (pIVar5 != (InvokerMethod)0x0) {
            pMStack_d8 = (MethodInfo_24EED20 *)0x41f2385;
            uVar6 = (**(code **)(*(long *)pIVar5 + 0x8d8))(pIVar5,*(undefined8 *)(*(long *)pIVar5 + 0x8e0));
            _uStack_d0 = CONCAT17(uVar6,uStack_d0);
            pMStack_d8 = (MethodInfo_24EED20 *)0x41f239e;
            il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_c9);
            return;
          }
        }
        lVar31 = 0;
        pMStack_d8 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_e8 = il2cpp_runtime_helper_022b2c90();
        uStack_e0 = lVar29;
        pMStack_d8 = obj;
        if (g_data_057ad859 == '\0') {
          uStack_f0 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_f0 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_f0 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_f0 = 0x41f240c;
        uVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar31 != 0) {
          if (*(char *)(lVar31 + 0x70) == '\0') {
            plVar27 = *(long **)(lVar31 + 0x60);
          }
          else {
            plVar27 = *(long **)(lVar31 + 0x68);
          }
          obj_00 = (MethodInfo_24EE950 *)0x0;
          if (plVar27 != (long *)0x0) {
            lVar29 = *plVar27;
            (**(code **)(lVar29 + 0x8e8))
                      (plVar27,uVar9 & 0xff,*(undefined8 *)(lVar29 + 0x8f0),lVar29,*(code **)(lVar29 + 0x8e8))
            ;
            return;
          }
        }
        uStack_f0 = 0x41f244c;
        uStack_f0 = il2cpp_runtime_helper_022b2c90();
        if (obj_00 != (MethodInfo_24EE950 *)0x0) {
          uStack_f0 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_f0);
          il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_e9);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar16;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar16);
        return;
      }
      puVar20 = auStack_b0;
      pCVar17 = apCStack_c8[1];
      pCVar28 = apCStack_c8[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar19 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_60;
    pCVar17 = pCStack_70;
    pIVar22 = pIVar16;
    __this_01 = auStack_68;
  }
  else {
    pIVar22 = pIVar16;
    pIStack_58 = pIVar16;
    if (g_data_057ad83f == '\0') {
      pIStack_60 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_60 = (Il2CppObject *)0x41f057b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._isIntSlider == '\0') {
      if (pIVar16 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar16->klass == g_data_057b9be8) {
        pIStack_60 = (Il2CppObject *)0x41f0613;
        pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._floatSlider;
        if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar32 = *pfVar10;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar16->klass != g_data_057b9bb8) {
          return;
        }
        pIStack_60 = (Il2CppObject *)0x41f062a;
        piVar13 = (int *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._floatSlider;
        if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar32 = (float)*piVar13;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar26,fVar32,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    else {
      if (pIVar16 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar16->klass == g_data_057b9bb8) {
        pIStack_60 = (Il2CppObject *)0x41f05ea;
        piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._intSlider;
        if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar21 = *piVar12;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar16->klass != g_data_057b9be8) {
          return;
        }
        pIStack_60 = (Il2CppObject *)0x41f05ac;
        pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_01)->fields)._intSlider;
        if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar21 = (int32_t)*pfVar10;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar25,iVar21,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_60 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar19 = &pCStack_70;
    pIStack_60 = pIVar16;
    if (g_data_057ad840 == '\0') {
      uStack_78 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_78 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar17->fields)._isIntSlider == '\0') {
      pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_78 = 0x41f06dc;
        fVar32 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar26,MethodInfo_Single_get_highValue);
        puVar23 = (undefined8 *)auStack_68;
        auStack_68._0_4_ = fVar32;
        ppIVar11 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_78 = 0x41f06ae;
        iVar21 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar25,MethodInfo_Int32_get_highValue);
        puVar23 = (undefined8 *)((long)auStack_68 + 4);
        auStack_68._4_4_ = iVar21;
        ppIVar11 = &g_data_057b9bb8;
label_041f06f2:
        uStack_78 = 0x41f06fa;
        il2cpp_runtime_helper_02304f30(*ppIVar11,puVar23);
        return;
      }
    }
    pCVar28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_78 = 0x41f0705;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(undefined1 (*) [8])((long)ppCVar19 + -8) = __this_01;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar19 + -0x10) = pCVar17;
  *(Il2CppObject **)((long)ppCVar19 + -0x18) = pIVar16;
  pIVar16 = pIVar22;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar21 = (int32_t)pIVar16;
  if ((char)(pCVar28->fields)._isIntSlider == '\0') {
    if (pIVar22 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar22->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07d3;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar28->fields)._floatSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar32 = *pfVar10;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar22->klass != g_data_057b9bb8) {
        return;
      }
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07ea;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar28->fields)._floatSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar32 = (float)*piVar13;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar26,fVar32,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pIVar22 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar22->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07aa;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar28->fields)._intSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar21 = *piVar12;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar22->klass != g_data_057b9be8) {
        return;
      }
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f076c;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar28->fields)._intSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar21 = (int32_t)*pfVar10;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar25,iVar21,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar29 = 0;
  *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f0812;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar19 + -0x20) = auVar33._0_8_;
  if (*(char *)(lVar29 + 0x70) == '\0') {
    plVar27 = *(long **)(lVar29 + 0x60);
  }
  else {
    plVar27 = *(long **)(lVar29 + 0x68);
  }
  if (plVar27 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar27 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_01)
              (plVar27,*(undefined8 *)(*plVar27 + 0x8c0),auVar33._8_8_,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)((long)ppCVar19 + -0x28) = 0x41f0852;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar19 + -0x28) = auVar33._0_8_;
  if ((char)plVar27[0xe] == '\0') {
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar27[0xc];
  }
  else {
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar27[0xd];
  }
  if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar17->klass[4].vtable._7_get_IsStatic.methodPtr;
    (*vtableDispatch)
              (pCVar17,pCVar17->klass[4].vtable._7_get_IsStatic.method,auVar33._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)((long)ppCVar19 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar20 = (undefined1 *)((long)ppCVar19 + -0x30);
  *(Il2CppObject **)((long)ppCVar19 + -0x30) = pIVar22;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar17->fields)._isIntSlider == '\0') {
    pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
    if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar26,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else {
    pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
    if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar25,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  lVar29 = 0;
  *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar20 + -8) = unaff_RBP;
  *(undefined8 *)(puVar20 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar20 + -0x18) = pCVar28;
  *(undefined8 *)(puVar20 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar20 + -0x28) = pCVar17;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar20 + -0x2c) = iVar21;
  *(undefined8 *)(puVar20 + -0x40) = 0x41f099e;
  pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar20 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f09c4;
  bVar7 = System_Enum__IsDefined(enumType,pIVar16,(MethodInfo *)0x0);
  uVar6 = SUB81(pIVar16,0);
  if ((char)bVar7 == '\0') {
    *(int32_t *)(puVar20 + -0x30) = iVar21;
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a30;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar20 + -0x30);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a3f;
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a4c;
    pSVar15 = System_String__Format(pSVar15,pIVar16,(MethodInfo *)0x0);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a5b;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a63;
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this_00,pSVar15,(MethodInfo *)0x0);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a7f;
    uVar14 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this_00,uVar14);
    uVar6 = (undefined1)uVar14;
  }
  else if (*(char *)(lVar29 + 0x70) == '\0') {
    pUVar26 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60);
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar26,iVar21,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    pUVar25 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68);
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar25,iVar21,MethodInfo_Void_set_direction);
      return;
    }
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f0a8f;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar20 + -0x40) = auVar33._0_8_;
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar15 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar15 = (__this_00->fields)._source;
  }
  if (pSVar15 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = pSVar15->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_01)
              (pSVar15,*(undefined8 *)&pSVar15->klass[3]._1.byval_arg.bits,auVar33._8_8_,
               UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)(puVar20 + -0x48) = 0x41f0ac2;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar20 + -0x48) = uVar14;
  if ((char)pSVar15[4].fields._stringLength == '\0') {
    pSVar1 = pSVar15[4].klass;
  }
  else {
    pSVar1 = pSVar15[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    *(undefined8 *)(puVar20 + -0x50) = 0x41f0b06;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_01)(pSVar1,uVar6,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f1f10

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  UnityEngine_UIElements_Slider_o *pUVar3;
  InvokerMethod pIVar4;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar5;
  bool_conflict bVar6;
  undefined4 uVar7;
  uint uVar8;
  Il2CppObject *pIVar9;
  float *pfVar10;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppClass **ppIVar11;
  int32_t *piVar12;
  Il2CppObject *extraout_RAX_01;
  int *piVar13;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_String_o *pSVar14;
  System_ArgumentException_o *__this;
  undefined8 uVar15;
  undefined8 in_RAX;
  Il2CppObject *pIVar16;
  Il2CppObject *extraout_RAX_05;
  MethodInfo *method_00;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar17;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar18;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar19;
  undefined1 *puVar20;
  undefined8 unaff_RBP;
  int32_t iVar21;
  Il2CppObject *pIVar22;
  undefined8 *puVar23;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar24;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar25;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar26;
  long *plVar27;
  System_String_c *pSVar28;
  undefined1 __this_00 [8];
  CustomLogic_CustomLogicSliderBuiltin_o *__this_01;
  long lVar29;
  MethodInfo_24EED20 *pMVar30;
  long lVar31;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar32;
  undefined1 auVar33 [16];
  undefined8 auStack_e8 [2];
  undefined8 uStack_d8;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  MethodInfo_24EED20 *pMStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_b0 [3];
  undefined1 auStack_98 [12];
  int32_t iStack_8c;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_88;
  undefined8 uStack_80;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_78;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_58;
  undefined1 auStack_50 [8];
  Il2CppObject *pIStack_48;
  Il2CppObject *pIStack_40;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_38;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar3 = (__i->fields)._floatSlider;
      if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
        uVar7 = (*(pUVar3->klass->vtable)._105_get_value.methodPtr)
                          (pUVar3,(pUVar3->klass->vtable)._105_get_value.method);
        uStack_8 = CONCAT44(uStack_8._4_4_,uVar7);
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_8);
        return pIVar16;
      }
    }
    else {
      pUVar2 = (__i->fields)._intSlider;
      if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        uVar7 = (*(pUVar2->klass->vtable)._105_get_value.methodPtr)
                          (pUVar2,(pUVar2->klass->vtable)._105_get_value.method);
        uStack_8 = CONCAT44(uVar7,(undefined4)uStack_8);
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
        return pIVar16;
      }
    }
  }
  pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad854 == '\0') {
    uStack_28 = 0x41f1faf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_28 = 0x41f1fbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad854 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41f1fda;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41f1fec;
  pCVar24 = MethodInfo_Object_ConvertTo_Object;
  __this_00 = (undefined1  [8])method;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(pCVar17,pIVar16,method_00);
    return extraout_RAX_05;
  }
  uStack_28 = 0x41f2008;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (undefined1  [8])0x0) {
    pIVar16 = CustomLogic_CustomLogicSliderBuiltin__get_LowValue
                        ((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00,(MethodInfo *)pCVar24);
    return pIVar16;
  }
  pCStack_30 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2021;
  pIStack_40 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pCStack_38 = pCVar17;
  pCStack_30 = (CustomLogic_CustomLogicSliderBuiltin_o *)method;
  if (g_data_057ad855 == '\0') {
    pIStack_48 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_48 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_48 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_48 = (Il2CppObject *)0x41f208c;
  pCVar17 = MethodInfo_Object_ConvertTo_Object;
  __this_01 = pCVar24;
  pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar24,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__this_00 == (undefined1  [8])0x0) {
    pIStack_48 = (Il2CppObject *)0x41f20a8;
    pIStack_48 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (__this_01 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      pIVar16 = CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__this_01,(MethodInfo *)pCVar17);
      return pIVar16;
    }
    auStack_50 = (undefined1  [8])0x41f20c1;
    uStack_60 = il2cpp_runtime_helper_022b2c90();
    pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)__this_00;
    auStack_50 = (undefined1  [8])pCVar24;
    if (g_data_057ad856 == '\0') {
      uStack_68 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_68 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_68 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_68 = 0x41f212c;
    pCVar24 = MethodInfo_Object_ConvertTo_Object;
    pCVar18 = pCVar17;
    pIVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar17,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (__this_01 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_68 = 0x41f2148;
      uStack_68 = il2cpp_runtime_helper_022b2c90();
      if (pCVar18 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar18->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar18->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar18->fields)._intSlider;
        }
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_70 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar7 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._120_get_pageSize.
                    methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                      _120_get_pageSize.method);
          uStack_68 = CONCAT44(uVar7,(undefined4)uStack_68);
          pCStack_70 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
          return pIVar16;
        }
      }
      pCVar18 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_70 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_80 = il2cpp_runtime_helper_022b2c90();
      pCStack_78 = __this_01;
      pCStack_70 = pCVar17;
      if (g_data_057ad857 == '\0') {
        pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj = MethodInfo_Single_ConvertTo_Single;
      pCVar17 = pCVar24;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar24,MethodInfo_Single_ConvertTo_Single);
      if (pCVar18 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar18->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar18->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar18->fields)._intSlider;
        }
        pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pIVar16 = (Il2CppObject *)
                    (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.
                      methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                        _121_set_pageSize.method);
          return pIVar16;
        }
      }
      pCStack_88 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_88 = pCVar18;
      if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_b0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_b0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar18 = pCVar17;
        if ((char)(pCVar17->fields)._isIntSlider == '\0') {
          pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
          if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_b0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_8c = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar26,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
          if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_b0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_8c = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar25,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_b0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_8c);
            return pIVar16;
          }
        }
      }
      lVar29 = 0;
      apCStack_b0[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_b0[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_b0[1] = pCVar18;
      apCStack_b0[2] = pCVar24;
      if (g_data_057ad858 == '\0') {
        _uStack_b8 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_b8 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_b8 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_b8 = 0x41f233c;
      obj_00 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar30 = obj;
      iVar21 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar29 == 0) {
        _uStack_b8 = 0x41f2357;
        _uStack_b8 = il2cpp_runtime_helper_022b2c90();
        if (pMVar30 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar30[1].name == '\0') {
            pIVar4 = (InvokerMethod)pMVar30[1].virtualMethodPointer;
          }
          else {
            pIVar4 = pMVar30[1].invoker_method;
          }
          if (pIVar4 != (InvokerMethod)0x0) {
            pMStack_c0 = (MethodInfo_24EED20 *)0x41f2385;
            uVar5 = (**(code **)(*(long *)pIVar4 + 0x8d8))(pIVar4,*(undefined8 *)(*(long *)pIVar4 + 0x8e0));
            _uStack_b8 = CONCAT17(uVar5,uStack_b8);
            pMStack_c0 = (MethodInfo_24EED20 *)0x41f239e;
            pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_b1);
            return pIVar16;
          }
        }
        lVar31 = 0;
        pMStack_c0 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_d0 = il2cpp_runtime_helper_022b2c90();
        uStack_c8 = lVar29;
        pMStack_c0 = obj;
        if (g_data_057ad859 == '\0') {
          uStack_d8 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_d8 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_d8 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_d8 = 0x41f240c;
        uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar31 != 0) {
          if (*(char *)(lVar31 + 0x70) == '\0') {
            plVar27 = *(long **)(lVar31 + 0x60);
          }
          else {
            plVar27 = *(long **)(lVar31 + 0x68);
          }
          obj_00 = (MethodInfo_24EE950 *)0x0;
          if (plVar27 != (long *)0x0) {
            lVar29 = *plVar27;
            pIVar16 = (Il2CppObject *)
                      (**(code **)(lVar29 + 0x8e8))
                                (plVar27,uVar8 & 0xff,*(undefined8 *)(lVar29 + 0x8f0),lVar29,
                                 *(code **)(lVar29 + 0x8e8));
            return pIVar16;
          }
        }
        uStack_d8 = 0x41f244c;
        uStack_d8 = il2cpp_runtime_helper_022b2c90();
        if (obj_00 != (MethodInfo_24EE950 *)0x0) {
          uStack_d8 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_d8);
          pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_d1);
          return pIVar16;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar16;
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar16);
        return pIVar16;
      }
      puVar20 = auStack_98;
      pCVar17 = apCStack_b0[1];
      __this_01 = apCStack_b0[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar19 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_48;
    pCVar17 = pCStack_58;
    pIVar22 = pIVar16;
    __this_00 = auStack_50;
  }
  else {
    pIVar9 = pIVar16;
    pIVar22 = pIVar16;
    pIStack_40 = pIVar16;
    if (g_data_057ad83f == '\0') {
      pIStack_48 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_48 = (Il2CppObject *)0x41f057b;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._isIntSlider == '\0') {
      if (pIVar16 == (Il2CppObject *)0x0) {
        return pIVar9;
      }
      if (pIVar16->klass == g_data_057b9be8) {
        pIStack_48 = (Il2CppObject *)0x41f0613;
        pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._floatSlider;
        if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar32 = *pfVar10;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar16->klass != g_data_057b9bb8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        pIStack_48 = (Il2CppObject *)0x41f062a;
        piVar13 = (int *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._floatSlider;
        if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar32 = (float)*piVar13;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar26,fVar32,MethodInfo_Void_set_lowValue);
          return extraout_RAX_00;
        }
      }
    }
    else {
      if (pIVar16 == (Il2CppObject *)0x0) {
        return pIVar9;
      }
      if (pIVar16->klass == g_data_057b9bb8) {
        pIStack_48 = (Il2CppObject *)0x41f05ea;
        piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._intSlider;
        if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar21 = *piVar12;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar16->klass != g_data_057b9be8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        pIStack_48 = (Il2CppObject *)0x41f05ac;
        pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar16);
        pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._intSlider;
        if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar21 = (int32_t)*pfVar10;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar25,iVar21,MethodInfo_Void_set_lowValue);
          return extraout_RAX;
        }
      }
    }
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_48 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar19 = &pCStack_58;
    pIStack_48 = pIVar16;
    if (g_data_057ad840 == '\0') {
      uStack_60 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_60 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar17->fields)._isIntSlider == '\0') {
      pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_60 = 0x41f06dc;
        fVar32 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar26,MethodInfo_Single_get_highValue);
        puVar23 = (undefined8 *)auStack_50;
        auStack_50._0_4_ = fVar32;
        ppIVar11 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_60 = 0x41f06ae;
        iVar21 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar25,MethodInfo_Int32_get_highValue);
        puVar23 = (undefined8 *)((long)auStack_50 + 4);
        auStack_50._4_4_ = iVar21;
        ppIVar11 = &g_data_057b9bb8;
label_041f06f2:
        uStack_60 = 0x41f06fa;
        pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*ppIVar11,puVar23);
        return pIVar16;
      }
    }
    __this_01 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_60 = 0x41f0705;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(undefined1 (*) [8])((long)ppCVar19 + -8) = __this_00;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar19 + -0x10) = pCVar17;
  *(Il2CppObject **)((long)ppCVar19 + -0x18) = pIVar16;
  pIVar9 = pIVar22;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f073b;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar21 = (int32_t)pIVar9;
  if ((char)(__this_01->fields)._isIntSlider == '\0') {
    if (pIVar22 == (Il2CppObject *)0x0) {
      return pIVar16;
    }
    if (pIVar22->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07d3;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_01->fields)._floatSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar32 = *pfVar10;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar22->klass != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07ea;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_01->fields)._floatSlider;
      if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar32 = (float)*piVar13;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar26,fVar32,MethodInfo_Void_set_highValue);
        return extraout_RAX_02;
      }
    }
  }
  else {
    if (pIVar22 == (Il2CppObject *)0x0) {
      return pIVar16;
    }
    if (pIVar22->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f07aa;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_01->fields)._intSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar21 = *piVar12;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar22->klass != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f076c;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pIVar22);
      pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_01->fields)._intSlider;
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar21 = (int32_t)*pfVar10;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar25,iVar21,MethodInfo_Void_set_highValue);
        return extraout_RAX_01;
      }
    }
  }
  lVar29 = 0;
  *(undefined8 *)((long)ppCVar19 + -0x20) = 0x41f0812;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar19 + -0x20) = auVar33._0_8_;
  if (*(char *)(lVar29 + 0x70) == '\0') {
    plVar27 = *(long **)(lVar29 + 0x60);
  }
  else {
    plVar27 = *(long **)(lVar29 + 0x68);
  }
  if (plVar27 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar27 + 0x8b8);
    pIVar16 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (plVar27,*(undefined8 *)(*plVar27 + 0x8c0),auVar33._8_8_,UNRECOVERED_JUMPTABLE_01);
    return pIVar16;
  }
  *(undefined8 *)((long)ppCVar19 + -0x28) = 0x41f0852;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar19 + -0x28) = auVar33._0_8_;
  if ((char)plVar27[0xe] == '\0') {
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar27[0xc];
  }
  else {
    pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar27[0xd];
  }
  if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar17->klass[4].vtable._7_get_IsStatic.methodPtr;
    pIVar16 = (Il2CppObject *)
              (*vtableDispatch)
                        (pCVar17,pCVar17->klass[4].vtable._7_get_IsStatic.method,auVar33._8_8_,
                         vtableDispatch);
    return pIVar16;
  }
  *(undefined8 *)((long)ppCVar19 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar20 = (undefined1 *)((long)ppCVar19 + -0x30);
  *(Il2CppObject **)((long)ppCVar19 + -0x30) = pIVar22;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar17->fields)._isIntSlider == '\0') {
    pUVar26 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
    if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar21 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar26,MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar21);
    }
  }
  else {
    pUVar25 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
    if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar21 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar25,MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var,iVar21);
    }
  }
  lVar29 = 0;
  *(undefined8 *)((long)ppCVar19 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar20 + -8) = unaff_RBP;
  *(undefined8 *)(puVar20 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar20 + -0x18) = __this_01;
  *(undefined8 *)(puVar20 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar20 + -0x28) = pCVar17;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar20 + -0x2c) = iVar21;
  *(undefined8 *)(puVar20 + -0x40) = 0x41f099e;
  pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar20 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar20 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f09c4;
  bVar6 = System_Enum__IsDefined(enumType,pIVar16,(MethodInfo *)0x0);
  uVar5 = SUB81(pIVar16,0);
  if ((char)bVar6 == '\0') {
    *(int32_t *)(puVar20 + -0x30) = iVar21;
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a30;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar20 + -0x30);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a3f;
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a4c;
    pSVar14 = System_String__Format(pSVar14,pIVar16,(MethodInfo *)0x0);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a5b;
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar15);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar14,(MethodInfo *)0x0);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a7f;
    uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar20 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar15);
    uVar5 = (undefined1)uVar15;
  }
  else if (*(char *)(lVar29 + 0x70) == '\0') {
    pUVar26 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar26 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar26,iVar21,MethodInfo_Void_set_direction);
      return extraout_RAX_04;
    }
  }
  else {
    pUVar25 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar25 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar25,iVar21,MethodInfo_Void_set_direction);
      return extraout_RAX_03;
    }
  }
  *(undefined8 *)(puVar20 + -0x40) = 0x41f0a8f;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar20 + -0x40) = auVar33._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar14 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar14 = (__this->fields)._source;
  }
  if (pSVar14 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = pSVar14->klass[3]._1.byval_arg.data;
    pIVar16 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (pSVar14,*(undefined8 *)&pSVar14->klass[3]._1.byval_arg.bits,auVar33._8_8_,
                         UNRECOVERED_JUMPTABLE_01);
    return pIVar16;
  }
  *(undefined8 *)(puVar20 + -0x48) = 0x41f0ac2;
  uVar15 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar20 + -0x48) = uVar15;
  if ((char)pSVar14[4].fields._stringLength == '\0') {
    pSVar28 = pSVar14[4].klass;
  }
  else {
    pSVar28 = pSVar14[4].monitor;
  }
  if (pSVar28 == (System_String_c *)0x0) {
    *(undefined8 *)(puVar20 + -0x50) = 0x41f0b06;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar15 >> 8),*(undefined1 *)&(pSVar28->_1).interopData);
  }
  pvVar1 = (pSVar28->_1).image;
  UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar1 + 0x8e8);
  pIVar16 = (Il2CppObject *)
            (*UNRECOVERED_JUMPTABLE_01)
                      (pSVar28,uVar5,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
  return pIVar16;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f1f90

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  System_String_c *pSVar1;
  void *pvVar2;
  UnityEngine_UIElements_Slider_o *pUVar3;
  InvokerMethod pIVar4;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar5;
  bool_conflict bVar6;
  uint uVar7;
  float *pfVar8;
  Il2CppClass **ppIVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Type_o *enumType;
  System_String_o *pSVar12;
  System_ArgumentException_o *__this;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  MethodInfo *method_00;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar15;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar16;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar17;
  undefined1 *puVar18;
  undefined8 unaff_RBP;
  int32_t iVar19;
  Il2CppObject *pIVar20;
  undefined8 *puVar21;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar22;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar23;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar24;
  long *plVar25;
  undefined1 __this_00 [8];
  CustomLogic_CustomLogicSliderBuiltin_o *__this_01;
  long lVar26;
  MethodInfo_24EED20 *pMVar27;
  long lVar28;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  MethodInfo_24EED20 *pMStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_a8 [3];
  undefined1 auStack_90 [12];
  int32_t iStack_84;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_70;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_50;
  undefined1 auStack_48 [8];
  Il2CppObject *pIStack_40;
  Il2CppObject *pIStack_38;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad854 == '\0') {
    uStack_20 = 0x41f1faf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_20 = 0x41f1fbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad854 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41f1fda;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41f1fec;
  pCVar15 = MethodInfo_Object_ConvertTo_Object;
  __this_00 = (undefined1  [8])__v;
  pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(__i,pIVar14,method_00);
    return;
  }
  uStack_20 = 0x41f2008;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (undefined1  [8])0x0) {
    CustomLogic_CustomLogicSliderBuiltin__get_LowValue
              ((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00,(MethodInfo *)pCVar15);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x41f2021;
  pIStack_38 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ad855 == '\0') {
    pIStack_40 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_40 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_40 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_40 = (Il2CppObject *)0x41f208c;
  pCVar22 = MethodInfo_Object_ConvertTo_Object;
  __this_01 = pCVar15;
  pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)pCVar15,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__this_00 == (undefined1  [8])0x0) {
    pIStack_40 = (Il2CppObject *)0x41f20a8;
    pIStack_40 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (__this_01 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__this_01,(MethodInfo *)pCVar22);
      return;
    }
    auStack_48 = (undefined1  [8])0x41f20c1;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    pCStack_50 = (CustomLogic_CustomLogicSliderBuiltin_o *)__this_00;
    auStack_48 = (undefined1  [8])pCVar15;
    if (g_data_057ad856 == '\0') {
      uStack_60 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_60 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_60 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_60 = 0x41f212c;
    pCVar15 = MethodInfo_Object_ConvertTo_Object;
    pCVar16 = pCVar22;
    pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar22,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (__this_01 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_60 = 0x41f2148;
      uStack_60 = il2cpp_runtime_helper_022b2c90();
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar16->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar16->fields)._intSlider;
        }
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar30 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._120_get_pageSize.
                     methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                       _120_get_pageSize.method);
          uStack_60 = CONCAT44(uVar30,(undefined4)uStack_60);
          pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
          return;
        }
      }
      pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_78 = il2cpp_runtime_helper_022b2c90();
      pCStack_70 = __this_01;
      pCStack_68 = pCVar22;
      if (g_data_057ad857 == '\0') {
        pCStack_80 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_80 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_80 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_80 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj = MethodInfo_Single_ConvertTo_Single;
      pCVar22 = pCVar15;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar15,MethodInfo_Single_ConvertTo_Single);
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar16->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar16->fields)._intSlider;
        }
        pCVar22 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.methodPtr)
                    (pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.
                            method);
          return;
        }
      }
      pCStack_80 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_80 = pCVar16;
      if (pCVar22 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_a8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_a8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar16 = pCVar22;
        if ((char)(pCVar22->fields)._isIntSlider == '\0') {
          pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar22->fields)._floatSlider;
          if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_a8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_84 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar24,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar22->fields)._intSlider;
          if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_a8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_84 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar23,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_a8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_84);
            return;
          }
        }
      }
      lVar26 = 0;
      apCStack_a8[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_a8[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_a8[1] = pCVar16;
      apCStack_a8[2] = pCVar15;
      if (g_data_057ad858 == '\0') {
        _uStack_b0 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_b0 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_b0 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_b0 = 0x41f233c;
      obj_00 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar27 = obj;
      iVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar26 == 0) {
        _uStack_b0 = 0x41f2357;
        _uStack_b0 = il2cpp_runtime_helper_022b2c90();
        if (pMVar27 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar27[1].name == '\0') {
            pIVar4 = (InvokerMethod)pMVar27[1].virtualMethodPointer;
          }
          else {
            pIVar4 = pMVar27[1].invoker_method;
          }
          if (pIVar4 != (InvokerMethod)0x0) {
            pMStack_b8 = (MethodInfo_24EED20 *)0x41f2385;
            uVar5 = (**(code **)(*(long *)pIVar4 + 0x8d8))(pIVar4,*(undefined8 *)(*(long *)pIVar4 + 0x8e0));
            _uStack_b0 = CONCAT17(uVar5,uStack_b0);
            pMStack_b8 = (MethodInfo_24EED20 *)0x41f239e;
            il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_a9);
            return;
          }
        }
        lVar28 = 0;
        pMStack_b8 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_c8 = il2cpp_runtime_helper_022b2c90();
        uStack_c0 = lVar26;
        pMStack_b8 = obj;
        if (g_data_057ad859 == '\0') {
          uStack_d0 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_d0 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_d0 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_d0 = 0x41f240c;
        uVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar28 != 0) {
          if (*(char *)(lVar28 + 0x70) == '\0') {
            plVar25 = *(long **)(lVar28 + 0x60);
          }
          else {
            plVar25 = *(long **)(lVar28 + 0x68);
          }
          obj_00 = (MethodInfo_24EE950 *)0x0;
          if (plVar25 != (long *)0x0) {
            lVar26 = *plVar25;
            (**(code **)(lVar26 + 0x8e8))
                      (plVar25,uVar7 & 0xff,*(undefined8 *)(lVar26 + 0x8f0),lVar26,*(code **)(lVar26 + 0x8e8))
            ;
            return;
          }
        }
        uStack_d0 = 0x41f244c;
        uStack_d0 = il2cpp_runtime_helper_022b2c90();
        if (obj_00 != (MethodInfo_24EE950 *)0x0) {
          uStack_d0 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_d0);
          il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_c9);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar14;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar14);
        return;
      }
      puVar18 = auStack_90;
      pCVar15 = apCStack_a8[1];
      __this_01 = apCStack_a8[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_40;
    pCVar15 = pCStack_50;
    pIVar20 = pIVar14;
    __this_00 = auStack_48;
  }
  else {
    pIVar20 = pIVar14;
    pIStack_38 = pIVar14;
    if (g_data_057ad83f == '\0') {
      pIStack_40 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_40 = (Il2CppObject *)0x41f057b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._isIntSlider == '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar14->klass == g_data_057b9be8) {
        pIStack_40 = (Il2CppObject *)0x41f0613;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._floatSlider;
        if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar29 = *pfVar8;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar14->klass != g_data_057b9bb8) {
          return;
        }
        pIStack_40 = (Il2CppObject *)0x41f062a;
        piVar11 = (int *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._floatSlider;
        if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar29 = (float)*piVar11;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar24,fVar29,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    else {
      if (pIVar14 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar14->klass == g_data_057b9bb8) {
        pIStack_40 = (Il2CppObject *)0x41f05ea;
        piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._intSlider;
        if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar19 = *piVar10;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar14->klass != g_data_057b9be8) {
          return;
        }
        pIStack_40 = (Il2CppObject *)0x41f05ac;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__this_00)->fields)._intSlider;
        if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar19 = (int32_t)*pfVar8;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar23,iVar19,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_40 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar17 = &pCStack_50;
    pIStack_40 = pIVar14;
    if (g_data_057ad840 == '\0') {
      uStack_58 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_58 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar15->fields)._isIntSlider == '\0') {
      pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_58 = 0x41f06dc;
        fVar29 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar24,MethodInfo_Single_get_highValue);
        puVar21 = (undefined8 *)auStack_48;
        auStack_48._0_4_ = fVar29;
        ppIVar9 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_58 = 0x41f06ae;
        iVar19 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar23,MethodInfo_Int32_get_highValue);
        puVar21 = (undefined8 *)((long)auStack_48 + 4);
        auStack_48._4_4_ = iVar19;
        ppIVar9 = &g_data_057b9bb8;
label_041f06f2:
        uStack_58 = 0x41f06fa;
        il2cpp_runtime_helper_02304f30(*ppIVar9,puVar21);
        return;
      }
    }
    __this_01 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_58 = 0x41f0705;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(undefined1 (*) [8])((long)ppCVar17 + -8) = __this_00;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -0x10) = pCVar15;
  *(Il2CppObject **)((long)ppCVar17 + -0x18) = pIVar14;
  pIVar14 = pIVar20;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar19 = (int32_t)pIVar14;
  if ((char)(__this_01->fields)._isIntSlider == '\0') {
    if (pIVar20 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar20->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07d3;
      pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_01->fields)._floatSlider;
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar29 = *pfVar8;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar20->klass != g_data_057b9bb8) {
        return;
      }
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07ea;
      piVar11 = (int *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_01->fields)._floatSlider;
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar29 = (float)*piVar11;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar24,fVar29,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pIVar20 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar20->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07aa;
      piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_01->fields)._intSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = *piVar10;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar20->klass != g_data_057b9be8) {
        return;
      }
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f076c;
      pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_01->fields)._intSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = (int32_t)*pfVar8;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar23,iVar19,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar26 = 0;
  *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f0812;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x20) = auVar31._0_8_;
  if (*(char *)(lVar26 + 0x70) == '\0') {
    plVar25 = *(long **)(lVar26 + 0x60);
  }
  else {
    plVar25 = *(long **)(lVar26 + 0x68);
  }
  if (plVar25 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar25 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_01)
              (plVar25,*(undefined8 *)(*plVar25 + 0x8c0),auVar31._8_8_,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)((long)ppCVar17 + -0x28) = 0x41f0852;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x28) = auVar31._0_8_;
  if ((char)plVar25[0xe] == '\0') {
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar25[0xc];
  }
  else {
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar25[0xd];
  }
  if (pCVar15 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar15->klass[4].vtable._7_get_IsStatic.methodPtr;
    (*vtableDispatch)
              (pCVar15,pCVar15->klass[4].vtable._7_get_IsStatic.method,auVar31._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)((long)ppCVar17 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar18 = (undefined1 *)((long)ppCVar17 + -0x30);
  *(Il2CppObject **)((long)ppCVar17 + -0x30) = pIVar20;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar15->fields)._isIntSlider == '\0') {
    pUVar24 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
    if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar24,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else {
    pUVar23 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
    if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar23,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  lVar26 = 0;
  *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar18 + -8) = unaff_RBP;
  *(undefined8 *)(puVar18 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar18 + -0x18) = __this_01;
  *(undefined8 *)(puVar18 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar18 + -0x28) = pCVar15;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar18 + -0x2c) = iVar19;
  *(undefined8 *)(puVar18 + -0x40) = 0x41f099e;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar18 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f09c4;
  bVar6 = System_Enum__IsDefined(enumType,pIVar14,(MethodInfo *)0x0);
  uVar5 = SUB81(pIVar14,0);
  if ((char)bVar6 == '\0') {
    *(int32_t *)(puVar18 + -0x30) = iVar19;
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a30;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar18 + -0x30);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a3f;
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a4c;
    pSVar12 = System_String__Format(pSVar12,pIVar14,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a5b;
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar12,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a7f;
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar13);
    uVar5 = (undefined1)uVar13;
  }
  else if (*(char *)(lVar26 + 0x70) == '\0') {
    pUVar24 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar26 + 0x60);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar24 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar24,iVar19,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    pUVar23 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar26 + 0x68);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar23 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar23,iVar19,MethodInfo_Void_set_direction);
      return;
    }
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f0a8f;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x40) = auVar31._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar12 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar12 = (__this->fields)._source;
  }
  if (pSVar12 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = pSVar12->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_01)
              (pSVar12,*(undefined8 *)&pSVar12->klass[3]._1.byval_arg.bits,auVar31._8_8_,
               UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)(puVar18 + -0x48) = 0x41f0ac2;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar18 + -0x48) = uVar13;
  if ((char)pSVar12[4].fields._stringLength == '\0') {
    pSVar1 = pSVar12[4].klass;
  }
  else {
    pSVar1 = pSVar12[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    *(undefined8 *)(puVar18 + -0x50) = 0x41f0b06;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_01)(pSVar1,uVar5,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f2010

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar1;
  UnityEngine_UIElements_Slider_o *pUVar2;
  InvokerMethod pIVar3;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar4;
  bool_conflict bVar5;
  uint uVar6;
  Il2CppObject *pIVar7;
  float *pfVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppClass **ppIVar9;
  int32_t *piVar10;
  Il2CppObject *extraout_RAX_01;
  int *piVar11;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_String_o *pSVar12;
  System_ArgumentException_o *__this;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar15;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar16;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar17;
  undefined1 *puVar18;
  undefined8 unaff_RBP;
  int32_t iVar19;
  Il2CppObject *pIVar20;
  undefined8 *puVar21;
  CustomLogic_CustomLogicSliderBuiltin_o *obj;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EE950 *obj_01;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar22;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar23;
  long *plVar24;
  System_String_c *pSVar25;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  long lVar26;
  MethodInfo_24EED20 *pMVar27;
  long lVar28;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined8 auStack_c8 [2];
  undefined8 uStack_b8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  MethodInfo_24EED20 *pMStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_90 [3];
  undefined1 auStack_78 [12];
  int32_t iStack_6c;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_58;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_38;
  undefined1 auStack_30 [8];
  Il2CppObject *pIStack_28;
  Il2CppObject *pIStack_20;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIVar14 = CustomLogic_CustomLogicSliderBuiltin__get_LowValue(__i,method);
    return pIVar14;
  }
  pIStack_20 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad855 == '\0') {
    pIStack_28 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_28 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_28 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_28 = (Il2CppObject *)0x41f208c;
  pCVar15 = MethodInfo_Object_ConvertTo_Object;
  __this_00 = (CustomLogic_CustomLogicSliderBuiltin_o *)method;
  pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIStack_28 = (Il2CppObject *)0x41f20a8;
    pIStack_28 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (__this_00 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      pIVar14 = CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__this_00,(MethodInfo *)pCVar15);
      return pIVar14;
    }
    auStack_30 = (undefined1  [8])0x41f20c1;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    pCStack_38 = __i;
    auStack_30 = (undefined1  [8])method;
    if (g_data_057ad856 == '\0') {
      uStack_48 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_48 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_48 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_48 = 0x41f212c;
    obj = MethodInfo_Object_ConvertTo_Object;
    pCVar16 = pCVar15;
    pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar15,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (__this_00 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_48 = 0x41f2148;
      uStack_48 = il2cpp_runtime_helper_022b2c90();
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar2 = (pCVar16->fields)._floatSlider;
        }
        else {
          pUVar2 = (UnityEngine_UIElements_Slider_o *)(pCVar16->fields)._intSlider;
        }
        if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_50 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar30 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar2->klass)->vtable)._120_get_pageSize.
                     methodPtr)(pUVar2,(((UnityEngine_UIElements_SliderInt_c *)pUVar2->klass)->vtable).
                                       _120_get_pageSize.method);
          uStack_48 = CONCAT44(uVar30,(undefined4)uStack_48);
          pCStack_50 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
          return pIVar14;
        }
      }
      pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_50 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_60 = il2cpp_runtime_helper_022b2c90();
      pCStack_58 = __this_00;
      pCStack_50 = pCVar15;
      if (g_data_057ad857 == '\0') {
        pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj_00 = MethodInfo_Single_ConvertTo_Single;
      pCVar15 = obj;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar2 = (pCVar16->fields)._floatSlider;
        }
        else {
          pUVar2 = (UnityEngine_UIElements_Slider_o *)(pCVar16->fields)._intSlider;
        }
        pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pIVar14 = (Il2CppObject *)
                    (*(((UnityEngine_UIElements_SliderInt_c *)pUVar2->klass)->vtable)._121_set_pageSize.
                      methodPtr)(pUVar2,(((UnityEngine_UIElements_SliderInt_c *)pUVar2->klass)->vtable).
                                        _121_set_pageSize.method);
          return pIVar14;
        }
      }
      pCStack_68 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_68 = pCVar16;
      if (pCVar15 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_90[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_90[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar16 = pCVar15;
        if ((char)(pCVar15->fields)._isIntSlider == '\0') {
          pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
          if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_90[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_6c = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar23,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
          if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_90[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_6c = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar22,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_90[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_6c);
            return pIVar14;
          }
        }
      }
      lVar26 = 0;
      apCStack_90[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_90[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_90[1] = pCVar16;
      apCStack_90[2] = obj;
      if (g_data_057ad858 == '\0') {
        _uStack_98 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_98 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_98 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_98 = 0x41f233c;
      obj_01 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar27 = obj_00;
      iVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar26 == 0) {
        _uStack_98 = 0x41f2357;
        _uStack_98 = il2cpp_runtime_helper_022b2c90();
        if (pMVar27 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar27[1].name == '\0') {
            pIVar3 = (InvokerMethod)pMVar27[1].virtualMethodPointer;
          }
          else {
            pIVar3 = pMVar27[1].invoker_method;
          }
          if (pIVar3 != (InvokerMethod)0x0) {
            pMStack_a0 = (MethodInfo_24EED20 *)0x41f2385;
            uVar4 = (**(code **)(*(long *)pIVar3 + 0x8d8))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 0x8e0));
            _uStack_98 = CONCAT17(uVar4,uStack_98);
            pMStack_a0 = (MethodInfo_24EED20 *)0x41f239e;
            pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_91);
            return pIVar14;
          }
        }
        lVar28 = 0;
        pMStack_a0 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_b0 = il2cpp_runtime_helper_022b2c90();
        uStack_a8 = lVar26;
        pMStack_a0 = obj_00;
        if (g_data_057ad859 == '\0') {
          uStack_b8 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_b8 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_b8 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_b8 = 0x41f240c;
        uVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar28 != 0) {
          if (*(char *)(lVar28 + 0x70) == '\0') {
            plVar24 = *(long **)(lVar28 + 0x60);
          }
          else {
            plVar24 = *(long **)(lVar28 + 0x68);
          }
          obj_01 = (MethodInfo_24EE950 *)0x0;
          if (plVar24 != (long *)0x0) {
            lVar26 = *plVar24;
            pIVar14 = (Il2CppObject *)
                      (**(code **)(lVar26 + 0x8e8))
                                (plVar24,uVar6 & 0xff,*(undefined8 *)(lVar26 + 0x8f0),lVar26,
                                 *(code **)(lVar26 + 0x8e8));
            return pIVar14;
          }
        }
        uStack_b8 = 0x41f244c;
        uStack_b8 = il2cpp_runtime_helper_022b2c90();
        if (obj_01 != (MethodInfo_24EE950 *)0x0) {
          uStack_b8 = CONCAT17(*(undefined1 *)&obj_01[1].name,(undefined7)uStack_b8);
          pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_b1);
          return pIVar14;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar14;
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar14);
        return pIVar14;
      }
      puVar18 = auStack_78;
      pCVar15 = apCStack_90[1];
      __this_00 = apCStack_90[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_28;
    pCVar15 = pCStack_38;
    pIVar20 = pIVar14;
    __i = (CustomLogic_CustomLogicSliderBuiltin_o *)auStack_30;
  }
  else {
    pIVar7 = pIVar14;
    pIVar20 = pIVar14;
    pIStack_20 = pIVar14;
    if (g_data_057ad83f == '\0') {
      pIStack_28 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_28 = (Il2CppObject *)0x41f057b;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(__i->fields)._isIntSlider == '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) {
        return pIVar7;
      }
      if (pIVar14->klass == g_data_057b9be8) {
        pIStack_28 = (Il2CppObject *)0x41f0613;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar29 = *pfVar8;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar14->klass != g_data_057b9bb8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        pIStack_28 = (Il2CppObject *)0x41f062a;
        piVar11 = (int *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar29 = (float)*piVar11;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar23,fVar29,MethodInfo_Void_set_lowValue);
          return extraout_RAX_00;
        }
      }
    }
    else {
      if (pIVar14 == (Il2CppObject *)0x0) {
        return pIVar7;
      }
      if (pIVar14->klass == g_data_057b9bb8) {
        pIStack_28 = (Il2CppObject *)0x41f05ea;
        piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar19 = *piVar10;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar14->klass != g_data_057b9be8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        pIStack_28 = (Il2CppObject *)0x41f05ac;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar19 = (int32_t)*pfVar8;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar22,iVar19,MethodInfo_Void_set_lowValue);
          return extraout_RAX;
        }
      }
    }
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_28 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar17 = &pCStack_38;
    pIStack_28 = pIVar14;
    if (g_data_057ad840 == '\0') {
      uStack_40 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_40 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar15->fields)._isIntSlider == '\0') {
      pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_40 = 0x41f06dc;
        fVar29 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar23,MethodInfo_Single_get_highValue);
        puVar21 = (undefined8 *)auStack_30;
        auStack_30._0_4_ = fVar29;
        ppIVar9 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_40 = 0x41f06ae;
        iVar19 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar22,MethodInfo_Int32_get_highValue);
        puVar21 = (undefined8 *)((long)auStack_30 + 4);
        auStack_30._4_4_ = iVar19;
        ppIVar9 = &g_data_057b9bb8;
label_041f06f2:
        uStack_40 = 0x41f06fa;
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*ppIVar9,puVar21);
        return pIVar14;
      }
    }
    __this_00 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_40 = 0x41f0705;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -8) = __i;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -0x10) = pCVar15;
  *(Il2CppObject **)((long)ppCVar17 + -0x18) = pIVar14;
  pIVar7 = pIVar20;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f073b;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar19 = (int32_t)pIVar7;
  if ((char)(__this_00->fields)._isIntSlider == '\0') {
    if (pIVar20 == (Il2CppObject *)0x0) {
      return pIVar14;
    }
    if (pIVar20->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07d3;
      pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_00->fields)._floatSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar29 = *pfVar8;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar20->klass != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07ea;
      piVar11 = (int *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_00->fields)._floatSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar29 = (float)*piVar11;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar23,fVar29,MethodInfo_Void_set_highValue);
        return extraout_RAX_02;
      }
    }
  }
  else {
    if (pIVar20 == (Il2CppObject *)0x0) {
      return pIVar14;
    }
    if (pIVar20->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07aa;
      piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_00->fields)._intSlider;
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = *piVar10;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar20->klass != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f076c;
      pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_00->fields)._intSlider;
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = (int32_t)*pfVar8;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar22,iVar19,MethodInfo_Void_set_highValue);
        return extraout_RAX_01;
      }
    }
  }
  lVar26 = 0;
  *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f0812;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x20) = auVar31._0_8_;
  if (*(char *)(lVar26 + 0x70) == '\0') {
    plVar24 = *(long **)(lVar26 + 0x60);
  }
  else {
    plVar24 = *(long **)(lVar26 + 0x68);
  }
  if (plVar24 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar24 + 0x8b8);
    pIVar14 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (plVar24,*(undefined8 *)(*plVar24 + 0x8c0),auVar31._8_8_,UNRECOVERED_JUMPTABLE_01);
    return pIVar14;
  }
  *(undefined8 *)((long)ppCVar17 + -0x28) = 0x41f0852;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x28) = auVar31._0_8_;
  if ((char)plVar24[0xe] == '\0') {
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar24[0xc];
  }
  else {
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar24[0xd];
  }
  if (pCVar15 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar15->klass[4].vtable._7_get_IsStatic.methodPtr;
    pIVar14 = (Il2CppObject *)
              (*vtableDispatch)
                        (pCVar15,pCVar15->klass[4].vtable._7_get_IsStatic.method,auVar31._8_8_,
                         vtableDispatch);
    return pIVar14;
  }
  *(undefined8 *)((long)ppCVar17 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar18 = (undefined1 *)((long)ppCVar17 + -0x30);
  *(Il2CppObject **)((long)ppCVar17 + -0x30) = pIVar20;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar15->fields)._isIntSlider == '\0') {
    pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
    if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar19 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar23,MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar19);
    }
  }
  else {
    pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
    if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar19 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar22,MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var,iVar19);
    }
  }
  lVar26 = 0;
  *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar18 + -8) = unaff_RBP;
  *(undefined8 *)(puVar18 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar18 + -0x18) = __this_00;
  *(undefined8 *)(puVar18 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar18 + -0x28) = pCVar15;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar18 + -0x2c) = iVar19;
  *(undefined8 *)(puVar18 + -0x40) = 0x41f099e;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar18 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f09c4;
  bVar5 = System_Enum__IsDefined(enumType,pIVar14,(MethodInfo *)0x0);
  uVar4 = SUB81(pIVar14,0);
  if ((char)bVar5 == '\0') {
    *(int32_t *)(puVar18 + -0x30) = iVar19;
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a30;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar18 + -0x30);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a3f;
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a4c;
    pSVar12 = System_String__Format(pSVar12,pIVar14,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a5b;
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar12,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a7f;
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar13);
    uVar4 = (undefined1)uVar13;
  }
  else if (*(char *)(lVar26 + 0x70) == '\0') {
    pUVar23 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar26 + 0x60);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar23,iVar19,MethodInfo_Void_set_direction);
      return extraout_RAX_04;
    }
  }
  else {
    pUVar22 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar26 + 0x68);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar22,iVar19,MethodInfo_Void_set_direction);
      return extraout_RAX_03;
    }
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f0a8f;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x40) = auVar31._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar12 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar12 = (__this->fields)._source;
  }
  if (pSVar12 == (System_String_o *)0x0) {
    *(undefined8 *)(puVar18 + -0x48) = 0x41f0ac2;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar18 + -0x48) = uVar13;
    if ((char)pSVar12[4].fields._stringLength == '\0') {
      pSVar25 = pSVar12[4].klass;
    }
    else {
      pSVar25 = pSVar12[4].monitor;
    }
    if (pSVar25 == (System_String_c *)0x0) {
      *(undefined8 *)(puVar18 + -0x50) = 0x41f0b06;
      uVar13 = il2cpp_runtime_helper_022b2c90();
      return (Il2CppObject *)CONCAT71((int7)((ulong)uVar13 >> 8),*(undefined1 *)&(pSVar25->_1).interopData);
    }
    pvVar1 = (pSVar25->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar1 + 0x8e8);
    pIVar14 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (pSVar25,uVar4,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
    return pIVar14;
  }
  UNRECOVERED_JUMPTABLE_01 = pSVar12->klass[3]._1.byval_arg.data;
  pIVar14 = (Il2CppObject *)
            (*UNRECOVERED_JUMPTABLE_01)
                      (pSVar12,*(undefined8 *)&pSVar12->klass[3]._1.byval_arg.bits,auVar31._8_8_,
                       UNRECOVERED_JUMPTABLE_01);
  return pIVar14;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f2030

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  System_String_c *pSVar1;
  void *pvVar2;
  UnityEngine_UIElements_Slider_o *pUVar3;
  InvokerMethod pIVar4;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar5;
  bool_conflict bVar6;
  uint uVar7;
  float *pfVar8;
  Il2CppClass **ppIVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Type_o *enumType;
  System_String_o *pSVar12;
  System_ArgumentException_o *__this;
  undefined8 uVar13;
  Il2CppObject *in_RAX;
  Il2CppObject *pIVar14;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar15;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar16;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar17;
  undefined1 *puVar18;
  undefined8 unaff_RBP;
  int32_t iVar19;
  Il2CppObject *pIVar20;
  undefined8 *puVar21;
  CustomLogic_CustomLogicSliderBuiltin_o *obj;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EE950 *obj_01;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar22;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar23;
  long *plVar24;
  CustomLogic_CustomLogicSliderBuiltin_o *__this_00;
  long lVar25;
  MethodInfo_24EED20 *pMVar26;
  long lVar27;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float fVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  MethodInfo_24EED20 *pMStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  CustomLogic_CustomLogicSliderBuiltin_o *apCStack_88 [3];
  undefined1 auStack_70 [12];
  int32_t iStack_64;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_50;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_30;
  undefined1 auStack_28 [8];
  Il2CppObject *pIStack_20;
  Il2CppObject *pIStack_18;
  
  pIStack_18 = in_RAX;
  if (g_data_057ad855 == '\0') {
    pIStack_20 = (Il2CppObject *)0x41f204f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    pIStack_20 = (Il2CppObject *)0x41f205b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad855 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pIStack_20 = (Il2CppObject *)0x41f207a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_20 = (Il2CppObject *)0x41f208c;
  pCVar15 = MethodInfo_Object_ConvertTo_Object;
  __this_00 = (CustomLogic_CustomLogicSliderBuiltin_o *)__v;
  pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIStack_20 = (Il2CppObject *)0x41f20a8;
    pIStack_20 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    if (__this_00 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__this_00,(MethodInfo *)pCVar15);
      return;
    }
    auStack_28 = (undefined1  [8])0x41f20c1;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    auStack_28 = (undefined1  [8])__v;
    if (g_data_057ad856 == '\0') {
      uStack_40 = 0x41f20ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
      uStack_40 = 0x41f20fb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad856 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x41f211a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x41f212c;
    obj = MethodInfo_Object_ConvertTo_Object;
    pCVar16 = pCVar15;
    pIVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)pCVar15,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
    if (__this_00 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      uStack_40 = 0x41f2148;
      uStack_40 = il2cpp_runtime_helper_022b2c90();
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar16->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar16->fields)._intSlider;
        }
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2175;
          uVar29 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._120_get_pageSize.
                     methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                       _120_get_pageSize.method);
          uStack_40 = CONCAT44(uVar29,(undefined4)uStack_40);
          pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2190;
          il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
          return;
        }
      }
      pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)
                   CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
      ;
      uStack_58 = il2cpp_runtime_helper_022b2c90();
      pCStack_50 = __this_00;
      pCStack_48 = pCVar15;
      if (g_data_057ad857 == '\0') {
        pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
        pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad857 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
      obj_00 = MethodInfo_Single_ConvertTo_Single;
      pCVar15 = obj;
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
      if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if ((char)(pCVar16->fields)._isIntSlider == '\0') {
          pUVar3 = (pCVar16->fields)._floatSlider;
        }
        else {
          pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar16->fields)._intSlider;
        }
        pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
        if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
          (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.methodPtr)
                    (pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.
                            method);
          return;
        }
      }
      pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
      il2cpp_runtime_helper_022b2c90();
      pCStack_60 = pCVar16;
      if (pCVar15 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        if (g_data_057ad842 == '\0') {
          apCStack_88[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          apCStack_88[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
          il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
          g_data_057ad842 = '\x01';
        }
        pCVar16 = pCVar15;
        if ((char)(pCVar15->fields)._isIntSlider == '\0') {
          pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
          if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
            apCStack_88[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
            iStack_64 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar23,MethodInfo_SliderDirection_get_direction);
            goto label_041f22b1;
          }
        }
        else {
          pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
          if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
            apCStack_88[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
            iStack_64 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar22,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
            apCStack_88[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_64);
            return;
          }
        }
      }
      lVar25 = 0;
      apCStack_88[2] = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
      apCStack_88[0] = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
      apCStack_88[1] = pCVar16;
      apCStack_88[2] = obj;
      if (g_data_057ad858 == '\0') {
        _uStack_90 = 0x41f22ff;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
        _uStack_90 = 0x41f230b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad858 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        _uStack_90 = 0x41f232a;
        il2cpp_runtime_helper_02337ed0();
      }
      _uStack_90 = 0x41f233c;
      obj_01 = MethodInfo_Int32_ConvertTo_Int32;
      pMVar26 = obj_00;
      iVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
      if (lVar25 == 0) {
        _uStack_90 = 0x41f2357;
        _uStack_90 = il2cpp_runtime_helper_022b2c90();
        if (pMVar26 != (MethodInfo_24EED20 *)0x0) {
          if (*(char *)&pMVar26[1].name == '\0') {
            pIVar4 = (InvokerMethod)pMVar26[1].virtualMethodPointer;
          }
          else {
            pIVar4 = pMVar26[1].invoker_method;
          }
          if (pIVar4 != (InvokerMethod)0x0) {
            pMStack_98 = (MethodInfo_24EED20 *)0x41f2385;
            uVar5 = (**(code **)(*(long *)pIVar4 + 0x8d8))(pIVar4,*(undefined8 *)(*(long *)pIVar4 + 0x8e0));
            _uStack_90 = CONCAT17(uVar5,uStack_90);
            pMStack_98 = (MethodInfo_24EED20 *)0x41f239e;
            il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_89);
            return;
          }
        }
        lVar27 = 0;
        pMStack_98 = (MethodInfo_24EED20 *)0x41f23ae;
        uStack_a8 = il2cpp_runtime_helper_022b2c90();
        uStack_a0 = lVar25;
        pMStack_98 = obj_00;
        if (g_data_057ad859 == '\0') {
          uStack_b0 = 0x41f23cf;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
          uStack_b0 = 0x41f23db;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
          g_data_057ad859 = '\x01';
        }
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          uStack_b0 = 0x41f23fa;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_b0 = 0x41f240c;
        uVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
        if (lVar27 != 0) {
          if (*(char *)(lVar27 + 0x70) == '\0') {
            plVar24 = *(long **)(lVar27 + 0x60);
          }
          else {
            plVar24 = *(long **)(lVar27 + 0x68);
          }
          obj_01 = (MethodInfo_24EE950 *)0x0;
          if (plVar24 != (long *)0x0) {
            lVar25 = *plVar24;
            (**(code **)(lVar25 + 0x8e8))
                      (plVar24,uVar7 & 0xff,*(undefined8 *)(lVar25 + 0x8f0),lVar25,*(code **)(lVar25 + 0x8e8))
            ;
            return;
          }
        }
        uStack_b0 = 0x41f244c;
        uStack_b0 = il2cpp_runtime_helper_022b2c90();
        if (obj_01 != (MethodInfo_24EE950 *)0x0) {
          uStack_b0 = CONCAT17(*(undefined1 *)&obj_01[1].name,(undefined7)uStack_b0);
          il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_a9);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad85a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad85a = '\x01';
        }
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar14;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar14);
        return;
      }
      puVar18 = auStack_70;
      pCVar15 = apCStack_88[1];
      __this_00 = apCStack_88[2];
      goto CustomLogic_CustomLogicSliderBuiltin__set_Direction;
    }
    ppCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o **)&pIStack_20;
    pCVar15 = pCStack_30;
    pIVar20 = pIVar14;
    __i = (CustomLogic_CustomLogicSliderBuiltin_o *)auStack_28;
  }
  else {
    pIVar20 = pIVar14;
    pIStack_18 = pIVar14;
    if (g_data_057ad83f == '\0') {
      pIStack_20 = (Il2CppObject *)0x41f056f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      pIStack_20 = (Il2CppObject *)0x41f057b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
      g_data_057ad83f = '\x01';
    }
    if ((char)(__i->fields)._isIntSlider == '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar14->klass == g_data_057b9be8) {
        pIStack_20 = (Il2CppObject *)0x41f0613;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar28 = *pfVar8;
          goto label_041f0637;
        }
      }
      else {
        if (pIVar14->klass != g_data_057b9bb8) {
          return;
        }
        pIStack_20 = (Il2CppObject *)0x41f062a;
        piVar11 = (int *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          fVar28 = (float)*piVar11;
label_041f0637:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar23,fVar28,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    else {
      if (pIVar14 == (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar14->klass == g_data_057b9bb8) {
        pIStack_20 = (Il2CppObject *)0x41f05ea;
        piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar19 = *piVar10;
          goto label_041f05f5;
        }
      }
      else {
        if (pIVar14->klass != g_data_057b9be8) {
          return;
        }
        pIStack_20 = (Il2CppObject *)0x41f05ac;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar14);
        pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar19 = (int32_t)*pfVar8;
label_041f05f5:
          UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar22,iVar19,MethodInfo_Void_set_lowValue);
          return;
        }
      }
    }
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_20 = (Il2CppObject *)0x41f0652;
    il2cpp_runtime_helper_022b2c90();
    ppCVar17 = &pCStack_30;
    pIStack_20 = pIVar14;
    if (g_data_057ad840 == '\0') {
      uStack_38 = 0x41f067d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
      uStack_38 = 0x41f0689;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
      g_data_057ad840 = '\x01';
    }
    if ((char)(pCVar15->fields)._isIntSlider == '\0') {
      pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        uStack_38 = 0x41f06dc;
        fVar28 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar23,MethodInfo_Single_get_highValue);
        puVar21 = (undefined8 *)auStack_28;
        auStack_28._0_4_ = fVar28;
        ppIVar9 = &g_data_057b9be8;
        goto label_041f06f2;
      }
    }
    else {
      pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        uStack_38 = 0x41f06ae;
        iVar19 = UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar22,MethodInfo_Int32_get_highValue);
        puVar21 = (undefined8 *)((long)auStack_28 + 4);
        auStack_28._4_4_ = iVar19;
        ppIVar9 = &g_data_057b9bb8;
label_041f06f2:
        uStack_38 = 0x41f06fa;
        il2cpp_runtime_helper_02304f30(*ppIVar9,puVar21);
        return;
      }
    }
    __this_00 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    uStack_38 = 0x41f0705;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -8) = __i;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -0x10) = pCVar15;
  *(Il2CppObject **)((long)ppCVar17 + -0x18) = pIVar14;
  pIVar14 = pIVar20;
  if (g_data_057ad841 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar19 = (int32_t)pIVar14;
  if ((char)(__this_00->fields)._isIntSlider == '\0') {
    if (pIVar20 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar20->klass == g_data_057b9be8) {
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07d3;
      pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_00->fields)._floatSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar28 = *pfVar8;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar20->klass != g_data_057b9bb8) {
        return;
      }
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07ea;
      piVar11 = (int *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this_00->fields)._floatSlider;
      if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar28 = (float)*piVar11;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar23,fVar28,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pIVar20 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar20->klass == g_data_057b9bb8) {
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f07aa;
      piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_00->fields)._intSlider;
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = *piVar10;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar20->klass != g_data_057b9be8) {
        return;
      }
      *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f076c;
      pfVar8 = (float *)il2cpp_runtime_helper_02305440(pIVar20);
      pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this_00->fields)._intSlider;
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = (int32_t)*pfVar8;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar22,iVar19,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar25 = 0;
  *(undefined8 *)((long)ppCVar17 + -0x20) = 0x41f0812;
  auVar30 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x20) = auVar30._0_8_;
  if (*(char *)(lVar25 + 0x70) == '\0') {
    plVar24 = *(long **)(lVar25 + 0x60);
  }
  else {
    plVar24 = *(long **)(lVar25 + 0x68);
  }
  if (plVar24 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar24 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_01)
              (plVar24,*(undefined8 *)(*plVar24 + 0x8c0),auVar30._8_8_,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)((long)ppCVar17 + -0x28) = 0x41f0852;
  auVar30 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x28) = auVar30._0_8_;
  if ((char)plVar24[0xe] == '\0') {
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar24[0xc];
  }
  else {
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar24[0xd];
  }
  if (pCVar15 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    vtableDispatch = pCVar15->klass[4].vtable._7_get_IsStatic.methodPtr;
    (*vtableDispatch)
              (pCVar15,pCVar15->klass[4].vtable._7_get_IsStatic.method,auVar30._8_8_,vtableDispatch);
    return;
  }
  *(undefined8 *)((long)ppCVar17 + -0x30) = 0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  puVar18 = (undefined1 *)((long)ppCVar17 + -0x30);
  *(Il2CppObject **)((long)ppCVar17 + -0x30) = pIVar20;
  if (g_data_057ad842 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(pCVar15->fields)._isIntSlider == '\0') {
    pUVar23 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar15->fields)._floatSlider;
    if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar23,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else {
    pUVar22 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar15->fields)._intSlider;
    if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar22,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  lVar25 = 0;
  *(undefined8 *)((long)ppCVar17 + -0x38) = 0x41f0909;
  il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicSliderBuiltin__set_Direction:
  *(undefined8 *)(puVar18 + -8) = unaff_RBP;
  *(undefined8 *)(puVar18 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar18 + -0x18) = __this_00;
  *(undefined8 *)(puVar18 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)(puVar18 + -0x28) = pCVar15;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)(puVar18 + -0x2c) = iVar19;
  *(undefined8 *)(puVar18 + -0x40) = 0x41f099e;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar18 + -0x2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)(puVar18 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f09c4;
  bVar6 = System_Enum__IsDefined(enumType,pIVar14,(MethodInfo *)0x0);
  uVar5 = SUB81(pIVar14,0);
  if ((char)bVar6 == '\0') {
    *(int32_t *)(puVar18 + -0x30) = iVar19;
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a30;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar18 + -0x30);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a3f;
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a4c;
    pSVar12 = System_String__Format(pSVar12,pIVar14,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a5b;
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar12,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a7f;
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)(puVar18 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar13);
    uVar5 = (undefined1)uVar13;
  }
  else if (*(char *)(lVar25 + 0x70) == '\0') {
    pUVar23 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar25 + 0x60);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar23 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar23,iVar19,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    pUVar22 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar25 + 0x68);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar22 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)(puVar18 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar22,iVar19,MethodInfo_Void_set_direction);
      return;
    }
  }
  *(undefined8 *)(puVar18 + -0x40) = 0x41f0a8f;
  auVar30 = il2cpp_runtime_helper_022b2c90();
  *(long *)(puVar18 + -0x40) = auVar30._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar12 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar12 = (__this->fields)._source;
  }
  if (pSVar12 == (System_String_o *)0x0) {
    *(undefined8 *)(puVar18 + -0x48) = 0x41f0ac2;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar18 + -0x48) = uVar13;
    if ((char)pSVar12[4].fields._stringLength == '\0') {
      pSVar1 = pSVar12[4].klass;
    }
    else {
      pSVar1 = pSVar12[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      *(undefined8 *)(puVar18 + -0x50) = 0x41f0b06;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_01)(pSVar1,uVar5,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
    return;
  }
  UNRECOVERED_JUMPTABLE_01 = pSVar12->klass[3]._1.byval_arg.data;
  (*UNRECOVERED_JUMPTABLE_01)
            (pSVar12,*(undefined8 *)&pSVar12->klass[3]._1.byval_arg.bits,auVar30._8_8_,
             UNRECOVERED_JUMPTABLE_01);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f20b0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar1;
  InvokerMethod pIVar2;
  UnityEngine_UIElements_Slider_o *pUVar3;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar4;
  bool_conflict bVar5;
  uint uVar6;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar7;
  float *pfVar8;
  int32_t *piVar9;
  Il2CppObject *extraout_RAX;
  int *piVar10;
  Il2CppObject *extraout_RAX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  System_String_o *pSVar11;
  System_ArgumentException_o *__this;
  undefined8 uVar12;
  Il2CppObject *pIVar13;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar14;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar15;
  undefined8 unaff_RBP;
  int32_t iVar16;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar17;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar18;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar19;
  long *plVar20;
  System_String_c *pSVar21;
  MethodInfo *pMVar22;
  long lVar23;
  MethodInfo_24EED20 *pMVar24;
  long lVar25;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float value;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  MethodInfo_24EED20 *pMStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_68;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_60;
  undefined1 auStack_58 [12];
  int32_t iStack_4c;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_20;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIVar13 = CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__i,method);
    return pIVar13;
  }
  pCStack_20 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad856 == '\0') {
    uStack_28 = 0x41f20ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_28 = 0x41f20fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad856 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41f211a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41f212c;
  pCVar7 = MethodInfo_Object_ConvertTo_Object;
  pMVar22 = method;
  pCVar14 = (CustomLogic_CustomLogicSliderBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)method,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    uStack_28 = 0x41f2148;
    uStack_28 = il2cpp_runtime_helper_022b2c90();
    if (pMVar22 != (MethodInfo *)0x0) {
      if (*(char *)&pMVar22[1].name == '\0') {
        pIVar2 = (InvokerMethod)pMVar22[1].virtualMethodPointer;
      }
      else {
        pIVar2 = pMVar22[1].invoker_method;
      }
      if (pIVar2 != (InvokerMethod)0x0) {
        pMStack_30 = (MethodInfo *)0x41f2175;
        uVar26 = (**(code **)(*(long *)pIVar2 + 0x8b8))(pIVar2,*(undefined8 *)(*(long *)pIVar2 + 0x8c0));
        uStack_28 = CONCAT44(uVar26,(undefined4)uStack_28);
        pMStack_30 = (MethodInfo *)0x41f2190;
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
        return pIVar13;
      }
    }
    pCVar14 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pMStack_30 = (MethodInfo *)
                 CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
    ;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    pCStack_38 = __i;
    pMStack_30 = method;
    if (g_data_057ad857 == '\0') {
      pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad857 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
    obj = MethodInfo_Single_ConvertTo_Single;
    pCVar17 = pCVar7;
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar7,MethodInfo_Single_ConvertTo_Single);
    if (pCVar14 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      if ((char)(pCVar14->fields)._isIntSlider == '\0') {
        pUVar3 = (pCVar14->fields)._floatSlider;
      }
      else {
        pUVar3 = (UnityEngine_UIElements_Slider_o *)(pCVar14->fields)._intSlider;
      }
      pCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
        pIVar13 = (Il2CppObject *)
                  (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.
                    methodPtr)(pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                                      _121_set_pageSize.method);
        return pIVar13;
      }
    }
    pCStack_48 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
    il2cpp_runtime_helper_022b2c90();
    pCStack_48 = pCVar14;
    if (pCVar17 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      if (g_data_057ad842 == '\0') {
        pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
        il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
        pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
        il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
        g_data_057ad842 = '\x01';
      }
      pCVar14 = pCVar17;
      if ((char)(pCVar17->fields)._isIntSlider == '\0') {
        pUVar19 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar17->fields)._floatSlider;
        if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
          iStack_4c = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar19,MethodInfo_SliderDirection_get_direction);
          goto label_041f22b1;
        }
      }
      else {
        pUVar18 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar17->fields)._intSlider;
        if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
          iStack_4c = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar18,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
          pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
          pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4c);
          return pIVar13;
        }
      }
    }
    lVar23 = 0;
    pCStack_60 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
    uStack_70 = il2cpp_runtime_helper_022b2c90();
    pCStack_68 = pCVar14;
    pCStack_60 = pCVar7;
    if (g_data_057ad858 == '\0') {
      uStack_78 = 0x41f22ff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_78 = 0x41f230b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad858 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_78 = 0x41f232a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_78 = 0x41f233c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar24 = obj;
    iVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
    if (lVar23 == 0) {
      uStack_78 = 0x41f2357;
      uStack_78 = il2cpp_runtime_helper_022b2c90();
      if (pMVar24 != (MethodInfo_24EED20 *)0x0) {
        if (*(char *)&pMVar24[1].name == '\0') {
          pIVar2 = (InvokerMethod)pMVar24[1].virtualMethodPointer;
        }
        else {
          pIVar2 = pMVar24[1].invoker_method;
        }
        if (pIVar2 != (InvokerMethod)0x0) {
          pMStack_80 = (MethodInfo_24EED20 *)0x41f2385;
          uVar4 = (**(code **)(*(long *)pIVar2 + 0x8d8))(pIVar2,*(undefined8 *)(*(long *)pIVar2 + 0x8e0));
          uStack_78 = CONCAT17(uVar4,(undefined7)uStack_78);
          pMStack_80 = (MethodInfo_24EED20 *)0x41f239e;
          pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
          return pIVar13;
        }
      }
      lVar25 = 0;
      pMStack_80 = (MethodInfo_24EED20 *)0x41f23ae;
      uStack_90 = il2cpp_runtime_helper_022b2c90();
      lStack_88 = lVar23;
      pMStack_80 = obj;
      if (g_data_057ad859 == '\0') {
        uStack_98 = 0x41f23cf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
        uStack_98 = 0x41f23db;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad859 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_98 = 0x41f23fa;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_98 = 0x41f240c;
      uVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
      if (lVar25 != 0) {
        if (*(char *)(lVar25 + 0x70) == '\0') {
          plVar20 = *(long **)(lVar25 + 0x60);
        }
        else {
          plVar20 = *(long **)(lVar25 + 0x68);
        }
        obj_00 = (MethodInfo_24EE950 *)0x0;
        if (plVar20 != (long *)0x0) {
          lVar23 = *plVar20;
          pIVar13 = (Il2CppObject *)
                    (**(code **)(lVar23 + 0x8e8))
                              (plVar20,uVar6 & 0xff,*(undefined8 *)(lVar23 + 0x8f0),lVar23,
                               *(code **)(lVar23 + 0x8e8));
          return pIVar13;
        }
      }
      uStack_98 = 0x41f244c;
      uStack_98 = il2cpp_runtime_helper_022b2c90();
      if (obj_00 != (MethodInfo_24EE950 *)0x0) {
        uStack_98 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_98);
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_98 + 7);
        return pIVar13;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad85a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad85a = '\x01';
      }
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar13,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar13;
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar13);
      return pIVar13;
    }
    ppCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o **)auStack_58;
    pCVar7 = pCStack_68;
    __i = pCStack_60;
  }
  else {
    pCVar7 = pCVar14;
    pCVar17 = pCVar14;
    pCStack_20 = pCVar14;
    if (g_data_057ad841 == '\0') {
      uStack_28 = 0x41f072f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
      uStack_28 = 0x41f073b;
      pCVar7 = (CustomLogic_CustomLogicSliderBuiltin_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
      g_data_057ad841 = '\x01';
    }
    iVar16 = (int32_t)pCVar17;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      if (pCVar14 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        return (Il2CppObject *)pCVar7;
      }
      if (pCVar14->klass == g_data_057b9be8) {
        uStack_28 = 0x41f07d3;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pCVar14);
        pUVar19 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value = *pfVar8;
          goto label_041f07f7;
        }
      }
      else {
        if (pCVar14->klass != g_data_057b9bb8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        uStack_28 = 0x41f07ea;
        piVar10 = (int *)il2cpp_runtime_helper_02305440(pCVar14);
        pUVar19 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value = (float)*piVar10;
label_041f07f7:
          UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar19,value,MethodInfo_Void_set_highValue);
          return extraout_RAX_00;
        }
      }
    }
    else {
      if (pCVar14 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        return (Il2CppObject *)pCVar7;
      }
      if (pCVar14->klass == g_data_057b9bb8) {
        uStack_28 = 0x41f07aa;
        piVar9 = (int32_t *)il2cpp_runtime_helper_02305440(pCVar14);
        pUVar18 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar16 = *piVar9;
          goto label_041f07b5;
        }
      }
      else {
        if (pCVar14->klass != g_data_057b9be8) {
          return (Il2CppObject *)&g_data_057b9b70;
        }
        uStack_28 = 0x41f076c;
        pfVar8 = (float *)il2cpp_runtime_helper_02305440(pCVar14);
        pUVar18 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar16 = (int32_t)*pfVar8;
label_041f07b5:
          UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar18,iVar16,MethodInfo_Void_set_highValue);
          return extraout_RAX;
        }
      }
    }
    lVar23 = 0;
    uStack_28 = 0x41f0812;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    uStack_28 = auVar27._0_8_;
    if (*(char *)(lVar23 + 0x70) == '\0') {
      plVar20 = *(long **)(lVar23 + 0x60);
    }
    else {
      plVar20 = *(long **)(lVar23 + 0x68);
    }
    if (plVar20 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar20 + 0x8b8);
      pIVar13 = (Il2CppObject *)
                (*UNRECOVERED_JUMPTABLE_01)
                          (plVar20,*(undefined8 *)(*plVar20 + 0x8c0),auVar27._8_8_,UNRECOVERED_JUMPTABLE_01);
      return pIVar13;
    }
    pMStack_30 = (MethodInfo *)0x41f0852;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    pMStack_30 = auVar27._0_8_;
    if ((char)plVar20[0xe] == '\0') {
      pCVar7 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar20[0xc];
    }
    else {
      pCVar7 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar20[0xd];
    }
    if (pCVar7 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      vtableDispatch = pCVar7->klass[4].vtable._7_get_IsStatic.methodPtr;
      pIVar13 = (Il2CppObject *)
                (*vtableDispatch)
                          (pCVar7,pCVar7->klass[4].vtable._7_get_IsStatic.method,auVar27._8_8_,
                           vtableDispatch);
      return pIVar13;
    }
    pCStack_38 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f0892;
    il2cpp_runtime_helper_022b2c90();
    ppCVar15 = &pCStack_38;
    pCStack_38 = pCVar14;
    if (g_data_057ad842 == '\0') {
      uStack_40 = 0x41f08b9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      uStack_40 = 0x41f08c5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)(pCVar7->fields)._isIntSlider == '\0') {
      pUVar19 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar7->fields)._floatSlider;
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        iVar16 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar19,MethodInfo_SliderDirection_get_direction);
        return (Il2CppObject *)CONCAT44(extraout_var_00,iVar16);
      }
    }
    else {
      pUVar18 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar7->fields)._intSlider;
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar16 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar18,MethodInfo_SliderDirection_get_direction);
        return (Il2CppObject *)CONCAT44(extraout_var,iVar16);
      }
    }
    lVar23 = 0;
    uStack_40 = 0x41f0909;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)ppCVar15 + -8) = unaff_RBP;
  *(undefined8 *)((long)ppCVar15 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar15 + -0x18) = __i;
  *(undefined8 *)((long)ppCVar15 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar15 + -0x28) = pCVar7;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)((long)ppCVar15 + -0x2c) = iVar16;
  *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f099e;
  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)ppCVar15 + -0x2c));
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f09c4;
  bVar5 = System_Enum__IsDefined(enumType,pIVar13,(MethodInfo *)0x0);
  uVar4 = SUB81(pIVar13,0);
  if ((char)bVar5 == '\0') {
    *(int32_t *)((long)ppCVar15 + -0x30) = iVar16;
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a30;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)ppCVar15 + -0x30));
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a3f;
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a4c;
    pSVar11 = System_String__Format(pSVar11,pIVar13,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a5b;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar11,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a7f;
    uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar12);
    uVar4 = (undefined1)uVar12;
  }
  else if (*(char *)(lVar23 + 0x70) == '\0') {
    pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar23 + 0x60);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar19,iVar16,MethodInfo_Void_set_direction);
      return extraout_RAX_02;
    }
  }
  else {
    pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar23 + 0x68);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar18,iVar16,MethodInfo_Void_set_direction);
      return extraout_RAX_01;
    }
  }
  *(undefined8 *)((long)ppCVar15 + -0x40) = 0x41f0a8f;
  auVar27 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar15 + -0x40) = auVar27._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar11 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar11 = (__this->fields)._source;
  }
  if (pSVar11 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = pSVar11->klass[3]._1.byval_arg.data;
    pIVar13 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_01)
                        (pSVar11,*(undefined8 *)&pSVar11->klass[3]._1.byval_arg.bits,auVar27._8_8_,
                         UNRECOVERED_JUMPTABLE_01);
    return pIVar13;
  }
  *(undefined8 *)((long)ppCVar15 + -0x48) = 0x41f0ac2;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppCVar15 + -0x48) = uVar12;
  if ((char)pSVar11[4].fields._stringLength == '\0') {
    pSVar21 = pSVar11[4].klass;
  }
  else {
    pSVar21 = pSVar11[4].monitor;
  }
  if (pSVar21 == (System_String_c *)0x0) {
    *(undefined8 *)((long)ppCVar15 + -0x50) = 0x41f0b06;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar12 >> 8),*(undefined1 *)&(pSVar21->_1).interopData);
  }
  pvVar1 = (pSVar21->_1).image;
  UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar1 + 0x8e8);
  pIVar13 = (Il2CppObject *)
            (*UNRECOVERED_JUMPTABLE_01)
                      (pSVar21,uVar4,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
  return pIVar13;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f20d0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_01;
  Il2CppMethodPointer vtableDispatch;
  System_String_c *pSVar1;
  void *pvVar2;
  Il2CppClass *pIVar3;
  UnityEngine_UIElements_Slider_o *pUVar4;
  InvokerMethod pIVar5;
  System_RuntimeTypeHandle_o handle;
  undefined1 uVar6;
  bool_conflict bVar7;
  uint uVar8;
  float *pfVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Type_o *enumType;
  Il2CppObject *pIVar12;
  System_String_o *pSVar13;
  System_ArgumentException_o *__this;
  undefined8 uVar14;
  CustomLogic_CustomLogicSliderBuiltin_o *in_RAX;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar15;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar16;
  CustomLogic_CustomLogicSliderBuiltin_o **ppCVar17;
  undefined8 unaff_RBP;
  int32_t iVar18;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar19;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar20;
  long *plVar21;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar22;
  long lVar23;
  MethodInfo_24EED20 *pMVar24;
  long lVar25;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  float value;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  MethodInfo_24EED20 *pMStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_60;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_58;
  undefined1 auStack_50 [12];
  int32_t iStack_44;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_18;
  
  pCStack_18 = in_RAX;
  if (g_data_057ad856 == '\0') {
    uStack_20 = 0x41f20ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ConvertTo_Object);
    uStack_20 = 0x41f20fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad856 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41f211a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41f212c;
  pCVar16 = MethodInfo_Object_ConvertTo_Object;
  pIVar12 = __v;
  pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,(MethodInfo_24EEB40 *)MethodInfo_Object_ConvertTo_Object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    uStack_20 = 0x41f2148;
    uStack_20 = il2cpp_runtime_helper_022b2c90();
    if (pIVar12 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar12[7].klass == '\0') {
        pIVar3 = pIVar12[6].klass;
      }
      else {
        pIVar3 = pIVar12[6].monitor;
      }
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar3->_1).image;
        pIStack_28 = (Il2CppObject *)0x41f2175;
        uVar26 = (**(code **)((long)pvVar2 + 0x8b8))(pIVar3,*(undefined8 *)((long)pvVar2 + 0x8c0));
        uStack_20 = CONCAT44(uVar26,(undefined4)uStack_20);
        pIStack_28 = (Il2CppObject *)0x41f2190;
        il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
        return;
      }
    }
    pCVar15 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
    pIStack_28 = (Il2CppObject *)
                 CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
    ;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    pCStack_30 = __i;
    pIStack_28 = __v;
    if (g_data_057ad857 == '\0') {
      pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
      pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad857 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
    obj = MethodInfo_Single_ConvertTo_Single;
    pCVar22 = pCVar16;
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)pCVar16,MethodInfo_Single_ConvertTo_Single);
    if (pCVar15 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      if ((char)(pCVar15->fields)._isIntSlider == '\0') {
        pUVar4 = (pCVar15->fields)._floatSlider;
      }
      else {
        pUVar4 = (UnityEngine_UIElements_Slider_o *)(pCVar15->fields)._intSlider;
      }
      pCVar22 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x0;
      if (pUVar4 != (UnityEngine_UIElements_Slider_o *)0x0) {
        (*(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._121_set_pageSize.methodPtr)
                  (pUVar4,(((UnityEngine_UIElements_SliderInt_c *)pUVar4->klass)->vtable)._121_set_pageSize.
                          method);
        return;
      }
    }
    pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
    il2cpp_runtime_helper_022b2c90();
    pCStack_40 = pCVar15;
    if (pCVar22 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      if (g_data_057ad842 == '\0') {
        pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2266;
        il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
        pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2272;
        il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
        g_data_057ad842 = '\x01';
      }
      pCVar15 = pCVar22;
      if ((char)(pCVar22->fields)._isIntSlider == '\0') {
        pUVar20 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar22->fields)._floatSlider;
        if (pUVar20 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22b1;
          iStack_44 = UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar20,MethodInfo_SliderDirection_get_direction);
          goto label_041f22b1;
        }
      }
      else {
        pUVar19 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar22->fields)._intSlider;
        if (pUVar19 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2297;
          iStack_44 = UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar19,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
          pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22ca;
          il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_44);
          return;
        }
      }
    }
    lVar23 = 0;
    pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f22d5;
    uStack_68 = il2cpp_runtime_helper_022b2c90();
    pCStack_60 = pCVar15;
    pCStack_58 = pCVar16;
    if (g_data_057ad858 == '\0') {
      uStack_70 = 0x41f22ff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
      uStack_70 = 0x41f230b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad858 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_70 = 0x41f232a;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_70 = 0x41f233c;
    obj_00 = MethodInfo_Int32_ConvertTo_Int32;
    pMVar24 = obj;
    iVar18 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
    if (lVar23 == 0) {
      uStack_70 = 0x41f2357;
      uStack_70 = il2cpp_runtime_helper_022b2c90();
      if (pMVar24 != (MethodInfo_24EED20 *)0x0) {
        if (*(char *)&pMVar24[1].name == '\0') {
          pIVar5 = (InvokerMethod)pMVar24[1].virtualMethodPointer;
        }
        else {
          pIVar5 = pMVar24[1].invoker_method;
        }
        if (pIVar5 != (InvokerMethod)0x0) {
          pMStack_78 = (MethodInfo_24EED20 *)0x41f2385;
          uVar6 = (**(code **)(*(long *)pIVar5 + 0x8d8))(pIVar5,*(undefined8 *)(*(long *)pIVar5 + 0x8e0));
          uStack_70 = CONCAT17(uVar6,(undefined7)uStack_70);
          pMStack_78 = (MethodInfo_24EED20 *)0x41f239e;
          il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
          return;
        }
      }
      lVar25 = 0;
      pMStack_78 = (MethodInfo_24EED20 *)0x41f23ae;
      uStack_88 = il2cpp_runtime_helper_022b2c90();
      lStack_80 = lVar23;
      pMStack_78 = obj;
      if (g_data_057ad859 == '\0') {
        uStack_90 = 0x41f23cf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
        uStack_90 = 0x41f23db;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        g_data_057ad859 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        uStack_90 = 0x41f23fa;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_90 = 0x41f240c;
      uVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
      if (lVar25 != 0) {
        if (*(char *)(lVar25 + 0x70) == '\0') {
          plVar21 = *(long **)(lVar25 + 0x60);
        }
        else {
          plVar21 = *(long **)(lVar25 + 0x68);
        }
        obj_00 = (MethodInfo_24EE950 *)0x0;
        if (plVar21 != (long *)0x0) {
          lVar23 = *plVar21;
          (**(code **)(lVar23 + 0x8e8))
                    (plVar21,uVar8 & 0xff,*(undefined8 *)(lVar23 + 0x8f0),lVar23,*(code **)(lVar23 + 0x8e8));
          return;
        }
      }
      uStack_90 = 0x41f244c;
      uStack_90 = il2cpp_runtime_helper_022b2c90();
      if (obj_00 != (MethodInfo_24EE950 *)0x0) {
        uStack_90 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_90);
        il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad85a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad85a = '\x01';
      }
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(pIVar12,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar12;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar12);
      return;
    }
    ppCVar17 = (CustomLogic_CustomLogicSliderBuiltin_o **)auStack_50;
    pCVar16 = pCStack_60;
    __i = pCStack_58;
  }
  else {
    pCVar16 = pCVar15;
    pCStack_18 = pCVar15;
    if (g_data_057ad841 == '\0') {
      uStack_20 = 0x41f072f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
      uStack_20 = 0x41f073b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
      g_data_057ad841 = '\x01';
    }
    iVar18 = (int32_t)pCVar16;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      if (pCVar15 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        return;
      }
      if ((Il2CppClass *)pCVar15->klass == g_data_057b9be8) {
        uStack_20 = 0x41f07d3;
        pfVar9 = (float *)il2cpp_runtime_helper_02305440(pCVar15);
        pUVar20 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar20 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value = *pfVar9;
          goto label_041f07f7;
        }
      }
      else {
        if ((Il2CppClass *)pCVar15->klass != g_data_057b9bb8) {
          return;
        }
        uStack_20 = 0x41f07ea;
        piVar11 = (int *)il2cpp_runtime_helper_02305440(pCVar15);
        pUVar20 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (pUVar20 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value = (float)*piVar11;
label_041f07f7:
          UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar20,value,MethodInfo_Void_set_highValue);
          return;
        }
      }
    }
    else {
      if (pCVar15 == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
        return;
      }
      if ((Il2CppClass *)pCVar15->klass == g_data_057b9bb8) {
        uStack_20 = 0x41f07aa;
        piVar10 = (int32_t *)il2cpp_runtime_helper_02305440(pCVar15);
        pUVar19 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar19 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar18 = *piVar10;
          goto label_041f07b5;
        }
      }
      else {
        if ((Il2CppClass *)pCVar15->klass != g_data_057b9be8) {
          return;
        }
        uStack_20 = 0x41f076c;
        pfVar9 = (float *)il2cpp_runtime_helper_02305440(pCVar15);
        pUVar19 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
        if (pUVar19 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
          iVar18 = (int32_t)*pfVar9;
label_041f07b5:
          UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar19,iVar18,MethodInfo_Void_set_highValue);
          return;
        }
      }
    }
    lVar23 = 0;
    uStack_20 = 0x41f0812;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    uStack_20 = auVar27._0_8_;
    if (*(char *)(lVar23 + 0x70) == '\0') {
      plVar21 = *(long **)(lVar23 + 0x60);
    }
    else {
      plVar21 = *(long **)(lVar23 + 0x68);
    }
    if (plVar21 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_01 = *(code **)(*plVar21 + 0x8b8);
      (*UNRECOVERED_JUMPTABLE_01)
                (plVar21,*(undefined8 *)(*plVar21 + 0x8c0),auVar27._8_8_,UNRECOVERED_JUMPTABLE_01);
      return;
    }
    pIStack_28 = (Il2CppObject *)0x41f0852;
    auVar27 = il2cpp_runtime_helper_022b2c90();
    pIStack_28 = auVar27._0_8_;
    if ((char)plVar21[0xe] == '\0') {
      pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar21[0xc];
    }
    else {
      pCVar16 = (CustomLogic_CustomLogicSliderBuiltin_o *)plVar21[0xd];
    }
    if (pCVar16 != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      vtableDispatch = pCVar16->klass[4].vtable._7_get_IsStatic.methodPtr;
      (*vtableDispatch)
                (pCVar16,pCVar16->klass[4].vtable._7_get_IsStatic.method,auVar27._8_8_,vtableDispatch);
      return;
    }
    pCStack_30 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f0892;
    il2cpp_runtime_helper_022b2c90();
    ppCVar17 = &pCStack_30;
    pCStack_30 = pCVar15;
    if (g_data_057ad842 == '\0') {
      uStack_38 = 0x41f08b9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      uStack_38 = 0x41f08c5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)(pCVar16->fields)._isIntSlider == '\0') {
      pUVar20 = (UnityEngine_UIElements_BaseSlider_float__o *)(pCVar16->fields)._floatSlider;
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___get_direction(pUVar20,MethodInfo_SliderDirection_get_direction);
        return;
      }
    }
    else {
      pUVar19 = (UnityEngine_UIElements_BaseSlider_int__o *)(pCVar16->fields)._intSlider;
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___get_direction(pUVar19,MethodInfo_SliderDirection_get_direction);
        return;
      }
    }
    lVar23 = 0;
    uStack_38 = 0x41f0909;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)ppCVar17 + -8) = unaff_RBP;
  *(undefined8 *)((long)ppCVar17 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -0x18) = __i;
  *(undefined8 *)((long)ppCVar17 + -0x20) = unaff_R12;
  *(CustomLogic_CustomLogicSliderBuiltin_o **)((long)ppCVar17 + -0x28) = pCVar16;
  if (g_data_057ad843 == '\0') {
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  *(int32_t *)((long)ppCVar17 + -0x2c) = iVar18;
  *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f099e;
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)ppCVar17 + -0x2c));
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f09c4;
  bVar7 = System_Enum__IsDefined(enumType,pIVar12,(MethodInfo *)0x0);
  uVar6 = SUB81(pIVar12,0);
  if ((char)bVar7 == '\0') {
    *(int32_t *)((long)ppCVar17 + -0x30) = iVar18;
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a30;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)ppCVar17 + -0x30));
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a3f;
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a4c;
    pSVar13 = System_String__Format(pSVar13,pIVar12,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a5b;
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar14);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar13,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a7f;
    uVar14 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar14);
    uVar6 = (undefined1)uVar14;
  }
  else if (*(char *)(lVar23 + 0x70) == '\0') {
    pUVar20 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar23 + 0x60);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar20 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(pUVar20,iVar18,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    pUVar19 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar23 + 0x68);
    __this = (System_ArgumentException_o *)0x0;
    if (pUVar19 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(pUVar19,iVar18,MethodInfo_Void_set_direction);
      return;
    }
  }
  *(undefined8 *)((long)ppCVar17 + -0x40) = 0x41f0a8f;
  auVar27 = il2cpp_runtime_helper_022b2c90();
  *(long *)((long)ppCVar17 + -0x40) = auVar27._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar13 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar13 = (__this->fields)._source;
  }
  if (pSVar13 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_01 = pSVar13->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_01)
              (pSVar13,*(undefined8 *)&pSVar13->klass[3]._1.byval_arg.bits,auVar27._8_8_,
               UNRECOVERED_JUMPTABLE_01);
    return;
  }
  *(undefined8 *)((long)ppCVar17 + -0x48) = 0x41f0ac2;
  uVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppCVar17 + -0x48) = uVar14;
  if ((char)pSVar13[4].fields._stringLength == '\0') {
    pSVar1 = pSVar13[4].klass;
  }
  else {
    pSVar1 = pSVar13[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    *(undefined8 *)((long)ppCVar17 + -0x50) = 0x41f0b06;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_01)(pSVar1,uVar6,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_01);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f2150

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar1;
  UnityEngine_UIElements_Slider_o *pUVar2;
  InvokerMethod pIVar3;
  long *plVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  int32_t value;
  uint uVar6;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_String_o *pSVar7;
  System_ArgumentException_o *__this;
  undefined8 uVar8;
  Il2CppObject *pIVar9;
  MethodInfo *pMVar10;
  undefined1 uVar11;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  System_String_c *pSVar12;
  long lVar13;
  MethodInfo_24EED20 *pMVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  MethodInfo *pMStack_60;
  int32_t iStack_2c;
  MethodInfo *pMStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar2 = (__i->fields)._floatSlider;
    }
    else {
      pUVar2 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
      (*(((UnityEngine_UIElements_SliderInt_c *)pUVar2->klass)->vtable)._120_get_pageSize.methodPtr)
                (pUVar2,(((UnityEngine_UIElements_SliderInt_c *)pUVar2->klass)->vtable)._120_get_pageSize.
                        method);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
      return pIVar9;
    }
  }
  pMVar10 = (MethodInfo *)0x0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad857 == '\0') {
    pMStack_28 = (MethodInfo *)0x41f21bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pMStack_28 = (MethodInfo *)0x41f21cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad857 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_28 = (MethodInfo *)0x41f21ea;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_28 = (MethodInfo *)0x41f21fc;
  obj = MethodInfo_Single_ConvertTo_Single;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if (pMVar10 != (MethodInfo *)0x0) {
    if (*(char *)&pMVar10[1].name == '\0') {
      pIVar3 = (InvokerMethod)pMVar10[1].virtualMethodPointer;
    }
    else {
      pIVar3 = pMVar10[1].invoker_method;
    }
    method = (MethodInfo *)0x0;
    if (pIVar3 != (InvokerMethod)0x0) {
      pIVar9 = (Il2CppObject *)
               (**(code **)(*(long *)pIVar3 + 0x8c8))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 0x8d0));
      return pIVar9;
    }
  }
  pMStack_28 = (MethodInfo *)0x41f2238;
  il2cpp_runtime_helper_022b2c90();
  pMStack_28 = pMVar10;
  if (method != (MethodInfo *)0x0) {
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    pMVar10 = method;
    if (*(char *)&method[1].name == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)method[1].virtualMethodPointer !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        iStack_2c = UnityEngine_UIElements_BaseSlider_float___get_direction
                              ((UnityEngine_UIElements_BaseSlider_float__o *)method[1].virtualMethodPointer,
                               MethodInfo_SliderDirection_get_direction);
        goto label_041f22b1;
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)method[1].invoker_method !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iStack_2c = UnityEngine_UIElements_BaseSlider_int___get_direction
                            ((UnityEngine_UIElements_BaseSlider_int__o *)method[1].invoker_method,MethodInfo_SliderDirection_get_direction
                            );
label_041f22b1:
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
      return pIVar9;
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad858 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad858 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar14 = obj;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar13 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (pMVar14 != (MethodInfo_24EED20 *)0x0) {
      if (*(char *)&pMVar14[1].name == '\0') {
        pIVar3 = (InvokerMethod)pMVar14[1].virtualMethodPointer;
      }
      else {
        pIVar3 = pMVar14[1].invoker_method;
      }
      if (pIVar3 != (InvokerMethod)0x0) {
        pMStack_60 = (MethodInfo *)0x41f2385;
        (**(code **)(*(long *)pIVar3 + 0x8d8))(pIVar3,*(undefined8 *)(*(long *)pIVar3 + 0x8e0));
        pMStack_60 = (MethodInfo *)0x41f239e;
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffaf);
        return pIVar9;
      }
    }
    lVar15 = 0;
    pMStack_60 = (MethodInfo *)0x41f23ae;
    uStack_70 = il2cpp_runtime_helper_022b2c90();
    uStack_68 = lVar13;
    pMStack_60 = (MethodInfo *)obj;
    if (g_data_057ad859 == '\0') {
      uStack_78 = 0x41f23cf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_78 = 0x41f23db;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad859 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_78 = 0x41f23fa;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_78 = 0x41f240c;
    uVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
    if (lVar15 != 0) {
      if (*(char *)(lVar15 + 0x70) == '\0') {
        plVar4 = *(long **)(lVar15 + 0x60);
      }
      else {
        plVar4 = *(long **)(lVar15 + 0x68);
      }
      obj_00 = (MethodInfo_24EE950 *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar13 = *plVar4;
        pIVar9 = (Il2CppObject *)
                 (**(code **)(lVar13 + 0x8e8))
                           (plVar4,uVar6 & 0xff,*(undefined8 *)(lVar13 + 0x8f0),lVar13,
                            *(code **)(lVar13 + 0x8e8));
        return pIVar9;
      }
    }
    uStack_78 = 0x41f244c;
    uStack_78 = il2cpp_runtime_helper_022b2c90();
    if (obj_00 != (MethodInfo_24EE950 *)0x0) {
      uStack_78 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_78);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
      return pIVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad85a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad85a = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
    return pIVar9;
  }
  pMStack_60 = pMVar10;
  if (g_data_057ad843 == '\0') {
    uStack_78 = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_78 = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_78 = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    uStack_78 = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_68 = CONCAT44(value,(undefined4)uStack_68);
  uStack_78 = 0x41f099e;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_68 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    uStack_78 = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = 0x41f09c4;
  bVar5 = System_Enum__IsDefined(enumType,pIVar9,(MethodInfo *)0x0);
  uVar11 = SUB81(pIVar9,0);
  if ((char)bVar5 == '\0') {
    uStack_68 = CONCAT44(uStack_68._4_4_,value);
    uStack_78 = 0x41f0a30;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_68);
    uStack_78 = 0x41f0a3f;
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    uStack_78 = 0x41f0a4c;
    pSVar7 = System_String__Format(pSVar7,pIVar9,(MethodInfo *)0x0);
    uStack_78 = 0x41f0a5b;
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    uStack_78 = 0x41f0a63;
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
    uStack_78 = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this,pSVar7,(MethodInfo *)0x0);
    uStack_78 = 0x41f0a7f;
    uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    uStack_78 = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this,uVar8);
    uVar11 = (undefined1)uVar8;
  }
  else if (*(char *)(lVar13 + 0x70) == '\0') {
    __this = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar13 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      uStack_78 = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar13 + 0x60),value,MethodInfo_Void_set_direction);
      return extraout_RAX_00;
    }
  }
  else {
    __this = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar13 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      uStack_78 = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar13 + 0x68),value,MethodInfo_Void_set_direction);
      return extraout_RAX;
    }
  }
  uStack_78 = 0x41f0a8f;
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uStack_78 = auVar16._0_8_;
  if (*(char *)&(__this->fields)._safeSerializationManager == '\0') {
    pSVar7 = *(System_String_o **)&(__this->fields)._HResult;
  }
  else {
    pSVar7 = (__this->fields)._source;
  }
  if (pSVar7 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar7->klass[3]._1.byval_arg.data;
    pIVar9 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pSVar7,*(undefined8 *)&pSVar7->klass[3]._1.byval_arg.bits,auVar16._8_8_,
                        UNRECOVERED_JUMPTABLE_00);
    return pIVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar7[4].fields._stringLength == '\0') {
    pSVar12 = pSVar7[4].klass;
  }
  else {
    pSVar12 = pSVar7[4].monitor;
  }
  if (pSVar12 == (System_String_c *)0x0) {
    uVar8 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar8 >> 8),*(undefined1 *)&(pSVar12->_1).interopData);
  }
  pvVar1 = (pSVar12->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x8e8);
  pIVar9 = (Il2CppObject *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (pSVar12,uVar11,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return pIVar9;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f21a0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  UnityEngine_UIElements_Slider_o *pUVar3;
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  InvokerMethod pIVar4;
  long *plVar5;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar6;
  int32_t value;
  uint uVar7;
  System_Type_o *enumType;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_ArgumentException_o *__this_01;
  undefined1 uVar11;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EE950 *obj_00;
  long lVar12;
  MethodInfo_24EED20 *pMVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_58;
  int32_t iStack_24;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_20;
  
  if (g_data_057ad857 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    pCStack_20 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad857 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21ea;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_20 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f21fc;
  obj = MethodInfo_Single_ConvertTo_Single;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar3 = (__i->fields)._floatSlider;
    }
    else {
      pUVar3 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    __v = (Il2CppObject *)0x0;
    if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
      (*(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.methodPtr)
                (pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._121_set_pageSize.
                        method);
      return;
    }
  }
  pCStack_20 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2238;
  il2cpp_runtime_helper_022b2c90();
  pCStack_20 = __i;
  if ((CustomLogic_CustomLogicSliderBuiltin_o *)__v != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    __i = (CustomLogic_CustomLogicSliderBuiltin_o *)__v;
    if ((char)(((CustomLogic_CustomLogicSliderBuiltin_o *)__v)->fields)._isIntSlider == '\0') {
      __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)
                  (((CustomLogic_CustomLogicSliderBuiltin_o *)__v)->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        iStack_24 = UnityEngine_UIElements_BaseSlider_float___get_direction(__this_00,MethodInfo_SliderDirection_get_direction);
        goto label_041f22b1;
      }
    }
    else {
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)
               (((CustomLogic_CustomLogicSliderBuiltin_o *)__v)->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iStack_24 = UnityEngine_UIElements_BaseSlider_int___get_direction(__this,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
        il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_24);
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad858 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad858 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar13 = obj;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar12 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (pMVar13 != (MethodInfo_24EED20 *)0x0) {
      if (*(char *)&pMVar13[1].name == '\0') {
        pIVar4 = (InvokerMethod)pMVar13[1].virtualMethodPointer;
      }
      else {
        pIVar4 = pMVar13[1].invoker_method;
      }
      if (pIVar4 != (InvokerMethod)0x0) {
        pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2385;
        (**(code **)(*(long *)pIVar4 + 0x8d8))(pIVar4,*(undefined8 *)(*(long *)pIVar4 + 0x8e0));
        pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f239e;
        il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffb7);
        return;
      }
    }
    lVar14 = 0;
    pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f23ae;
    uStack_68 = il2cpp_runtime_helper_022b2c90();
    uStack_60 = lVar12;
    pCStack_58 = (CustomLogic_CustomLogicSliderBuiltin_o *)obj;
    if (g_data_057ad859 == '\0') {
      uStack_70 = 0x41f23cf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_70 = 0x41f23db;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad859 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_70 = 0x41f23fa;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_70 = 0x41f240c;
    uVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
    if (lVar14 != 0) {
      if (*(char *)(lVar14 + 0x70) == '\0') {
        plVar5 = *(long **)(lVar14 + 0x60);
      }
      else {
        plVar5 = *(long **)(lVar14 + 0x68);
      }
      obj_00 = (MethodInfo_24EE950 *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        (**(code **)(lVar12 + 0x8e8))
                  (plVar5,uVar7 & 0xff,*(undefined8 *)(lVar12 + 0x8f0),lVar12,*(code **)(lVar12 + 0x8e8));
        return;
      }
    }
    uStack_70 = 0x41f244c;
    uStack_70 = il2cpp_runtime_helper_022b2c90();
    if (obj_00 != (MethodInfo_24EE950 *)0x0) {
      uStack_70 = CONCAT17(*(undefined1 *)&obj_00[1].name,(undefined7)uStack_70);
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad85a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad85a = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
    return;
  }
  pCStack_58 = __i;
  if (g_data_057ad843 == '\0') {
    uStack_70 = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_70 = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_70 = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    uStack_70 = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_60 = CONCAT44(value,(undefined4)uStack_60);
  uStack_70 = 0x41f099e;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    uStack_70 = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = 0x41f09c4;
  bVar6 = System_Enum__IsDefined(enumType,pIVar8,(MethodInfo *)0x0);
  uVar11 = SUB81(pIVar8,0);
  if ((char)bVar6 == '\0') {
    uStack_60 = CONCAT44(uStack_60._4_4_,value);
    uStack_70 = 0x41f0a30;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_60);
    uStack_70 = 0x41f0a3f;
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    uStack_70 = 0x41f0a4c;
    pSVar9 = System_String__Format(pSVar9,pIVar8,(MethodInfo *)0x0);
    uStack_70 = 0x41f0a5b;
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    uStack_70 = 0x41f0a63;
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
    uStack_70 = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this_01,pSVar9,(MethodInfo *)0x0);
    uStack_70 = 0x41f0a7f;
    uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    uStack_70 = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this_01,uVar10);
    uVar11 = (undefined1)uVar10;
  }
  else if (*(char *)(lVar12 + 0x70) == '\0') {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar12 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      uStack_70 = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar12 + 0x60),value,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar12 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      uStack_70 = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar12 + 0x68),value,MethodInfo_Void_set_direction);
      return;
    }
  }
  uStack_70 = 0x41f0a8f;
  auVar15 = il2cpp_runtime_helper_022b2c90();
  uStack_70 = auVar15._0_8_;
  if (*(char *)&(__this_01->fields)._safeSerializationManager == '\0') {
    pSVar9 = *(System_String_o **)&(__this_01->fields)._HResult;
  }
  else {
    pSVar9 = (__this_01->fields)._source;
  }
  if (pSVar9 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar9[4].fields._stringLength == '\0') {
      pSVar1 = pSVar9[4].klass;
    }
    else {
      pSVar1 = pSVar9[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar11,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = pSVar9->klass[3]._1.byval_arg.data;
  (*UNRECOVERED_JUMPTABLE_00)
            (pSVar9,*(undefined8 *)&pSVar9->klass[3]._1.byval_arg.bits,auVar15._8_8_,UNRECOVERED_JUMPTABLE_00)
  ;
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f2240

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar1;
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  InvokerMethod pIVar2;
  long *plVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  int32_t value;
  uint uVar5;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_String_o *pSVar6;
  System_ArgumentException_o *__this_01;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  CustomLogic_CustomLogicSliderBuiltin_o *unaff_RBX;
  undefined1 uVar9;
  MethodInfo_24EE950 *obj;
  System_String_c *pSVar10;
  long lVar11;
  MethodInfo *pMVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_40;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    unaff_RBX = __i;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        local_c = UnityEngine_UIElements_BaseSlider_float___get_direction(__this_00,MethodInfo_SliderDirection_get_direction);
        goto label_041f22b1;
      }
    }
    else {
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        local_c = UnityEngine_UIElements_BaseSlider_int___get_direction(__this,MethodInfo_SliderDirection_get_direction);
label_041f22b1:
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_c);
        return pIVar8;
      }
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad858 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad858 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pMVar12 = method;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (lVar11 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (pMVar12 != (MethodInfo *)0x0) {
      if (*(char *)&pMVar12[1].name == '\0') {
        pIVar2 = (InvokerMethod)pMVar12[1].virtualMethodPointer;
      }
      else {
        pIVar2 = pMVar12[1].invoker_method;
      }
      if (pIVar2 != (InvokerMethod)0x0) {
        pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f2385;
        (**(code **)(*(long *)pIVar2 + 0x8d8))(pIVar2,*(undefined8 *)(*(long *)pIVar2 + 0x8e0));
        pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f239e;
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffcf);
        return pIVar8;
      }
    }
    lVar13 = 0;
    pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f23ae;
    uStack_50 = il2cpp_runtime_helper_022b2c90();
    uStack_48 = lVar11;
    pCStack_40 = (CustomLogic_CustomLogicSliderBuiltin_o *)method;
    if (g_data_057ad859 == '\0') {
      uStack_58 = 0x41f23cf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_58 = 0x41f23db;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad859 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_58 = 0x41f23fa;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_58 = 0x41f240c;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x70) == '\0') {
        plVar3 = *(long **)(lVar13 + 0x60);
      }
      else {
        plVar3 = *(long **)(lVar13 + 0x68);
      }
      obj = (MethodInfo_24EE950 *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar11 = *plVar3;
        pIVar8 = (Il2CppObject *)
                 (**(code **)(lVar11 + 0x8e8))
                           (plVar3,uVar5 & 0xff,*(undefined8 *)(lVar11 + 0x8f0),lVar11,
                            *(code **)(lVar11 + 0x8e8));
        return pIVar8;
      }
    }
    uStack_58 = 0x41f244c;
    uStack_58 = il2cpp_runtime_helper_022b2c90();
    if (obj != (MethodInfo_24EE950 *)0x0) {
      uStack_58 = CONCAT17(*(undefined1 *)&obj[1].name,(undefined7)uStack_58);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_58 + 7);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad85a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad85a = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
    return pIVar8;
  }
  pCStack_40 = unaff_RBX;
  if (g_data_057ad843 == '\0') {
    uStack_58 = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_58 = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_58 = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    uStack_58 = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_48 = CONCAT44(value,(undefined4)uStack_48);
  uStack_58 = 0x41f099e;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    uStack_58 = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = 0x41f09c4;
  bVar4 = System_Enum__IsDefined(enumType,pIVar8,(MethodInfo *)0x0);
  uVar9 = SUB81(pIVar8,0);
  if ((char)bVar4 == '\0') {
    uStack_48 = CONCAT44(uStack_48._4_4_,value);
    uStack_58 = 0x41f0a30;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_48);
    uStack_58 = 0x41f0a3f;
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    uStack_58 = 0x41f0a4c;
    pSVar6 = System_String__Format(pSVar6,pIVar8,(MethodInfo *)0x0);
    uStack_58 = 0x41f0a5b;
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    uStack_58 = 0x41f0a63;
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    uStack_58 = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this_01,pSVar6,(MethodInfo *)0x0);
    uStack_58 = 0x41f0a7f;
    uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    uStack_58 = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this_01,uVar7);
    uVar9 = (undefined1)uVar7;
  }
  else if (*(char *)(lVar11 + 0x70) == '\0') {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar11 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      uStack_58 = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar11 + 0x60),value,MethodInfo_Void_set_direction);
      return extraout_RAX_00;
    }
  }
  else {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar11 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      uStack_58 = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar11 + 0x68),value,MethodInfo_Void_set_direction);
      return extraout_RAX;
    }
  }
  uStack_58 = 0x41f0a8f;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  uStack_58 = auVar14._0_8_;
  if (*(char *)&(__this_01->fields)._safeSerializationManager == '\0') {
    pSVar6 = *(System_String_o **)&(__this_01->fields)._HResult;
  }
  else {
    pSVar6 = (__this_01->fields)._source;
  }
  if (pSVar6 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar6->klass[3]._1.byval_arg.data;
    pIVar8 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pSVar6,*(undefined8 *)&pSVar6->klass[3]._1.byval_arg.bits,auVar14._8_8_,
                        UNRECOVERED_JUMPTABLE_00);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar6[4].fields._stringLength == '\0') {
    pSVar10 = pSVar6[4].klass;
  }
  else {
    pSVar10 = pSVar6[4].monitor;
  }
  if (pSVar10 == (System_String_c *)0x0) {
    uVar7 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar7 >> 8),*(undefined1 *)&(pSVar10->_1).interopData);
  }
  pvVar1 = (pSVar10->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x8e8);
  pIVar8 = (Il2CppObject *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (pSVar10,uVar9,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return pIVar8;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f22e0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  Il2CppClass *pIVar3;
  long *plVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  int32_t value;
  uint uVar6;
  System_Type_o *enumType;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_01;
  undefined1 uVar10;
  MethodInfo_24EE950 *obj;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  Il2CppObject *pIStack_28;
  
  if (g_data_057ad858 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad858 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pIVar7 = __v;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (pIVar7 != (Il2CppObject *)0x0) {
      if (*(char *)&pIVar7[7].klass == '\0') {
        pIVar3 = pIVar7[6].klass;
      }
      else {
        pIVar3 = pIVar7[6].monitor;
      }
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar3->_1).image;
        pIStack_28 = (Il2CppObject *)0x41f2385;
        (**(code **)((long)pvVar2 + 0x8d8))(pIVar3,*(undefined8 *)((long)pvVar2 + 0x8e0));
        pIStack_28 = (Il2CppObject *)0x41f239e;
        il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffe7);
        return;
      }
    }
    lVar11 = 0;
    pIStack_28 = (Il2CppObject *)0x41f23ae;
    uStack_38 = il2cpp_runtime_helper_022b2c90();
    uStack_30 = __i;
    pIStack_28 = __v;
    if (g_data_057ad859 == '\0') {
      uStack_40 = 0x41f23cf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      uStack_40 = 0x41f23db;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad859 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_40 = 0x41f23fa;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x41f240c;
    uVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (lVar11 != 0) {
      if (*(char *)(lVar11 + 0x70) == '\0') {
        plVar4 = *(long **)(lVar11 + 0x60);
      }
      else {
        plVar4 = *(long **)(lVar11 + 0x68);
      }
      obj = (MethodInfo_24EE950 *)0x0;
      if (plVar4 != (long *)0x0) {
        lVar11 = *plVar4;
        (**(code **)(lVar11 + 0x8e8))
                  (plVar4,uVar6 & 0xff,*(undefined8 *)(lVar11 + 0x8f0),lVar11,*(code **)(lVar11 + 0x8e8));
        return;
      }
    }
    uStack_40 = 0x41f244c;
    uStack_40 = il2cpp_runtime_helper_022b2c90();
    if (obj != (MethodInfo_24EE950 *)0x0) {
      uStack_40 = CONCAT17(*(undefined1 *)&obj[1].name,(undefined7)uStack_40);
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad85a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad85a = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
    return;
  }
  if (g_data_057ad843 == '\0') {
    uStack_40 = 0x41f0937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_40 = 0x41f0943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    uStack_40 = 0x41f094f;
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    uStack_40 = 0x41f097d;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41f0987;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_30 = (CustomLogic_CustomLogicSliderBuiltin_o *)CONCAT44(value,(undefined4)uStack_30);
  uStack_40 = 0x41f099e;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    uStack_40 = 0x41f09b7;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41f09c4;
  bVar5 = System_Enum__IsDefined(enumType,pIVar7,(MethodInfo *)0x0);
  uVar10 = SUB81(pIVar7,0);
  if ((char)bVar5 == '\0') {
    uStack_30 = (CustomLogic_CustomLogicSliderBuiltin_o *)CONCAT44(uStack_30._4_4_,value);
    uStack_40 = 0x41f0a30;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_30);
    uStack_40 = 0x41f0a3f;
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    uStack_40 = 0x41f0a4c;
    pSVar8 = System_String__Format(pSVar8,pIVar7,(MethodInfo *)0x0);
    uStack_40 = 0x41f0a5b;
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    uStack_40 = 0x41f0a63;
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
    uStack_40 = 0x41f0a73;
    System_ArgumentException___ctor_3c12490(__this_01,pSVar8,(MethodInfo *)0x0);
    uStack_40 = 0x41f0a7f;
    uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    uStack_40 = 0x41f0a8a;
    il2cpp_runtime_helper_022b2b10(__this_01,uVar9);
    uVar10 = (undefined1)uVar9;
  }
  else if ((char)(__i->fields)._isIntSlider == '\0') {
    __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
    __this_01 = (System_ArgumentException_o *)0x0;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      uStack_40 = 0x41f0a0f;
      UnityEngine_UIElements_BaseSlider_float___set_direction(__this_00,value,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
    __this_01 = (System_ArgumentException_o *)0x0;
    if (__this != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      uStack_40 = 0x41f09ee;
      UnityEngine_UIElements_BaseSlider_int___set_direction(__this,value,MethodInfo_Void_set_direction);
      return;
    }
  }
  uStack_40 = 0x41f0a8f;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uStack_40 = auVar12._0_8_;
  if (*(char *)&(__this_01->fields)._safeSerializationManager == '\0') {
    pSVar8 = *(System_String_o **)&(__this_01->fields)._HResult;
  }
  else {
    pSVar8 = (__this_01->fields)._source;
  }
  if (pSVar8 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar8->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar8,*(undefined8 *)&pSVar8->klass[3]._1.byval_arg.bits,auVar12._8_8_,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar8[4].fields._stringLength == '\0') {
    pSVar1 = pSVar8[4].klass;
  }
  else {
    pSVar1 = pSVar8[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar10,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f2360

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar1 = (__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      uStack_8 = in_RAX;
      uVar3 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._122_get_showInputField.
                methodPtr)(pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                                  _122_get_showInputField.method);
      uStack_8 = CONCAT17(uVar3,(undefined7)uStack_8);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
      return pIVar5;
    }
  }
  lVar6 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad859 == '\0') {
    uStack_28 = 0x41f23cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = 0x41f23db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad859 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41f23fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41f240c;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x70) == '\0') {
      plVar2 = *(long **)(lVar6 + 0x60);
    }
    else {
      plVar2 = *(long **)(lVar6 + 0x68);
    }
    method = (MethodInfo *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      pIVar5 = (Il2CppObject *)
               (**(code **)(lVar6 + 0x8e8))
                         (plVar2,uVar4 & 0xff,*(undefined8 *)(lVar6 + 0x8f0),lVar6,*(code **)(lVar6 + 0x8e8));
      return pIVar5;
    }
  }
  uStack_28 = 0x41f244c;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (method == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad85a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad85a = '\x01';
    }
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar5;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar5);
    return pIVar5;
  }
  uStack_28 = CONCAT17(*(undefined1 *)&method[1].name,(undefined7)uStack_28);
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
  return pIVar5;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41f23b0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_SliderInt_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  uint uVar3;
  Il2CppObject *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad859 == '\0') {
    uStack_20 = 0x41f23cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = 0x41f23db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad859 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41f23fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41f240c;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar1 = (__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    __v = (Il2CppObject *)0x0;
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      pUVar2 = (UnityEngine_UIElements_SliderInt_c *)pUVar1->klass;
      vtableDispatch = (pUVar2->vtable)._123_set_showInputField.methodPtr;
      (*vtableDispatch)
                (pUVar1,(ulong)(uVar3 & 0xff),(pUVar2->vtable)._123_set_showInputField.method,pUVar2,
                 vtableDispatch);
      return;
    }
  }
  uStack_20 = 0x41f244c;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (__v == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad85a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad85a = '\x01';
    }
    __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(__this,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
    return;
  }
  uStack_20 = CONCAT17(*(undefined1 *)&__v[7].klass,(undefined7)uStack_20);
  il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__IsIntSlider>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x41f2450

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad85a = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_Slider_o* slider, const MethodInfo* method);
// 0x41efeb0

void CustomLogic_CustomLogicSliderBuiltin___ctor
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_Slider_o *slider,
               MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  
  if (g_data_057ad838 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad838 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)slider,(MethodInfo *)0x0);
  (__this->fields)._floatSlider = slider;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._floatSlider,slider);
  *(undefined1 *)&(__this->fields)._isIntSlider = 0;
  control = (__this->fields)._floatSlider;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_SliderInt_o* sliderInt, const MethodInfo* method);
// 0x41eff60

void CustomLogic_CustomLogicSliderBuiltin___ctor_40eff60
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_SliderInt_o *sliderInt,
               MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  
  if (g_data_057ad839 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Int32);
    g_data_057ad839 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)sliderInt,(MethodInfo *)0x0);
  (__this->fields)._intSlider = sliderInt;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._intSlider,sliderInt);
  *(undefined1 *)&(__this->fields)._isIntSlider = 1;
  control = (__this->fields)._intSlider;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_int);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Int32);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41f0010

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar2;
  void *pvVar3;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar4;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  float *pfVar10;
  undefined8 *puVar11;
  int32_t *piVar12;
  int *piVar13;
  System_Type_o *enumType;
  System_String_o *pSVar14;
  undefined8 uVar15;
  System_ArgumentException_o *__this_00;
  undefined8 extraout_RDX;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  int32_t iVar19;
  System_String_o *pSVar20;
  System_String_o *pSVar21;
  long lVar22;
  long lVar23;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar24;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar25;
  long *plVar26;
  Il2CppObject *unaff_R12;
  CustomLogic_UserMethod_o *pCVar27;
  float fVar28;
  undefined1 auVar29 [16];
  int32_t iStack_138;
  int32_t iStack_134;
  long *plStack_130;
  ulong uStack_128;
  long lStack_120;
  CustomLogic_UserMethod_o *pCStack_118;
  Il2CppObject *pIStack_110;
  System_String_o *pSStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  float fStack_d0;
  float fStack_cc;
  System_String_o *pSStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  System_String_o *pSStack_b0;
  float fStack_a0;
  float fStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  CustomLogic_CustomLogicEvaluator_o *pCStack_70;
  System_Object_array *pSStack_68;
  uint local_54;
  System_Object_array *pSStack_50;
  Il2CppObject *pIStack_48;
  CustomLogic_CustomLogicEvaluator_o *pCStack_40;
  CustomLogic_UserMethod_o *pCStack_38;
  
  if (g_data_057ad83a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad83a = '\x01';
  }
  pCVar27 = (__this->fields)._valueChangedEvent;
  if (pCVar27 == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCVar27 = (__this->fields)._valueChangedEvent;
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
  if (pSVar6 == (System_Object_array *)0x0) {
label_041f0111:
    pIVar7 = unaff_R12;
    il2cpp_runtime_helper_022b2c90();
label_041f0116:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar7 == (Il2CppObject *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 != 0)) {
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
      unaff_R12 = pIVar7;
      if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0(pCVar1,pCVar27,pSVar6,(MethodInfo *)0x0);
        return;
      }
      goto label_041f0111;
    }
    goto label_041f0116;
  }
  lVar8 = il2cpp_runtime_helper_0231b270();
  uVar17 = 0;
  il2cpp_runtime_helper_022b2b10();
  pSStack_50 = pSVar6;
  pIStack_48 = pIVar7;
  pCStack_40 = pCVar1;
  pCStack_38 = pCVar27;
  if (g_data_057ad83b == '\0') {
    pSStack_68 = (System_Object_array *)0x41f0157;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_68 = (System_Object_array *)0x41f0163;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad83b = '\x01';
  }
  pCVar27 = *(CustomLogic_UserMethod_o **)(lVar8 + 0x78);
  if (pCVar27 == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_68 = (System_Object_array *)0x41f0190;
    il2cpp_runtime_helper_02337ed0();
    pCVar27 = *(CustomLogic_UserMethod_o **)(lVar8 + 0x78);
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSStack_68 = (System_Object_array *)0x41f01b7;
  pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  pSStack_68 = (System_Object_array *)0x41f01d4;
  local_54 = uVar17;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
  pIVar7 = (Il2CppObject *)&TypeInfo_CustomLogicManager;
  if (pSVar6 == (System_Object_array *)0x0) {
label_041f0230:
    pIVar9 = pIVar7;
    pSStack_68 = (System_Object_array *)0x41f0235;
    il2cpp_runtime_helper_022b2c90();
label_041f0235:
    pSStack_68 = (System_Object_array *)0x41f023a;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar9 == (Il2CppObject *)0x0) {
label_041f01f5:
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = pIVar9;
        pSStack_68 = (System_Object_array *)0x41f020e;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
        pIVar7 = pIVar9;
        if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSStack_68 = (System_Object_array *)0x41f0223;
          CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0(pCVar1,pCVar27,pSVar6,(MethodInfo *)0x0);
          return;
        }
        goto label_041f0230;
      }
      goto label_041f0235;
    }
    pSStack_68 = (System_Object_array *)0x41f01f0;
    lVar8 = il2cpp_runtime_helper_023051f0(pIVar9);
    if (lVar8 != 0) goto label_041f01f5;
  }
  pSStack_68 = (System_Object_array *)0x41f023f;
  lVar8 = il2cpp_runtime_helper_0231b270();
  pSVar14 = (System_String_o *)0x0;
  pSStack_68 = (System_Object_array *)0x41f0249;
  il2cpp_runtime_helper_022b2b10();
  pSStack_68 = pSVar6;
  if (g_data_057ad83c == '\0') {
    pCStack_70 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0269;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    pCStack_70 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0275;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad83c = '\x01';
  }
  if (*(char *)(lVar8 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar8 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___get_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar8 + 0x60),MethodInfo_String_get_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar8 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___get_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar8 + 0x68),MethodInfo_String_get_label);
    return;
  }
  lVar22 = 0;
  pCStack_70 = (CustomLogic_CustomLogicEvaluator_o *)0x41f02b9;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  pSVar20 = pSVar14;
  lStack_78 = lVar8;
  pCStack_70 = pCVar1;
  if (g_data_057ad83d == '\0') {
    uStack_88 = 0x41f02df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    uStack_88 = 0x41f02eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad83d = '\x01';
  }
  if (*(char *)(lVar22 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar22 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar22 + 0x60),pSVar14,MethodInfo_Void_set_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar22 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___set_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar22 + 0x68),pSVar14,MethodInfo_Void_set_label);
    return;
  }
  lVar8 = 0;
  uStack_88 = 0x41f0341;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar8 + 0x70) == '\0') {
    plVar26 = *(long **)(lVar8 + 0x60);
    if (plVar26 != (long *)0x0) {
      lStack_90 = 0x41f03a7;
      uVar4 = (**(code **)(*plVar26 + 0x7c8))(plVar26,*(undefined8 *)(*plVar26 + 2000));
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
      lStack_90 = 0x41f03c2;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_88);
      return;
    }
  }
  else {
    plVar26 = *(long **)(lVar8 + 0x68);
    if (plVar26 != (long *)0x0) {
      lStack_90 = 0x41f0370;
      uVar4 = (**(code **)(*plVar26 + 0x7c8))(plVar26,*(undefined8 *)(*plVar26 + 2000));
      uStack_88 = CONCAT44(uVar4,(undefined4)uStack_88);
      lStack_90 = 0x41f038c;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_88 + 4);
      return;
    }
  }
  lVar8 = 0;
  lStack_90 = 0x41f03c9;
  il2cpp_runtime_helper_022b2c90();
  lStack_90 = lVar22;
  if (*(char *)(lVar8 + 0x70) == '\0') {
    if (pSVar20 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar20->klass == g_data_057b9be8) {
      lStack_98 = 0x41f045c;
      auVar29 = il2cpp_runtime_helper_02305440(pSVar20);
      uVar15 = auVar29._8_8_;
      plVar26 = *(long **)(lVar8 + 0x60);
      if (plVar26 != (long *)0x0) {
        fVar28 = *auVar29._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (pSVar20->klass != g_data_057b9bb8) {
        return;
      }
      lStack_98 = 0x41f0473;
      auVar29 = il2cpp_runtime_helper_02305440(pSVar20);
      uVar15 = auVar29._8_8_;
      plVar26 = *(long **)(lVar8 + 0x60);
      if (plVar26 != (long *)0x0) {
        fVar28 = (float)*auVar29._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar26 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar28,plVar26,*(undefined8 *)(*plVar26 + 0x7e0),uVar15,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  else {
    if (pSVar20 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar20->klass == g_data_057b9bb8) {
      lStack_98 = 0x41f0435;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pSVar20);
      plVar26 = *(long **)(lVar8 + 0x68);
      if (plVar26 != (long *)0x0) {
        iVar18 = *piVar13;
        goto label_041f0440;
      }
    }
    else {
      if (pSVar20->klass != g_data_057b9be8) {
        return;
      }
      lStack_98 = 0x41f03fd;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar20);
      plVar26 = *(long **)(lVar8 + 0x68);
      if (plVar26 != (long *)0x0) {
        iVar18 = (int)*pfVar10;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar26 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar26,iVar18,*(undefined8 *)(*plVar26 + 0x7e0),UNRECOVERED_JUMPTABLE_00)
        ;
        return;
      }
    }
  }
  lVar22 = 0;
  lStack_98 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_98 = lVar8;
  if (g_data_057ad83e == '\0') {
    pSStack_b0 = (System_String_o *)0x41f04bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    pSStack_b0 = (System_String_o *)0x41f04c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar22 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar22 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      pSStack_b0 = (System_String_o *)0x41f051c;
      fStack_a0 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar22 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar10 = &fStack_a0;
      puVar11 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar22 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    pSStack_b0 = (System_String_o *)0x41f04ee;
    fStack_9c = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar22 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar10 = &fStack_9c;
    puVar11 = &g_data_057b9bb8;
label_041f0532:
    pSStack_b0 = (System_String_o *)0x41f053a;
    il2cpp_runtime_helper_02304f30(*puVar11,pfVar10);
    return;
  }
  lVar8 = 0;
  pSStack_b0 = (System_String_o *)0x41f0545;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pSVar21 = pSVar20;
  lStack_b8 = lVar22;
  pSStack_b0 = pSVar14;
  if (g_data_057ad83f == '\0') {
    pSStack_c8 = (System_String_o *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pSStack_c8 = (System_String_o *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar8 + 0x70) == '\0') {
    if (pSVar20 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar20->klass == g_data_057b9be8) {
      pSStack_c8 = (System_String_o *)0x41f0613;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar20);
      pUVar25 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60);
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar28 = *pfVar10;
        goto label_041f0637;
      }
    }
    else {
      if (pSVar20->klass != g_data_057b9bb8) {
        return;
      }
      pSStack_c8 = (System_String_o *)0x41f062a;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pSVar20);
      pUVar25 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60);
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar28 = (float)*piVar13;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar25,fVar28,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (pSVar20 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar20->klass == g_data_057b9bb8) {
      pSStack_c8 = (System_String_o *)0x41f05ea;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar20);
      pUVar24 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68);
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = *piVar12;
        goto label_041f05f5;
      }
    }
    else {
      if (pSVar20->klass != g_data_057b9be8) {
        return;
      }
      pSStack_c8 = (System_String_o *)0x41f05ac;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar20);
      pUVar24 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68);
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = (int32_t)*pfVar10;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar24,iVar19,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar22 = 0;
  pSStack_c8 = (System_String_o *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pSStack_c8 = pSVar20;
  if (g_data_057ad840 == '\0') {
    lStack_e0 = 0x41f067d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    lStack_e0 = 0x41f0689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar22 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar22 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      lStack_e0 = 0x41f06dc;
      fStack_d0 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar22 + 0x60),MethodInfo_Single_get_highValue);
      pfVar10 = &fStack_d0;
      puVar11 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar22 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    lStack_e0 = 0x41f06ae;
    fStack_cc = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar22 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar10 = &fStack_cc;
    puVar11 = &g_data_057b9bb8;
label_041f06f2:
    lStack_e0 = 0x41f06fa;
    il2cpp_runtime_helper_02304f30(*puVar11,pfVar10);
    return;
  }
  lVar23 = 0;
  lStack_e0 = 0x41f0705;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pSVar14 = pSVar21;
  lStack_e8 = lVar22;
  lStack_e0 = lVar8;
  if (g_data_057ad841 == '\0') {
    uStack_f8 = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    uStack_f8 = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar19 = (int32_t)pSVar14;
  if (*(char *)(lVar23 + 0x70) == '\0') {
    if (pSVar21 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar21->klass == g_data_057b9be8) {
      uStack_f8 = 0x41f07d3;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar21);
      pUVar25 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar23 + 0x60);
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar28 = *pfVar10;
        goto label_041f07f7;
      }
    }
    else {
      if (pSVar21->klass != g_data_057b9bb8) {
        return;
      }
      uStack_f8 = 0x41f07ea;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pSVar21);
      pUVar25 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar23 + 0x60);
      if (pUVar25 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar28 = (float)*piVar13;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar25,fVar28,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pSVar21 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar21->klass == g_data_057b9bb8) {
      uStack_f8 = 0x41f07aa;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar21);
      pUVar24 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar23 + 0x68);
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = *piVar12;
        goto label_041f07b5;
      }
    }
    else {
      if (pSVar21->klass != g_data_057b9be8) {
        return;
      }
      uStack_f8 = 0x41f076c;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar21);
      pUVar24 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar23 + 0x68);
      if (pUVar24 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar19 = (int32_t)*pfVar10;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar24,iVar19,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar8 = 0;
  uStack_f8 = 0x41f0812;
  auVar29 = il2cpp_runtime_helper_022b2c90();
  uStack_f8 = auVar29._0_8_;
  if (*(char *)(lVar8 + 0x70) == '\0') {
    plVar26 = *(long **)(lVar8 + 0x60);
  }
  else {
    plVar26 = *(long **)(lVar8 + 0x68);
  }
  if (plVar26 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar26 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar26,*(undefined8 *)(*plVar26 + 0x8c0),auVar29._8_8_,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uStack_100 = 0x41f0852;
  auVar29 = il2cpp_runtime_helper_022b2c90();
  uStack_100 = auVar29._0_8_;
  if ((char)plVar26[0xe] == '\0') {
    plVar26 = (long *)plVar26[0xc];
  }
  else {
    plVar26 = (long *)plVar26[0xd];
  }
  if (plVar26 == (long *)0x0) {
    pSStack_108 = (System_String_o *)0x41f0892;
    il2cpp_runtime_helper_022b2c90();
    pSStack_108 = pSVar21;
    if (g_data_057ad842 == '\0') {
      pIStack_110 = (Il2CppObject *)0x41f08b9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      pIStack_110 = (Il2CppObject *)0x41f08c5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)plVar26[0xe] == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar26[0xc] !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___get_direction
                  ((UnityEngine_UIElements_BaseSlider_float__o *)plVar26[0xc],MethodInfo_SliderDirection_get_direction);
        return;
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar26[0xd] !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction
                ((UnityEngine_UIElements_BaseSlider_int__o *)plVar26[0xd],MethodInfo_SliderDirection_get_direction);
      return;
    }
    lVar8 = 0;
    pIStack_110 = (Il2CppObject *)0x41f0909;
    il2cpp_runtime_helper_022b2c90();
    plStack_130 = plVar26;
    uStack_128 = (ulong)uVar17;
    lStack_120 = lVar23;
    pCStack_118 = pCVar27;
    pIStack_110 = pIVar9;
    if (g_data_057ad843 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
      g_data_057ad843 = '\x01';
    }
    handle.fields.value = TypeRef_SliderDirection.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    iStack_134 = iVar19;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_134);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_Enum__IsDefined(enumType,pIVar7,(MethodInfo *)0x0);
    uVar16 = SUB81(pIVar7,0);
    if ((char)bVar5 == '\0') {
      iStack_138 = iVar19;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_138);
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
      pSVar14 = System_String__Format(pSVar14,pIVar7,(MethodInfo *)0x0);
      uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar15);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar14,(MethodInfo *)0x0);
      uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar15);
      uVar16 = (undefined1)uVar15;
    }
    else if (*(char *)(lVar8 + 0x70) == '\0') {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60) !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60),iVar19,MethodInfo_Void_set_direction);
        return;
      }
    }
    else {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68) !=
          (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68),iVar19,MethodInfo_Void_set_direction);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
      pSVar14 = *(System_String_o **)&(__this_00->fields)._HResult;
    }
    else {
      pSVar14 = (__this_00->fields)._source;
    }
    if (pSVar14 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((char)pSVar14[4].fields._stringLength == '\0') {
        pSVar2 = pSVar14[4].klass;
      }
      else {
        pSVar2 = pSVar14[4].monitor;
      }
      if (pSVar2 == (System_String_c *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pvVar3 = (pSVar2->_1).image;
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar3 + 0x8e8);
      (*UNRECOVERED_JUMPTABLE_00)
                (pSVar2,uVar16,*(undefined8 *)((long)pvVar3 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = pSVar14->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar14,*(undefined8 *)&pSVar14->klass[3]._1.byval_arg.bits,extraout_RDX,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar26 + 0x8c8);
  (*UNRECOVERED_JUMPTABLE_00)
            (plVar26,*(undefined8 *)(*plVar26 + 0x8d0),auVar29._8_8_,UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41f0130

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_40f0130
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar3;
  bool_conflict bVar4;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int32_t *piVar9;
  int *piVar10;
  System_Type_o *enumType;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  undefined8 uVar13;
  System_ArgumentException_o *__this_01;
  undefined8 extraout_RDX;
  undefined1 uVar14;
  int iVar15;
  int32_t iVar16;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  long lVar19;
  long lVar20;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar21;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar22;
  long *plVar23;
  CustomLogic_UserMethod_o *userMethod;
  float fVar24;
  undefined1 auVar25 [16];
  int32_t iStack_110;
  int32_t iStack_10c;
  long *plStack_108;
  ulong uStack_100;
  long lStack_f8;
  CustomLogic_UserMethod_o *pCStack_f0;
  Il2CppObject *pIStack_e8;
  System_String_o *pSStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  float fStack_a8;
  float fStack_a4;
  System_String_o *pSStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  System_String_o *pSStack_88;
  float fStack_78;
  float fStack_74;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  CustomLogic_CustomLogicEvaluator_o *pCStack_48;
  System_Object_array *pSStack_40;
  int32_t iStack_2c;
  
  if (g_data_057ad83b == '\0') {
    pSStack_40 = (System_Object_array *)0x41f0157;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_40 = (System_Object_array *)0x41f0163;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad83b = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_40 = (System_Object_array *)0x41f0190;
    il2cpp_runtime_helper_02337ed0();
    userMethod = (__this->fields)._valueChangedEvent;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSStack_40 = (System_Object_array *)0x41f01b7;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  pSStack_40 = (System_Object_array *)0x41f01d4;
  iStack_2c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
  pIVar11 = (Il2CppObject *)&TypeInfo_CustomLogicManager;
  if (parameterValues == (System_Object_array *)0x0) {
label_041f0230:
    pIVar5 = pIVar11;
    pSStack_40 = (System_Object_array *)0x41f0235;
    il2cpp_runtime_helper_022b2c90();
label_041f0235:
    pSStack_40 = (System_Object_array *)0x41f023a;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar5 == (Il2CppObject *)0x0) {
label_041f01f5:
      if ((int)parameterValues->max_length != 0) {
        parameterValues->m_Items[0] = pIVar5;
        pSStack_40 = (System_Object_array *)0x41f020e;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
        pIVar11 = pIVar5;
        if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSStack_40 = (System_Object_array *)0x41f0223;
          CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                    (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
          return;
        }
        goto label_041f0230;
      }
      goto label_041f0235;
    }
    pSStack_40 = (System_Object_array *)0x41f01f0;
    lVar6 = il2cpp_runtime_helper_023051f0(pIVar5);
    if (lVar6 != 0) goto label_041f01f5;
  }
  pSStack_40 = (System_Object_array *)0x41f023f;
  lVar6 = il2cpp_runtime_helper_0231b270();
  pSVar12 = (System_String_o *)0x0;
  pSStack_40 = (System_Object_array *)0x41f0249;
  il2cpp_runtime_helper_022b2b10();
  pSStack_40 = parameterValues;
  if (g_data_057ad83c == '\0') {
    pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0269;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0275;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad83c = '\x01';
  }
  if (*(char *)(lVar6 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar6 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___get_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar6 + 0x60),MethodInfo_String_get_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar6 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___get_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar6 + 0x68),MethodInfo_String_get_label);
    return;
  }
  lVar19 = 0;
  pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)0x41f02b9;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar12;
  lStack_50 = lVar6;
  pCStack_48 = __this_00;
  if (g_data_057ad83d == '\0') {
    uStack_60 = 0x41f02df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    uStack_60 = 0x41f02eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad83d = '\x01';
  }
  if (*(char *)(lVar19 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar19 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar19 + 0x60),pSVar12,MethodInfo_Void_set_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar19 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___set_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar19 + 0x68),pSVar12,MethodInfo_Void_set_label);
    return;
  }
  lVar6 = 0;
  uStack_60 = 0x41f0341;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar6 + 0x70) == '\0') {
    plVar23 = *(long **)(lVar6 + 0x60);
    if (plVar23 != (long *)0x0) {
      lStack_68 = 0x41f03a7;
      uVar3 = (**(code **)(*plVar23 + 0x7c8))(plVar23,*(undefined8 *)(*plVar23 + 2000));
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
      lStack_68 = 0x41f03c2;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_60);
      return;
    }
  }
  else {
    plVar23 = *(long **)(lVar6 + 0x68);
    if (plVar23 != (long *)0x0) {
      lStack_68 = 0x41f0370;
      uVar3 = (**(code **)(*plVar23 + 0x7c8))(plVar23,*(undefined8 *)(*plVar23 + 2000));
      uStack_60 = CONCAT44(uVar3,(undefined4)uStack_60);
      lStack_68 = 0x41f038c;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
      return;
    }
  }
  lVar6 = 0;
  lStack_68 = 0x41f03c9;
  il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar19;
  if (*(char *)(lVar6 + 0x70) == '\0') {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9be8) {
      lStack_70 = 0x41f045c;
      auVar25 = il2cpp_runtime_helper_02305440(pSVar17);
      uVar13 = auVar25._8_8_;
      plVar23 = *(long **)(lVar6 + 0x60);
      if (plVar23 != (long *)0x0) {
        fVar24 = *auVar25._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9bb8) {
        return;
      }
      lStack_70 = 0x41f0473;
      auVar25 = il2cpp_runtime_helper_02305440(pSVar17);
      uVar13 = auVar25._8_8_;
      plVar23 = *(long **)(lVar6 + 0x60);
      if (plVar23 != (long *)0x0) {
        fVar24 = (float)*auVar25._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar23 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar24,plVar23,*(undefined8 *)(*plVar23 + 0x7e0),uVar13,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  else {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9bb8) {
      lStack_70 = 0x41f0435;
      piVar10 = (int *)il2cpp_runtime_helper_02305440(pSVar17);
      plVar23 = *(long **)(lVar6 + 0x68);
      if (plVar23 != (long *)0x0) {
        iVar15 = *piVar10;
        goto label_041f0440;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9be8) {
        return;
      }
      lStack_70 = 0x41f03fd;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      plVar23 = *(long **)(lVar6 + 0x68);
      if (plVar23 != (long *)0x0) {
        iVar15 = (int)*pfVar7;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar23 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar23,iVar15,*(undefined8 *)(*plVar23 + 0x7e0),UNRECOVERED_JUMPTABLE_00)
        ;
        return;
      }
    }
  }
  lVar19 = 0;
  lStack_70 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_70 = lVar6;
  if (g_data_057ad83e == '\0') {
    pSStack_88 = (System_String_o *)0x41f04bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    pSStack_88 = (System_String_o *)0x41f04c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar19 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      pSStack_88 = (System_String_o *)0x41f051c;
      fStack_78 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar7 = &fStack_78;
      puVar8 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    pSStack_88 = (System_String_o *)0x41f04ee;
    fStack_74 = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar7 = &fStack_74;
    puVar8 = &g_data_057b9bb8;
label_041f0532:
    pSStack_88 = (System_String_o *)0x41f053a;
    il2cpp_runtime_helper_02304f30(*puVar8,pfVar7);
    return;
  }
  lVar6 = 0;
  pSStack_88 = (System_String_o *)0x41f0545;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pSVar18 = pSVar17;
  lStack_90 = lVar19;
  pSStack_88 = pSVar12;
  if (g_data_057ad83f == '\0') {
    pSStack_a0 = (System_String_o *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pSStack_a0 = (System_String_o *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar6 + 0x70) == '\0') {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9be8) {
      pSStack_a0 = (System_String_o *)0x41f0613;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar22 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar6 + 0x60);
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = *pfVar7;
        goto label_041f0637;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9bb8) {
        return;
      }
      pSStack_a0 = (System_String_o *)0x41f062a;
      piVar10 = (int *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar22 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar6 + 0x60);
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = (float)*piVar10;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar22,fVar24,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9bb8) {
      pSStack_a0 = (System_String_o *)0x41f05ea;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar6 + 0x68);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar16 = *piVar9;
        goto label_041f05f5;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9be8) {
        return;
      }
      pSStack_a0 = (System_String_o *)0x41f05ac;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar6 + 0x68);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar16 = (int32_t)*pfVar7;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar21,iVar16,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar19 = 0;
  pSStack_a0 = (System_String_o *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar17;
  if (g_data_057ad840 == '\0') {
    lStack_b8 = 0x41f067d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    lStack_b8 = 0x41f0689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar19 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      lStack_b8 = 0x41f06dc;
      fStack_a8 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60),MethodInfo_Single_get_highValue);
      pfVar7 = &fStack_a8;
      puVar8 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    lStack_b8 = 0x41f06ae;
    fStack_a4 = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar7 = &fStack_a4;
    puVar8 = &g_data_057b9bb8;
label_041f06f2:
    lStack_b8 = 0x41f06fa;
    il2cpp_runtime_helper_02304f30(*puVar8,pfVar7);
    return;
  }
  lVar20 = 0;
  lStack_b8 = 0x41f0705;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  pSVar12 = pSVar18;
  lStack_c0 = lVar19;
  lStack_b8 = lVar6;
  if (g_data_057ad841 == '\0') {
    uStack_d0 = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    uStack_d0 = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar16 = (int32_t)pSVar12;
  if (*(char *)(lVar20 + 0x70) == '\0') {
    if (pSVar18 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar18->klass == g_data_057b9be8) {
      uStack_d0 = 0x41f07d3;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar22 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar20 + 0x60);
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = *pfVar7;
        goto label_041f07f7;
      }
    }
    else {
      if (pSVar18->klass != g_data_057b9bb8) {
        return;
      }
      uStack_d0 = 0x41f07ea;
      piVar10 = (int *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar22 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar20 + 0x60);
      if (pUVar22 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = (float)*piVar10;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar22,fVar24,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pSVar18 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar18->klass == g_data_057b9bb8) {
      uStack_d0 = 0x41f07aa;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar20 + 0x68);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar16 = *piVar9;
        goto label_041f07b5;
      }
    }
    else {
      if (pSVar18->klass != g_data_057b9be8) {
        return;
      }
      uStack_d0 = 0x41f076c;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar20 + 0x68);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar16 = (int32_t)*pfVar7;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar21,iVar16,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar6 = 0;
  uStack_d0 = 0x41f0812;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  uStack_d0 = auVar25._0_8_;
  if (*(char *)(lVar6 + 0x70) == '\0') {
    plVar23 = *(long **)(lVar6 + 0x60);
  }
  else {
    plVar23 = *(long **)(lVar6 + 0x68);
  }
  if (plVar23 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar23 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar23,*(undefined8 *)(*plVar23 + 0x8c0),auVar25._8_8_,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uStack_d8 = 0x41f0852;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  uStack_d8 = auVar25._0_8_;
  if ((char)plVar23[0xe] == '\0') {
    plVar23 = (long *)plVar23[0xc];
  }
  else {
    plVar23 = (long *)plVar23[0xd];
  }
  if (plVar23 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar23 + 0x8c8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar23,*(undefined8 *)(*plVar23 + 0x8d0),auVar25._8_8_,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  pSStack_e0 = (System_String_o *)0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  pSStack_e0 = pSVar18;
  if (g_data_057ad842 == '\0') {
    pIStack_e8 = (Il2CppObject *)0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    pIStack_e8 = (Il2CppObject *)0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar23[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar23[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction
                ((UnityEngine_UIElements_BaseSlider_float__o *)plVar23[0xc],MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar23[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    UnityEngine_UIElements_BaseSlider_int___get_direction
              ((UnityEngine_UIElements_BaseSlider_int__o *)plVar23[0xd],MethodInfo_SliderDirection_get_direction);
    return;
  }
  lVar6 = 0;
  pIStack_e8 = (Il2CppObject *)0x41f0909;
  il2cpp_runtime_helper_022b2c90();
  plStack_108 = plVar23;
  uStack_100 = (ulong)(uint)value;
  lStack_f8 = lVar20;
  pCStack_f0 = userMethod;
  pIStack_e8 = pIVar5;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_10c = iVar16;
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_10c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar11,(MethodInfo *)0x0);
  uVar14 = SUB81(pIVar11,0);
  if ((char)bVar4 == '\0') {
    iStack_110 = iVar16;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_110);
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar12 = System_String__Format(pSVar12,pIVar11,(MethodInfo *)0x0);
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
    System_ArgumentException___ctor_3c12490(__this_01,pSVar12,(MethodInfo *)0x0);
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_01,uVar13);
    uVar14 = (undefined1)uVar13;
  }
  else if (*(char *)(lVar6 + 0x70) == '\0') {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar6 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar6 + 0x60),iVar16,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar6 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar6 + 0x68),iVar16,MethodInfo_Void_set_direction);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_01->fields)._safeSerializationManager == '\0') {
    pSVar12 = *(System_String_o **)&(__this_01->fields)._HResult;
  }
  else {
    pSVar12 = (__this_01->fields)._source;
  }
  if (pSVar12 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar12->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar12,*(undefined8 *)&pSVar12->klass[3]._1.byval_arg.bits,extraout_RDX,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar12[4].fields._stringLength == '\0') {
    pSVar1 = pSVar12[4].klass;
  }
  else {
    pSVar1 = pSVar12[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar14,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0250

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_Label
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar1;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  float *pfVar5;
  undefined8 *puVar6;
  System_String_o *extraout_RAX_01;
  System_String_o *extraout_RAX_02;
  int32_t *piVar7;
  System_String_o *extraout_RAX_03;
  int *piVar8;
  System_String_o *extraout_RAX_04;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *pIVar9;
  System_String_o *extraout_RAX_05;
  System_String_o *extraout_RAX_06;
  System_ArgumentException_o *__this_02;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar11;
  int iVar12;
  int32_t iVar13;
  MethodInfo *pMVar14;
  MethodInfo *pMVar15;
  long lVar16;
  long lVar17;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar18;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar19;
  long *plVar20;
  System_String_c *pSVar21;
  float fVar22;
  undefined1 auVar23 [16];
  int32_t iStack_d8;
  int32_t iStack_d4;
  long *plStack_d0;
  float fStack_70;
  float fStack_6c;
  MethodInfo *pMStack_68;
  System_String_o *pSStack_60;
  long lStack_58;
  MethodInfo *pMStack_50;
  float fStack_40;
  float fStack_3c;
  long lStack_38;
  long lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_18;
  
  if (g_data_057ad83c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad83c = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      pSVar4 = UnityEngine_UIElements_BaseField_float___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,MethodInfo_String_get_label);
      return pSVar4;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      pSVar4 = UnityEngine_UIElements_BaseField_int___get_label
                         ((UnityEngine_UIElements_BaseField_int__o *)__this_00,MethodInfo_String_get_label);
      return pSVar4;
    }
  }
  lVar16 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  pMVar14 = method;
  pCStack_18 = __this;
  if (g_data_057ad83d == '\0') {
    local_28 = 0x41f02df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    local_28 = 0x41f02eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad83d = '\x01';
  }
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar16 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar16 + 0x60),(System_String_o *)method
                 ,MethodInfo_Void_set_label);
      return extraout_RAX_00;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar16 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___set_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar16 + 0x68),(System_String_o *)method,
               MethodInfo_Void_set_label);
    return extraout_RAX;
  }
  lVar17 = 0;
  local_28 = 0x41f0341;
  local_28 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar17 + 0x70) == '\0') {
    plVar20 = *(long **)(lVar17 + 0x60);
    if (plVar20 != (long *)0x0) {
      lStack_30 = 0x41f03a7;
      uVar2 = (**(code **)(*plVar20 + 0x7c8))(plVar20,*(undefined8 *)(*plVar20 + 2000));
      local_28 = CONCAT44(local_28._4_4_,uVar2);
      lStack_30 = 0x41f03c2;
      pSVar4 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_28);
      return pSVar4;
    }
  }
  else {
    plVar20 = *(long **)(lVar17 + 0x68);
    if (plVar20 != (long *)0x0) {
      lStack_30 = 0x41f0370;
      uVar2 = (**(code **)(*plVar20 + 0x7c8))(plVar20,*(undefined8 *)(*plVar20 + 2000));
      local_28 = CONCAT44(uVar2,(undefined4)local_28);
      lStack_30 = 0x41f038c;
      pSVar4 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&local_28 + 4);
      return pSVar4;
    }
  }
  lVar17 = 0;
  lStack_30 = 0x41f03c9;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  lStack_30 = lVar16;
  if (*(char *)(lVar17 + 0x70) == '\0') {
    if (pMVar14 == (MethodInfo *)0x0) {
      return pSVar4;
    }
    if (pMVar14->methodPointer == g_data_057b9be8) {
      lStack_38 = 0x41f045c;
      auVar23 = il2cpp_runtime_helper_02305440(pMVar14);
      uVar10 = auVar23._8_8_;
      plVar20 = *(long **)(lVar17 + 0x60);
      if (plVar20 != (long *)0x0) {
        fVar22 = *auVar23._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (pMVar14->methodPointer != g_data_057b9bb8) {
        return (System_String_o *)&g_data_057b9b70;
      }
      lStack_38 = 0x41f0473;
      auVar23 = il2cpp_runtime_helper_02305440(pMVar14);
      uVar10 = auVar23._8_8_;
      plVar20 = *(long **)(lVar17 + 0x60);
      if (plVar20 != (long *)0x0) {
        fVar22 = (float)*auVar23._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x7d8);
        pSVar4 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (fVar22,plVar20,*(undefined8 *)(*plVar20 + 0x7e0),uVar10,UNRECOVERED_JUMPTABLE_00);
        return pSVar4;
      }
    }
  }
  else {
    if (pMVar14 == (MethodInfo *)0x0) {
      return pSVar4;
    }
    if (pMVar14->methodPointer == g_data_057b9bb8) {
      lStack_38 = 0x41f0435;
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pMVar14);
      plVar20 = *(long **)(lVar17 + 0x68);
      if (plVar20 != (long *)0x0) {
        iVar12 = *piVar8;
        goto label_041f0440;
      }
    }
    else {
      if (pMVar14->methodPointer != g_data_057b9be8) {
        return (System_String_o *)&g_data_057b9b70;
      }
      lStack_38 = 0x41f03fd;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar14);
      plVar20 = *(long **)(lVar17 + 0x68);
      if (plVar20 != (long *)0x0) {
        iVar12 = (int)*pfVar5;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x7d8);
        pSVar4 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (plVar20,iVar12,*(undefined8 *)(*plVar20 + 0x7e0),UNRECOVERED_JUMPTABLE_00);
        return pSVar4;
      }
    }
  }
  lVar16 = 0;
  lStack_38 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar17;
  if (g_data_057ad83e == '\0') {
    pMStack_50 = (MethodInfo *)0x41f04bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    pMStack_50 = (MethodInfo *)0x41f04c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      pMStack_50 = (MethodInfo *)0x41f051c;
      fStack_40 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar5 = &fStack_40;
      puVar6 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    pMStack_50 = (MethodInfo *)0x41f04ee;
    fStack_3c = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar5 = &fStack_3c;
    puVar6 = &g_data_057b9bb8;
label_041f0532:
    pMStack_50 = (MethodInfo *)0x41f053a;
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_02304f30(*puVar6,pfVar5);
    return pSVar4;
  }
  lVar17 = 0;
  pMStack_50 = (MethodInfo *)0x41f0545;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pMVar15 = pMVar14;
  pSStack_60 = pSVar4;
  lStack_58 = lVar16;
  pMStack_50 = method;
  if (g_data_057ad83f == '\0') {
    pMStack_68 = (MethodInfo *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pMStack_68 = (MethodInfo *)0x41f057b;
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar17 + 0x70) == '\0') {
    if (pMVar14 == (MethodInfo *)0x0) {
      return pSVar4;
    }
    if (pMVar14->methodPointer == g_data_057b9be8) {
      pMStack_68 = (MethodInfo *)0x41f0613;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar14);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar17 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar22 = *pfVar5;
        goto label_041f0637;
      }
    }
    else {
      if (pMVar14->methodPointer != g_data_057b9bb8) {
        return (System_String_o *)&g_data_057b9b70;
      }
      pMStack_68 = (MethodInfo *)0x41f062a;
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pMVar14);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar17 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar22 = (float)*piVar8;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar19,fVar22,MethodInfo_Void_set_lowValue);
        return extraout_RAX_02;
      }
    }
  }
  else {
    if (pMVar14 == (MethodInfo *)0x0) {
      return pSVar4;
    }
    if (pMVar14->methodPointer == g_data_057b9bb8) {
      pMStack_68 = (MethodInfo *)0x41f05ea;
      piVar7 = (int32_t *)il2cpp_runtime_helper_02305440(pMVar14);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar17 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar13 = *piVar7;
        goto label_041f05f5;
      }
    }
    else {
      if (pMVar14->methodPointer != g_data_057b9be8) {
        return (System_String_o *)&g_data_057b9b70;
      }
      pMStack_68 = (MethodInfo *)0x41f05ac;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar14);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar17 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar13 = (int32_t)*pfVar5;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar18,iVar13,MethodInfo_Void_set_lowValue);
        return extraout_RAX_01;
      }
    }
  }
  lVar16 = 0;
  pMStack_68 = (MethodInfo *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pMStack_68 = pMVar14;
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_70 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60),MethodInfo_Single_get_highValue);
      pfVar5 = &fStack_70;
      puVar6 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_6c = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar5 = &fStack_6c;
    puVar6 = &g_data_057b9bb8;
label_041f06f2:
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_02304f30(*puVar6,pfVar5);
    return pSVar4;
  }
  lVar16 = 0;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar15;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar13 = (int32_t)pMVar14;
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (pMVar15 == (MethodInfo *)0x0) {
      return pSVar4;
    }
    if (pMVar15->methodPointer == g_data_057b9be8) {
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar15);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar22 = *pfVar5;
        goto label_041f07f7;
      }
    }
    else {
      if (pMVar15->methodPointer != g_data_057b9bb8) {
        return (System_String_o *)&g_data_057b9b70;
      }
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pMVar15);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar22 = (float)*piVar8;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar19,fVar22,MethodInfo_Void_set_highValue);
        return extraout_RAX_04;
      }
    }
  }
  else {
    if (pMVar15 == (MethodInfo *)0x0) {
      return pSVar4;
    }
    if (pMVar15->methodPointer == g_data_057b9bb8) {
      piVar7 = (int32_t *)il2cpp_runtime_helper_02305440(pMVar15);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar13 = *piVar7;
        goto label_041f07b5;
      }
    }
    else {
      if (pMVar15->methodPointer != g_data_057b9be8) {
        return (System_String_o *)&g_data_057b9b70;
      }
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar15);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar13 = (int32_t)*pfVar5;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar18,iVar13,MethodInfo_Void_set_highValue);
        return extraout_RAX_03;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar16 + 0x70) == '\0') {
    plVar20 = *(long **)(lVar16 + 0x60);
  }
  else {
    plVar20 = *(long **)(lVar16 + 0x68);
  }
  if (plVar20 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x8b8);
    pSVar4 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar20,*(undefined8 *)(*plVar20 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar20[0xe] == '\0') {
    plVar20 = (long *)plVar20[0xc];
  }
  else {
    plVar20 = (long *)plVar20[0xd];
  }
  if (plVar20 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)plVar20[0xe] == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar20[0xc] !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        iVar13 = UnityEngine_UIElements_BaseSlider_float___get_direction
                           ((UnityEngine_UIElements_BaseSlider_float__o *)plVar20[0xc],MethodInfo_SliderDirection_get_direction);
        return (System_String_o *)CONCAT44(extraout_var_00,iVar13);
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar20[0xd] !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar13 = UnityEngine_UIElements_BaseSlider_int___get_direction
                         ((UnityEngine_UIElements_BaseSlider_int__o *)plVar20[0xd],MethodInfo_SliderDirection_get_direction);
      return (System_String_o *)CONCAT44(extraout_var,iVar13);
    }
    lVar16 = 0;
    il2cpp_runtime_helper_022b2c90();
    plStack_d0 = plVar20;
    if (g_data_057ad843 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
      g_data_057ad843 = '\x01';
    }
    handle.fields.value = TypeRef_SliderDirection.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    iStack_d4 = iVar13;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_d4);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_Enum__IsDefined(enumType,pIVar9,(MethodInfo *)0x0);
    uVar11 = SUB81(pIVar9,0);
    if ((char)bVar3 == '\0') {
      iStack_d8 = iVar13;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_d8);
      pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
      pSVar4 = System_String__Format(pSVar4,pIVar9,(MethodInfo *)0x0);
      uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
      System_ArgumentException___ctor_3c12490(__this_02,pSVar4,(MethodInfo *)0x0);
      uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
      il2cpp_runtime_helper_022b2b10(__this_02,uVar10);
      uVar11 = (undefined1)uVar10;
    }
    else if (*(char *)(lVar16 + 0x70) == '\0') {
      __this_02 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60) !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60),iVar13,MethodInfo_Void_set_direction);
        return extraout_RAX_06;
      }
    }
    else {
      __this_02 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68) !=
          (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68),iVar13,MethodInfo_Void_set_direction);
        return extraout_RAX_05;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&(__this_02->fields)._safeSerializationManager == '\0') {
      pSVar4 = *(System_String_o **)&(__this_02->fields)._HResult;
    }
    else {
      pSVar4 = (__this_02->fields)._source;
    }
    if (pSVar4 != (System_String_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = pSVar4->klass[3]._1.byval_arg.data;
      pSVar4 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)
                         (pSVar4,*(undefined8 *)&pSVar4->klass[3]._1.byval_arg.bits,extraout_RDX_01,
                          UNRECOVERED_JUMPTABLE_00);
      return pSVar4;
    }
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar4[4].fields._stringLength == '\0') {
      pSVar21 = pSVar4[4].klass;
    }
    else {
      pSVar21 = pSVar4[4].monitor;
    }
    if (pSVar21 == (System_String_c *)0x0) {
      uVar10 = il2cpp_runtime_helper_022b2c90();
      return (System_String_o *)CONCAT71((int7)((ulong)uVar10 >> 8),*(undefined1 *)&(pSVar21->_1).interopData)
      ;
    }
    pvVar1 = (pSVar21->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x8e8);
    pSVar4 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pSVar21,uVar11,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return pSVar4;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x8c8);
  pSVar4 = (System_String_o *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (plVar20,*(undefined8 *)(*plVar20 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
  return pSVar4;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41f02c0

void CustomLogic_CustomLogicSliderBuiltin__set_Label
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar3;
  bool_conflict bVar4;
  float *pfVar5;
  undefined8 *puVar6;
  int32_t *piVar7;
  int *piVar8;
  System_Type_o *enumType;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  undefined8 uVar11;
  System_ArgumentException_o *__this_02;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar12;
  int iVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  long lVar16;
  long lVar17;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar18;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar19;
  long *plVar20;
  float fVar21;
  undefined1 auVar22 [16];
  int32_t iStack_d0;
  int32_t iStack_cc;
  long *plStack_c8;
  float fStack_68;
  float fStack_64;
  System_String_o *pSStack_60;
  undefined8 uStack_58;
  long lStack_50;
  System_String_o *pSStack_48;
  float fStack_38;
  float fStack_34;
  long lStack_30;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_28;
  undefined8 uStack_20;
  
  pSVar10 = value;
  if (g_data_057ad83d == '\0') {
    uStack_20 = 0x41f02df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    uStack_20 = 0x41f02eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad83d = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,value,MethodInfo_Void_set_label);
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      UnityEngine_UIElements_BaseField_int___set_label
                ((UnityEngine_UIElements_BaseField_int__o *)__this_00,value,MethodInfo_Void_set_label);
      return;
    }
  }
  lVar16 = 0;
  uStack_20 = 0x41f0341;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar16 + 0x70) == '\0') {
    plVar20 = *(long **)(lVar16 + 0x60);
    if (plVar20 != (long *)0x0) {
      pCStack_28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f03a7;
      uVar3 = (**(code **)(*plVar20 + 0x7c8))(plVar20,*(undefined8 *)(*plVar20 + 2000));
      uStack_20 = CONCAT44(uStack_20._4_4_,uVar3);
      pCStack_28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f03c2;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_20);
      return;
    }
  }
  else {
    plVar20 = *(long **)(lVar16 + 0x68);
    if (plVar20 != (long *)0x0) {
      pCStack_28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f0370;
      uVar3 = (**(code **)(*plVar20 + 0x7c8))(plVar20,*(undefined8 *)(*plVar20 + 2000));
      uStack_20 = CONCAT44(uVar3,(undefined4)uStack_20);
      pCStack_28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f038c;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
      return;
    }
  }
  lVar16 = 0;
  pCStack_28 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f03c9;
  il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __this;
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (pSVar10 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar10->klass == g_data_057b9be8) {
      lStack_30 = 0x41f045c;
      auVar22 = il2cpp_runtime_helper_02305440(pSVar10);
      uVar11 = auVar22._8_8_;
      plVar20 = *(long **)(lVar16 + 0x60);
      if (plVar20 != (long *)0x0) {
        fVar21 = *auVar22._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (pSVar10->klass != g_data_057b9bb8) {
        return;
      }
      lStack_30 = 0x41f0473;
      auVar22 = il2cpp_runtime_helper_02305440(pSVar10);
      uVar11 = auVar22._8_8_;
      plVar20 = *(long **)(lVar16 + 0x60);
      if (plVar20 != (long *)0x0) {
        fVar21 = (float)*auVar22._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar21,plVar20,*(undefined8 *)(*plVar20 + 0x7e0),uVar11,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  else {
    if (pSVar10 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar10->klass == g_data_057b9bb8) {
      lStack_30 = 0x41f0435;
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pSVar10);
      plVar20 = *(long **)(lVar16 + 0x68);
      if (plVar20 != (long *)0x0) {
        iVar13 = *piVar8;
        goto label_041f0440;
      }
    }
    else {
      if (pSVar10->klass != g_data_057b9be8) {
        return;
      }
      lStack_30 = 0x41f03fd;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pSVar10);
      plVar20 = *(long **)(lVar16 + 0x68);
      if (plVar20 != (long *)0x0) {
        iVar13 = (int)*pfVar5;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar20,iVar13,*(undefined8 *)(*plVar20 + 0x7e0),UNRECOVERED_JUMPTABLE_00)
        ;
        return;
      }
    }
  }
  lVar17 = 0;
  lStack_30 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_30 = lVar16;
  if (g_data_057ad83e == '\0') {
    pSStack_48 = (System_String_o *)0x41f04bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    pSStack_48 = (System_String_o *)0x41f04c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar17 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar17 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      pSStack_48 = (System_String_o *)0x41f051c;
      fStack_38 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar17 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar5 = &fStack_38;
      puVar6 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar17 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    pSStack_48 = (System_String_o *)0x41f04ee;
    fStack_34 = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar17 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar5 = &fStack_34;
    puVar6 = &g_data_057b9bb8;
label_041f0532:
    pSStack_48 = (System_String_o *)0x41f053a;
    il2cpp_runtime_helper_02304f30(*puVar6,pfVar5);
    return;
  }
  lVar16 = 0;
  pSStack_48 = (System_String_o *)0x41f0545;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSVar15 = pSVar10;
  lStack_50 = lVar17;
  pSStack_48 = value;
  if (g_data_057ad83f == '\0') {
    pSStack_60 = (System_String_o *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pSStack_60 = (System_String_o *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (pSVar10 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar10->klass == g_data_057b9be8) {
      pSStack_60 = (System_String_o *)0x41f0613;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pSVar10);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar21 = *pfVar5;
        goto label_041f0637;
      }
    }
    else {
      if (pSVar10->klass != g_data_057b9bb8) {
        return;
      }
      pSStack_60 = (System_String_o *)0x41f062a;
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pSVar10);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar21 = (float)*piVar8;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar19,fVar21,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (pSVar10 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar10->klass == g_data_057b9bb8) {
      pSStack_60 = (System_String_o *)0x41f05ea;
      piVar7 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar10);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = *piVar7;
        goto label_041f05f5;
      }
    }
    else {
      if (pSVar10->klass != g_data_057b9be8) {
        return;
      }
      pSStack_60 = (System_String_o *)0x41f05ac;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pSVar10);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = (int32_t)*pfVar5;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar18,iVar14,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar16 = 0;
  pSStack_60 = (System_String_o *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pSStack_60 = pSVar10;
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_68 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60),MethodInfo_Single_get_highValue);
      pfVar5 = &fStack_68;
      puVar6 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_64 = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar5 = &fStack_64;
    puVar6 = &g_data_057b9bb8;
label_041f06f2:
    il2cpp_runtime_helper_02304f30(*puVar6,pfVar5);
    return;
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar15;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar14 = (int32_t)pSVar10;
  if (*(char *)(lVar16 + 0x70) == '\0') {
    if (pSVar15 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar15->klass == g_data_057b9be8) {
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pSVar15);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar21 = *pfVar5;
        goto label_041f07f7;
      }
    }
    else {
      if (pSVar15->klass != g_data_057b9bb8) {
        return;
      }
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pSVar15);
      pUVar19 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60);
      if (pUVar19 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar21 = (float)*piVar8;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar19,fVar21,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pSVar15 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar15->klass == g_data_057b9bb8) {
      piVar7 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar15);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = *piVar7;
        goto label_041f07b5;
      }
    }
    else {
      if (pSVar15->klass != g_data_057b9be8) {
        return;
      }
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pSVar15);
      pUVar18 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68);
      if (pUVar18 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = (int32_t)*pfVar5;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar18,iVar14,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar16 + 0x70) == '\0') {
    plVar20 = *(long **)(lVar16 + 0x60);
  }
  else {
    plVar20 = *(long **)(lVar16 + 0x68);
  }
  if (plVar20 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar20,*(undefined8 *)(*plVar20 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar20[0xe] == '\0') {
    plVar20 = (long *)plVar20[0xc];
  }
  else {
    plVar20 = (long *)plVar20[0xd];
  }
  if (plVar20 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar20 + 0x8c8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar20,*(undefined8 *)(*plVar20 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar20[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar20[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction
                ((UnityEngine_UIElements_BaseSlider_float__o *)plVar20[0xc],MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar20[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    UnityEngine_UIElements_BaseSlider_int___get_direction
              ((UnityEngine_UIElements_BaseSlider_int__o *)plVar20[0xd],MethodInfo_SliderDirection_get_direction);
    return;
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_c8 = plVar20;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_cc = iVar14;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_cc);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar9,(MethodInfo *)0x0);
  uVar12 = SUB81(pIVar9,0);
  if ((char)bVar4 == '\0') {
    iStack_d0 = iVar14;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_d0);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar10 = System_String__Format(pSVar10,pIVar9,(MethodInfo *)0x0);
    uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar11);
    System_ArgumentException___ctor_3c12490(__this_02,pSVar10,(MethodInfo *)0x0);
    uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_02,uVar11);
    uVar12 = (undefined1)uVar11;
  }
  else if (*(char *)(lVar16 + 0x70) == '\0') {
    __this_02 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar16 + 0x60),iVar14,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_02 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar16 + 0x68),iVar14,MethodInfo_Void_set_direction);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_02->fields)._safeSerializationManager == '\0') {
    pSVar10 = *(System_String_o **)&(__this_02->fields)._HResult;
  }
  else {
    pSVar10 = (__this_02->fields)._source;
  }
  if (pSVar10 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar10[4].fields._stringLength == '\0') {
      pSVar1 = pSVar10[4].klass;
    }
    else {
      pSVar1 = pSVar10[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar12,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = pSVar10->klass[3]._1.byval_arg.data;
  (*UNRECOVERED_JUMPTABLE_00)
            (pSVar10,*(undefined8 *)&pSVar10->klass[3]._1.byval_arg.bits,extraout_RDX_01,
             UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Value
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0350

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_Value
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  UnityEngine_UIElements_Slider_o *pUVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar3;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar4;
  bool_conflict bVar5;
  undefined8 in_RAX;
  Il2CppObject *pIVar6;
  float *pfVar7;
  Il2CppMethodPointer *ppIVar8;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  int32_t *piVar9;
  Il2CppObject *extraout_RAX_01;
  int *piVar10;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_String_o *pSVar11;
  System_ArgumentException_o *__this_00;
  undefined8 uVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar13;
  int iVar14;
  int32_t iVar15;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  long lVar18;
  long lVar19;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar20;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar21;
  long *plVar22;
  System_String_c *pSVar23;
  float fVar24;
  undefined1 auVar25 [16];
  int32_t iStack_b8;
  int32_t iStack_b4;
  long *plStack_b0;
  float fStack_50;
  float fStack_4c;
  MethodInfo *pMStack_48;
  Il2CppObject *pIStack_40;
  long lStack_38;
  float fStack_20;
  float fStack_1c;
  long lStack_18;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar2 = (__this->fields)._floatSlider;
    if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
      uVar4 = (*(pUVar2->klass->vtable)._105_get_value.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._105_get_value.method);
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar4);
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_8);
      return pIVar6;
    }
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      uVar4 = (*(pUVar1->klass->vtable)._105_get_value.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._105_get_value.method);
      uStack_8 = CONCAT44(uVar4,(undefined4)uStack_8);
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
      return pIVar6;
    }
  }
  lVar18 = 0;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (method == (MethodInfo *)0x0) {
      return pIVar6;
    }
    if (method->methodPointer == g_data_057b9be8) {
      lStack_18 = 0x41f045c;
      auVar25 = il2cpp_runtime_helper_02305440(method);
      uVar12 = auVar25._8_8_;
      plVar22 = *(long **)(lVar18 + 0x60);
      if (plVar22 != (long *)0x0) {
        fVar24 = *auVar25._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      lStack_18 = 0x41f0473;
      auVar25 = il2cpp_runtime_helper_02305440(method);
      uVar12 = auVar25._8_8_;
      plVar22 = *(long **)(lVar18 + 0x60);
      if (plVar22 != (long *)0x0) {
        fVar24 = (float)*auVar25._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x7d8);
        pIVar6 = (Il2CppObject *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (fVar24,plVar22,*(undefined8 *)(*plVar22 + 0x7e0),uVar12,UNRECOVERED_JUMPTABLE_00);
        return pIVar6;
      }
    }
  }
  else {
    if (method == (MethodInfo *)0x0) {
      return pIVar6;
    }
    if (method->methodPointer == g_data_057b9bb8) {
      lStack_18 = 0x41f0435;
      piVar10 = (int *)il2cpp_runtime_helper_02305440(method);
      plVar22 = *(long **)(lVar18 + 0x68);
      if (plVar22 != (long *)0x0) {
        iVar14 = *piVar10;
        goto label_041f0440;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      lStack_18 = 0x41f03fd;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(method);
      plVar22 = *(long **)(lVar18 + 0x68);
      if (plVar22 != (long *)0x0) {
        iVar14 = (int)*pfVar7;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x7d8);
        pIVar6 = (Il2CppObject *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (plVar22,iVar14,*(undefined8 *)(*plVar22 + 0x7e0),UNRECOVERED_JUMPTABLE_00);
        return pIVar6;
      }
    }
  }
  lVar19 = 0;
  lStack_18 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_18 = lVar18;
  if (g_data_057ad83e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar19 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_20 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar7 = &fStack_20;
      ppIVar8 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_1c = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar7 = &fStack_1c;
    ppIVar8 = &g_data_057b9bb8;
label_041f0532:
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*ppIVar8,pfVar7);
    return pIVar6;
  }
  lVar18 = 0;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pMVar16 = method;
  pIStack_40 = pIVar6;
  lStack_38 = lVar19;
  if (g_data_057ad83f == '\0') {
    pMStack_48 = (MethodInfo *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pMStack_48 = (MethodInfo *)0x41f057b;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (method == (MethodInfo *)0x0) {
      return pIVar6;
    }
    if (method->methodPointer == g_data_057b9be8) {
      pMStack_48 = (MethodInfo *)0x41f0613;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(method);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = *pfVar7;
        goto label_041f0637;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pMStack_48 = (MethodInfo *)0x41f062a;
      piVar10 = (int *)il2cpp_runtime_helper_02305440(method);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = (float)*piVar10;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar21,fVar24,MethodInfo_Void_set_lowValue);
        return extraout_RAX_00;
      }
    }
  }
  else {
    if (method == (MethodInfo *)0x0) {
      return pIVar6;
    }
    if (method->methodPointer == g_data_057b9bb8) {
      pMStack_48 = (MethodInfo *)0x41f05ea;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440(method);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar15 = *piVar9;
        goto label_041f05f5;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pMStack_48 = (MethodInfo *)0x41f05ac;
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(method);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar15 = (int32_t)*pfVar7;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar20,iVar15,MethodInfo_Void_set_lowValue);
        return extraout_RAX;
      }
    }
  }
  lVar18 = 0;
  pMStack_48 = (MethodInfo *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pMStack_48 = method;
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_50 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60),MethodInfo_Single_get_highValue);
      pfVar7 = &fStack_50;
      ppIVar8 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_4c = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar7 = &fStack_4c;
    ppIVar8 = &g_data_057b9bb8;
label_041f06f2:
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*ppIVar8,pfVar7);
    return pIVar6;
  }
  lVar18 = 0;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar16;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar15 = (int32_t)pMVar17;
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (pMVar16 == (MethodInfo *)0x0) {
      return pIVar6;
    }
    if (pMVar16->methodPointer == g_data_057b9be8) {
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pMVar16);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = *pfVar7;
        goto label_041f07f7;
      }
    }
    else {
      if (pMVar16->methodPointer != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      piVar10 = (int *)il2cpp_runtime_helper_02305440(pMVar16);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar24 = (float)*piVar10;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar21,fVar24,MethodInfo_Void_set_highValue);
        return extraout_RAX_02;
      }
    }
  }
  else {
    if (pMVar16 == (MethodInfo *)0x0) {
      return pIVar6;
    }
    if (pMVar16->methodPointer == g_data_057b9bb8) {
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440(pMVar16);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar15 = *piVar9;
        goto label_041f07b5;
      }
    }
    else {
      if (pMVar16->methodPointer != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pfVar7 = (float *)il2cpp_runtime_helper_02305440(pMVar16);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar15 = (int32_t)*pfVar7;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar20,iVar15,MethodInfo_Void_set_highValue);
        return extraout_RAX_01;
      }
    }
  }
  lVar18 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar18 + 0x70) == '\0') {
    plVar22 = *(long **)(lVar18 + 0x60);
  }
  else {
    plVar22 = *(long **)(lVar18 + 0x68);
  }
  if (plVar22 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x8b8);
    pIVar6 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar22,*(undefined8 *)(*plVar22 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar22[0xe] == '\0') {
    plVar22 = (long *)plVar22[0xc];
  }
  else {
    plVar22 = (long *)plVar22[0xd];
  }
  if (plVar22 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar22 + 0x8c8);
    pIVar6 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar22,*(undefined8 *)(*plVar22 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar22[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar22[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar15 = UnityEngine_UIElements_BaseSlider_float___get_direction
                         ((UnityEngine_UIElements_BaseSlider_float__o *)plVar22[0xc],MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar15);
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar22[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    iVar15 = UnityEngine_UIElements_BaseSlider_int___get_direction
                       ((UnityEngine_UIElements_BaseSlider_int__o *)plVar22[0xd],MethodInfo_SliderDirection_get_direction);
    return (Il2CppObject *)CONCAT44(extraout_var,iVar15);
  }
  lVar18 = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_b0 = plVar22;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_b4 = iVar15;
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_b4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_Enum__IsDefined(enumType,pIVar6,(MethodInfo *)0x0);
  uVar13 = SUB81(pIVar6,0);
  if ((char)bVar5 == '\0') {
    iStack_b8 = iVar15;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_b8);
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar11 = System_String__Format(pSVar11,pIVar6,(MethodInfo *)0x0);
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar11,(MethodInfo *)0x0);
    uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar12);
    uVar13 = (undefined1)uVar12;
  }
  else if (*(char *)(lVar18 + 0x70) == '\0') {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60),iVar15,MethodInfo_Void_set_direction);
      return extraout_RAX_04;
    }
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68),iVar15,MethodInfo_Void_set_direction);
      return extraout_RAX_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar11 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar11 = (__this_00->fields)._source;
  }
  if (pSVar11 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar11[4].fields._stringLength == '\0') {
      pSVar23 = pSVar11[4].klass;
    }
    else {
      pSVar23 = pSVar11[4].monitor;
    }
    if (pSVar23 == (System_String_c *)0x0) {
      uVar12 = il2cpp_runtime_helper_022b2c90();
      return (Il2CppObject *)CONCAT71((int7)((ulong)uVar12 >> 8),*(undefined1 *)&(pSVar23->_1).interopData);
    }
    pvVar3 = (pSVar23->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar3 + 0x8e8);
    pIVar6 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pSVar23,uVar13,*(undefined8 *)((long)pvVar3 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return pIVar6;
  }
  UNRECOVERED_JUMPTABLE_00 = pSVar11->klass[3]._1.byval_arg.data;
  pIVar6 = (Il2CppObject *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (pSVar11,*(undefined8 *)&pSVar11->klass[3]._1.byval_arg.bits,extraout_RDX_01,
                      UNRECOVERED_JUMPTABLE_00);
  return pIVar6;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x41f03d0

void CustomLogic_CustomLogicSliderBuiltin__set_Value
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_04;
  code *UNRECOVERED_JUMPTABLE_03;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  float *pfVar4;
  uint *puVar5;
  Il2CppClass **ppIVar6;
  int32_t *piVar7;
  int *piVar8;
  System_Type_o *enumType;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  undefined8 uVar11;
  System_ArgumentException_o *__this_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar12;
  uint uVar13;
  int32_t iVar14;
  Il2CppObject *pIVar15;
  UnityEngine_UIElements_SliderInt_o *pUVar16;
  UnityEngine_UIElements_Slider_o *pUVar17;
  long lVar18;
  long lVar19;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar20;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar21;
  long *plVar22;
  float fVar23;
  undefined1 auVar24 [16];
  int32_t iStack_b0;
  int32_t iStack_ac;
  long *plStack_a8;
  float fStack_48;
  float fStack_44;
  Il2CppObject *pIStack_40;
  undefined8 uStack_38;
  long lStack_30;
  float fStack_18;
  float fStack_14;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_10;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9be8) {
      pCStack_10 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f045c;
      auVar24 = il2cpp_runtime_helper_02305440(value);
      uVar11 = auVar24._8_8_;
      pUVar17 = (__this->fields)._floatSlider;
      if (pUVar17 != (UnityEngine_UIElements_Slider_o *)0x0) {
        fVar23 = *auVar24._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (value->klass != g_data_057b9bb8) {
        return;
      }
      pCStack_10 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f0473;
      auVar24 = il2cpp_runtime_helper_02305440(value);
      uVar11 = auVar24._8_8_;
      pUVar17 = (__this->fields)._floatSlider;
      if (pUVar17 != (UnityEngine_UIElements_Slider_o *)0x0) {
        fVar23 = (float)*auVar24._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_04 = (pUVar17->klass->vtable)._106_set_value.methodPtr;
        (*UNRECOVERED_JUMPTABLE_04)
                  (fVar23,pUVar17,(pUVar17->klass->vtable)._106_set_value.method,uVar11,
                   UNRECOVERED_JUMPTABLE_04);
        return;
      }
    }
  }
  else {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9bb8) {
      pCStack_10 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f0435;
      puVar5 = (uint *)il2cpp_runtime_helper_02305440(value);
      pUVar16 = (__this->fields)._intSlider;
      if (pUVar16 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        uVar13 = *puVar5;
        goto label_041f0440;
      }
    }
    else {
      if (value->klass != g_data_057b9be8) {
        return;
      }
      pCStack_10 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f03fd;
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      pUVar16 = (__this->fields)._intSlider;
      if (pUVar16 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        uVar13 = (uint)*pfVar4;
label_041f0440:
        UNRECOVERED_JUMPTABLE_04 = (pUVar16->klass->vtable)._106_set_value.methodPtr;
        (*UNRECOVERED_JUMPTABLE_04)
                  (pUVar16,(ulong)uVar13,(pUVar16->klass->vtable)._106_set_value.method,
                   UNRECOVERED_JUMPTABLE_04);
        return;
      }
    }
  }
  lVar18 = 0;
  pCStack_10 = (CustomLogic_CustomLogicSliderBuiltin_o *)0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  pCStack_10 = __this;
  if (g_data_057ad83e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_18 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar4 = &fStack_18;
      ppIVar6 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_14 = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar4 = &fStack_14;
    ppIVar6 = &g_data_057b9bb8;
label_041f0532:
    il2cpp_runtime_helper_02304f30(*ppIVar6,pfVar4);
    return;
  }
  lVar19 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pIVar9 = value;
  lStack_30 = lVar18;
  if (g_data_057ad83f == '\0') {
    pIStack_40 = (Il2CppObject *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pIStack_40 = (Il2CppObject *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar19 + 0x70) == '\0') {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9be8) {
      pIStack_40 = (Il2CppObject *)0x41f0613;
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar23 = *pfVar4;
        goto label_041f0637;
      }
    }
    else {
      if (value->klass != g_data_057b9bb8) {
        return;
      }
      pIStack_40 = (Il2CppObject *)0x41f062a;
      piVar8 = (int *)il2cpp_runtime_helper_02305440(value);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar19 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar23 = (float)*piVar8;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar21,fVar23,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9bb8) {
      pIStack_40 = (Il2CppObject *)0x41f05ea;
      piVar7 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = *piVar7;
        goto label_041f05f5;
      }
    }
    else {
      if (value->klass != g_data_057b9be8) {
        return;
      }
      pIStack_40 = (Il2CppObject *)0x41f05ac;
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar19 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = (int32_t)*pfVar4;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar20,iVar14,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar18 = 0;
  pIStack_40 = (Il2CppObject *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pIStack_40 = value;
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_48 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60),MethodInfo_Single_get_highValue);
      pfVar4 = &fStack_48;
      ppIVar6 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_44 = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar4 = &fStack_44;
    ppIVar6 = &g_data_057b9bb8;
label_041f06f2:
    il2cpp_runtime_helper_02304f30(*ppIVar6,pfVar4);
    return;
  }
  lVar18 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar9;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar14 = (int32_t)pIVar15;
  if (*(char *)(lVar18 + 0x70) == '\0') {
    if (pIVar9 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar9->klass == g_data_057b9be8) {
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(pIVar9);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar23 = *pfVar4;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar9->klass != g_data_057b9bb8) {
        return;
      }
      piVar8 = (int *)il2cpp_runtime_helper_02305440(pIVar9);
      pUVar21 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60);
      if (pUVar21 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar23 = (float)*piVar8;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar21,fVar23,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pIVar9 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar9->klass == g_data_057b9bb8) {
      piVar7 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar9);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = *piVar7;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar9->klass != g_data_057b9be8) {
        return;
      }
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(pIVar9);
      pUVar20 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68);
      if (pUVar20 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar14 = (int32_t)*pfVar4;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar20,iVar14,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar18 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar18 + 0x70) == '\0') {
    plVar22 = *(long **)(lVar18 + 0x60);
  }
  else {
    plVar22 = *(long **)(lVar18 + 0x68);
  }
  if (plVar22 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_03 = *(code **)(*plVar22 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_03)
              (plVar22,*(undefined8 *)(*plVar22 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar22[0xe] == '\0') {
    plVar22 = (long *)plVar22[0xc];
  }
  else {
    plVar22 = (long *)plVar22[0xd];
  }
  if (plVar22 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_03 = *(code **)(*plVar22 + 0x8c8);
    (*UNRECOVERED_JUMPTABLE_03)
              (plVar22,*(undefined8 *)(*plVar22 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_03);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar22[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar22[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction
                ((UnityEngine_UIElements_BaseSlider_float__o *)plVar22[0xc],MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar22[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    UnityEngine_UIElements_BaseSlider_int___get_direction
              ((UnityEngine_UIElements_BaseSlider_int__o *)plVar22[0xd],MethodInfo_SliderDirection_get_direction);
    return;
  }
  lVar18 = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_a8 = plVar22;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_ac = iVar14;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_ac);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar9,(MethodInfo *)0x0);
  uVar12 = SUB81(pIVar9,0);
  if ((char)bVar3 == '\0') {
    iStack_b0 = iVar14;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_b0);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar10 = System_String__Format(pSVar10,pIVar9,(MethodInfo *)0x0);
    uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar11);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar10,(MethodInfo *)0x0);
    uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar11);
    uVar12 = (undefined1)uVar11;
  }
  else if (*(char *)(lVar18 + 0x70) == '\0') {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar18 + 0x60),iVar14,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar18 + 0x68),iVar14,MethodInfo_Void_set_direction);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar10 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar10 = (__this_00->fields)._source;
  }
  if (pSVar10 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar10[4].fields._stringLength == '\0') {
      pSVar1 = pSVar10[4].klass;
    }
    else {
      pSVar1 = pSVar10[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_03 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_03)(pSVar1,uVar12,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_03);
    return;
  }
  UNRECOVERED_JUMPTABLE_03 = pSVar10->klass[3]._1.byval_arg.data;
  (*UNRECOVERED_JUMPTABLE_03)
            (pSVar10,*(undefined8 *)&pSVar10->klass[3]._1.byval_arg.bits,extraout_RDX_01,
             UNRECOVERED_JUMPTABLE_03);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_LowValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f04a0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_LowValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  undefined8 *puVar3;
  Il2CppObject *pIVar4;
  float *pfVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  int32_t *piVar6;
  Il2CppObject *extraout_RAX_01;
  int *piVar7;
  Il2CppObject *extraout_RAX_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_String_o *pSVar8;
  System_ArgumentException_o *__this_00;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar10;
  int32_t iVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  long lVar14;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar15;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar16;
  long *plVar17;
  System_String_c *pSVar18;
  float fVar19;
  int32_t iStack_a8;
  int32_t iStack_a4;
  long *plStack_a0;
  float fStack_40;
  float fStack_3c;
  MethodInfo *pMStack_38;
  Il2CppObject *pIStack_30;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_28;
  float local_10;
  float local_c;
  
  if (g_data_057ad83e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar16 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      local_10 = UnityEngine_UIElements_BaseSlider_float___get_lowValue(pUVar16,MethodInfo_Single_get_lowValue);
      pfVar5 = &local_10;
      puVar3 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else {
    pUVar15 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      local_c = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue(pUVar15,MethodInfo_Int32_get_lowValue);
      pfVar5 = &local_c;
      puVar3 = &g_data_057b9bb8;
label_041f0532:
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*puVar3,pfVar5);
      return pIVar4;
    }
  }
  lVar14 = 0;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pMVar12 = method;
  pIStack_30 = pIVar4;
  pCStack_28 = __this;
  if (g_data_057ad83f == '\0') {
    pMStack_38 = (MethodInfo *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pMStack_38 = (MethodInfo *)0x41f057b;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar14 + 0x70) == '\0') {
    if (method == (MethodInfo *)0x0) {
      return pIVar4;
    }
    if (method->methodPointer == g_data_057b9be8) {
      pMStack_38 = (MethodInfo *)0x41f0613;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(method);
      pUVar16 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60);
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar19 = *pfVar5;
        goto label_041f0637;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pMStack_38 = (MethodInfo *)0x41f062a;
      piVar7 = (int *)il2cpp_runtime_helper_02305440(method);
      pUVar16 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60);
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar19 = (float)*piVar7;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar16,fVar19,MethodInfo_Void_set_lowValue);
        return extraout_RAX_00;
      }
    }
  }
  else {
    if (method == (MethodInfo *)0x0) {
      return pIVar4;
    }
    if (method->methodPointer == g_data_057b9bb8) {
      pMStack_38 = (MethodInfo *)0x41f05ea;
      piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(method);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = *piVar6;
        goto label_041f05f5;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pMStack_38 = (MethodInfo *)0x41f05ac;
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(method);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = (int32_t)*pfVar5;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar15,iVar11,MethodInfo_Void_set_lowValue);
        return extraout_RAX;
      }
    }
  }
  lVar14 = 0;
  pMStack_38 = (MethodInfo *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pMStack_38 = method;
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar14 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_40 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60),MethodInfo_Single_get_highValue);
      pfVar5 = &fStack_40;
      puVar3 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_3c = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar5 = &fStack_3c;
    puVar3 = &g_data_057b9bb8;
label_041f06f2:
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*puVar3,pfVar5);
    return pIVar4;
  }
  lVar14 = 0;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar11 = (int32_t)pMVar13;
  if (*(char *)(lVar14 + 0x70) == '\0') {
    if (pMVar12 == (MethodInfo *)0x0) {
      return pIVar4;
    }
    if (pMVar12->methodPointer == g_data_057b9be8) {
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar12);
      pUVar16 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60);
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar19 = *pfVar5;
        goto label_041f07f7;
      }
    }
    else {
      if (pMVar12->methodPointer != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      piVar7 = (int *)il2cpp_runtime_helper_02305440(pMVar12);
      pUVar16 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60);
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar19 = (float)*piVar7;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar16,fVar19,MethodInfo_Void_set_highValue);
        return extraout_RAX_02;
      }
    }
  }
  else {
    if (pMVar12 == (MethodInfo *)0x0) {
      return pIVar4;
    }
    if (pMVar12->methodPointer == g_data_057b9bb8) {
      piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(pMVar12);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = *piVar6;
        goto label_041f07b5;
      }
    }
    else {
      if (pMVar12->methodPointer != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(pMVar12);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = (int32_t)*pfVar5;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar15,iVar11,MethodInfo_Void_set_highValue);
        return extraout_RAX_01;
      }
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar14 + 0x70) == '\0') {
    plVar17 = *(long **)(lVar14 + 0x60);
  }
  else {
    plVar17 = *(long **)(lVar14 + 0x68);
  }
  if (plVar17 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar17 + 0x8b8);
    pIVar4 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar17,*(undefined8 *)(*plVar17 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar17[0xe] == '\0') {
    plVar17 = (long *)plVar17[0xc];
  }
  else {
    plVar17 = (long *)plVar17[0xd];
  }
  if (plVar17 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar17 + 0x8c8);
    pIVar4 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar17,*(undefined8 *)(*plVar17 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar17[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar17[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar11 = UnityEngine_UIElements_BaseSlider_float___get_direction
                         ((UnityEngine_UIElements_BaseSlider_float__o *)plVar17[0xc],MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar11);
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar17[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    iVar11 = UnityEngine_UIElements_BaseSlider_int___get_direction
                       ((UnityEngine_UIElements_BaseSlider_int__o *)plVar17[0xd],MethodInfo_SliderDirection_get_direction);
    return (Il2CppObject *)CONCAT44(extraout_var,iVar11);
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_a0 = plVar17;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_a4 = iVar11;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_a4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  uVar10 = SUB81(pIVar4,0);
  if ((char)bVar2 == '\0') {
    iStack_a8 = iVar11;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_a8);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar4,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar9);
    uVar10 = (undefined1)uVar9;
  }
  else if (*(char *)(lVar14 + 0x70) == '\0') {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60),iVar11,MethodInfo_Void_set_direction);
      return extraout_RAX_04;
    }
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68),iVar11,MethodInfo_Void_set_direction);
      return extraout_RAX_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar8 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar8 = (__this_00->fields)._source;
  }
  if (pSVar8 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar8[4].fields._stringLength == '\0') {
      pSVar18 = pSVar8[4].klass;
    }
    else {
      pSVar18 = pSVar8[4].monitor;
    }
    if (pSVar18 == (System_String_c *)0x0) {
      uVar9 = il2cpp_runtime_helper_022b2c90();
      return (Il2CppObject *)CONCAT71((int7)((ulong)uVar9 >> 8),*(undefined1 *)&(pSVar18->_1).interopData);
    }
    pvVar1 = (pSVar18->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x8e8);
    pIVar4 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pSVar18,uVar10,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return pIVar4;
  }
  UNRECOVERED_JUMPTABLE_00 = pSVar8->klass[3]._1.byval_arg.data;
  pIVar4 = (Il2CppObject *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (pSVar8,*(undefined8 *)&pSVar8->klass[3]._1.byval_arg.bits,extraout_RDX_01,
                      UNRECOVERED_JUMPTABLE_00);
  return pIVar4;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x41f0550

void CustomLogic_CustomLogicSliderBuiltin__set_LowValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  float *pfVar4;
  undefined8 *puVar5;
  int32_t *piVar6;
  int *piVar7;
  System_Type_o *enumType;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_ArgumentException_o *__this_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar11;
  int32_t iVar12;
  Il2CppObject *pIVar13;
  long lVar14;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar15;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar16;
  long *plVar17;
  float fVar18;
  int32_t iStack_90;
  int32_t iStack_8c;
  long *plStack_88;
  float fStack_28;
  float fStack_24;
  Il2CppObject *pIStack_20;
  
  pIVar8 = value;
  if (g_data_057ad83f == '\0') {
    pIStack_20 = (Il2CppObject *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pIStack_20 = (Il2CppObject *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9be8) {
      pIStack_20 = (Il2CppObject *)0x41f0613;
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      pUVar16 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar18 = *pfVar4;
        goto label_041f0637;
      }
    }
    else {
      if (value->klass != g_data_057b9bb8) {
        return;
      }
      pIStack_20 = (Il2CppObject *)0x41f062a;
      piVar7 = (int *)il2cpp_runtime_helper_02305440(value);
      pUVar16 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar18 = (float)*piVar7;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar16,fVar18,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9bb8) {
      pIStack_20 = (Il2CppObject *)0x41f05ea;
      piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      pUVar15 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar12 = *piVar6;
        goto label_041f05f5;
      }
    }
    else {
      if (value->klass != g_data_057b9be8) {
        return;
      }
      pIStack_20 = (Il2CppObject *)0x41f05ac;
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      pUVar15 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar12 = (int32_t)*pfVar4;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar15,iVar12,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar14 = 0;
  pIStack_20 = (Il2CppObject *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pIStack_20 = value;
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar14 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      fStack_28 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60),MethodInfo_Single_get_highValue);
      pfVar4 = &fStack_28;
      puVar5 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    fStack_24 = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar4 = &fStack_24;
    puVar5 = &g_data_057b9bb8;
label_041f06f2:
    il2cpp_runtime_helper_02304f30(*puVar5,pfVar4);
    return;
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar8;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar12 = (int32_t)pIVar13;
  if (*(char *)(lVar14 + 0x70) == '\0') {
    if (pIVar8 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar8->klass == g_data_057b9be8) {
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(pIVar8);
      pUVar16 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60);
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar18 = *pfVar4;
        goto label_041f07f7;
      }
    }
    else {
      if (pIVar8->klass != g_data_057b9bb8) {
        return;
      }
      piVar7 = (int *)il2cpp_runtime_helper_02305440(pIVar8);
      pUVar16 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60);
      if (pUVar16 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar18 = (float)*piVar7;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar16,fVar18,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pIVar8 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar8->klass == g_data_057b9bb8) {
      piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar8);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar12 = *piVar6;
        goto label_041f07b5;
      }
    }
    else {
      if (pIVar8->klass != g_data_057b9be8) {
        return;
      }
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(pIVar8);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar12 = (int32_t)*pfVar4;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar15,iVar12,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar14 + 0x70) == '\0') {
    plVar17 = *(long **)(lVar14 + 0x60);
  }
  else {
    plVar17 = *(long **)(lVar14 + 0x68);
  }
  if (plVar17 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar17 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar17,*(undefined8 *)(*plVar17 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar17[0xe] == '\0') {
    plVar17 = (long *)plVar17[0xc];
  }
  else {
    plVar17 = (long *)plVar17[0xd];
  }
  if (plVar17 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)plVar17[0xe] == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar17[0xc] !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___get_direction
                  ((UnityEngine_UIElements_BaseSlider_float__o *)plVar17[0xc],MethodInfo_SliderDirection_get_direction);
        return;
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar17[0xd] !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction
                ((UnityEngine_UIElements_BaseSlider_int__o *)plVar17[0xd],MethodInfo_SliderDirection_get_direction);
      return;
    }
    lVar14 = 0;
    il2cpp_runtime_helper_022b2c90();
    plStack_88 = plVar17;
    if (g_data_057ad843 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
      g_data_057ad843 = '\x01';
    }
    handle.fields.value = TypeRef_SliderDirection.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    iStack_8c = iVar12;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_8c);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_Enum__IsDefined(enumType,pIVar8,(MethodInfo *)0x0);
    uVar11 = SUB81(pIVar8,0);
    if ((char)bVar3 == '\0') {
      iStack_90 = iVar12;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_90);
      pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
      pSVar9 = System_String__Format(pSVar9,pIVar8,(MethodInfo *)0x0);
      uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar9,(MethodInfo *)0x0);
      uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar10);
      uVar11 = (undefined1)uVar10;
    }
    else if (*(char *)(lVar14 + 0x70) == '\0') {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60) !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar14 + 0x60),iVar12,MethodInfo_Void_set_direction);
        return;
      }
    }
    else {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68) !=
          (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar14 + 0x68),iVar12,MethodInfo_Void_set_direction);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
      pSVar9 = *(System_String_o **)&(__this_00->fields)._HResult;
    }
    else {
      pSVar9 = (__this_00->fields)._source;
    }
    if (pSVar9 != (System_String_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = pSVar9->klass[3]._1.byval_arg.data;
      (*UNRECOVERED_JUMPTABLE_00)
                (pSVar9,*(undefined8 *)&pSVar9->klass[3]._1.byval_arg.bits,extraout_RDX_01,
                 UNRECOVERED_JUMPTABLE_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar9[4].fields._stringLength == '\0') {
      pSVar1 = pSVar9[4].klass;
    }
    else {
      pSVar1 = pSVar9[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar11,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar17 + 0x8c8);
  (*UNRECOVERED_JUMPTABLE_00)
            (plVar17,*(undefined8 *)(*plVar17 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_HighValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0660

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_HighValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  undefined8 *puVar3;
  Il2CppObject *pIVar4;
  float *pfVar5;
  int32_t *piVar6;
  Il2CppObject *extraout_RAX;
  int *piVar7;
  Il2CppObject *extraout_RAX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  System_String_o *pSVar8;
  System_ArgumentException_o *__this_00;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar10;
  int32_t iVar11;
  MethodInfo *pMVar12;
  long lVar13;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar14;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar15;
  long *plVar16;
  System_String_c *pSVar17;
  float value;
  int32_t iStack_78;
  int32_t iStack_74;
  long *plStack_70;
  float local_10;
  float local_c;
  
  if (g_data_057ad840 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar15 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (pUVar15 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      local_10 = UnityEngine_UIElements_BaseSlider_float___get_highValue(pUVar15,MethodInfo_Single_get_highValue);
      pfVar5 = &local_10;
      puVar3 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else {
    pUVar14 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (pUVar14 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      local_c = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue(pUVar14,MethodInfo_Int32_get_highValue);
      pfVar5 = &local_c;
      puVar3 = &g_data_057b9bb8;
label_041f06f2:
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*puVar3,pfVar5);
      return pIVar4;
    }
  }
  lVar13 = 0;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pMVar12 = method;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar11 = (int32_t)pMVar12;
  if (*(char *)(lVar13 + 0x70) == '\0') {
    if (method == (MethodInfo *)0x0) {
      return pIVar4;
    }
    if (method->methodPointer == g_data_057b9be8) {
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(method);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar13 + 0x60);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        value = *pfVar5;
        goto label_041f07f7;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9bb8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      piVar7 = (int *)il2cpp_runtime_helper_02305440(method);
      pUVar15 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar13 + 0x60);
      if (pUVar15 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        value = (float)*piVar7;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar15,value,MethodInfo_Void_set_highValue);
        return extraout_RAX_00;
      }
    }
  }
  else {
    if (method == (MethodInfo *)0x0) {
      return pIVar4;
    }
    if (method->methodPointer == g_data_057b9bb8) {
      piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(method);
      pUVar14 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar13 + 0x68);
      if (pUVar14 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = *piVar6;
        goto label_041f07b5;
      }
    }
    else {
      if (method->methodPointer != g_data_057b9be8) {
        return (Il2CppObject *)&g_data_057b9b70;
      }
      pfVar5 = (float *)il2cpp_runtime_helper_02305440(method);
      pUVar14 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar13 + 0x68);
      if (pUVar14 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = (int32_t)*pfVar5;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar14,iVar11,MethodInfo_Void_set_highValue);
        return extraout_RAX;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar13 + 0x70) == '\0') {
    plVar16 = *(long **)(lVar13 + 0x60);
  }
  else {
    plVar16 = *(long **)(lVar13 + 0x68);
  }
  if (plVar16 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar16 + 0x8b8);
    pIVar4 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar16,*(undefined8 *)(*plVar16 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar16[0xe] == '\0') {
    plVar16 = (long *)plVar16[0xc];
  }
  else {
    plVar16 = (long *)plVar16[0xd];
  }
  if (plVar16 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar16 + 0x8c8);
    pIVar4 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar16,*(undefined8 *)(*plVar16 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar16[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar16[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar11 = UnityEngine_UIElements_BaseSlider_float___get_direction
                         ((UnityEngine_UIElements_BaseSlider_float__o *)plVar16[0xc],MethodInfo_SliderDirection_get_direction);
      return (Il2CppObject *)CONCAT44(extraout_var_00,iVar11);
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar16[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    iVar11 = UnityEngine_UIElements_BaseSlider_int___get_direction
                       ((UnityEngine_UIElements_BaseSlider_int__o *)plVar16[0xd],MethodInfo_SliderDirection_get_direction);
    return (Il2CppObject *)CONCAT44(extraout_var,iVar11);
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_70 = plVar16;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_74 = iVar11;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_74);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  uVar10 = SUB81(pIVar4,0);
  if ((char)bVar2 == '\0') {
    iStack_78 = iVar11;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_78);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar8 = System_String__Format(pSVar8,pIVar4,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar8,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar9);
    uVar10 = (undefined1)uVar9;
  }
  else if (*(char *)(lVar13 + 0x70) == '\0') {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar13 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar13 + 0x60),iVar11,MethodInfo_Void_set_direction);
      return extraout_RAX_02;
    }
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar13 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar13 + 0x68),iVar11,MethodInfo_Void_set_direction);
      return extraout_RAX_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar8 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar8 = (__this_00->fields)._source;
  }
  if (pSVar8 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar8->klass[3]._1.byval_arg.data;
    pIVar4 = (Il2CppObject *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pSVar8,*(undefined8 *)&pSVar8->klass[3]._1.byval_arg.bits,extraout_RDX_01,
                        UNRECOVERED_JUMPTABLE_00);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar8[4].fields._stringLength == '\0') {
    pSVar17 = pSVar8[4].klass;
  }
  else {
    pSVar17 = pSVar8[4].monitor;
  }
  if (pSVar17 == (System_String_c *)0x0) {
    uVar9 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar9 >> 8),*(undefined1 *)&(pSVar17->_1).interopData);
  }
  pvVar1 = (pSVar17->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x8e8);
  pIVar4 = (Il2CppObject *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (pSVar17,uVar10,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return pIVar4;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x41f0710

void CustomLogic_CustomLogicSliderBuiltin__set_HighValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  float *pfVar4;
  int32_t *piVar5;
  int *piVar6;
  System_Type_o *enumType;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined1 uVar10;
  int32_t iVar11;
  UnityEngine_UIElements_BaseSlider_int__o *__this_01;
  UnityEngine_UIElements_BaseSlider_float__o *__this_02;
  long lVar12;
  long *plVar13;
  float value_00;
  int32_t iStack_60;
  int32_t iStack_5c;
  long *plStack_58;
  
  pIVar7 = value;
  if (g_data_057ad841 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar11 = (int32_t)pIVar7;
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9be8) {
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      __this_02 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
      if (__this_02 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        value_00 = *pfVar4;
        goto label_041f07f7;
      }
    }
    else {
      if (value->klass != g_data_057b9bb8) {
        return;
      }
      piVar6 = (int *)il2cpp_runtime_helper_02305440(value);
      __this_02 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
      if (__this_02 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        value_00 = (float)*piVar6;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(__this_02,value_00,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (value == (Il2CppObject *)0x0) {
      return;
    }
    if (value->klass == g_data_057b9bb8) {
      piVar5 = (int32_t *)il2cpp_runtime_helper_02305440(value);
      __this_01 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_01 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = *piVar5;
        goto label_041f07b5;
      }
    }
    else {
      if (value->klass != g_data_057b9be8) {
        return;
      }
      pfVar4 = (float *)il2cpp_runtime_helper_02305440(value);
      __this_01 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_01 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar11 = (int32_t)*pfVar4;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(__this_01,iVar11,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar12 + 0x70) == '\0') {
    plVar13 = *(long **)(lVar12 + 0x60);
  }
  else {
    plVar13 = *(long **)(lVar12 + 0x68);
  }
  if (plVar13 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar13 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar13,*(undefined8 *)(*plVar13 + 0x8c0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)plVar13[0xe] == '\0') {
    plVar13 = (long *)plVar13[0xc];
  }
  else {
    plVar13 = (long *)plVar13[0xd];
  }
  if (plVar13 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)plVar13[0xe] == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar13[0xc] !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___get_direction
                  ((UnityEngine_UIElements_BaseSlider_float__o *)plVar13[0xc],MethodInfo_SliderDirection_get_direction);
        return;
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar13[0xd] !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction
                ((UnityEngine_UIElements_BaseSlider_int__o *)plVar13[0xd],MethodInfo_SliderDirection_get_direction);
      return;
    }
    lVar12 = 0;
    il2cpp_runtime_helper_022b2c90();
    plStack_58 = plVar13;
    if (g_data_057ad843 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
      g_data_057ad843 = '\x01';
    }
    handle.fields.value = TypeRef_SliderDirection.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    iStack_5c = iVar11;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_5c);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_Enum__IsDefined(enumType,pIVar7,(MethodInfo *)0x0);
    uVar10 = SUB81(pIVar7,0);
    if ((char)bVar3 == '\0') {
      iStack_60 = iVar11;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_60);
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
      pSVar8 = System_String__Format(pSVar8,pIVar7,(MethodInfo *)0x0);
      uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar8,(MethodInfo *)0x0);
      uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar9);
      uVar10 = (undefined1)uVar9;
    }
    else if (*(char *)(lVar12 + 0x70) == '\0') {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar12 + 0x60) !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar12 + 0x60),iVar11,MethodInfo_Void_set_direction);
        return;
      }
    }
    else {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar12 + 0x68) !=
          (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar12 + 0x68),iVar11,MethodInfo_Void_set_direction);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
      pSVar8 = *(System_String_o **)&(__this_00->fields)._HResult;
    }
    else {
      pSVar8 = (__this_00->fields)._source;
    }
    if (pSVar8 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((char)pSVar8[4].fields._stringLength == '\0') {
        pSVar1 = pSVar8[4].klass;
      }
      else {
        pSVar1 = pSVar8[4].monitor;
      }
      if (pSVar1 == (System_String_c *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pvVar2 = (pSVar1->_1).image;
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
      (*UNRECOVERED_JUMPTABLE_00)
                (pSVar1,uVar10,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = pSVar8->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar8,*(undefined8 *)&pSVar8->klass[3]._1.byval_arg.bits,extraout_RDX_01,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar13 + 0x8c8);
  (*UNRECOVERED_JUMPTABLE_00)
            (plVar13,*(undefined8 *)(*plVar13 + 0x8d0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_PageSize
// il2cpp: float CustomLogic_CustomLogicSliderBuiltin__get_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0820

float CustomLogic_CustomLogicSliderBuiltin__get_PageSize
                (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 uVar7;
  int32_t value;
  UnityEngine_UIElements_Slider_o *pUVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int32_t iStack_48;
  int32_t iStack_44;
  long *plStack_40;
  
  value = (int32_t)method;
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar8 = (__this->fields)._floatSlider;
  }
  else {
    pUVar8 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar8 != (UnityEngine_UIElements_Slider_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar8->klass)->vtable)._120_get_pageSize.methodPtr;
    fVar11 = (float)(*UNRECOVERED_JUMPTABLE_00)
                              (pUVar8,(((UnityEngine_UIElements_SliderInt_c *)pUVar8->klass)->vtable).
                                      _120_get_pageSize.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return fVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(pUVar8->fields).lastLayout.fields.m_Height == '\0') {
    plVar9 = *(long **)&(pUVar8->fields).m_RenderHints;
  }
  else {
    plVar9 = *(long **)&(pUVar8->fields).lastLayout.fields.m_YMin;
  }
  if (plVar9 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad842 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)plVar9[0xe] == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar9[0xc] !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___get_direction
                  ((UnityEngine_UIElements_BaseSlider_float__o *)plVar9[0xc],MethodInfo_SliderDirection_get_direction);
        return extraout_XMM0_Da_00;
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar9[0xd] !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction
                ((UnityEngine_UIElements_BaseSlider_int__o *)plVar9[0xd],MethodInfo_SliderDirection_get_direction);
      return extraout_XMM0_Da;
    }
    lVar10 = 0;
    il2cpp_runtime_helper_022b2c90();
    plStack_40 = plVar9;
    if (g_data_057ad843 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
      g_data_057ad843 = '\x01';
    }
    handle.fields.value = TypeRef_SliderDirection.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    iStack_44 = value;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_44);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
    uVar7 = SUB81(pIVar4,0);
    if ((char)bVar3 == '\0') {
      iStack_48 = value;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_48);
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
      pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
      uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
      uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
      uVar7 = (undefined1)uVar6;
    }
    else if (*(char *)(lVar10 + 0x70) == '\0') {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar10 + 0x60) !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar10 + 0x60),value,MethodInfo_Void_set_direction);
        return extraout_XMM0_Da_02;
      }
    }
    else {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar10 + 0x68) !=
          (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar10 + 0x68),value,MethodInfo_Void_set_direction);
        return extraout_XMM0_Da_01;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
      pSVar5 = *(System_String_o **)&(__this_00->fields)._HResult;
    }
    else {
      pSVar5 = (__this_00->fields)._source;
    }
    if (pSVar5 != (System_String_o *)0x0) {
      vtableDispatch = pSVar5->klass[3]._1.byval_arg.data;
      fVar11 = (float)(*vtableDispatch)
                                (pSVar5,*(undefined8 *)&pSVar5->klass[3]._1.byval_arg.bits,extraout_RDX_00,
                                 vtableDispatch);
      return fVar11;
    }
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar5[4].fields._stringLength == '\0') {
      pSVar1 = pSVar5[4].klass;
    }
    else {
      pSVar1 = pSVar5[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      fVar11 = (float)il2cpp_runtime_helper_022b2c90();
      return fVar11;
    }
    pvVar2 = (pSVar1->_1).image;
    vtableDispatch = *(code **)((long)pvVar2 + 0x8e8);
    fVar11 = (float)(*vtableDispatch)
                              (pSVar1,uVar7,*(undefined8 *)((long)pvVar2 + 0x8f0),vtableDispatch);
    return fVar11;
  }
  vtableDispatch = *(code **)(*plVar9 + 0x8c8);
  fVar11 = (float)(*vtableDispatch)
                            (plVar9,*(undefined8 *)(*plVar9 + 0x8d0),extraout_RDX,vtableDispatch);
  return fVar11;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_PageSize
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41f0860

void CustomLogic_CustomLogicSliderBuiltin__set_PageSize
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_02;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined1 uVar7;
  int32_t value_00;
  UnityEngine_UIElements_Slider_o *pUVar8;
  long lVar9;
  int32_t iStack_40;
  int32_t iStack_3c;
  UnityEngine_UIElements_Slider_o *pUStack_38;
  
  value_00 = (int32_t)method;
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar8 = (__this->fields)._floatSlider;
  }
  else {
    pUVar8 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar8 != (UnityEngine_UIElements_Slider_o *)0x0) {
    vtableDispatch =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar8->klass)->vtable)._121_set_pageSize.methodPtr;
    (*vtableDispatch)
              (pUVar8,(((UnityEngine_UIElements_SliderInt_c *)pUVar8->klass)->vtable)._121_set_pageSize.method
               ,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if (*(char *)&(pUVar8->fields).lastLayout.fields.m_Height == '\0') {
    __this_01 = *(UnityEngine_UIElements_BaseSlider_float__o **)&(pUVar8->fields).m_RenderHints;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction(__this_01,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else {
    __this_00 = *(UnityEngine_UIElements_BaseSlider_int__o **)&(pUVar8->fields).lastLayout.fields.m_YMin;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction(__this_00,MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  pUStack_38 = pUVar8;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_3c = value_00;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_3c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  uVar7 = SUB81(pIVar4,0);
  if ((char)bVar3 == '\0') {
    iStack_40 = value_00;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_40);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_02,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_02,uVar6);
    uVar7 = (undefined1)uVar6;
  }
  else if (*(char *)(lVar9 + 0x70) == '\0') {
    __this_02 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar9 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar9 + 0x60),value_00,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_02 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar9 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar9 + 0x68),value_00,MethodInfo_Void_set_direction);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_02->fields)._safeSerializationManager == '\0') {
    pSVar5 = *(System_String_o **)&(__this_02->fields)._HResult;
  }
  else {
    pSVar5 = (__this_02->fields)._source;
  }
  if (pSVar5 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar5->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar5,*(undefined8 *)&pSVar5->klass[3]._1.byval_arg.bits,extraout_RDX,UNRECOVERED_JUMPTABLE_00
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar5[4].fields._stringLength == '\0') {
    pSVar1 = pSVar5[4].klass;
  }
  else {
    pSVar1 = pSVar5[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar7,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Direction
// il2cpp: int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f08a0

int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction
                  (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar1;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  System_ArgumentException_o *__this_02;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined1 uVar7;
  long lVar8;
  System_String_c *pSVar9;
  int32_t local_38;
  int32_t local_34;
  CustomLogic_CustomLogicSliderBuiltin_o *pCStack_30;
  
  iVar2 = (int32_t)method;
  if (g_data_057ad842 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar2 = UnityEngine_UIElements_BaseSlider_float___get_direction(__this_01,MethodInfo_SliderDirection_get_direction);
      return iVar2;
    }
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar2 = UnityEngine_UIElements_BaseSlider_int___get_direction(__this_00,MethodInfo_SliderDirection_get_direction);
      return iVar2;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __this;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_34 = iVar2;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  uVar7 = SUB81(pIVar4,0);
  if ((char)bVar3 == '\0') {
    local_38 = iVar2;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_02,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_02,uVar6);
    uVar7 = (undefined1)uVar6;
  }
  else if (*(char *)(lVar8 + 0x70) == '\0') {
    __this_02 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60),iVar2,MethodInfo_Void_set_direction);
      return extraout_EAX_00;
    }
  }
  else {
    __this_02 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68),iVar2,MethodInfo_Void_set_direction);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_02->fields)._safeSerializationManager == '\0') {
    pSVar5 = *(System_String_o **)&(__this_02->fields)._HResult;
  }
  else {
    pSVar5 = (__this_02->fields)._source;
  }
  if (pSVar5 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar5[4].fields._stringLength == '\0') {
      pSVar9 = pSVar5[4].klass;
    }
    else {
      pSVar9 = pSVar5[4].monitor;
    }
    if (pSVar9 == (System_String_c *)0x0) {
      uVar6 = il2cpp_runtime_helper_022b2c90();
      return (int32_t)CONCAT71((int7)((ulong)uVar6 >> 8),*(undefined1 *)&(pSVar9->_1).interopData);
    }
    pvVar1 = (pSVar9->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x8e8);
    iVar2 = (*UNRECOVERED_JUMPTABLE_00)
                      (pSVar9,uVar7,*(undefined8 *)((long)pvVar1 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return iVar2;
  }
  UNRECOVERED_JUMPTABLE_00 = pSVar5->klass[3]._1.byval_arg.data;
  iVar2 = (*UNRECOVERED_JUMPTABLE_00)
                    (pSVar5,*(undefined8 *)&pSVar5->klass[3]._1.byval_arg.bits,extraout_RDX,
                     UNRECOVERED_JUMPTABLE_00);
  return iVar2;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Direction
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41f0910

void CustomLogic_CustomLogicSliderBuiltin__set_Direction
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_02;
  undefined8 extraout_RDX;
  undefined1 uVar7;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  uVar7 = SUB81(pIVar4,0);
  if ((char)bVar3 == '\0') {
    iStack_30 = value;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_30);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_02,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_02,uVar6);
    uVar7 = (undefined1)uVar6;
  }
  else if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    __this_02 = (System_ArgumentException_o *)0x0;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction(__this_01,value,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    __this_02 = (System_ArgumentException_o *)0x0;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction(__this_00,value,MethodInfo_Void_set_direction);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_02->fields)._safeSerializationManager == '\0') {
    pSVar5 = *(System_String_o **)&(__this_02->fields)._HResult;
  }
  else {
    pSVar5 = (__this_02->fields)._source;
  }
  if (pSVar5 != (System_String_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pSVar5->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar5,*(undefined8 *)&pSVar5->klass[3]._1.byval_arg.bits,extraout_RDX,UNRECOVERED_JUMPTABLE_00
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pSVar5[4].fields._stringLength == '\0') {
    pSVar1 = pSVar5[4].klass;
  }
  else {
    pSVar1 = pSVar5[4].monitor;
  }
  if (pSVar1 == (System_String_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pvVar2 = (pSVar1->_1).image;
  UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
  (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar7,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ShowInputField
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0a90

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  bool_conflict bVar1;
  undefined8 uVar2;
  undefined8 in_RDX;
  UnityEngine_UIElements_Slider_o *pUVar3;
  long *plVar4;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar3 = (__this->fields)._floatSlider;
  }
  else {
    pUVar3 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar3 != (UnityEngine_UIElements_Slider_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable)._122_get_showInputField.methodPtr;
    bVar1 = (*UNRECOVERED_JUMPTABLE_00)
                      (pUVar3,(((UnityEngine_UIElements_SliderInt_c *)pUVar3->klass)->vtable).
                              _122_get_showInputField.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(pUVar3->fields).lastLayout.fields.m_Height == '\0') {
    plVar4 = *(long **)&(pUVar3->fields).m_RenderHints;
  }
  else {
    plVar4 = *(long **)&(pUVar3->fields).lastLayout.fields.m_YMin;
  }
  if (plVar4 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar4 + 0x8e8);
    bVar1 = (*vtableDispatch)
                      (plVar4,(ulong)method & 0xff,*(undefined8 *)(*plVar4 + 0x8f0),vtableDispatch);
    return bVar1;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),(char)plVar4[0xe]);
}


// CustomLogic.CustomLogicSliderBuiltin$$set_ShowInputField
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41f0ad0

void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined4 in_register_00000034;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar1 = (__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
    vtableDispatch =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._123_set_showInputField.methodPtr;
    (*vtableDispatch)
              (pUVar1,(ulong)(byte)value,
               (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._123_set_showInputField.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0,CONCAT44(in_register_00000034,value));
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsIntSlider
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0b10

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isIntSlider);
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x41f0b20

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_40f0b20
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x41f0b40

void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  float *pfVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  UnityEngine_UIElements_SliderInt_o *pUVar5;
  UnityEngine_UIElements_Slider_o *pUVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_057b9be8) {
        auVar8 = il2cpp_runtime_helper_02305440(value);
        uVar3 = auVar8._8_8_;
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = *auVar8._0_8_;
          goto label_041f0bf0;
        }
      }
      else {
        if (value->klass != g_data_057b9bb8) {
          return;
        }
        auVar8 = il2cpp_runtime_helper_02305440(value);
        uVar3 = auVar8._8_8_;
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = (float)*auVar8._0_8_;
label_041f0bf0:
          UNRECOVERED_JUMPTABLE_00 = (pUVar6->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
          (*UNRECOVERED_JUMPTABLE_00)
                    (fVar7,pUVar6,(pUVar6->klass->vtable)._114_SetValueWithoutNotify.method,uVar3,
                     UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
      goto label_041f0c04;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == g_data_057b9bb8) {
      puVar2 = (uint *)il2cpp_runtime_helper_02305440(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) goto label_041f0c04;
      uVar4 = *puVar2;
    }
    else {
      if (value->klass != g_data_057b9be8) {
        return;
      }
      pfVar1 = (float *)il2cpp_runtime_helper_02305440(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
label_041f0c04:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ad844 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Slider");
          g_data_057ad844 = '\x01';
        }
        return;
      }
      uVar4 = (uint)*pfVar1;
    }
    UNRECOVERED_JUMPTABLE_00 = (pUVar5->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar5,(ulong)uVar4,(pUVar5->klass->vtable)._114_SetValueWithoutNotify.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_ClassName (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0c10

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad844 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Slider");
    g_data_057ad844 = '\x01';
  }
  return "Slider";
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0c40

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsStatic (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0c50

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_IsStatic
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x41f0c60

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__4_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x41f0c70

void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar1;
  void *pvVar2;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar3;
  bool_conflict bVar4;
  uint32_t uVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Type_o *enumType;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  System_ArgumentException_o *__this_00;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *pCVar18;
  System_Object_array *__this_02;
  System_Func_T__object__o *pSVar19;
  System_Action_T__object__o *pSVar20;
  CustomLogic_CLPropertyBinding_T__o *pCVar21;
  System_Func_T__object____object__o *pSVar22;
  CustomLogic_CLMethodBinding_T__o *pCVar23;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicEvaluator_o **ppCVar24;
  undefined1 uVar25;
  int iVar26;
  int32_t iVar27;
  UnityEngine_UIElements_ChangeEvent_float__o *method_00;
  long lVar28;
  long lVar29;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar30;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar31;
  long *plVar32;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar33;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar34;
  CustomLogic_UserMethod_o *userMethod;
  undefined8 unaff_R15;
  float fVar35;
  undefined1 auVar36 [16];
  int32_t iStack_128;
  int32_t iStack_124;
  long *plStack_120;
  ulong uStack_118;
  long lStack_110;
  CustomLogic_UserMethod_o *pCStack_108;
  Il2CppObject *pIStack_100;
  System_String_o *pSStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  float fStack_c0;
  float fStack_bc;
  System_String_o *pSStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  System_String_o *pSStack_a0;
  float fStack_90;
  float fStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  CustomLogic_CustomLogicEvaluator_o *pCStack_60;
  System_Object_array *pSStack_58;
  undefined8 uStack_48;
  UnityEngine_UIElements_ChangeEvent_float__o *pUStack_40;
  
  method_00 = evt;
  pCVar33 = __this;
  if (g_data_057ad845 == '\0') {
    pCVar33 = (CustomLogic_CustomLogicSliderBuiltin_o *)&MethodInfo_Single_get_newValue;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad845 = '\x01';
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
              (__this,(evt->fields)._newValue_k__BackingField,(MethodInfo *)method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar34 = pCVar33;
  if (g_data_057ad846 == '\0') {
    pCVar34 = (CustomLogic_CustomLogicSliderBuiltin_o *)&MethodInfo_Int32_get_newValue;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad846 = '\x01';
  }
  if (method_00 == (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    uStack_48 = il2cpp_runtime_helper_022b2c90();
    pUStack_40 = method_00;
    il2cpp_runtime_helper_01f681a0();
    uStack_48 = CONCAT44(*(undefined4 *)&(pCVar34->fields).Variables,(undefined4)uStack_48);
    pSVar14 = System_Int32__ToString((int)&uStack_48 + 4,(MethodInfo *)0x0);
    pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicSliderBuiltin constructor found that takes ");
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
    pSVar6 = (System_Object_array *)System_String__Concat_3af7150(pSVar16,pSVar14,pSVar17,(MethodInfo *)0x0);
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(uVar15);
    System_ArgumentException___ctor_3c12490
              ((System_ArgumentException_o *)__this_01,(System_String_o *)pSVar6,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSliderBuiltin_CreateInstance);
    pCVar18 = __this_01;
    pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_022b2b10();
    ppCVar24 = &pCStack_60;
    pSStack_58 = (System_Object_array *)__this_01;
    if (g_data_057ad847 == '\0') {
      lStack_68 = 0x41f0dc0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
      lStack_68 = 0x41f0dcc;
      il2cpp_runtime_helper_023445d0(&"OnValueChanged");
      lStack_68 = 0x41f0dd8;
      il2cpp_runtime_helper_023445d0(&"Label");
      lStack_68 = 0x41f0de4;
      il2cpp_runtime_helper_023445d0(&"IsIntSlider");
      lStack_68 = 0x41f0df0;
      il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
      lStack_68 = 0x41f0dfc;
      il2cpp_runtime_helper_023445d0(&"PageSize");
      lStack_68 = 0x41f0e08;
      il2cpp_runtime_helper_023445d0(&"HighValue");
      lStack_68 = 0x41f0e14;
      il2cpp_runtime_helper_023445d0(&"Value");
      lStack_68 = 0x41f0e20;
      il2cpp_runtime_helper_023445d0(&"ShowInputField");
      lStack_68 = 0x41f0e2c;
      il2cpp_runtime_helper_023445d0(&"LowValue");
      lStack_68 = 0x41f0e38;
      il2cpp_runtime_helper_023445d0(&"Direction");
      g_data_057ad847 = '\x01';
    }
    lStack_68 = 0x41f0e49;
    uVar5 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pCVar18,(MethodInfo *)0x0);
    if (uVar5 < 0x86253654) {
      if (uVar5 < 0x3a2089b8) {
        if (uVar5 == 0xf54ee6e) {
          lStack_68 = 0x41f0fe4;
          bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"LowValue",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              lStack_68 = 0x41f1171;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
            if (g_data_057ad84a == '\0') {
              lStack_68 = 0x41f143a;
              pSStack_58 = pSVar6;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
              lStack_68 = 0x41f1446;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
              lStack_68 = 0x41f1452;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
              lStack_68 = 0x41f145e;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
              lStack_68 = 0x41f146a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
              lStack_68 = 0x41f1476;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
              g_data_057ad84a = '\x01';
              pSVar6 = pSStack_58;
            }
            pSStack_58 = pSVar6;
            lStack_68 = 0x41f148c;
            pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f14a5;
            System_Func_object__object____ctor();
            lStack_68 = 0x41f14b4;
            pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f14cd;
            System_Action_object__object____ctor();
            lStack_68 = 0x41f14dc;
            pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f14f7;
            CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            return;
          }
        }
        else if (uVar5 == 0x3a2089b7) {
          lStack_68 = 0x41f0e85;
          bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"PageSize",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              lStack_68 = 0x41f114f;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
            if (g_data_057ad84c == '\0') {
              lStack_68 = 0x41f15fa;
              pSStack_58 = pSVar6;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
              lStack_68 = 0x41f1606;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PageSize_g____getter_6_0);
              lStack_68 = 0x41f1612;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PageSize_g____setter_6_1);
              lStack_68 = 0x41f161e;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
              lStack_68 = 0x41f162a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
              lStack_68 = 0x41f1636;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
              g_data_057ad84c = '\x01';
              pSVar6 = pSStack_58;
            }
            pSStack_58 = pSVar6;
            lStack_68 = 0x41f164c;
            pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f1665;
            System_Func_object__object____ctor();
            lStack_68 = 0x41f1674;
            pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f168d;
            System_Action_object__object____ctor();
            lStack_68 = 0x41f169c;
            pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f16b7;
            CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            return;
          }
        }
      }
      else if (uVar5 == 0x86253653) {
        lStack_68 = 0x41f1062;
        bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"IsIntSlider",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pCVar18 = (CustomLogic_CustomLogicEvaluator_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_68 = 0x41f11b5;
            pCVar18 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_02337ed0();
          }
          pCStack_60 = pCVar18;
          if (g_data_057ad84f == '\0') {
            lStack_68 = 0x41f1899;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsIntSlider_g____getter);
            lStack_68 = 0x41f18a5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f18b1;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f18bd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84f = '\x01';
          }
          lStack_68 = 0x41f18d3;
          pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f18ec;
          System_Func_object__object____ctor();
          lStack_68 = 0x41f18fb;
          pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f1915;
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar21,pSVar19,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
      else if (uVar5 == 0x4c979c42) {
        lStack_68 = 0x41f10a1;
        bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"HighValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_68 = 0x41f11c6;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
          if (g_data_057ad84b == '\0') {
            lStack_68 = 0x41f151a;
            pSStack_58 = pSVar6;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f1526;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
            lStack_68 = 0x41f1532;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
            lStack_68 = 0x41f153e;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f154a;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f1556;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84b = '\x01';
            pSVar6 = pSStack_58;
          }
          pSStack_58 = pSVar6;
          lStack_68 = 0x41f156c;
          pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f1585;
          System_Func_object__object____ctor();
          lStack_68 = 0x41f1594;
          pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f15ad;
          System_Action_object__object____ctor();
          lStack_68 = 0x41f15bc;
          pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f15d7;
          CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
      else if (uVar5 == 0x61fefc0a) {
        lStack_68 = 0x41f0f45;
        bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"Direction",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_68 = 0x41f1193;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
          if (g_data_057ad84d == '\0') {
            lStack_68 = 0x41f16da;
            pSStack_58 = pSVar6;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f16e6;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Direction_g____getter_7);
            lStack_68 = 0x41f16f2;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Direction_g____setter_7_1);
            lStack_68 = 0x41f16fe;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f170a;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f1716;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84d = '\x01';
            pSVar6 = pSStack_58;
          }
          pSStack_58 = pSVar6;
          lStack_68 = 0x41f172c;
          pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f1745;
          System_Func_object__object____ctor();
          lStack_68 = 0x41f1754;
          pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f176d;
          System_Action_object__object____ctor();
          lStack_68 = 0x41f177c;
          pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f1797;
          CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
    }
    else if (uVar5 < 0xacc881fd) {
      if (uVar5 == 0x9eccf29d) {
        lStack_68 = 0x41f1023;
        bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"Label",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_68 = 0x41f1182;
            il2cpp_runtime_helper_02337ed0();
            ppCVar24 = (CustomLogic_CustomLogicEvaluator_o **)&uStack_48;
            __this_02 = pSStack_58;
          }
          else {
            ppCVar24 = (CustomLogic_CustomLogicEvaluator_o **)&uStack_48;
            __this_02 = pSStack_58;
          }
          goto CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label;
        }
      }
      else if (uVar5 == 0xacc881fc) {
        lStack_68 = 0x41f0ee5;
        bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"ShowInputField",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_68 = 0x41f1160;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
          if (g_data_057ad84e == '\0') {
            lStack_68 = 0x41f17ba;
            pSStack_58 = pSVar6;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_68 = 0x41f17c6;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShowInputField_g____gett);
            lStack_68 = 0x41f17d2;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShowInputField_g____setter);
            lStack_68 = 0x41f17de;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f17ea;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_68 = 0x41f17f6;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84e = '\x01';
            pSVar6 = pSStack_58;
          }
          pSStack_58 = pSVar6;
          lStack_68 = 0x41f180c;
          pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f1825;
          System_Func_object__object____ctor();
          lStack_68 = 0x41f1834;
          pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f184d;
          System_Action_object__object____ctor();
          lStack_68 = 0x41f185c;
          pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f1877;
          CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
    }
    else if (uVar5 == 0xd147f96a) {
      lStack_68 = 0x41f10e0;
      bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"Value",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          lStack_68 = 0x41f11d7;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
        if (g_data_057ad849 == '\0') {
          lStack_68 = 0x41f135a;
          pSStack_58 = pSVar6;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_68 = 0x41f1366;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
          lStack_68 = 0x41f1372;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
          lStack_68 = 0x41f137e;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f138a;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f1396;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad849 = '\x01';
          pSVar6 = pSStack_58;
        }
        pSStack_58 = pSVar6;
        lStack_68 = 0x41f13ac;
        pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        lStack_68 = 0x41f13c5;
        System_Func_object__object____ctor();
        lStack_68 = 0x41f13d4;
        pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
        lStack_68 = 0x41f13ed;
        System_Action_object__object____ctor();
        lStack_68 = 0x41f13fc;
        pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        lStack_68 = 0x41f1417;
        CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return;
      }
    }
    else if (uVar5 == 0xd1dd43b5) {
      lStack_68 = 0x41f111f;
      bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          lStack_68 = 0x41f11e8;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
        if (g_data_057ad851 == '\0') {
          lStack_68 = 0x41f1b19;
          pSStack_58 = pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f1b25;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f1b31;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_68 = 0x41f1b3d;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__1);
          lStack_68 = 0x41f1b49;
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad851 = '\x01';
          iVar26 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar26 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_58 = pSVar6;
        }
        if (iVar26 == 0) {
          lStack_68 = 0x41f1b6c;
          il2cpp_runtime_helper_02337ed0();
          pSVar22 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar22 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar22 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            lStack_68 = 0x41f1abb;
            il2cpp_runtime_helper_02337ed0();
          }
          lStack_68 = 0x41f1ad7;
          pSVar22 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_68 = 0x41f1af1;
          System_Func_object__object__object____ctor();
          lVar8 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar8 + 0x10) = pSVar22;
          lStack_68 = 0x41f1b0b;
          il2cpp_runtime_helper_022b4080(lVar8 + 0x10,pSVar22);
        }
        lStack_68 = 0x41f1b92;
        pCVar23 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        lStack_68 = 0x41f1baa;
        CustomLogic_CLMethodBinding_object____ctor(pCVar23,pSVar22,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        return;
      }
    }
    else if (uVar5 == 0xf722a79f) {
      lStack_68 = 0x41f0fa5;
      bVar4 = System_String__op_Equality((System_String_o *)pCVar18,"OnValueChanged",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          lStack_68 = 0x41f11a4;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_58;
        if (g_data_057ad850 == '\0') {
          lStack_68 = 0x41f19c9;
          pSStack_58 = pSVar6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f19d5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
          lStack_68 = 0x41f19e1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_68 = 0x41f19ed;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__10_0);
          lStack_68 = 0x41f19f9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad850 = '\x01';
          iVar26 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar26 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_58 = pSVar6;
        }
        if (iVar26 == 0) {
          lStack_68 = 0x41f1a1c;
          il2cpp_runtime_helper_02337ed0();
          pSVar22 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar22 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar22 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            lStack_68 = 0x41f196b;
            il2cpp_runtime_helper_02337ed0();
          }
          lStack_68 = 0x41f1987;
          pSVar22 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_68 = 0x41f19a1;
          System_Func_object__object__object____ctor();
          lVar8 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar8 + 8) = pSVar22;
          lStack_68 = 0x41f19bb;
          il2cpp_runtime_helper_022b4080(lVar8 + 8,pSVar22);
        }
        lStack_68 = 0x41f1a42;
        pCVar23 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        lStack_68 = 0x41f1a5a;
        CustomLogic_CLMethodBinding_object____ctor(pCVar23,pSVar22,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        return;
      }
    }
    lStack_68 = 0x41f1200;
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    lStack_68 = 0x41f120f;
    pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSliderBuiltin not found");
    lStack_68 = 0x41f121f;
    pSVar6 = (System_Object_array *)
             System_String__Concat_3af7150(pSVar14,(System_String_o *)pCVar18,pSVar16,(MethodInfo *)0x0);
    lStack_68 = 0x41f122e;
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    lStack_68 = 0x41f1236;
    __this_02 = (System_Object_array *)il2cpp_runtime_helper_023052d0(uVar15);
    lStack_68 = 0x41f1246;
    System_Exception___ctor_3cf6120
              ((System_Exception_o *)__this_02,(System_String_o *)pSVar6,(MethodInfo *)0x0);
    lStack_68 = 0x41f1252;
    uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    lStack_68 = 0x41f125d;
    il2cpp_runtime_helper_022b2b10(__this_02,uVar15);
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label:
    *(undefined8 *)((long)ppCVar24 + -8) = unaff_R15;
    *(System_Object_array **)((long)ppCVar24 + -0x10) = pSVar6;
    *(System_Object_array **)((long)ppCVar24 + -0x18) = __this_02;
    if (g_data_057ad848 == '\0') {
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f127a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f1286;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f1292;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f129e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f12aa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f12b6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
      g_data_057ad848 = '\x01';
    }
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f12cc;
    pSVar19 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f12e5;
    System_Func_object__object____ctor();
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f12f4;
    pSVar20 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f130d;
    System_Action_object__object____ctor();
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f131c;
    pCVar21 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    *(undefined8 *)((long)ppCVar24 + -0x20) = 0x41f1337;
    CustomLogic_CLPropertyBinding_object____ctor(pCVar21,pSVar19,pSVar20,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    return;
  }
  fVar35 = (method_00->fields)._newValue_k__BackingField;
  pUStack_40 = evt;
  if (g_data_057ad83b == '\0') {
    pSStack_58 = (System_Object_array *)0x41f0157;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_58 = (System_Object_array *)0x41f0163;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad83b = '\x01';
  }
  userMethod = (pCVar33->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_58 = (System_Object_array *)0x41f0190;
    il2cpp_runtime_helper_02337ed0();
    userMethod = (pCVar33->fields)._valueChangedEvent;
  }
  pCVar18 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSStack_58 = (System_Object_array *)0x41f01b7;
  pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  uStack_48 = CONCAT44(fVar35,(undefined4)uStack_48);
  pSStack_58 = (System_Object_array *)0x41f01d4;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
  pIVar13 = (Il2CppObject *)&TypeInfo_CustomLogicManager;
  if (pSVar6 == (System_Object_array *)0x0) {
label_041f0230:
    pIVar7 = pIVar13;
    pSStack_58 = (System_Object_array *)0x41f0235;
    il2cpp_runtime_helper_022b2c90();
label_041f0235:
    pSStack_58 = (System_Object_array *)0x41f023a;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar7 == (Il2CppObject *)0x0) {
label_041f01f5:
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = pIVar7;
        pSStack_58 = (System_Object_array *)0x41f020e;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
        pIVar13 = pIVar7;
        if (pCVar18 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSStack_58 = (System_Object_array *)0x41f0223;
          CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                    (pCVar18,userMethod,pSVar6,(MethodInfo *)0x0);
          return;
        }
        goto label_041f0230;
      }
      goto label_041f0235;
    }
    pSStack_58 = (System_Object_array *)0x41f01f0;
    lVar8 = il2cpp_runtime_helper_023051f0(pIVar7);
    if (lVar8 != 0) goto label_041f01f5;
  }
  pSStack_58 = (System_Object_array *)0x41f023f;
  lVar8 = il2cpp_runtime_helper_0231b270();
  pSVar14 = (System_String_o *)0x0;
  pSStack_58 = (System_Object_array *)0x41f0249;
  il2cpp_runtime_helper_022b2b10();
  pSStack_58 = pSVar6;
  if (g_data_057ad83c == '\0') {
    pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0269;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0275;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad83c = '\x01';
  }
  if (*(char *)(lVar8 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar8 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___get_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar8 + 0x60),MethodInfo_String_get_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar8 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___get_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar8 + 0x68),MethodInfo_String_get_label);
    return;
  }
  lVar28 = 0;
  pCStack_60 = (CustomLogic_CustomLogicEvaluator_o *)0x41f02b9;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pSVar16 = pSVar14;
  lStack_68 = lVar8;
  pCStack_60 = pCVar18;
  if (g_data_057ad83d == '\0') {
    uStack_78 = 0x41f02df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    uStack_78 = 0x41f02eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad83d = '\x01';
  }
  if (*(char *)(lVar28 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar28 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar28 + 0x60),pSVar14,MethodInfo_Void_set_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar28 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___set_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar28 + 0x68),pSVar14,MethodInfo_Void_set_label);
    return;
  }
  lVar8 = 0;
  uStack_78 = 0x41f0341;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar8 + 0x70) == '\0') {
    plVar32 = *(long **)(lVar8 + 0x60);
    if (plVar32 != (long *)0x0) {
      lStack_80 = 0x41f03a7;
      uVar3 = (**(code **)(*plVar32 + 0x7c8))(plVar32,*(undefined8 *)(*plVar32 + 2000));
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
      lStack_80 = 0x41f03c2;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_78);
      return;
    }
  }
  else {
    plVar32 = *(long **)(lVar8 + 0x68);
    if (plVar32 != (long *)0x0) {
      lStack_80 = 0x41f0370;
      uVar3 = (**(code **)(*plVar32 + 0x7c8))(plVar32,*(undefined8 *)(*plVar32 + 2000));
      uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
      lStack_80 = 0x41f038c;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
      return;
    }
  }
  lVar8 = 0;
  lStack_80 = 0x41f03c9;
  il2cpp_runtime_helper_022b2c90();
  lStack_80 = lVar28;
  if (*(char *)(lVar8 + 0x70) == '\0') {
    if (pSVar16 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar16->klass == g_data_057b9be8) {
      lStack_88 = 0x41f045c;
      auVar36 = il2cpp_runtime_helper_02305440(pSVar16);
      uVar15 = auVar36._8_8_;
      plVar32 = *(long **)(lVar8 + 0x60);
      if (plVar32 != (long *)0x0) {
        fVar35 = *auVar36._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (pSVar16->klass != g_data_057b9bb8) {
        return;
      }
      lStack_88 = 0x41f0473;
      auVar36 = il2cpp_runtime_helper_02305440(pSVar16);
      uVar15 = auVar36._8_8_;
      plVar32 = *(long **)(lVar8 + 0x60);
      if (plVar32 != (long *)0x0) {
        fVar35 = (float)*auVar36._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar32 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar35,plVar32,*(undefined8 *)(*plVar32 + 0x7e0),uVar15,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  else {
    if (pSVar16 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar16->klass == g_data_057b9bb8) {
      lStack_88 = 0x41f0435;
      piVar12 = (int *)il2cpp_runtime_helper_02305440(pSVar16);
      plVar32 = *(long **)(lVar8 + 0x68);
      if (plVar32 != (long *)0x0) {
        iVar26 = *piVar12;
        goto label_041f0440;
      }
    }
    else {
      if (pSVar16->klass != g_data_057b9be8) {
        return;
      }
      lStack_88 = 0x41f03fd;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pSVar16);
      plVar32 = *(long **)(lVar8 + 0x68);
      if (plVar32 != (long *)0x0) {
        iVar26 = (int)*pfVar9;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar32 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar32,iVar26,*(undefined8 *)(*plVar32 + 0x7e0),UNRECOVERED_JUMPTABLE_00)
        ;
        return;
      }
    }
  }
  lVar28 = 0;
  lStack_88 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_88 = lVar8;
  if (g_data_057ad83e == '\0') {
    pSStack_a0 = (System_String_o *)0x41f04bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    pSStack_a0 = (System_String_o *)0x41f04c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar28 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar28 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      pSStack_a0 = (System_String_o *)0x41f051c;
      fStack_90 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar28 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar9 = &fStack_90;
      puVar10 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar28 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    pSStack_a0 = (System_String_o *)0x41f04ee;
    fStack_8c = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar28 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar9 = &fStack_8c;
    puVar10 = &g_data_057b9bb8;
label_041f0532:
    pSStack_a0 = (System_String_o *)0x41f053a;
    il2cpp_runtime_helper_02304f30(*puVar10,pfVar9);
    return;
  }
  lVar8 = 0;
  pSStack_a0 = (System_String_o *)0x41f0545;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar16;
  lStack_a8 = lVar28;
  pSStack_a0 = pSVar14;
  if (g_data_057ad83f == '\0') {
    pSStack_b8 = (System_String_o *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pSStack_b8 = (System_String_o *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar8 + 0x70) == '\0') {
    if (pSVar16 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar16->klass == g_data_057b9be8) {
      pSStack_b8 = (System_String_o *)0x41f0613;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pSVar16);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = *pfVar9;
        goto label_041f0637;
      }
    }
    else {
      if (pSVar16->klass != g_data_057b9bb8) {
        return;
      }
      pSStack_b8 = (System_String_o *)0x41f062a;
      piVar12 = (int *)il2cpp_runtime_helper_02305440(pSVar16);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = (float)*piVar12;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar31,fVar35,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (pSVar16 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar16->klass == g_data_057b9bb8) {
      pSStack_b8 = (System_String_o *)0x41f05ea;
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar16);
      pUVar30 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68);
      if (pUVar30 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar27 = *piVar11;
        goto label_041f05f5;
      }
    }
    else {
      if (pSVar16->klass != g_data_057b9be8) {
        return;
      }
      pSStack_b8 = (System_String_o *)0x41f05ac;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pSVar16);
      pUVar30 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68);
      if (pUVar30 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar27 = (int32_t)*pfVar9;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar30,iVar27,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar28 = 0;
  pSStack_b8 = (System_String_o *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pSStack_b8 = pSVar16;
  if (g_data_057ad840 == '\0') {
    lStack_d0 = 0x41f067d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    lStack_d0 = 0x41f0689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar28 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar28 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      lStack_d0 = 0x41f06dc;
      fStack_c0 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar28 + 0x60),MethodInfo_Single_get_highValue);
      pfVar9 = &fStack_c0;
      puVar10 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar28 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    lStack_d0 = 0x41f06ae;
    fStack_bc = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar28 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar9 = &fStack_bc;
    puVar10 = &g_data_057b9bb8;
label_041f06f2:
    lStack_d0 = 0x41f06fa;
    il2cpp_runtime_helper_02304f30(*puVar10,pfVar9);
    return;
  }
  lVar29 = 0;
  lStack_d0 = 0x41f0705;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  pSVar14 = pSVar17;
  lStack_d8 = lVar28;
  lStack_d0 = lVar8;
  if (g_data_057ad841 == '\0') {
    uStack_e8 = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    uStack_e8 = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar27 = (int32_t)pSVar14;
  if (*(char *)(lVar29 + 0x70) == '\0') {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9be8) {
      uStack_e8 = 0x41f07d3;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = *pfVar9;
        goto label_041f07f7;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9bb8) {
        return;
      }
      uStack_e8 = 0x41f07ea;
      piVar12 = (int *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = (float)*piVar12;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar31,fVar35,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9bb8) {
      uStack_e8 = 0x41f07aa;
      piVar11 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar30 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68);
      if (pUVar30 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar27 = *piVar11;
        goto label_041f07b5;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9be8) {
        return;
      }
      uStack_e8 = 0x41f076c;
      pfVar9 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar30 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68);
      if (pUVar30 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar27 = (int32_t)*pfVar9;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar30,iVar27,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar8 = 0;
  uStack_e8 = 0x41f0812;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  uStack_e8 = auVar36._0_8_;
  if (*(char *)(lVar8 + 0x70) == '\0') {
    plVar32 = *(long **)(lVar8 + 0x60);
  }
  else {
    plVar32 = *(long **)(lVar8 + 0x68);
  }
  if (plVar32 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar32 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar32,*(undefined8 *)(*plVar32 + 0x8c0),auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uStack_f0 = 0x41f0852;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  uStack_f0 = auVar36._0_8_;
  if ((char)plVar32[0xe] == '\0') {
    plVar32 = (long *)plVar32[0xc];
  }
  else {
    plVar32 = (long *)plVar32[0xd];
  }
  if (plVar32 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar32 + 0x8c8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar32,*(undefined8 *)(*plVar32 + 0x8d0),auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  pSStack_f8 = (System_String_o *)0x41f0892;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f8 = pSVar17;
  if (g_data_057ad842 == '\0') {
    pIStack_100 = (Il2CppObject *)0x41f08b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    pIStack_100 = (Il2CppObject *)0x41f08c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
    g_data_057ad842 = '\x01';
  }
  if ((char)plVar32[0xe] == '\0') {
    if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar32[0xc] !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___get_direction
                ((UnityEngine_UIElements_BaseSlider_float__o *)plVar32[0xc],MethodInfo_SliderDirection_get_direction);
      return;
    }
  }
  else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar32[0xd] !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    UnityEngine_UIElements_BaseSlider_int___get_direction
              ((UnityEngine_UIElements_BaseSlider_int__o *)plVar32[0xd],MethodInfo_SliderDirection_get_direction);
    return;
  }
  lVar8 = 0;
  pIStack_100 = (Il2CppObject *)0x41f0909;
  il2cpp_runtime_helper_022b2c90();
  plStack_120 = plVar32;
  uStack_118 = (ulong)(uint)fVar35;
  lStack_110 = lVar29;
  pCStack_108 = userMethod;
  pIStack_100 = pIVar7;
  if (g_data_057ad843 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
    il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
    g_data_057ad843 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_124 = iVar27;
  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_124);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar13,(MethodInfo *)0x0);
  uVar25 = SUB81(pIVar13,0);
  if ((char)bVar4 == '\0') {
    iStack_128 = iVar27;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_128);
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
    pSVar14 = System_String__Format(pSVar14,pIVar13,(MethodInfo *)0x0);
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar15);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar14,(MethodInfo *)0x0);
    uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar15);
    uVar25 = (undefined1)uVar15;
  }
  else if (*(char *)(lVar8 + 0x70) == '\0') {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_float___set_direction
                (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar8 + 0x60),iVar27,MethodInfo_Void_set_direction);
      return;
    }
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68) !=
        (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___set_direction
                (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar8 + 0x68),iVar27,MethodInfo_Void_set_direction);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
    pSVar14 = *(System_String_o **)&(__this_00->fields)._HResult;
  }
  else {
    pSVar14 = (__this_00->fields)._source;
  }
  if (pSVar14 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)pSVar14[4].fields._stringLength == '\0') {
      pSVar1 = pSVar14[4].klass;
    }
    else {
      pSVar1 = pSVar14[4].monitor;
    }
    if (pSVar1 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pvVar2 = (pSVar1->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar2 + 0x8e8);
    (*UNRECOVERED_JUMPTABLE_00)(pSVar1,uVar25,*(undefined8 *)((long)pvVar2 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = pSVar14->klass[3]._1.byval_arg.data;
  (*UNRECOVERED_JUMPTABLE_00)
            (pSVar14,*(undefined8 *)&pSVar14->klass[3]._1.byval_arg.bits,extraout_RDX,UNRECOVERED_JUMPTABLE_00
            );
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__5_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_int__o* evt, const MethodInfo* method);
// 0x41f0cc0

void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_ChangeEvent_int__o *evt,
               MethodInfo *method)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  System_String_c *pSVar2;
  void *pvVar3;
  System_RuntimeTypeHandle_o handle;
  undefined4 uVar4;
  bool_conflict bVar5;
  uint32_t uVar6;
  System_Object_array *pSVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  int32_t *piVar12;
  int *piVar13;
  System_Type_o *enumType;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  System_ArgumentException_o *__this_00;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *pCVar19;
  System_Object_array *__this_02;
  System_Func_T__object__o *pSVar20;
  System_Action_T__object__o *pSVar21;
  CustomLogic_CLPropertyBinding_T__o *pCVar22;
  System_Func_T__object____object__o *pSVar23;
  CustomLogic_CLMethodBinding_T__o *pCVar24;
  undefined8 extraout_RDX;
  CustomLogic_CustomLogicEvaluator_o **ppCVar25;
  undefined1 uVar26;
  int iVar27;
  int32_t iVar28;
  long lVar29;
  long lVar30;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar31;
  UnityEngine_UIElements_BaseSlider_float__o *pUVar32;
  long *plVar33;
  CustomLogic_CustomLogicSliderBuiltin_o *pCVar34;
  CustomLogic_UserMethod_o *userMethod;
  undefined8 unaff_R15;
  float fVar35;
  undefined1 auVar36 [16];
  int32_t iStack_110;
  int32_t iStack_10c;
  long *plStack_108;
  ulong uStack_100;
  long lStack_f8;
  CustomLogic_UserMethod_o *pCStack_f0;
  Il2CppObject *pIStack_e8;
  System_String_o *pSStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  float fStack_a8;
  float fStack_a4;
  System_String_o *pSStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  System_String_o *pSStack_88;
  float fStack_78;
  float fStack_74;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  CustomLogic_CustomLogicEvaluator_o *pCStack_48;
  System_Object_array *pSStack_40;
  undefined8 uStack_30;
  UnityEngine_UIElements_ChangeEvent_int__o *pUStack_28;
  
  pCVar34 = __this;
  if (g_data_057ad846 == '\0') {
    pCVar34 = (CustomLogic_CustomLogicSliderBuiltin_o *)&MethodInfo_Int32_get_newValue;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad846 = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_int__o *)0x0) {
    uStack_30 = il2cpp_runtime_helper_022b2c90();
    pUStack_28 = evt;
    il2cpp_runtime_helper_01f681a0();
    uStack_30 = CONCAT44(*(undefined4 *)&(pCVar34->fields).Variables,(undefined4)uStack_30);
    pSVar15 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicSliderBuiltin constructor found that takes ");
    pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
    pSVar7 = (System_Object_array *)System_String__Concat_3af7150(pSVar17,pSVar15,pSVar18,(MethodInfo *)0x0);
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(uVar16);
    System_ArgumentException___ctor_3c12490
              ((System_ArgumentException_o *)__this_01,(System_String_o *)pSVar7,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSliderBuiltin_CreateInstance);
    pCVar19 = __this_01;
    pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_022b2b10();
    ppCVar25 = &pCStack_48;
    pSStack_40 = (System_Object_array *)__this_01;
    if (g_data_057ad847 == '\0') {
      lStack_50 = 0x41f0dc0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
      lStack_50 = 0x41f0dcc;
      il2cpp_runtime_helper_023445d0(&"OnValueChanged");
      lStack_50 = 0x41f0dd8;
      il2cpp_runtime_helper_023445d0(&"Label");
      lStack_50 = 0x41f0de4;
      il2cpp_runtime_helper_023445d0(&"IsIntSlider");
      lStack_50 = 0x41f0df0;
      il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
      lStack_50 = 0x41f0dfc;
      il2cpp_runtime_helper_023445d0(&"PageSize");
      lStack_50 = 0x41f0e08;
      il2cpp_runtime_helper_023445d0(&"HighValue");
      lStack_50 = 0x41f0e14;
      il2cpp_runtime_helper_023445d0(&"Value");
      lStack_50 = 0x41f0e20;
      il2cpp_runtime_helper_023445d0(&"ShowInputField");
      lStack_50 = 0x41f0e2c;
      il2cpp_runtime_helper_023445d0(&"LowValue");
      lStack_50 = 0x41f0e38;
      il2cpp_runtime_helper_023445d0(&"Direction");
      g_data_057ad847 = '\x01';
    }
    lStack_50 = 0x41f0e49;
    uVar6 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pCVar19,(MethodInfo *)0x0);
    if (uVar6 < 0x86253654) {
      if (uVar6 < 0x3a2089b8) {
        if (uVar6 == 0xf54ee6e) {
          lStack_50 = 0x41f0fe4;
          bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"LowValue",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              lStack_50 = 0x41f1171;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
            if (g_data_057ad84a == '\0') {
              lStack_50 = 0x41f143a;
              pSStack_40 = pSVar7;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
              lStack_50 = 0x41f1446;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
              lStack_50 = 0x41f1452;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
              lStack_50 = 0x41f145e;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
              lStack_50 = 0x41f146a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
              lStack_50 = 0x41f1476;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
              g_data_057ad84a = '\x01';
              pSVar7 = pSStack_40;
            }
            pSStack_40 = pSVar7;
            lStack_50 = 0x41f148c;
            pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f14a5;
            System_Func_object__object____ctor();
            lStack_50 = 0x41f14b4;
            pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f14cd;
            System_Action_object__object____ctor();
            lStack_50 = 0x41f14dc;
            pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f14f7;
            CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            return;
          }
        }
        else if (uVar6 == 0x3a2089b7) {
          lStack_50 = 0x41f0e85;
          bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"PageSize",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              lStack_50 = 0x41f114f;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
            if (g_data_057ad84c == '\0') {
              lStack_50 = 0x41f15fa;
              pSStack_40 = pSVar7;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
              lStack_50 = 0x41f1606;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__PageSize_g____getter_6_0);
              lStack_50 = 0x41f1612;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__PageSize_g____setter_6_1);
              lStack_50 = 0x41f161e;
              il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
              lStack_50 = 0x41f162a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
              lStack_50 = 0x41f1636;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
              g_data_057ad84c = '\x01';
              pSVar7 = pSStack_40;
            }
            pSStack_40 = pSVar7;
            lStack_50 = 0x41f164c;
            pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f1665;
            System_Func_object__object____ctor();
            lStack_50 = 0x41f1674;
            pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f168d;
            System_Action_object__object____ctor();
            lStack_50 = 0x41f169c;
            pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f16b7;
            CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            return;
          }
        }
      }
      else if (uVar6 == 0x86253653) {
        lStack_50 = 0x41f1062;
        bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"IsIntSlider",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pCVar19 = (CustomLogic_CustomLogicEvaluator_o *)&TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_50 = 0x41f11b5;
            pCVar19 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_02337ed0();
          }
          pCStack_48 = pCVar19;
          if (g_data_057ad84f == '\0') {
            lStack_50 = 0x41f1899;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IsIntSlider_g____getter);
            lStack_50 = 0x41f18a5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f18b1;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f18bd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84f = '\x01';
          }
          lStack_50 = 0x41f18d3;
          pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f18ec;
          System_Func_object__object____ctor();
          lStack_50 = 0x41f18fb;
          pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f1915;
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar22,pSVar20,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
      else if (uVar6 == 0x4c979c42) {
        lStack_50 = 0x41f10a1;
        bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"HighValue",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_50 = 0x41f11c6;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
          if (g_data_057ad84b == '\0') {
            lStack_50 = 0x41f151a;
            pSStack_40 = pSVar7;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f1526;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
            lStack_50 = 0x41f1532;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
            lStack_50 = 0x41f153e;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f154a;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f1556;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84b = '\x01';
            pSVar7 = pSStack_40;
          }
          pSStack_40 = pSVar7;
          lStack_50 = 0x41f156c;
          pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f1585;
          System_Func_object__object____ctor();
          lStack_50 = 0x41f1594;
          pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f15ad;
          System_Action_object__object____ctor();
          lStack_50 = 0x41f15bc;
          pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f15d7;
          CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
      else if (uVar6 == 0x61fefc0a) {
        lStack_50 = 0x41f0f45;
        bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"Direction",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_50 = 0x41f1193;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
          if (g_data_057ad84d == '\0') {
            lStack_50 = 0x41f16da;
            pSStack_40 = pSVar7;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f16e6;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Direction_g____getter_7);
            lStack_50 = 0x41f16f2;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Direction_g____setter_7_1);
            lStack_50 = 0x41f16fe;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f170a;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f1716;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84d = '\x01';
            pSVar7 = pSStack_40;
          }
          pSStack_40 = pSVar7;
          lStack_50 = 0x41f172c;
          pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f1745;
          System_Func_object__object____ctor();
          lStack_50 = 0x41f1754;
          pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f176d;
          System_Action_object__object____ctor();
          lStack_50 = 0x41f177c;
          pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f1797;
          CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
    }
    else if (uVar6 < 0xacc881fd) {
      if (uVar6 == 0x9eccf29d) {
        lStack_50 = 0x41f1023;
        bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"Label",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_50 = 0x41f1182;
            il2cpp_runtime_helper_02337ed0();
            ppCVar25 = (CustomLogic_CustomLogicEvaluator_o **)&uStack_30;
            __this_02 = pSStack_40;
          }
          else {
            ppCVar25 = (CustomLogic_CustomLogicEvaluator_o **)&uStack_30;
            __this_02 = pSStack_40;
          }
          goto CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label;
        }
      }
      else if (uVar6 == 0xacc881fc) {
        lStack_50 = 0x41f0ee5;
        bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"ShowInputField",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            lStack_50 = 0x41f1160;
            il2cpp_runtime_helper_02337ed0();
          }
          pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
          if (g_data_057ad84e == '\0') {
            lStack_50 = 0x41f17ba;
            pSStack_40 = pSVar7;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
            lStack_50 = 0x41f17c6;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShowInputField_g____gett);
            lStack_50 = 0x41f17d2;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ShowInputField_g____setter);
            lStack_50 = 0x41f17de;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f17ea;
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            lStack_50 = 0x41f17f6;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
            g_data_057ad84e = '\x01';
            pSVar7 = pSStack_40;
          }
          pSStack_40 = pSVar7;
          lStack_50 = 0x41f180c;
          pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f1825;
          System_Func_object__object____ctor();
          lStack_50 = 0x41f1834;
          pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f184d;
          System_Action_object__object____ctor();
          lStack_50 = 0x41f185c;
          pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f1877;
          CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return;
        }
      }
    }
    else if (uVar6 == 0xd147f96a) {
      lStack_50 = 0x41f10e0;
      bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"Value",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          lStack_50 = 0x41f11d7;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
        if (g_data_057ad849 == '\0') {
          lStack_50 = 0x41f135a;
          pSStack_40 = pSVar7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
          lStack_50 = 0x41f1366;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
          lStack_50 = 0x41f1372;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
          lStack_50 = 0x41f137e;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f138a;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f1396;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
          g_data_057ad849 = '\x01';
          pSVar7 = pSStack_40;
        }
        pSStack_40 = pSVar7;
        lStack_50 = 0x41f13ac;
        pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
        lStack_50 = 0x41f13c5;
        System_Func_object__object____ctor();
        lStack_50 = 0x41f13d4;
        pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
        lStack_50 = 0x41f13ed;
        System_Action_object__object____ctor();
        lStack_50 = 0x41f13fc;
        pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        lStack_50 = 0x41f1417;
        CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return;
      }
    }
    else if (uVar6 == 0xd1dd43b5) {
      lStack_50 = 0x41f111f;
      bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          lStack_50 = 0x41f11e8;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
        if (g_data_057ad851 == '\0') {
          lStack_50 = 0x41f1b19;
          pSStack_40 = pSVar7;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f1b25;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f1b31;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_50 = 0x41f1b3d;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__1);
          lStack_50 = 0x41f1b49;
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad851 = '\x01';
          iVar27 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar27 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = pSVar7;
        }
        if (iVar27 == 0) {
          lStack_50 = 0x41f1b6c;
          il2cpp_runtime_helper_02337ed0();
          pSVar23 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar23 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar23 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            lStack_50 = 0x41f1abb;
            il2cpp_runtime_helper_02337ed0();
          }
          lStack_50 = 0x41f1ad7;
          pSVar23 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_50 = 0x41f1af1;
          System_Func_object__object__object____ctor();
          lVar9 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar9 + 0x10) = pSVar23;
          lStack_50 = 0x41f1b0b;
          il2cpp_runtime_helper_022b4080(lVar9 + 0x10,pSVar23);
        }
        lStack_50 = 0x41f1b92;
        pCVar24 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        lStack_50 = 0x41f1baa;
        CustomLogic_CLMethodBinding_object____ctor(pCVar24,pSVar23,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        return;
      }
    }
    else if (uVar6 == 0xf722a79f) {
      lStack_50 = 0x41f0fa5;
      bVar5 = System_String__op_Equality((System_String_o *)pCVar19,"OnValueChanged",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          lStack_50 = 0x41f11a4;
          il2cpp_runtime_helper_02337ed0();
        }
        pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)pSStack_40;
        if (g_data_057ad850 == '\0') {
          lStack_50 = 0x41f19c9;
          pSStack_40 = pSVar7;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f19d5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
          lStack_50 = 0x41f19e1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_50 = 0x41f19ed;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__10_0);
          lStack_50 = 0x41f19f9;
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad850 = '\x01';
          iVar27 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar27 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = pSVar7;
        }
        if (iVar27 == 0) {
          lStack_50 = 0x41f1a1c;
          il2cpp_runtime_helper_02337ed0();
          pSVar23 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar23 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar23 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            lStack_50 = 0x41f196b;
            il2cpp_runtime_helper_02337ed0();
          }
          lStack_50 = 0x41f1987;
          pSVar23 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object_object);
          lStack_50 = 0x41f19a1;
          System_Func_object__object__object____ctor();
          lVar9 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar9 + 8) = pSVar23;
          lStack_50 = 0x41f19bb;
          il2cpp_runtime_helper_022b4080(lVar9 + 8,pSVar23);
        }
        lStack_50 = 0x41f1a42;
        pCVar24 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        lStack_50 = 0x41f1a5a;
        CustomLogic_CLMethodBinding_object____ctor(pCVar24,pSVar23,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        return;
      }
    }
    lStack_50 = 0x41f1200;
    pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    lStack_50 = 0x41f120f;
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSliderBuiltin not found");
    lStack_50 = 0x41f121f;
    pSVar7 = (System_Object_array *)
             System_String__Concat_3af7150(pSVar15,(System_String_o *)pCVar19,pSVar17,(MethodInfo *)0x0);
    lStack_50 = 0x41f122e;
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    lStack_50 = 0x41f1236;
    __this_02 = (System_Object_array *)il2cpp_runtime_helper_023052d0(uVar16);
    lStack_50 = 0x41f1246;
    System_Exception___ctor_3cf6120
              ((System_Exception_o *)__this_02,(System_String_o *)pSVar7,(MethodInfo *)0x0);
    lStack_50 = 0x41f1252;
    uVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    lStack_50 = 0x41f125d;
    il2cpp_runtime_helper_022b2b10(__this_02,uVar16);
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label:
    *(undefined8 *)((long)ppCVar25 + -8) = unaff_R15;
    *(System_Object_array **)((long)ppCVar25 + -0x10) = pSVar7;
    *(System_Object_array **)((long)ppCVar25 + -0x18) = __this_02;
    if (g_data_057ad848 == '\0') {
      *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f127a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicSliderBuiltin_object);
      *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f1286;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Label_g____getter_2_0);
      *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f1292;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Label_g____setter_2_1);
      *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f129e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f12aa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f12b6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSliderBuiltin_object);
      g_data_057ad848 = '\x01';
    }
    *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f12cc;
    pSVar20 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSliderBuiltin_object);
    *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f12e5;
    System_Func_object__object____ctor();
    *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f12f4;
    pSVar21 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicSliderBuiltin_object);
    *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f130d;
    System_Action_object__object____ctor();
    *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f131c;
    pCVar22 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    *(undefined8 *)((long)ppCVar25 + -0x20) = 0x41f1337;
    CustomLogic_CLPropertyBinding_object____ctor(pCVar22,pSVar20,pSVar21,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    return;
  }
  uVar1 = (evt->fields)._newValue_k__BackingField;
  if (g_data_057ad83b == '\0') {
    pSStack_40 = (System_Object_array *)0x41f0157;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_40 = (System_Object_array *)0x41f0163;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad83b = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_40 = (System_Object_array *)0x41f0190;
    il2cpp_runtime_helper_02337ed0();
    userMethod = (__this->fields)._valueChangedEvent;
  }
  pCVar19 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSStack_40 = (System_Object_array *)0x41f01b7;
  pSVar7 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  uStack_30 = CONCAT44(uVar1,(undefined4)uStack_30);
  pSStack_40 = (System_Object_array *)0x41f01d4;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
  pIVar14 = (Il2CppObject *)&TypeInfo_CustomLogicManager;
  if (pSVar7 == (System_Object_array *)0x0) {
label_041f0230:
    pIVar8 = pIVar14;
    pSStack_40 = (System_Object_array *)0x41f0235;
    il2cpp_runtime_helper_022b2c90();
label_041f0235:
    pSStack_40 = (System_Object_array *)0x41f023a;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pIVar8 == (Il2CppObject *)0x0) {
label_041f01f5:
      if ((int)pSVar7->max_length != 0) {
        pSVar7->m_Items[0] = pIVar8;
        pSStack_40 = (System_Object_array *)0x41f020e;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
        pIVar14 = pIVar8;
        if (pCVar19 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSStack_40 = (System_Object_array *)0x41f0223;
          CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                    (pCVar19,userMethod,pSVar7,(MethodInfo *)0x0);
          return;
        }
        goto label_041f0230;
      }
      goto label_041f0235;
    }
    pSStack_40 = (System_Object_array *)0x41f01f0;
    lVar9 = il2cpp_runtime_helper_023051f0(pIVar8);
    if (lVar9 != 0) goto label_041f01f5;
  }
  pSStack_40 = (System_Object_array *)0x41f023f;
  lVar9 = il2cpp_runtime_helper_0231b270();
  pSVar15 = (System_String_o *)0x0;
  pSStack_40 = (System_Object_array *)0x41f0249;
  il2cpp_runtime_helper_022b2b10();
  pSStack_40 = pSVar7;
  if (g_data_057ad83c == '\0') {
    pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0269;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)0x41f0275;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_label);
    g_data_057ad83c = '\x01';
  }
  if (*(char *)(lVar9 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar9 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___get_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar9 + 0x60),MethodInfo_String_get_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar9 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___get_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar9 + 0x68),MethodInfo_String_get_label);
    return;
  }
  lVar29 = 0;
  pCStack_48 = (CustomLogic_CustomLogicEvaluator_o *)0x41f02b9;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSVar17 = pSVar15;
  lStack_50 = lVar9;
  pCStack_48 = pCVar19;
  if (g_data_057ad83d == '\0') {
    uStack_60 = 0x41f02df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    uStack_60 = 0x41f02eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_label);
    g_data_057ad83d = '\x01';
  }
  if (*(char *)(lVar29 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar29 + 0x60) !=
        (UnityEngine_UIElements_BaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                (*(UnityEngine_UIElements_BaseField_TValueType__o **)(lVar29 + 0x60),pSVar15,MethodInfo_Void_set_label);
      return;
    }
  }
  else if (*(UnityEngine_UIElements_BaseField_int__o **)(lVar29 + 0x68) !=
           (UnityEngine_UIElements_BaseField_int__o *)0x0) {
    UnityEngine_UIElements_BaseField_int___set_label
              (*(UnityEngine_UIElements_BaseField_int__o **)(lVar29 + 0x68),pSVar15,MethodInfo_Void_set_label);
    return;
  }
  lVar9 = 0;
  uStack_60 = 0x41f0341;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)(lVar9 + 0x70) == '\0') {
    plVar33 = *(long **)(lVar9 + 0x60);
    if (plVar33 != (long *)0x0) {
      lStack_68 = 0x41f03a7;
      uVar4 = (**(code **)(*plVar33 + 0x7c8))(plVar33,*(undefined8 *)(*plVar33 + 2000));
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
      lStack_68 = 0x41f03c2;
      il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_60);
      return;
    }
  }
  else {
    plVar33 = *(long **)(lVar9 + 0x68);
    if (plVar33 != (long *)0x0) {
      lStack_68 = 0x41f0370;
      uVar4 = (**(code **)(*plVar33 + 0x7c8))(plVar33,*(undefined8 *)(*plVar33 + 2000));
      uStack_60 = CONCAT44(uVar4,(undefined4)uStack_60);
      lStack_68 = 0x41f038c;
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
      return;
    }
  }
  lVar9 = 0;
  lStack_68 = 0x41f03c9;
  il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar29;
  if (*(char *)(lVar9 + 0x70) == '\0') {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9be8) {
      lStack_70 = 0x41f045c;
      auVar36 = il2cpp_runtime_helper_02305440(pSVar17);
      uVar16 = auVar36._8_8_;
      plVar33 = *(long **)(lVar9 + 0x60);
      if (plVar33 != (long *)0x0) {
        fVar35 = *auVar36._0_8_;
        goto label_041f0480;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9bb8) {
        return;
      }
      lStack_70 = 0x41f0473;
      auVar36 = il2cpp_runtime_helper_02305440(pSVar17);
      uVar16 = auVar36._8_8_;
      plVar33 = *(long **)(lVar9 + 0x60);
      if (plVar33 != (long *)0x0) {
        fVar35 = (float)*auVar36._0_8_;
label_041f0480:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar33 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)
                  (fVar35,plVar33,*(undefined8 *)(*plVar33 + 0x7e0),uVar16,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  else {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9bb8) {
      lStack_70 = 0x41f0435;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pSVar17);
      plVar33 = *(long **)(lVar9 + 0x68);
      if (plVar33 != (long *)0x0) {
        iVar27 = *piVar13;
        goto label_041f0440;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9be8) {
        return;
      }
      lStack_70 = 0x41f03fd;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      plVar33 = *(long **)(lVar9 + 0x68);
      if (plVar33 != (long *)0x0) {
        iVar27 = (int)*pfVar10;
label_041f0440:
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar33 + 0x7d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar33,iVar27,*(undefined8 *)(*plVar33 + 0x7e0),UNRECOVERED_JUMPTABLE_00)
        ;
        return;
      }
    }
  }
  lVar29 = 0;
  lStack_70 = 0x41f0499;
  il2cpp_runtime_helper_022b2c90();
  lStack_70 = lVar9;
  if (g_data_057ad83e == '\0') {
    pSStack_88 = (System_String_o *)0x41f04bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_lowValue);
    pSStack_88 = (System_String_o *)0x41f04c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_lowValue);
    g_data_057ad83e = '\x01';
  }
  if (*(char *)(lVar29 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      pSStack_88 = (System_String_o *)0x41f051c;
      fStack_78 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60),MethodInfo_Single_get_lowValue);
      pfVar10 = &fStack_78;
      puVar11 = &g_data_057b9be8;
      goto label_041f0532;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    pSStack_88 = (System_String_o *)0x41f04ee;
    fStack_74 = (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68),MethodInfo_Int32_get_lowValue);
    pfVar10 = &fStack_74;
    puVar11 = &g_data_057b9bb8;
label_041f0532:
    pSStack_88 = (System_String_o *)0x41f053a;
    il2cpp_runtime_helper_02304f30(*puVar11,pfVar10);
    return;
  }
  lVar9 = 0;
  pSStack_88 = (System_String_o *)0x41f0545;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pSVar18 = pSVar17;
  lStack_90 = lVar29;
  pSStack_88 = pSVar15;
  if (g_data_057ad83f == '\0') {
    pSStack_a0 = (System_String_o *)0x41f056f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    pSStack_a0 = (System_String_o *)0x41f057b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_lowValue);
    g_data_057ad83f = '\x01';
  }
  if (*(char *)(lVar9 + 0x70) == '\0') {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9be8) {
      pSStack_a0 = (System_String_o *)0x41f0613;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar32 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar9 + 0x60);
      if (pUVar32 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = *pfVar10;
        goto label_041f0637;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9bb8) {
        return;
      }
      pSStack_a0 = (System_String_o *)0x41f062a;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar32 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar9 + 0x60);
      if (pUVar32 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = (float)*piVar13;
label_041f0637:
        UnityEngine_UIElements_BaseSlider_float___set_lowValue(pUVar32,fVar35,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  else {
    if (pSVar17 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar17->klass == g_data_057b9bb8) {
      pSStack_a0 = (System_String_o *)0x41f05ea;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar9 + 0x68);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar28 = *piVar12;
        goto label_041f05f5;
      }
    }
    else {
      if (pSVar17->klass != g_data_057b9be8) {
        return;
      }
      pSStack_a0 = (System_String_o *)0x41f05ac;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar17);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar9 + 0x68);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar28 = (int32_t)*pfVar10;
label_041f05f5:
        UnityEngine_UIElements_BaseSlider_int___set_lowValue(pUVar31,iVar28,MethodInfo_Void_set_lowValue);
        return;
      }
    }
  }
  lVar29 = 0;
  pSStack_a0 = (System_String_o *)0x41f0652;
  il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar17;
  if (g_data_057ad840 == '\0') {
    lStack_b8 = 0x41f067d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_highValue);
    lStack_b8 = 0x41f0689;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_highValue);
    g_data_057ad840 = '\x01';
  }
  if (*(char *)(lVar29 + 0x70) == '\0') {
    if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60) !=
        (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      lStack_b8 = 0x41f06dc;
      fStack_a8 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                            (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar29 + 0x60),MethodInfo_Single_get_highValue);
      pfVar10 = &fStack_a8;
      puVar11 = &g_data_057b9be8;
      goto label_041f06f2;
    }
  }
  else if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68) !=
           (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    lStack_b8 = 0x41f06ae;
    fStack_a4 = (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                                 (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar29 + 0x68),MethodInfo_Int32_get_highValue);
    pfVar10 = &fStack_a4;
    puVar11 = &g_data_057b9bb8;
label_041f06f2:
    lStack_b8 = 0x41f06fa;
    il2cpp_runtime_helper_02304f30(*puVar11,pfVar10);
    return;
  }
  lVar30 = 0;
  lStack_b8 = 0x41f0705;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  pSVar15 = pSVar18;
  lStack_c0 = lVar29;
  lStack_b8 = lVar9;
  if (g_data_057ad841 == '\0') {
    uStack_d0 = 0x41f072f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    uStack_d0 = 0x41f073b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_highValue);
    g_data_057ad841 = '\x01';
  }
  iVar28 = (int32_t)pSVar15;
  if (*(char *)(lVar30 + 0x70) == '\0') {
    if (pSVar18 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar18->klass == g_data_057b9be8) {
      uStack_d0 = 0x41f07d3;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar32 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar30 + 0x60);
      if (pUVar32 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = *pfVar10;
        goto label_041f07f7;
      }
    }
    else {
      if (pSVar18->klass != g_data_057b9bb8) {
        return;
      }
      uStack_d0 = 0x41f07ea;
      piVar13 = (int *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar32 = *(UnityEngine_UIElements_BaseSlider_float__o **)(lVar30 + 0x60);
      if (pUVar32 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        fVar35 = (float)*piVar13;
label_041f07f7:
        UnityEngine_UIElements_BaseSlider_float___set_highValue(pUVar32,fVar35,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  else {
    if (pSVar18 == (System_String_o *)0x0) {
      return;
    }
    if (pSVar18->klass == g_data_057b9bb8) {
      uStack_d0 = 0x41f07aa;
      piVar12 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar30 + 0x68);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar28 = *piVar12;
        goto label_041f07b5;
      }
    }
    else {
      if (pSVar18->klass != g_data_057b9be8) {
        return;
      }
      uStack_d0 = 0x41f076c;
      pfVar10 = (float *)il2cpp_runtime_helper_02305440(pSVar18);
      pUVar31 = *(UnityEngine_UIElements_BaseSlider_int__o **)(lVar30 + 0x68);
      if (pUVar31 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        iVar28 = (int32_t)*pfVar10;
label_041f07b5:
        UnityEngine_UIElements_BaseSlider_int___set_highValue(pUVar31,iVar28,MethodInfo_Void_set_highValue);
        return;
      }
    }
  }
  lVar9 = 0;
  uStack_d0 = 0x41f0812;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  uStack_d0 = auVar36._0_8_;
  if (*(char *)(lVar9 + 0x70) == '\0') {
    plVar33 = *(long **)(lVar9 + 0x60);
  }
  else {
    plVar33 = *(long **)(lVar9 + 0x68);
  }
  if (plVar33 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar33 + 0x8b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar33,*(undefined8 *)(*plVar33 + 0x8c0),auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uStack_d8 = 0x41f0852;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  uStack_d8 = auVar36._0_8_;
  if ((char)plVar33[0xe] == '\0') {
    plVar33 = (long *)plVar33[0xc];
  }
  else {
    plVar33 = (long *)plVar33[0xd];
  }
  if (plVar33 == (long *)0x0) {
    pSStack_e0 = (System_String_o *)0x41f0892;
    il2cpp_runtime_helper_022b2c90();
    pSStack_e0 = pSVar18;
    if (g_data_057ad842 == '\0') {
      pIStack_e8 = (Il2CppObject *)0x41f08b9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      pIStack_e8 = (Il2CppObject *)0x41f08c5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_SliderDirection_get_direction);
      g_data_057ad842 = '\x01';
    }
    if ((char)plVar33[0xe] == '\0') {
      if ((UnityEngine_UIElements_BaseSlider_float__o *)plVar33[0xc] !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___get_direction
                  ((UnityEngine_UIElements_BaseSlider_float__o *)plVar33[0xc],MethodInfo_SliderDirection_get_direction);
        return;
      }
    }
    else if ((UnityEngine_UIElements_BaseSlider_int__o *)plVar33[0xd] !=
             (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      UnityEngine_UIElements_BaseSlider_int___get_direction
                ((UnityEngine_UIElements_BaseSlider_int__o *)plVar33[0xd],MethodInfo_SliderDirection_get_direction);
      return;
    }
    lVar9 = 0;
    pIStack_e8 = (Il2CppObject *)0x41f0909;
    il2cpp_runtime_helper_022b2c90();
    plStack_108 = plVar33;
    uStack_100 = (ulong)uVar1;
    lStack_f8 = lVar30;
    pCStack_f0 = userMethod;
    pIStack_e8 = pIVar8;
    if (g_data_057ad843 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_direction);
      il2cpp_runtime_helper_023445d0(&TypeRef_SliderDirection);
      g_data_057ad843 = '\x01';
    }
    handle.fields.value = TypeRef_SliderDirection.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    iStack_10c = iVar28;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_10c);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_Enum__IsDefined(enumType,pIVar14,(MethodInfo *)0x0);
    uVar26 = SUB81(pIVar14,0);
    if ((char)bVar5 == '\0') {
      iStack_110 = iVar28;
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_110);
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid slider direction: {0}");
      pSVar15 = System_String__Format(pSVar15,pIVar14,(MethodInfo *)0x0);
      uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar16);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar15,(MethodInfo *)0x0);
      uVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Direction);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar16);
      uVar26 = (undefined1)uVar16;
    }
    else if (*(char *)(lVar9 + 0x70) == '\0') {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar9 + 0x60) !=
          (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_float__o **)(lVar9 + 0x60),iVar28,MethodInfo_Void_set_direction);
        return;
      }
    }
    else {
      __this_00 = (System_ArgumentException_o *)0x0;
      if (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar9 + 0x68) !=
          (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_direction
                  (*(UnityEngine_UIElements_BaseSlider_int__o **)(lVar9 + 0x68),iVar28,MethodInfo_Void_set_direction);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&(__this_00->fields)._safeSerializationManager == '\0') {
      pSVar15 = *(System_String_o **)&(__this_00->fields)._HResult;
    }
    else {
      pSVar15 = (__this_00->fields)._source;
    }
    if (pSVar15 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((char)pSVar15[4].fields._stringLength == '\0') {
        pSVar2 = pSVar15[4].klass;
      }
      else {
        pSVar2 = pSVar15[4].monitor;
      }
      if (pSVar2 == (System_String_c *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pvVar3 = (pSVar2->_1).image;
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar3 + 0x8e8);
      (*UNRECOVERED_JUMPTABLE_00)
                (pSVar2,uVar26,*(undefined8 *)((long)pvVar3 + 0x8f0),UNRECOVERED_JUMPTABLE_00);
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = pSVar15->klass[3]._1.byval_arg.data;
    (*UNRECOVERED_JUMPTABLE_00)
              (pSVar15,*(undefined8 *)&pSVar15->klass[3]._1.byval_arg.bits,extraout_RDX,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar33 + 0x8c8);
  (*UNRECOVERED_JUMPTABLE_00)
            (plVar33,*(undefined8 *)(*plVar33 + 0x8d0),auVar36._8_8_,UNRECOVERED_JUMPTABLE_00);
  return;
}


