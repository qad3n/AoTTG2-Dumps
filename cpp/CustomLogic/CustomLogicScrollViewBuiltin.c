// Type: CustomLogic.CustomLogicScrollViewBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollViewBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScrollViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ee590

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCVar11;
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
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicScrollViewBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad823 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ScrollOffset");
    il2cpp_runtime_helper_023445d0(&"ScrollDecelerationRate");
    il2cpp_runtime_helper_023445d0(&"VerticalScrollEnabled");
    il2cpp_runtime_helper_023445d0(&"ScrollToTop");
    il2cpp_runtime_helper_023445d0(&"ScrollToBottom");
    il2cpp_runtime_helper_023445d0(&"Elasticity");
    il2cpp_runtime_helper_023445d0(&"HorizontalScrollEnabled");
    il2cpp_runtime_helper_023445d0(&"SetScrollDecelerationRate");
    il2cpp_runtime_helper_023445d0(&"SetScrollOffset");
    il2cpp_runtime_helper_023445d0(&"MouseWheelScrollSize");
    g_data_057ad823 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x7558c33d) {
    if (uVar3 < 0x3d05784e) {
      if (uVar3 == 0x28129cd) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetScrollOffset",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ad82b == '\0') {
            pSStack_28 = message;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetScrollOffset_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad82b = '\x01';
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
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
          }
          pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x3d05784d) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ScrollDecelerationRate",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad825 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScrollDecelerationRate_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScrollDecelerationRate_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
          g_data_057ad825 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        System_Func_object__object____ctor();
        pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        System_Action_object__object____ctor();
        pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x53995e54) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Elasticity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad829 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Elasticity_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad829 = '\x01';
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x6af069af) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SetScrollDecelerationRate",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad82a == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetScrollDecelerationRate);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad82a = '\x01';
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x7558c33c) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ScrollToTop",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad82c == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ScrollToTop_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad82c = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
      }
      pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0xf0c8d07a) {
    if (uVar3 == 0x8e3d182a) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ScrollToBottom",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ad82d == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ScrollToBottom_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad82d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = message;
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
        }
        pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0xf0c8d079) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"HorizontalScrollEnabled",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad827 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorizontalScrollEnabled);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HorizontalScrollEnabled_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        g_data_057ad827 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xf2482abb) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"MouseWheelScrollSize",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad826 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MouseWheelScrollSize_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__MouseWheelScrollSize_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        g_data_057ad826 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0xfaaf0aaf) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"VerticalScrollEnabled",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad828 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VerticalScrollEnabled_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__VerticalScrollEnabled_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        g_data_057ad828 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor();
      pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
      System_Action_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0xfe24aa77) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ScrollOffset",(MethodInfo *)0x0),
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
    goto CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicScrollViewBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,(System_String_o *)message,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset:
  *(undefined8 *)((long)ppSVar13 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x18) = pSVar8;
  if (g_data_057ad824 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeafa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb06;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScrollOffset_g____getter);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScrollOffset_g____setter_2);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb1e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb2a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad824 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb4c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb65;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb74;
  pSVar10 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb8d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eeb9c;
  pCVar11 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x41eebb7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,pSVar10,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41efbd0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad834 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad834 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41efc40

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Elasticity>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41efc50

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__Elasticity_b__7_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  Il2CppObject *extraout_RAX;
  UnityEngine_UIElements_VisualElement_o *pUVar5;
  Il2CppObject *extraout_RAX_00;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  long lVar6;
  long extraout_RDX;
  UnityEngine_UIElements_VisualElement_o *pUVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  UnityEngine_UIElements_ScrollView_o *pUVar9;
  long *__this_02;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_30;
  System_Object_array *pSStack_28;
  
  pUVar5 = (UnityEngine_UIElements_VisualElement_o *)__c;
  __this_02 = (long *)__this;
  if (g_data_057ad835 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    __this_02 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad835 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041efcd1:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __a = (System_Object_array *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = MethodInfo_Int32_ConvertTo_Int32;
    __this_02 = (long *)__a;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      ((Il2CppObject *)__a,(MethodInfo_24EE950 *)MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      if (g_data_057ad821 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
        g_data_057ad821 = '\x01';
      }
      handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      uStack_30 = CONCAT44(value,(undefined4)uStack_30);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        uStack_30 = CONCAT44(uStack_30._4_4_,value);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_30);
        pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
        pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
        uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
        System_ArgumentException___ctor_3c12490(__this_01,pSVar3,(MethodInfo *)0x0);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
        il2cpp_runtime_helper_022b2b10();
      }
      else {
        pUVar8 = (__c->fields)._scrollView;
        __this_01 = (System_ArgumentException_o *)0x0;
        if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
          UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(pUVar8,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__c;
        }
      }
      fVar10 = (float)il2cpp_runtime_helper_022b2c90();
      pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_01->fields)._HResult;
      if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        fVar12 = 1.0;
        if (fVar10 <= 1.0) {
          fVar12 = fVar10;
        }
        UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
                  (pUVar8,(float)(-(uint)(0.0 <= fVar10) & (uint)fVar12),(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
      il2cpp_runtime_helper_022b2c90();
      pUVar9 = pUVar8;
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar8->fields).m_RenderHints,
         pUVar9 = (UnityEngine_UIElements_ScrollView_o *)0x0,
         __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
        UnityEngine_UIElements_ScrollView__set_scrollOffset
                  (__this_00,(UnityEngine_Vector2_o)pIVar2[3].klass,(MethodInfo *)0x0);
        return (Il2CppObject *)pUVar8;
      }
      il2cpp_runtime_helper_022b2c90();
      pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
      if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UVar11 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
        UnityEngine_UIElements_ScrollView__set_scrollOffset
                  (pUVar8,(UnityEngine_Vector2_o)(UVar11.fields & 0xffffffff),(MethodInfo *)0x0);
        return extraout_RAX;
      }
      il2cpp_runtime_helper_022b2c90();
      pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
      if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        pUVar5 = (UnityEngine_UIElements_VisualElement_o *)
                 (*(pUVar8->klass->vtable)._97_get_contentContainer.methodPtr)
                           (pUVar8,(pUVar8->klass->vtable)._97_get_contentContainer.method);
        UnityEngine_UIElements_ScrollView__ScrollTo(pUVar8,pUVar5,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad822 == '\0') {
        il2cpp_runtime_helper_023445d0(&"ScrollView");
        g_data_057ad822 = '\x01';
      }
      return "ScrollView";
    }
    goto label_041efcd1;
  }
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar6 = auVar13._8_8_;
  uStack_30 = auVar13._0_8_;
  pUVar7 = pUVar5;
  pSStack_28 = __a;
  if (g_data_057ad836 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this_02 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad836 = '\x01';
  }
  if (lVar6 == 0) {
label_041efd82:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar6 + 0x18) != 0) {
    __this_02 = *(long **)(lVar6 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = MethodInfo_Single_ConvertTo_Single;
    fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       ((Il2CppObject *)__this_02,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((pUVar5 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
       (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar5->fields).m_RenderHints,
       __this_02 = (long *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      fVar12 = 1.0;
      if (fVar10 <= 1.0) {
        fVar12 = fVar10;
      }
      UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
                (pUVar8,(float)(-(uint)(0.0 <= fVar10) & (uint)fVar12),(MethodInfo *)0x0);
      return (Il2CppObject *)pUVar5;
    }
    goto label_041efd82;
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar5 = pUVar7;
  if (g_data_057ad837 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    __this_02 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad837 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041efe2a;
    __this_02 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu;
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this_02,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    if (((pUVar7 != (UnityEngine_UIElements_VisualElement_o *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) &&
       (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints,
       __this_02 = (long *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      UnityEngine_UIElements_ScrollView__set_scrollOffset
                (pUVar8,(UnityEngine_Vector2_o)pIVar2[3].klass,(MethodInfo *)0x0);
      return (Il2CppObject *)pUVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041efe2a:
  il2cpp_runtime_helper_022b2ca0();
  if ((pUVar5 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar5->fields).m_RenderHints,
     pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UVar11 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar11.fields & 0xffffffff),(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pUVar5 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar5->fields).m_RenderHints,
     pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pUVar5 = (UnityEngine_UIElements_VisualElement_o *)
             (*(pUVar8->klass->vtable)._97_get_contentContainer.methodPtr)
                       (pUVar8,(pUVar8->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar8,pUVar5,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad838 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad838 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_02,pUVar5,(MethodInfo *)0x0);
  ((System_Object_array *)__this_02)->m_Items[8] = (Il2CppObject *)pUVar5;
  il2cpp_runtime_helper_022b4080(((System_Object_array *)__this_02)->m_Items + 8,pUVar5);
  *(undefined1 *)(((System_Object_array *)__this_02)->m_Items + 10) = 0;
  pIVar2 = ((System_Object_array *)__this_02)->m_Items[8];
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar1 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)pIVar2,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar1);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollDecelerationRate>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41efce0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollDecelerationRate_b__8_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_UIElements_VisualElement_o *pUVar4;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  long extraout_RDX;
  UnityEngine_UIElements_VisualElement_o *visualElement;
  long *__this_00;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  float fVar7;
  
  pUVar4 = (UnityEngine_UIElements_VisualElement_o *)__c;
  __this_00 = (long *)__this;
  if (g_data_057ad836 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this_00 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad836 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041efd82:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this_00 = (long *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar4 = MethodInfo_Single_ConvertTo_Single;
    fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._scrollView, __this_00 = (long *)0x0,
       pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
                (pUVar1,(float)(-(uint)(0.0 <= fVar5) & (uint)fVar7),(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
    goto label_041efd82;
  }
  il2cpp_runtime_helper_022b2ca0();
  visualElement = pUVar4;
  if (g_data_057ad837 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    __this_00 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad837 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041efe2a;
    __this_00 = *(long **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    visualElement = MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu;
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this_00,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    if (((pUVar4 != (UnityEngine_UIElements_VisualElement_o *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) &&
       (pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar4->fields).m_RenderHints,
       __this_00 = (long *)0x0, pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      UnityEngine_UIElements_ScrollView__set_scrollOffset
                (pUVar1,(UnityEngine_Vector2_o)pIVar3[3].klass,(MethodInfo *)0x0);
      return (Il2CppObject *)pUVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041efe2a:
  il2cpp_runtime_helper_022b2ca0();
  if ((visualElement != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(visualElement->fields).m_RenderHints,
     pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UVar6 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar1,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(UVar6.fields & 0xffffffff),(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((visualElement != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(visualElement->fields).m_RenderHints,
     pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pUVar4 = (UnityEngine_UIElements_VisualElement_o *)
             (*(pUVar1->klass->vtable)._97_get_contentContainer.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar1,pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad838 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad838 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this_00,visualElement,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this_00 + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)visualElement;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this_00 + 0x60),visualElement);
  *(undefined1 *)
   &(((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this_00 + 0x60))->fields).Enabled = 0;
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this_00 + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar2 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollOffset>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41efd90

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__SetScrollOffset_b__9_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_UIElements_VisualElement_o *pUVar4;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  long *plVar5;
  UnityEngine_Vector2_o UVar6;
  
  pUVar4 = (UnityEngine_UIElements_VisualElement_o *)__c;
  if (g_data_057ad837 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    plVar5 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad837 = '\x01';
    __this = (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *)plVar5;
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041efe2a;
    __this = (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar4 = MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu;
    pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    if (((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) && (pIVar3 != (Il2CppObject *)0x0)) &&
       (pUVar1 = (__c->fields)._scrollView,
       __this = (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *)0x0,
       pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      UnityEngine_UIElements_ScrollView__set_scrollOffset
                (pUVar1,(UnityEngine_Vector2_o)pIVar3[3].klass,(MethodInfo *)0x0);
      return (Il2CppObject *)__c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041efe2a:
  il2cpp_runtime_helper_022b2ca0();
  if ((pUVar4 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar4->fields).m_RenderHints,
     pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UVar6 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar1,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(UVar6.fields & 0xffffffff),(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pUVar4 != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar4->fields).m_RenderHints,
     pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pUVar4 = (UnityEngine_UIElements_VisualElement_o *)
             (*(pUVar1->klass->vtable)._97_get_contentContainer.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar1,pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad838 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad838 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,pUVar4,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)pUVar4;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),pUVar4);
  *(undefined1 *)&(((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->fields).Enabled =
       0;
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar2 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToTop>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToTop_b__10_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41efe30

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToTop_b__10_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  bool_conflict bVar2;
  UnityEngine_UIElements_VisualElement_o *child;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  UnityEngine_Vector2_o UVar3;
  
  if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar1 = (__c->fields)._scrollView, pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar1,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(UVar3.fields & 0xffffffff),(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((UnityEngine_UIElements_VisualElement_o *)__c != (UnityEngine_UIElements_VisualElement_o *)0x0) &&
     (pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)
                &(((UnityEngine_UIElements_VisualElement_o *)__c)->fields).m_RenderHints,
     pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar1->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar1,child,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad838 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad838 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)__c,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),__c);
  *(undefined1 *)&(((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->fields).Enabled =
       0;
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar2 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar2);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToBottom>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0 (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicScrollViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41efe70

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_____CreateMethodBinding__ScrollToBottom_b__11_0
          (CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicScrollViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  CustomLogic_CustomLogicVisualElementBuiltin_c *control;
  bool_conflict bVar1;
  UnityEngine_UIElements_VisualElement_o *child;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  undefined4 extraout_var;
  
  if ((__c != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields)._scrollView, __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(__this_00->klass->vtable)._97_get_contentContainer.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad838 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ctor_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    g_data_057ad838 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)__c,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass =
       (CustomLogic_CustomLogicVisualElementBuiltin_c *)__c;
  il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60),__c);
  *(undefined1 *)&(((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->fields).Enabled =
       0;
  control = ((CustomLogic_CustomLogicVisualElementBuiltin_o *)((long)__this + 0x60))->klass;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)il2cpp_runtime_helper_023052d0(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor();
  bVar1 = UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
                    ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return (Il2CppObject *)CONCAT44(extraout_var,bVar1);
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41ee620

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad823 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ScrollOffset");
    il2cpp_runtime_helper_023445d0(&"ScrollDecelerationRate");
    il2cpp_runtime_helper_023445d0(&"VerticalScrollEnabled");
    il2cpp_runtime_helper_023445d0(&"ScrollToTop");
    il2cpp_runtime_helper_023445d0(&"ScrollToBottom");
    il2cpp_runtime_helper_023445d0(&"Elasticity");
    il2cpp_runtime_helper_023445d0(&"HorizontalScrollEnabled");
    il2cpp_runtime_helper_023445d0(&"SetScrollDecelerationRate");
    il2cpp_runtime_helper_023445d0(&"SetScrollOffset");
    il2cpp_runtime_helper_023445d0(&"MouseWheelScrollSize");
    g_data_057ad823 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7558c33d) {
    if (uVar3 < 0x3d05784e) {
      if (uVar3 == 0x28129cd) {
        bVar4 = System_String__op_Equality(name,"SetScrollOffset",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad82b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetScrollOffset_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ad82b = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x3d05784d) &&
              (bVar4 = System_String__op_Equality(name,"ScrollDecelerationRate",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad825 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScrollDecelerationRate_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScrollDecelerationRate_g);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
          g_data_057ad825 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x53995e54) {
      bVar4 = System_String__op_Equality(name,"Elasticity",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad829 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Elasticity_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad829 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x6af069af) {
      bVar4 = System_String__op_Equality(name,"SetScrollDecelerationRate",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad82a == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetScrollDecelerationRate);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad82a = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x7558c33c) &&
            (bVar4 = System_String__op_Equality(name,"ScrollToTop",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad82c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ScrollToTop_b__10_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad82c = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xf0c8d07a) {
    if (uVar3 == 0x8e3d182a) {
      bVar4 = System_String__op_Equality(name,"ScrollToBottom",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad82d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ScrollToBottom_b__11_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ad82d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xf0c8d079) &&
            (bVar4 = System_String__op_Equality(name,"HorizontalScrollEnabled",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad827 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorizontalScrollEnabled);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HorizontalScrollEnabled_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        g_data_057ad827 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf2482abb) {
    bVar4 = System_String__op_Equality(name,"MouseWheelScrollSize",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad826 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MouseWheelScrollSize_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__MouseWheelScrollSize_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        g_data_057ad826 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xfaaf0aaf) {
    bVar4 = System_String__op_Equality(name,"VerticalScrollEnabled",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad828 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VerticalScrollEnabled_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__VerticalScrollEnabled_g);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
        g_data_057ad828 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xfe24aa77) &&
          (bVar4 = System_String__op_Equality(name,"ScrollOffset",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicScrollViewBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad824 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeafa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb06;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScrollOffset_g____getter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScrollOffset_g____setter_2);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb1e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb2a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad824 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb4c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb65;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb74;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb8d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eeb9c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eebb7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset (const MethodInfo* method);
// 0x41eeae0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollOffset(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad824 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScrollOffset_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScrollOffset_g____setter_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad824 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollDecelerationRate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate (const MethodInfo* method);
// 0x41eebc0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__ScrollDecelerationRate
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad825 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScrollDecelerationRate_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScrollDecelerationRate_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad825 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__MouseWheelScrollSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize (const MethodInfo* method);
// 0x41eeca0

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__MouseWheelScrollSize
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad826 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__MouseWheelScrollSize_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__MouseWheelScrollSize_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad826 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__HorizontalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled (const MethodInfo* method);
// 0x41eed80

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__HorizontalScrollEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad827 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__HorizontalScrollEnabled);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__HorizontalScrollEnabled_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad827 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__VerticalScrollEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled (const MethodInfo* method);
// 0x41eee60

CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreatePropertyBinding__VerticalScrollEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad828 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__VerticalScrollEnabled_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__VerticalScrollEnabled_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
    g_data_057ad828 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicScrollViewBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicScrollViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__Elasticity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity (const MethodInfo* method);
// 0x41eef40

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__Elasticity(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad829 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Elasticity_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad829 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollDecelerationRate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate (const MethodInfo* method);
// 0x41ef090

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollDecelerationRate
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad82a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetScrollDecelerationRate);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad82a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollOffset
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset (const MethodInfo* method);
// 0x41ef1e0

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__SetScrollOffset(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad82b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetScrollOffset_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad82b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToTop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop (const MethodInfo* method);
// 0x41ef330

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToTop(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad82c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ScrollToTop_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad82c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToBottom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o* CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom (const MethodInfo* method);
// 0x41ef480

CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings____CreateMethodBinding__ScrollToBottom(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *__this;
  
  if (g_data_057ad82d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ScrollToBottom_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad82d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicScrollViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicScrollViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicScrollViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicScrollViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41ef5d0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_Collections_Generic_HashSet_Slot_T__array *__this;
  UnityEngine_Vector2_o UVar3;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_Type_o *enumType;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  System_Collections_Generic_HashSet_object__o *__this_01;
  CustomLogic_CustomLogicVector2Builtin_o *__this_02;
  Il2CppObject *pIVar9;
  MethodInfo *method_00;
  uint value;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EEB40 *obj_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *obj_01;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_03;
  MethodInfo_24EE570 *obj_02;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  long lVar12;
  MethodInfo_33E0570 *pMVar13;
  long lVar14;
  MethodInfo_24EEB40 *pMVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_d8;
  MethodInfo_24EE570 *pMStack_d0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  MethodInfo_24EEB40 *pMStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  MethodInfo_33E0570 *pMStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  System_Collections_Generic_HashSet_object__o *pSStack_40;
  
  if (g_data_057ad82e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ScrollOffset");
    il2cpp_runtime_helper_023445d0(&"ScrollDecelerationRate");
    il2cpp_runtime_helper_023445d0(&"VerticalScrollEnabled");
    il2cpp_runtime_helper_023445d0(&"ScrollToTop");
    il2cpp_runtime_helper_023445d0(&"ScrollToBottom");
    il2cpp_runtime_helper_023445d0(&"Elasticity");
    il2cpp_runtime_helper_023445d0(&"HorizontalScrollEnabled");
    il2cpp_runtime_helper_023445d0(&"SetScrollDecelerationRate");
    il2cpp_runtime_helper_023445d0(&"SetScrollOffset");
    il2cpp_runtime_helper_023445d0(&"MouseWheelScrollSize");
    g_data_057ad82e = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  pSVar11 = __this_01;
  System_Collections_Generic_HashSet_object____ctor(__this_01,MethodInfo_HashSet_1_System_String);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_01,"ScrollOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"ScrollDecelerationRate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"MouseWheelScrollSize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"HorizontalScrollEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"VerticalScrollEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Elasticity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"SetScrollDecelerationRate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"SetScrollOffset",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"ScrollToTop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"ScrollToBottom",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_01;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ad820 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector2Builtin);
      g_data_057ad820 = '\x01';
    }
    __this = pSVar11[1].fields._slots;
    __this_01 = pSVar11;
    if (__this != (System_Collections_Generic_HashSet_Slot_T__array *)0x0) {
      UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset
                        ((UnityEngine_UIElements_ScrollView_o *)__this,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector2Builtin);
      CustomLogic_CustomLogicVector2Builtin___ctor_3fcc5f0(__this_02,UVar3,(MethodInfo *)0x0);
      return;
    }
  }
  lVar12 = 0;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pSStack_40 = __this_01;
  if (g_data_057ad82f == '\0') {
    uStack_50 = 0x41ef85f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    uStack_50 = 0x41ef86b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad82f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_50 = 0x41ef88a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_50 = 0x41ef89c;
  obj_00 = MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu;
  pMVar13 = obj;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
  if (((lVar12 != 0) && (pIVar9 != (Il2CppObject *)0x0)) &&
     (pMVar13 = (MethodInfo_33E0570 *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60),(UnityEngine_Vector2_o)pIVar9[3].klass
               ,(MethodInfo *)0x0);
    return;
  }
  uStack_50 = 0x41ef8c7;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar13 != (MethodInfo_33E0570 *)0x0) &&
     ((UnityEngine_UIElements_ScrollView_o *)pMVar13[1].virtualMethodPointer !=
      (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pMStack_58 = (MethodInfo_33E0570 *)0x41ef8e6;
    fVar16 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate
                       ((UnityEngine_UIElements_ScrollView_o *)pMVar13[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    uStack_50 = CONCAT44(fVar16,(undefined4)uStack_50);
    pMStack_58 = (MethodInfo_33E0570 *)0x41ef901;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_50 + 4);
    return;
  }
  lVar14 = 0;
  pMStack_58 = (MethodInfo_33E0570 *)0x41ef908;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  lStack_60 = lVar12;
  pMStack_58 = obj;
  if (g_data_057ad830 == '\0') {
    uStack_70 = 0x41ef92f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_70 = 0x41ef93b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad830 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_70 = 0x41ef95a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = 0x41ef96c;
  obj_01 = MethodInfo_Single_ConvertTo_Single;
  pMVar15 = obj_00;
  fVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar14 != 0) &&
     (pMVar15 = (MethodInfo_24EEB40 *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar14 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar14 + 0x60),fVar16,(MethodInfo *)0x0);
    return;
  }
  uStack_70 = 0x41ef98d;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar15 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_UIElements_ScrollView_o *)pMVar15[1].virtualMethodPointer !=
      (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pMStack_78 = (MethodInfo_24EEB40 *)0x41ef9a6;
    fVar16 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize
                       ((UnityEngine_UIElements_ScrollView_o *)pMVar15[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    uStack_70 = CONCAT44(fVar16,(undefined4)uStack_70);
    pMStack_78 = (MethodInfo_24EEB40 *)0x41ef9c1;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_70 + 4);
    return;
  }
  lVar12 = 0;
  pMStack_78 = (MethodInfo_24EEB40 *)0x41ef9c8;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  lStack_80 = lVar14;
  pMStack_78 = obj_00;
  if (g_data_057ad831 == '\0') {
    uStack_90 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_90 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_90 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_90 = 0x41efa2c;
  __this_03 = MethodInfo_Single_ConvertTo_Single;
  fVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj_01,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar12 != 0) &&
     (obj_01 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60),fVar16,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = 0x41efa4d;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar10 = (obj_01->fields)._scrollView, pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    uStack_90 = CONCAT17(*(int *)&(pUVar10->fields).m_ContentContainer - 1U < 2,(undefined7)uStack_90);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_03,MethodInfo_Boolean_ConvertTo_Boolean);
  if (obj_01 == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_03 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_03->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffff57);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_d0 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_d0 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_d0 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_d0 = (MethodInfo_24EE570 *)0x41efbac;
    uVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_02,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_03 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_03,uVar6 & 0xff,method_00);
      return;
    }
    pMStack_d0 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_d8 = __this_03;
    pMStack_d0 = obj_02;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar9;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar9);
    return;
  }
  value = uVar6 & 0xff;
  pUVar10 = (obj_01->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar6 == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
      pUVar10 = (obj_01->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar10,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar4 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar10,(MethodInfo *)0x0)
        ;
        if (iVar4 == 2) {
          pUVar10 = (obj_01->fields)._scrollView;
          if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar10 = (obj_01->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar12 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
  if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
    pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
    if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar4 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar10,(MethodInfo *)0x0);
    if (iVar4 == 2) {
      pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
      if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar14 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = (MethodInfo_24EE570 *)lVar12;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_d8 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value,(undefined4)uStack_d8);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_Enum__IsDefined(enumType,pIVar9,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    uStack_d8 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_d8._4_4_,value);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_d8);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar7 = System_String__Format(pSVar7,pIVar9,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar7,(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar14 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar14 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar17 = 1.0;
    if (fVar16 <= 1.0) {
      fVar17 = fVar16;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar10,(float)(-(uint)(0.0 <= fVar16) & (uint)fVar17),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar9 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints,
     pUVar10 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar9[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar3.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar10->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar10,(pUVar10->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar10,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x41ef7d0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____getter_2_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *__this;
  UnityEngine_Vector2_o UVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_UIElements_VisualElement_o *child;
  Il2CppObject *extraout_RAX_06;
  CustomLogic_CustomLogicVector2Builtin_o *__this_01;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX_07;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  Il2CppObject *extraout_RAX_10;
  MethodInfo *method_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *unaff_RBX;
  uint value_00;
  MethodInfo_24EEB40 *obj;
  CustomLogic_CustomLogicScrollViewBuiltin_o *obj_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_02;
  MethodInfo_24EE570 *obj_01;
  UnityEngine_UIElements_ScrollView_o *pUVar9;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  long lVar11;
  MethodInfo *pMVar12;
  long lVar13;
  MethodInfo_24EEB40 *pMVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_c0;
  MethodInfo_24EE570 *pMStack_b8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  MethodInfo_24EEB40 *pMStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  MethodInfo *pMStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCStack_28;
  
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    if (g_data_057ad820 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector2Builtin);
      g_data_057ad820 = '\x01';
    }
    pUVar9 = (__i->fields)._scrollView;
    unaff_RBX = __i;
    if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UVar2 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar9,(MethodInfo *)0x0);
      __this_01 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector2Builtin);
      CustomLogic_CustomLogicVector2Builtin___ctor_3fcc5f0(__this_01,UVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_01;
    }
  }
  lVar11 = 0;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = unaff_RBX;
  if (g_data_057ad82f == '\0') {
    uStack_38 = 0x41ef85f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    uStack_38 = 0x41ef86b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad82f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_38 = 0x41ef88a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_38 = 0x41ef89c;
  obj = MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu;
  pMVar12 = method;
  pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
  if (((lVar11 != 0) && (pIVar8 != (Il2CppObject *)0x0)) &&
     (pMVar12 = (MethodInfo *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),(UnityEngine_Vector2_o)pIVar8[3].klass
               ,(MethodInfo *)0x0);
    return extraout_RAX_07;
  }
  uStack_38 = 0x41ef8c7;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar12 != (MethodInfo *)0x0) &&
     ((UnityEngine_UIElements_ScrollView_o *)pMVar12[1].virtualMethodPointer !=
      (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pMStack_40 = (MethodInfo *)0x41ef8e6;
    fVar15 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate
                       ((UnityEngine_UIElements_ScrollView_o *)pMVar12[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    uStack_38 = CONCAT44(fVar15,(undefined4)uStack_38);
    pMStack_40 = (MethodInfo *)0x41ef901;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_38 + 4);
    return pIVar8;
  }
  lVar13 = 0;
  pMStack_40 = (MethodInfo *)0x41ef908;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  lStack_48 = lVar11;
  pMStack_40 = method;
  if (g_data_057ad830 == '\0') {
    uStack_58 = 0x41ef92f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_58 = 0x41ef93b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad830 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_58 = 0x41ef95a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = 0x41ef96c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar14 = obj;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar13 != 0) &&
     (pMVar14 = (MethodInfo_24EEB40 *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60),fVar15,(MethodInfo *)0x0);
    return extraout_RAX_08;
  }
  uStack_58 = 0x41ef98d;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar14 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_UIElements_ScrollView_o *)pMVar14[1].virtualMethodPointer !=
      (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pMStack_60 = (MethodInfo_24EEB40 *)0x41ef9a6;
    fVar15 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize
                       ((UnityEngine_UIElements_ScrollView_o *)pMVar14[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    uStack_58 = CONCAT44(fVar15,(undefined4)uStack_58);
    pMStack_60 = (MethodInfo_24EEB40 *)0x41ef9c1;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_58 + 4);
    return pIVar8;
  }
  lVar11 = 0;
  pMStack_60 = (MethodInfo_24EEB40 *)0x41ef9c8;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar13;
  pMStack_60 = obj;
  if (g_data_057ad831 == '\0') {
    uStack_78 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_78 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_78 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = 0x41efa2c;
  __this_02 = MethodInfo_Single_ConvertTo_Single;
  fVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar11 != 0) &&
     (obj_00 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),fVar15,(MethodInfo *)0x0);
    return extraout_RAX_09;
  }
  uStack_78 = 0x41efa4d;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar9 = (obj_00->fields)._scrollView, pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    uStack_78 = CONCAT17(*(int *)&(pUVar9->fields).m_ContentContainer - 1U < 2,(undefined7)uStack_78);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_02,MethodInfo_Boolean_ConvertTo_Boolean);
  if (obj_00 == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_02 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_02->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffff6f);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_b8 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_b8 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_b8 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_b8 = (MethodInfo_24EE570 *)0x41efbac;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_02 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_02,uVar5 & 0xff,method_00);
      return extraout_RAX_10;
    }
    pMStack_b8 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_c0 = __this_02;
    pMStack_b8 = obj_01;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
    return pIVar8;
  }
  value_00 = uVar5 & 0xff;
  pUVar9 = (obj_00->fields)._scrollView;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar5 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar9,2,(MethodInfo *)0x0);
      pUVar9 = (obj_00->fields)._scrollView;
      if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar9->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar9,0,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
        return extraout_RAX;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar9->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar9,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar9,(MethodInfo *)0x0);
        if (iVar3 == 2) {
          pUVar9 = (obj_00->fields)._scrollView;
          if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar9 = (obj_00->fields)._scrollView;
      if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar9,0,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
  }
label_041ee266:
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)(lVar13 + 0x60);
  if (lVar11 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar11 >> 8),(*(uint *)(lVar11 + 0x448) & 0xfffffffd) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60);
  if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar9,2,(MethodInfo *)0x0);
    pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60);
    if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar9->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar9,1,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
      return extraout_RAX_02;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar9->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar9,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar9,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60);
      if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60),0,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
label_041ee316:
  pIVar8 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = (MethodInfo_24EE570 *)lVar13;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_c0 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value_00,(undefined4)uStack_c0);
  value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c0 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_c0 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_c0._4_4_,value_00);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_c0);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar6 = System_String__Format(pSVar6,pIVar8,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar6,(MethodInfo *)0x0);
    value = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pIVar8[6].klass != (Il2CppClass *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                ((UnityEngine_UIElements_ScrollView_o *)pIVar8[6].klass,value_00,(MethodInfo *)0x0);
      return pIVar8;
    }
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar16 = 1.0;
    if (fVar15 <= 1.0) {
      fVar16 = fVar15;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar9,(float)(-(uint)(0.0 <= fVar15) & (uint)fVar16),(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar9;
  if ((value != (Il2CppObject *)0x0) &&
     (__this = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints,
     pUVar10 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this,(UnityEngine_Vector2_o)value[3].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar2 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar9,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar9,(UnityEngine_Vector2_o)(UVar2.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar9->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar9,(pUVar9->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar9,child,(MethodInfo *)0x0);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ef840

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollOffset_g____setter_2_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Type_o *enumType;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  UnityEngine_UIElements_VisualElement_o *child;
  Il2CppObject *pIVar9;
  MethodInfo *method_00;
  uint value;
  MethodInfo_24EEB40 *obj;
  CustomLogic_CustomLogicScrollViewBuiltin_o *obj_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_00;
  MethodInfo_24EE570 *obj_01;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  long lVar11;
  MethodInfo_24EEB40 *pMVar12;
  long lVar13;
  float fVar14;
  UnityEngine_Vector2_o UVar15;
  float fVar16;
  undefined8 uStack_a8;
  MethodInfo_24EE570 *pMStack_a0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_24EEB40 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad82f == '\0') {
    uStack_20 = 0x41ef85f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
    uStack_20 = 0x41ef86b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad82f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41ef88a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41ef89c;
  obj = MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu;
  pIVar6 = __v;
  pIVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector2Builtin_ConvertTo_CustomLogicVector2Bu);
  if (((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) && (pIVar9 != (Il2CppObject *)0x0)) &&
     (pUVar10 = (__i->fields)._scrollView, pIVar6 = (Il2CppObject *)0x0,
     pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar10,(UnityEngine_Vector2_o)pIVar9[3].klass,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x41ef8c7;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[6].klass != (Il2CppClass *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x41ef8e6;
    fVar14 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate
                       ((UnityEngine_UIElements_ScrollView_o *)pIVar6[6].klass,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar14,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x41ef901;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar11 = 0;
  pIStack_28 = (Il2CppObject *)0x41ef908;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ad830 == '\0') {
    uStack_40 = 0x41ef92f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x41ef93b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad830 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41ef95a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41ef96c;
  obj_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar12 = obj;
  fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar11 != 0) &&
     (pMVar12 = (MethodInfo_24EEB40 *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),fVar14,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x41ef98d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar12 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_UIElements_ScrollView_o *)pMVar12[1].virtualMethodPointer !=
      (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pMStack_48 = (MethodInfo_24EEB40 *)0x41ef9a6;
    fVar14 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize
                       ((UnityEngine_UIElements_ScrollView_o *)pMVar12[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    uStack_40 = CONCAT44(fVar14,(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EEB40 *)0x41ef9c1;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_40 + 4);
    return;
  }
  lVar13 = 0;
  pMStack_48 = (MethodInfo_24EEB40 *)0x41ef9c8;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar11;
  pMStack_48 = obj;
  if (g_data_057ad831 == '\0') {
    uStack_60 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_60 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x41efa2c;
  __this_00 = MethodInfo_Single_ConvertTo_Single;
  fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj_00,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar13 != 0) &&
     (obj_00 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60),fVar14,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 0x41efa4d;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar10 = (obj_00->fields)._scrollView, pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    uStack_60 = CONCAT17(*(int *)&(pUVar10->fields).m_ContentContainer - 1U < 2,(undefined7)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if (obj_00 == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_00->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffff87);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_a0 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_a0 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_a0 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_a0 = (MethodInfo_24EE570 *)0x41efbac;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_00,uVar5 & 0xff,method_00);
      return;
    }
    pMStack_a0 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_a8 = __this_00;
    pMStack_a0 = obj_01;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
    return;
  }
  value = uVar5 & 0xff;
  pUVar10 = (obj_00->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar5 == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
      pUVar10 = (obj_00->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar10,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar10,(MethodInfo *)0x0)
        ;
        if (iVar3 == 2) {
          pUVar10 = (obj_00->fields)._scrollView;
          if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar10 = (obj_00->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar11 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60);
  if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
    pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60);
    if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar10,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60);
      if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = (MethodInfo_24EE570 *)lVar11;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_a8 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value,(undefined4)uStack_a8);
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_a8 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_a8._4_4_,value);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_a8);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar7 = System_String__Format(pSVar7,pIVar6,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
    System_ArgumentException___ctor_3c12490(__this,pSVar7,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar13 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(__this->fields)._HResult;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar16 = 1.0;
    if (fVar14 <= 1.0) {
      fVar16 = fVar14;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar10,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar16),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints,
     pUVar10 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar6[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar15 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar15.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar10->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar10,(pUVar10->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar10,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x41ef8d0

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *__this;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  uint uVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_UIElements_VisualElement_o *child;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *pIVar7;
  Il2CppObject *extraout_RAX_07;
  Il2CppObject *extraout_RAX_08;
  Il2CppObject *extraout_RAX_09;
  MethodInfo *method_00;
  uint value_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *obj;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_01;
  MethodInfo_24EE570 *obj_00;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  UnityEngine_UIElements_ScrollView_o *pUVar9;
  long lVar10;
  MethodInfo *pMVar11;
  long lVar12;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  float fVar15;
  undefined8 uStack_90;
  MethodInfo_24EE570 *pMStack_88;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar8 = (__i->fields)._scrollView, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(pUVar8,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar7;
  }
  lVar10 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad830 == '\0') {
    uStack_28 = 0x41ef92f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x41ef93b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad830 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41ef95a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41ef96c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pMVar11 = method;
  fVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar10 != 0) &&
     (pMVar11 = (MethodInfo *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),fVar13,(MethodInfo *)0x0);
    return extraout_RAX_07;
  }
  uStack_28 = 0x41ef98d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar11 != (MethodInfo *)0x0) &&
     ((UnityEngine_UIElements_ScrollView_o *)pMVar11[1].virtualMethodPointer !=
      (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pMStack_30 = (MethodInfo *)0x41ef9a6;
    fVar13 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize
                       ((UnityEngine_UIElements_ScrollView_o *)pMVar11[1].virtualMethodPointer,
                        (MethodInfo *)0x0);
    uStack_28 = CONCAT44(fVar13,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x41ef9c1;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar7;
  }
  lVar12 = 0;
  pMStack_30 = (MethodInfo *)0x41ef9c8;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar10;
  pMStack_30 = method;
  if (g_data_057ad831 == '\0') {
    uStack_48 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x41efa2c;
  __this_01 = MethodInfo_Single_ConvertTo_Single;
  fVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar12 != 0) &&
     (obj = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60),fVar13,(MethodInfo *)0x0);
    return extraout_RAX_08;
  }
  uStack_48 = 0x41efa4d;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar8 = (obj->fields)._scrollView, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    uStack_48 = CONCAT17(*(int *)&(pUVar8->fields).m_ContentContainer - 1U < 2,(undefined7)uStack_48);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
    return pIVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if (obj == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_01 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_01->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffff9f);
      return pIVar7;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_88 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_88 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_88 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_88 = (MethodInfo_24EE570 *)0x41efbac;
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_01 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_01,uVar4 & 0xff,method_00);
      return extraout_RAX_09;
    }
    pMStack_88 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_90 = __this_01;
    pMStack_88 = obj_00;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
    return pIVar7;
  }
  value_00 = uVar4 & 0xff;
  pUVar8 = (obj->fields)._scrollView;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar4 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
      pUVar8 = (obj->fields)._scrollView;
      if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar8->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar8,0,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
        return extraout_RAX;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar8 = (obj->fields)._scrollView;
          if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar8 = (obj->fields)._scrollView;
      if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,0,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
  }
label_041ee266:
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar10 = *(long *)(lVar12 + 0x60);
  if (lVar10 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar10 >> 8),(*(uint *)(lVar10 + 0x448) & 0xfffffffd) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
  if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
    pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
    if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar8->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,1,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
      return extraout_RAX_02;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
      if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60),0,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
label_041ee316:
  pIVar7 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_88 = (MethodInfo_24EE570 *)lVar12;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_90 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value_00,(undefined4)uStack_90);
  value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    uStack_90 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_90._4_4_,value_00);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_90);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar7,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    value = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pIVar7[6].klass != (Il2CppClass *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                ((UnityEngine_UIElements_ScrollView_o *)pIVar7[6].klass,value_00,(MethodInfo *)0x0);
      return pIVar7;
    }
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar15 = 1.0;
    if (fVar13 <= 1.0) {
      fVar15 = fVar13;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar8,(float)(-(uint)(0.0 <= fVar13) & (uint)fVar15),(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar8;
  if ((value != (Il2CppObject *)0x0) &&
     (__this = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar8->fields).m_RenderHints,
     pUVar9 = (UnityEngine_UIElements_ScrollView_o *)0x0, __this != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this,(UnityEngine_Vector2_o)value[3].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar14 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar14.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar8->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar8,(pUVar8->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar8,child,(MethodInfo *)0x0);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ef910

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Type_o *enumType;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  UnityEngine_UIElements_VisualElement_o *child;
  MethodInfo *method_00;
  uint value;
  CustomLogic_CustomLogicScrollViewBuiltin_o *obj;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_00;
  MethodInfo_24EE570 *obj_00;
  long lVar9;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  long lVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  float fVar14;
  undefined8 uStack_88;
  MethodInfo_24EE570 *pMStack_80;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ad830 == '\0') {
    uStack_20 = 0x41ef92f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x41ef93b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad830 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41ef95a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41ef96c;
  obj = MethodInfo_Single_ConvertTo_Single;
  pIVar6 = __v;
  fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar10 = (__i->fields)._scrollView, pIVar6 = (Il2CppObject *)0x0,
     pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(pUVar10,fVar12,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x41ef98d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[6].klass != (Il2CppClass *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x41ef9a6;
    fVar12 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize
                       ((UnityEngine_UIElements_ScrollView_o *)pIVar6[6].klass,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar12,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x41ef9c1;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar11 = 0;
  pIStack_28 = (Il2CppObject *)0x41ef9c8;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ad831 == '\0') {
    uStack_40 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41efa2c;
  __this_00 = MethodInfo_Single_ConvertTo_Single;
  fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)obj,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar11 != 0) &&
     (obj = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),fVar12,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x41efa4d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar10 = (obj->fields)._scrollView, pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    uStack_40 = CONCAT17(*(int *)&(pUVar10->fields).m_ContentContainer - 1U < 2,(undefined7)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if (obj == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_00->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffa7);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_80 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_80 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_80 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_80 = (MethodInfo_24EE570 *)0x41efbac;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_00,uVar5 & 0xff,method_00);
      return;
    }
    pMStack_80 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_88 = __this_00;
    pMStack_80 = obj_00;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
    return;
  }
  value = uVar5 & 0xff;
  pUVar10 = (obj->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar5 == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
      pUVar10 = (obj->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar10,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar10,(MethodInfo *)0x0)
        ;
        if (iVar3 == 2) {
          pUVar10 = (obj->fields)._scrollView;
          if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar10 = (obj->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar11 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60);
  if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
    pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60);
    if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar10,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60);
      if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_80 = (MethodInfo_24EE570 *)lVar11;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_88 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value,(undefined4)uStack_88);
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_88 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_88 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_88._4_4_,value);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_88);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar7 = System_String__Format(pSVar7,pIVar6,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
    System_ArgumentException___ctor_3c12490(__this,pSVar7,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
    {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(__this->fields)._HResult;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar10,(float)(-(uint)(0.0 <= fVar12) & (uint)fVar14),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints,
     pUVar10 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar6[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar13 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar13.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar10->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar10,(pUVar10->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar10,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x41ef990

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *__this;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  uint uVar4;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_UIElements_VisualElement_o *child;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *pIVar7;
  Il2CppObject *extraout_RAX_07;
  Il2CppObject *extraout_RAX_08;
  MethodInfo *method_00;
  uint value_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_01;
  MethodInfo_24EE570 *obj;
  long lVar8;
  UnityEngine_UIElements_ScrollView_o *pUVar9;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  long lVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  float fVar14;
  undefined8 uStack_70;
  MethodInfo_24EE570 *pMStack_68;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar9 = (__i->fields)._scrollView, pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(pUVar9,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar7;
  }
  lVar11 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad831 == '\0') {
    uStack_28 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41efa2c;
  __this_01 = MethodInfo_Single_ConvertTo_Single;
  fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar11 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0))
  {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),fVar12,(MethodInfo *)0x0);
    return extraout_RAX_07;
  }
  uStack_28 = 0x41efa4d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_28 = CONCAT17(*(int *)(method[1].virtualMethodPointer + 0x448) - 1U < 2,(undefined7)uStack_28);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if (method == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_01 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_01->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffbf);
      return pIVar7;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_68 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_68 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_68 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MethodInfo_24EE570 *)0x41efbac;
    uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_01 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_01,uVar4 & 0xff,method_00);
      return extraout_RAX_08;
    }
    pMStack_68 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_70 = __this_01;
    pMStack_68 = obj;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar7;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar7);
    return pIVar7;
  }
  value_00 = uVar4 & 0xff;
  pUVar9 = (UnityEngine_UIElements_ScrollView_o *)method[1].virtualMethodPointer;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar4 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar9,2,(MethodInfo *)0x0);
      pUVar9 = (UnityEngine_UIElements_ScrollView_o *)method[1].virtualMethodPointer;
      if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar9->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar9,0,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
        return extraout_RAX;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar9->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar9,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar9,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar9 = (UnityEngine_UIElements_ScrollView_o *)method[1].virtualMethodPointer;
          if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      if ((UnityEngine_UIElements_ScrollView_o *)method[1].virtualMethodPointer !=
          (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility
                  ((UnityEngine_UIElements_ScrollView_o *)method[1].virtualMethodPointer,0,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
  }
label_041ee266:
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar11 = *(long *)(lVar8 + 0x60);
  if (lVar11 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar11 >> 8),(*(uint *)(lVar11 + 0x448) & 0xfffffffd) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
  if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar9,2,(MethodInfo *)0x0);
    pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
    if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar9->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar9,1,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
      return extraout_RAX_02;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar9->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar9,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar9,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
      if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60),0,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
label_041ee316:
  pIVar7 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_68 = (MethodInfo_24EE570 *)lVar8;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_70 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value_00,(undefined4)uStack_70);
  value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_70 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    uStack_70 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_70._4_4_,value_00);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_70);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar7,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    value = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pIVar7[6].klass != (Il2CppClass *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                ((UnityEngine_UIElements_ScrollView_o *)pIVar7[6].klass,value_00,(MethodInfo *)0x0);
      return pIVar7;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar9,(float)(-(uint)(0.0 <= fVar12) & (uint)fVar14),(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar9;
  if ((value != (Il2CppObject *)0x0) &&
     (__this = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints,
     pUVar10 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this,(UnityEngine_Vector2_o)value[3].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar13 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar9,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar9,(UnityEngine_Vector2_o)(UVar13.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar9->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar9,(pUVar9->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar9,child,(MethodInfo *)0x0);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41ef9d0

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Type_o *enumType;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  UnityEngine_UIElements_VisualElement_o *child;
  MethodInfo *method_00;
  uint value;
  CustomLogic_CustomLogicScrollViewBuiltin_o *__this_00;
  MethodInfo_24EE570 *obj;
  Il2CppClass *pIVar9;
  long lVar10;
  long lVar11;
  UnityEngine_UIElements_ScrollView_o *pUVar12;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  float fVar15;
  undefined8 uStack_68;
  MethodInfo_24EE570 *pMStack_60;
  undefined8 uStack_20;
  
  if (g_data_057ad831 == '\0') {
    uStack_20 = 0x41ef9ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x41ef9fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad831 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41efa1a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41efa2c;
  __this_00 = MethodInfo_Single_ConvertTo_Single;
  fVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     (pUVar12 = (__i->fields)._scrollView, __v = (Il2CppObject *)0x0,
     pUVar12 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar12,fVar13,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x41efa4d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT17(*(int *)&(__v[6].klass)->vtable[0x31].methodPtr - 1U < 2,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)__this_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__v == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((__this_00->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffc7);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_60 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_60 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_60 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_60 = (MethodInfo_24EE570 *)0x41efbac;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__this_00 != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__this_00,uVar5 & 0xff,method_00);
      return;
    }
    pMStack_60 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_68 = __this_00;
    pMStack_60 = obj;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
    return;
  }
  value = uVar5 & 0xff;
  pIVar9 = __v[6].klass;
  if (pIVar9 != (Il2CppClass *)0x0) {
    if ((char)uVar5 == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility
                ((UnityEngine_UIElements_ScrollView_o *)pIVar9,2,(MethodInfo *)0x0);
      pIVar9 = __v[6].klass;
      if (pIVar9 != (Il2CppClass *)0x0) {
        if (*(int *)&pIVar9->vtable[0x31].methodPtr == 2) {
          UnityEngine_UIElements_ScrollView__set_mode
                    ((UnityEngine_UIElements_ScrollView_o *)pIVar9,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&pIVar9->vtable[0x31].methodPtr;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode
                  ((UnityEngine_UIElements_ScrollView_o *)pIVar9,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility
                          ((UnityEngine_UIElements_ScrollView_o *)pIVar9,(MethodInfo *)0x0);
        if (iVar3 == 2) {
          pIVar9 = __v[6].klass;
          if (pIVar9 == (Il2CppClass *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      if (__v[6].klass != (Il2CppClass *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility
                  ((UnityEngine_UIElements_ScrollView_o *)__v[6].klass,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar10 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = *(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60);
  if (pUVar12 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar12,2,(MethodInfo *)0x0);
    pUVar12 = *(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60);
    if (pUVar12 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar12->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar12,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar12->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar12,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar12,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar12 = *(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60);
      if (pUVar12 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_60 = (MethodInfo_24EE570 *)lVar10;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_68 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value,(undefined4)uStack_68);
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_68 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_68 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_68._4_4_,value);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_68);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar7 = System_String__Format(pSVar7,pIVar6,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
    System_ArgumentException___ctor_3c12490(__this,pSVar7,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar11 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = *(UnityEngine_UIElements_ScrollView_o **)&(__this->fields)._HResult;
  if (pUVar12 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar15 = 1.0;
    if (fVar13 <= 1.0) {
      fVar15 = fVar13;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar12,(float)(-(uint)(0.0 <= fVar13) & (uint)fVar15),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar12->fields).m_RenderHints,
     pUVar12 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar6[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar14 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar14.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar12->fields).m_RenderHints;
  if (pUVar12 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar12->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar12,(pUVar12->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar12,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x41efa50

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_UIElements_ScrollView_o *__this;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  Il2CppObject *extraout_RAX_05;
  UnityEngine_UIElements_VisualElement_o *child;
  Il2CppObject *extraout_RAX_06;
  Il2CppObject *pIVar8;
  Il2CppObject *extraout_RAX_07;
  MethodInfo *method_00;
  uint value_00;
  MethodInfo_24EE570 *obj;
  long lVar9;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  UnityEngine_UIElements_ScrollView_o *pUVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  float fVar14;
  undefined8 uStack_50;
  MethodInfo_24EE570 *pMStack_48;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     ((__i->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (((CustomLogic_CustomLogicScrollViewBuiltin_o *)method !=
         (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((((CustomLogic_CustomLogicScrollViewBuiltin_o *)method)->fields)._scrollView !=
        (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffdf);
      return pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_48 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_48 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_48 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_48 = (MethodInfo_24EE570 *)0x41efbac;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((CustomLogic_CustomLogicScrollViewBuiltin_o *)method !=
        (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled
                ((CustomLogic_CustomLogicScrollViewBuiltin_o *)method,uVar5 & 0xff,method_00);
      return extraout_RAX_07;
    }
    pMStack_48 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_50 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)method;
    pMStack_48 = obj;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar8;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar8);
    return pIVar8;
  }
  value_00 = uVar5 & 0xff;
  pUVar10 = (__i->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar5 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
      pUVar10 = (__i->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar10,0,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
        return extraout_RAX;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar10,(MethodInfo *)0x0)
        ;
        if (iVar3 == 2) {
          pUVar10 = (__i->fields)._scrollView;
          if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar10 = (__i->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,0,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar2 = *(long *)(lVar9 + 0x60);
  if (lVar2 != 0) {
    return (Il2CppObject *)CONCAT71((int7)((ulong)lVar2 >> 8),(*(uint *)(lVar2 + 0x448) & 0xfffffffd) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
    pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,1,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
      return extraout_RAX_02;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar10,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
label_041ee316:
  pIVar8 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_48 = (MethodInfo_24EE570 *)lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_50 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value_00,(undefined4)uStack_50);
  value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_50 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_50 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_50._4_4_,value_00);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_50);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar6 = System_String__Format(pSVar6,pIVar8,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar6,(MethodInfo *)0x0);
    value = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (pIVar8[6].klass != (Il2CppClass *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                ((UnityEngine_UIElements_ScrollView_o *)pIVar8[6].klass,value_00,(MethodInfo *)0x0);
      return pIVar8;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar10,(float)(-(uint)(0.0 <= fVar12) & (uint)fVar14),(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar10;
  if ((value != (Il2CppObject *)0x0) &&
     (__this = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints,
     pUVar11 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this,(UnityEngine_Vector2_o)value[3].klass,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar13 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar10,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar10,(UnityEngine_Vector2_o)(UVar13.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar10->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar10,(pUVar10->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar10,child,(MethodInfo *)0x0);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41efa90

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Type_o *enumType;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  UnityEngine_UIElements_VisualElement_o *child;
  MethodInfo *method_00;
  uint value;
  MethodInfo_24EE570 *obj;
  long lVar9;
  long lVar10;
  UnityEngine_UIElements_ScrollView_o *pUVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  float fVar14;
  undefined8 uStack_48;
  MethodInfo_24EE570 *pMStack_40;
  
  if (g_data_057ad832 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad832 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (((CustomLogic_CustomLogicScrollViewBuiltin_o *)__v !=
         (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
       ((((CustomLogic_CustomLogicScrollViewBuiltin_o *)__v)->fields)._scrollView !=
        (UnityEngine_UIElements_ScrollView_o *)0x0)) {
      il2cpp_runtime_helper_02304f30(g_data_057b9b98,&stack0xffffffffffffffe7);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad833 == '\0') {
      pMStack_40 = (MethodInfo_24EE570 *)0x41efb6f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
      pMStack_40 = (MethodInfo_24EE570 *)0x41efb7b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      g_data_057ad833 = '\x01';
    }
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pMStack_40 = (MethodInfo_24EE570 *)0x41efb9a;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_40 = (MethodInfo_24EE570 *)0x41efbac;
    uVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((CustomLogic_CustomLogicScrollViewBuiltin_o *)__v != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0
       ) {
      CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled
                ((CustomLogic_CustomLogicScrollViewBuiltin_o *)__v,uVar5 & 0xff,method_00);
      return;
    }
    pMStack_40 = (MethodInfo_24EE570 *)0x41efbc8;
    il2cpp_runtime_helper_022b2c90();
    uStack_48 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)__v;
    pMStack_40 = obj;
    if (g_data_057ad834 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ad834 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar6;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar6);
    return;
  }
  value = uVar5 & 0xff;
  pUVar11 = (__i->fields)._scrollView;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)uVar5 == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar11,2,(MethodInfo *)0x0);
      pUVar11 = (__i->fields)._scrollView;
      if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar11->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar11,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar11->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar11,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar11,(MethodInfo *)0x0)
        ;
        if (iVar3 == 2) {
          pUVar11 = (__i->fields)._scrollView;
          if (pUVar11 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar11 = (__i->fields)._scrollView;
      if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar11,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar11 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar11,2,(MethodInfo *)0x0);
    pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar11->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar11,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar11->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar11,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar11,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar11 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  pMStack_40 = (MethodInfo_24EE570 *)lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  uStack_48 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(value,(undefined4)uStack_48);
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_48 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)CONCAT44(uStack_48._4_4_,value);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_48);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar7 = System_String__Format(pSVar7,pIVar6,(MethodInfo *)0x0);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
    System_ArgumentException___ctor_3c12490(__this,pSVar7,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(__this->fields)._HResult;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar11,(float)(-(uint)(0.0 <= fVar12) & (uint)fVar14),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints,
     pUVar11 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar6[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar13 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar13.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar11->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar11,(pUVar11->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar11,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, const MethodInfo* method);
// 0x41efb10

Il2CppObject *
CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) &&
     ((__i->fields)._scrollView != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad833 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad833 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__i,uVar1 & 0xff,method_00);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad834 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad834 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1 (CustomLogic_CustomLogicScrollViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41efb50

void CustomLogic_CustomLogicScrollViewBuiltin_Bindings_____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *__this;
  MethodInfo *method_00;
  
  if (g_data_057ad833 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad833 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled(__i,uVar1 & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad834 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad834 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin___ctor (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, UnityEngine_UIElements_ScrollView_o* scrollView, const MethodInfo* method);
// 0x41ee070

void CustomLogic_CustomLogicScrollViewBuiltin___ctor
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               UnityEngine_UIElements_ScrollView_o *scrollView,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)scrollView,(MethodInfo *)0x0);
  (__this->fields)._scrollView = scrollView;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._scrollView,scrollView);
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollOffset
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee0a0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  System_RuntimeTypeHandle_o handle;
  uint uVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_00;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_01;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_02;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_03;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_04;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_05;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_06;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_07;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_08;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_09;
  System_Type_o *enumType;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_ArgumentException_o *__this_01;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_10;
  UnityEngine_UIElements_VisualElement_o *child;
  CustomLogic_CustomLogicVector2Builtin_o *extraout_RAX_11;
  int32_t value;
  UnityEngine_UIElements_ScrollView_o *pUVar11;
  long lVar12;
  UnityEngine_UIElements_ScrollView_o *pUVar13;
  float fVar14;
  float fVar15;
  int32_t iStack_90;
  int32_t iStack_8c;
  long lStack_88;
  
  if (g_data_057ad820 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector2Builtin);
    g_data_057ad820 = '\x01';
  }
  pUVar11 = (__this->fields)._scrollView;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar11,(MethodInfo *)0x0);
    pCVar7 = (CustomLogic_CustomLogicVector2Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector2Builtin);
    CustomLogic_CustomLogicVector2Builtin___ctor_3fcc5f0(pCVar7,UVar3,(MethodInfo *)0x0);
    return pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) &&
     (pUVar13 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints,
     pUVar11 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar13 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar13,(UnityEngine_Vector2_o)method->parameters,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  value = (int32_t)method;
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(pUVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(pUVar11,fVar14,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(pUVar11,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar11,fVar14,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar2 = *(long *)&(pUVar11->fields).m_RenderHints;
  if (lVar2 != 0) {
    uVar4 = *(int *)(lVar2 + 0x448) - 1;
    return (CustomLogic_CustomLogicVector2Builtin_o *)(ulong)CONCAT31((int3)(uVar4 >> 8),uVar4 < 2);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar13 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar13,2,(MethodInfo *)0x0);
      pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
      if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar11->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar11,0,(MethodInfo *)0x0);
          return extraout_RAX_05;
        }
        return extraout_RAX_04;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar13->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar13,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar5 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar13,(MethodInfo *)0x0)
        ;
        if (iVar5 == 2) {
          pUVar13 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
          if (pUVar13 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
      if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar11,0,(MethodInfo *)0x0);
        return extraout_RAX_06;
      }
    }
  }
label_041ee266:
  lVar12 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar2 = *(long *)(lVar12 + 0x60);
  if (lVar2 != 0) {
    return (CustomLogic_CustomLogicVector2Builtin_o *)
           CONCAT71((int7)((ulong)lVar2 >> 8),(*(uint *)(lVar2 + 0x448) & 0xfffffffd) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
  if (pUVar11 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar11,2,(MethodInfo *)0x0);
    pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
    if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar11->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar11,1,(MethodInfo *)0x0);
        return extraout_RAX_08;
      }
      return extraout_RAX_07;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar11->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar11,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar5 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar11,(MethodInfo *)0x0);
    if (iVar5 == 2) {
      pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60);
      if (pUVar11 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
  {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar12 + 0x60),0,(MethodInfo *)0x0);
    return extraout_RAX_09;
  }
label_041ee316:
  pCVar7 = (CustomLogic_CustomLogicVector2Builtin_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  lStack_88 = lVar12;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_8c = value;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_8c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = System_Enum__IsDefined(enumType,pIVar8,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    iStack_90 = value;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_90);
    pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar9 = System_String__Format(pSVar9,pIVar8,(MethodInfo *)0x0);
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar10);
    System_ArgumentException___ctor_3c12490(__this_01,pSVar9,(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)
               &pCVar7[1].fields._Namespace_k__BackingField.fields.value;
    __this_01 = (System_ArgumentException_o *)0x0;
    if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(pUVar11,value,(MethodInfo *)0x0);
      return pCVar7;
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_01->fields)._HResult;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar15 = 1.0;
    if (fVar14 <= 1.0) {
      fVar15 = fVar14;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar11,(float)(-(uint)(0.0 <= fVar14) & (uint)fVar15),(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector2Builtin_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = pUVar11;
  if ((pIVar8 != (Il2CppObject *)0x0) &&
     (__this_00 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints,
     pUVar13 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)pIVar8[3].klass,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector2Builtin_o *)pUVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar13->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar11,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar11,(UnityEngine_Vector2_o)(UVar3.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX_10;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar13->fields).m_RenderHints;
  if (pUVar11 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar11->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar11,(pUVar11->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar11,child,(MethodInfo *)0x0);
    return extraout_RAX_11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollOffset
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* value, const MethodInfo* method);
// 0x41ee110

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollOffset
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,
               CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  int iVar1;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value_00;
  UnityEngine_UIElements_ScrollView_o *pUVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  int32_t iStack_78;
  int32_t iStack_74;
  long lStack_70;
  
  if ((value != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (pUVar7 = (__this->fields)._scrollView, __this = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar7,(UnityEngine_Vector2_o)(value->fields)._value.fields,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  value_00 = (int32_t)value;
  pUVar7 = (__this->fields)._scrollView;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(pUVar7,(MethodInfo *)0x0);
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(pUVar7,fVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(pUVar7,(MethodInfo *)0x0);
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar7,fVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9._0_4_ = (pUVar7->fields).m_RenderHints;
  lVar9._4_4_ = (pUVar7->fields).lastLayout.fields.m_XMin;
  if (lVar9 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value_00 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar7,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
          if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar7,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar7,2,(MethodInfo *)0x0);
    pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar7,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar7->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar7,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar7,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_70 = lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_74 = value_00;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_74);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iStack_78 = value_00;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_78);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),value_00,(MethodInfo *)0x0);
      return;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar7,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar13),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints,
     pUVar7 = (UnityEngine_UIElements_ScrollView_o *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)pIVar4[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar12 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar12.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar7->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar7,(pUVar7->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar7,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollDecelerationRate
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee140

float CustomLogic_CustomLogicScrollViewBuiltin__get_ScrollDecelerationRate
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value;
  UnityEngine_UIElements_ScrollView_o *pUVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  int32_t iStack_70;
  int32_t iStack_6c;
  long lStack_68;
  
  value = (int32_t)method;
  pUVar7 = (__this->fields)._scrollView;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar11 = UnityEngine_UIElements_ScrollView__get_scrollDecelerationRate(pUVar7,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(pUVar7,fVar11,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar11 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(pUVar7,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar7,fVar11,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  lVar9._0_4_ = (pUVar7->fields).m_RenderHints;
  lVar9._4_4_ = (pUVar7->fields).lastLayout.fields.m_XMin;
  if (lVar9 != 0) {
    return fVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar7,0,(MethodInfo *)0x0);
          return extraout_XMM0_Da_02;
        }
        return extraout_XMM0_Da_01;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
          if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar7,0,(MethodInfo *)0x0);
        return extraout_XMM0_Da_03;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x60) != 0) {
    return fVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar7,2,(MethodInfo *)0x0);
    pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar7,1,(MethodInfo *)0x0);
        return extraout_XMM0_Da_05;
      }
      return extraout_XMM0_Da_04;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar7->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar7,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar7,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
label_041ee316:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_6c = value;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_6c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iStack_70 = value;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_70);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),value,(MethodInfo *)0x0);
      return extraout_XMM0_Da_07;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar7,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar13),(MethodInfo *)0x0);
    return extraout_XMM0_Da_08;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints,
     pUVar7 = (UnityEngine_UIElements_ScrollView_o *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)pIVar4[3].klass,(MethodInfo *)0x0);
    return extraout_XMM0_Da_09;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar12 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar12.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_XMM0_Da_10;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar7->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar7,(pUVar7->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar7,child,(MethodInfo *)0x0);
    return extraout_XMM0_Da_11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    fVar11 = (float)il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return fVar11;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollDecelerationRate
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ee160

void CustomLogic_CustomLogicScrollViewBuiltin__set_ScrollDecelerationRate
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value_00;
  UnityEngine_UIElements_ScrollView_o *pUVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  int32_t iStack_68;
  int32_t iStack_64;
  long lStack_60;
  
  value_00 = (int32_t)method;
  pUVar7 = (__this->fields)._scrollView;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(pUVar7,(MethodInfo *)0x0);
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar7,fVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9._0_4_ = (pUVar7->fields).m_RenderHints;
  lVar9._4_4_ = (pUVar7->fields).lastLayout.fields.m_XMin;
  if (lVar9 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value_00 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar7,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
          if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar7,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar7,2,(MethodInfo *)0x0);
    pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar7,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar7->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar7,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar7,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_60 = lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_64 = value_00;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_64);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iStack_68 = value_00;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_68);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),value_00,(MethodInfo *)0x0);
      return;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar7,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar13),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints,
     pUVar7 = (UnityEngine_UIElements_ScrollView_o *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)pIVar4[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar12 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar12.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar7->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar7,(pUVar7->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar7,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_MouseWheelScrollSize
// il2cpp: float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee180

float CustomLogic_CustomLogicScrollViewBuiltin__get_MouseWheelScrollSize
                (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value;
  UnityEngine_UIElements_ScrollView_o *pUVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  int32_t iStack_60;
  int32_t iStack_5c;
  long lStack_58;
  
  value = (int32_t)method;
  pUVar7 = (__this->fields)._scrollView;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar11 = UnityEngine_UIElements_ScrollView__get_mouseWheelScrollSize(pUVar7,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar7,fVar11,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  lVar9._0_4_ = (pUVar7->fields).m_RenderHints;
  lVar9._4_4_ = (pUVar7->fields).lastLayout.fields.m_XMin;
  if (lVar9 != 0) {
    return fVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar7,0,(MethodInfo *)0x0);
          return extraout_XMM0_Da_01;
        }
        return extraout_XMM0_Da_00;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
          if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar7,0,(MethodInfo *)0x0);
        return extraout_XMM0_Da_02;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x60) != 0) {
    return fVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar7,2,(MethodInfo *)0x0);
    pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar7,1,(MethodInfo *)0x0);
        return extraout_XMM0_Da_04;
      }
      return extraout_XMM0_Da_03;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar7->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar7,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar7,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
label_041ee316:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_58 = lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_5c = value;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_5c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iStack_60 = value;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_60);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),value,(MethodInfo *)0x0);
      return extraout_XMM0_Da_06;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar7,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar13),(MethodInfo *)0x0);
    return extraout_XMM0_Da_07;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints,
     pUVar7 = (UnityEngine_UIElements_ScrollView_o *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)pIVar4[3].klass,(MethodInfo *)0x0);
    return extraout_XMM0_Da_08;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar12 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar12.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_XMM0_Da_09;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar7->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar7,(pUVar7->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar7,child,(MethodInfo *)0x0);
    return extraout_XMM0_Da_10;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    fVar11 = (float)il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return fVar11;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_MouseWheelScrollSize
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float value, const MethodInfo* method);
// 0x41ee1a0

void CustomLogic_CustomLogicScrollViewBuiltin__set_MouseWheelScrollSize
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value_00;
  UnityEngine_UIElements_ScrollView_o *pUVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  int32_t iStack_58;
  int32_t iStack_54;
  long lStack_50;
  
  value_00 = (int32_t)method;
  pUVar7 = (__this->fields)._scrollView;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9._0_4_ = (pUVar7->fields).m_RenderHints;
  lVar9._4_4_ = (pUVar7->fields).lastLayout.fields.m_XMin;
  if (lVar9 != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value_00 == '\0') {
      value_00 = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar7,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value_00 = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value_00,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value_00 = 2;
          goto label_041ee24c;
        }
        value_00 = 0;
        iVar2 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
        if (iVar2 == 2) {
          pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
          if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
      if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar7,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar9 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
  if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value_00 == '\0') {
    value_00 = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar7,2,(MethodInfo *)0x0);
    pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
    if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar7->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar7,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar7->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value_00 = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar7,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value_00 = 2;
      goto label_041ee2fc;
    }
    value_00 = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar7,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60);
      if (pUVar7 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar9;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_54 = value_00;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_54);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iStack_58 = value_00;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_58);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar5,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0
       ) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar10 + 0x60),value_00,(MethodInfo *)0x0);
      return;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar7,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar13),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints,
     pUVar7 = (UnityEngine_UIElements_ScrollView_o *)0x0, pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)pIVar4[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar12 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar12.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar7->fields).m_RenderHints;
  if (pUVar7 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar7->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar7,(pUVar7->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar7,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_HorizontalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee1c0

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_HorizontalScrollEnabled
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  uint uVar2;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  int32_t iVar3;
  bool_conflict extraout_EAX_04;
  bool_conflict bVar4;
  bool_conflict extraout_EAX_05;
  bool_conflict extraout_EAX_06;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_ArgumentException_o *__this_01;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value;
  long lVar8;
  long lVar9;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  UnityEngine_UIElements_ScrollView_o *pUVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  float fVar14;
  int32_t iStack_50;
  int32_t iStack_4c;
  long lStack_48;
  
  value = (int32_t)method;
  pUVar10 = (__this->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    uVar2 = *(int *)&(pUVar10->fields).m_ContentContainer - 1;
    return CONCAT31((int3)(uVar2 >> 8),uVar2 < 2);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = (__this->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
      pUVar10 = (__this->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar10,0,(MethodInfo *)0x0);
          return extraout_EAX_00;
        }
        return extraout_EAX;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar10,(MethodInfo *)0x0)
        ;
        if (iVar3 == 2) {
          pUVar10 = (__this->fields)._scrollView;
          if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar10 = (__this->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,0,(MethodInfo *)0x0);
        return extraout_EAX_01;
      }
    }
  }
label_041ee266:
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)(lVar8 + 0x60);
  if (lVar9 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar9 >> 8),(*(uint *)(lVar9 + 0x448) & 0xfffffffd) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
  if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
    pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
    if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,1,(MethodInfo *)0x0);
        return extraout_EAX_03;
      }
      return extraout_EAX_02;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar10,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
      if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60),0,(MethodInfo *)0x0);
    return extraout_EAX_04;
  }
label_041ee316:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_48 = lVar8;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_4c = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    iStack_50 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_50);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar6 = System_String__Format(pSVar6,pIVar5,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_ArgumentException___ctor_3c12490(__this_01,pSVar6,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
    {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),value,(MethodInfo *)0x0);
      return (bool_conflict)lVar9;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_01->fields)._HResult;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar10,(float)(-(uint)(0.0 <= fVar12) & (uint)fVar14),(MethodInfo *)0x0);
    return (bool_conflict)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar10;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (__this_00 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints,
     pUVar11 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)pIVar5[3].klass,(MethodInfo *)0x0);
    return (bool_conflict)pUVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar13 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar10,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar10,(UnityEngine_Vector2_o)(UVar13.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_EAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar11->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar10->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar10,(pUVar10->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar10,child,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return (bool_conflict)"ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_HorizontalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41ee1e0

void CustomLogic_CustomLogicScrollViewBuiltin__set_HorizontalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  long lVar8;
  long lVar9;
  UnityEngine_UIElements_ScrollView_o *pUVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  int32_t iStack_48;
  int32_t iStack_44;
  long lStack_40;
  
  pUVar10 = (__this->fields)._scrollView;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    if ((char)value == '\0') {
      value = 2;
      UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
      pUVar10 = (__this->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
          UnityEngine_UIElements_ScrollView__set_mode(pUVar10,0,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
      if (iVar1 == 1) {
label_041ee247:
        value = 1;
label_041ee24c:
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
      }
      else {
        if (iVar1 == 0) {
          value = 2;
          goto label_041ee24c;
        }
        value = 0;
        iVar3 = UnityEngine_UIElements_ScrollView__get_horizontalScrollerVisibility(pUVar10,(MethodInfo *)0x0)
        ;
        if (iVar3 == 2) {
          pUVar10 = (__this->fields)._scrollView;
          if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee266;
          goto label_041ee247;
        }
      }
      pUVar10 = (__this->fields)._scrollView;
      if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
        UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility(pUVar10,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_041ee266:
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x60) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
  if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar10,2,(MethodInfo *)0x0);
    pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
    if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar10->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar10,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar10->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar10,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar10,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60);
      if (pUVar10 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  if (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility
              (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60),0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_40 = lVar8;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_44 = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_44);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    iStack_48 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_48);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar6 = System_String__Format(pSVar6,pIVar5,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar6,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
    {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar9 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar10,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar13),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints,
     pUVar10 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar5[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar12 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar12.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar10->fields).m_RenderHints;
  if (pUVar10 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar10->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar10,(pUVar10->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar10,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_VerticalScrollEnabled
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee270

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_VerticalScrollEnabled
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  int32_t iVar2;
  bool_conflict extraout_EAX_01;
  bool_conflict bVar3;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  System_Type_o *enumType;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_01;
  UnityEngine_UIElements_VisualElement_o *child;
  int32_t value;
  long lVar7;
  UnityEngine_UIElements_ScrollView_o *pUVar8;
  UnityEngine_UIElements_ScrollView_o *pUVar9;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  float fVar12;
  int32_t iStack_40;
  int32_t iStack_3c;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCStack_38;
  
  value = (int32_t)method;
  pUVar8 = (__this->fields)._scrollView;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pUVar8 >> 8),((ulong)(pUVar8->fields).m_ContentContainer & 0xfffffffd) == 0)
    ;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = (__this->fields)._scrollView;
  if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar8,2,(MethodInfo *)0x0);
    pUVar8 = (__this->fields)._scrollView;
    if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar8->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar8,1,(MethodInfo *)0x0);
        return extraout_EAX_00;
      }
      return extraout_EAX;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar8->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar8,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar2 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar8,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      pUVar8 = (__this->fields)._scrollView;
      if (pUVar8 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  pUVar8 = (__this->fields)._scrollView;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar8,0,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
label_041ee316:
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __this;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_3c = value;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_3c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    iStack_40 = value;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_40);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar5 = System_String__Format(pSVar5,pIVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_ArgumentException___ctor_3c12490(__this_01,pSVar5,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_01 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar7 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
    {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar7 + 0x60),value,(MethodInfo *)0x0);
      return (bool_conflict)lVar7;
    }
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_01->fields)._HResult;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar12 = 1.0;
    if (fVar10 <= 1.0) {
      fVar12 = fVar10;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar8,(float)(-(uint)(0.0 <= fVar10) & (uint)fVar12),(MethodInfo *)0x0);
    return (bool_conflict)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar8;
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (__this_00 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar8->fields).m_RenderHints,
     pUVar9 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)pIVar4[3].klass,(MethodInfo *)0x0);
    return (bool_conflict)pUVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar11 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar8,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar8,(UnityEngine_Vector2_o)(UVar11.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar8 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar8->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar8,(pUVar8->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar8,child,(MethodInfo *)0x0);
    return extraout_EAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return (bool_conflict)"ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$set_VerticalScrollEnabled
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x41ee290

void CustomLogic_CustomLogicScrollViewBuiltin__set_VerticalScrollEnabled
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  System_RuntimeTypeHandle_o handle;
  int32_t iVar3;
  bool_conflict bVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_ArgumentException_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  long lVar8;
  UnityEngine_UIElements_ScrollView_o *pUVar9;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  float fVar12;
  int32_t local_38;
  int32_t local_34;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCStack_30;
  
  pUVar9 = (__this->fields)._scrollView;
  if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
  if ((char)value == '\0') {
    value = 2;
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar9,2,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._scrollView;
    if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      if (*(int *)&(pUVar9->fields).m_ContentContainer == 2) {
        UnityEngine_UIElements_ScrollView__set_mode(pUVar9,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    goto label_041ee316;
  }
  iVar1 = *(int *)&(pUVar9->fields).m_ContentContainer;
  if (iVar1 == 0) {
label_041ee2fa:
    value = 0;
label_041ee2fc:
    UnityEngine_UIElements_ScrollView__set_mode(pUVar9,value,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      value = 2;
      goto label_041ee2fc;
    }
    value = 0;
    iVar3 = UnityEngine_UIElements_ScrollView__get_verticalScrollerVisibility(pUVar9,(MethodInfo *)0x0);
    if (iVar3 == 2) {
      pUVar9 = (__this->fields)._scrollView;
      if (pUVar9 == (UnityEngine_UIElements_ScrollView_o *)0x0) goto label_041ee316;
      goto label_041ee2fa;
    }
  }
  pUVar9 = (__this->fields)._scrollView;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility(pUVar9,0,(MethodInfo *)0x0);
    return;
  }
label_041ee316:
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __this;
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  local_34 = value;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_38 = value;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar6 = System_String__Format(pSVar6,pIVar5,(MethodInfo *)0x0);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar6,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (System_ArgumentException_o *)0x0;
    if (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60) != (UnityEngine_UIElements_ScrollView_o *)0x0)
    {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior
                (*(UnityEngine_UIElements_ScrollView_o **)(lVar8 + 0x60),value,(MethodInfo *)0x0);
      return;
    }
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_00->fields)._HResult;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar12 = 1.0;
    if (fVar10 <= 1.0) {
      fVar12 = fVar10;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar9,(float)(-(uint)(0.0 <= fVar10) & (uint)fVar12),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints,
     pUVar9 = (UnityEngine_UIElements_ScrollView_o *)0x0, pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0
     )) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)pIVar5[3].klass,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar2 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar11 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar2,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar2,(UnityEngine_Vector2_o)(UVar11.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar9->fields).m_RenderHints;
  if (pUVar9 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar9->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar9,(pUVar9->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar9,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$Elasticity
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__Elasticity (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41ee320

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__Elasticity
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  CustomLogic_CustomLogicScrollViewBuiltin_o *extraout_RAX;
  UnityEngine_UIElements_VisualElement_o *child;
  CustomLogic_CustomLogicScrollViewBuiltin_o *extraout_RAX_00;
  UnityEngine_UIElements_ScrollView_o *pUVar5;
  UnityEngine_UIElements_ScrollView_o *pUVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  float fVar9;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (g_data_057ad821 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_TouchScrollBehavior);
    g_data_057ad821 = '\x01';
  }
  handle.fields.value = TypeRef_TouchScrollBehavior.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Unknown elasticity value: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_ArgumentException___ctor_3c12490(__this_01,pSVar3,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicScrollViewBuiltin_Elasticity);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pUVar5 = (__this->fields)._scrollView;
    __this_01 = (System_ArgumentException_o *)0x0;
    if (pUVar5 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
      UnityEngine_UIElements_ScrollView__set_touchScrollBehavior(pUVar5,value,(MethodInfo *)0x0);
      return __this;
    }
  }
  fVar7 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar5 = *(UnityEngine_UIElements_ScrollView_o **)&(__this_01->fields)._HResult;
  if (pUVar5 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar9 = 1.0;
    if (fVar7 <= 1.0) {
      fVar9 = fVar7;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar5,(float)(-(uint)(0.0 <= fVar7) & (uint)fVar9),(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicScrollViewBuiltin_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = pUVar5;
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (__this_00 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar5->fields).m_RenderHints,
     pUVar6 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)pIVar2[3].klass,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicScrollViewBuiltin_o *)pUVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar6->fields).m_RenderHints;
  if (pUVar5 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar8 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar5,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar5,(UnityEngine_Vector2_o)(UVar8.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar6->fields).m_RenderHints;
  if (pUVar5 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar5->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar5,(pUVar5->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar5,child,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollDecelerationRate
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, float rate, const MethodInfo* method);
// 0x41ee460

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollDecelerationRate
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,float rate,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *extraout_RAX;
  UnityEngine_UIElements_VisualElement_o *child;
  CustomLogic_CustomLogicScrollViewBuiltin_o *extraout_RAX_00;
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  UnityEngine_UIElements_ScrollView_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    fVar4 = 1.0;
    if (rate <= 1.0) {
      fVar4 = rate;
    }
    UnityEngine_UIElements_ScrollView__set_scrollDecelerationRate
              (pUVar1,(float)(-(uint)(0.0 <= rate) & (uint)fVar4),(MethodInfo *)0x0);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = pUVar1;
  if ((method != (MethodInfo *)0x0) &&
     (__this_00 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar1->fields).m_RenderHints,
     pUVar2 = (UnityEngine_UIElements_ScrollView_o *)0x0,
     __this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (__this_00,(UnityEngine_Vector2_o)method->parameters,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicScrollViewBuiltin_o *)pUVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar2->fields).m_RenderHints;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar1,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(UVar3.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = *(UnityEngine_UIElements_ScrollView_o **)&(pUVar2->fields).m_RenderHints;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar1->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar1,child,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollOffset
// il2cpp: CustomLogic_CustomLogicScrollViewBuiltin_o* CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, CustomLogic_CustomLogicVector2Builtin_o* offset, const MethodInfo* method);
// 0x41ee4a0

CustomLogic_CustomLogicScrollViewBuiltin_o *
CustomLogic_CustomLogicScrollViewBuiltin__SetScrollOffset
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,CustomLogic_CustomLogicVector2Builtin_o *offset,
          MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  CustomLogic_CustomLogicScrollViewBuiltin_o *extraout_RAX;
  UnityEngine_UIElements_VisualElement_o *child;
  CustomLogic_CustomLogicScrollViewBuiltin_o *extraout_RAX_00;
  CustomLogic_CustomLogicScrollViewBuiltin_o *pCVar2;
  UnityEngine_Vector2_o UVar3;
  
  pCVar2 = __this;
  if ((offset != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (pUVar1 = (__this->fields)._scrollView, pCVar2 = (CustomLogic_CustomLogicScrollViewBuiltin_o *)0x0,
     pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0)) {
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(offset->fields)._value.fields,(MethodInfo *)0x0);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (pCVar2->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar3 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar1,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(UVar3.fields & 0xffffffff),(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (pCVar2->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar1->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar1,child,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToTop
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee4d0

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToTop
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *pUVar1;
  UnityEngine_UIElements_VisualElement_o *child;
  UnityEngine_Vector2_o UVar2;
  
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    UVar2 = UnityEngine_UIElements_ScrollView__get_scrollOffset(pUVar1,(MethodInfo *)0x0);
    UnityEngine_UIElements_ScrollView__set_scrollOffset
              (pUVar1,(UnityEngine_Vector2_o)(UVar2.fields & 0xffffffff),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields)._scrollView;
  if (pUVar1 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(pUVar1->klass->vtable)._97_get_contentContainer.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(pUVar1,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToBottom
// il2cpp: void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee500

void CustomLogic_CustomLogicScrollViewBuiltin__ScrollToBottom
               (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ScrollView_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *child;
  
  __this_00 = (__this->fields)._scrollView;
  if (__this_00 != (UnityEngine_UIElements_ScrollView_o *)0x0) {
    child = (UnityEngine_UIElements_VisualElement_o *)
            (*(__this_00->klass->vtable)._97_get_contentContainer.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._97_get_contentContainer.method);
    UnityEngine_UIElements_ScrollView__ScrollTo(__this_00,child,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee530

System_String_o *
CustomLogic_CustomLogicScrollViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad822 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057ad822 = '\x01';
  }
  return "ScrollView";
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee560

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee570

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_IsStatic
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicScrollViewBuiltin_o* __this, const MethodInfo* method);
// 0x41ee580

bool_conflict
CustomLogic_CustomLogicScrollViewBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicScrollViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


