// Type: CustomLogic.CustomLogicProgressBarBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProgressBarBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProgressBarBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ecb20

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCVar11;
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
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicProgressBarBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicProgressBarBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad80e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"GetPercentage");
    il2cpp_runtime_helper_023445d0(&"SetPercentage");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    g_data_057ad80e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x8991c1ec) {
    if (uVar3 < 0x24d471aa) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad811 == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
            g_data_057ad811 = '\x01';
            message = pSStack_28;
          }
          pSStack_28 = message;
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
          System_Action_object__object____ctor();
          pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x24d471a9) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Title",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        else {
          ppSVar13 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        goto CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title;
      }
    }
    else if (uVar3 == 0x8991c1eb) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetPercentage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad816 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPercentage_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad816 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x4c979c42) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"HighValue",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad812 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
        g_data_057ad812 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0xd1dd43b6) {
    if (uVar3 == 0xd147f96a) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Value",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad810 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
          g_data_057ad810 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0xd1dd43b5) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetValueWithoutNotify",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad814 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad814 = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xda3ade4f) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetPercentage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad815 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetPercentage_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad815 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
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
    if (g_data_057ad813 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad813 = '\x01';
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
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
    }
    pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicProgressBarBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar8;
  if (g_data_057ad80f == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ecfba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ecfc6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Title_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ecfd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Title_g____setter_2_1);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ecfde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ecfea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ecff6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad80f = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ed00c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ed025;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ed034;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ed04d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ed05c;
  pCVar11 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41ed077;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41edd20

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41edd90

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41edda0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  Il2CppClass *pIVar1;
  long lVar2;
  long *plVar3;
  CustomLogic_UserMethod_o *pCVar4;
  Il2CppObject *pIVar5;
  long extraout_RDX;
  System_Object_array *obj;
  UnityEngine_UIElements_VisualElement_o *pUVar6;
  UnityEngine_UIElements_VisualElement_o *pUVar7;
  long *__this_01;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_3c;
  System_Object_array *pSStack_38;
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCStack_20;
  
  pUVar6 = (UnityEngine_UIElements_VisualElement_o *)__c;
  __this_01 = (long *)__this;
  if (g_data_057ad81d == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41eddbf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41eddcb;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041ede2b:
    pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41ede30;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41eddf9;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41ede0b;
    pUVar6 = MethodInfo_UserMethod_ConvertTo_UserMethod;
    __this_01 = (long *)__a;
    pCVar4 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__a,(MethodInfo_24EEB40 *)MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar4;
      pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41ede20;
      il2cpp_runtime_helper_022b4080(&(__c->fields)._valueChangedEvent,pCVar4);
      return (Il2CppObject *)__c;
    }
    goto label_041ede2b;
  }
  pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41ede35;
  auVar10 = il2cpp_runtime_helper_022b2ca0();
  obj = auVar10._8_8_;
  uStack_30 = auVar10._0_8_;
  pUVar7 = pUVar6;
  pSStack_28 = __a;
  pCStack_20 = __c;
  if (g_data_057ad81e == '\0') {
    pSStack_38 = (System_Object_array *)0x41ede5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    pSStack_38 = (System_Object_array *)0x41ede6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81e = '\x01';
  }
  if (obj == (System_Object_array *)0x0) {
label_041edeca:
    pSStack_38 = (System_Object_array *)0x41edecf;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)obj->max_length != 0) {
    obj = (System_Object_array *)obj->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_38 = (System_Object_array *)0x41ede99;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_38 = (System_Object_array *)0x41edeab;
    pUVar7 = MethodInfo_Single_ConvertTo_Single;
    __this_01 = (long *)obj;
    fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((pUVar6 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
       (__this_00 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar6->fields).m_RenderHints,
       __this_01 = (long *)0x0, __this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
      pSStack_38 = (System_Object_array *)0x41edec0;
      UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,fVar8,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_041edeca;
  }
  pSStack_38 = (System_Object_array *)0x41eded4;
  il2cpp_runtime_helper_022b2ca0();
  pUVar6 = pUVar7;
  pSStack_38 = obj;
  if ((pUVar7 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (__this_01 = *(long **)&(pUVar7->fields).m_RenderHints,
     (System_Object_array *)__this_01 != (System_Object_array *)0x0)) {
    fVar8 = *(float *)((long)((System_Object_array *)__this_01)->m_Items + 0x3e4);
    fStack_3c = 0.0;
    if ((fVar8 == *(float *)(((System_Object_array *)__this_01)->m_Items + 0x7c)) &&
       (!NAN(fVar8) && !NAN(*(float *)(((System_Object_array *)__this_01)->m_Items + 0x7c)))) {
label_041edf4d:
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_3c);
      return pIVar5;
    }
    pIVar1 = (((System_Object_array *)__this_01)->obj).klass;
    pUVar6 = (UnityEngine_UIElements_VisualElement_o *)pIVar1->vtable[0x67].method;
    fVar8 = (float)(*pIVar1->vtable[0x67].methodPtr)();
    lVar2 = *(long *)&(pUVar7->fields).m_RenderHints;
    if (lVar2 != 0) {
      fStack_3c = ((fVar8 - *(float *)(lVar2 + 0x400)) /
                  (*(float *)(lVar2 + 0x404) - *(float *)(lVar2 + 0x400))) * 100.0;
      goto label_041edf4d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar6;
  if (g_data_057ad81f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81f = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041ee05e;
    __this_01 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = MethodInfo_Single_ConvertTo_Single;
    fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this_01,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((pUVar6 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
       (plVar3 = *(long **)&(pUVar6->fields).m_RenderHints, __this_01 = (long *)0x0, plVar3 != (long *)0x0)) {
      fVar9 = 100.0;
      if (fVar8 <= 100.0) {
        fVar9 = fVar8;
      }
      (**(code **)(*plVar3 + 0x7b8))
                (((*(float *)((long)plVar3 + 0x404) - *(float *)(plVar3 + 0x80)) *
                 (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9)) / 100.0 + *(float *)(plVar3 + 0x80),plVar3,
                 *(undefined8 *)(*plVar3 + 0x7c0));
      return (Il2CppObject *)pUVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ee05e:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,pUVar7,(MethodInfo *)0x0);
  ((System_Object_array *)__this_01)->m_Items[8] = (Il2CppObject *)pUVar7;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(((System_Object_array *)__this_01)->m_Items + 8,pUVar7);
  return pIVar5;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41ede40

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  Il2CppClass *pIVar1;
  long lVar2;
  long *plVar3;
  Il2CppObject *pIVar4;
  long extraout_RDX;
  UnityEngine_UIElements_VisualElement_o *pUVar5;
  UnityEngine_UIElements_VisualElement_o *pUVar6;
  long *__this_01;
  float fVar7;
  float fVar8;
  float fStack_24;
  System_Object_array *pSStack_20;
  
  pUVar5 = (UnityEngine_UIElements_VisualElement_o *)__c;
  __this_01 = (long *)__this;
  if (g_data_057ad81e == '\0') {
    pSStack_20 = (System_Object_array *)0x41ede5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    pSStack_20 = (System_Object_array *)0x41ede6b;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041edeca:
    pSStack_20 = (System_Object_array *)0x41edecf;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pSStack_20 = (System_Object_array *)0x41ede99;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_Object_array *)0x41edeab;
    pUVar5 = MethodInfo_Single_ConvertTo_Single;
    __this_01 = (long *)__a;
    fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__a,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (__this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__c->fields)._progressBar,
       __this_01 = (long *)0x0, __this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
      pSStack_20 = (System_Object_array *)0x41edec0;
      UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,fVar7,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_041edeca;
  }
  pSStack_20 = (System_Object_array *)0x41eded4;
  il2cpp_runtime_helper_022b2ca0();
  pUVar6 = pUVar5;
  pSStack_20 = __a;
  if ((pUVar5 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (__this_01 = *(long **)&(pUVar5->fields).m_RenderHints,
     (System_Object_array *)__this_01 != (System_Object_array *)0x0)) {
    fVar7 = *(float *)((long)((System_Object_array *)__this_01)->m_Items + 0x3e4);
    fStack_24 = 0.0;
    if ((fVar7 == *(float *)(((System_Object_array *)__this_01)->m_Items + 0x7c)) &&
       (!NAN(fVar7) && !NAN(*(float *)(((System_Object_array *)__this_01)->m_Items + 0x7c)))) {
label_041edf4d:
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_24);
      return pIVar4;
    }
    pIVar1 = (((System_Object_array *)__this_01)->obj).klass;
    pUVar6 = (UnityEngine_UIElements_VisualElement_o *)pIVar1->vtable[0x67].method;
    fVar7 = (float)(*pIVar1->vtable[0x67].methodPtr)();
    lVar2 = *(long *)&(pUVar5->fields).m_RenderHints;
    if (lVar2 != 0) {
      fStack_24 = ((fVar7 - *(float *)(lVar2 + 0x400)) /
                  (*(float *)(lVar2 + 0x404) - *(float *)(lVar2 + 0x400))) * 100.0;
      goto label_041edf4d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = pUVar6;
  if (g_data_057ad81f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this_01 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81f = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041ee05e;
    __this_01 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = MethodInfo_Single_ConvertTo_Single;
    fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this_01,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((pUVar6 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
       (plVar3 = *(long **)&(pUVar6->fields).m_RenderHints, __this_01 = (long *)0x0, plVar3 != (long *)0x0)) {
      fVar8 = 100.0;
      if (fVar7 <= 100.0) {
        fVar8 = fVar7;
      }
      (**(code **)(*plVar3 + 0x7b8))
                (((*(float *)((long)plVar3 + 0x404) - *(float *)(plVar3 + 0x80)) *
                 (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8)) / 100.0 + *(float *)(plVar3 + 0x80),plVar3,
                 *(undefined8 *)(*plVar3 + 0x7c0));
      return (Il2CppObject *)pUVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ee05e:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_01,pUVar5,(MethodInfo *)0x0);
  ((System_Object_array *)__this_01)->m_Items[8] = (Il2CppObject *)pUVar5;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(((System_Object_array *)__this_01)->m_Items + 8,pUVar5);
  return pIVar4;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPercentage>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41edee0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o **ppUVar1;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  Il2CppObject *pIVar3;
  long extraout_RDX;
  UnityEngine_UIElements_VisualElement_o *pUVar4;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  long *plVar5;
  float fVar6;
  float fVar7;
  float local_c;
  
  pUVar4 = (UnityEngine_UIElements_VisualElement_o *)__c;
  if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)(__c->fields)._progressBar,
     (UnityEngine_UIElements_ProgressBar_o *)__this != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    fVar6 = *(float *)((long)&(((UnityEngine_UIElements_ProgressBar_o *)__this)->fields).m_Progress + 4);
    local_c = 0.0;
    ppUVar1 = &(((UnityEngine_UIElements_ProgressBar_o *)__this)->fields).m_Progress;
    if ((fVar6 == *(float *)ppUVar1) && (!NAN(fVar6) && !NAN(*(float *)ppUVar1))) {
label_041edf4d:
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_c);
      return pIVar3;
    }
    pUVar4 = (UnityEngine_UIElements_VisualElement_o *)
             ((Il2CppClass *)((UnityEngine_UIElements_ProgressBar_o *)__this)->klass)->vtable[0x67].method;
    fVar6 = (float)(*((Il2CppClass *)((UnityEngine_UIElements_ProgressBar_o *)__this)->klass)->vtable[0x67].
                     methodPtr)();
    pUVar2 = (__c->fields)._progressBar;
    if (pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
      fVar7 = *(float *)&(pUVar2->fields).m_Progress;
      local_c = ((fVar6 - fVar7) / (*(float *)((long)&(pUVar2->fields).m_Progress + 4) - fVar7)) * 100.0;
      goto label_041edf4d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  visualElement = pUVar4;
  if (g_data_057ad81f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    plVar5 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81f = '\x01';
    __this = (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)plVar5;
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041ee05e;
    __this = *(CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    visualElement = MethodInfo_Single_ConvertTo_Single;
    fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((pUVar4 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
       (plVar5 = *(long **)&(pUVar4->fields).m_RenderHints,
       __this = (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)0x0, plVar5 != (long *)0x0)) {
      fVar7 = 100.0;
      if (fVar6 <= 100.0) {
        fVar7 = fVar6;
      }
      (**(code **)(*plVar5 + 0x7b8))
                (((*(float *)((long)plVar5 + 0x404) - *(float *)(plVar5 + 0x80)) *
                 (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7)) / 100.0 + *(float *)(plVar5 + 0x80),plVar5,
                 *(undefined8 *)(*plVar5 + 0x7c0));
      return (Il2CppObject *)pUVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ee05e:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  *(UnityEngine_UIElements_VisualElement_o **)
   &(((UnityEngine_UIElements_ProgressBar_o *)__this)->fields).m_RenderHints = visualElement;
  pIVar3 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080(&(((UnityEngine_UIElements_ProgressBar_o *)__this)->fields).m_RenderHints,
                              visualElement);
  return pIVar3;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPercentage>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41edf80

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  Il2CppObject *pIVar3;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  visualElement = (UnityEngine_UIElements_VisualElement_o *)__c;
  if (g_data_057ad81f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    plVar4 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad81f = '\x01';
    __this = (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)plVar4;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041ee05e;
    __this = (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    visualElement = MethodInfo_Single_ConvertTo_Single;
    fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (pUVar2 = (__c->fields)._progressBar,
       __this = (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)0x0,
       pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
      fVar6 = 100.0;
      if (fVar5 <= 100.0) {
        fVar6 = fVar5;
      }
      fVar1 = *(float *)&(pUVar2->fields).m_Progress;
      (*(pUVar2->klass->vtable)._104_set_value.methodPtr)
                (((*(float *)((long)&(pUVar2->fields).m_Progress + 4) - fVar1) *
                 (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6)) / 100.0 + fVar1,pUVar2,
                 (pUVar2->klass->vtable)._104_set_value.method);
      return (Il2CppObject *)__c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041ee05e:
  il2cpp_runtime_helper_022b2ca0();
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  pIVar3 = (Il2CppObject *)
           il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),
                              visualElement);
  return pIVar3;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41ecbb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  undefined1 auStack_18 [8];
  
  if (g_data_057ad80e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"GetPercentage");
    il2cpp_runtime_helper_023445d0(&"SetPercentage");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    g_data_057ad80e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8991c1ec) {
    if (uVar3 < 0x24d471aa) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad811 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
            g_data_057ad811 = '\x01';
          }
          pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
          System_Func_object__object____ctor();
          pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
          System_Action_object__object____ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x24d471a9) &&
              (bVar4 = System_String__op_Equality(name,"Title",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title;
      }
    }
    else if (uVar3 == 0x8991c1eb) {
      bVar4 = System_String__op_Equality(name,"SetPercentage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad816 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPercentage_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad816 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x4c979c42) &&
            (bVar4 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad812 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
        g_data_057ad812 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xd1dd43b6) {
    if (uVar3 == 0xd147f96a) {
      bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad810 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
          g_data_057ad810 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xd1dd43b5) &&
            (bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad814 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad814 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xda3ade4f) {
    bVar4 = System_String__op_Equality(name,"GetPercentage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad815 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetPercentage_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad815 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad813 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad813 = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicProgressBarBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad80f == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ecfba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ecfc6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Title_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ecfd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Title_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ecfde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ecfea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ecff6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad80f = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ed00c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ed025;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ed034;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ed04d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ed05c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ed077;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Title
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title (const MethodInfo* method);
// 0x41ecfa0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad80f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Title_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Title_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad80f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x41ed080

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad810 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad810 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x41ed160

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad811 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad811 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x41ed240

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad812 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad812 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x41ed320

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad813 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad813 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x41ed470

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad814 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad814 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__GetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage (const MethodInfo* method);
// 0x41ed5c0

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad815 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetPercentage_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad815 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage (const MethodInfo* method);
// 0x41ed710

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (g_data_057ad816 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPercentage_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad816 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41ed860

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *__this;
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_o *value;
  Il2CppObject *__this_01;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EEB40 *obj_00;
  MethodInfo_24EED20 *obj_01;
  MethodInfo_24EED20 *obj_02;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  MethodInfo_33E0570 *pMVar5;
  long lVar6;
  MethodInfo_24EEB40 *pMVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  MethodInfo_24EEB40 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  
  if (g_data_057ad817 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"GetPercentage");
    il2cpp_runtime_helper_023445d0(&"SetPercentage");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    g_data_057ad817 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar3 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_00,"Title",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"LowValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"HighValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"GetPercentage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_00,"SetPercentage",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (__this = pSVar3[1].fields._slots, __this != (System_Collections_Generic_HashSet_Slot_T__array *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__get_title
              ((UnityEngine_UIElements_AbstractProgressBar_o *)__this,(MethodInfo *)0x0);
    return;
  }
  lVar4 = 0;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_00;
  if (g_data_057ad818 == '\0') {
    uStack_40 = (code *)0x41eda5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = (code *)0x41eda6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad818 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = (code *)0x41eda8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = (code *)0x41eda9c;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pMVar5 = obj;
  value = (System_String_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if ((lVar4 != 0) &&
     (pMVar5 = (MethodInfo_33E0570 *)0x0,
     *(UnityEngine_UIElements_AbstractProgressBar_o **)(lVar4 + 0x60) !=
     (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_title
              (*(UnityEngine_UIElements_AbstractProgressBar_o **)(lVar4 + 0x60),value,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0;
  uStack_40 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo_33E0570 *)0x0) &&
     (pIVar1 = pMVar5[1].virtualMethodPointer, pIVar1 != (Il2CppMethodPointer)0x0)) {
    pMStack_48 = (MethodInfo_33E0570 *)0x41edadf;
    uVar8 = (**(code **)(*(long *)pIVar1 + 0x7a8))(pIVar1,*(undefined8 *)(*(long *)pIVar1 + 0x7b0));
    uStack_40 = (code *)CONCAT44(uVar8,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_33E0570 *)0x41edafa;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  lVar6 = 0;
  pMStack_48 = (MethodInfo_33E0570 *)0x41edb01;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar4;
  pMStack_48 = obj;
  if (g_data_057ad819 == '\0') {
    uStack_60 = 0x41edb2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x41edb3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad819 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x41edb5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x41edb6c;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  pMVar7 = obj_00;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((lVar6 != 0) &&
     (plVar2 = *(long **)(lVar6 + 0x60), pMVar7 = (MethodInfo_24EEB40 *)0x0, plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x7b8))(plVar2,*(undefined8 *)(*plVar2 + 0x7c0));
    return;
  }
  uStack_60 = 0x41edb99;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) && (pMVar7[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_60 = CONCAT44(*(undefined4 *)(pMVar7[1].virtualMethodPointer + 0x400),(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EEB40 *)0x41edbce;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EEB40 *)0x41edbd5;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  lStack_70 = lVar6;
  pMStack_68 = obj_00;
  if (g_data_057ad81a == '\0') {
    uStack_80 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_80 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x41edc3c;
  obj_02 = MethodInfo_Single_ConvertTo_Single;
  fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
     (obj_01 = (MethodInfo_24EED20 *)0x0,
     (UnityEngine_UIElements_AbstractProgressBar_o *)pMVar7[1].virtualMethodPointer !=
     (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)pMVar7[1].virtualMethodPointer,fVar9,
               (MethodInfo *)0x0);
    return;
  }
  uStack_80 = 0x41edc5d;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EED20 *)0x0) && (obj_01[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_80 = CONCAT44(*(undefined4 *)(obj_01[1].virtualMethodPointer + 0x404),(undefined4)uStack_80);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_80 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_02,MethodInfo_Single_ConvertTo_Single);
  if ((obj_01 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_UIElements_AbstractProgressBar_o *)obj_01[1].virtualMethodPointer !=
      (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)obj_01[1].virtualMethodPointer,fVar9,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x41eda20

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  System_String_o *pSVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar4;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EED20 *obj_01;
  long lVar5;
  MethodInfo *pMVar6;
  long lVar7;
  MethodInfo_24EEB40 *pMVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  MethodInfo_24EEB40 *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    pSVar3 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar3;
  }
  lVar5 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad818 == '\0') {
    uStack_28 = (code *)0x41eda5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = (code *)0x41eda6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad818 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = (code *)0x41eda8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = (code *)0x41eda9c;
  obj = MethodInfo_String_ConvertTo_String;
  pMVar6 = method;
  pSVar3 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if ((lVar5 != 0) &&
     (pMVar6 = (MethodInfo *)0x0,
     *(UnityEngine_UIElements_AbstractProgressBar_o **)(lVar5 + 0x60) !=
     (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_title
              (*(UnityEngine_UIElements_AbstractProgressBar_o **)(lVar5 + 0x60),pSVar3,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0;
  uStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo *)0x0) &&
     (pIVar1 = pMVar6[1].virtualMethodPointer, pIVar1 != (Il2CppMethodPointer)0x0)) {
    pMStack_30 = (MethodInfo *)0x41edadf;
    uVar9 = (**(code **)(*(long *)pIVar1 + 0x7a8))(pIVar1,*(undefined8 *)(*(long *)pIVar1 + 0x7b0));
    uStack_28 = (code *)CONCAT44(uVar9,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x41edafa;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar4;
  }
  lVar7 = 0;
  pMStack_30 = (MethodInfo *)0x41edb01;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar5;
  pMStack_30 = method;
  if (g_data_057ad819 == '\0') {
    uStack_48 = 0x41edb2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x41edb3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad819 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x41edb5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x41edb6c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar8 = obj;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar7 != 0) &&
     (plVar2 = *(long **)(lVar7 + 0x60), pMVar8 = (MethodInfo_24EEB40 *)0x0, plVar2 != (long *)0x0)) {
    pIVar4 = (Il2CppObject *)(**(code **)(*plVar2 + 0x7b8))(plVar2,*(undefined8 *)(*plVar2 + 0x7c0));
    return pIVar4;
  }
  uStack_48 = 0x41edb99;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) && (pMVar8[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_48 = CONCAT44(*(undefined4 *)(pMVar8[1].virtualMethodPointer + 0x400),(undefined4)uStack_48);
    pMStack_50 = (MethodInfo_24EEB40 *)0x41edbce;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar4;
  }
  pMStack_50 = (MethodInfo_24EEB40 *)0x41edbd5;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  lStack_58 = lVar7;
  pMStack_50 = obj;
  if (g_data_057ad81a == '\0') {
    uStack_68 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_68 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x41edc3c;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((pMVar8 != (MethodInfo_24EEB40 *)0x0) &&
     (obj_00 = (MethodInfo_24EED20 *)0x0,
     (UnityEngine_UIElements_AbstractProgressBar_o *)pMVar8[1].virtualMethodPointer !=
     (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)pMVar8[1].virtualMethodPointer,fVar10,
               (MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_68 = 0x41edc5d;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EED20 *)0x0) && (obj_00[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_68 = CONCAT44(*(undefined4 *)(obj_00[1].virtualMethodPointer + 0x404),(undefined4)uStack_68);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_68 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((obj_00 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_UIElements_AbstractProgressBar_o *)obj_00[1].virtualMethodPointer !=
      (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)obj_00[1].virtualMethodPointer,fVar10,
               (MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41eda40

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  Il2CppClass *pIVar1;
  void *pvVar2;
  long *plVar3;
  System_String_o *value;
  Il2CppObject *pIVar4;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EED20 *obj_00;
  MethodInfo_24EED20 *obj_01;
  long lVar5;
  MethodInfo_24EEB40 *pMVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_24EEB40 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad818 == '\0') {
    uStack_20 = (code *)0x41eda5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = (code *)0x41eda6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad818 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = (code *)0x41eda8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = (code *)0x41eda9c;
  obj = MethodInfo_String_ConvertTo_String;
  pIVar4 = __v;
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     pIVar4 = (Il2CppObject *)0x0, __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0;
  uStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar1 = pIVar4[6].klass, pIVar1 != (Il2CppClass *)0x0)) {
    pvVar2 = (pIVar1->_1).image;
    pIStack_28 = (Il2CppObject *)0x41edadf;
    uVar7 = (**(code **)((long)pvVar2 + 0x7a8))(pIVar1,*(undefined8 *)((long)pvVar2 + 0x7b0));
    uStack_20 = (code *)CONCAT44(uVar7,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x41edafa;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar5 = 0;
  pIStack_28 = (Il2CppObject *)0x41edb01;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ad819 == '\0') {
    uStack_40 = 0x41edb2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x41edb3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad819 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41edb5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41edb6c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar6 = obj;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((lVar5 != 0) &&
     (plVar3 = *(long **)(lVar5 + 0x60), pMVar6 = (MethodInfo_24EEB40 *)0x0, plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x7b8))(plVar3,*(undefined8 *)(*plVar3 + 0x7c0));
    return;
  }
  uStack_40 = 0x41edb99;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo_24EEB40 *)0x0) && (pMVar6[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_40 = CONCAT44(*(undefined4 *)(pMVar6[1].virtualMethodPointer + 0x400),(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EEB40 *)0x41edbce;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_24EEB40 *)0x41edbd5;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar5;
  pMStack_48 = obj;
  if (g_data_057ad81a == '\0') {
    uStack_60 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x41edc3c;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((pMVar6 != (MethodInfo_24EEB40 *)0x0) &&
     (obj_00 = (MethodInfo_24EED20 *)0x0,
     (UnityEngine_UIElements_AbstractProgressBar_o *)pMVar6[1].virtualMethodPointer !=
     (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)pMVar6[1].virtualMethodPointer,fVar8,
               (MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x41edc5d;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EED20 *)0x0) && (obj_00[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_60 = CONCAT44(*(undefined4 *)(obj_00[1].virtualMethodPointer + 0x404),(undefined4)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_60 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_01,MethodInfo_Single_ConvertTo_Single);
  if ((obj_00 != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_UIElements_AbstractProgressBar_o *)obj_00[1].virtualMethodPointer !=
      (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)obj_00[1].virtualMethodPointer,fVar8,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x41edac0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  long *plVar2;
  code *vtableDispatch;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  undefined8 extraout_RDX;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EED20 *obj_00;
  long lVar4;
  MethodInfo *pMVar5;
  float fVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    (*(pUVar1->klass->vtable)._103_get_value.methodPtr)(pUVar1,(pUVar1->klass->vtable)._103_get_value.method);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar3;
  }
  lVar4 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad819 == '\0') {
    uStack_28 = 0x41edb2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x41edb3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad819 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41edb5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41edb6c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar5 = method;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((lVar4 != 0) && (plVar2 = *(long **)(lVar4 + 0x60), pMVar5 = (MethodInfo *)0x0, plVar2 != (long *)0x0))
  {
    vtableDispatch = *(code **)(*plVar2 + 0x7b8);
    pIVar3 = (Il2CppObject *)
             (*vtableDispatch)
                       (plVar2,*(undefined8 *)(*plVar2 + 0x7c0),extraout_RDX,vtableDispatch);
    return pIVar3;
  }
  uStack_28 = 0x41edb99;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo *)0x0) && (pMVar5[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_28 = CONCAT44(*(undefined4 *)(pMVar5[1].virtualMethodPointer + 0x400),(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x41edbce;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar3;
  }
  pMStack_30 = (MethodInfo *)0x41edbd5;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar4;
  pMStack_30 = method;
  if (g_data_057ad81a == '\0') {
    uStack_48 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x41edc3c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((pMVar5 != (MethodInfo *)0x0) &&
     (obj = (MethodInfo_24EED20 *)0x0,
     (UnityEngine_UIElements_AbstractProgressBar_o *)pMVar5[1].virtualMethodPointer !=
     (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)pMVar5[1].virtualMethodPointer,fVar6,
               (MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_48 = 0x41edc5d;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EED20 *)0x0) && (obj[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_48 = CONCAT44(*(undefined4 *)(obj[1].virtualMethodPointer + 0x404),(undefined4)uStack_48);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_48 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((obj != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_UIElements_AbstractProgressBar_o *)obj[1].virtualMethodPointer !=
      (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)obj[1].virtualMethodPointer,fVar6,
               (MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41edb10

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  MethodInfo_24EED20 *obj;
  MethodInfo_24EED20 *obj_00;
  float fVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad819 == '\0') {
    uStack_20 = 0x41edb2f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x41edb3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad819 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41edb5a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41edb6c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar2 = __v;
  CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pIVar2 = (Il2CppObject *)0x0,
     pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    (*(pUVar1->klass->vtable)._104_set_value.methodPtr)(pUVar1,(pUVar1->klass->vtable)._104_set_value.method);
    return;
  }
  uStack_20 = 0x41edb99;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[6].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT44(*(undefined4 *)&(pIVar2[6].klass)->vtable[0x2c].method,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x41edbce;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x41edbd5;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ad81a == '\0') {
    uStack_40 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41edc3c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (obj = (MethodInfo_24EED20 *)0x0, pIVar2[6].klass != (Il2CppClass *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)pIVar2[6].klass,fVar3,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x41edc5d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EED20 *)0x0) && (obj[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_40 = CONCAT44(*(undefined4 *)(obj[1].virtualMethodPointer + 0x404),(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj_00,MethodInfo_Single_ConvertTo_Single);
  if ((obj != (MethodInfo_24EED20 *)0x0) &&
     ((UnityEngine_UIElements_AbstractProgressBar_o *)obj[1].virtualMethodPointer !=
      (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)obj[1].virtualMethodPointer,fVar3,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x41edba0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EED20 *obj;
  float fVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     ((__i->fields)._progressBar != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81a == '\0') {
    uStack_28 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41edc3c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     method = (MethodInfo *)0x0, __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,fVar2,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x41edc5d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_28 = CONCAT44(*(undefined4 *)(method[1].virtualMethodPointer + 0x404),(undefined4)uStack_28);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((method != (MethodInfo *)0x0) &&
     ((UnityEngine_UIElements_AbstractProgressBar_o *)method[1].virtualMethodPointer !=
      (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)method[1].virtualMethodPointer,fVar2,
               (MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41edbe0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  Il2CppObject *__this_00;
  MethodInfo_24EED20 *obj;
  float fVar1;
  undefined8 uStack_20;
  
  if (g_data_057ad81a == '\0') {
    uStack_20 = 0x41edbff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x41edc0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41edc2a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41edc3c;
  obj = MethodInfo_Single_ConvertTo_Single;
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __v = (Il2CppObject *)0x0, __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,fVar1,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x41edc5d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT44(*(undefined4 *)((long)&(__v[6].klass)->vtable[0x2c].method + 4),(undefined4)uStack_20
                        );
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)obj,MethodInfo_Single_ConvertTo_Single);
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue
              ((UnityEngine_UIElements_AbstractProgressBar_o *)__v[6].klass,fVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x41edc60

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  Il2CppObject *pIVar1;
  Il2CppObject *extraout_RAX;
  float value;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     ((__i->fields)._progressBar != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)method,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41edca0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  Il2CppObject *__this_00;
  float value;
  
  if (g_data_057ad81b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad81b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad81c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad81c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin___ctor (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ProgressBar_o* progressBar, const MethodInfo* method);
// 0x41ec660

void CustomLogic_CustomLogicProgressBarBuiltin___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ProgressBar_o *progressBar,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  
  if (g_data_057ad80a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad80a = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)progressBar,(MethodInfo *)0x0);
  (__this->fields)._progressBar = progressBar;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._progressBar,progressBar);
  control = (__this->fields)._progressBar;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ec710

void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  System_String_o *value_00;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar5;
  long *plVar6;
  undefined8 in_R8;
  undefined8 in_R9;
  CustomLogic_UserMethod_o *userMethod;
  float fVar7;
  
  if (g_data_057ad80b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ad80b = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    userMethod = (__this->fields)._valueChangedEvent;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
  if (parameterValues == (System_Object_array *)0x0) {
label_041ec811:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar1 != (Il2CppObject *)0x0) && (lVar2 = il2cpp_runtime_helper_023051f0(pIVar1), lVar2 == 0))
    goto label_041ec81b;
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
      goto label_041ec811;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_041ec81b:
  lVar2 = il2cpp_runtime_helper_0231b270();
  value_00 = (System_String_o *)0x0;
  uVar3 = il2cpp_runtime_helper_022b2b10();
  pUVar5 = *(UnityEngine_UIElements_AbstractProgressBar_o **)(lVar2 + 0x60);
  if (pUVar5 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__get_title(pUVar5,(MethodInfo *)0x0);
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar5 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar5->fields).m_RenderHints;
  if (pUVar5 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(pUVar5,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = *(long **)&(pUVar5->fields).m_RenderHints;
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x7a8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar6,*(undefined8 *)(*plVar6 + 0x7b0),extraout_RDX,UNRECOVERED_JUMPTABLE_00)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0xc];
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x7b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar6,*(undefined8 *)(*plVar6 + 0x7c0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00,in_R8,in_R9,
               uVar4,uVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar6[0xc] != 0) {
    return;
  }
  fVar7 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar5 = (UnityEngine_UIElements_AbstractProgressBar_o *)plVar6[0xc];
  if (pUVar5 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar5,fVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar2._0_4_ = (pUVar5->fields).m_RenderHints;
  lVar2._4_4_ = (pUVar5->fields).lastLayout.fields.m_XMin;
  if (lVar2 != 0) {
    return;
  }
  fVar7 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar5 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar5->fields).m_RenderHints;
  if (pUVar5 == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(System_String_o **)&(pUVar5->fields).lastLayout.fields.m_YMin = value_00;
    il2cpp_runtime_helper_022b4080(&(pUVar5->fields).lastLayout.fields.m_YMin);
    return;
  }
  UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar5,fVar7,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Title
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ec830

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_Title
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_String_o *extraout_RAX_01;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar4;
  long *plVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar6;
  
  pUVar4 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    pSVar2 = UnityEngine_UIElements_AbstractProgressBar__get_title(pUVar4,(MethodInfo *)0x0);
    return pSVar2;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar4->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(pUVar4,(System_String_o *)method,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = *(long **)&(pUVar4->fields).m_RenderHints;
  if (plVar5 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x7a8);
    pSVar2 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar5,*(undefined8 *)(*plVar5 + 0x7b0),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = (long *)plVar5[0xc];
  if (plVar5 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x7b8);
    pSVar2 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar5,*(undefined8 *)(*plVar5 + 0x7c0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00,in_R8
                        ,in_R9,uVar3);
    return pSVar2;
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  if (plVar5[0xc] != 0) {
    return pSVar2;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_UIElements_AbstractProgressBar_o *)plVar5[0xc];
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar4,fVar6,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  lVar1._0_4_ = (pUVar4->fields).m_RenderHints;
  lVar1._4_4_ = (pUVar4->fields).lastLayout.fields.m_XMin;
  if (lVar1 != 0) {
    return pSVar2;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar4->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar4,fVar6,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(pUVar4->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(pUVar4->fields).lastLayout.fields.m_YMin);
  return (System_String_o *)pUVar4;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Title
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ec850

void CustomLogic_CustomLogicProgressBarBuiltin__set_Title
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar2;
  long *plVar3;
  float fVar4;
  
  pUVar2 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (pUVar2 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)&(pUVar2->fields).m_RenderHints;
  if (plVar3 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x7a8);
    (*UNRECOVERED_JUMPTABLE_00)(plVar3,*(undefined8 *)(*plVar3 + 0x7b0),extraout_RDX,UNRECOVERED_JUMPTABLE_00)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = (long *)plVar3[0xc];
  if (plVar3 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x7b8);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar3,*(undefined8 *)(*plVar3 + 0x7c0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar3[0xc] != 0) {
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_UIElements_AbstractProgressBar_o *)plVar3[0xc];
  if (pUVar2 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar2,fVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1._0_4_ = (pUVar2->fields).m_RenderHints;
  lVar1._4_4_ = (pUVar2->fields).lastLayout.fields.m_XMin;
  if (lVar1 != 0) {
    return;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar2->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar2,fVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(System_String_o **)&(pUVar2->fields).lastLayout.fields.m_YMin = value;
  il2cpp_runtime_helper_022b4080(&(pUVar2->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Value
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ec870

float CustomLogic_CustomLogicProgressBarBuiltin__get_Value
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  long *plVar3;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  pUVar2 = (__this->fields)._progressBar;
  if (pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._103_get_value.methodPtr;
    fVar5 = (float)(*UNRECOVERED_JUMPTABLE_00)
                             (pUVar2,(pUVar2->klass->vtable)._103_get_value.method,in_RDX,
                              UNRECOVERED_JUMPTABLE_00);
    return fVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)&(pUVar2->fields).m_RenderHints;
  if (plVar3 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar3 + 0x7b8);
    fVar5 = (float)(*vtableDispatch)
                             (plVar3,*(undefined8 *)(*plVar3 + 0x7c0),extraout_RDX,vtableDispatch);
    return fVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (plVar3[0xc] != 0) {
    return *(float *)(plVar3[0xc] + 0x400);
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_UIElements_AbstractProgressBar_o *)plVar3[0xc];
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar4,fVar5,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = *(long *)&(pUVar4->fields).m_RenderHints;
  if (lVar1 != 0) {
    return *(float *)(lVar1 + 0x404);
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar4->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar4,fVar5,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(pUVar4->fields).lastLayout.fields.m_YMin = method;
  fVar5 = (float)il2cpp_runtime_helper_022b4080(&(pUVar4->fields).lastLayout.fields.m_YMin);
  return fVar5;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ec8a0

void CustomLogic_CustomLogicProgressBarBuiltin__set_Value
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  long lVar1;
  long lVar2;
  undefined8 in_RDX;
  UnityEngine_UIElements_ProgressBar_o *pUVar3;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar4;
  float fVar5;
  
  pUVar3 = (__this->fields)._progressBar;
  if (pUVar3 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    vtableDispatch = (pUVar3->klass->vtable)._104_set_value.methodPtr;
    (*vtableDispatch)
              (pUVar3,(pUVar3->klass->vtable)._104_set_value.method,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1._0_4_ = (pUVar3->fields).m_RenderHints;
  lVar1._4_4_ = (pUVar3->fields).lastLayout.fields.m_XMin;
  if (lVar1 != 0) {
    return;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar3->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar4,fVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar2._0_4_ = (pUVar4->fields).m_RenderHints;
  lVar2._4_4_ = (pUVar4->fields).lastLayout.fields.m_XMin;
  if (lVar2 != 0) {
    return;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar4->fields).m_RenderHints;
  if (pUVar4 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar4,fVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(pUVar4->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(pUVar4->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_LowValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ec8d0

float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  long lVar2;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar3;
  float fVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    return *(float *)&(pUVar1->fields).m_Progress;
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (pUVar3 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar3,fVar4,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar2 = *(long *)&(pUVar3->fields).m_RenderHints;
  if (lVar2 != 0) {
    return *(float *)(lVar2 + 0x404);
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar3 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar3->fields).m_RenderHints;
  if (pUVar3 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar3,fVar4,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(pUVar3->fields).lastLayout.fields.m_YMin = method;
  fVar4 = (float)il2cpp_runtime_helper_022b4080(&(pUVar3->fields).lastLayout.fields.m_YMin);
  return fVar4;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ec8f0

void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  long lVar1;
  UnityEngine_UIElements_AbstractProgressBar_o *pUVar2;
  float value_00;
  
  pUVar2 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (pUVar2 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1._0_4_ = (pUVar2->fields).m_RenderHints;
  lVar1._4_4_ = (pUVar2->fields).lastLayout.fields.m_XMin;
  if (lVar1 != 0) {
    return;
  }
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_AbstractProgressBar_o **)&(pUVar2->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(pUVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(pUVar2->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(pUVar2->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_HighValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ec910

float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  float fVar2;
  float extraout_XMM0_Da;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    return *(float *)((long)&(pUVar1->fields).m_Progress + 4);
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this_00,fVar2,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(__this_00->fields).lastLayout.fields.m_YMin = method;
  fVar2 = (float)il2cpp_runtime_helper_022b4080(&(__this_00->fields).lastLayout.fields.m_YMin);
  return fVar2;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ec930

void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo **)&(__this_00->fields).lastLayout.fields.m_YMin = method;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).lastLayout.fields.m_YMin);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x41ec950

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged_40ec950
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ec970

void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  long lVar1;
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  long *plVar2;
  float fVar3;
  float fVar4;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar2 = *(long **)&(__this_00->fields).m_RenderHints;
  if (plVar2 != (long *)0x0) {
    if ((*(float *)((long)plVar2 + 0x404) == *(float *)(plVar2 + 0x80)) &&
       (!NAN(*(float *)((long)plVar2 + 0x404)) && !NAN(*(float *)(plVar2 + 0x80)))) {
      return;
    }
    (**(code **)(*plVar2 + 0x7a8))(0,plVar2,*(undefined8 *)(*plVar2 + 0x7b0));
    lVar1._0_4_ = (__this_00->fields).m_RenderHints;
    lVar1._4_4_ = (__this_00->fields).lastLayout.fields.m_XMin;
    if (lVar1 != 0) {
      return;
    }
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  plVar2 = (long *)plVar2[0xc];
  if (plVar2 != (long *)0x0) {
    fVar4 = 100.0;
    if (fVar3 <= 100.0) {
      fVar4 = fVar3;
    }
    (**(code **)(*plVar2 + 0x7b8))
              (((*(float *)((long)plVar2 + 0x404) - *(float *)(plVar2 + 0x80)) *
               (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4)) / 100.0 + *(float *)(plVar2 + 0x80),plVar2,
               *(undefined8 *)(*plVar2 + 0x7c0));
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    g_data_057ad80c = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$GetPercentage
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ec990

float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o **ppUVar1;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  long *plVar3;
  UnityEngine_UIElements_ProgressBar_o *pUVar4;
  float fVar5;
  float fVar6;
  
  pUVar4 = (__this->fields)._progressBar;
  if (pUVar4 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    fVar5 = *(float *)((long)&(pUVar4->fields).m_Progress + 4);
    ppUVar1 = &(pUVar4->fields).m_Progress;
    if ((fVar5 == *(float *)ppUVar1) && (!NAN(fVar5) && !NAN(*(float *)ppUVar1))) {
      return 0.0;
    }
    fVar5 = (float)(*(pUVar4->klass->vtable)._103_get_value.methodPtr)
                             (pUVar4,(pUVar4->klass->vtable)._103_get_value.method);
    pUVar2 = (__this->fields)._progressBar;
    if (pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
      fVar6 = *(float *)&(pUVar2->fields).m_Progress;
      return ((fVar5 - fVar6) / (*(float *)((long)&(pUVar2->fields).m_Progress + 4) - fVar6)) * 100.0;
    }
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  plVar3 = *(long **)&(pUVar4->fields).m_RenderHints;
  if (plVar3 != (long *)0x0) {
    fVar6 = 100.0;
    if (fVar5 <= 100.0) {
      fVar6 = fVar5;
    }
    fVar5 = (float)(**(code **)(*plVar3 + 0x7b8))
                             (((*(float *)((long)plVar3 + 0x404) - *(float *)(plVar3 + 0x80)) *
                              (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6)) / 100.0 +
                              *(float *)(plVar3 + 0x80),plVar3,*(undefined8 *)(*plVar3 + 0x7c0));
    return fVar5;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80c == '\0') {
    fVar5 = (float)il2cpp_runtime_helper_023445d0(&"ProgressBar");
    g_data_057ad80c = '\x01';
  }
  return fVar5;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetPercentage
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float percentage, const MethodInfo* method);
// 0x41eca00

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float percentage,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields)._progressBar;
  if (pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    fVar3 = 100.0;
    if (percentage <= 100.0) {
      fVar3 = percentage;
    }
    fVar1 = *(float *)&(pUVar2->fields).m_Progress;
    (*(pUVar2->klass->vtable)._104_set_value.methodPtr)
              (((*(float *)((long)&(pUVar2->fields).m_Progress + 4) - fVar1) *
               (float)(-(uint)(0.0 <= percentage) & (uint)fVar3)) / 100.0 + fVar1,pUVar2,
               (pUVar2->klass->vtable)._104_set_value.method);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad80c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    g_data_057ad80c = '\x01';
  }
  return "ProgressBar";
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41eca70

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad80c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    g_data_057ad80c = '\x01';
  }
  return "ProgressBar";
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ecaa0

bool_conflict
CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ecab0

bool_conflict
CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x41ecac0

bool_conflict
CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProgressBarBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x41ecad0

void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *pSVar10;
  CustomLogic_CLPropertyBinding_T__o *pCVar11;
  System_Func_T__object____object__o *pSVar12;
  CustomLogic_CLMethodBinding_T__o *pCVar13;
  System_ArgumentException_o **ppSVar14;
  UnityEngine_UIElements_ChangeEvent_float__o *method_00;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCVar15;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_48;
  System_ArgumentException_o *pSStack_40;
  undefined8 uStack_30;
  UnityEngine_UIElements_ChangeEvent_float__o *pUStack_28;
  CustomLogic_CustomLogicProgressBarBuiltin_o *pCStack_20;
  
  method_00 = evt;
  pCVar15 = __this;
  if (g_data_057ad80d == '\0') {
    pCVar15 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)&MethodInfo_Single_get_newValue;
    pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41ecaef;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad80d = '\x01';
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
              (__this,(evt->fields)._newValue_k__BackingField,(MethodInfo *)method_00);
    return;
  }
  pCStack_20 = (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x41ecb14;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pUStack_28 = evt;
  pCStack_20 = __this;
  il2cpp_runtime_helper_01f681a0();
  uStack_30 = CONCAT44(*(undefined4 *)&(pCVar15->fields).Variables,(undefined4)uStack_30);
  pSVar5 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicProgressBarBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this_00,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicProgressBarBuiltin_CreateInstance);
  pSVar8 = __this_00;
  pSStack_48 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar14 = &pSStack_48;
  pSStack_40 = __this_00;
  if (g_data_057ad80e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"OnValueChanged");
    il2cpp_runtime_helper_023445d0(&"SetValueWithoutNotify");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"HighValue");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"GetPercentage");
    il2cpp_runtime_helper_023445d0(&"SetPercentage");
    il2cpp_runtime_helper_023445d0(&"LowValue");
    g_data_057ad80e = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x8991c1ec) {
    if (uVar3 < 0x24d471aa) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_48 = pSStack_40;
          if (g_data_057ad811 == '\0') {
            pSStack_40 = message;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__LowValue_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__LowValue_g____setter_4_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
            g_data_057ad811 = '\x01';
            message = pSStack_40;
          }
          pSStack_40 = message;
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
          System_Func_object__object____ctor();
          pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
          System_Action_object__object____ctor();
          pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
          return;
        }
      }
      else if ((uVar3 == 0x24d471a9) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Title",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar14 = (System_ArgumentException_o **)&uStack_30;
          pSVar8 = pSStack_40;
        }
        else {
          ppSVar14 = (System_ArgumentException_o **)&uStack_30;
          pSVar8 = pSStack_40;
        }
        goto CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title;
      }
    }
    else if (uVar3 == 0x8991c1eb) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetPercentage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = pSStack_40;
        if (g_data_057ad816 == '\0') {
          pSStack_40 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetPercentage_b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad816 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = message;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        return;
      }
    }
    else if ((uVar3 == 0x4c979c42) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"HighValue",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad812 == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HighValue_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HighValue_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
        g_data_057ad812 = '\x01';
        message = pSStack_40;
      }
      pSStack_40 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
      return;
    }
  }
  else if (uVar3 < 0xd1dd43b6) {
    if (uVar3 == 0xd147f96a) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Value",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = pSStack_40;
        if (g_data_057ad810 == '\0') {
          pSStack_40 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Value_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Value_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
          g_data_057ad810 = '\x01';
          message = pSStack_40;
        }
        pSStack_40 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
        return;
      }
    }
    else if ((uVar3 == 0xd1dd43b5) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetValueWithoutNotify",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad814 == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetValueWithoutNotify_b__7);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad814 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = message;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
      }
      pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return;
    }
  }
  else if (uVar3 == 0xda3ade4f) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"GetPercentage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_48 = pSStack_40;
      if (g_data_057ad815 == '\0') {
        pSStack_40 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__GetPercentage_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad815 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = message;
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
      }
      pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_48 = pSStack_40;
    if (g_data_057ad813 == '\0') {
      pSStack_40 = message;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__OnValueChanged_b__6_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad813 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_40 = message;
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
      pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
    }
    pCVar13 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    return;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicProgressBarBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title:
  *(undefined8 *)((long)ppSVar14 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar14 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar14 + -0x18) = pSVar8;
  if (g_data_057ad80f == '\0') {
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ecfba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ecfc6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Title_g____getter_2_0);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ecfd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Title_g____setter_2_1);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ecfde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ecfea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ecff6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
    g_data_057ad80f = '\x01';
  }
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ed00c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicProgressBarBuiltin_object);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ed025;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ed034;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicProgressBarBuiltin_object);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ed04d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ed05c;
  pCVar11 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x41ed077;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuiltin);
  return;
}


