// Type: CustomLogic.CustomLogicDictBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDictBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicDictBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicDictBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDictBuiltin_o* CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40bddf0

CustomLogic_CustomLogicDictBuiltin_o *
CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  long lVar2;
  uint in_EAX;
  int32_t capacity;
  uint32_t uVar3;
  bool_conflict bVar4;
  il2cpp_array_size_t iVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  System_Exception_o *pSVar8;
  undefined8 uVar9;
  System_ArgumentException_o *__this;
  undefined8 *puVar10;
  System_Func_T__object__o *pSVar11;
  System_Func_T__object____object__o *pSVar12;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar13;
  System_Exception_o **ppSVar14;
  System_String_o *unaff_R14;
  undefined1 auVar15 [16];
  System_Exception_o *pSStack_30;
  System_Exception_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac540 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac540 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    iVar5 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar5 = args->max_length;
    if (iVar5 == 0) {
      pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicDictBuiltin);
      CustomLogic_CustomLogicDictBuiltin___ctor(pCVar13,method);
      return pCVar13;
    }
    if ((int)iVar5 == 1) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      capacity = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(obj,MethodInfo_Int32_ConvertTo_Int32);
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicDictBuiltin);
      CustomLogic_CustomLogicDictBuiltin___ctor_3fbd480(auVar15._0_8_,capacity,auVar15._8_8_);
      return auVar15._0_8_;
    }
  }
  uStack_18 = CONCAT44((int)iVar5,(uint)uStack_18);
  pSVar6 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicDictBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar8 = (System_Exception_o *)System_String__Concat_3af7150(pSVar7,pSVar6,str2,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)pSVar8,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicDictBuiltin_CreateInstance);
  pSStack_30 = (System_Exception_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar14 = &pSStack_30;
  pSStack_28 = pSVar8;
  if (g_data_057ac541 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Remove");
    il2cpp_runtime_helper_023445d0(&"Keys");
    il2cpp_runtime_helper_023445d0(&"Values");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Count");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ac541 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)__this,(MethodInfo *)0x0);
  if (uVar3 < 0x602b32ee) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar4 = System_String__op_Equality((System_String_o *)__this,"Clear",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = pSStack_28;
          if (g_data_057ac545 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__5_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac545 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
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
            pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar12;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar12);
          }
          pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          return pCVar13;
        }
      }
      else if ((uVar3 == 0x21a5901d) &&
              (bVar4 = System_String__op_Equality((System_String_o *)__this,"Remove",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac548 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac548 = '\x01';
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar12);
        }
        pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        return pCVar13;
      }
    }
    else if (uVar3 == 0x28b19ea3) {
      bVar4 = System_String__op_Equality((System_String_o *)__this,"Set",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac547 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac547 = '\x01';
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
          pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar12;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar12);
        }
        pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        return pCVar13;
      }
    }
    else if ((uVar3 == 0x602b32ed) &&
            (bVar4 = System_String__op_Equality((System_String_o *)__this,"Keys",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      pSVar8 = (System_Exception_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar8;
      if (g_data_057ac543 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Keys_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
        g_data_057ac543 = '\x01';
      }
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
      System_Func_object__object____ctor();
      pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar13,pSVar11,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
      return pCVar13;
    }
  }
  else if (uVar3 < 0x8d4d225c) {
    if (uVar3 == 0x8d4d225b) {
      bVar4 = System_String__op_Equality((System_String_o *)__this,"Values",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar8 = (System_Exception_o *)&TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSVar8;
        if (g_data_057ac544 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Values_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
          g_data_057ac544 = '\x01';
        }
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
        System_Func_object__object____ctor();
        pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar13,pSVar11,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
        return pCVar13;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality((System_String_o *)__this,"Contains",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac549 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac549 = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar12);
      }
      pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
      return pCVar13;
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar4 = System_String__op_Equality((System_String_o *)__this,"Get",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac546 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac546 = '\x01';
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
        pSVar12 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar12;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar12);
      }
      pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar13,pSVar12,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
      return pCVar13;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality((System_String_o *)__this,"Count",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    puVar10 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppSVar14 = (System_Exception_o **)&uStack_18;
      pSVar8 = pSStack_28;
    }
    else {
      ppSVar14 = (System_Exception_o **)&uStack_18;
      pSVar8 = pSStack_28;
    }
    goto CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDictBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(pSVar6,(System_String_o *)__this,pSVar7,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_Exception___ctor_3cf6120(pSVar8,unaff_R14,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar10 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar9);
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count:
  *(System_String_o **)((long)ppSVar14 + -8) = unaff_R14;
  *(System_Exception_o **)((long)ppSVar14 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppSVar14 + -0x18) = puVar10;
  if (g_data_057ac542 == '\0') {
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be349;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be355;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be361;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be36d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
    g_data_057ac542 = '\x01';
  }
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be383;
  pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be39c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be3ab;
  pCVar13 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  *(undefined8 *)((long)ppSVar14 + -0x20) = 0x40be3c5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar13,pSVar11,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return pCVar13;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40bee10

void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac54b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac54b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40bee80

void CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bee90

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  Il2CppObject *extraout_RAX;
  undefined8 uVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar6;
  CustomLogic_CustomLogicDictBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar7;
  undefined1 uVar8;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar9;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *unaff_R14;
  Il2CppObject *unaff_R15;
  undefined1 auVar13 [16];
  undefined8 uStack_a8;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *pCStack_a0;
  Il2CppObject *pIStack_88;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_80;
  undefined8 uStack_78;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_70;
  Il2CppObject *pIStack_68;
  undefined8 uStack_60;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_58;
  Il2CppObject *pIStack_50;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_48;
  Il2CppObject *pIStack_40;
  Il2CppObject *pIStack_38;
  Il2CppObject *pIStack_28;
  
  if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__Clear(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX == 0) {
label_040bef43:
    pIStack_38 = (Il2CppObject *)0x40bef48;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    unaff_R14 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(extraout_RDX + 0x18) < 2) {
      unaff_R15 = (Il2CppObject *)0x0;
    }
    else {
      unaff_R15 = *(Il2CppObject **)(extraout_RDX + 0x28);
    }
    unaff_RBX = __c;
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pCVar7 = __c;
      if (g_data_057ac539 == '\0') {
        pIStack_38 = (Il2CppObject *)0x40beefd;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        g_data_057ac539 = '\x01';
      }
      pIStack_28 = (Il2CppObject *)0x0;
      pSVar11 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      __c = pCVar7;
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_38 = (Il2CppObject *)0x40bef2d;
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar11,unaff_R14,&pIStack_28,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar2 != '\0') {
          unaff_R15 = pIStack_28;
        }
        return unaff_R15;
      }
    }
    goto label_040bef43;
  }
  pIStack_38 = (Il2CppObject *)0x40bef4d;
  il2cpp_runtime_helper_022b2ca0();
  pCVar7 = unaff_RBX;
  pCVar9 = __c;
  pIVar3 = unaff_R14;
  pCStack_48 = unaff_RBX;
  pIStack_40 = unaff_R14;
  pIStack_38 = unaff_R15;
  if (extraout_RDX_00 == 0) {
label_040befbc:
    pIStack_50 = (Il2CppObject *)0x40befc1;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((*(int *)(extraout_RDX_00 + 0x18) != 0) && (*(int *)(extraout_RDX_00 + 0x18) != 1)) {
    pCVar7 = __c;
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar3 = *(Il2CppObject **)(extraout_RDX_00 + 0x20);
      value = *(Il2CppObject **)(extraout_RDX_00 + 0x28);
      if (g_data_057ac53a == '\0') {
        pIStack_50 = (Il2CppObject *)0x40bef8b;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ac53a = '\x01';
      }
      pSVar11 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_50 = (Il2CppObject *)0x40befb0;
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar11,pIVar3,value,MethodInfo_Void_set_Item);
        piVar1 = &(__c->fields)._version;
        *piVar1 = *piVar1 + 1;
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040befbc;
  }
  pIStack_50 = (Il2CppObject *)0x40befc6;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar6 = auVar13._8_8_;
  uStack_60 = auVar13._0_8_;
  pCVar10 = pCVar9;
  pCStack_58 = pCVar7;
  pIStack_50 = pIVar3;
  if (lVar6 == 0) {
label_040bf034:
    pIStack_68 = (Il2CppObject *)0x40bf039;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar6 + 0x18) != 0) {
    pCVar7 = pCVar9;
    if (pCVar9 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar3 = *(Il2CppObject **)(lVar6 + 0x20);
      if (g_data_057ac53b == '\0') {
        pIStack_68 = (Il2CppObject *)0x40bf000;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac53b = '\x01';
      }
      pSVar11 = (pCVar9->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_68 = (Il2CppObject *)0x40bf022;
        bVar2 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar11,pIVar3,MethodInfo_Boolean_Remove);
        if ((char)bVar2 != '\0') {
          piVar1 = &(pCVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
        }
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040bf034;
  }
  pIStack_68 = (Il2CppObject *)0x40bf03e;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar6 = auVar13._8_8_;
  uStack_78 = auVar13._0_8_;
  pCVar9 = pCVar10;
  pCStack_70 = pCVar7;
  pIStack_68 = pIVar3;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) goto label_040bf0b8;
    pCVar7 = pCVar10;
    if (pCVar10 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar3 = *(Il2CppObject **)(lVar6 + 0x20);
      if (g_data_057ac53c == '\0') {
        pCStack_80 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf070;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        g_data_057ac53c = '\x01';
      }
      pSVar11 = (pCVar10->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pCStack_80 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf092;
        bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar11,pIVar3,MethodInfo_Boolean_ContainsKey);
        uStack_78 = CONCAT17((char)bVar2,(undefined7)uStack_78);
        pCStack_80 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0ab;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
        return pIVar3;
      }
    }
  }
  pCStack_80 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0b8;
  il2cpp_runtime_helper_022b2c90();
label_040bf0b8:
  uVar8 = SUB81(pCVar9,0);
  pCStack_80 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0bd;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_80 = pCVar7;
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  pIStack_88 = (Il2CppObject *)0x0;
  pSVar11 = __this[1].monitor;
  if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    uStack_a8 = il2cpp_runtime_helper_022b2c90();
    pCStack_a0 = __this;
    if (g_data_057ac54d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&"IsCharacter");
      g_data_057ac54d = '\x01';
    }
    __this_00 = (pSVar11->fields)._entries;
    uStack_a8 = CONCAT17(uVar8,(undefined7)uStack_a8);
    pIVar12 = g_data_057b9b98;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a8 + 7);
    if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"IsCharacter",pIVar3,
                 MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
    uVar5 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar5 >> 8),(pIVar12->_1).byval_arg.field_0xd);
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar11,"IsCharacter",&pIStack_88,MethodInfo_Boolean_TryGetValue);
  if ((((char)bVar2 != '\0') && (pIStack_88 != (Il2CppObject *)0x0)) && (pIStack_88->klass == g_data_057b9b98)) {
    pcVar4 = (char *)il2cpp_runtime_helper_02305440();
    return (Il2CppObject *)CONCAT71((int7)((ulong)pcVar4 >> 8),*pcVar4 != '\0');
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40beeb0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *extraout_RAX;
  undefined8 uVar6;
  long extraout_RDX;
  long lVar7;
  CustomLogic_CustomLogicDictBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar8;
  undefined1 uVar9;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar10;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *unaff_R14;
  Il2CppObject *unaff_R15;
  undefined1 auVar14 [16];
  undefined8 uStack_a0;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *pCStack_98;
  Il2CppObject *pIStack_80;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_78;
  undefined8 uStack_70;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_68;
  Il2CppObject *pIStack_60;
  undefined8 uStack_58;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_50;
  Il2CppObject *pIStack_48;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  Il2CppObject *pIStack_30;
  Il2CppObject *pIStack_20;
  
  if (__a == (System_Object_array *)0x0) {
label_040bef43:
    pIStack_30 = (Il2CppObject *)0x40bef48;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = (int)__a->max_length;
    if (iVar2 != 0) {
      unaff_R14 = __a->m_Items[0];
      if (iVar2 < 2) {
        unaff_R15 = (Il2CppObject *)0x0;
      }
      else {
        unaff_R15 = __a->m_Items[1];
      }
      unaff_RBX = __c;
      if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
        pCVar8 = __c;
        if (g_data_057ac539 == '\0') {
          pIStack_30 = (Il2CppObject *)0x40beefd;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          g_data_057ac539 = '\x01';
        }
        pIStack_20 = (Il2CppObject *)0x0;
        pSVar12 = (__c->fields)._dict;
        __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
        __c = pCVar8;
        if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIStack_30 = (Il2CppObject *)0x40bef2d;
          bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar12,unaff_R14,&pIStack_20,MethodInfo_Boolean_TryGetValue);
          if ((char)bVar3 != '\0') {
            unaff_R15 = pIStack_20;
          }
          return unaff_R15;
        }
      }
      goto label_040bef43;
    }
  }
  pIStack_30 = (Il2CppObject *)0x40bef4d;
  il2cpp_runtime_helper_022b2ca0();
  pCVar8 = unaff_RBX;
  pCVar10 = __c;
  pIVar4 = unaff_R14;
  pCStack_40 = unaff_RBX;
  pIStack_38 = unaff_R14;
  pIStack_30 = unaff_R15;
  if (extraout_RDX == 0) {
label_040befbc:
    pIStack_48 = (Il2CppObject *)0x40befc1;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((*(int *)(extraout_RDX + 0x18) != 0) && (*(int *)(extraout_RDX + 0x18) != 1)) {
    pCVar8 = __c;
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar4 = *(Il2CppObject **)(extraout_RDX + 0x20);
      value = *(Il2CppObject **)(extraout_RDX + 0x28);
      if (g_data_057ac53a == '\0') {
        pIStack_48 = (Il2CppObject *)0x40bef8b;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057ac53a = '\x01';
      }
      pSVar12 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_48 = (Il2CppObject *)0x40befb0;
        System_Collections_Generic_Dictionary_object__object___set_Item(pSVar12,pIVar4,value,MethodInfo_Void_set_Item);
        piVar1 = &(__c->fields)._version;
        *piVar1 = *piVar1 + 1;
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040befbc;
  }
  pIStack_48 = (Il2CppObject *)0x40befc6;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar14._8_8_;
  uStack_58 = auVar14._0_8_;
  pCVar11 = pCVar10;
  pCStack_50 = pCVar8;
  pIStack_48 = pIVar4;
  if (lVar7 == 0) {
label_040bf034:
    pIStack_60 = (Il2CppObject *)0x40bf039;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pCVar8 = pCVar10;
    if (pCVar10 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac53b == '\0') {
        pIStack_60 = (Il2CppObject *)0x40bf000;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac53b = '\x01';
      }
      pSVar12 = (pCVar10->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_60 = (Il2CppObject *)0x40bf022;
        bVar3 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar12,pIVar4,MethodInfo_Boolean_Remove);
        if ((char)bVar3 != '\0') {
          piVar1 = &(pCVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
        }
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040bf034;
  }
  pIStack_60 = (Il2CppObject *)0x40bf03e;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar14._8_8_;
  uStack_70 = auVar14._0_8_;
  pCVar10 = pCVar11;
  pCStack_68 = pCVar8;
  pIStack_60 = pIVar4;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) goto label_040bf0b8;
    pCVar8 = pCVar11;
    if (pCVar11 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac53c == '\0') {
        pCStack_78 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf070;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        g_data_057ac53c = '\x01';
      }
      pSVar12 = (pCVar11->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pCStack_78 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf092;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar12,pIVar4,MethodInfo_Boolean_ContainsKey);
        uStack_70 = CONCAT17((char)bVar3,(undefined7)uStack_70);
        pCStack_78 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0ab;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
        return pIVar4;
      }
    }
  }
  pCStack_78 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0b8;
  il2cpp_runtime_helper_022b2c90();
label_040bf0b8:
  uVar9 = SUB81(pCVar10,0);
  pCStack_78 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0bd;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_78 = pCVar8;
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  pIStack_80 = (Il2CppObject *)0x0;
  pSVar12 = __this[1].monitor;
  if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    uStack_a0 = il2cpp_runtime_helper_022b2c90();
    pCStack_98 = __this;
    if (g_data_057ac54d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&"IsCharacter");
      g_data_057ac54d = '\x01';
    }
    __this_00 = (pSVar12->fields)._entries;
    uStack_a0 = CONCAT17(uVar9,(undefined7)uStack_a0);
    pIVar13 = g_data_057b9b98;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_a0 + 7);
    if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"IsCharacter",pIVar4,
                 MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
    uVar6 = il2cpp_runtime_helper_022b2c90();
    return (Il2CppObject *)CONCAT71((int7)((ulong)uVar6 >> 8),(pIVar13->_1).byval_arg.field_0xd);
  }
  bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar12,"IsCharacter",&pIStack_80,MethodInfo_Boolean_TryGetValue);
  if ((((char)bVar3 != '\0') && (pIStack_80 != (Il2CppObject *)0x0)) && (pIStack_80->klass == g_data_057b9b98)) {
    pcVar5 = (char *)il2cpp_runtime_helper_02305440();
    return (Il2CppObject *)CONCAT71((int7)((ulong)pcVar5 >> 8),*pcVar5 != '\0');
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bef50

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *extraout_RAX;
  undefined8 uVar6;
  long lVar7;
  CustomLogic_CustomLogicDictBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar8;
  undefined1 uVar9;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar10;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *unaff_R14;
  undefined1 auVar14 [16];
  undefined8 uStack_78;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *pCStack_70;
  Il2CppObject *pIStack_58;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_50;
  undefined8 uStack_48;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_40;
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  pCVar10 = __c;
  if (__a == (System_Object_array *)0x0) {
label_040befbc:
    pIStack_20 = (Il2CppObject *)0x40befc1;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = (int)__a->max_length;
    if ((iVar2 != 0) && (iVar2 != 1)) {
      unaff_RBX = __c;
      if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
        unaff_R14 = __a->m_Items[0];
        pIVar4 = __a->m_Items[1];
        if (g_data_057ac53a == '\0') {
          pIStack_20 = (Il2CppObject *)0x40bef8b;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
          g_data_057ac53a = '\x01';
        }
        pSVar12 = (__c->fields)._dict;
        __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
        if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIStack_20 = (Il2CppObject *)0x40befb0;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar12,unaff_R14,pIVar4,MethodInfo_Void_set_Item);
          piVar1 = &(__c->fields)._version;
          *piVar1 = *piVar1 + 1;
          return (Il2CppObject *)0x0;
        }
      }
      goto label_040befbc;
    }
  }
  pIStack_20 = (Il2CppObject *)0x40befc6;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar14._8_8_;
  uStack_30 = auVar14._0_8_;
  pCVar8 = unaff_RBX;
  pCVar11 = pCVar10;
  pIVar4 = unaff_R14;
  pCStack_28 = unaff_RBX;
  pIStack_20 = unaff_R14;
  if (lVar7 == 0) {
label_040bf034:
    pIStack_38 = (Il2CppObject *)0x40bf039;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pCVar8 = pCVar10;
    if (pCVar10 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac53b == '\0') {
        pIStack_38 = (Il2CppObject *)0x40bf000;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac53b = '\x01';
      }
      pSVar12 = (pCVar10->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_38 = (Il2CppObject *)0x40bf022;
        bVar3 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar12,pIVar4,MethodInfo_Boolean_Remove);
        if ((char)bVar3 != '\0') {
          piVar1 = &(pCVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
        }
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040bf034;
  }
  pIStack_38 = (Il2CppObject *)0x40bf03e;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  lVar7 = auVar14._8_8_;
  uStack_48 = auVar14._0_8_;
  pCVar10 = pCVar11;
  pCStack_40 = pCVar8;
  pIStack_38 = pIVar4;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) goto label_040bf0b8;
    pCVar8 = pCVar11;
    if (pCVar11 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar4 = *(Il2CppObject **)(lVar7 + 0x20);
      if (g_data_057ac53c == '\0') {
        pCStack_50 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf070;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        g_data_057ac53c = '\x01';
      }
      pSVar12 = (pCVar11->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pCStack_50 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf092;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar12,pIVar4,MethodInfo_Boolean_ContainsKey);
        uStack_48 = CONCAT17((char)bVar3,(undefined7)uStack_48);
        pCStack_50 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0ab;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
        return pIVar4;
      }
    }
  }
  pCStack_50 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0b8;
  il2cpp_runtime_helper_022b2c90();
label_040bf0b8:
  uVar9 = SUB81(pCVar10,0);
  pCStack_50 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0bd;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_50 = pCVar8;
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  pIStack_58 = (Il2CppObject *)0x0;
  pSVar12 = __this[1].monitor;
  if (pSVar12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar12,"IsCharacter",&pIStack_58,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar3 != '\0') && (pIStack_58 != (Il2CppObject *)0x0)) && (pIStack_58->klass == g_data_057b9b98))
    {
      pcVar5 = (char *)il2cpp_runtime_helper_02305440();
      return (Il2CppObject *)CONCAT71((int7)((ulong)pcVar5 >> 8),*pcVar5 != '\0');
    }
    return (Il2CppObject *)0x0;
  }
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pCStack_70 = __this;
  if (g_data_057ac54d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54d = '\x01';
  }
  __this_00 = (pSVar12->fields)._entries;
  uStack_78 = CONCAT17(uVar9,(undefined7)uStack_78);
  pIVar13 = g_data_057b9b98;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
  if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"IsCharacter",pIVar4,
               MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)CONCAT71((int7)((ulong)uVar6 >> 8),(pIVar13->_1).byval_arg.field_0xd);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__8_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40befd0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__8_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  Il2CppObject *extraout_RAX;
  undefined8 uVar5;
  long lVar6;
  CustomLogic_CustomLogicDictBuiltin_o *unaff_RBX;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar7;
  undefined1 uVar8;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar9;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *unaff_R14;
  undefined1 auVar13 [16];
  undefined8 uStack_60;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *pCStack_58;
  Il2CppObject *pIStack_40;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_28;
  Il2CppObject *pIStack_20;
  
  pCVar9 = __c;
  if (__a == (System_Object_array *)0x0) {
label_040bf034:
    pIStack_20 = (Il2CppObject *)0x40bf039;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    unaff_RBX = __c;
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      unaff_R14 = __a->m_Items[0];
      if (g_data_057ac53b == '\0') {
        pIStack_20 = (Il2CppObject *)0x40bf000;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057ac53b = '\x01';
      }
      pSVar11 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIStack_20 = (Il2CppObject *)0x40bf022;
        bVar2 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar11,unaff_R14,MethodInfo_Boolean_Remove);
        if ((char)bVar2 != '\0') {
          piVar1 = &(__c->fields)._version;
          *piVar1 = *piVar1 + 1;
        }
        return (Il2CppObject *)0x0;
      }
    }
    goto label_040bf034;
  }
  pIStack_20 = (Il2CppObject *)0x40bf03e;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar6 = auVar13._8_8_;
  uStack_30 = auVar13._0_8_;
  pCVar7 = unaff_RBX;
  pCVar10 = pCVar9;
  pCStack_28 = unaff_RBX;
  pIStack_20 = unaff_R14;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) goto label_040bf0b8;
    pCVar7 = pCVar9;
    if (pCVar9 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar3 = *(Il2CppObject **)(lVar6 + 0x20);
      if (g_data_057ac53c == '\0') {
        pCStack_38 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf070;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        g_data_057ac53c = '\x01';
      }
      pSVar11 = (pCVar9->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pCStack_38 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf092;
        bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar11,pIVar3,MethodInfo_Boolean_ContainsKey);
        uStack_30 = CONCAT17((char)bVar2,(undefined7)uStack_30);
        pCStack_38 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0ab;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_30 + 7);
        return pIVar3;
      }
    }
  }
  pCStack_38 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0b8;
  il2cpp_runtime_helper_022b2c90();
label_040bf0b8:
  uVar8 = SUB81(pCVar10,0);
  pCStack_38 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0bd;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_38 = pCVar7;
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  pIStack_40 = (Il2CppObject *)0x0;
  pSVar11 = __this[1].monitor;
  if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar11,"IsCharacter",&pIStack_40,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar2 != '\0') && (pIStack_40 != (Il2CppObject *)0x0)) && (pIStack_40->klass == g_data_057b9b98))
    {
      pcVar4 = (char *)il2cpp_runtime_helper_02305440();
      return (Il2CppObject *)CONCAT71((int7)((ulong)pcVar4 >> 8),*pcVar4 != '\0');
    }
    return (Il2CppObject *)0x0;
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pCStack_58 = __this;
  if (g_data_057ac54d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54d = '\x01';
  }
  __this_00 = (pSVar11->fields)._entries;
  uStack_60 = CONCAT17(uVar8,(undefined7)uStack_60);
  pIVar12 = g_data_057b9b98;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_60 + 7);
  if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"IsCharacter",pIVar3,
               MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)CONCAT71((int7)((ulong)uVar5 >> 8),(pIVar12->_1).byval_arg.field_0xd);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__9_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bf040

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__9_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicDictBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  char *pcVar3;
  Il2CppObject *extraout_RAX;
  undefined8 uVar4;
  CustomLogic_CustomLogicDictBuiltin_o *unaff_RBX;
  undefined1 uVar5;
  CustomLogic_CustomLogicDictBuiltin_o *pCVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppClass *pIVar8;
  undefined8 uStack_48;
  CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *pCStack_40;
  Il2CppObject *pIStack_28;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_20;
  undefined8 uStack_18;
  
  pCVar6 = __c;
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_040bf0b8;
    unaff_RBX = __c;
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar2 = __a->m_Items[0];
      uStack_18 = in_RAX;
      if (g_data_057ac53c == '\0') {
        pCStack_20 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf070;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        g_data_057ac53c = '\x01';
      }
      pSVar7 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pCStack_20 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf092;
        bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey(pSVar7,pIVar2,MethodInfo_Boolean_ContainsKey)
        ;
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pCStack_20 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0ab;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
  pCStack_20 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0b8;
  il2cpp_runtime_helper_022b2c90();
label_040bf0b8:
  uVar5 = SUB81(pCVar6,0);
  pCStack_20 = (CustomLogic_CustomLogicDictBuiltin_o *)0x40bf0bd;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_20 = unaff_RBX;
  if (g_data_057ac54c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54c = '\x01';
  }
  pIStack_28 = (Il2CppObject *)0x0;
  pSVar7 = __this[1].monitor;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar7,"IsCharacter",&pIStack_28,MethodInfo_Boolean_TryGetValue);
    if ((((char)bVar1 != '\0') && (pIStack_28 != (Il2CppObject *)0x0)) && (pIStack_28->klass == g_data_057b9b98))
    {
      pcVar3 = (char *)il2cpp_runtime_helper_02305440();
      return (Il2CppObject *)CONCAT71((int7)((ulong)pcVar3 >> 8),*pcVar3 != '\0');
    }
    return (Il2CppObject *)0x0;
  }
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __this;
  if (g_data_057ac54d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"IsCharacter");
    g_data_057ac54d = '\x01';
  }
  __this_00 = (pSVar7->fields)._entries;
  uStack_48 = CONCAT17(uVar5,(undefined7)uStack_48);
  pIVar8 = g_data_057b9b98;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_48 + 7);
  if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"IsCharacter",pIVar2,
               MethodInfo_Void_set_Item);
    return extraout_RAX;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)CONCAT71((int7)((ulong)uVar4 >> 8),(pIVar8->_1).byval_arg.field_0xd);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40bdf40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  undefined8 *puVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ac541 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Remove");
    il2cpp_runtime_helper_023445d0(&"Keys");
    il2cpp_runtime_helper_023445d0(&"Values");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Count");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"Contains");
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ac541 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x602b32ee) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac545 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__5_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac545 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x21a5901d) &&
              (bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac548 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__8_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac548 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x28b19ea3) {
      bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac547 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__7_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac547 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x602b32ed) &&
            (bVar4 = System_String__op_Equality(name,"Keys",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac543 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Keys_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
        g_data_057ac543 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x8d4d225c) {
    if (uVar3 == 0x8d4d225b) {
      bVar4 = System_String__op_Equality(name,"Values",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac544 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Values_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
          g_data_057ac544 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
        System_Func_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac549 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac549 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar4 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac546 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__6_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac546 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    goto CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicDictBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ac542 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be349;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be355;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be361;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be36d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
    g_data_057ac542 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be383;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be39c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be3ab;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40be3c5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x40be330

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac542 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Count_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
    g_data_057ac542 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Keys
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys (const MethodInfo* method);
// 0x40be3d0

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac543 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Keys_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
    g_data_057ac543 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Values
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values (const MethodInfo* method);
// 0x40be470

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac544 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Values_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object);
    g_data_057ac544 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x40be510

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac545 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Clear_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac545 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x40be660

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac546 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Get_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac546 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x40be7b0

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac547 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Set_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac547 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x40be900

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac548 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Remove_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac548 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x40bea50

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (g_data_057ac549 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Contains_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac549 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicDictBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40beba0

void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  CustomLogic_CustomLogicDictBuiltin_o *__this_02;
  int32_t iStack_24;
  System_Collections_Generic_HashSet_object__o *pSStack_20;
  
  if (g_data_057ac54a == '\0') {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bebbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bebc9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bebd5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bebe1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bebed;
    il2cpp_runtime_helper_023445d0(&"Remove");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bebf9;
    il2cpp_runtime_helper_023445d0(&"Keys");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec05;
    il2cpp_runtime_helper_023445d0(&"Values");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec11;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec1d;
    il2cpp_runtime_helper_023445d0(&"Count");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec29;
    il2cpp_runtime_helper_023445d0(&"Set");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec35;
    il2cpp_runtime_helper_023445d0(&"Contains");
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec41;
    il2cpp_runtime_helper_023445d0(&"Get");
    g_data_057ac54a = '\x01';
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec57;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec6c;
  method_00 = MethodInfo_HashSet_1_System_String;
  pSVar1 = __this_00;
  System_Collections_Generic_HashSet_object____ctor(__this_00,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bec91;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Count",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40beca6;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Keys",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40becbb;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Values",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40becd0;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Clear",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bece5;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Get",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40becfa;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Set",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bed0f;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Remove",MethodInfo_Boolean_Add);
    pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bed24;
    System_Collections_Generic_HashSet_object___Add(__this_00,"Contains",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  pSStack_20 = (System_Collections_Generic_HashSet_object__o *)0x40bed56;
  il2cpp_runtime_helper_022b2c90();
  pSStack_20 = __this_00;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (g_data_057ac537 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057ac537 = '\x01';
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar1->fields)._comparer;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      iStack_24 = System_Collections_Generic_Dictionary_object__object___get_Count(__this,MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_24);
      return;
    }
  }
  __this_02 = (CustomLogic_CustomLogicDictBuiltin_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this_02,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this_02,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac54b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac54b = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x40bed60

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicDictBuiltin_o *__this_00;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    if (g_data_057ac537 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057ac537 = '\x01';
    }
    __this = (__i->fields)._dict;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_c = System_Collections_Generic_Dictionary_object__object___get_Count(__this,MethodInfo_Int32_get_Count);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_c);
      return pIVar1;
    }
  }
  __this_00 = (CustomLogic_CustomLogicDictBuiltin_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this_00,method);
    return (Il2CppObject *)(__this_00->fields)._cachedKeys;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this_00,method);
    return (Il2CppObject *)(__this_00->fields)._cachedValues;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac54b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac54b = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Keys>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x40bedd0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
    return (Il2CppObject *)(__i->fields)._cachedKeys;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
    return (Il2CppObject *)(__i->fields)._cachedValues;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac54b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac54b = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Values>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x40bedf0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
    return (Il2CppObject *)(__i->fields)._cachedValues;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac54b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac54b = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar1;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar1);
  return pIVar1;
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd3e0

void CustomLogic_CustomLogicDictBuiltin___ctor
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac535 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
    g_data_057ac535 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Object_System_Object);
  (__this->fields)._dict = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._dict,__this_00);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, int32_t capacity, const MethodInfo* method);
// 0x40bd480

void CustomLogic_CustomLogicDictBuiltin___ctor_3fbd480
               (CustomLogic_CustomLogicDictBuiltin_o *__this,int32_t capacity,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac536 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
    g_data_057ac536 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
  System_Collections_Generic_Dictionary_object__object____ctor_3104210(__this_00,capacity,MethodInfo_Dictionary_2_System_Object_System_Object);
  (__this->fields)._dict = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._dict,__this_00);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicDictBuiltin__get_Count (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd520

int32_t CustomLogic_CustomLogicDictBuiltin__get_Count
                  (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac537 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac537 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary_object__object___get_Count(__this_00,MethodInfo_Int32_get_Count);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate
            ((CustomLogic_CustomLogicDictBuiltin_o *)__this_00,method);
  return (int32_t)(__this_00->fields)._keys;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Keys
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Keys (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd560

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Keys(CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,method);
  return (__this->fields)._cachedKeys;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Values
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Values (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd680

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Values
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,method);
  return (__this->fields)._cachedValues;
}


// CustomLogic.CustomLogicDictBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Clear (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd690

void CustomLogic_CustomLogicDictBuiltin__Clear
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int32_t iVar3;
  long lVar4;
  
  if (g_data_057ac538 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ac538 = '\x01';
  }
  pSVar2 = (__this->fields)._dict;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar2,MethodInfo_Int32_get_Count);
    if (iVar3 != 0) {
      pSVar2 = (__this->fields)._dict;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040bd6f6;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar2,MethodInfo_Void_Clear);
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
    }
    return;
  }
label_040bd6f6:
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin__Get (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x40bd710

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin__Get
          (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *defaultValue,
          MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar3;
  int32_t iVar4;
  Il2CppObject *extraout_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields __this_04;
  Il2CppObject *pIVar5;
  long *plVar6;
  Il2CppObject *value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar7;
  Il2CppObject *key_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  undefined1 auVar10 [12];
  undefined8 in_stack_fffffffffffffef8;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields CVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231609 obj;
  undefined1 auStack_c8 [16];
  _union_231609 _Stack_b8;
  Il2CppObject *pIStack_b0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_a0;
  Il2CppObject *local_20;
  
  pIVar5 = key;
  if (g_data_057ac539 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057ac539 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  pSVar8 = (__this->fields)._dict;
  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar8,key,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 != '\0') {
      defaultValue = local_20;
    }
    return defaultValue;
  }
  il2cpp_runtime_helper_022b2c90();
  key_00 = pIVar5;
  if (g_data_057ac53a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac53a = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar8->fields)._comparer;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item(pSVar9,pIVar5,value,MethodInfo_Void_set_Item);
    ppIVar1 = &(pSVar8->fields)._syncRoot;
    *(int *)ppIVar1 = *(int *)ppIVar1 + 1;
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = key_00;
  if (g_data_057ac53b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac53b = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar9->fields)._comparer;
  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar8,key_00,MethodInfo_Boolean_Remove);
    if ((char)bVar3 != '\0') {
      ppIVar1 = &(pSVar9->fields)._syncRoot;
      *(int *)ppIVar1 = *(int *)ppIVar1 + 1;
    }
    return (Il2CppObject *)CONCAT44(extraout_var,bVar3);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac53c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac53c = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar8->fields)._comparer;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey(pSVar9,pIVar5,MethodInfo_Boolean_ContainsKey);
    return (Il2CppObject *)CONCAT44(extraout_var_00,bVar3);
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_a0 = pSVar8;
  if (g_data_057ac53d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Object_System_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"{}");
    g_data_057ac53d = '\x01';
  }
  obj.genericMethod = (Il2CppObject *)0x0;
  pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar13 = (Il2CppRGCTXData *)0x0;
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar9->fields)._comparer;
  CVar11.builder = (System_Text_StringBuilder_o *)0x0;
  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar8,MethodInfo_Int32_get_Count);
    if (iVar4 == 0) {
      return "{}";
    }
    __this_04.builder = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_04.builder,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff00,__this_04.builder);
    CVar11.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"{",(MethodInfo *)0x0);
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar9->fields)._comparer;
      CVar11.builder = __this_04.builder;
      if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar8,MethodInfo_Int32_get_Count);
        pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar9->fields)._comparer;
        CVar11.builder = __this_04.builder;
        if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_c8,pSVar8,
                     MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
          iVar7 = 0;
          pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_c8._0_8_;
          pIVar13 = (Il2CppRGCTXData *)auStack_c8._8_8_;
          obj = _Stack_b8;
          while( true ) {
            __this_00.fields._8_8_ = __this_04.builder;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8;
            __this_00.fields._current.fields.key = (Il2CppObject *)pSVar12;
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar13;
            __this_00.fields._32_8_ = obj.genericMethod;
            bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff08);
            if ((char)bVar3 == '\0') {
              __this_01.fields._8_8_ = __this_04.builder;
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8;
              __this_01.fields._current.fields.key = (Il2CppObject *)pSVar12;
              __this_01.fields._current.fields.value = (Il2CppObject *)pIVar13;
              __this_01.fields._32_8_ = obj.genericMethod;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff08);
              goto label_040bdaf5;
            }
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (obj.genericMethod,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff00,
                       method_00);
            if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_3b03f90(__this_04.builder,": ",(MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (pIStack_b0,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff00,
                       method_01);
            if (iVar7 < iVar4 + -1) {
              if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) goto label_040bdb4a;
              System_Text_StringBuilder__Append_3b03f90(__this_04.builder,", ",(MethodInfo *)0x0);
            }
            iVar7 = iVar7 + 1;
          }
          il2cpp_runtime_helper_022b2c90();
label_040bdb4a:
          il2cpp_runtime_helper_022b2c90();
          CVar11.builder = __this_04.builder;
        }
      }
    }
  }
  do {
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_040bdbcd:
      __this_03.fields._8_8_ = CVar11.builder;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8;
      __this_03.fields._current.fields.key = (Il2CppObject *)pSVar12;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar13;
      __this_03.fields._32_8_ = obj.genericMethod;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff08);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = CVar11.builder;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef8;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar12;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar13;
    __this_02.fields._32_8_ = obj.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff08);
    __this_04.builder = CVar11.builder;
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_040bdbcd;
    }
label_040bdaf5:
    CVar11.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"}",(MethodInfo *)0x0);
      CVar11.builder = (System_Text_StringBuilder_o *)0x0;
      if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
        pIVar5 = (Il2CppObject *)
                 (*((__this_04.builder)->klass->vtable)._3_ToString.methodPtr)
                           (__this_04.builder,((__this_04.builder)->klass->vtable)._3_ToString.method);
        return pIVar5;
      }
    }
  } while( true );
}


// CustomLogic.CustomLogicDictBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Set (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo* method);
// 0x40bd790

void CustomLogic_CustomLogicDictBuiltin__Set
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppObject **ppIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar4;
  int32_t iVar5;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields __this_04;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar7;
  Il2CppObject *key_00;
  Il2CppObject *key_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff20;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields CVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231609 obj;
  undefined1 local_a0 [16];
  _union_231609 local_90;
  Il2CppObject *pIStack_88;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_78;
  
  key_00 = key;
  if (g_data_057ac53a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac53a = '\x01';
  }
  pSVar8 = (__this->fields)._dict;
  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item(pSVar8,key,value,MethodInfo_Void_set_Item);
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  key_01 = key_00;
  if (g_data_057ac53b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac53b = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar8->fields)._comparer;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar9,key_00,MethodInfo_Boolean_Remove);
    if ((char)bVar4 != '\0') {
      ppIVar2 = &(pSVar8->fields)._syncRoot;
      *(int *)ppIVar2 = *(int *)ppIVar2 + 1;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac53c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac53c = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar9->fields)._comparer;
  if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___ContainsKey(pSVar8,key_01,MethodInfo_Boolean_ContainsKey);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_78 = pSVar9;
  if (g_data_057ac53d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Object_System_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"{}");
    g_data_057ac53d = '\x01';
  }
  obj.genericMethod = (Il2CppObject *)0x0;
  pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar13 = (Il2CppRGCTXData *)0x0;
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar8->fields)._comparer;
  CVar11.builder = (System_Text_StringBuilder_o *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar5 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar9,MethodInfo_Int32_get_Count);
    if (iVar5 == 0) {
      return;
    }
    __this_04.builder = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_04.builder,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff28,__this_04.builder);
    CVar11.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"{",(MethodInfo *)0x0);
      pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar8->fields)._comparer;
      CVar11.builder = __this_04.builder;
      if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar5 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar9,MethodInfo_Int32_get_Count);
        pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar8->fields)._comparer;
        CVar11.builder = __this_04.builder;
        if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,pSVar8,
                     MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
          iVar7 = 0;
          pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_a0._0_8_;
          pIVar13 = (Il2CppRGCTXData *)local_a0._8_8_;
          obj = local_90;
          while( true ) {
            __this_00.fields._8_8_ = __this_04.builder;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff20;
            __this_00.fields._current.fields.key = (Il2CppObject *)pSVar12;
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar13;
            __this_00.fields._32_8_ = obj.genericMethod;
            bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff30);
            if ((char)bVar4 == '\0') {
              __this_01.fields._8_8_ = __this_04.builder;
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff20;
              __this_01.fields._current.fields.key = (Il2CppObject *)pSVar12;
              __this_01.fields._current.fields.value = (Il2CppObject *)pIVar13;
              __this_01.fields._32_8_ = obj.genericMethod;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff30);
              goto label_040bdaf5;
            }
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (obj.genericMethod,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff28,
                       method_00);
            if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_3b03f90(__this_04.builder,": ",(MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (pIStack_88,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff28,
                       method_01);
            if (iVar7 < iVar5 + -1) {
              if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) goto label_040bdb4a;
              System_Text_StringBuilder__Append_3b03f90(__this_04.builder,", ",(MethodInfo *)0x0);
            }
            iVar7 = iVar7 + 1;
          }
          il2cpp_runtime_helper_022b2c90();
label_040bdb4a:
          il2cpp_runtime_helper_022b2c90();
          CVar11.builder = __this_04.builder;
        }
      }
    }
  }
  do {
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_040bdbcd:
      __this_03.fields._8_8_ = CVar11.builder;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff20;
      __this_03.fields._current.fields.key = (Il2CppObject *)pSVar12;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar13;
      __this_03.fields._32_8_ = obj.genericMethod;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff30);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = CVar11.builder;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff20;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar12;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar13;
    __this_02.fields._32_8_ = obj.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff30);
    __this_04.builder = CVar11.builder;
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_040bdbcd;
    }
label_040bdaf5:
    CVar11.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"}",(MethodInfo *)0x0);
      CVar11.builder = (System_Text_StringBuilder_o *)0x0;
      if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
        (*((__this_04.builder)->klass->vtable)._3_ToString.methodPtr)
                  (__this_04.builder,((__this_04.builder)->klass->vtable)._3_ToString.method);
        return;
      }
    }
  } while( true );
}


// CustomLogic.CustomLogicDictBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Remove (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x40bd7f0

void CustomLogic_CustomLogicDictBuiltin__Remove
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  int32_t *piVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar3;
  int32_t iVar4;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields __this_04;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar6;
  Il2CppObject *key_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  undefined1 auVar8 [12];
  undefined8 in_stack_ffffffffffffff38;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields CVar9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  Il2CppRGCTXData *pIVar11;
  _union_231609 obj;
  undefined1 auStack_88 [16];
  _union_231609 _Stack_78;
  Il2CppObject *pIStack_70;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_60;
  
  key_00 = key;
  if (g_data_057ac53b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057ac53b = '\x01';
  }
  pSVar7 = (__this->fields)._dict;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___Remove(pSVar7,key,MethodInfo_Boolean_Remove);
    if ((char)bVar3 != '\0') {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac53c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac53c = '\x01';
  }
  __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields)._comparer;
  if (__this_05 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___ContainsKey(__this_05,key_00,MethodInfo_Boolean_ContainsKey);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_60 = pSVar7;
  if (g_data_057ac53d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Object_System_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"{}");
    g_data_057ac53d = '\x01';
  }
  obj.genericMethod = (Il2CppObject *)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar11 = (Il2CppRGCTXData *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_05->fields)._comparer;
  CVar9.builder = (System_Text_StringBuilder_o *)0x0;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar7,MethodInfo_Int32_get_Count);
    if (iVar4 == 0) {
      return;
    }
    __this_04.builder = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_04.builder,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff40,__this_04.builder);
    CVar9.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"{",(MethodInfo *)0x0);
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_05->fields)._comparer;
      CVar9.builder = __this_04.builder;
      if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar7,MethodInfo_Int32_get_Count);
        pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_05->fields)._comparer;
        CVar9.builder = __this_04.builder;
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_88,pSVar7,
                     MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
          iVar6 = 0;
          pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_88._0_8_;
          pIVar11 = (Il2CppRGCTXData *)auStack_88._8_8_;
          obj = _Stack_78;
          while( true ) {
            __this_00.fields._8_8_ = __this_04.builder;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff38;
            __this_00.fields._current.fields.key = (Il2CppObject *)pSVar10;
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar11;
            __this_00.fields._32_8_ = obj.genericMethod;
            bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff48);
            if ((char)bVar3 == '\0') {
              __this_01.fields._8_8_ = __this_04.builder;
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff38;
              __this_01.fields._current.fields.key = (Il2CppObject *)pSVar10;
              __this_01.fields._current.fields.value = (Il2CppObject *)pIVar11;
              __this_01.fields._32_8_ = obj.genericMethod;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff48);
              goto label_040bdaf5;
            }
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (obj.genericMethod,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff40,
                       method_00);
            if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_3b03f90(__this_04.builder,": ",(MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (pIStack_70,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff40,
                       method_01);
            if (iVar6 < iVar4 + -1) {
              if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) goto label_040bdb4a;
              System_Text_StringBuilder__Append_3b03f90(__this_04.builder,", ",(MethodInfo *)0x0);
            }
            iVar6 = iVar6 + 1;
          }
          il2cpp_runtime_helper_022b2c90();
label_040bdb4a:
          il2cpp_runtime_helper_022b2c90();
          CVar9.builder = __this_04.builder;
        }
      }
    }
  }
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_040bdbcd:
      __this_03.fields._8_8_ = CVar9.builder;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff38;
      __this_03.fields._current.fields.key = (Il2CppObject *)pSVar10;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this_03.fields._32_8_ = obj.genericMethod;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff48);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = CVar9.builder;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff38;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar10;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar11;
    __this_02.fields._32_8_ = obj.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff48);
    __this_04.builder = CVar9.builder;
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_040bdbcd;
    }
label_040bdaf5:
    CVar9.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"}",(MethodInfo *)0x0);
      CVar9.builder = (System_Text_StringBuilder_o *)0x0;
      if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
        (*((__this_04.builder)->klass->vtable)._3_ToString.methodPtr)
                  (__this_04.builder,((__this_04.builder)->klass->vtable)._3_ToString.method);
        return;
      }
    }
  } while( true );
}


// CustomLogic.CustomLogicDictBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__Contains (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x40bd850

bool_conflict
CustomLogic_CustomLogicDictBuiltin__Contains
          (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar3;
  int32_t iVar4;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields __this_04;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  undefined1 auVar8 [12];
  undefined8 in_stack_ffffffffffffff50;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields CVar9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  Il2CppRGCTXData *pIVar11;
  _union_231609 obj;
  undefined1 auStack_70 [16];
  _union_231609 _Stack_60;
  Il2CppObject *pIStack_58;
  CustomLogic_CustomLogicDictBuiltin_o *pCStack_48;
  
  if (g_data_057ac53c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac53c = '\x01';
  }
  pSVar7 = (__this->fields)._dict;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey(pSVar7,key,MethodInfo_Boolean_ContainsKey);
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_48 = __this;
  if (g_data_057ac53d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Object_System_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"{}");
    g_data_057ac53d = '\x01';
  }
  obj.genericMethod = (Il2CppObject *)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar11 = (Il2CppRGCTXData *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields)._comparer;
  CVar9.builder = (System_Text_StringBuilder_o *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar4 == 0) {
      return (bool_conflict)"{}";
    }
    __this_04.builder = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_04.builder,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff58,__this_04.builder);
    CVar9.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"{",(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields)._comparer;
      CVar9.builder = __this_04.builder;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
        pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields)._comparer;
        CVar9.builder = __this_04.builder;
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_70,pSVar7,
                     MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
          iVar6 = 0;
          pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_70._0_8_;
          pIVar11 = (Il2CppRGCTXData *)auStack_70._8_8_;
          obj = _Stack_60;
          while( true ) {
            __this_00.fields._8_8_ = __this_04.builder;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff50;
            __this_00.fields._current.fields.key = (Il2CppObject *)pSVar10;
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar11;
            __this_00.fields._32_8_ = obj.genericMethod;
            bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff60);
            if ((char)bVar3 == '\0') {
              __this_01.fields._8_8_ = __this_04.builder;
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff50;
              __this_01.fields._current.fields.key = (Il2CppObject *)pSVar10;
              __this_01.fields._current.fields.value = (Il2CppObject *)pIVar11;
              __this_01.fields._32_8_ = obj.genericMethod;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff60);
              goto label_040bdaf5;
            }
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (obj.genericMethod,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff58,
                       method_00);
            if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_3b03f90(__this_04.builder,": ",(MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (pIStack_58,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff58,
                       method_01);
            if (iVar6 < iVar4 + -1) {
              if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) goto label_040bdb4a;
              System_Text_StringBuilder__Append_3b03f90(__this_04.builder,", ",(MethodInfo *)0x0);
            }
            iVar6 = iVar6 + 1;
          }
          il2cpp_runtime_helper_022b2c90();
label_040bdb4a:
          il2cpp_runtime_helper_022b2c90();
          CVar9.builder = __this_04.builder;
        }
      }
    }
  }
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_040bdbcd:
      __this_03.fields._8_8_ = CVar9.builder;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff50;
      __this_03.fields._current.fields.key = (Il2CppObject *)pSVar10;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this_03.fields._32_8_ = obj.genericMethod;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff60);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = CVar9.builder;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff50;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar10;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar11;
    __this_02.fields._32_8_ = obj.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff60);
    __this_04.builder = CVar9.builder;
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_040bdbcd;
    }
label_040bdaf5:
    CVar9.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"}",(MethodInfo *)0x0);
      CVar9.builder = (System_Text_StringBuilder_o *)0x0;
      if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
        bVar3 = (*((__this_04.builder)->klass->vtable)._3_ToString.methodPtr)
                          (__this_04.builder,((__this_04.builder)->klass->vtable)._3_ToString.method);
        return bVar3;
      }
    }
  } while( true );
}


// CustomLogic.CustomLogicDictBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__ToString (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd8a0

System_String_o *
CustomLogic_CustomLogicDictBuiltin__ToString(CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  int32_t iVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields __this_04;
  System_String_o *pSVar5;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar7;
  undefined1 auVar8 [12];
  undefined8 in_stack_ffffffffffffff68;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields CVar9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  Il2CppRGCTXData *pIVar11;
  _union_231609 obj;
  undefined1 auStack_58 [16];
  _union_231609 _Stack_48;
  Il2CppObject *pIStack_40;
  
  if (g_data_057ac53d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Object_System_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"{}");
    g_data_057ac53d = '\x01';
  }
  obj.genericMethod = (Il2CppObject *)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar11 = (Il2CppRGCTXData *)0x0;
  pSVar1 = (__this->fields)._dict;
  CVar9.builder = (System_Text_StringBuilder_o *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar3 == 0) {
      return "{}";
    }
    __this_04.builder = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_04.builder,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff70,__this_04.builder);
    CVar9.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"{",(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._dict;
      CVar9.builder = __this_04.builder;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
        pSVar1 = (__this->fields)._dict;
        CVar9.builder = __this_04.builder;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,pSVar1,
                     MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Object_System);
          iVar7 = 0;
          pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_58._0_8_;
          pIVar11 = (Il2CppRGCTXData *)auStack_58._8_8_;
          obj = _Stack_48;
          while( true ) {
            __this_00.fields._8_8_ = __this_04.builder;
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
            __this_00.fields._current.fields.key = (Il2CppObject *)pSVar10;
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar11;
            __this_00.fields._32_8_ = obj.genericMethod;
            bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
            if ((char)bVar4 == '\0') {
              __this_01.fields._8_8_ = __this_04.builder;
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
              __this_01.fields._current.fields.key = (Il2CppObject *)pSVar10;
              __this_01.fields._current.fields.value = (Il2CppObject *)pIVar11;
              __this_01.fields._32_8_ = obj.genericMethod;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
              goto label_040bdaf5;
            }
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (obj.genericMethod,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff70,
                       method_00);
            if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_3b03f90(__this_04.builder,": ",(MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
                      (pIStack_40,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)&stack0xffffffffffffff70,
                       method_01);
            if (iVar7 < iVar3 + -1) {
              if (__this_04.builder == (System_Text_StringBuilder_o *)0x0) goto label_040bdb4a;
              System_Text_StringBuilder__Append_3b03f90(__this_04.builder,", ",(MethodInfo *)0x0);
            }
            iVar7 = iVar7 + 1;
          }
          il2cpp_runtime_helper_022b2c90();
label_040bdb4a:
          il2cpp_runtime_helper_022b2c90();
          CVar9.builder = __this_04.builder;
        }
      }
    }
  }
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_040bdbcd:
      __this_03.fields._8_8_ = CVar9.builder;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
      __this_03.fields._current.fields.key = (Il2CppObject *)pSVar10;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this_03.fields._32_8_ = obj.genericMethod;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = CVar9.builder;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar10;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar11;
    __this_02.fields._32_8_ = obj.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    __this_04.builder = CVar9.builder;
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_040bdbcd;
    }
label_040bdaf5:
    CVar9.builder = __this_04.builder;
    if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_3b03f90(__this_04.builder,"}",(MethodInfo *)0x0);
      CVar9.builder = (System_Text_StringBuilder_o *)0x0;
      if (__this_04.builder != (System_Text_StringBuilder_o *)0x0) {
        pSVar5 = (System_String_o *)
                 (*((__this_04.builder)->klass->vtable)._3_ToString.methodPtr)
                           (__this_04.builder,((__this_04.builder)->klass->vtable)._3_ToString.method);
        return pSVar5;
      }
    }
  } while( true );
}


// CustomLogic.CustomLogicDictBuiltin$$InvalidateCache
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__InvalidateCache (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd700

void CustomLogic_CustomLogicDictBuiltin__InvalidateCache
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$EnsureListsUpToDate
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bd570

void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *enumerable;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *enumerable_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  MethodInfo *in_RCX;
  CustomLogic_CustomLogicDictBuiltin_o *__this_01;
  
  if (g_data_057ac53e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Object_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Object_S);
    g_data_057ac53e = '\x01';
  }
  if (((__this->fields)._listsVersion == (__this->fields)._version) &&
     ((__this->fields)._cachedKeys != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) {
    return;
  }
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    enumerable = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Object_Sys);
    method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_3fbdc90
              ((CustomLogic_CustomLogicListBuiltin_o *)method,
               (System_Collections_Generic_IEnumerable_object__o *)enumerable,1,in_RCX);
    (__this->fields)._cachedKeys = (CustomLogic_CustomLogicListBuiltin_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedKeys);
    pSVar1 = (__this->fields)._dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      enumerable_00 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Object_S);
      __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor_3fbdc90
                (__this_00,(System_Collections_Generic_IEnumerable_object__o *)enumerable_00,1,in_RCX);
      (__this->fields)._cachedValues = __this_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedValues,__this_00);
      (__this->fields)._listsVersion = (__this->fields)._version;
      return;
    }
  }
  __this_01 = (CustomLogic_CustomLogicDictBuiltin_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this_01,method);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__get_ClassName (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bdd90

System_String_o *
CustomLogic_CustomLogicDictBuiltin__get_ClassName
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac53f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Dict");
    g_data_057ac53f = '\x01';
  }
  return "Dict";
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsAbstract (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bddc0

bool_conflict
CustomLogic_CustomLogicDictBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsStatic (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bddd0

bool_conflict
CustomLogic_CustomLogicDictBuiltin__get_IsStatic
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicDictBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x40bdde0

bool_conflict
CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDictBuiltin$$<ToString>g__Append|18_0
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0 (Il2CppObject* obj, CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o* , const MethodInfo* method);
// 0x40bdc10

void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0
               (Il2CppObject *obj,CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *param_2,
               MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *value;
  System_Text_StringBuilder_o *__this_01;
  
  if (obj == (Il2CppObject *)0x0) {
    value = (System_String_o *)0x0;
    __this_01 = (param_2->fields).builder;
  }
  else {
    value = (System_String_o *)0x0;
    if (obj->klass == g_data_057b9c00) {
      value = (System_String_o *)obj;
    }
    __this_01 = (param_2->fields).builder;
  }
  if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
    if (value == (System_String_o *)0x0) goto label_040bdc7f;
    __this = System_Text_StringBuilder__Append_3b048f0(__this_01,0x22,(MethodInfo *)0x0);
    if ((__this != (System_Text_StringBuilder_o *)0x0) &&
       (__this_00 = System_Text_StringBuilder__Append_3b03f90(__this,value,(MethodInfo *)0x0),
       __this_01 = __this, __this_00 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append_3b048f0(__this_00,0x22,(MethodInfo *)0x0);
      return;
    }
  }
  obj = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_040bdc7f:
  System_Text_StringBuilder__Append_3b04a00(__this_01,obj,(MethodInfo *)0x0);
  return;
}


