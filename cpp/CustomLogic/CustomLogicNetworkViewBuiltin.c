// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkViewBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicNetworkViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4127700

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  long lVar1;
  uint in_EAX;
  int iVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  Map_MapObject_o *obj_00;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  System_Action_T__object__o *setter;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar11;
  System_ArgumentException_o **ppSVar12;
  undefined8 unaff_R15;
  undefined1 auVar13 [16];
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057aca1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_ConvertTo_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    g_data_057aca1e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    iVar2 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 1) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj_00 = (Map_MapObject_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(obj,MethodInfo_MapObject_ConvertTo_MapObject);
      auVar13 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
      CustomLogic_CustomLogicNetworkViewBuiltin___ctor(auVar13._0_8_,obj_00,auVar13._8_8_);
      return auVar13._0_8_;
    }
  }
  uStack_18 = CONCAT44(iVar2,(uint)uStack_18);
  pSVar5 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicNetworkViewBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar5 = System_String__Concat_3af7150(pSVar6,pSVar5,str2,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_ArgumentException___ctor_3c12490(__this,pSVar5,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicNetworkViewBuiltin_CreateInstance);
  pSVar8 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar12 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057aca1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SendStream");
    il2cpp_runtime_helper_023445d0(&"Transfer");
    il2cpp_runtime_helper_023445d0(&"ReceiveStream");
    il2cpp_runtime_helper_023445d0(&"SendMessage");
    il2cpp_runtime_helper_023445d0(&"SyncTransforms");
    il2cpp_runtime_helper_023445d0(&"SendMessageAll");
    il2cpp_runtime_helper_023445d0(&"Owner");
    il2cpp_runtime_helper_023445d0(&"SendMessageOthers");
    g_data_057aca1f = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x121de31e) {
      if (uVar3 == 0x895e8a6) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Transfer",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057aca22 == '\0') {
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Transfer_b__4_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aca22 = '\x01';
            iVar2 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar2 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_28 = (System_ArgumentException_o *)pSVar5;
          }
          if (iVar2 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar1 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar1 + 8) = pSVar10;
            il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar10);
          }
          pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          return pCVar11;
        }
      }
      else if ((uVar3 == 0x121de31d) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendMessageAll",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057aca24 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageAll_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca24 = '\x01';
          iVar2 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar1 + 0x18) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        return pCVar11;
      }
    }
    else if (uVar3 == 0x1de8ebcf) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendStream",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057aca26 == '\0') {
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendStream_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca26 = '\x01';
          iVar2 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_28 = (System_ArgumentException_o *)pSVar5;
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar1 + 0x28) = pSVar10;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        return pCVar11;
      }
    }
    else if ((uVar3 == 0x396d88cd) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendMessageOthers",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057aca25 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageOthers_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca25 = '\x01';
        iVar2 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar1 + 0x20) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 < 0x8b3137a4) {
    if (uVar3 == 0x8b3137a3) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SyncTransforms",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ppSVar12 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        else {
          ppSVar12 = (System_ArgumentException_o **)&uStack_18;
          pSVar8 = pSStack_28;
        }
        goto CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms;
      }
    }
    else if ((uVar3 == 0x67ac82ce) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"SendMessage",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057aca23 == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessage_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca23 = '\x01';
        iVar2 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar5;
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar1 + 0x10) = pSVar10;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      return pCVar11;
    }
  }
  else if (uVar3 == 0x9b22be74) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"Owner",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar8 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057aca21 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Owner_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
        g_data_057aca21 = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
      System_Func_object__object____ctor();
      pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
      return pCVar11;
    }
  }
  else if ((uVar3 == 0xf3e2723a) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar8,"ReceiveStream",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057aca27 == '\0') {
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ReceiveStream_b__9_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca27 = '\x01';
      iVar2 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_28 = (System_ArgumentException_o *)pSVar5;
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar1 + 0x30) = pSVar10;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar10);
    }
    pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    return pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicNetworkViewBuiltin not found");
  pSVar5 = System_String__Concat_3af7150(pSVar5,(System_String_o *)pSVar8,pSVar6,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar8,uVar7);
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms:
  *(undefined8 *)((long)ppSVar12 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar12 + -0x10) = pSVar5;
  *(System_ArgumentException_o **)((long)ppSVar12 + -0x18) = pSVar8;
  if (g_data_057aca20 == '\0') {
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNetworkViewBuiltin_object);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SyncTransforms_g____gett);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SyncTransforms_g____setter);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
    g_data_057aca20 = '\x01';
  }
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127c8c;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127ca5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127cb4;
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNetworkViewBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127ccd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127cdc;
  pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x4127cf7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar11,pSVar9,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
  return pCVar11;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4128870

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aca2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca2a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41288e0

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Transfer>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41288f0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Realtime_Player_o *player;
  long lVar2;
  int32_t viewID;
  bool_conflict bVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *player_00;
  Photon_Pun_PhotonView_o *pPVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  Characters_BaseCharacter_o *pCVar7;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar8;
  undefined8 uVar9;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  MethodInfo *method_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar10;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar11;
  Characters_BaseCharacter_o *pCVar12;
  
  pCVar10 = __c;
  if (g_data_057aca2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_0412899a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar10 = MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil;
    player_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)(__c->fields).Sync,
       (CustomLogic_CustomLogicPhotonSync_o *)__this != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      pCVar10 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
        if ((char)(pPVar4->fields)._IsMine_k__BackingField == '\0') {
          return (Il2CppObject *)0x0;
        }
        pCVar1 = (__c->fields).Sync;
        __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
        if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player_00,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
    goto label_0412899a;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar11 = pCVar10;
  if (g_data_057aca2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2c = '\x01';
  }
  if (extraout_RDX == 0) {
label_04128a6d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar11 = MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil;
    pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    if (1 < *(uint *)(extraout_RDX + 0x18)) {
      __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
      pCVar11 = MethodInfo_String_ConvertTo_String;
      pSVar6 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if ((pCVar10 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) && (pIVar5 != (Il2CppObject *)0x0))
      {
        pCVar1 = (pCVar10->fields).Sync;
        __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
        if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          CustomLogic_CustomLogicPhotonSync__SendMessage
                    (pCVar1,(Photon_Realtime_Player_o *)pIVar5[3].klass,pSVar6,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_04128a6d;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar10 = pCVar11;
  if (g_data_057aca2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2d = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_04128b0d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar10 = MethodInfo_String_ConvertTo_String;
    pSVar6 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pCVar11 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      pCVar1 = (pCVar11->fields).Sync;
      __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__SendMessageAll(pCVar1,pSVar6,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_04128b0d;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar11 = pCVar10;
  if (g_data_057aca2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2e = '\x01';
  }
  if (extraout_RDX_01 == 0) {
label_04128bad:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar11 = MethodInfo_String_ConvertTo_String;
    pSVar6 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (pCVar10 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      pCVar1 = (pCVar10->fields).Sync;
      __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__SendMessageOthers(pCVar1,pSVar6,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    goto label_04128bad;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (method_00 == (MethodInfo *)0x0) {
label_04128be1:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&method_00->name != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
    if (pCVar11 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
                (pCVar11,(Il2CppObject *)method_00->klass,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_04128be1;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pCVar11 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar5 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(pCVar11,(MethodInfo *)pCVar11);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = (Photon_Realtime_Player_o *)(((CustomLogic_CustomLogicPhotonSync_o *)__this)->fields)._rigidbody;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0)
  ;
  if (0 < viewID) {
    pCVar7 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar12 = pCVar7;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (pCVar7 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar9 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar9 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar12->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar7 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar7,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar12 = pCVar7;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pCVar7 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar7->fields).FeedVictimName == '\0') {
          lVar2 = *(long *)&(pCVar7->fields).Dead;
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04128d62;
          if (*(UnityEngine_Rigidbody_o **)(lVar2 + 0x80) ==
              (((CustomLogic_CustomLogicPhotonSync_o *)__this)->fields)._rigidbody) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar8 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar7,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar8;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41289b0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Il2CppClass *player;
  long lVar2;
  int32_t viewID;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Characters_BaseCharacter_o *pCVar6;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar7;
  undefined8 uVar8;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *method_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar9;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar10;
  Characters_BaseCharacter_o *pCVar11;
  
  pCVar9 = __c;
  if (g_data_057aca2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04128a6d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar9 = MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil;
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPlayerBuil);
    if (1 < (uint)__a->max_length) {
      __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)__a->m_Items[1];
      pCVar9 = MethodInfo_String_ConvertTo_String;
      pSVar5 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) && (pIVar4 != (Il2CppObject *)0x0)) &&
         (pCVar1 = (__c->fields).Sync,
         __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0,
         pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
        CustomLogic_CustomLogicPhotonSync__SendMessage
                  (pCVar1,(Photon_Realtime_Player_o *)pIVar4[3].klass,pSVar5,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_04128a6d;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar10 = pCVar9;
  if (g_data_057aca2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2d = '\x01';
  }
  if (extraout_RDX == 0) {
label_04128b0d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar10 = MethodInfo_String_ConvertTo_String;
    pSVar5 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pCVar9 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (pCVar9->fields).Sync,
       __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0,
       pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageAll(pCVar1,pSVar5,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_04128b0d;
  }
  il2cpp_runtime_helper_022b2ca0();
  pCVar9 = pCVar10;
  if (g_data_057aca2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2e = '\x01';
  }
  if (extraout_RDX_00 == 0) {
label_04128bad:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar9 = MethodInfo_String_ConvertTo_String;
    pSVar5 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pCVar10 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (pCVar10->fields).Sync,
       __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0,
       pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageOthers(pCVar1,pSVar5,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_04128bad;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (method_00 == (MethodInfo *)0x0) {
label_04128be1:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&method_00->name != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
    if (pCVar9 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream(pCVar9,(Il2CppObject *)method_00->klass,method_00)
      ;
      return (Il2CppObject *)0x0;
    }
    goto label_04128be1;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (pCVar9 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar4 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(pCVar9,(MethodInfo *)pCVar9);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = ((Il2CppObject *)(__this + 3))->klass;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     ((Photon_Realtime_Player_o *)player,
                      *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < viewID) {
    pCVar6 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar11 = pCVar6;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar8 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar8 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar11->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar6 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar11 = pCVar6;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar6->fields).FeedVictimName == '\0') {
          lVar2 = *(long *)&(pCVar6->fields).Dead;
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04128d62;
          if (*(Il2CppClass **)(lVar2 + 0x80) == ((Il2CppObject *)(__this + 3))->klass) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar6,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar7;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4128a80

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Il2CppClass *player;
  long lVar2;
  int32_t viewID;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  Characters_BaseCharacter_o *pCVar6;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar7;
  undefined8 uVar8;
  long extraout_RDX;
  MethodInfo *method_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar9;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  Characters_BaseCharacter_o *pCVar10;
  
  pCVar9 = __c;
  if (g_data_057aca2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04128b0d:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar9 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Sync, __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0,
       pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageAll(pCVar1,pSVar4,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_04128b0d;
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_00 = pCVar9;
  if (g_data_057aca2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2e = '\x01';
  }
  if (extraout_RDX == 0) {
label_04128bad:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    __this = *(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = MethodInfo_String_ConvertTo_String;
    pSVar4 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((pCVar9 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (pCVar9->fields).Sync,
       __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0,
       pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageOthers(pCVar1,pSVar4,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_04128bad;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (method_00 == (MethodInfo *)0x0) {
label_04128be1:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&method_00->name != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
                (__this_00,(Il2CppObject *)method_00->klass,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_04128be1;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (__this_00 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar5 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(__this_00,(MethodInfo *)__this_00);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = ((Il2CppObject *)(__this + 3))->klass;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     ((Photon_Realtime_Player_o *)player,
                      *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < viewID) {
    pCVar6 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar10 = pCVar6;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar8 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar8 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar10->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar6 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar10 = pCVar6;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar6->fields).FeedVictimName == '\0') {
          lVar2 = *(long *)&(pCVar6->fields).Dead;
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04128d62;
          if (*(Il2CppClass **)(lVar2 + 0x80) == ((Il2CppObject *)(__this + 3))->klass) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar7 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar6,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar7;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4128b20

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Il2CppClass *player;
  long lVar1;
  int32_t viewID;
  bool_conflict bVar2;
  System_String_o *message;
  Il2CppObject *pIVar3;
  Characters_BaseCharacter_o *pCVar4;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_01;
  Characters_BaseCharacter_o *pCVar7;
  
  __this_01 = __c;
  if (g_data_057aca2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057aca2e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_04128bad:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = MethodInfo_String_ConvertTo_String;
    message = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync,
       __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0,
       __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    goto label_04128bad;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (method_00 == (MethodInfo *)0x0) {
label_04128be1:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)&method_00->name != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
    if (__this_01 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
                (__this_01,(Il2CppObject *)method_00->klass,method_00);
      return (Il2CppObject *)0x0;
    }
    goto label_04128be1;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (__this_01 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar3 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(__this_01,(MethodInfo *)__this_01);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = ((Il2CppObject *)(__this + 3))->klass;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     ((Photon_Realtime_Player_o *)player,
                      *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < viewID) {
    pCVar4 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar7 = pCVar4;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar6 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar6 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar7->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar4 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar7 = pCVar4;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar4->fields).FeedVictimName == '\0') {
          lVar1 = *(long *)&(pCVar4->fields).Dead;
          if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto label_04128d62;
          if (*(Il2CppClass **)(lVar1 + 0x80) == ((Il2CppObject *)(__this + 3))->klass) {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar5 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar4,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar5;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendStream>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4128bc0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_c *player;
  long lVar1;
  int32_t viewID;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Characters_BaseCharacter_o *pCVar4;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar5;
  undefined8 uVar6;
  Characters_BaseCharacter_o *pCVar7;
  
  if (__a == (System_Object_array *)0x0) {
label_04128be1:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
    goto label_04128be1;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar3 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(__c,(MethodInfo *)__c);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = __this[3].klass;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     ((Photon_Realtime_Player_o *)player,
                      *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < viewID) {
    pCVar4 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar7 = pCVar4;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar6 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar6 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar7->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar4 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar7 = pCVar4;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar4->fields).FeedVictimName == '\0') {
          lVar1 = *(long *)&(pCVar4->fields).Dead;
          if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto label_04128d62;
          if (*(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_c **)(lVar1 + 0x80) == __this[3].klass)
          {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar5 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar4,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar5;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReceiveStream>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4128bf0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_c *player;
  long lVar1;
  int32_t viewID;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Characters_BaseCharacter_o *pCVar4;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar5;
  undefined8 uVar6;
  Characters_BaseCharacter_o *pCVar7;
  
  if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar3 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(__c,(MethodInfo *)__c);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca30 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057aca30 = '\x01';
  }
  player = __this[3].klass;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  viewID = PhotonExtensions__GetIntProperty
                     ((Photon_Realtime_Player_o *)player,
                      *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),0,(MethodInfo *)0x0);
  if (0 < viewID) {
    pCVar4 = (Characters_BaseCharacter_o *)Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar7 = pCVar4;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) {
label_04128d62:
        uVar6 = il2cpp_runtime_helper_022b2c90();
        return (Il2CppObject *)
               CONCAT71((int7)((ulong)uVar6 >> 8),
                        *(System_Collections_Generic_List_object__o **)&(pCVar7->fields).MaxFootstepDistance
                        != (System_Collections_Generic_List_object__o *)0x0);
      }
      pCVar4 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar7 = pCVar4;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_04128d62;
        if (*(char *)&(pCVar4->fields).FeedVictimName == '\0') {
          lVar1 = *(long *)&(pCVar4->fields).Dead;
          if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto label_04128d62;
          if (*(CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_c **)(lVar1 + 0x80) == __this[3].klass)
          {
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar5 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(pCVar4,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar5;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4127830

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_T__o *pCVar7;
  System_Func_T__object____object__o *pSVar8;
  CustomLogic_CLMethodBinding_T__o *pCVar9;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined8 *puStack_18;
  
  if (g_data_057aca1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"SendStream");
    il2cpp_runtime_helper_023445d0(&"Transfer");
    il2cpp_runtime_helper_023445d0(&"ReceiveStream");
    il2cpp_runtime_helper_023445d0(&"SendMessage");
    il2cpp_runtime_helper_023445d0(&"SyncTransforms");
    il2cpp_runtime_helper_023445d0(&"SendMessageAll");
    il2cpp_runtime_helper_023445d0(&"Owner");
    il2cpp_runtime_helper_023445d0(&"SendMessageOthers");
    g_data_057aca1f = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x121de31e) {
      if (uVar3 == 0x895e8a6) {
        bVar4 = System_String__op_Equality(name,"Transfer",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aca22 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Transfer_b__4_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aca22 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          else {
            pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
          }
          pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x121de31d) &&
              (bVar4 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca24 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageAll_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca24 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar8;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar8);
        }
        pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x1de8ebcf) {
      bVar4 = System_String__op_Equality(name,"SendStream",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aca26 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendStream_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057aca26 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar8;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar8);
        }
        pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x396d88cd) &&
            (bVar4 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca25 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageOthers_b__7_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca25 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar8);
      }
      pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0x8b3137a4) {
    if (uVar3 == 0x8b3137a3) {
      bVar4 = System_String__op_Equality(name,"SyncTransforms",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms;
      }
    }
    else if ((uVar3 == 0x67ac82ce) &&
            (bVar4 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca23 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessage_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aca23 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0x9b22be74) {
    bVar4 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aca21 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Owner_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
        g_data_057aca21 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
      System_Func_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar7,pSVar6,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
  }
  else if ((uVar3 == 0xf3e2723a) &&
          (bVar4 = System_String__op_Equality(name,"ReceiveStream",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aca27 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ReceiveStream_b__9_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057aca27 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    }
    else {
      pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    }
    if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar8;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar8);
    }
    pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicNetworkViewBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057aca20 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNetworkViewBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SyncTransforms_g____gett);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SyncTransforms_g____setter);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
    g_data_057aca20 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127c8c;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127ca5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127cb4;
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNetworkViewBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127ccd;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127cdc;
  pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4127cf7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar6,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__SyncTransforms
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms (const MethodInfo* method);
// 0x4127c20

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNetworkViewBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__SyncTransforms_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__SyncTransforms_g____setter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
    g_data_057aca20 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNetworkViewBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x4127d00

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Owner_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
    g_data_057aca21 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__Transfer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer (const MethodInfo* method);
// 0x4127da0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Transfer_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca22 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x4127ef0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessage_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca23 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x4128040

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageAll_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca24 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x4128190

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendMessageOthers_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca25 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream (const MethodInfo* method);
// 0x41282e0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SendStream_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca26 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__ReceiveStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream (const MethodInfo* method);
// 0x4128430

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (g_data_057aca27 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ReceiveStream_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca27 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNetworkViewBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x4128580

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this;
  uint uVar1;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *__this_01;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  undefined8 uStack_20;
  
  if (g_data_057aca28 == '\0') {
    uStack_20 = 0x412859d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x41285a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x41285b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x41285c1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x41285cd;
    il2cpp_runtime_helper_023445d0(&"SendStream");
    uStack_20 = 0x41285d9;
    il2cpp_runtime_helper_023445d0(&"Transfer");
    uStack_20 = 0x41285e5;
    il2cpp_runtime_helper_023445d0(&"ReceiveStream");
    uStack_20 = 0x41285f1;
    il2cpp_runtime_helper_023445d0(&"SendMessage");
    uStack_20 = 0x41285fd;
    il2cpp_runtime_helper_023445d0(&"SyncTransforms");
    uStack_20 = 0x4128609;
    il2cpp_runtime_helper_023445d0(&"SendMessageAll");
    uStack_20 = 0x4128615;
    il2cpp_runtime_helper_023445d0(&"Owner");
    uStack_20 = 0x4128621;
    il2cpp_runtime_helper_023445d0(&"SendMessageOthers");
    g_data_057aca28 = '\x01';
  }
  uStack_20 = 0x4128637;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x412864c;
  __this_02 = MethodInfo_HashSet_1_System_String;
  pSVar3 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x4128671;
    System_Collections_Generic_HashSet_object___Add(__this_00,"SyncTransforms",MethodInfo_Boolean_Add);
    uStack_20 = 0x4128686;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Owner",MethodInfo_Boolean_Add);
    uStack_20 = 0x412869b;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Transfer",MethodInfo_Boolean_Add);
    uStack_20 = 0x41286b0;
    System_Collections_Generic_HashSet_object___Add(__this_00,"SendMessage",MethodInfo_Boolean_Add);
    uStack_20 = 0x41286c5;
    System_Collections_Generic_HashSet_object___Add(__this_00,"SendMessageAll",MethodInfo_Boolean_Add);
    uStack_20 = 0x41286da;
    System_Collections_Generic_HashSet_object___Add(__this_00,"SendMessageOthers",MethodInfo_Boolean_Add);
    uStack_20 = 0x41286ef;
    System_Collections_Generic_HashSet_object___Add(__this_00,"SendStream",MethodInfo_Boolean_Add);
    uStack_20 = 0x4128704;
    System_Collections_Generic_HashSet_object___Add(__this_00,"ReceiveStream",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  uStack_20 = 0x4128736;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = CONCAT17(*(undefined1 *)&pSVar3[1].fields._slots,(undefined7)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca29 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)__this_02,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057aca0e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aca0e = '\x01';
    }
    *(char *)&pSVar3[1].fields._slots = (char)uVar1;
    x = *(UnityEngine_Object_o **)&(pSVar3->fields)._version;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this = *(CustomLogic_CustomLogicPhotonSync_o **)&(pSVar3->fields)._version;
    __this_02 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
    if (__this != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(__this,uVar1 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__this_02,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca2a = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x4128740

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  uint uVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined4 extraout_var;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar5;
  MethodInfo *method_00;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_1);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca29 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    ((Il2CppObject *)method,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (g_data_057aca0e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aca0e = '\x01';
    }
    *(char *)&(__i->fields)._isTransformSynced = (char)uVar2;
    pCVar1 = (__i->fields).Sync;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return (Il2CppObject *)CONCAT44(extraout_var,bVar3);
    }
    pCVar1 = (__i->fields).Sync;
    method = (MethodInfo *)0x0;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,uVar2 & 0xff,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)method !=
      (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pCVar5 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
                       ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)method,method_00);
    return (Il2CppObject *)pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca2a = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x4128770

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  uint uVar2;
  bool_conflict bVar3;
  Il2CppObject *__this;
  MethodInfo *method_00;
  
  if (g_data_057aca29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057aca29 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (g_data_057aca0e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aca0e = '\x01';
    }
    *(char *)&(__i->fields)._isTransformSynced = (char)uVar2;
    pCVar1 = (__i->fields).Sync;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Sync;
    __v = (Il2CppObject *)0x0;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,uVar2 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)__v != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0
     ) {
    CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
              ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)__v,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca2a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x4128850

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__i,method);
    return (Il2CppObject *)pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aca2a = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return pIVar2;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x41253e0

void CustomLogic_CustomLogicNetworkViewBuiltin___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  
  if (g_data_057aca0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicComponentInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicClassInstance);
    g_data_057aca0d = '\x01';
  }
  (__this->fields).OwnerId = -1;
  __this_00 = (System_Collections_Generic_List_CustomLogicComponentInstance__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicComponentInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
  (__this->fields)._classInstances = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._classInstances,__this_00);
  __this_01 = (System_Collections_Generic_List_CustomLogicClassInstance__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicClassInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance);
  (__this->fields)._addonInstances = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._addonInstances);
  *(undefined1 *)&(__this->fields)._isTransformSynced = 1;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapObject,obj);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x41254f0

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isTransformSynced);
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x4125500

void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,bool_conflict value,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_BuiltinClassInstance_o *pCVar3;
  CustomLogic_BuiltinClassInstance_c *pCVar4;
  CustomLogic_CustomLogicPhotonSync_o *pCVar5;
  
  if (g_data_057aca0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aca0e = '\x01';
  }
  *(char *)&(__this->fields)._isTransformSynced = (char)value;
  pCVar5 = (__this->fields).Sync;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  pCVar5 = (__this->fields).Sync;
  if (pCVar5 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar5,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aca0f = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pCVar5->fields).ObjectId;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar4 = (CustomLogic_BuiltinClassInstance_c *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pCVar3 = *(CustomLogic_BuiltinClassInstance_o **)&(pCVar5->fields).ObjectId;
  if (pCVar3 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    pCVar4 = (CustomLogic_BuiltinClassInstance_c *)0x0;
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar3,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
      pCVar4 = (CustomLogic_BuiltinClassInstance_c *)(pPVar2->fields)._Owner_k__BackingField;
      pCVar3 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      if (g_data_057aca2f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057aca2f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
      pCVar3[1].klass = pCVar4;
      il2cpp_runtime_helper_022b4080(pCVar3 + 1,pCVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057aca2f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor(pCVar3,(MethodInfo *)0x0);
  pCVar3[1].klass = pCVar4;
  il2cpp_runtime_helper_022b4080(pCVar3 + 1,pCVar4);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_Owner
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x4125580

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  CustomLogic_CustomLogicPhotonSync_o *pCVar6;
  
  if (g_data_057aca0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aca0f = '\x01';
  }
  pCVar6 = (__this->fields).Sync;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Rigidbody_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  pCVar6 = (__this->fields).Sync;
  if (pCVar6 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pUVar5 = (UnityEngine_Rigidbody_o *)0x0;
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar6,(MethodInfo *)0x0);
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      pPVar1 = (pPVar3->fields)._Owner_k__BackingField;
      pCVar4 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
      if (g_data_057aca2f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        g_data_057aca2f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar4,(MethodInfo *)0x0);
      (pCVar4->fields).Player = pPVar1;
      il2cpp_runtime_helper_022b4080(&(pCVar4->fields).Player,pPVar1);
      return pCVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057aca2f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
  (pCVar6->fields)._rigidbody = pUVar5;
  pCVar4 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._rigidbody,pUVar5);
  return pCVar4;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnSecond
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x41256e0

void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aca10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aca10 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterComponentInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x4125740

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  Il2CppObject *extraout_RDX;
  CustomLogic_CustomLogicComponentInstance_o *pCVar8;
  Il2CppRGCTXData *__this_05;
  MethodInfo *pMVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  CustomLogic_CustomLogicComponentInstance_o *pCVar13;
  CustomLogic_CustomLogicComponentInstance_o *__this_06;
  undefined1 auStack_78 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_68;
  Il2CppRGCTXData *pIStack_60;
  
  pCVar13 = instance;
  if (g_data_057aca11 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aca11 = '\x01';
  }
  lVar5 = MethodInfo_Void_Add;
  __this_05 = (Il2CppRGCTXData *)(__this->fields)._classInstances;
  if (__this_05 != (Il2CppRGCTXData *)0x0) {
    *(int32_t *)((long)__this_05 + 0x1c) = *(int32_t *)((long)__this_05 + 0x1c) + 1;
    pMVar9 = __this_05[2].method;
    if (pMVar9 != (MethodInfo *)0x0) {
      uVar2 = *(uint *)(__this_05 + 3);
      if (*(uint *)&pMVar9->name <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)instance,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        return;
      }
      *(uint *)(__this_05 + 3) = uVar2 + 1;
      (&pMVar9->klass)[(int)uVar2] = (Il2CppClass *)instance;
      il2cpp_runtime_helper_022b4080(&pMVar9->klass + (int)uVar2,instance);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar8 = pCVar13;
  if (g_data_057aca12 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057aca12 = '\x01';
  }
  pMVar9 = (MethodInfo *)0x0;
  if (__this_05[0xb].method != (MethodInfo *)0x0) {
    pCVar8 = pCVar13;
    bVar3 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_05[0xb].method,
                       (Il2CppObject *)pCVar13,MethodInfo_Boolean_Contains);
    lVar5 = MethodInfo_Void_Add;
    if ((char)bVar3 != '\0') {
      return;
    }
    pMVar9 = __this_05[0xb].method;
    if (pMVar9 != (MethodInfo *)0x0) {
      piVar1 = (int32_t *)((long)&pMVar9->name + 4);
      *piVar1 = *piVar1 + 1;
      pSVar4 = ((System_Collections_Generic_List_object__Fields *)&pMVar9->invoker_method)->_items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&pMVar9->name;
        if ((uint)pSVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pMVar9,(Il2CppObject *)pCVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          return;
        }
        *(uint *)&pMVar9->name = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pCVar13;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pCVar13);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_60 = __this_05;
  if (g_data_057aca13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca13 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pCVar13 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (pMVar9->parameters != (Il2CppType **)0x0) {
    x = (UnityEngine_Object_o *)pMVar9->parameters[3];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(System_Collections_Generic_List_object__o **)&pMVar9->slot !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,
                 *(System_Collections_Generic_List_object__o **)&pMVar9->slot,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._0_8_;
      pIVar12 = (Il2CppType *)auStack_78._8_8_;
      __this_06 = pCStack_68;
      if (pCVar8 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        while (__this_01.fields._8_8_ = pIVar12,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
              __this_01.fields._current = (Il2CppObject *)__this_06,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68),
              (char)bVar3 != '\0') {
          pCVar13 = __this_06;
          pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_04125b6c;
          if ((int)pSVar4->max_length == 0) goto label_04125b71;
          pSVar4->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items,0);
          if ((extraout_RDX != (Il2CppObject *)0x0) &&
             (lVar5 = il2cpp_runtime_helper_023051f0(extraout_RDX,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
          goto label_04125b7b;
          if ((uint)pSVar4->max_length < 2) goto label_04125b67;
          pSVar4->m_Items[1] = extraout_RDX;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1,extraout_RDX);
          if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_06,"OnNetworkTransfer",pSVar4,(MethodInfo *)0x0);
          __this_06 = pCVar13;
        }
      }
      else {
        while (__this_00.fields._8_8_ = pIVar12,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
              __this_00.fields._current = (Il2CppObject *)__this_06,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68),
              (char)bVar3 != '\0') {
          pCVar13 = __this_06;
          pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_04125b6c;
          lVar5 = il2cpp_runtime_helper_023051f0(pCVar8,(((pSVar4->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto label_04125b8a;
          if ((int)pSVar4->max_length == 0) goto label_04125b71;
          pSVar4->m_Items[0] = (Il2CppObject *)pCVar8;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items,pCVar8);
          if ((extraout_RDX != (Il2CppObject *)0x0) &&
             (lVar5 = il2cpp_runtime_helper_023051f0(extraout_RDX,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
          goto label_04125b7b;
          if ((uint)pSVar4->max_length < 2) goto label_04125b67;
          pSVar4->m_Items[1] = extraout_RDX;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1,extraout_RDX);
          if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_06,"OnNetworkTransfer",pSVar4,(MethodInfo *)0x0);
          __this_06 = pCVar13;
        }
      }
      __this_02.fields._8_8_ = pIVar12;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_02.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
      return;
    }
  }
label_04125b99:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_03.fields._current = (Il2CppObject *)pCVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_04.fields._current = (Il2CppObject *)pCVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar10._0_8_);
label_04125b67:
  il2cpp_runtime_helper_022b2ca0();
label_04125b6c:
  il2cpp_runtime_helper_022b2c90();
label_04125b71:
  il2cpp_runtime_helper_022b2ca0();
label_04125b76:
  il2cpp_runtime_helper_022b2c90();
label_04125b7b:
  uVar6 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar6,0);
label_04125b8a:
  uVar6 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar6,0);
  goto label_04125b99;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterAddonInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x41257e0

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicClassInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_00;
  CustomLogic_CustomLogicClassInstance_array *pCVar3;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  Il2CppObject *extraout_RDX;
  CustomLogic_CustomLogicClassInstance_o *pCVar9;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_06;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  CustomLogic_CustomLogicComponentInstance_o *pCVar13;
  CustomLogic_CustomLogicComponentInstance_o *__this_07;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  Il2CppRGCTXData *pIStack_48;
  
  pCVar9 = instance;
  if (g_data_057aca12 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057aca12 = '\x01';
  }
  __this_00 = (__this->fields)._addonInstances;
  __this_06 = (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
    pCVar9 = instance;
    bVar4 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                       MethodInfo_Boolean_Contains);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar4 != '\0') {
      return;
    }
    __this_06 = (__this->fields)._addonInstances;
    if (__this_06 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
      piVar1 = &(__this_06->fields)._version;
      *piVar1 = *piVar1 + 1;
      pCVar3 = (__this_06->fields)._items;
      if (pCVar3 != (CustomLogic_CustomLogicClassInstance_array *)0x0) {
        uVar2 = (__this_06->fields)._size;
        if ((uint)pCVar3->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)instance,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (__this_06->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = instance;
        il2cpp_runtime_helper_022b4080(pCVar3->m_Items + (int)uVar2,instance);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057aca13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca13 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pCVar13 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (__this_06[1].monitor != (void *)0x0) {
    x = *(UnityEngine_Object_o **)((long)__this_06[1].monitor + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (__this_06[2].klass != (System_Collections_Generic_List_CustomLogicClassInstance__c *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_object__o *)__this_06[2].klass,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_60._0_8_;
      pIVar12 = (Il2CppType *)local_60._8_8_;
      __this_07 = local_50;
      if (pCVar9 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
        while (__this_02.fields._8_8_ = pIVar12,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
              __this_02.fields._current = (Il2CppObject *)__this_07,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
              (char)bVar4 != '\0') {
          pCVar13 = __this_07;
          pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar5 == (System_Object_array *)0x0) goto label_04125b6c;
          if ((int)pSVar5->max_length == 0) goto label_04125b71;
          pSVar5->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items,0);
          if ((extraout_RDX != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_helper_023051f0(extraout_RDX,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
          goto label_04125b7b;
          if ((uint)pSVar5->max_length < 2) goto label_04125b67;
          pSVar5->m_Items[1] = extraout_RDX;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,extraout_RDX);
          if (__this_07 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_07,"OnNetworkTransfer",pSVar5,(MethodInfo *)0x0);
          __this_07 = pCVar13;
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar12,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
              __this_01.fields._current = (Il2CppObject *)__this_07,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
              (char)bVar4 != '\0') {
          pCVar13 = __this_07;
          pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar5 == (System_Object_array *)0x0) goto label_04125b6c;
          lVar6 = il2cpp_runtime_helper_023051f0(pCVar9,(((pSVar5->obj).klass)->_1).element_class);
          if (lVar6 == 0) goto label_04125b8a;
          if ((int)pSVar5->max_length == 0) goto label_04125b71;
          pSVar5->m_Items[0] = (Il2CppObject *)pCVar9;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items,pCVar9);
          if ((extraout_RDX != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_helper_023051f0(extraout_RDX,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
          goto label_04125b7b;
          if ((uint)pSVar5->max_length < 2) goto label_04125b67;
          pSVar5->m_Items[1] = extraout_RDX;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,extraout_RDX);
          if (__this_07 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_07,"OnNetworkTransfer",pSVar5,(MethodInfo *)0x0);
          __this_07 = pCVar13;
        }
      }
      __this_03.fields._8_8_ = pIVar12;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_03.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      return;
    }
  }
label_04125b99:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar6 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar12;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_04.fields._current = (Il2CppObject *)pCVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_05.fields._8_8_ = pIVar12;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_05.fields._current = (Il2CppObject *)pCVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar10._0_8_);
label_04125b67:
  il2cpp_runtime_helper_022b2ca0();
label_04125b6c:
  il2cpp_runtime_helper_022b2c90();
label_04125b71:
  il2cpp_runtime_helper_022b2ca0();
label_04125b76:
  il2cpp_runtime_helper_022b2c90();
label_04125b7b:
  uVar7 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar7,0);
label_04125b8a:
  uVar7 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar7,0);
  goto label_04125b99;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkTransfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* oldOwner, CustomLogic_CustomLogicPlayerBuiltin_o* newOwner, const MethodInfo* method);
// 0x41258b0

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *oldOwner,
               CustomLogic_CustomLogicPlayerBuiltin_o *newOwner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  CustomLogic_CustomLogicComponentInstance_o *pCVar10;
  CustomLogic_CustomLogicComponentInstance_o *__this_06;
  undefined1 auStack_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_38;
  
  if (g_data_057aca13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca13 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pCVar10 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
      pIVar9 = (Il2CppType *)auStack_48._8_8_;
      __this_06 = pCStack_38;
      if (oldOwner == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (__this_02.fields._8_8_ = pIVar9,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              __this_02.fields._current = (Il2CppObject *)__this_06,
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar2 != '\0') {
          pCVar10 = __this_06;
          pSVar3 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar3 == (System_Object_array *)0x0) goto label_04125b6c;
          if ((int)pSVar3->max_length == 0) goto label_04125b71;
          pSVar3->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items,0);
          if ((newOwner != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (lVar4 = il2cpp_runtime_helper_023051f0(newOwner,(((pSVar3->obj).klass)->_1).element_class), lVar4 == 0))
          goto label_04125b7b;
          if ((uint)pSVar3->max_length < 2) goto label_04125b67;
          pSVar3->m_Items[1] = (Il2CppObject *)newOwner;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,newOwner);
          if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_06,"OnNetworkTransfer",pSVar3,(MethodInfo *)0x0);
          __this_06 = pCVar10;
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar9,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              __this_01.fields._current = (Il2CppObject *)__this_06,
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar2 != '\0') {
          pCVar10 = __this_06;
          pSVar3 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar3 == (System_Object_array *)0x0) goto label_04125b6c;
          lVar4 = il2cpp_runtime_helper_023051f0(oldOwner,(((pSVar3->obj).klass)->_1).element_class);
          if (lVar4 == 0) goto label_04125b8a;
          if ((int)pSVar3->max_length == 0) goto label_04125b71;
          pSVar3->m_Items[0] = (Il2CppObject *)oldOwner;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items,oldOwner);
          if ((newOwner != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (lVar4 = il2cpp_runtime_helper_023051f0(newOwner,(((pSVar3->obj).klass)->_1).element_class), lVar4 == 0))
          goto label_04125b7b;
          if ((uint)pSVar3->max_length < 2) goto label_04125b67;
          pSVar3->m_Items[1] = (Il2CppObject *)newOwner;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,newOwner);
          if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_06,"OnNetworkTransfer",pSVar3,(MethodInfo *)0x0);
          __this_06 = pCVar10;
        }
      }
      __this_03.fields._8_8_ = pIVar9;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_03.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
  }
label_04125b99:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar4 = *plVar6;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar9;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_04.fields._current = (Il2CppObject *)pCVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_05.fields._8_8_ = pIVar9;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_05.fields._current = (Il2CppObject *)pCVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
label_04125b67:
  il2cpp_runtime_helper_022b2ca0();
label_04125b6c:
  il2cpp_runtime_helper_022b2c90();
label_04125b71:
  il2cpp_runtime_helper_022b2ca0();
label_04125b76:
  il2cpp_runtime_helper_022b2c90();
label_04125b7b:
  uVar5 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar5,0);
label_04125b8a:
  uVar5 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar5,0);
  goto label_04125b99;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSyncDynamic
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x4125c70

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,CustomLogic_CustomLogicPhotonSync_o *sync,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o **ppCVar1;
  byte bVar2;
  int32_t id;
  Photon_Realtime_Player_o *pPVar3;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar8;
  CustomLogic_BuiltinClassInstance_c *pCVar9;
  CustomLogic_BuiltinClassInstance_o *__this_06;
  CustomLogic_BuiltinClassInstance_o *__this_07;
  System_Object_array *pSVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  MethodInfo *extraout_RDX;
  CustomLogic_CustomLogicPhotonSync_o *pCVar14;
  CustomLogic_CustomLogicPhotonSync_o *pCVar15;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar17;
  Il2CppType *pIVar18;
  CustomLogic_CustomLogicComponentInstance_o *pCVar19;
  CustomLogic_CustomLogicComponentInstance_o *__this_08;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_68;
  undefined1 auStack_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057aca14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057aca14 = '\x01';
    method = extraout_RDX;
  }
  pCVar15 = (CustomLogic_CustomLogicPhotonSync_o *)&(__this->fields).Sync;
  (__this->fields).Sync = sync;
  pCVar14 = sync;
  il2cpp_runtime_helper_022b4080(pCVar15,sync,method);
  if (sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pCVar14 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
    pCVar15 = sync;
    pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0);
    if ((pPVar7 != (Photon_Pun_PhotonView_o *)0x0) &&
       (pPVar3 = (pPVar7->fields)._Owner_k__BackingField, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
      (__this->fields).OwnerId = (pPVar3->fields).actorNumber;
      __this_00 = (__this->fields).Sync;
      pCVar15 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
      if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        bVar2 = (byte)(__this->fields)._isTransformSynced;
        pCVar14 = (CustomLogic_CustomLogicPhotonSync_o *)(ulong)bVar2;
        CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(__this_00,(uint)bVar2,(MethodInfo *)0x0);
        sync = (CustomLogic_CustomLogicPhotonSync_o *)&TypeInfo_CustomLogicManager;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        pCVar15 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
        if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar8 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (pCVar4,(__this->fields).MapObject,(MethodInfo *)0x0);
          if (pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            (pCVar8->fields)._NetworkView_k__BackingField = __this;
            il2cpp_runtime_helper_022b4080(&(pCVar8->fields)._NetworkView_k__BackingField,__this);
            return;
          }
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)sync;
  if (g_data_057aca15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca15 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pCVar19 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  id = *(int32_t *)&(pCVar15->fields).PhotonView;
  ppCVar1 = (CustomLogic_CustomLogicPhotonSync_o **)&(pCVar15->fields).ObjectId;
  *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar15->fields).ObjectId = pCVar14;
  il2cpp_runtime_helper_022b4080(ppCVar1);
  if (((pCVar14 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
      (pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)pCVar14,(MethodInfo *)0x0),
      pPVar7 != (Photon_Pun_PhotonView_o *)0x0)) &&
     (pPVar3 = (pPVar7->fields)._Owner_k__BackingField, pPVar3 != (Photon_Realtime_Player_o *)0x0)) {
    *(int32_t *)&(pCVar15->fields).PhotonView = (pPVar3->fields).actorNumber;
    pCVar14 = *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar15->fields).ObjectId;
    if (pCVar14 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                (pCVar14,(uint)*(byte *)&(pCVar15->fields)._correctPosition.fields.x,(MethodInfo *)0x0);
      __this_08 = pCVar19;
      if (id < 0) goto label_041261a4;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = (CustomLogic_BuiltinClassInstance_o *)0x0;
      pCVar9 = (CustomLogic_BuiltinClassInstance_c *)Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
      if (pCVar9 != (CustomLogic_BuiltinClassInstance_c *)0x0) {
        __this_06 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
        if (g_data_057aca2f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057aca2f = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_06,(MethodInfo *)0x0);
        __this_06[1].klass = pCVar9;
        il2cpp_runtime_helper_022b4080(__this_06 + 1);
      }
      pCVar14 = *ppCVar1;
      if ((pCVar14 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
         (pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)pCVar14,(MethodInfo *)0x0),
         pPVar7 != (Photon_Pun_PhotonView_o *)0x0)) {
        pCVar9 = (CustomLogic_BuiltinClassInstance_c *)(pPVar7->fields)._Owner_k__BackingField;
        __this_07 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
        if (g_data_057aca2f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057aca2f = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_07,(MethodInfo *)0x0);
        __this_07[1].klass = pCVar9;
        il2cpp_runtime_helper_022b4080(__this_07 + 1);
        pMVar5 = (Map_MapObject_o *)(pCVar15->fields)._rigidbody;
        if (pMVar5 != (Map_MapObject_o *)0x0) {
          x = (UnityEngine_Object_o *)(pMVar5->fields).GameObject;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          __this_08 = pCVar19;
          if ((char)bVar6 == '\0') goto label_041261a4;
          pCVar8 = (pCVar15->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
          if (pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                       (System_Collections_Generic_List_object__o *)pCVar8,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
            pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
            pIVar18 = (Il2CppType *)auStack_60._8_8_;
            __this_08 = pCStack_50;
            pCStack_68 = pCVar15;
            if (__this_06 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
              while (__this_02.fields._8_8_ = pIVar18,
                    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar17,
                    __this_02.fields._current = (Il2CppObject *)__this_08,
                    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
                    (char)bVar6 != '\0') {
                pCVar19 = __this_08;
                pSVar10 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
                if (pSVar10 == (System_Object_array *)0x0) goto label_04126201;
                if ((int)pSVar10->max_length == 0) goto label_04126206;
                pSVar10->m_Items[0] = (Il2CppObject *)0x0;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items,0);
                lVar11 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar10->obj).klass)->_1).element_class);
                if (lVar11 == 0) goto label_0412620b;
                if ((uint)pSVar10->max_length < 2) goto label_0412621f;
                pSVar10->m_Items[1] = (Il2CppObject *)__this_07;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 1,__this_07);
                if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_0412621a;
                CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                          (__this_08,"OnNetworkTransfer",pSVar10,(MethodInfo *)0x0);
                __this_08 = pCVar19;
              }
            }
            else {
              while (__this_01.fields._8_8_ = pIVar18,
                    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar17,
                    __this_01.fields._current = (Il2CppObject *)__this_08,
                    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
                    (char)bVar6 != '\0') {
                pCVar19 = __this_08;
                pSVar10 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
                if (pSVar10 == (System_Object_array *)0x0) goto label_04126201;
                lVar11 = il2cpp_runtime_helper_023051f0(__this_06,(((pSVar10->obj).klass)->_1).element_class);
                if (lVar11 == 0) goto label_04126229;
                if ((int)pSVar10->max_length == 0) goto label_04126206;
                pSVar10->m_Items[0] = (Il2CppObject *)__this_06;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items,__this_06);
                lVar11 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar10->obj).klass)->_1).element_class);
                if (lVar11 == 0) goto label_0412620b;
                if ((uint)pSVar10->max_length < 2) goto label_0412621f;
                pSVar10->m_Items[1] = (Il2CppObject *)__this_07;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 1,__this_07);
                if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_0412621a;
                CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                          (__this_08,"OnNetworkTransfer",pSVar10,(MethodInfo *)0x0);
                __this_08 = pCVar19;
              }
            }
            __this_03.fields._8_8_ = pIVar18;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
            __this_03.fields._current = (Il2CppObject *)__this_08;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
            goto label_041261a4;
          }
        }
      }
    }
  }
label_04126224:
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_04126229:
    uVar12 = il2cpp_runtime_helper_0231b270();
    auVar16 = il2cpp_runtime_helper_022b2b10(uVar12,0);
    if (auVar16._8_4_ != 1) break;
    plVar13 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar11 = *plVar13;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar18;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
    __this_04.fields._current = (Il2CppObject *)pCVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    pCVar15 = pCStack_68;
    __this_08 = pCVar19;
    if (lVar11 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar11);
      break;
    }
label_041261a4:
    pCVar19 = __this_08;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pCVar19 = __this_08;
    }
    pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (pCVar4,(Map_MapObject_o *)(pCVar15->fields)._rigidbody,(MethodInfo *)0x0);
      if (pCVar8 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        (pCVar8->fields)._NetworkView_k__BackingField = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pCVar15
        ;
        il2cpp_runtime_helper_022b4080(&(pCVar8->fields)._NetworkView_k__BackingField,pCVar15);
      }
      return;
    }
  }
  __this_05.fields._8_8_ = pIVar18;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
  __this_05.fields._current = (Il2CppObject *)pCVar19;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar16._0_8_);
label_04126201:
  il2cpp_runtime_helper_022b2c90();
label_04126206:
  il2cpp_runtime_helper_022b2ca0();
label_0412620b:
  uVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar12,0);
label_0412621a:
  il2cpp_runtime_helper_022b2c90();
label_0412621f:
  il2cpp_runtime_helper_022b2ca0();
  goto label_04126224;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSync
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x4125d50

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,CustomLogic_CustomLogicPhotonSync_o *sync,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o **ppCVar1;
  int32_t id;
  Photon_Realtime_Player_o *pPVar2;
  CustomLogic_CustomLogicPhotonSync_o *pCVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  CustomLogic_BuiltinClassInstance_c *pCVar7;
  CustomLogic_BuiltinClassInstance_o *__this_07;
  CustomLogic_BuiltinClassInstance_o *__this_08;
  System_Object_array *pSVar8;
  long lVar9;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar10;
  undefined8 uVar11;
  long *plVar12;
  MethodInfo *extraout_RDX;
  undefined1 auVar13 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  CustomLogic_CustomLogicComponentInstance_o *pCVar16;
  CustomLogic_CustomLogicComponentInstance_o *__this_09;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_50;
  undefined1 local_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  if (g_data_057aca15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca15 = '\x01';
    method = extraout_RDX;
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pCVar16 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  id = (__this->fields).OwnerId;
  ppCVar1 = &(__this->fields).Sync;
  (__this->fields).Sync = sync;
  il2cpp_runtime_helper_022b4080(ppCVar1,sync,method);
  if (((sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
      (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0),
      pPVar6 != (Photon_Pun_PhotonView_o *)0x0)) &&
     (pPVar2 = (pPVar6->fields)._Owner_k__BackingField, pPVar2 != (Photon_Realtime_Player_o *)0x0)) {
    (__this->fields).OwnerId = (pPVar2->fields).actorNumber;
    pCVar3 = (__this->fields).Sync;
    if (pCVar3 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                (pCVar3,(uint)(byte)(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
      __this_09 = pCVar16;
      if (id < 0) goto label_041261a4;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_07 = (CustomLogic_BuiltinClassInstance_o *)0x0;
      pCVar7 = (CustomLogic_BuiltinClassInstance_c *)Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
      if (pCVar7 != (CustomLogic_BuiltinClassInstance_c *)0x0) {
        __this_07 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
        if (g_data_057aca2f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057aca2f = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_07,(MethodInfo *)0x0);
        __this_07[1].klass = pCVar7;
        il2cpp_runtime_helper_022b4080(__this_07 + 1);
      }
      pCVar3 = *ppCVar1;
      if ((pCVar3 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
         (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)pCVar3,(MethodInfo *)0x0),
         pPVar6 != (Photon_Pun_PhotonView_o *)0x0)) {
        pCVar7 = (CustomLogic_BuiltinClassInstance_c *)(pPVar6->fields)._Owner_k__BackingField;
        __this_08 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
        if (g_data_057aca2f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
          g_data_057aca2f = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_08,(MethodInfo *)0x0);
        __this_08[1].klass = pCVar7;
        il2cpp_runtime_helper_022b4080(__this_08 + 1);
        pMVar4 = (__this->fields).MapObject;
        if (pMVar4 != (Map_MapObject_o *)0x0) {
          x = (UnityEngine_Object_o *)(pMVar4->fields).GameObject;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          __this_09 = pCVar16;
          if ((char)bVar5 == '\0') goto label_041261a4;
          __this_00 = (__this->fields)._classInstances;
          if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                       (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
            pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
            pIVar15 = (Il2CppType *)local_48._8_8_;
            __this_09 = local_38;
            local_50 = __this;
            if (__this_07 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
              while (__this_03.fields._8_8_ = pIVar15,
                    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
                    __this_03.fields._current = (Il2CppObject *)__this_09,
                    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                    (char)bVar5 != '\0') {
                pCVar16 = __this_09;
                pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
                if (pSVar8 == (System_Object_array *)0x0) goto label_04126201;
                if ((int)pSVar8->max_length == 0) goto label_04126206;
                pSVar8->m_Items[0] = (Il2CppObject *)0x0;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items,0);
                lVar9 = il2cpp_runtime_helper_023051f0(__this_08,(((pSVar8->obj).klass)->_1).element_class);
                if (lVar9 == 0) goto label_0412620b;
                if ((uint)pSVar8->max_length < 2) goto label_0412621f;
                pSVar8->m_Items[1] = (Il2CppObject *)__this_08;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1,__this_08);
                if (__this_09 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_0412621a;
                CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                          (__this_09,"OnNetworkTransfer",pSVar8,(MethodInfo *)0x0);
                __this_09 = pCVar16;
              }
            }
            else {
              while (__this_02.fields._8_8_ = pIVar15,
                    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
                    __this_02.fields._current = (Il2CppObject *)__this_09,
                    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                    (char)bVar5 != '\0') {
                pCVar16 = __this_09;
                pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
                if (pSVar8 == (System_Object_array *)0x0) goto label_04126201;
                lVar9 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar8->obj).klass)->_1).element_class);
                if (lVar9 == 0) goto label_04126229;
                if ((int)pSVar8->max_length == 0) goto label_04126206;
                pSVar8->m_Items[0] = (Il2CppObject *)__this_07;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items,__this_07);
                lVar9 = il2cpp_runtime_helper_023051f0(__this_08,(((pSVar8->obj).klass)->_1).element_class);
                if (lVar9 == 0) goto label_0412620b;
                if ((uint)pSVar8->max_length < 2) goto label_0412621f;
                pSVar8->m_Items[1] = (Il2CppObject *)__this_08;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1,__this_08);
                if (__this_09 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_0412621a;
                CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                          (__this_09,"OnNetworkTransfer",pSVar8,(MethodInfo *)0x0);
                __this_09 = pCVar16;
              }
            }
            __this_04.fields._8_8_ = pIVar15;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
            __this_04.fields._current = (Il2CppObject *)__this_09;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            goto label_041261a4;
          }
        }
      }
    }
  }
label_04126224:
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_04126229:
    uVar11 = il2cpp_runtime_helper_0231b270();
    auVar13 = il2cpp_runtime_helper_022b2b10(uVar11,0);
    if (auVar13._8_4_ != 1) break;
    plVar12 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar9 = *plVar12;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar15;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_05.fields._current = (Il2CppObject *)pCVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    __this = local_50;
    __this_09 = pCVar16;
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      break;
    }
label_041261a4:
    pCVar16 = __this_09;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pCVar16 = __this_09;
    }
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar10 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                          (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
      if (pCVar10 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        (pCVar10->fields)._NetworkView_k__BackingField = __this;
        il2cpp_runtime_helper_022b4080(&(pCVar10->fields)._NetworkView_k__BackingField,__this);
      }
      return;
    }
  }
  __this_06.fields._8_8_ = pIVar15;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
  __this_06.fields._current = (Il2CppObject *)pCVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar13._0_8_);
label_04126201:
  il2cpp_runtime_helper_022b2c90();
label_04126206:
  il2cpp_runtime_helper_022b2ca0();
label_0412620b:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
label_0412621a:
  il2cpp_runtime_helper_022b2c90();
label_0412621f:
  il2cpp_runtime_helper_022b2ca0();
  goto label_04126224;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x4126310

void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o **ppSVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Object_array *obj;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  if (g_data_057aca16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    il2cpp_runtime_helper_023445d0(&"SendNetworkStream");
    g_data_057aca16 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pSVar4 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(pSVar4,MethodInfo_List_1_System_Object);
  ppSVar1 = &(__this->fields)._streamObjects;
  (__this->fields)._streamObjects = pSVar4;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar4);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    while( true ) {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = pSVar7;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = pSVar7;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        goto label_0412644a;
      }
      if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                (__this_05,"SendNetworkStream",(System_Object_array *)0x0,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_041264da:
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._list = pSVar7;
      __this_04.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = pSVar7;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_041264da;
    }
label_0412644a:
    pSVar4 = *ppSVar1;
    if ((pSVar4 != (System_Collections_Generic_List_object__o *)0x0) &&
       (obj = System_Collections_Generic_List_object___ToArray(pSVar4,MethodInfo_Object_ToArray),
       stream != (Photon_Pun_PhotonStream_o *)0x0)) {
      Photon_Pun_PhotonStream__SendNext(stream,&obj->obj,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_Object_array* objs, const MethodInfo* method);
// 0x4126510

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_Object_array *objs,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_05;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  CustomLogic_CustomLogicComponentInstance_o *__this_06;
  
  if (g_data_057aca17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkStream");
    g_data_057aca17 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  __this_06 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor_362ba10
            (__this_05,(System_Collections_Generic_IEnumerable_T__o *)objs,MethodInfo_List_1_System_Object);
  (__this->fields)._streamObjects = __this_05;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._streamObjects);
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._list = pSVar6;
        __this_01.fields._current = (Il2CppObject *)__this_06;
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar3 == '\0') {
          __this_02.fields._8_8_ = pIVar7;
          __this_02.fields._list = pSVar6;
          __this_02.fields._current = (Il2CppObject *)__this_06;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return;
        }
        if (__this_06 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (__this_06,"OnNetworkStream",(System_Object_array *)0x0,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, double sentServerTime, const MethodInfo* method);
// 0x4126710

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,double sentServerTime,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff68;
  CustomLogic_CustomLogicPlayerBuiltin_o *in_stack_ffffffffffffff70;
  undefined1 local_80 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_70;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  CustomLogic_CustomLogicComponentInstance_o *local_58;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_50;
  System_Collections_Generic_List_Enumerator_T__c *local_48;
  Il2CppType *pIStack_40;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  local_50 = __this;
  if (g_data_057aca18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkMessage");
    g_data_057aca18 = '\x01';
  }
  local_48 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  local_38 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar6 == 0) {
    return;
  }
  pMVar1 = (local_50->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    __this_00 = (local_50->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      local_38 = local_70;
      local_48 = (System_Collections_Generic_List_Enumerator_T__c *)local_80._0_8_;
      pIStack_40 = (Il2CppType *)local_80._8_8_;
      in_stack_ffffffffffffff70 = player;
      if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (__this_03.fields._8_8_ = in_stack_ffffffffffffff70,
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_03.fields._current = (Il2CppObject *)sentServerTime,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), pCVar3 = local_38,
              (char)bVar4 != '\0') {
          pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
          if (pSVar5 == (System_Object_array *)0x0) goto label_04126efd;
          if ((int)pSVar5->max_length == 0) goto label_04126f02;
          pSVar5->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items,0);
          if ((message != (System_String_o *)0x0) &&
             (lVar6 = il2cpp_runtime_helper_023051f0(message,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
          goto label_04126f0c;
          if ((uint)pSVar5->max_length < 2) goto label_04126ef3;
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,message);
          local_80._0_8_ = sentServerTime;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,local_80);
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
          goto label_04126f1b;
          if ((uint)pSVar5->max_length < 3) goto label_04126ef8;
          pSVar5->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2,pIVar7);
          if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04126f07;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (pCVar3,"OnNetworkMessage",pSVar5,(MethodInfo *)0x0);
        }
      }
      else {
        while (__this_02.fields._8_8_ = in_stack_ffffffffffffff70,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_02.fields._current = (Il2CppObject *)sentServerTime,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), pCVar3 = local_38,
              (char)bVar4 != '\0') {
          pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
          if (pSVar5 == (System_Object_array *)0x0) goto label_04126efd;
          lVar6 = il2cpp_runtime_helper_023051f0(player,(((pSVar5->obj).klass)->_1).element_class);
          if (lVar6 == 0) goto label_04126f2a;
          if ((int)pSVar5->max_length == 0) goto label_04126f02;
          pSVar5->m_Items[0] = (Il2CppObject *)player;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items,player);
          if ((message != (System_String_o *)0x0) &&
             (lVar6 = il2cpp_runtime_helper_023051f0(message,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
          goto label_04126f0c;
          if ((uint)pSVar5->max_length < 2) goto label_04126ef3;
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,message);
          local_80._0_8_ = sentServerTime;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,local_80);
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7,(((pSVar5->obj).klass)->_1).element_class), lVar6 == 0))
          goto label_04126f1b;
          if ((uint)pSVar5->max_length < 3) goto label_04126ef8;
          pSVar5->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2,pIVar7);
          if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04126f07;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (pCVar3,"OnNetworkMessage",pSVar5,(MethodInfo *)0x0);
        }
      }
      __this_04.fields._8_8_ = in_stack_ffffffffffffff70;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_04.fields._current = (Il2CppObject *)sentServerTime;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      __this_01 = (local_50->fields)._addonInstances;
      if (__this_01 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                   (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicClassInstance);
        local_58 = local_70;
        local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_80._0_8_;
        pIStack_60 = (Il2CppType *)local_80._8_8_;
        if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
          do {
            do {
              do {
                __this_06.fields._8_8_ = in_stack_ffffffffffffff70;
                __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                __this_06.fields._current = (Il2CppObject *)sentServerTime;
                bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_06,(MethodInfo_321A1D0 *)&local_68);
                pCVar3 = local_58;
                if ((char)bVar4 == '\0') {
label_04126ecb:
                  __this_07.fields._8_8_ = in_stack_ffffffffffffff70;
                  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                  __this_07.fields._current = (Il2CppObject *)sentServerTime;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_07,(MethodInfo_321A1C0 *)&local_68);
                  return;
                }
                if (local_58 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04126eee;
              } while ((char)(local_58->fields).Enabled == '\0');
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              }
              else {
                pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              }
            } while ((pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                    (bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod
                                       (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",
                                        (MethodInfo *)0x0), (char)bVar4 == '\0'));
            pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
            if (pSVar5 == (System_Object_array *)0x0) goto label_04126f3e;
            if ((int)pSVar5->max_length == 0) goto label_04126f43;
            pSVar5->m_Items[0] = (Il2CppObject *)in_stack_ffffffffffffff70;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
            if ((message != (System_String_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(message), lVar6 == 0))
            goto label_04126f70;
            if ((uint)pSVar5->max_length < 2) goto label_04126f4d;
            pSVar5->m_Items[1] = (Il2CppObject *)message;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,message);
            local_80._0_8_ = sentServerTime;
            pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0);
            if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
            goto label_04126f61;
            if ((uint)pSVar5->max_length < 3) goto label_04126f48;
            pSVar5->m_Items[2] = pIVar7;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2,pIVar7);
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",pSVar5,0,
                       (MethodInfo *)0x0);
          } while( true );
        }
        while( true ) {
          do {
            do {
              __this_05.fields._8_8_ = in_stack_ffffffffffffff70;
              __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
              __this_05.fields._current = (Il2CppObject *)sentServerTime;
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_05,(MethodInfo_321A1D0 *)&local_68);
              pCVar3 = local_58;
              if ((char)bVar4 == '\0') goto label_04126ecb;
              if (local_58 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04126eee;
            } while ((char)(local_58->fields).Enabled == '\0');
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            }
            else {
              pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            }
          } while ((pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                  (bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod
                                     (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",
                                      (MethodInfo *)0x0), (char)bVar4 == '\0'));
          pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if (pSVar5 == (System_Object_array *)0x0) goto label_04126f3e;
          lVar6 = il2cpp_runtime_helper_023051f0(in_stack_ffffffffffffff70);
          if (lVar6 == 0) goto label_04126f52;
          if ((int)pSVar5->max_length == 0) goto label_04126f43;
          pSVar5->m_Items[0] = (Il2CppObject *)in_stack_ffffffffffffff70;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
          if ((message != (System_String_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(message), lVar6 == 0))
          goto label_04126f70;
          if ((uint)pSVar5->max_length < 2) goto label_04126f4d;
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1,message);
          local_80._0_8_ = sentServerTime;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0);
          if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
          goto label_04126f61;
          if ((uint)pSVar5->max_length < 3) break;
          pSVar5->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2,pIVar7);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",pSVar5,0,
                     (MethodInfo *)0x0);
        }
        goto label_04126f48;
      }
    }
  }
  goto label_04126f39;
label_04126eee:
  il2cpp_runtime_helper_022b2c90();
label_04126ef3:
  il2cpp_runtime_helper_022b2ca0();
label_04126ef8:
  il2cpp_runtime_helper_022b2ca0();
label_04126efd:
  il2cpp_runtime_helper_022b2c90();
label_04126f02:
  il2cpp_runtime_helper_022b2ca0();
label_04126f07:
  il2cpp_runtime_helper_022b2c90();
label_04126f0c:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
label_04126f1b:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
label_04126f2a:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
label_04126f39:
  il2cpp_runtime_helper_022b2c90();
label_04126f3e:
  il2cpp_runtime_helper_022b2c90();
label_04126f43:
  il2cpp_runtime_helper_022b2ca0();
label_04126f48:
  il2cpp_runtime_helper_022b2ca0();
label_04126f4d:
  il2cpp_runtime_helper_022b2ca0();
label_04126f52:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
label_04126f61:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
label_04126f70:
  uVar8 = il2cpp_runtime_helper_0231b270();
  auVar10 = il2cpp_runtime_helper_022b2b10(uVar8,0);
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar6 = *plVar9;
    __cxa_end_catch();
    __this_08.fields._8_8_ = in_stack_ffffffffffffff70;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_08.fields._current = (Il2CppObject *)sentServerTime;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_08,(MethodInfo_321A1C0 *)&local_68);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
    __this_10.fields._8_8_ = in_stack_ffffffffffffff70;
    __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_10.fields._current = (Il2CppObject *)sentServerTime;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  }
  else {
    __this_09.fields._8_8_ = in_stack_ffffffffffffff70;
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_09.fields._current = (Il2CppObject *)sentServerTime;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_09,(MethodInfo_321A1C0 *)&local_68);
  }
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$Transfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x41272c0

void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  CustomLogic_CustomLogicPhotonSync_o *pCVar5;
  long lVar6;
  Map_MapObject_c *pMVar7;
  long lVar8;
  Photon_Pun_PhotonView_o *pPVar9;
  Il2CppObject *item;
  undefined8 *puVar10;
  MethodInfo *message;
  MethodInfo *method_00;
  CustomLogic_CustomLogicPhotonSync_o *pCVar11;
  Map_MapObject_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *unaff_R14;
  undefined1 auVar12 [16];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCStack_40;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  
  pCVar11 = (__this->fields).Sync;
  message = (MethodInfo *)player;
  if (pCVar11 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    message = (MethodInfo *)0x0;
    uStack_20 = 0x41272da;
    pPVar9 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar11,(MethodInfo *)0x0);
    unaff_R14 = player;
    if (pPVar9 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((char)(pPVar9->fields)._IsMine_k__BackingField == '\0') {
        return;
      }
      pCVar5 = (__this->fields).Sync;
      pCVar11 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
      if (pCVar5 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__Transfer(pCVar5,player,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uStack_20 = 0x412730c;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = auVar12._0_8_;
  if ((message != (MethodInfo *)0x0) &&
     (pCVar5 = *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar11->fields).ObjectId,
     pCVar11 = (CustomLogic_CustomLogicPhotonSync_o *)0x0,
     pCVar5 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
    CustomLogic_CustomLogicPhotonSync__SendMessage
              (pCVar5,(Photon_Realtime_Player_o *)message->parameters,auVar12._8_8_,(MethodInfo *)0x0);
    return;
  }
  pcStack_28 = CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll;
  pcStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  pCVar11 = *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar11->fields).ObjectId;
  if (pCVar11 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageAll(pCVar11,(System_String_o *)message,(MethodInfo *)0x0);
    return;
  }
  uStack_30 = 0x4127347;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCVar11 = *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar11->fields).ObjectId;
  if (pCVar11 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageOthers(pCVar11,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    return;
  }
  pCStack_38 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x4127367;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  method_00 = message;
  pCStack_40 = __this;
  pCStack_38 = unaff_R14;
  if (g_data_057aca19 == '\0') {
    pMStack_50 = (MethodInfo *)0x412738f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aca19 = '\x01';
  }
  pMStack_50 = (MethodInfo *)0x412739e;
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj((Il2CppObject *)message,method_00);
  lVar8 = MethodInfo_Void_Add;
  __this_00 = (pCVar11->fields)._MapObject_k__BackingField;
  if (__this_00 != (Map_MapObject_o *)0x0) {
    piVar1 = (int *)((long)&(__this_00->fields).GameObject + 4);
    *piVar1 = *piVar1 + 1;
    lVar6 = *(long *)&__this_00->fields;
    if (lVar6 != 0) {
      uVar4 = *(uint *)&(__this_00->fields).GameObject;
      if (uVar4 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)&(__this_00->fields).GameObject = uVar4 + 1;
        *(Il2CppObject **)(lVar6 + 0x20 + (long)(int)uVar4 * 8) = item;
        il2cpp_runtime_helper_022b4080(lVar6 + (long)(int)uVar4 * 8 + 0x20,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  pMStack_50 = (MethodInfo *)0x412740c;
  il2cpp_runtime_helper_022b2c90();
  pMStack_50 = message;
  if (g_data_057aca1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1b = '\x01';
  }
  if (__this_00 != (Map_MapObject_o *)0x0) {
    pMVar7 = __this_00->klass;
    bVar2 = (pMVar7->_2).naturalAligment;
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return;
      }
      uStack_60 = *(undefined8 *)&(__this_00->fields).BaseScale.fields.z;
      uStack_58 = *(undefined4 *)&(__this_00->fields).ComponentInstances;
      uStack_54 = *(undefined4 *)((long)&(__this_00->fields).ComponentInstances + 4);
      puVar10 = &TypeInfo_Quaternion;
    }
    else {
      uStack_58 = *(undefined4 *)&(__this_00->fields).ComponentInstances;
      uStack_60 = *(undefined8 *)&(__this_00->fields).BaseScale.fields.z;
      puVar10 = &TypeInfo_Vector3;
    }
    il2cpp_runtime_helper_02304f30(*puVar10,&uStack_60);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* target, System_String_o* msg, const MethodInfo* method);
// 0x4127310

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *target,System_String_o *msg,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  Map_MapObject_c *pMVar6;
  long lVar7;
  Il2CppObject *item;
  undefined8 *puVar8;
  MethodInfo *method_00;
  CustomLogic_CustomLogicPhotonSync_o *pCVar9;
  Map_MapObject_o *__this_00;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  MethodInfo *pMStack_38;
  undefined8 uStack_30;
  
  if ((target != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pCVar9 = (__this->fields).Sync, __this = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0,
     pCVar9 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
    CustomLogic_CustomLogicPhotonSync__SendMessage(pCVar9,(target->fields).Player,msg,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar9 = (__this->fields).Sync;
  if (pCVar9 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageAll(pCVar9,(System_String_o *)target,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar9 = *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar9->fields).ObjectId;
  if (pCVar9 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageOthers(pCVar9,(System_String_o *)target,(MethodInfo *)0x0);
    return;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  method_00 = (MethodInfo *)target;
  if (g_data_057aca19 == '\0') {
    pMStack_38 = (MethodInfo *)0x412738f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aca19 = '\x01';
  }
  pMStack_38 = (MethodInfo *)0x412739e;
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj((Il2CppObject *)target,method_00);
  lVar7 = MethodInfo_Void_Add;
  __this_00 = (pCVar9->fields)._MapObject_k__BackingField;
  if (__this_00 != (Map_MapObject_o *)0x0) {
    piVar1 = (int *)((long)&(__this_00->fields).GameObject + 4);
    *piVar1 = *piVar1 + 1;
    lVar5 = *(long *)&__this_00->fields;
    if (lVar5 != 0) {
      uVar4 = *(uint *)&(__this_00->fields).GameObject;
      if (uVar4 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(__this_00->fields).GameObject = uVar4 + 1;
        *(Il2CppObject **)(lVar5 + 0x20 + (long)(int)uVar4 * 8) = item;
        il2cpp_runtime_helper_022b4080(lVar5 + (long)(int)uVar4 * 8 + 0x20,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  pMStack_38 = (MethodInfo *)0x412740c;
  il2cpp_runtime_helper_022b2c90();
  pMStack_38 = (MethodInfo *)target;
  if (g_data_057aca1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1b = '\x01';
  }
  if (__this_00 != (Map_MapObject_o *)0x0) {
    pMVar6 = __this_00->klass;
    bVar2 = (pMVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pMVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pMVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return;
      }
      uStack_48 = *(undefined8 *)&(__this_00->fields).BaseScale.fields.z;
      uStack_40 = *(undefined4 *)&(__this_00->fields).ComponentInstances;
      uStack_3c = *(undefined4 *)((long)&(__this_00->fields).ComponentInstances + 4);
      puVar8 = &TypeInfo_Quaternion;
    }
    else {
      uStack_40 = *(undefined4 *)&(__this_00->fields).ComponentInstances;
      uStack_48 = *(undefined8 *)&(__this_00->fields).BaseScale.fields.z;
      puVar8 = &TypeInfo_Vector3;
    }
    il2cpp_runtime_helper_02304f30(*puVar8,&uStack_48);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x4127330

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  Map_MapObject_c *pMVar6;
  long lVar7;
  Il2CppObject *item;
  undefined8 *puVar8;
  MethodInfo *method_00;
  CustomLogic_CustomLogicPhotonSync_o *pCVar9;
  Map_MapObject_o *__this_00;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  
  pCVar9 = (__this->fields).Sync;
  if (pCVar9 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageAll(pCVar9,msg,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar9 = *(CustomLogic_CustomLogicPhotonSync_o **)&(pCVar9->fields).ObjectId;
  if (pCVar9 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageOthers(pCVar9,msg,(MethodInfo *)0x0);
    return;
  }
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  method_00 = (MethodInfo *)msg;
  if (g_data_057aca19 == '\0') {
    pMStack_30 = (MethodInfo *)0x412738f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aca19 = '\x01';
  }
  pMStack_30 = (MethodInfo *)0x412739e;
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj((Il2CppObject *)msg,method_00);
  lVar7 = MethodInfo_Void_Add;
  __this_00 = (pCVar9->fields)._MapObject_k__BackingField;
  if (__this_00 != (Map_MapObject_o *)0x0) {
    piVar1 = (int *)((long)&(__this_00->fields).GameObject + 4);
    *piVar1 = *piVar1 + 1;
    lVar5 = *(long *)&__this_00->fields;
    if (lVar5 != 0) {
      uVar4 = *(uint *)&(__this_00->fields).GameObject;
      if (uVar4 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(__this_00->fields).GameObject = uVar4 + 1;
        *(Il2CppObject **)(lVar5 + 0x20 + (long)(int)uVar4 * 8) = item;
        il2cpp_runtime_helper_022b4080(lVar5 + (long)(int)uVar4 * 8 + 0x20,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  pMStack_30 = (MethodInfo *)0x412740c;
  il2cpp_runtime_helper_022b2c90();
  pMStack_30 = (MethodInfo *)msg;
  if (g_data_057aca1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1b = '\x01';
  }
  if (__this_00 != (Map_MapObject_o *)0x0) {
    pMVar6 = __this_00->klass;
    bVar2 = (pMVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pMVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pMVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return;
      }
      uStack_40 = *(undefined8 *)&(__this_00->fields).BaseScale.fields.z;
      uStack_38 = *(undefined4 *)&(__this_00->fields).ComponentInstances;
      uStack_34 = *(undefined4 *)((long)&(__this_00->fields).ComponentInstances + 4);
      puVar8 = &TypeInfo_Quaternion;
    }
    else {
      uStack_38 = *(undefined4 *)&(__this_00->fields).ComponentInstances;
      uStack_40 = *(undefined8 *)&(__this_00->fields).BaseScale.fields.z;
      puVar8 = &TypeInfo_Vector3;
    }
    il2cpp_runtime_helper_02304f30(*puVar8,&uStack_40);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x4127350

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  Map_MapObject_c *pMVar6;
  long lVar7;
  Il2CppObject *item;
  undefined8 *puVar8;
  MethodInfo *method_00;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Map_MapObject_o *__this_01;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  MethodInfo *pMStack_28;
  undefined8 uStack_20;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,msg,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  method_00 = (MethodInfo *)msg;
  if (g_data_057aca19 == '\0') {
    pMStack_28 = (MethodInfo *)0x412738f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aca19 = '\x01';
  }
  pMStack_28 = (MethodInfo *)0x412739e;
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj((Il2CppObject *)msg,method_00);
  lVar7 = MethodInfo_Void_Add;
  __this_01 = (__this_00->fields)._MapObject_k__BackingField;
  if (__this_01 != (Map_MapObject_o *)0x0) {
    piVar1 = (int *)((long)&(__this_01->fields).GameObject + 4);
    *piVar1 = *piVar1 + 1;
    lVar5 = *(long *)&__this_01->fields;
    if (lVar5 != 0) {
      uVar4 = *(uint *)&(__this_01->fields).GameObject;
      if (uVar4 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(__this_01->fields).GameObject = uVar4 + 1;
        *(Il2CppObject **)(lVar5 + 0x20 + (long)(int)uVar4 * 8) = item;
        il2cpp_runtime_helper_022b4080(lVar5 + (long)(int)uVar4 * 8 + 0x20,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,item,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  pMStack_28 = (MethodInfo *)0x412740c;
  il2cpp_runtime_helper_022b2c90();
  pMStack_28 = (MethodInfo *)msg;
  if (g_data_057aca1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1b = '\x01';
  }
  if (__this_01 != (Map_MapObject_o *)0x0) {
    pMVar6 = __this_01->klass;
    bVar2 = (pMVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pMVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pMVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return;
      }
      uStack_38 = *(undefined8 *)&(__this_01->fields).BaseScale.fields.z;
      uStack_30 = *(undefined4 *)&(__this_01->fields).ComponentInstances;
      uStack_2c = *(undefined4 *)((long)&(__this_01->fields).ComponentInstances + 4);
      puVar8 = &TypeInfo_Quaternion;
    }
    else {
      uStack_30 = *(undefined4 *)&(__this_01->fields).ComponentInstances;
      uStack_38 = *(undefined8 *)&(__this_01->fields).BaseScale.fields.z;
      puVar8 = &TypeInfo_Vector3;
    }
    il2cpp_runtime_helper_02304f30(*puVar8,&uStack_38);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x4127370

void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_object__c *pSVar6;
  long lVar7;
  Il2CppObject *item;
  undefined8 *puVar8;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *__this_00;
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  Il2CppObject *pIStack_20;
  
  method_00 = (MethodInfo *)obj;
  if (g_data_057aca19 == '\0') {
    pIStack_20 = (Il2CppObject *)0x412738f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aca19 = '\x01';
  }
  pIStack_20 = (Il2CppObject *)0x412739e;
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(obj,method_00);
  lVar7 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._streamObjects;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar4 = (__this_00->fields)._size;
      if (uVar4 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar4 + 1;
        pSVar5->m_Items[(int)uVar4] = item;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  pIStack_20 = (Il2CppObject *)0x412740c;
  il2cpp_runtime_helper_022b2c90();
  pIStack_20 = obj;
  if (g_data_057aca1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1b = '\x01';
  }
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar6 = __this_00->klass;
    bVar2 = (pSVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar3 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pSVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return;
      }
      pvStack_30 = __this_00[1].monitor;
      uStack_28 = *(undefined4 *)&__this_00[1].fields._items;
      uStack_24 = *(undefined4 *)((long)&__this_00[1].fields._items + 4);
      puVar8 = &TypeInfo_Quaternion;
    }
    else {
      uStack_28 = *(undefined4 *)&__this_00[1].fields._items;
      pvStack_30 = __this_00[1].monitor;
      puVar8 = &TypeInfo_Vector3;
    }
    il2cpp_runtime_helper_02304f30(*puVar8,&pvStack_30);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$ReceiveStream
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x4127500

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_c *pCVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Quaternion_Fields *pUVar5;
  UnityEngine_Vector3_Fields *pUVar6;
  MethodInfo *method_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar7;
  
  if (g_data_057aca1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057aca1a = '\x01';
  }
  pSVar2 = (__this->fields)._streamObjects;
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pIVar4 = System_Collections_Generic_List_object___get_Item(pSVar2,0,MethodInfo_Object_get_Item);
    pIVar4 = CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj(pIVar4,method_00);
    pSVar2 = (__this->fields)._streamObjects;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt(pSVar2,0,MethodInfo_Void_RemoveAt);
      return pIVar4;
    }
  }
  pCVar7 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aca1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1c = '\x01';
  }
  if (pCVar7 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    __this_00 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
  }
  else {
    pCVar3 = pCVar7->klass;
    if (pCVar3 == TypeInfo_Vector3) {
      __this_00 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      if ((pCVar7->klass->_1).element_class != (TypeInfo_Vector3->_1).element_class) {
label_04127694:
        il2cpp_runtime_helper_022b2fd0(pCVar7);
        if (g_data_057aca1d == '\0') {
          il2cpp_runtime_helper_023445d0(&"NetworkView");
          g_data_057aca1d = '\x01';
        }
        return "NetworkView";
      }
      pUVar6 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440(pCVar7);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330
                ((CustomLogic_CustomLogicVector3Builtin_o *)__this_00,(UnityEngine_Vector3_o)*pUVar6,
                 (MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      __this_00 = pCVar7;
      if ((bVar1 <= (pCVar3->_2).naturalAligment) &&
         ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        __this_00 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0();
        if ((pCVar7->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Quaternion + 0x40)) goto label_04127694;
        pUVar5 = (UnityEngine_Quaternion_Fields *)il2cpp_runtime_helper_02305440(pCVar7);
        CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20
                  (__this_00,(UnityEngine_Quaternion_o)*pUVar5,(MethodInfo *)0x0);
      }
    }
  }
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SerializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x4127410

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  undefined8 *puVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *local_18;
  void *pvStack_10;
  
  if (g_data_057aca1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1b = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar3 = obj->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return obj;
      }
      local_18 = obj[3].klass;
      pvStack_10 = obj[3].monitor;
      puVar4 = &TypeInfo_Quaternion;
    }
    else {
      pvStack_10 = (void *)CONCAT44(pvStack_10._4_4_,*(undefined4 *)&obj[3].monitor);
      local_18 = obj[3].klass;
      puVar4 = &TypeInfo_Vector3;
    }
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(*puVar4,&local_18);
    return pIVar5;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$DeserializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x4127580

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  UnityEngine_Quaternion_Fields *pUVar3;
  UnityEngine_Vector3_Fields *pUVar4;
  
  if (g_data_057aca1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057aca1c = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
  }
  else {
    pIVar2 = obj->klass;
    if (pIVar2 == TypeInfo_Vector3) {
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
      if ((obj->klass->_1).element_class != (TypeInfo_Vector3->_1).element_class) {
label_04127694:
        il2cpp_runtime_helper_022b2fd0(obj);
        if (g_data_057aca1d == '\0') {
          il2cpp_runtime_helper_023445d0(&"NetworkView");
          g_data_057aca1d = '\x01';
        }
        return "NetworkView";
      }
      pUVar4 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440(obj);
      CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330
                ((CustomLogic_CustomLogicVector3Builtin_o *)__this,(UnityEngine_Vector3_o)*pUVar4,
                 (MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)obj;
      if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0();
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Quaternion + 0x40)) goto label_04127694;
        pUVar3 = (UnityEngine_Quaternion_Fields *)il2cpp_runtime_helper_02305440(obj);
        CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20
                  (__this,(UnityEngine_Quaternion_o)*pUVar3,(MethodInfo *)0x0);
      }
    }
  }
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x41276a0

System_String_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057aca1d == '\0') {
    il2cpp_runtime_helper_023445d0(&"NetworkView");
    g_data_057aca1d = '\x01';
  }
  return "NetworkView";
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x41276d0

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x41276e0

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x41276f0

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


