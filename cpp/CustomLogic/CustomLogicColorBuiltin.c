// Type: CustomLogic.CustomLogicColorBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicColorBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicColorBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicColorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40baea0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  long lVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  int32_t iVar5;
  int32_t iVar6;
  uint g;
  uint32_t uVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  il2cpp_array_size_t iVar10;
  System_String_o *pSVar11;
  System_String_o *str2;
  System_Exception_o *pSVar12;
  undefined8 uVar13;
  System_ArgumentException_o *__this;
  System_Func_T__object__o *pSVar14;
  System_Action_T__object__o *pSVar15;
  System_Func_T__object____object__o *pSVar16;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar17;
  System_Exception_o **ppSVar18;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_String_o *unaff_R14;
  ulong unaff_R15;
  undefined1 auVar19 [16];
  System_Exception_o *pSStack_50;
  System_Exception_o *pSStack_48;
  System_String_o *pSStack_40;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ac51c == '\0') {
    pSStack_40 = (System_String_o *)0x40baec3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    pSStack_40 = (System_String_o *)0x40baecf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    pSStack_40 = (System_String_o *)0x40baedb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    pSStack_40 = (System_String_o *)0x40baee7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac51c = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (args == (System_Object_array *)0x0) {
label_040bb0cd:
    pSStack_40 = (System_String_o *)0x40bb0d2;
    iVar10 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar10 = args->max_length;
    if (iVar10 == 0) {
      pSStack_40 = (System_String_o *)0x40baf81;
      pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      pSStack_40 = (System_String_o *)0x40baf8c;
      CustomLogic_CustomLogicColorBuiltin___ctor(pCVar17,method);
      return pCVar17;
    }
    iVar3 = (int)iVar10;
    if (iVar3 == 4) {
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_40 = (System_String_o *)0x40bb039;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_String_o *)0x40bb04c;
      uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)args->max_length) {
        unaff_R14 = (System_String_o *)(ulong)uVar4;
        pSStack_40 = (System_String_o *)0x40bb062;
        g = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
        if (2 < (uint)args->max_length) {
          unaff_R15 = (ulong)g;
          pSStack_40 = (System_String_o *)0x40bb078;
          iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          if (3 < (uint)args->max_length) {
            pSStack_40 = (System_String_o *)0x40bb08e;
            iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[3],MethodInfo_Int32_ConvertTo_Int32);
            pSStack_40 = (System_String_o *)0x40bb09f;
            pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            pSStack_40 = (System_String_o *)0x40bb0b6;
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9b80(pCVar17,uVar4,g,iVar5,iVar6,in_R9);
            return pCVar17;
          }
        }
      }
label_040bb0c8:
      pSStack_40 = (System_String_o *)0x40bb0cd;
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bb0cd;
    }
    if (iVar3 == 3) {
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_40 = (System_String_o *)0x40bafad;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_String_o *)0x40bafc0;
      uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
      if (1 < (uint)args->max_length) {
        unaff_R14 = (System_String_o *)(ulong)uVar4;
        pSStack_40 = (System_String_o *)0x40bafda;
        iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
        if (2 < (uint)args->max_length) {
          pSStack_40 = (System_String_o *)0x40baff4;
          iVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          pSStack_40 = (System_String_o *)0x40bb005;
          pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
          pSStack_40 = (System_String_o *)0x40bb018;
          CustomLogic_CustomLogicColorBuiltin___ctor_3fb9aa0(pCVar17,uVar4,iVar5,iVar6,in_R8);
          return pCVar17;
        }
      }
      goto label_040bb0c8;
    }
    if (iVar3 == 1) {
      pIVar1 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_40 = (System_String_o *)0x40baf3b;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (System_String_o *)0x40baf4d;
      pSVar9 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar1,MethodInfo_String_ConvertTo_String);
      pSStack_40 = (System_String_o *)0x40baf5f;
      auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      pSStack_40 = (System_String_o *)0x40baf6d;
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb99a0(auVar19._0_8_,pSVar9,auVar19._8_8_);
      return auVar19._0_8_;
    }
  }
  uStack_38 = CONCAT44((int)iVar10,(uint)uStack_38);
  pSStack_40 = (System_String_o *)0x40bb0e2;
  pSVar9 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x40bb0f1;
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicColorBuiltin constructor found that takes ");
  pSStack_40 = (System_String_o *)0x40bb100;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_40 = (System_String_o *)0x40bb110;
  pSVar12 = (System_Exception_o *)System_String__Concat_3af7150(pSVar11,pSVar9,str2,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x40bb11f;
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_40 = (System_String_o *)0x40bb127;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar13);
  pSStack_40 = (System_String_o *)0x40bb137;
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)pSVar12,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x40bb143;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_CreateInstance);
  pSStack_40 = (System_String_o *)0x40bb14e;
  pSStack_50 = (System_Exception_o *)il2cpp_runtime_helper_022b2b10();
  pSStack_48 = pSVar12;
  pSStack_40 = unaff_R14;
  if (g_data_057ac51d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"Gradient");
    il2cpp_runtime_helper_023445d0(&"Lerp");
    il2cpp_runtime_helper_023445d0(&"ToHexString");
    il2cpp_runtime_helper_023445d0(&"__Div__");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"__Add__");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ac51d = '\x01';
  }
  uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)__this,(MethodInfo *)0x0);
  if (uVar7 < 0x993c73c6) {
    if (uVar7 < 0x2115286d) {
      if (uVar7 == 0xdc1f3cc) {
        bVar8 = System_String__op_Equality((System_String_o *)__this,"__Add__",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_Exception_o *)pSStack_40;
          if (g_data_057ac529 == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Add___b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac529 = '\x01';
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
          }
          else {
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
          }
          if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar16;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar16);
          }
          pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return pCVar17;
        }
      }
      else if (uVar7 == 0x18c37b41) {
        bVar8 = System_String__op_Equality((System_String_o *)__this,"__Mul__",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_Exception_o *)pSStack_40;
          if (g_data_057ac52b == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Mul___b__15_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac52b = '\x01';
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          else {
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar16;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar16);
          }
          pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return pCVar17;
        }
      }
      else if ((uVar7 == 0x2115286c) &&
              (bVar8 = System_String__op_Equality((System_String_o *)__this,"ToHexString",(MethodInfo *)0x0),
              (char)bVar8 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_Exception_o *)pSStack_40;
        if (g_data_057ac522 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToHexString_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac522 = '\x01';
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar16;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar16);
        }
        pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return pCVar17;
      }
    }
    else if (uVar7 < 0x792a6492) {
      if (uVar7 == 0x549f4d10) {
        bVar8 = System_String__op_Equality((System_String_o *)__this,"__Copy__",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_Exception_o *)pSStack_40;
          if (g_data_057ac527 == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__11_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac527 = '\x01';
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar16;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar16);
          }
          pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return pCVar17;
        }
      }
      else if ((uVar7 == 0x792a6491) &&
              (bVar8 = System_String__op_Equality((System_String_o *)__this,"__Hash__",(MethodInfo *)0x0),
              (char)bVar8 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_Exception_o *)pSStack_40;
        if (g_data_057ac526 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac526 = '\x01';
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar16;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar16);
        }
        pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return pCVar17;
      }
    }
    else if (uVar7 == 0x91efe6d7) {
      bVar8 = System_String__op_Equality((System_String_o *)__this,"__Eq__",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_Exception_o *)pSStack_40;
        if (g_data_057ac525 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac525 = '\x01';
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar16;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar16);
        }
        pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return pCVar17;
      }
    }
    else if ((uVar7 == 0x993c73c5) &&
            (bVar8 = System_String__op_Equality((System_String_o *)__this,"Gradient",(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_Exception_o *)pSStack_40;
      if (g_data_057ac524 == '\0') {
        pSStack_40 = (System_String_o *)unaff_R15;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Gradient_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac524 = '\x01';
        iVar3 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = (System_String_o *)unaff_R15;
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar16;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar16);
      }
      pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      return pCVar17;
    }
  }
  else if (uVar7 < 0xc40bf6cd) {
    if (uVar7 < 0x9f4a1a21) {
      if (uVar7 == 0x9e956088) {
        bVar8 = System_String__op_Equality((System_String_o *)__this,"Lerp",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = pSStack_48;
          pSStack_48 = (System_Exception_o *)pSStack_40;
          if (g_data_057ac523 == '\0') {
            pSStack_40 = (System_String_o *)unaff_R15;
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Lerp_b__7_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac523 = '\x01';
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_c + 0xe4);
            pSStack_40 = (System_String_o *)unaff_R15;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar16;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar16);
          }
          pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return pCVar17;
        }
      }
      else if ((uVar7 == 0x9f4a1a20) &&
              (bVar8 = System_String__op_Equality((System_String_o *)__this,"__Str__",(MethodInfo *)0x0),
              (char)bVar8 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_Exception_o *)pSStack_40;
        if (g_data_057ac528 == '\0') {
          pSStack_40 = (System_String_o *)unaff_R15;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Str___b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac528 = '\x01';
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar3 = *(int *)(TypeInfo_c + 0xe4);
          pSStack_40 = (System_String_o *)unaff_R15;
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar16;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar16);
        }
        pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return pCVar17;
      }
    }
    else if (uVar7 == 0xc20bf3a6) {
      bVar8 = System_String__op_Equality((System_String_o *)__this,"G",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_Exception_o *)pSStack_40;
        pSStack_40 = (System_String_o *)unaff_R15;
        if (g_data_057ac51f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__G_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__G_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
          g_data_057ac51f = '\x01';
        }
        pSVar14 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
        System_Func_object__object____ctor();
        pSVar15 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
        System_Action_object__object____ctor();
        pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar17,pSVar14,pSVar15,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        return pCVar17;
      }
    }
    else if ((uVar7 == 0xc40bf6cc) &&
            (bVar8 = System_String__op_Equality((System_String_o *)__this,"A",(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_Exception_o *)pSStack_40;
      pSStack_40 = (System_String_o *)unaff_R15;
      if (g_data_057ac521 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__A_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__A_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
        g_data_057ac521 = '\x01';
      }
      pSVar14 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
      System_Func_object__object____ctor();
      pSVar15 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
      System_Action_object__object____ctor();
      pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar17,pSVar14,pSVar15,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
      return pCVar17;
    }
  }
  else if (uVar7 < 0xd70c14b6) {
    if (uVar7 == 0xc70bfb85) {
      bVar8 = System_String__op_Equality((System_String_o *)__this,"B",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = pSStack_48;
        pSStack_48 = (System_Exception_o *)pSStack_40;
        pSStack_40 = (System_String_o *)unaff_R15;
        if (g_data_057ac520 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__B_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__B_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
          g_data_057ac520 = '\x01';
        }
        pSVar14 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
        System_Func_object__object____ctor();
        pSVar15 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
        System_Action_object__object____ctor();
        pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar17,pSVar14,pSVar15,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        return pCVar17;
      }
    }
    else if ((uVar7 == 0xd70c14b5) &&
            (bVar8 = System_String__op_Equality((System_String_o *)__this,"R",(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      pSVar12 = pSStack_48;
      ppSVar18 = (System_Exception_o **)&uStack_38;
      pSVar9 = pSStack_40;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = pSStack_48;
        ppSVar18 = (System_Exception_o **)&uStack_38;
        pSVar9 = pSStack_40;
      }
      goto CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R;
    }
  }
  else if (uVar7 == 0xd7cecb55) {
    bVar8 = System_String__op_Equality((System_String_o *)__this,"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = pSStack_48;
      pSStack_48 = (System_Exception_o *)pSStack_40;
      if (g_data_057ac52a == '\0') {
        pSStack_40 = (System_String_o *)unaff_R15;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Sub___b__14_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac52a = '\x01';
        iVar3 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_40 = (System_String_o *)unaff_R15;
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar16;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar16);
      }
      pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      return pCVar17;
    }
  }
  else if ((uVar7 == 0xff76b6dc) &&
          (bVar8 = System_String__op_Equality((System_String_o *)__this,"__Div__",(MethodInfo *)0x0),
          (char)bVar8 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_50 = pSStack_48;
    pSStack_48 = (System_Exception_o *)pSStack_40;
    if (g_data_057ac52c == '\0') {
      pSStack_40 = (System_String_o *)unaff_R15;
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Div___b__16_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac52c = '\x01';
      iVar3 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_c + 0xe4);
      pSStack_40 = (System_String_o *)unaff_R15;
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    else {
      pSVar16 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    if (pSVar16 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar16;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar16);
    }
    pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              ((CustomLogic_CLMethodBinding_T__o *)pCVar17,pSVar16,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    return pCVar17;
  }
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicColorBuiltin not found");
  pSVar9 = System_String__Concat_3af7150(pSVar9,(System_String_o *)__this,pSVar11,(MethodInfo *)0x0);
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar12 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar13);
  System_Exception___ctor_3cf6120(pSVar12,pSVar9,(MethodInfo *)0x0);
  uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(pSVar12,uVar13);
  ppSVar18 = &pSStack_50;
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R:
  *(ulong *)((long)ppSVar18 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar18 + -0x10) = pSVar9;
  *(System_Exception_o **)((long)ppSVar18 + -0x18) = pSVar12;
  if (g_data_057ac51e == '\0') {
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb78a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb796;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__R_g____getter_2_0);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb7a2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__R_g____setter_2_1);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb7ae;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb7ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb7c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
    g_data_057ac51e = '\x01';
  }
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb7dc;
  pSVar14 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb7f5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb804;
  pSVar15 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb81d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb82c;
  pCVar17 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  *(undefined8 *)((long)ppSVar18 + -0x20) = 0x40bb847;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar17,pSVar14,pSVar15,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return pCVar17;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40bcf00

void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40bcf70

void CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToHexString>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bcf80

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppType *pIVar6;
  System_String_o *pSVar7;
  Il2CppClass *pIVar8;
  long *plVar9;
  Il2CppType **ppIVar10;
  UnityEngine_GradientAlphaKey_Fields UVar11;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  int iVar12;
  undefined4 uVar13;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  long lVar14;
  undefined8 uVar15;
  System_NotImplementedException_o *__this_02;
  System_String_o *pSVar16;
  System_Exception_o *pSVar17;
  Utility_Color255_o *pUVar18;
  System_Exception_o *pSVar19;
  Il2CppObject *pIVar20;
  long *plVar21;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  System_Exception_o *rhs;
  long extraout_RDX_01;
  System_Exception_o *extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  int iVar22;
  int a;
  undefined1 *puVar23;
  System_Exception_o **ppSVar24;
  int iVar25;
  undefined8 unaff_RBP;
  int32_t iVar26;
  long *plVar27;
  _union_13 *method_00;
  _union_13 *p_Var28;
  Il2CppRGCTXData *pIVar29;
  Il2CppRGCTXData *pIVar30;
  MethodInfo_24EEB40 *pMVar31;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  int iVar32;
  System_Exception_o *unaff_R14;
  int iVar33;
  System_Exception_o *unaff_R15;
  float fVar34;
  float time;
  UnityEngine_Color_o UVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 in_stack_ffffffffffffff48;
  undefined4 uVar38;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 uVar39;
  undefined4 in_stack_ffffffffffffff50;
  float fVar40;
  float in_stack_ffffffffffffff54;
  float fVar41;
  float in_stack_ffffffffffffff58;
  UnityEngine_GradientAlphaKey_o UStack_98;
  System_Exception_o *pSStack_90;
  _union_13 _Stack_68;
  _union_14 _Stack_60;
  System_Exception_o *pSStack_58;
  System_Exception_o *pSStack_50;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    pUVar18 = (__c->fields).Value;
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (pUVar18 != (Utility_Color255_o *)0x0) {
      UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
      pSVar16 = Unity_VisualScripting_XColor__ToHexString(UVar35,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar16;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac533 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac533 = '\x01';
  }
  if (extraout_RDX_01 != 0) {
    pSVar19 = unaff_R15;
    if (*(int *)(extraout_RDX_01 + 0x18) != 0) {
      unaff_R14 = *(System_Exception_o **)(extraout_RDX_01 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)unaff_R14;
      pSVar17 = (System_Exception_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      pSVar19 = (System_Exception_o *)&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      if (1 < *(uint *)(extraout_RDX_01 + 0x18)) {
        __this = *(CustomLogic_CustomLogicColorBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x28);
        __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
        unaff_R15 = (System_Exception_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        unaff_R14 = pSVar17;
        if (2 < *(uint *)(extraout_RDX_01 + 0x18)) {
          __this = *(CustomLogic_CustomLogicColorBuiltin_Bindings___c_o **)(extraout_RDX_01 + 0x30);
          __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar34 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if (g_data_057ac510 == '\0') {
            __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicColorBuiltin;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac510 = '\x01';
          }
          if ((pSVar17 != (System_Exception_o *)0x0) && (unaff_R15 != (System_Exception_o *)0x0)) {
            pUVar18 = Utility_Color255__Lerp
                                ((Utility_Color255_o *)(pSVar17->fields)._helpURL,
                                 (Utility_Color255_o *)(unaff_R15->fields)._helpURL,fVar34,(MethodInfo *)0x0);
            auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
            return (Il2CppObject *)auVar37._0_8_;
          }
          goto label_040bd0dd;
        }
      }
    }
    unaff_R15 = pSVar19;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040bd0dd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac534 == '\0') {
    pSStack_50 = (System_Exception_o *)0x40bd10d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    pSStack_50 = (System_Exception_o *)0x40bd119;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_50 = (System_Exception_o *)0x40bd125;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac534 = '\x01';
  }
  if (extraout_RDX_02 != (System_Exception_o *)0x0) {
    if (*(int *)&(extraout_RDX_02->fields)._message != 0) {
      unaff_R14 = (System_Exception_o *)(extraout_RDX_02->fields)._data;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_50 = (System_Exception_o *)0x40bd153;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (System_Exception_o *)&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      pSStack_50 = (System_Exception_o *)0x40bd165;
      __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)unaff_R14;
      pSVar19 = (System_Exception_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (1 < *(uint *)&(extraout_RDX_02->fields)._message) {
        __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)
                 (extraout_RDX_02->fields)._innerException;
        pSStack_50 = (System_Exception_o *)0x40bd17a;
        __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        unaff_R14 = pSVar19;
        if (2 < *(uint *)&(extraout_RDX_02->fields)._message) {
          pSStack_50 = (System_Exception_o *)0x40bd196;
          fVar34 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             ((Il2CppObject *)(extraout_RDX_02->fields)._helpURL,MethodInfo_Single_ConvertTo_Single);
          p_Var28 = (_union_13 *)&stack0xffffffffffffff48;
          pSStack_50 = (System_Exception_o *)extraout_RDX_01;
          if (g_data_057ac511 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
            g_data_057ac511 = '\x01';
          }
          plVar27 = (long *)0x2;
          method_00 = TypeInfo_GradientColorKey;
          colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
          if (pSVar19 == (System_Exception_o *)0x0) {
label_040ba1e8:
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            pUVar18 = (Utility_Color255_o *)(pSVar19->fields)._helpURL;
            method_00 = (_union_13 *)0x0;
            if (pUVar18 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
            _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x0;
            _Stack_60.genericMethod = (void *)0x0;
            pSStack_58 = (System_Exception_o *)((ulong)pSStack_58 & 0xffffffff00000000);
            method_00 = &_Stack_68;
            plVar27 = (long *)0x0;
            __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff4c;
            __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff48;
            __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff50;
            __this_00.fields.color.fields.a = in_stack_ffffffffffffff54;
            __this_00.fields.time = in_stack_ffffffffffffff58;
            UnityEngine_GradientColorKey___ctor(__this_00,UVar35,0.0,(MethodInfo *)method_00);
            if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
            uVar13 = _Stack_68._0_4_;
            uVar38 = _Stack_68._4_4_;
            uVar39 = _Stack_60._0_4_;
            fVar40 = _Stack_60._4_4_;
            if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
            colorKeys->m_Items[0].fields.time = pSStack_58._0_4_;
            *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_68;
            *(_union_14 *)&colorKeys->m_Items[0].fields.color.fields.b = (void *)_Stack_60;
            if (pIVar20 == (Il2CppObject *)0x0) goto label_040ba1e8;
            method_00 = (_union_13 *)0x0;
            if (pIVar20[3].klass == (Il2CppClass *)0x0) goto label_040ba1e8;
            fVar41 = pSStack_58._0_4_;
            UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar20[3].klass,(MethodInfo *)0x0);
            method_00 = (_union_13 *)&stack0xffffffffffffff78;
            time = 1.0;
            plVar27 = (long *)0x0;
            __this_01.fields.color.fields.g = (float)uVar38;
            __this_01.fields.color.fields.r = (float)uVar13;
            __this_01.fields.color.fields.b = (float)uVar39;
            __this_01.fields.color.fields.a = fVar40;
            __this_01.fields.time = fVar41;
            UnityEngine_GradientColorKey___ctor(__this_01,UVar35,1.0,(MethodInfo *)method_00);
            if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
            colorKeys->m_Items[1].fields.time = 0.0;
            colorKeys->m_Items[1].fields.color.fields.r = 0.0;
            colorKeys->m_Items[1].fields.color.fields.g = 0.0;
            colorKeys->m_Items[1].fields.color.fields.b = 0.0;
            colorKeys->m_Items[1].fields.color.fields.a = 0.0;
            plVar27 = (long *)0x2;
            alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
            pUVar18 = (Utility_Color255_o *)(pSVar19->fields)._helpURL;
            method_00 = (_union_13 *)0x0;
            if (pUVar18 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            plVar27 = (long *)0x0;
            UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
            pUVar18 = (Utility_Color255_o *)(pSVar19->fields)._helpURL;
            method_00 = (_union_13 *)0x0;
            if (pUVar18 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            UStack_98.fields.time = UVar35.fields.a;
            UStack_98.fields.alpha = UVar35.fields.a;
            UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
            uVar13 = 0.0;
            uVar38 = 0.0;
            plVar27 = (long *)0x0;
            UnityEngine_GradientAlphaKey___ctor
                      (UStack_98,UVar35.fields.a,time,(MethodInfo *)&stack0xffffffffffffff48);
            method_00 = p_Var28;
            if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
            if ((int)alphakeys->max_length != 0) {
              UVar11.time = (float)uVar38;
              UVar11.alpha = (float)uVar13;
              alphakeys->m_Items[0].fields = UVar11;
              method_00 = (_union_13 *)0x0;
              if (pIVar20[3].klass != (Il2CppClass *)0x0) {
                plVar27 = (long *)0x0;
                UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar20[3].klass,(MethodInfo *)0x0);
                method_00 = (_union_13 *)0x0;
                if (pIVar20[3].klass != (Il2CppClass *)0x0) {
                  UStack_98.fields.time = UVar35.fields.a;
                  UStack_98.fields.alpha = UVar35.fields.a;
                  UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar20[3].klass,(MethodInfo *)0x0)
                  ;
                  method_00 = (_union_13 *)&stack0xffffffffffffff60;
                  plVar27 = (long *)0x0;
                  UnityEngine_GradientAlphaKey___ctor(UStack_98,UVar35.fields.a,time,(MethodInfo *)method_00);
                  if (1 < (uint)alphakeys->max_length) {
                    alphakeys->m_Items[1].fields.alpha = 0.0;
                    alphakeys->m_Items[1].fields.time = 0.0;
                    pUVar18 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar34,(MethodInfo *)0x0);
                    auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
                    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
                    return (Il2CppObject *)auVar37._0_8_;
                  }
                  goto label_040ba1ed;
                }
              }
              goto label_040ba1e8;
            }
          }
label_040ba1ed:
          il2cpp_runtime_helper_022b2ca0();
          pIVar29 = method_00[6].rgctx_data;
          if (pIVar29 != (Il2CppRGCTXData *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)&pIVar29->type[0x15].bits;
            pIVar20 = (Il2CppObject *)
                      (*UNRECOVERED_JUMPTABLE_00)
                                (pIVar29,pIVar29->type[0x16].data,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
            return pIVar20;
          }
          il2cpp_runtime_helper_022b2c90();
          pIVar30 = pIVar29;
          if (g_data_057ac512 == '\0') {
            pIVar30 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac512 = '\x01';
          }
          if (plVar27 == (long *)0x0) {
            return (Il2CppObject *)0x0;
          }
          bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
          if (*(byte *)(*plVar27 + 0x130) < bVar1) {
            return (Il2CppObject *)0x0;
          }
          if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
            return (Il2CppObject *)0x0;
          }
          pIVar6 = pIVar29[6].type;
          if ((pIVar6 != (Il2CppType *)0x0) && (lVar14 = plVar27[6], lVar14 != 0)) {
            if (*(int *)&pIVar6[1].data != *(int *)(lVar14 + 0x10)) {
              return (Il2CppObject *)0x0;
            }
            if (*(int *)((long)&pIVar6[1].data + 4) != *(int *)(lVar14 + 0x14)) {
              return (Il2CppObject *)0x0;
            }
            if (pIVar6[1].bits != *(uint *)(lVar14 + 0x18)) {
              return (Il2CppObject *)0x0;
            }
            return (Il2CppObject *)
                   (ulong)CONCAT31((int3)((uint)*(int *)&pIVar6[1].field_0xc >> 8),
                                   *(int *)&pIVar6[1].field_0xc == *(int *)(lVar14 + 0x1c));
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac513 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_object);
            il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
            g_data_057ac513 = '\x01';
          }
          args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if ((pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) ||
             (pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0))
          {
label_040ba4c8:
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
            goto label_040ba4d2;
            if ((int)args->max_length != 0) {
              args->m_Items[0] = pIVar20;
              il2cpp_runtime_helper_022b4080(args->m_Items);
              if (pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
              pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
              if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
              goto label_040ba4d2;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar20;
                il2cpp_runtime_helper_022b4080(args->m_Items + 1);
                if (pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
                pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
                goto label_040ba4d2;
                if (2 < (uint)args->max_length) {
                  args->m_Items[2] = pIVar20;
                  il2cpp_runtime_helper_022b4080(args->m_Items + 2);
                  if (pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
                  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                  if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
                  goto label_040ba4d2;
                  if (3 < (uint)args->max_length) {
                    args->m_Items[3] = pIVar20;
                    il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar20);
                    pSVar16 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
                    return (Il2CppObject *)pSVar16;
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
          lVar14 = il2cpp_runtime_helper_0231b270();
          plVar27 = (long *)0x0;
          il2cpp_runtime_helper_022b2b10();
          if (g_data_057ac514 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            g_data_057ac514 = '\x01';
          }
          lVar14 = *(long *)(lVar14 + 0x30);
          if (lVar14 != 0) {
            iVar26 = *(int32_t *)(lVar14 + 0x10);
            iVar2 = *(int32_t *)(lVar14 + 0x14);
            iVar3 = *(int32_t *)(lVar14 + 0x18);
            iVar4 = *(int32_t *)(lVar14 + 0x1c);
            pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor(pUVar18,iVar26,iVar2,iVar3,iVar4,(MethodInfo *)0x0);
            auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
            return (Il2CppObject *)auVar37._0_8_;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac515 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            g_data_057ac515 = '\x01';
          }
          if (plVar27 != (long *)0x0) {
            bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
            if (bVar1 <= *(byte *)(*plVar27 + 0x130)) {
              if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
                plVar27 = (long *)0x0;
              }
              if ((((extraout_RDX_00 != (long *)0x0) && (plVar27 != (long *)0x0)) &&
                  (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
                 (*(Il2CppClass **)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin
                 )) {
                return (Il2CppObject *)
                       CONCAT71((int7)((ulong)plVar27[6] >> 8),plVar27[6] == extraout_RDX_00[6]);
              }
            }
          }
          return (Il2CppObject *)0x0;
        }
      }
    }
    pSStack_50 = (System_Exception_o *)0x40bd1ab;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_50 = (System_Exception_o *)
               CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar14 = auVar37._8_8_;
  _Stack_60 = auVar37._0_8_;
  pSStack_58 = extraout_RDX_02;
  pSStack_50 = unaff_R14;
  if (lVar14 != 0) {
    if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1)) {
      _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x40bd289;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      plVar27 = *(long **)(lVar14 + 0x20);
      plVar9 = *(long **)(lVar14 + 0x28);
      if (g_data_057ac515 == '\0') {
        _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x40bd1f7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
        g_data_057ac515 = '\x01';
      }
      if (plVar27 != (long *)0x0) {
        bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
        if (bVar1 <= *(byte *)(*plVar27 + 0x130)) {
          plVar21 = (long *)0x0;
          if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
            plVar27 = plVar21;
          }
          if ((plVar9 == (long *)0x0) || (plVar27 == (long *)0x0)) goto label_040bd221;
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
            plVar21 = (long *)(ulong)(plVar27[6] == plVar9[6]);
            goto label_040bd221;
          }
        }
      }
      plVar21 = (long *)0x0;
label_040bd221:
      _Stack_60._7_1_ = (char)plVar21;
      _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x40bd23a;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&_Stack_60 + 7);
      return pIVar20;
    }
  }
  _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x40bd28e;
  _Stack_68.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    ppIVar10 = ((MethodInfo_24EEB40 *)__c)->parameters;
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (ppIVar10 != (Il2CppType **)0x0) {
      uVar13 = (**(code **)&(*ppIVar10)[0x15].bits)(ppIVar10,(*ppIVar10)[0x16].data);
      _Stack_68._4_4_ = uVar13;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&_Stack_68 + 4);
      return pIVar20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pMVar31 = (MethodInfo_24EEB40 *)__c;
    pSStack_90 = extraout_RDX_02;
    if (g_data_057ac516 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      pMVar31 = (MethodInfo_24EEB40 *)&TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac516 = '\x01';
    }
    ppIVar10 = ((MethodInfo_24EEB40 *)__c)->parameters;
    if (ppIVar10 != (Il2CppType **)0x0) {
      iVar26 = *(int32_t *)(ppIVar10 + 2);
      iVar2 = *(int32_t *)((long)ppIVar10 + 0x14);
      iVar3 = *(int32_t *)(ppIVar10 + 3);
      iVar4 = *(int32_t *)((long)ppIVar10 + 0x1c);
      pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar18,iVar26,iVar2,iVar3,iVar4,(MethodInfo *)0x0);
      auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
      return (Il2CppObject *)auVar37._0_8_;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar20 = (Il2CppObject *)(**(code **)(pMVar31->methodPointer + 0x168))();
    return pIVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(((MethodInfo_24EEB40 *)__c)->methodPointer + 0x168);
    pIVar20 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_00)
                        (__c,*(undefined8 *)(((MethodInfo_24EEB40 *)__c)->methodPointer + 0x170),
                         extraout_RDX_03,UNRECOVERED_JUMPTABLE_00);
    return pIVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_04 != 0) {
    if ((*(int *)(extraout_RDX_04 + 0x18) == 0) || (*(int *)(extraout_RDX_04 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar20 = CustomLogic_CustomLogicColorBuiltin____Add__
                          ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                           *(Il2CppObject **)(extraout_RDX_04 + 0x20),
                           *(Il2CppObject **)(extraout_RDX_04 + 0x28),method);
      return pIVar20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar23 = &stack0xffffffffffffff78;
  if (extraout_RDX_05 == 0) {
label_040bd37a:
    pSStack_90 = (System_Exception_o *)0x40bd37f;
    auVar37 = il2cpp_runtime_helper_022b2c90();
    lVar14 = auVar37._8_8_;
    pSStack_90 = auVar37._0_8_;
    ppSVar24 = &pSStack_90;
    if (lVar14 != 0) {
      if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
        pSVar17 = *(System_Exception_o **)(lVar14 + 0x20);
        auVar37._8_8_ = *(undefined8 *)(lVar14 + 0x28);
        auVar37._0_8_ = pSStack_90;
        pSVar19 = extraout_RDX_02;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar37 = il2cpp_runtime_helper_022b2c90();
    lVar14 = auVar37._8_8_;
    if (lVar14 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
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
      __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((System_Exception_o *)__this)->fields)._helpURL = (System_String_o *)__this_03;
      pIVar20 = (Il2CppObject *)
                il2cpp_runtime_helper_022b4080(&(((System_Exception_o *)__this)->fields)._helpURL,__this_03);
      return pIVar20;
    }
    if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040bd3da;
    pSVar19 = *(System_Exception_o **)(lVar14 + 0x20);
    auVar36._8_8_ = *(undefined8 *)(lVar14 + 0x28);
    auVar36._0_8_ = auVar37._0_8_;
    pSVar17 = extraout_RDX_02;
  }
  else {
    if ((*(int *)(extraout_RDX_05 + 0x18) == 0) || (*(int *)(extraout_RDX_05 + 0x18) == 1)) {
      pSStack_90 = (System_Exception_o *)0x40bd37a;
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040bd37a;
    pSVar19 = *(System_Exception_o **)(extraout_RDX_05 + 0x20);
    unaff_R14 = *(System_Exception_o **)(extraout_RDX_05 + 0x28);
    puVar23 = &stack0xffffffffffffff48;
    pSVar17 = pSVar19;
    pSStack_90 = unaff_R15;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (pSVar19 == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException
                          (pSVar16,(Il2CppObject *)pSVar19,(Il2CppObject *)unaff_R14,(MethodInfo *)0x0);
      pSVar17 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(pSVar19);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)pSVar19->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (System_Exception_o *)0x0)) ||
          ((((Il2CppClass *)pSVar19->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((((Il2CppClass *)unaff_R14->klass)->_2).naturalAligment < bVar1 ||
          ((((Il2CppClass *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin))))
      goto label_040baa5d;
      pSVar16 = (pSVar19->fields)._helpURL;
      if ((pSVar16 != (System_String_o *)0x0) &&
         (pSVar7 = (unaff_R14->fields)._helpURL, pSVar7 != (System_String_o *)0x0)) {
        iVar32 = (pSVar16->fields)._stringLength - (pSVar7->fields)._stringLength;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        iVar26 = 0;
        if (iVar32 < 0) {
          iVar32 = iVar26;
        }
        iVar33 = *(int *)&(pSVar16->fields)._firstChar - *(int *)&(pSVar7->fields)._firstChar;
        if (0xff < iVar33) {
          iVar33 = 0xff;
        }
        if (iVar33 < 0) {
          iVar33 = iVar26;
        }
        iVar22 = *(int *)&pSVar16[1].klass - *(int *)&pSVar7[1].klass;
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        if (iVar22 < 0) {
          iVar22 = iVar26;
        }
        iVar25 = *(int *)((long)&pSVar16[1].klass + 4) - *(int *)((long)&pSVar7[1].klass + 4);
        if (0xff < iVar25) {
          iVar25 = 0xff;
        }
        if (iVar25 < 0) {
          iVar25 = 0;
        }
        pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar18,iVar32,iVar33,iVar22,iVar25,(MethodInfo *)0x0);
        auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
        return (Il2CppObject *)auVar37._0_8_;
      }
    }
    auVar37 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    rhs = auVar37._8_8_;
    *(undefined8 *)(puVar23 + -8) = unaff_RBP;
    *(System_Exception_o **)(puVar23 + -0x10) = unaff_R15;
    *(System_Exception_o **)(puVar23 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar23 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar23 + -0x28) = unaff_R12;
    *(System_Exception_o **)(puVar23 + -0x30) = pSVar19;
    ppSVar24 = (System_Exception_o **)(puVar23 + -0x38);
    *(long *)(puVar23 + -0x38) = auVar37._0_8_;
    pSVar19 = pSVar17;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)(puVar23 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)(puVar23 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (pSVar17 == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac1d;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac2d;
      pSVar17 = CustomLogic_CustomLogicUtils__OperatorException
                          (pSVar16,(Il2CppObject *)pSVar17,(Il2CppObject *)rhs,(MethodInfo *)0x0);
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac3c;
      pSVar19 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(pSVar17);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((pSVar17->klass->_2).naturalAligment < bVar1) || (rhs == (System_Exception_o *)0x0)) ||
          ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((rhs->klass->_2).naturalAligment < bVar1 ||
          ((rhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar16 = (pSVar17->fields)._helpURL;
      if ((pSVar16 != (System_String_o *)0x0) &&
         (pSVar7 = (rhs->fields)._helpURL, pSVar7 != (System_String_o *)0x0)) {
        iVar32 = (pSVar7->fields)._stringLength * (pSVar16->fields)._stringLength;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        iVar26 = 0;
        if (iVar32 < 0) {
          iVar32 = iVar26;
        }
        iVar33 = *(int *)&(pSVar7->fields)._firstChar * *(int *)&(pSVar16->fields)._firstChar;
        if (0xff < iVar33) {
          iVar33 = 0xff;
        }
        if (iVar33 < 0) {
          iVar33 = iVar26;
        }
        iVar22 = *(int *)&pSVar7[1].klass * *(int *)&pSVar16[1].klass;
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        if (iVar22 < 0) {
          iVar22 = iVar26;
        }
        iVar25 = *(int *)((long)&pSVar7[1].klass + 4) * *(int *)((long)&pSVar16[1].klass + 4);
        if (0xff < iVar25) {
          iVar25 = 0xff;
        }
        if (iVar25 < 0) {
          iVar25 = 0;
        }
        *(undefined8 *)(puVar23 + -0x40) = 0x40babcf;
        pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)(puVar23 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar18,iVar32,iVar33,iVar22,iVar25,(MethodInfo *)0x0);
        *(undefined8 *)(puVar23 + -0x40) = 0x40babf1;
        auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar23 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
        return (Il2CppObject *)auVar37._0_8_;
      }
    }
    *(undefined8 *)(puVar23 + -0x40) = 0x40bac4c;
    auVar36 = il2cpp_runtime_helper_022b2c90();
    unaff_R14 = rhs;
  }
  pIVar20 = auVar36._8_8_;
  *(undefined8 *)((long)ppSVar24 + -8) = unaff_RBP;
  *(System_Exception_o **)((long)ppSVar24 + -0x10) = unaff_R15;
  *(System_Exception_o **)((long)ppSVar24 + -0x18) = unaff_R14;
  *(undefined8 **)((long)ppSVar24 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppSVar24 + -0x28) = unaff_R12;
  *(System_Exception_o **)((long)ppSVar24 + -0x30) = pSVar17;
  *(long *)((long)ppSVar24 + -0x38) = auVar36._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (pSVar19 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (pSVar19->klass->_2).naturalAligment) && (pIVar20 != (Il2CppObject *)0x0)) &&
        ((pSVar19->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar20->klass->_2).naturalAligment &&
        ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar16 = (pSVar19->fields)._helpURL;
      if ((pSVar16 != (System_String_o *)0x0) && (pIVar8 = pIVar20[3].klass, pIVar8 != (Il2CppClass *)0x0)) {
        iVar32 = (pSVar16->fields)._stringLength / *(int *)&(pIVar8->_1).name;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        iVar26 = 0;
        if (iVar32 < 0) {
          iVar32 = iVar26;
        }
        iVar33 = *(int *)&(pSVar16->fields)._firstChar / *(int *)((long)&(pIVar8->_1).name + 4);
        if (0xff < iVar33) {
          iVar33 = 0xff;
        }
        if (iVar33 < 0) {
          iVar33 = iVar26;
        }
        iVar22 = *(int *)&pSVar16[1].klass / *(int *)&(pIVar8->_1).namespaze;
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        if (iVar22 < 0) {
          iVar22 = iVar26;
        }
        iVar25 = *(int *)((long)&pSVar16[1].klass + 4);
        iVar5 = *(int *)((long)&(pIVar8->_1).namespaze + 4);
        iVar12 = iVar25 / iVar5;
        a = 0xff;
        if (iVar12 < 0x100) {
          a = iVar12;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bad82;
        pUVar18 = (Utility_Color255_o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar16,(long)iVar25 % (long)iVar5 & 0xffffffff);
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar18,iVar32,iVar33,iVar22,a,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bada4;
        auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
        return (Il2CppObject *)auVar37._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badd0;
  pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bade0;
  pSVar19 = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar16,(Il2CppObject *)pSVar19,pIVar20,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(pSVar19);
label_040badfa:
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)((long)ppSVar24 + -0x40) = pSVar19;
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae0d;
  uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae15;
  __this_02 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar15);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae2e;
  uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae39;
  uVar15 = il2cpp_runtime_helper_022b2b10(__this_02,uVar15);
  *(undefined8 *)((long)ppSVar24 + -0x48) = uVar15;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)((long)ppSVar24 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bcfb0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppType *pIVar6;
  System_String_o *pSVar7;
  Il2CppClass *pIVar8;
  long *plVar9;
  Il2CppType **ppIVar10;
  UnityEngine_GradientAlphaKey_Fields UVar11;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  int iVar12;
  undefined4 uVar13;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  long lVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  System_NotImplementedException_o *__this_02;
  System_Exception_o *pSVar17;
  Utility_Color255_o *pUVar18;
  System_Exception_o *pSVar19;
  Il2CppObject *pIVar20;
  long *plVar21;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  System_Exception_o *rhs;
  System_Exception_o *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  int iVar22;
  int a;
  undefined1 *puVar23;
  System_Exception_o **ppSVar24;
  int iVar25;
  undefined8 unaff_RBP;
  int32_t iVar26;
  long *plVar27;
  _union_13 *method_00;
  _union_13 *p_Var28;
  Il2CppRGCTXData *pIVar29;
  Il2CppRGCTXData *pIVar30;
  MethodInfo_24EEB40 *pMVar31;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  int iVar32;
  System_Exception_o *unaff_R14;
  int iVar33;
  System_Exception_o *unaff_R15;
  float fVar34;
  float time;
  UnityEngine_Color_o UVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 in_stack_ffffffffffffff50;
  undefined4 uVar38;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 uVar39;
  undefined4 in_stack_ffffffffffffff58;
  float fVar40;
  float in_stack_ffffffffffffff5c;
  float fVar41;
  float in_stack_ffffffffffffff60;
  UnityEngine_GradientAlphaKey_o UStack_90;
  System_Exception_o *pSStack_88;
  _union_13 _Stack_60;
  _union_14 _Stack_58;
  System_Exception_o *pSStack_50;
  System_Object_array *pSStack_48;
  
  if (g_data_057ac533 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac533 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    pSVar19 = unaff_R15;
    if ((int)__a->max_length != 0) {
      unaff_R14 = (System_Exception_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)unaff_R14;
      pSVar17 = (System_Exception_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      pSVar19 = (System_Exception_o *)&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)__a->m_Items[1];
        __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
        unaff_R15 = (System_Exception_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        unaff_R14 = pSVar17;
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)__a->m_Items[2];
          __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_Single_ConvertTo_Single;
          fVar34 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_((Il2CppObject *)__this,MethodInfo_Single_ConvertTo_Single);
          if (g_data_057ac510 == '\0') {
            __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicColorBuiltin;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac510 = '\x01';
          }
          if ((pSVar17 != (System_Exception_o *)0x0) && (unaff_R15 != (System_Exception_o *)0x0)) {
            pUVar18 = Utility_Color255__Lerp
                                ((Utility_Color255_o *)(pSVar17->fields)._helpURL,
                                 (Utility_Color255_o *)(unaff_R15->fields)._helpURL,fVar34,(MethodInfo *)0x0);
            auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
            return (Il2CppObject *)auVar37._0_8_;
          }
          goto label_040bd0dd;
        }
      }
    }
    unaff_R15 = pSVar19;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040bd0dd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac534 == '\0') {
    pSStack_48 = (System_Object_array *)0x40bd10d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    pSStack_48 = (System_Object_array *)0x40bd119;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pSStack_48 = (System_Object_array *)0x40bd125;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac534 = '\x01';
  }
  if (extraout_RDX_01 != (System_Exception_o *)0x0) {
    if (*(int *)&(extraout_RDX_01->fields)._message != 0) {
      unaff_R14 = (System_Exception_o *)(extraout_RDX_01->fields)._data;
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pSStack_48 = (System_Object_array *)0x40bd153;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (System_Exception_o *)&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      pSStack_48 = (System_Object_array *)0x40bd165;
      __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)unaff_R14;
      pSVar19 = (System_Exception_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (1 < *(uint *)&(extraout_RDX_01->fields)._message) {
        __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)
                 (extraout_RDX_01->fields)._innerException;
        pSStack_48 = (System_Object_array *)0x40bd17a;
        __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
        pIVar20 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        unaff_R14 = pSVar19;
        if (2 < *(uint *)&(extraout_RDX_01->fields)._message) {
          pSStack_48 = (System_Object_array *)0x40bd196;
          fVar34 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             ((Il2CppObject *)(extraout_RDX_01->fields)._helpURL,MethodInfo_Single_ConvertTo_Single);
          p_Var28 = (_union_13 *)&stack0xffffffffffffff50;
          pSStack_48 = __a;
          if (g_data_057ac511 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
            g_data_057ac511 = '\x01';
          }
          plVar27 = (long *)0x2;
          method_00 = TypeInfo_GradientColorKey;
          colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
          if (pSVar19 == (System_Exception_o *)0x0) {
label_040ba1e8:
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            pUVar18 = (Utility_Color255_o *)(pSVar19->fields)._helpURL;
            method_00 = (_union_13 *)0x0;
            if (pUVar18 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
            _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x0;
            _Stack_58.genericMethod = (void *)0x0;
            pSStack_50 = (System_Exception_o *)((ulong)pSStack_50 & 0xffffffff00000000);
            method_00 = &_Stack_60;
            plVar27 = (long *)0x0;
            __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff54;
            __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff50;
            __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff58;
            __this_00.fields.color.fields.a = in_stack_ffffffffffffff5c;
            __this_00.fields.time = in_stack_ffffffffffffff60;
            UnityEngine_GradientColorKey___ctor(__this_00,UVar35,0.0,(MethodInfo *)method_00);
            if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
            uVar13 = _Stack_60._0_4_;
            uVar38 = _Stack_60._4_4_;
            uVar39 = _Stack_58._0_4_;
            fVar40 = _Stack_58._4_4_;
            if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
            colorKeys->m_Items[0].fields.time = pSStack_50._0_4_;
            *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_60;
            *(_union_14 *)&colorKeys->m_Items[0].fields.color.fields.b = (void *)_Stack_58;
            if (pIVar20 == (Il2CppObject *)0x0) goto label_040ba1e8;
            method_00 = (_union_13 *)0x0;
            if (pIVar20[3].klass == (Il2CppClass *)0x0) goto label_040ba1e8;
            fVar41 = pSStack_50._0_4_;
            UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar20[3].klass,(MethodInfo *)0x0);
            method_00 = (_union_13 *)&stack0xffffffffffffff80;
            time = 1.0;
            plVar27 = (long *)0x0;
            __this_01.fields.color.fields.g = (float)uVar38;
            __this_01.fields.color.fields.r = (float)uVar13;
            __this_01.fields.color.fields.b = (float)uVar39;
            __this_01.fields.color.fields.a = fVar40;
            __this_01.fields.time = fVar41;
            UnityEngine_GradientColorKey___ctor(__this_01,UVar35,1.0,(MethodInfo *)method_00);
            if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
            colorKeys->m_Items[1].fields.time = 0.0;
            colorKeys->m_Items[1].fields.color.fields.r = 0.0;
            colorKeys->m_Items[1].fields.color.fields.g = 0.0;
            colorKeys->m_Items[1].fields.color.fields.b = 0.0;
            colorKeys->m_Items[1].fields.color.fields.a = 0.0;
            plVar27 = (long *)0x2;
            alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
            pUVar18 = (Utility_Color255_o *)(pSVar19->fields)._helpURL;
            method_00 = (_union_13 *)0x0;
            if (pUVar18 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            plVar27 = (long *)0x0;
            UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
            pUVar18 = (Utility_Color255_o *)(pSVar19->fields)._helpURL;
            method_00 = (_union_13 *)0x0;
            if (pUVar18 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            UStack_90.fields.time = UVar35.fields.a;
            UStack_90.fields.alpha = UVar35.fields.a;
            UVar35 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
            uVar13 = 0.0;
            uVar38 = 0.0;
            plVar27 = (long *)0x0;
            UnityEngine_GradientAlphaKey___ctor
                      (UStack_90,UVar35.fields.a,time,(MethodInfo *)&stack0xffffffffffffff50);
            method_00 = p_Var28;
            if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
            if ((int)alphakeys->max_length != 0) {
              UVar11.time = (float)uVar38;
              UVar11.alpha = (float)uVar13;
              alphakeys->m_Items[0].fields = UVar11;
              method_00 = (_union_13 *)0x0;
              if (pIVar20[3].klass != (Il2CppClass *)0x0) {
                plVar27 = (long *)0x0;
                UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar20[3].klass,(MethodInfo *)0x0);
                method_00 = (_union_13 *)0x0;
                if (pIVar20[3].klass != (Il2CppClass *)0x0) {
                  UStack_90.fields.time = UVar35.fields.a;
                  UStack_90.fields.alpha = UVar35.fields.a;
                  UVar35 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar20[3].klass,(MethodInfo *)0x0)
                  ;
                  method_00 = (_union_13 *)&stack0xffffffffffffff68;
                  plVar27 = (long *)0x0;
                  UnityEngine_GradientAlphaKey___ctor(UStack_90,UVar35.fields.a,time,(MethodInfo *)method_00);
                  if (1 < (uint)alphakeys->max_length) {
                    alphakeys->m_Items[1].fields.alpha = 0.0;
                    alphakeys->m_Items[1].fields.time = 0.0;
                    pUVar18 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar34,(MethodInfo *)0x0);
                    auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
                    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
                    return (Il2CppObject *)auVar37._0_8_;
                  }
                  goto label_040ba1ed;
                }
              }
              goto label_040ba1e8;
            }
          }
label_040ba1ed:
          il2cpp_runtime_helper_022b2ca0();
          pIVar29 = method_00[6].rgctx_data;
          if (pIVar29 != (Il2CppRGCTXData *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)&pIVar29->type[0x15].bits;
            pIVar20 = (Il2CppObject *)
                      (*UNRECOVERED_JUMPTABLE_00)
                                (pIVar29,pIVar29->type[0x16].data,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
            return pIVar20;
          }
          il2cpp_runtime_helper_022b2c90();
          pIVar30 = pIVar29;
          if (g_data_057ac512 == '\0') {
            pIVar30 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac512 = '\x01';
          }
          if (plVar27 == (long *)0x0) {
            return (Il2CppObject *)0x0;
          }
          bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
          if (*(byte *)(*plVar27 + 0x130) < bVar1) {
            return (Il2CppObject *)0x0;
          }
          if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
            return (Il2CppObject *)0x0;
          }
          pIVar6 = pIVar29[6].type;
          if ((pIVar6 != (Il2CppType *)0x0) && (lVar14 = plVar27[6], lVar14 != 0)) {
            if (*(int *)&pIVar6[1].data != *(int *)(lVar14 + 0x10)) {
              return (Il2CppObject *)0x0;
            }
            if (*(int *)((long)&pIVar6[1].data + 4) != *(int *)(lVar14 + 0x14)) {
              return (Il2CppObject *)0x0;
            }
            if (pIVar6[1].bits != *(uint *)(lVar14 + 0x18)) {
              return (Il2CppObject *)0x0;
            }
            return (Il2CppObject *)
                   (ulong)CONCAT31((int3)((uint)*(int *)&pIVar6[1].field_0xc >> 8),
                                   *(int *)&pIVar6[1].field_0xc == *(int *)(lVar14 + 0x1c));
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac513 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_object);
            il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
            g_data_057ac513 = '\x01';
          }
          args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if ((pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) ||
             (pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0))
          {
label_040ba4c8:
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
            goto label_040ba4d2;
            if ((int)args->max_length != 0) {
              args->m_Items[0] = pIVar20;
              il2cpp_runtime_helper_022b4080(args->m_Items);
              if (pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
              pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
              if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
              goto label_040ba4d2;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar20;
                il2cpp_runtime_helper_022b4080(args->m_Items + 1);
                if (pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
                pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
                goto label_040ba4d2;
                if (2 < (uint)args->max_length) {
                  args->m_Items[2] = pIVar20;
                  il2cpp_runtime_helper_022b4080(args->m_Items + 2);
                  if (pIVar30[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
                  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                  if ((pIVar20 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar20), lVar14 == 0))
                  goto label_040ba4d2;
                  if (3 < (uint)args->max_length) {
                    args->m_Items[3] = pIVar20;
                    il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar20);
                    pSVar15 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
                    return (Il2CppObject *)pSVar15;
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
          lVar14 = il2cpp_runtime_helper_0231b270();
          plVar27 = (long *)0x0;
          il2cpp_runtime_helper_022b2b10();
          if (g_data_057ac514 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            g_data_057ac514 = '\x01';
          }
          lVar14 = *(long *)(lVar14 + 0x30);
          if (lVar14 != 0) {
            iVar26 = *(int32_t *)(lVar14 + 0x10);
            iVar2 = *(int32_t *)(lVar14 + 0x14);
            iVar3 = *(int32_t *)(lVar14 + 0x18);
            iVar4 = *(int32_t *)(lVar14 + 0x1c);
            pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor(pUVar18,iVar26,iVar2,iVar3,iVar4,(MethodInfo *)0x0);
            auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
            return (Il2CppObject *)auVar37._0_8_;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac515 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            g_data_057ac515 = '\x01';
          }
          if (plVar27 != (long *)0x0) {
            bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
            if (bVar1 <= *(byte *)(*plVar27 + 0x130)) {
              if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
                plVar27 = (long *)0x0;
              }
              if ((((extraout_RDX_00 != (long *)0x0) && (plVar27 != (long *)0x0)) &&
                  (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
                 (*(Il2CppClass **)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin
                 )) {
                return (Il2CppObject *)
                       CONCAT71((int7)((ulong)plVar27[6] >> 8),plVar27[6] == extraout_RDX_00[6]);
              }
            }
          }
          return (Il2CppObject *)0x0;
        }
      }
    }
    pSStack_48 = (System_Object_array *)0x40bd1ab;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_48 = (System_Object_array *)
               CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  lVar14 = auVar37._8_8_;
  _Stack_58 = auVar37._0_8_;
  pSStack_50 = extraout_RDX_01;
  pSStack_48 = (System_Object_array *)unaff_R14;
  if (lVar14 != 0) {
    if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1)) {
      _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x40bd289;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      plVar27 = *(long **)(lVar14 + 0x20);
      plVar9 = *(long **)(lVar14 + 0x28);
      if (g_data_057ac515 == '\0') {
        _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x40bd1f7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
        g_data_057ac515 = '\x01';
      }
      if (plVar27 != (long *)0x0) {
        bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
        if (bVar1 <= *(byte *)(*plVar27 + 0x130)) {
          plVar21 = (long *)0x0;
          if (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
            plVar27 = plVar21;
          }
          if ((plVar9 == (long *)0x0) || (plVar27 == (long *)0x0)) goto label_040bd221;
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
            plVar21 = (long *)(ulong)(plVar27[6] == plVar9[6]);
            goto label_040bd221;
          }
        }
      }
      plVar21 = (long *)0x0;
label_040bd221:
      _Stack_58._7_1_ = (char)plVar21;
      _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x40bd23a;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&_Stack_58 + 7);
      return pIVar20;
    }
  }
  _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x40bd28e;
  _Stack_60.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    ppIVar10 = ((MethodInfo_24EEB40 *)__c)->parameters;
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (ppIVar10 != (Il2CppType **)0x0) {
      uVar13 = (**(code **)&(*ppIVar10)[0x15].bits)(ppIVar10,(*ppIVar10)[0x16].data);
      _Stack_60._4_4_ = uVar13;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&_Stack_60 + 4);
      return pIVar20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pMVar31 = (MethodInfo_24EEB40 *)__c;
    pSStack_88 = extraout_RDX_01;
    if (g_data_057ac516 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      pMVar31 = (MethodInfo_24EEB40 *)&TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac516 = '\x01';
    }
    ppIVar10 = ((MethodInfo_24EEB40 *)__c)->parameters;
    if (ppIVar10 != (Il2CppType **)0x0) {
      iVar26 = *(int32_t *)(ppIVar10 + 2);
      iVar2 = *(int32_t *)((long)ppIVar10 + 0x14);
      iVar3 = *(int32_t *)(ppIVar10 + 3);
      iVar4 = *(int32_t *)((long)ppIVar10 + 0x1c);
      pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar18,iVar26,iVar2,iVar3,iVar4,(MethodInfo *)0x0);
      auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
      return (Il2CppObject *)auVar37._0_8_;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar20 = (Il2CppObject *)(**(code **)(pMVar31->methodPointer + 0x168))();
    return pIVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(((MethodInfo_24EEB40 *)__c)->methodPointer + 0x168);
    pIVar20 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_00)
                        (__c,*(undefined8 *)(((MethodInfo_24EEB40 *)__c)->methodPointer + 0x170),
                         extraout_RDX_02,UNRECOVERED_JUMPTABLE_00);
    return pIVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_03 != 0) {
    if ((*(int *)(extraout_RDX_03 + 0x18) == 0) || (*(int *)(extraout_RDX_03 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar20 = CustomLogic_CustomLogicColorBuiltin____Add__
                          ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                           *(Il2CppObject **)(extraout_RDX_03 + 0x20),
                           *(Il2CppObject **)(extraout_RDX_03 + 0x28),method);
      return pIVar20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar23 = &stack0xffffffffffffff80;
  if (extraout_RDX_04 == 0) {
label_040bd37a:
    pSStack_88 = (System_Exception_o *)0x40bd37f;
    auVar37 = il2cpp_runtime_helper_022b2c90();
    lVar14 = auVar37._8_8_;
    pSStack_88 = auVar37._0_8_;
    ppSVar24 = &pSStack_88;
    if (lVar14 != 0) {
      if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
        pSVar17 = *(System_Exception_o **)(lVar14 + 0x20);
        auVar37._8_8_ = *(undefined8 *)(lVar14 + 0x28);
        auVar37._0_8_ = pSStack_88;
        pSVar19 = extraout_RDX_01;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar37 = il2cpp_runtime_helper_022b2c90();
    lVar14 = auVar37._8_8_;
    if (lVar14 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
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
      __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((System_Exception_o *)__this)->fields)._helpURL = (System_String_o *)__this_03;
      pIVar20 = (Il2CppObject *)
                il2cpp_runtime_helper_022b4080(&(((System_Exception_o *)__this)->fields)._helpURL,__this_03);
      return pIVar20;
    }
    if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040bd3da;
    pSVar19 = *(System_Exception_o **)(lVar14 + 0x20);
    auVar36._8_8_ = *(undefined8 *)(lVar14 + 0x28);
    auVar36._0_8_ = auVar37._0_8_;
    pSVar17 = extraout_RDX_01;
  }
  else {
    if ((*(int *)(extraout_RDX_04 + 0x18) == 0) || (*(int *)(extraout_RDX_04 + 0x18) == 1)) {
      pSStack_88 = (System_Exception_o *)0x40bd37a;
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040bd37a;
    pSVar19 = *(System_Exception_o **)(extraout_RDX_04 + 0x20);
    unaff_R14 = *(System_Exception_o **)(extraout_RDX_04 + 0x28);
    puVar23 = &stack0xffffffffffffff50;
    pSVar17 = pSVar19;
    pSStack_88 = unaff_R15;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (pSVar19 == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      pSVar19 = CustomLogic_CustomLogicUtils__OperatorException
                          (pSVar15,(Il2CppObject *)pSVar19,(Il2CppObject *)unaff_R14,(MethodInfo *)0x0);
      pSVar17 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(pSVar19);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)pSVar19->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (System_Exception_o *)0x0)) ||
          ((((Il2CppClass *)pSVar19->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((((Il2CppClass *)unaff_R14->klass)->_2).naturalAligment < bVar1 ||
          ((((Il2CppClass *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin))))
      goto label_040baa5d;
      pSVar15 = (pSVar19->fields)._helpURL;
      if ((pSVar15 != (System_String_o *)0x0) &&
         (pSVar7 = (unaff_R14->fields)._helpURL, pSVar7 != (System_String_o *)0x0)) {
        iVar32 = (pSVar15->fields)._stringLength - (pSVar7->fields)._stringLength;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        iVar26 = 0;
        if (iVar32 < 0) {
          iVar32 = iVar26;
        }
        iVar33 = *(int *)&(pSVar15->fields)._firstChar - *(int *)&(pSVar7->fields)._firstChar;
        if (0xff < iVar33) {
          iVar33 = 0xff;
        }
        if (iVar33 < 0) {
          iVar33 = iVar26;
        }
        iVar22 = *(int *)&pSVar15[1].klass - *(int *)&pSVar7[1].klass;
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        if (iVar22 < 0) {
          iVar22 = iVar26;
        }
        iVar25 = *(int *)((long)&pSVar15[1].klass + 4) - *(int *)((long)&pSVar7[1].klass + 4);
        if (0xff < iVar25) {
          iVar25 = 0xff;
        }
        if (iVar25 < 0) {
          iVar25 = 0;
        }
        pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar18,iVar32,iVar33,iVar22,iVar25,(MethodInfo *)0x0);
        auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
        return (Il2CppObject *)auVar37._0_8_;
      }
    }
    auVar37 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    rhs = auVar37._8_8_;
    *(undefined8 *)(puVar23 + -8) = unaff_RBP;
    *(System_Exception_o **)(puVar23 + -0x10) = unaff_R15;
    *(System_Exception_o **)(puVar23 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar23 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar23 + -0x28) = unaff_R12;
    *(System_Exception_o **)(puVar23 + -0x30) = pSVar19;
    ppSVar24 = (System_Exception_o **)(puVar23 + -0x38);
    *(long *)(puVar23 + -0x38) = auVar37._0_8_;
    pSVar19 = pSVar17;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)(puVar23 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)(puVar23 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (pSVar17 == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac1d;
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac2d;
      pSVar17 = CustomLogic_CustomLogicUtils__OperatorException
                          (pSVar15,(Il2CppObject *)pSVar17,(Il2CppObject *)rhs,(MethodInfo *)0x0);
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac3c;
      pSVar19 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)(puVar23 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(pSVar17);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((pSVar17->klass->_2).naturalAligment < bVar1) || (rhs == (System_Exception_o *)0x0)) ||
          ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((rhs->klass->_2).naturalAligment < bVar1 ||
          ((rhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar15 = (pSVar17->fields)._helpURL;
      if ((pSVar15 != (System_String_o *)0x0) &&
         (pSVar7 = (rhs->fields)._helpURL, pSVar7 != (System_String_o *)0x0)) {
        iVar32 = (pSVar7->fields)._stringLength * (pSVar15->fields)._stringLength;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        iVar26 = 0;
        if (iVar32 < 0) {
          iVar32 = iVar26;
        }
        iVar33 = *(int *)&(pSVar7->fields)._firstChar * *(int *)&(pSVar15->fields)._firstChar;
        if (0xff < iVar33) {
          iVar33 = 0xff;
        }
        if (iVar33 < 0) {
          iVar33 = iVar26;
        }
        iVar22 = *(int *)&pSVar7[1].klass * *(int *)&pSVar15[1].klass;
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        if (iVar22 < 0) {
          iVar22 = iVar26;
        }
        iVar25 = *(int *)((long)&pSVar7[1].klass + 4) * *(int *)((long)&pSVar15[1].klass + 4);
        if (0xff < iVar25) {
          iVar25 = 0xff;
        }
        if (iVar25 < 0) {
          iVar25 = 0;
        }
        *(undefined8 *)(puVar23 + -0x40) = 0x40babcf;
        pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)(puVar23 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar18,iVar32,iVar33,iVar22,iVar25,(MethodInfo *)0x0);
        *(undefined8 *)(puVar23 + -0x40) = 0x40babf1;
        auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar23 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
        return (Il2CppObject *)auVar37._0_8_;
      }
    }
    *(undefined8 *)(puVar23 + -0x40) = 0x40bac4c;
    auVar36 = il2cpp_runtime_helper_022b2c90();
    unaff_R14 = rhs;
  }
  pIVar20 = auVar36._8_8_;
  *(undefined8 *)((long)ppSVar24 + -8) = unaff_RBP;
  *(System_Exception_o **)((long)ppSVar24 + -0x10) = unaff_R15;
  *(System_Exception_o **)((long)ppSVar24 + -0x18) = unaff_R14;
  *(undefined8 **)((long)ppSVar24 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppSVar24 + -0x28) = unaff_R12;
  *(System_Exception_o **)((long)ppSVar24 + -0x30) = pSVar17;
  *(long *)((long)ppSVar24 + -0x38) = auVar36._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (pSVar19 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (pSVar19->klass->_2).naturalAligment) && (pIVar20 != (Il2CppObject *)0x0)) &&
        ((pSVar19->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar20->klass->_2).naturalAligment &&
        ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar15 = (pSVar19->fields)._helpURL;
      if ((pSVar15 != (System_String_o *)0x0) && (pIVar8 = pIVar20[3].klass, pIVar8 != (Il2CppClass *)0x0)) {
        iVar32 = (pSVar15->fields)._stringLength / *(int *)&(pIVar8->_1).name;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        iVar26 = 0;
        if (iVar32 < 0) {
          iVar32 = iVar26;
        }
        iVar33 = *(int *)&(pSVar15->fields)._firstChar / *(int *)((long)&(pIVar8->_1).name + 4);
        if (0xff < iVar33) {
          iVar33 = 0xff;
        }
        if (iVar33 < 0) {
          iVar33 = iVar26;
        }
        iVar22 = *(int *)&pSVar15[1].klass / *(int *)&(pIVar8->_1).namespaze;
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        if (iVar22 < 0) {
          iVar22 = iVar26;
        }
        iVar25 = *(int *)((long)&pSVar15[1].klass + 4);
        iVar5 = *(int *)((long)&(pIVar8->_1).namespaze + 4);
        iVar12 = iVar25 / iVar5;
        a = 0xff;
        if (iVar12 < 0x100) {
          a = iVar12;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bad82;
        pUVar18 = (Utility_Color255_o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar15,(long)iVar25 % (long)iVar5 & 0xffffffff);
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar18,iVar32,iVar33,iVar22,a,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bada4;
        auVar37 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar37._0_8_,pUVar18,auVar37._8_8_);
        return (Il2CppObject *)auVar37._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badd0;
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40bade0;
  pSVar19 = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar15,(Il2CppObject *)pSVar19,pIVar20,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(pSVar19);
label_040badfa:
  *(undefined8 *)((long)ppSVar24 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)((long)ppSVar24 + -0x40) = pSVar19;
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae0d;
  uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae15;
  __this_02 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar16);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae2e;
  uVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)((long)ppSVar24 + -0x48) = 0x40bae39;
  uVar16 = il2cpp_runtime_helper_022b2b10(__this_02,uVar16);
  *(undefined8 *)((long)ppSVar24 + -0x48) = uVar16;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)((long)ppSVar24 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Gradient>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd0f0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppType *pIVar6;
  Il2CppClass *pIVar7;
  long *plVar8;
  Il2CppType **ppIVar9;
  UnityEngine_GradientAlphaKey_Fields UVar10;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  int iVar11;
  undefined4 uVar12;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  Utility_Color255_o *pUVar13;
  System_Object_array *pSVar14;
  long lVar15;
  System_String_o *pSVar16;
  System_Object_array *lhs;
  undefined8 uVar17;
  System_NotImplementedException_o *__this_02;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar18;
  Il2CppObject *pIVar19;
  long *plVar20;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  int iVar21;
  int a;
  undefined1 *puVar22;
  System_Object_array **ppSVar23;
  int iVar24;
  undefined8 unaff_RBP;
  int32_t iVar25;
  long *plVar26;
  _union_13 *method_00;
  _union_13 *p_Var27;
  Il2CppRGCTXData *pIVar28;
  Il2CppRGCTXData *pIVar29;
  MethodInfo_24EEB40 *pMVar30;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  int iVar31;
  CustomLogic_CustomLogicColorBuiltin_o *unaff_R14;
  int iVar32;
  System_Object_array *unaff_R15;
  float t;
  float time;
  UnityEngine_Color_o UVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 in_stack_ffffffffffffff78;
  undefined4 uVar36;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 uVar37;
  undefined4 in_stack_ffffffffffffff80;
  float fVar38;
  float in_stack_ffffffffffffff84;
  float fVar39;
  float in_stack_ffffffffffffff88;
  UnityEngine_GradientAlphaKey_o UStack_68;
  System_Object_array *pSStack_60;
  _union_13 _Stack_38;
  _union_14 _Stack_30;
  System_Object_array *pSStack_28;
  CustomLogic_CustomLogicColorBuiltin_o *pCStack_20;
  
  if (g_data_057ac534 == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd10d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd119;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd125;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac534 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      unaff_R14 = (CustomLogic_CustomLogicColorBuiltin_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd153;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15 = (System_Object_array *)&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd165;
      __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
      __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)unaff_R14;
      pCVar18 = (CustomLogic_CustomLogicColorBuiltin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)unaff_R14,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)__a->m_Items[1];
        pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd17a;
        __c = (CustomLogic_CustomLogicColorBuiltin_o *)MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti;
        pIVar19 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
        unaff_R14 = pCVar18;
        if (2 < (uint)__a->max_length) {
          pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd196;
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          p_Var27 = (_union_13 *)&stack0xffffffffffffff78;
          if (g_data_057ac511 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
            g_data_057ac511 = '\x01';
          }
          plVar26 = (long *)0x2;
          method_00 = TypeInfo_GradientColorKey;
          colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
          if (pCVar18 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
label_040ba1e8:
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            pUVar13 = (pCVar18->fields).Value;
            method_00 = (_union_13 *)0x0;
            if (pUVar13 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            UVar33 = Utility_Color255__ToColor(pUVar13,(MethodInfo *)0x0);
            _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x0;
            _Stack_30.genericMethod = (void *)0x0;
            pSStack_28 = (System_Object_array *)((ulong)pSStack_28 & 0xffffffff00000000);
            method_00 = &_Stack_38;
            plVar26 = (long *)0x0;
            __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff7c;
            __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff78;
            __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff80;
            __this_00.fields.color.fields.a = in_stack_ffffffffffffff84;
            __this_00.fields.time = in_stack_ffffffffffffff88;
            UnityEngine_GradientColorKey___ctor(__this_00,UVar33,0.0,(MethodInfo *)method_00);
            if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
            uVar12 = _Stack_38._0_4_;
            uVar36 = _Stack_38._4_4_;
            uVar37 = _Stack_30._0_4_;
            fVar38 = _Stack_30._4_4_;
            if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
            colorKeys->m_Items[0].fields.time = pSStack_28._0_4_;
            *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_38;
            *(_union_14 *)&colorKeys->m_Items[0].fields.color.fields.b = (void *)_Stack_30;
            if (pIVar19 == (Il2CppObject *)0x0) goto label_040ba1e8;
            method_00 = (_union_13 *)0x0;
            if (pIVar19[3].klass == (Il2CppClass *)0x0) goto label_040ba1e8;
            fVar39 = pSStack_28._0_4_;
            UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar19[3].klass,(MethodInfo *)0x0);
            method_00 = (_union_13 *)&stack0xffffffffffffffa8;
            time = 1.0;
            plVar26 = (long *)0x0;
            __this_01.fields.color.fields.g = (float)uVar36;
            __this_01.fields.color.fields.r = (float)uVar12;
            __this_01.fields.color.fields.b = (float)uVar37;
            __this_01.fields.color.fields.a = fVar38;
            __this_01.fields.time = fVar39;
            UnityEngine_GradientColorKey___ctor(__this_01,UVar33,1.0,(MethodInfo *)method_00);
            if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
            colorKeys->m_Items[1].fields.time = 0.0;
            colorKeys->m_Items[1].fields.color.fields.r = 0.0;
            colorKeys->m_Items[1].fields.color.fields.g = 0.0;
            colorKeys->m_Items[1].fields.color.fields.b = 0.0;
            colorKeys->m_Items[1].fields.color.fields.a = 0.0;
            plVar26 = (long *)0x2;
            alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
            pUVar13 = (pCVar18->fields).Value;
            method_00 = (_union_13 *)0x0;
            if (pUVar13 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            plVar26 = (long *)0x0;
            UVar33 = Utility_Color255__ToColor(pUVar13,(MethodInfo *)0x0);
            pUVar13 = (pCVar18->fields).Value;
            method_00 = (_union_13 *)0x0;
            if (pUVar13 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
            UStack_68.fields.time = UVar33.fields.a;
            UStack_68.fields.alpha = UVar33.fields.a;
            UVar33 = Utility_Color255__ToColor(pUVar13,(MethodInfo *)0x0);
            uVar12 = 0.0;
            uVar36 = 0.0;
            plVar26 = (long *)0x0;
            UnityEngine_GradientAlphaKey___ctor
                      (UStack_68,UVar33.fields.a,time,(MethodInfo *)&stack0xffffffffffffff78);
            method_00 = p_Var27;
            if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
            if ((int)alphakeys->max_length != 0) {
              UVar10.time = (float)uVar36;
              UVar10.alpha = (float)uVar12;
              alphakeys->m_Items[0].fields = UVar10;
              method_00 = (_union_13 *)0x0;
              if (pIVar19[3].klass != (Il2CppClass *)0x0) {
                plVar26 = (long *)0x0;
                UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar19[3].klass,(MethodInfo *)0x0);
                method_00 = (_union_13 *)0x0;
                if (pIVar19[3].klass != (Il2CppClass *)0x0) {
                  UStack_68.fields.time = UVar33.fields.a;
                  UStack_68.fields.alpha = UVar33.fields.a;
                  UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar19[3].klass,(MethodInfo *)0x0)
                  ;
                  method_00 = (_union_13 *)&stack0xffffffffffffff90;
                  plVar26 = (long *)0x0;
                  UnityEngine_GradientAlphaKey___ctor(UStack_68,UVar33.fields.a,time,(MethodInfo *)method_00);
                  if (1 < (uint)alphakeys->max_length) {
                    alphakeys->m_Items[1].fields.alpha = 0.0;
                    alphakeys->m_Items[1].fields.time = 0.0;
                    pUVar13 = Utility_Color255__Gradient(colorKeys,alphakeys,0,t,(MethodInfo *)0x0);
                    auVar34 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
                    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar34._0_8_,pUVar13,auVar34._8_8_);
                    return (Il2CppObject *)auVar34._0_8_;
                  }
                  goto label_040ba1ed;
                }
              }
              goto label_040ba1e8;
            }
          }
label_040ba1ed:
          il2cpp_runtime_helper_022b2ca0();
          pIVar28 = method_00[6].rgctx_data;
          if (pIVar28 != (Il2CppRGCTXData *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = *(code **)&pIVar28->type[0x15].bits;
            pIVar19 = (Il2CppObject *)
                      (*UNRECOVERED_JUMPTABLE_00)
                                (pIVar28,pIVar28->type[0x16].data,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
            return pIVar19;
          }
          il2cpp_runtime_helper_022b2c90();
          pIVar29 = pIVar28;
          if (g_data_057ac512 == '\0') {
            pIVar29 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
            il2cpp_runtime_helper_023445d0();
            g_data_057ac512 = '\x01';
          }
          if (plVar26 == (long *)0x0) {
            return (Il2CppObject *)0x0;
          }
          bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
          if (*(byte *)(*plVar26 + 0x130) < bVar1) {
            return (Il2CppObject *)0x0;
          }
          if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
            return (Il2CppObject *)0x0;
          }
          pIVar6 = pIVar28[6].type;
          if ((pIVar6 != (Il2CppType *)0x0) && (lVar15 = plVar26[6], lVar15 != 0)) {
            if (*(int *)&pIVar6[1].data != *(int *)(lVar15 + 0x10)) {
              return (Il2CppObject *)0x0;
            }
            if (*(int *)((long)&pIVar6[1].data + 4) != *(int *)(lVar15 + 0x14)) {
              return (Il2CppObject *)0x0;
            }
            if (pIVar6[1].bits != *(uint *)(lVar15 + 0x18)) {
              return (Il2CppObject *)0x0;
            }
            return (Il2CppObject *)
                   (ulong)CONCAT31((int3)((uint)*(int *)&pIVar6[1].field_0xc >> 8),
                                   *(int *)&pIVar6[1].field_0xc == *(int *)(lVar15 + 0x1c));
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac513 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_object);
            il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
            g_data_057ac513 = '\x01';
          }
          pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if ((pIVar29[6].rgctxDataDummy == (Il2CppType *)0x0) ||
             (pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8),
             pSVar14 == (System_Object_array *)0x0)) {
label_040ba4c8:
            il2cpp_runtime_helper_022b2c90();
          }
          else {
            if ((pIVar19 != (Il2CppObject *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pIVar19), lVar15 == 0))
            goto label_040ba4d2;
            if ((int)pSVar14->max_length != 0) {
              pSVar14->m_Items[0] = pIVar19;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
              if (pIVar29[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
              pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
              if ((pIVar19 != (Il2CppObject *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pIVar19), lVar15 == 0))
              goto label_040ba4d2;
              if (1 < (uint)pSVar14->max_length) {
                pSVar14->m_Items[1] = pIVar19;
                il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1);
                if (pIVar29[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
                pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                if ((pIVar19 != (Il2CppObject *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pIVar19), lVar15 == 0))
                goto label_040ba4d2;
                if (2 < (uint)pSVar14->max_length) {
                  pSVar14->m_Items[2] = pIVar19;
                  il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2);
                  if (pIVar29[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
                  pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                  if ((pIVar19 != (Il2CppObject *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pIVar19), lVar15 == 0))
                  goto label_040ba4d2;
                  if (3 < (uint)pSVar14->max_length) {
                    pSVar14->m_Items[3] = pIVar19;
                    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 3,pIVar19);
                    pSVar16 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",pSVar14,(MethodInfo *)0x0);
                    return (Il2CppObject *)pSVar16;
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
          lVar15 = il2cpp_runtime_helper_0231b270();
          plVar26 = (long *)0x0;
          il2cpp_runtime_helper_022b2b10();
          if (g_data_057ac514 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            g_data_057ac514 = '\x01';
          }
          lVar15 = *(long *)(lVar15 + 0x30);
          if (lVar15 != 0) {
            iVar25 = *(int32_t *)(lVar15 + 0x10);
            iVar2 = *(int32_t *)(lVar15 + 0x14);
            iVar3 = *(int32_t *)(lVar15 + 0x18);
            iVar4 = *(int32_t *)(lVar15 + 0x1c);
            pUVar13 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor(pUVar13,iVar25,iVar2,iVar3,iVar4,(MethodInfo *)0x0);
            auVar34 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar34._0_8_,pUVar13,auVar34._8_8_);
            return (Il2CppObject *)auVar34._0_8_;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac515 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
            g_data_057ac515 = '\x01';
          }
          if (plVar26 != (long *)0x0) {
            bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
            if (bVar1 <= *(byte *)(*plVar26 + 0x130)) {
              if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
                plVar26 = (long *)0x0;
              }
              if ((((extraout_RDX_00 != (long *)0x0) && (plVar26 != (long *)0x0)) &&
                  (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
                 (*(Il2CppClass **)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin
                 )) {
                return (Il2CppObject *)
                       CONCAT71((int7)((ulong)plVar26[6] >> 8),plVar26[6] == extraout_RDX_00[6]);
              }
            }
          }
          return (Il2CppObject *)0x0;
        }
      }
    }
    pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)0x40bd1ab;
    il2cpp_runtime_helper_022b2ca0();
  }
  pCStack_20 = (CustomLogic_CustomLogicColorBuiltin_o *)
               CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  lVar15 = auVar34._8_8_;
  _Stack_30 = auVar34._0_8_;
  pSStack_28 = __a;
  pCStack_20 = unaff_R14;
  if (lVar15 != 0) {
    if ((*(int *)(lVar15 + 0x18) == 0) || (*(int *)(lVar15 + 0x18) == 1)) {
      _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x40bd289;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      plVar26 = *(long **)(lVar15 + 0x20);
      plVar8 = *(long **)(lVar15 + 0x28);
      if (g_data_057ac515 == '\0') {
        _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x40bd1f7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
        g_data_057ac515 = '\x01';
      }
      if (plVar26 != (long *)0x0) {
        bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
        if (bVar1 <= *(byte *)(*plVar26 + 0x130)) {
          plVar20 = (long *)0x0;
          if (*(Il2CppClass **)(*(long *)(*plVar26 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
            plVar26 = plVar20;
          }
          if ((plVar8 == (long *)0x0) || (plVar26 == (long *)0x0)) goto label_040bd221;
          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
            plVar20 = (long *)(ulong)(plVar26[6] == plVar8[6]);
            goto label_040bd221;
          }
        }
      }
      plVar20 = (long *)0x0;
label_040bd221:
      _Stack_30._7_1_ = (char)plVar20;
      _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x40bd23a;
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&_Stack_30 + 7);
      return pIVar19;
    }
  }
  _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x40bd28e;
  _Stack_38.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    ppIVar9 = ((MethodInfo_24EEB40 *)__c)->parameters;
    __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0;
    if (ppIVar9 != (Il2CppType **)0x0) {
      uVar12 = (**(code **)&(*ppIVar9)[0x15].bits)(ppIVar9,(*ppIVar9)[0x16].data);
      _Stack_38._4_4_ = uVar12;
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&_Stack_38 + 4);
      return pIVar19;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    pMVar30 = (MethodInfo_24EEB40 *)__c;
    pSStack_60 = __a;
    if (g_data_057ac516 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      pMVar30 = (MethodInfo_24EEB40 *)&TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac516 = '\x01';
    }
    ppIVar9 = ((MethodInfo_24EEB40 *)__c)->parameters;
    if (ppIVar9 != (Il2CppType **)0x0) {
      iVar25 = *(int32_t *)(ppIVar9 + 2);
      iVar2 = *(int32_t *)((long)ppIVar9 + 0x14);
      iVar3 = *(int32_t *)(ppIVar9 + 3);
      iVar4 = *(int32_t *)((long)ppIVar9 + 0x1c);
      pUVar13 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar13,iVar25,iVar2,iVar3,iVar4,(MethodInfo *)0x0);
      auVar34 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar34._0_8_,pUVar13,auVar34._8_8_);
      return (Il2CppObject *)auVar34._0_8_;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar19 = (Il2CppObject *)(**(code **)(pMVar30->methodPointer + 0x168))();
    return pIVar19;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(((MethodInfo_24EEB40 *)__c)->methodPointer + 0x168);
    pIVar19 = (Il2CppObject *)
              (*UNRECOVERED_JUMPTABLE_00)
                        (__c,*(undefined8 *)(((MethodInfo_24EEB40 *)__c)->methodPointer + 0x170),
                         extraout_RDX_01,UNRECOVERED_JUMPTABLE_00);
    return pIVar19;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_02 != 0) {
    if ((*(int *)(extraout_RDX_02 + 0x18) == 0) || (*(int *)(extraout_RDX_02 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
      pIVar19 = CustomLogic_CustomLogicColorBuiltin____Add__
                          ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                           *(Il2CppObject **)(extraout_RDX_02 + 0x20),
                           *(Il2CppObject **)(extraout_RDX_02 + 0x28),method);
      return pIVar19;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar22 = &stack0xffffffffffffffa8;
  if (extraout_RDX_03 == 0) {
label_040bd37a:
    pSStack_60 = (System_Object_array *)0x40bd37f;
    auVar34 = il2cpp_runtime_helper_022b2c90();
    lVar15 = auVar34._8_8_;
    pSStack_60 = auVar34._0_8_;
    ppSVar23 = &pSStack_60;
    if (lVar15 != 0) {
      if ((*(int *)(lVar15 + 0x18) == 0) || (*(int *)(lVar15 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((MethodInfo_24EEB40 *)__c != (MethodInfo_24EEB40 *)0x0) {
        pSVar14 = *(System_Object_array **)(lVar15 + 0x20);
        auVar34._8_8_ = *(undefined8 *)(lVar15 + 0x28);
        auVar34._0_8_ = pSStack_60;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar34 = il2cpp_runtime_helper_022b2c90();
    lVar15 = auVar34._8_8_;
    if (lVar15 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
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
      __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value = (Utility_Color255_o *)__this_03;
      pIVar19 = (Il2CppObject *)
                il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value,
                                   __this_03);
      return pIVar19;
    }
    if ((*(int *)(lVar15 + 0x18) == 0) || (*(int *)(lVar15 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040bd3da;
    lhs = *(System_Object_array **)(lVar15 + 0x20);
    auVar35._8_8_ = *(undefined8 *)(lVar15 + 0x28);
    auVar35._0_8_ = auVar34._0_8_;
  }
  else {
    if ((*(int *)(extraout_RDX_03 + 0x18) == 0) || (*(int *)(extraout_RDX_03 + 0x18) == 1)) {
      pSStack_60 = (System_Object_array *)0x40bd37a;
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if ((MethodInfo_24EEB40 *)__c == (MethodInfo_24EEB40 *)0x0) goto label_040bd37a;
    __a = *(System_Object_array **)(extraout_RDX_03 + 0x20);
    unaff_R14 = *(CustomLogic_CustomLogicColorBuiltin_o **)(extraout_RDX_03 + 0x28);
    puVar22 = &stack0xffffffffffffff78;
    pSVar14 = __a;
    pSStack_60 = unaff_R15;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (__a == (System_Object_array *)0x0) {
label_040baa5d:
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      __a = (System_Object_array *)
            CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar16,&__a->obj,(Il2CppObject *)unaff_R14,(MethodInfo *)0x0);
      pSVar14 = (System_Object_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(__a);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      pIVar7 = (__a->obj).klass;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((pIVar7->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) ||
          ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((((Il2CppClass *)unaff_R14->klass)->_2).naturalAligment < bVar1 ||
          ((((Il2CppClass *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin))))
      goto label_040baa5d;
      pSVar16 = (System_String_o *)__a->m_Items[2];
      if ((pSVar16 != (System_String_o *)0x0) &&
         (pUVar13 = (unaff_R14->fields).Value, pUVar13 != (Utility_Color255_o *)0x0)) {
        iVar31 = (pSVar16->fields)._stringLength - (pUVar13->fields).R;
        if (0xff < iVar31) {
          iVar31 = 0xff;
        }
        iVar25 = 0;
        if (iVar31 < 0) {
          iVar31 = iVar25;
        }
        iVar32 = *(int *)&(pSVar16->fields)._firstChar - (pUVar13->fields).G;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        if (iVar32 < 0) {
          iVar32 = iVar25;
        }
        iVar21 = *(int *)&pSVar16[1].klass - (pUVar13->fields).B;
        if (0xff < iVar21) {
          iVar21 = 0xff;
        }
        if (iVar21 < 0) {
          iVar21 = iVar25;
        }
        iVar24 = *(int *)((long)&pSVar16[1].klass + 4) - (pUVar13->fields).A;
        if (0xff < iVar24) {
          iVar24 = 0xff;
        }
        if (iVar24 < 0) {
          iVar24 = 0;
        }
        pUVar13 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar13,iVar31,iVar32,iVar21,iVar24,(MethodInfo *)0x0);
        auVar34 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar34._0_8_,pUVar13,auVar34._8_8_);
        return (Il2CppObject *)auVar34._0_8_;
      }
    }
    auVar34 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pCVar18 = auVar34._8_8_;
    *(undefined8 *)(puVar22 + -8) = unaff_RBP;
    *(System_Object_array **)(puVar22 + -0x10) = unaff_R15;
    *(CustomLogic_CustomLogicColorBuiltin_o **)(puVar22 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar22 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar22 + -0x28) = unaff_R12;
    *(System_Object_array **)(puVar22 + -0x30) = __a;
    ppSVar23 = (System_Object_array **)(puVar22 + -0x38);
    *(long *)(puVar22 + -0x38) = auVar34._0_8_;
    lhs = pSVar14;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)(puVar22 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)(puVar22 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (pSVar14 == (System_Object_array *)0x0) {
label_040bac11:
      *(undefined8 *)(puVar22 + -0x40) = 0x40bac1d;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)(puVar22 + -0x40) = 0x40bac2d;
      pSVar14 = (System_Object_array *)
                CustomLogic_CustomLogicUtils__OperatorException
                          (pSVar16,&pSVar14->obj,(Il2CppObject *)pCVar18,(MethodInfo *)0x0);
      *(undefined8 *)(puVar22 + -0x40) = 0x40bac3c;
      lhs = (System_Object_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)(puVar22 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(pSVar14);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      pIVar7 = (pSVar14->obj).klass;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((pIVar7->_2).naturalAligment < bVar1) ||
           (pCVar18 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) ||
          ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((((Il2CppClass *)pCVar18->klass)->_2).naturalAligment < bVar1 ||
          ((((Il2CppClass *)pCVar18->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin))))
      goto label_040bac11;
      pSVar16 = (System_String_o *)pSVar14->m_Items[2];
      if ((pSVar16 != (System_String_o *)0x0) &&
         (pUVar13 = (pCVar18->fields).Value, pUVar13 != (Utility_Color255_o *)0x0)) {
        iVar31 = (pUVar13->fields).R * (pSVar16->fields)._stringLength;
        if (0xff < iVar31) {
          iVar31 = 0xff;
        }
        iVar25 = 0;
        if (iVar31 < 0) {
          iVar31 = iVar25;
        }
        iVar32 = (pUVar13->fields).G * *(int *)&(pSVar16->fields)._firstChar;
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        if (iVar32 < 0) {
          iVar32 = iVar25;
        }
        iVar21 = (pUVar13->fields).B * *(int *)&pSVar16[1].klass;
        if (0xff < iVar21) {
          iVar21 = 0xff;
        }
        if (iVar21 < 0) {
          iVar21 = iVar25;
        }
        iVar24 = (pUVar13->fields).A * *(int *)((long)&pSVar16[1].klass + 4);
        if (0xff < iVar24) {
          iVar24 = 0xff;
        }
        if (iVar24 < 0) {
          iVar24 = 0;
        }
        *(undefined8 *)(puVar22 + -0x40) = 0x40babcf;
        pUVar13 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)(puVar22 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar13,iVar31,iVar32,iVar21,iVar24,(MethodInfo *)0x0);
        *(undefined8 *)(puVar22 + -0x40) = 0x40babf1;
        auVar34 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar22 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar34._0_8_,pUVar13,auVar34._8_8_);
        return (Il2CppObject *)auVar34._0_8_;
      }
    }
    *(undefined8 *)(puVar22 + -0x40) = 0x40bac4c;
    auVar35 = il2cpp_runtime_helper_022b2c90();
    __a = pSVar14;
    unaff_R14 = pCVar18;
  }
  pIVar19 = auVar35._8_8_;
  *(undefined8 *)((long)ppSVar23 + -8) = unaff_RBP;
  *(System_Object_array **)((long)ppSVar23 + -0x10) = unaff_R15;
  *(CustomLogic_CustomLogicColorBuiltin_o **)((long)ppSVar23 + -0x18) = unaff_R14;
  *(undefined8 **)((long)ppSVar23 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppSVar23 + -0x28) = unaff_R12;
  *(System_Object_array **)((long)ppSVar23 + -0x30) = __a;
  *(long *)((long)ppSVar23 + -0x38) = auVar35._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs != (System_Object_array *)0x0) {
    pIVar7 = (lhs->obj).klass;
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (pIVar7->_2).naturalAligment) && (pIVar19 != (Il2CppObject *)0x0)) &&
        ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar19->klass->_2).naturalAligment &&
        ((pIVar19->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar16 = (System_String_o *)lhs->m_Items[2];
      if ((pSVar16 != (System_String_o *)0x0) && (pIVar7 = pIVar19[3].klass, pIVar7 != (Il2CppClass *)0x0)) {
        iVar31 = (pSVar16->fields)._stringLength / *(int *)&(pIVar7->_1).name;
        if (0xff < iVar31) {
          iVar31 = 0xff;
        }
        iVar25 = 0;
        if (iVar31 < 0) {
          iVar31 = iVar25;
        }
        iVar32 = *(int *)&(pSVar16->fields)._firstChar / *(int *)((long)&(pIVar7->_1).name + 4);
        if (0xff < iVar32) {
          iVar32 = 0xff;
        }
        if (iVar32 < 0) {
          iVar32 = iVar25;
        }
        iVar21 = *(int *)&pSVar16[1].klass / *(int *)&(pIVar7->_1).namespaze;
        if (0xff < iVar21) {
          iVar21 = 0xff;
        }
        if (iVar21 < 0) {
          iVar21 = iVar25;
        }
        iVar24 = *(int *)((long)&pSVar16[1].klass + 4);
        iVar5 = *(int *)((long)&(pIVar7->_1).namespaze + 4);
        iVar11 = iVar24 / iVar5;
        a = 0xff;
        if (iVar11 < 0x100) {
          a = iVar11;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40bad82;
        pUVar13 = (Utility_Color255_o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar16,(long)iVar24 % (long)iVar5 & 0xffffffff);
        *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar13,iVar31,iVar32,iVar21,a,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40bada4;
        auVar34 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar34._0_8_,pUVar13,auVar34._8_8_);
        return (Il2CppObject *)auVar34._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40badd0;
  pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40bade0;
  lhs = (System_Object_array *)
        CustomLogic_CustomLogicUtils__OperatorException(pSVar16,&lhs->obj,pIVar19,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs);
label_040badfa:
  *(undefined8 *)((long)ppSVar23 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Object_array **)((long)ppSVar23 + -0x40) = lhs;
  *(undefined8 *)((long)ppSVar23 + -0x48) = 0x40bae0d;
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)((long)ppSVar23 + -0x48) = 0x40bae15;
  __this_02 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar17);
  *(undefined8 *)((long)ppSVar23 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppSVar23 + -0x48) = 0x40bae2e;
  uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)((long)ppSVar23 + -0x48) = 0x40bae39;
  uVar17 = il2cpp_runtime_helper_022b2b10(__this_02,uVar17);
  *(undefined8 *)((long)ppSVar23 + -0x48) = uVar17;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)((long)ppSVar23 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd1b0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppMethodPointer vtableDispatch;
  int iVar5;
  undefined4 uVar6;
  Utility_Color255_o *pUVar7;
  System_Exception_o *lhs;
  System_String_o *pSVar8;
  System_Exception_o *lhs_00;
  undefined8 uVar9;
  System_NotImplementedException_o *__this_00;
  undefined8 in_RAX;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  long lVar12;
  int iVar13;
  int a_00;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 unaff_RBP;
  int32_t iVar17;
  Il2CppClass **ppIVar18;
  undefined8 unaff_R12;
  Il2CppClass **unaff_R13;
  int iVar19;
  Il2CppObject *unaff_R14;
  int iVar20;
  undefined8 unaff_R15;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_70;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (__a != (System_Object_array *)0x0) {
    iVar19 = (int)__a->max_length;
    if ((iVar19 == 0) || (iVar19 == 1)) {
      uStack_20 = 0x40bd289;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar10 = __a->m_Items[0];
      pIVar4 = __a->m_Items[1];
      uStack_18 = in_RAX;
      if (g_data_057ac515 == '\0') {
        uStack_20 = 0x40bd1f7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
        g_data_057ac515 = '\x01';
      }
      if (pIVar10 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
        if (bVar1 <= (pIVar10->klass->_2).naturalAligment) {
          pIVar11 = (Il2CppObject *)0x0;
          if ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin) {
            pIVar10 = pIVar11;
          }
          if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar10 == (Il2CppObject *)0x0)) goto label_040bd221;
          if ((bVar1 <= (pIVar4->klass->_2).naturalAligment) &&
             ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
            pIVar11 = (Il2CppObject *)(ulong)(pIVar10[3].klass == pIVar4[3].klass);
            goto label_040bd221;
          }
        }
      }
      pIVar11 = (Il2CppObject *)0x0;
label_040bd221:
      uStack_18 = CONCAT17((char)pIVar11,(undefined7)uStack_18);
      uStack_20 = 0x40bd23a;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_18 + 7);
      return pIVar10;
    }
  }
  uStack_20 = 0x40bd28e;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar7 = (__c->fields).Value, __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0,
     pUVar7 != (Utility_Color255_o *)0x0)) {
    uVar6 = (*(pUVar7->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar7,(pUVar7->klass->vtable)._2_GetHashCode.method);
    uStack_20 = CONCAT44(uVar6,(undefined4)uStack_20);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    ppIVar18 = (Il2CppClass **)__c;
    if (g_data_057ac516 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      ppIVar18 = &TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac516 = '\x01';
    }
    pUVar7 = (__c->fields).Value;
    if (pUVar7 != (Utility_Color255_o *)0x0) {
      iVar17 = (pUVar7->fields).R;
      g = (pUVar7->fields).G;
      b = (pUVar7->fields).B;
      a = (pUVar7->fields).A;
      pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar7,iVar17,g,b,a,(MethodInfo *)0x0);
      auVar21 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar21._0_8_,pUVar7,auVar21._8_8_);
      return (Il2CppObject *)auVar21._0_8_;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar10 = (Il2CppObject *)
              (*(((CustomLogic_CustomLogicColorBuiltin_o *)ppIVar18)->klass->vtable)._3_ToString.methodPtr)();
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    vtableDispatch = (__c->klass->vtable)._3_ToString.methodPtr;
    pIVar10 = (Il2CppObject *)
              (*vtableDispatch)
                        (__c,(__c->klass->vtable)._3_ToString.method,extraout_RDX,vtableDispatch);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_00 != 0) {
    if ((*(int *)(extraout_RDX_00 + 0x18) == 0) || (*(int *)(extraout_RDX_00 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar10 = CustomLogic_CustomLogicColorBuiltin____Add__
                          ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                           *(Il2CppObject **)(extraout_RDX_00 + 0x20),
                           *(Il2CppObject **)(extraout_RDX_00 + 0x28),method);
      return pIVar10;
    }
  }
  auVar21 = il2cpp_runtime_helper_022b2c90();
  lVar12 = auVar21._8_8_;
  puVar14 = (undefined8 *)&stack0xffffffffffffffc0;
  if (lVar12 == 0) {
label_040bd37a:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    lVar12 = auVar21._8_8_;
    puVar15 = &stack0xffffffffffffffb8;
    if (lVar12 != 0) {
      if ((*(int *)(lVar12 + 0x18) == 0) || (*(int *)(lVar12 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        lhs = *(System_Exception_o **)(lVar12 + 0x20);
        auVar22._8_8_ = *(undefined8 *)(lVar12 + 0x28);
        auVar22._0_8_ = auVar21._0_8_;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar21 = il2cpp_runtime_helper_022b2c90();
    lVar12 = auVar21._8_8_;
    if (lVar12 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac535 == '\0') {
        uStack_70 = 0x40bd3fc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        uStack_70 = 0x40bd408;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
        uStack_70 = 0x40bd414;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
        g_data_057ac535 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        uStack_70 = 0x40bd433;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_70 = 0x40bd43d;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      uStack_70 = 0x40bd44c;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      uStack_70 = 0x40bd461;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value = (Utility_Color255_o *)__this_01;
      pIVar10 = (Il2CppObject *)
                il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value,
                                   __this_01);
      return pIVar10;
    }
    if ((*(int *)(lVar12 + 0x18) == 0) || (*(int *)(lVar12 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs_00 = *(System_Exception_o **)(lVar12 + 0x20);
    auVar23._8_8_ = *(undefined8 *)(lVar12 + 0x28);
    auVar23._0_8_ = auVar21._0_8_;
  }
  else {
    if ((*(int *)(lVar12 + 0x18) == 0) || (*(int *)(lVar12 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd37a;
    unaff_RBX = *(System_Exception_o **)(lVar12 + 0x20);
    unaff_R14 = *(Il2CppObject **)(lVar12 + 0x28);
    puVar14 = &uStack_70;
    lhs = unaff_RBX;
    uStack_70 = auVar21._0_8_;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar8,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
      pSVar8 = (unaff_RBX->fields)._helpURL;
      if ((pSVar8 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar19 = (pSVar8->fields)._stringLength - *(int *)&(pIVar3->_1).name;
        if (0xff < iVar19) {
          iVar19 = 0xff;
        }
        iVar17 = 0;
        if (iVar19 < 0) {
          iVar19 = iVar17;
        }
        iVar20 = *(int *)&(pSVar8->fields)._firstChar - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar20) {
          iVar20 = 0xff;
        }
        if (iVar20 < 0) {
          iVar20 = iVar17;
        }
        iVar13 = *(int *)&pSVar8[1].klass - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = iVar17;
        }
        iVar16 = *(int *)((long)&pSVar8[1].klass + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar7,iVar19,iVar20,iVar13,iVar16,(MethodInfo *)0x0);
        auVar21 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar21._0_8_,pUVar7,auVar21._8_8_);
        return (Il2CppObject *)auVar21._0_8_;
      }
    }
    auVar22 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pIVar10 = auVar22._8_8_;
    *(undefined8 *)((long)puVar14 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar14 + -0x10) = unaff_R15;
    *(Il2CppObject **)((long)puVar14 + -0x18) = unaff_R14;
    *(Il2CppClass ***)((long)puVar14 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar14 + -0x28) = unaff_R12;
    *(System_Exception_o **)((long)puVar14 + -0x30) = unaff_RBX;
    puVar15 = (undefined1 *)((long)puVar14 + -0x38);
    *(long *)((long)puVar14 + -0x38) = auVar22._0_8_;
    lhs_00 = lhs;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)((long)puVar14 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)((long)puVar14 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (lhs == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)((long)puVar14 + -0x40) = 0x40bac1d;
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)((long)puVar14 + -0x40) = 0x40bac2d;
      lhs = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar8,(Il2CppObject *)lhs,pIVar10,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar14 + -0x40) = 0x40bac3c;
      lhs_00 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)((long)puVar14 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(lhs);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((lhs->klass->_2).naturalAligment < bVar1) || (pIVar10 == (Il2CppObject *)0x0)) ||
          ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((pIVar10->klass->_2).naturalAligment < bVar1 ||
          ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar8 = (lhs->fields)._helpURL;
      if ((pSVar8 != (System_String_o *)0x0) && (pIVar3 = pIVar10[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar19 = *(int *)&(pIVar3->_1).name * (pSVar8->fields)._stringLength;
        if (0xff < iVar19) {
          iVar19 = 0xff;
        }
        iVar17 = 0;
        if (iVar19 < 0) {
          iVar19 = iVar17;
        }
        iVar20 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar8->fields)._firstChar;
        if (0xff < iVar20) {
          iVar20 = 0xff;
        }
        if (iVar20 < 0) {
          iVar20 = iVar17;
        }
        iVar13 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar8[1].klass;
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = iVar17;
        }
        iVar16 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar8[1].klass + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        *(undefined8 *)((long)puVar14 + -0x40) = 0x40babcf;
        pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)((long)puVar14 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar7,iVar19,iVar20,iVar13,iVar16,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar14 + -0x40) = 0x40babf1;
        auVar21 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)puVar14 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar21._0_8_,pUVar7,auVar21._8_8_);
        return (Il2CppObject *)auVar21._0_8_;
      }
    }
    *(undefined8 *)((long)puVar14 + -0x40) = 0x40bac4c;
    auVar23 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = lhs;
    unaff_R14 = pIVar10;
  }
  pIVar10 = auVar23._8_8_;
  *(undefined8 *)(puVar15 + -8) = unaff_RBP;
  *(undefined8 *)(puVar15 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar15 + -0x18) = unaff_R14;
  *(Il2CppClass ***)(puVar15 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar15 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar15 + -0x30) = unaff_RBX;
  *(long *)(puVar15 + -0x38) = auVar23._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar15 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar15 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (pIVar10 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar10->klass->_2).naturalAligment &&
        ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar8 = (lhs_00->fields)._helpURL;
      if ((pSVar8 != (System_String_o *)0x0) && (pIVar3 = pIVar10[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar19 = (pSVar8->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar19) {
          iVar19 = 0xff;
        }
        iVar17 = 0;
        if (iVar19 < 0) {
          iVar19 = iVar17;
        }
        iVar20 = *(int *)&(pSVar8->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar20) {
          iVar20 = 0xff;
        }
        if (iVar20 < 0) {
          iVar20 = iVar17;
        }
        iVar13 = *(int *)&pSVar8[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = iVar17;
        }
        iVar16 = *(int *)((long)&pSVar8[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar5 = iVar16 / iVar2;
        a_00 = 0xff;
        if (iVar5 < 0x100) {
          a_00 = iVar5;
        }
        if (a_00 < 0) {
          a_00 = 0;
        }
        *(undefined8 *)(puVar15 + -0x40) = 0x40bad82;
        pUVar7 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar8,(long)iVar16 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar15 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar7,iVar19,iVar20,iVar13,a_00,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x40) = 0x40bada4;
        auVar21 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar15 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar21._0_8_,pUVar7,auVar21._8_8_);
        return (Il2CppObject *)auVar21._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar15 + -0x40) = 0x40badd0;
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar15 + -0x40) = 0x40bade0;
  lhs_00 = CustomLogic_CustomLogicUtils__OperatorException
                     (pSVar8,(Il2CppObject *)lhs_00,pIVar10,(MethodInfo *)0x0);
  *(undefined8 *)(puVar15 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar15 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs_00);
label_040badfa:
  *(undefined8 *)(puVar15 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar15 + -0x40) = lhs_00;
  *(undefined8 *)(puVar15 + -0x48) = 0x40bae0d;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar15 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  *(undefined8 *)(puVar15 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar15 + -0x48) = 0x40bae2e;
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar15 + -0x48) = 0x40bae39;
  uVar9 = il2cpp_runtime_helper_022b2b10(__this_00,uVar9);
  *(undefined8 *)(puVar15 + -0x48) = uVar9;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar15 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd290

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtableDispatch;
  int iVar4;
  Utility_Color255_o *pUVar5;
  System_Exception_o *lhs;
  System_String_o *pSVar6;
  System_Exception_o *lhs_00;
  undefined8 uVar7;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  long lVar9;
  int iVar10;
  int a_00;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  int32_t iVar14;
  Il2CppClass **ppIVar15;
  undefined8 unaff_R12;
  Il2CppClass **unaff_R13;
  int iVar16;
  Il2CppObject *unaff_R14;
  int iVar17;
  undefined8 unaff_R15;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_58;
  undefined1 auStack_4 [4];
  
  if ((__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar5 = (__c->fields).Value, __this = (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *)0x0,
     pUVar5 != (Utility_Color255_o *)0x0)) {
    (*(pUVar5->klass->vtable)._2_GetHashCode.methodPtr)(pUVar5,(pUVar5->klass->vtable)._2_GetHashCode.method);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    ppIVar15 = (Il2CppClass **)__c;
    if (g_data_057ac516 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      ppIVar15 = &TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac516 = '\x01';
    }
    pUVar5 = (__c->fields).Value;
    if (pUVar5 != (Utility_Color255_o *)0x0) {
      iVar14 = (pUVar5->fields).R;
      g = (pUVar5->fields).G;
      b = (pUVar5->fields).B;
      a = (pUVar5->fields).A;
      pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar5,iVar14,g,b,a,(MethodInfo *)0x0);
      auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
      return (Il2CppObject *)auVar18._0_8_;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar8 = (Il2CppObject *)
             (*(((CustomLogic_CustomLogicColorBuiltin_o *)ppIVar15)->klass->vtable)._3_ToString.methodPtr)();
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    vtableDispatch = (__c->klass->vtable)._3_ToString.methodPtr;
    pIVar8 = (Il2CppObject *)
             (*vtableDispatch)
                       (__c,(__c->klass->vtable)._3_ToString.method,extraout_RDX,vtableDispatch);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_00 != 0) {
    if ((*(int *)(extraout_RDX_00 + 0x18) == 0) || (*(int *)(extraout_RDX_00 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar8 = CustomLogic_CustomLogicColorBuiltin____Add__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                          *(Il2CppObject **)(extraout_RDX_00 + 0x20),
                          *(Il2CppObject **)(extraout_RDX_00 + 0x28),method);
      return pIVar8;
    }
  }
  auVar18 = il2cpp_runtime_helper_022b2c90();
  lVar9 = auVar18._8_8_;
  puVar11 = (undefined8 *)&stack0xffffffffffffffd8;
  if (lVar9 == 0) {
label_040bd37a:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar18._8_8_;
    puVar12 = &stack0xffffffffffffffd0;
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        lhs = *(System_Exception_o **)(lVar9 + 0x20);
        auVar19._8_8_ = *(undefined8 *)(lVar9 + 0x28);
        auVar19._0_8_ = auVar18._0_8_;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar18 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar18._8_8_;
    if (lVar9 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac535 == '\0') {
        uStack_58 = 0x40bd3fc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        uStack_58 = 0x40bd408;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
        uStack_58 = 0x40bd414;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
        g_data_057ac535 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        uStack_58 = 0x40bd433;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_58 = 0x40bd43d;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      uStack_58 = 0x40bd44c;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      uStack_58 = 0x40bd461;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value = (Utility_Color255_o *)__this_01;
      pIVar8 = (Il2CppObject *)
               il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value,__this_01
                                 );
      return pIVar8;
    }
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs_00 = *(System_Exception_o **)(lVar9 + 0x20);
    auVar20._8_8_ = *(undefined8 *)(lVar9 + 0x28);
    auVar20._0_8_ = auVar18._0_8_;
  }
  else {
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd37a;
    unaff_RBX = *(System_Exception_o **)(lVar9 + 0x20);
    unaff_R14 = *(Il2CppObject **)(lVar9 + 0x28);
    puVar11 = &uStack_58;
    lhs = unaff_RBX;
    uStack_58 = auVar18._0_8_;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar6,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
      pSVar6 = (unaff_RBX->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar16 = (pSVar6->fields)._stringLength - *(int *)&(pIVar3->_1).name;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        iVar14 = 0;
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar17 = *(int *)&(pSVar6->fields)._firstChar - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        if (iVar17 < 0) {
          iVar17 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar5,iVar16,iVar17,iVar10,iVar13,(MethodInfo *)0x0);
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
        return (Il2CppObject *)auVar18._0_8_;
      }
    }
    auVar19 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pIVar8 = auVar19._8_8_;
    *(undefined8 *)((long)puVar11 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
    *(Il2CppObject **)((long)puVar11 + -0x18) = unaff_R14;
    *(Il2CppClass ***)((long)puVar11 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
    *(System_Exception_o **)((long)puVar11 + -0x30) = unaff_RBX;
    puVar12 = (undefined1 *)((long)puVar11 + -0x38);
    *(long *)((long)puVar11 + -0x38) = auVar19._0_8_;
    lhs_00 = lhs;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (lhs == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac1d;
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac2d;
      lhs = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar6,(Il2CppObject *)lhs,pIVar8,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac3c;
      lhs_00 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(lhs);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((lhs->klass->_2).naturalAligment < bVar1) || (pIVar8 == (Il2CppObject *)0x0)) ||
          ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((pIVar8->klass->_2).naturalAligment < bVar1 ||
          ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar6 = (lhs->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar16 = *(int *)&(pIVar3->_1).name * (pSVar6->fields)._stringLength;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        iVar14 = 0;
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar17 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar6->fields)._firstChar;
        if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        if (iVar17 < 0) {
          iVar17 = iVar14;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar6[1].klass;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar6[1].klass + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babcf;
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar5,iVar16,iVar17,iVar10,iVar13,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babf1;
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
        return (Il2CppObject *)auVar18._0_8_;
      }
    }
    *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac4c;
    auVar20 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = lhs;
    unaff_R14 = pIVar8;
  }
  pIVar8 = auVar20._8_8_;
  *(undefined8 *)(puVar12 + -8) = unaff_RBP;
  *(undefined8 *)(puVar12 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar12 + -0x18) = unaff_R14;
  *(Il2CppClass ***)(puVar12 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar12 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar12 + -0x30) = unaff_RBX;
  *(long *)(puVar12 + -0x38) = auVar20._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (pIVar8 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar8->klass->_2).naturalAligment &&
        ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar6 = (lhs_00->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar16 = (pSVar6->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        iVar14 = 0;
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar17 = *(int *)&(pSVar6->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        if (iVar17 < 0) {
          iVar17 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar4 = iVar13 / iVar2;
        a_00 = 0xff;
        if (iVar4 < 0x100) {
          a_00 = iVar4;
        }
        if (a_00 < 0) {
          a_00 = 0;
        }
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad82;
        pUVar5 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar6,(long)iVar13 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar5,iVar16,iVar17,iVar10,a_00,(MethodInfo *)0x0);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bada4;
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar12 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
        return (Il2CppObject *)auVar18._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40badd0;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar12 + -0x40) = 0x40bade0;
  lhs_00 = CustomLogic_CustomLogicUtils__OperatorException
                     (pSVar6,(Il2CppObject *)lhs_00,pIVar8,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs_00);
label_040badfa:
  *(undefined8 *)(puVar12 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar12 + -0x40) = lhs_00;
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae0d;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae2e;
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae39;
  uVar7 = il2cpp_runtime_helper_022b2b10(__this_00,uVar7);
  *(undefined8 *)(puVar12 + -0x48) = uVar7;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd2d0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtableDispatch;
  int iVar4;
  Utility_Color255_o *pUVar5;
  Il2CppObject *pIVar6;
  System_Exception_o *lhs;
  System_String_o *pSVar7;
  System_Exception_o *lhs_00;
  undefined8 uVar8;
  System_NotImplementedException_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  long lVar9;
  int iVar10;
  int a_00;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  int32_t iVar14;
  Il2CppClass **ppIVar15;
  undefined8 unaff_R12;
  Il2CppClass **unaff_R13;
  int iVar16;
  Il2CppObject *unaff_R14;
  int iVar17;
  undefined8 unaff_R15;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_50;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    ppIVar15 = (Il2CppClass **)__c;
    if (g_data_057ac516 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      ppIVar15 = &TypeInfo_CustomLogicColorBuiltin;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac516 = '\x01';
    }
    pUVar5 = (__c->fields).Value;
    if (pUVar5 != (Utility_Color255_o *)0x0) {
      iVar14 = (pUVar5->fields).R;
      g = (pUVar5->fields).G;
      b = (pUVar5->fields).B;
      a = (pUVar5->fields).A;
      pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar5,iVar14,g,b,a,(MethodInfo *)0x0);
      auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
      return (Il2CppObject *)auVar18._0_8_;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar6 = (Il2CppObject *)
             (*(((CustomLogic_CustomLogicColorBuiltin_o *)ppIVar15)->klass->vtable)._3_ToString.methodPtr)();
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    vtableDispatch = (__c->klass->vtable)._3_ToString.methodPtr;
    pIVar6 = (Il2CppObject *)
             (*vtableDispatch)
                       (__c,(__c->klass->vtable)._3_ToString.method,extraout_RDX,vtableDispatch);
    return pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX_00 != 0) {
    if ((*(int *)(extraout_RDX_00 + 0x18) == 0) || (*(int *)(extraout_RDX_00 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar6 = CustomLogic_CustomLogicColorBuiltin____Add__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                          *(Il2CppObject **)(extraout_RDX_00 + 0x20),
                          *(Il2CppObject **)(extraout_RDX_00 + 0x28),method);
      return pIVar6;
    }
  }
  auVar18 = il2cpp_runtime_helper_022b2c90();
  lVar9 = auVar18._8_8_;
  puVar11 = (undefined8 *)&stack0xffffffffffffffe0;
  if (lVar9 == 0) {
label_040bd37a:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar18._8_8_;
    puVar12 = &stack0xffffffffffffffd8;
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        lhs = *(System_Exception_o **)(lVar9 + 0x20);
        auVar19._8_8_ = *(undefined8 *)(lVar9 + 0x28);
        auVar19._0_8_ = auVar18._0_8_;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar18 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar18._8_8_;
    if (lVar9 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac535 == '\0') {
        uStack_50 = 0x40bd3fc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        uStack_50 = 0x40bd408;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
        uStack_50 = 0x40bd414;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
        g_data_057ac535 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        uStack_50 = 0x40bd433;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_50 = 0x40bd43d;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      uStack_50 = 0x40bd44c;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      uStack_50 = 0x40bd461;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value = (Utility_Color255_o *)__this_01;
      pIVar6 = (Il2CppObject *)
               il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value,__this_01
                                 );
      return pIVar6;
    }
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs_00 = *(System_Exception_o **)(lVar9 + 0x20);
    auVar20._8_8_ = *(undefined8 *)(lVar9 + 0x28);
    auVar20._0_8_ = auVar18._0_8_;
  }
  else {
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd37a;
    unaff_RBX = *(System_Exception_o **)(lVar9 + 0x20);
    unaff_R14 = *(Il2CppObject **)(lVar9 + 0x28);
    puVar11 = &uStack_50;
    lhs = unaff_RBX;
    uStack_50 = auVar18._0_8_;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar7,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
      pSVar7 = (unaff_RBX->fields)._helpURL;
      if ((pSVar7 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar16 = (pSVar7->fields)._stringLength - *(int *)&(pIVar3->_1).name;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        iVar14 = 0;
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar17 = *(int *)&(pSVar7->fields)._firstChar - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        if (iVar17 < 0) {
          iVar17 = iVar14;
        }
        iVar10 = *(int *)&pSVar7[1].klass - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar7[1].klass + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar5,iVar16,iVar17,iVar10,iVar13,(MethodInfo *)0x0);
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
        return (Il2CppObject *)auVar18._0_8_;
      }
    }
    auVar19 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pIVar6 = auVar19._8_8_;
    *(undefined8 *)((long)puVar11 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
    *(Il2CppObject **)((long)puVar11 + -0x18) = unaff_R14;
    *(Il2CppClass ***)((long)puVar11 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
    *(System_Exception_o **)((long)puVar11 + -0x30) = unaff_RBX;
    puVar12 = (undefined1 *)((long)puVar11 + -0x38);
    *(long *)((long)puVar11 + -0x38) = auVar19._0_8_;
    lhs_00 = lhs;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (lhs == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac1d;
      pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac2d;
      lhs = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar7,(Il2CppObject *)lhs,pIVar6,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac3c;
      lhs_00 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(lhs);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((lhs->klass->_2).naturalAligment < bVar1) || (pIVar6 == (Il2CppObject *)0x0)) ||
          ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((pIVar6->klass->_2).naturalAligment < bVar1 ||
          ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar7 = (lhs->fields)._helpURL;
      if ((pSVar7 != (System_String_o *)0x0) && (pIVar3 = pIVar6[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar16 = *(int *)&(pIVar3->_1).name * (pSVar7->fields)._stringLength;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        iVar14 = 0;
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar17 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar7->fields)._firstChar;
        if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        if (iVar17 < 0) {
          iVar17 = iVar14;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar7[1].klass;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar7[1].klass + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babcf;
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar5,iVar16,iVar17,iVar10,iVar13,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babf1;
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
        return (Il2CppObject *)auVar18._0_8_;
      }
    }
    *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac4c;
    auVar20 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = lhs;
    unaff_R14 = pIVar6;
  }
  pIVar6 = auVar20._8_8_;
  *(undefined8 *)(puVar12 + -8) = unaff_RBP;
  *(undefined8 *)(puVar12 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar12 + -0x18) = unaff_R14;
  *(Il2CppClass ***)(puVar12 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar12 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar12 + -0x30) = unaff_RBX;
  *(long *)(puVar12 + -0x38) = auVar20._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (pIVar6 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar6->klass->_2).naturalAligment &&
        ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar7 = (lhs_00->fields)._helpURL;
      if ((pSVar7 != (System_String_o *)0x0) && (pIVar3 = pIVar6[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar16 = (pSVar7->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        iVar14 = 0;
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar17 = *(int *)&(pSVar7->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        if (iVar17 < 0) {
          iVar17 = iVar14;
        }
        iVar10 = *(int *)&pSVar7[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar7[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar4 = iVar13 / iVar2;
        a_00 = 0xff;
        if (iVar4 < 0x100) {
          a_00 = iVar4;
        }
        if (a_00 < 0) {
          a_00 = 0;
        }
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad82;
        pUVar5 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar7,(long)iVar13 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar5,iVar16,iVar17,iVar10,a_00,(MethodInfo *)0x0);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bada4;
        auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar12 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar18._0_8_,pUVar5,auVar18._8_8_);
        return (Il2CppObject *)auVar18._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40badd0;
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar12 + -0x40) = 0x40bade0;
  lhs_00 = CustomLogic_CustomLogicUtils__OperatorException
                     (pSVar7,(Il2CppObject *)lhs_00,pIVar6,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs_00);
label_040badfa:
  *(undefined8 *)(puVar12 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar12 + -0x40) = lhs_00;
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae0d;
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae2e;
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae39;
  uVar8 = il2cpp_runtime_helper_022b2b10(__this_00,uVar8);
  *(undefined8 *)(puVar12 + -0x48) = uVar8;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Str__>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd2f0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtableDispatch;
  int iVar4;
  Utility_Color255_o *pUVar5;
  System_Exception_o *lhs;
  System_String_o *pSVar6;
  System_Exception_o *lhs_00;
  undefined8 uVar7;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long extraout_RDX;
  long lVar9;
  int iVar10;
  int a;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  int32_t iVar14;
  undefined8 unaff_R12;
  Il2CppClass **unaff_R13;
  int iVar15;
  Il2CppObject *unaff_R14;
  int iVar16;
  undefined8 unaff_R15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_48;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    vtableDispatch = (__c->klass->vtable)._3_ToString.methodPtr;
    pIVar8 = (Il2CppObject *)
             (*vtableDispatch)(__c,(__c->klass->vtable)._3_ToString.method,__a,vtableDispatch);
    return pIVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (extraout_RDX != 0) {
    if ((*(int *)(extraout_RDX + 0x18) == 0) || (*(int *)(extraout_RDX + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar8 = CustomLogic_CustomLogicColorBuiltin____Add__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,
                          *(Il2CppObject **)(extraout_RDX + 0x20),*(Il2CppObject **)(extraout_RDX + 0x28),
                          method);
      return pIVar8;
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  lVar9 = auVar19._8_8_;
  puVar11 = (undefined8 *)&stack0xffffffffffffffe8;
  if (lVar9 == 0) {
label_040bd37a:
    auVar19 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar19._8_8_;
    puVar12 = &stack0xffffffffffffffe0;
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        lhs = *(System_Exception_o **)(lVar9 + 0x20);
        auVar17._8_8_ = *(undefined8 *)(lVar9 + 0x28);
        auVar17._0_8_ = auVar19._0_8_;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar19 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar19._8_8_;
    if (lVar9 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac535 == '\0') {
        uStack_48 = 0x40bd3fc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        uStack_48 = 0x40bd408;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
        uStack_48 = 0x40bd414;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
        g_data_057ac535 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        uStack_48 = 0x40bd433;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_48 = 0x40bd43d;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      uStack_48 = 0x40bd44c;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      uStack_48 = 0x40bd461;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      (((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value = (Utility_Color255_o *)__this_01;
      pIVar8 = (Il2CppObject *)
               il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicColorBuiltin_o *)__this)->fields).Value,__this_01
                                 );
      return pIVar8;
    }
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs_00 = *(System_Exception_o **)(lVar9 + 0x20);
    auVar18._8_8_ = *(undefined8 *)(lVar9 + 0x28);
    auVar18._0_8_ = auVar19._0_8_;
  }
  else {
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd37a;
    unaff_RBX = *(System_Exception_o **)(lVar9 + 0x20);
    unaff_R14 = *(Il2CppObject **)(lVar9 + 0x28);
    puVar11 = &uStack_48;
    lhs = unaff_RBX;
    uStack_48 = auVar19._0_8_;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar6,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
      pSVar6 = (unaff_RBX->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = (pSVar6->fields)._stringLength - *(int *)&(pIVar3->_1).name;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)&(pSVar6->fields)._firstChar - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,iVar13,(MethodInfo *)0x0);
        auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar19._0_8_,pUVar5,auVar19._8_8_);
        return (Il2CppObject *)auVar19._0_8_;
      }
    }
    auVar17 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pIVar8 = auVar17._8_8_;
    *(undefined8 *)((long)puVar11 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
    *(Il2CppObject **)((long)puVar11 + -0x18) = unaff_R14;
    *(Il2CppClass ***)((long)puVar11 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
    *(System_Exception_o **)((long)puVar11 + -0x30) = unaff_RBX;
    puVar12 = (undefined1 *)((long)puVar11 + -0x38);
    *(long *)((long)puVar11 + -0x38) = auVar17._0_8_;
    lhs_00 = lhs;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (lhs == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac1d;
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac2d;
      lhs = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar6,(Il2CppObject *)lhs,pIVar8,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac3c;
      lhs_00 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(lhs);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((lhs->klass->_2).naturalAligment < bVar1) || (pIVar8 == (Il2CppObject *)0x0)) ||
          ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((pIVar8->klass->_2).naturalAligment < bVar1 ||
          ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar6 = (lhs->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = *(int *)&(pIVar3->_1).name * (pSVar6->fields)._stringLength;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar6->fields)._firstChar;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar6[1].klass;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar6[1].klass + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babcf;
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,iVar13,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babf1;
        auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar19._0_8_,pUVar5,auVar19._8_8_);
        return (Il2CppObject *)auVar19._0_8_;
      }
    }
    *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac4c;
    auVar18 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = lhs;
    unaff_R14 = pIVar8;
  }
  pIVar8 = auVar18._8_8_;
  *(undefined8 *)(puVar12 + -8) = unaff_RBP;
  *(undefined8 *)(puVar12 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar12 + -0x18) = unaff_R14;
  *(Il2CppClass ***)(puVar12 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar12 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar12 + -0x30) = unaff_RBX;
  *(long *)(puVar12 + -0x38) = auVar18._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (pIVar8 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar8->klass->_2).naturalAligment &&
        ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar6 = (lhs_00->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = (pSVar6->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)&(pSVar6->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar4 = iVar13 / iVar2;
        a = 0xff;
        if (iVar4 < 0x100) {
          a = iVar4;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad82;
        pUVar5 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar6,(long)iVar13 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,a,(MethodInfo *)0x0);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bada4;
        auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar12 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar19._0_8_,pUVar5,auVar19._8_8_);
        return (Il2CppObject *)auVar19._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40badd0;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar12 + -0x40) = 0x40bade0;
  lhs_00 = CustomLogic_CustomLogicUtils__OperatorException
                     (pSVar6,(Il2CppObject *)lhs_00,pIVar8,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs_00);
label_040badfa:
  *(undefined8 *)(puVar12 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar12 + -0x40) = lhs_00;
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae0d;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae2e;
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae39;
  uVar7 = il2cpp_runtime_helper_022b2b10(__this_00,uVar7);
  *(undefined8 *)(puVar12 + -0x48) = uVar7;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd320

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  int iVar4;
  Utility_Color255_o *pUVar5;
  System_Exception_o *lhs;
  System_String_o *pSVar6;
  System_Exception_o *lhs_00;
  undefined8 uVar7;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *pIVar8;
  CustomLogic_BuiltinClassInstance_c *__this_01;
  long lVar9;
  int iVar10;
  int a;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  int32_t iVar14;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  int iVar15;
  Il2CppObject *unaff_R14;
  int iVar16;
  undefined8 unaff_R15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_40;
  
  if (__a != (System_Object_array *)0x0) {
    iVar15 = (int)__a->max_length;
    if ((iVar15 == 0) || (iVar15 == 1)) {
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar8 = CustomLogic_CustomLogicColorBuiltin____Add__
                         ((CustomLogic_CustomLogicColorBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar8;
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  lVar9 = auVar19._8_8_;
  puVar11 = (undefined8 *)&stack0xfffffffffffffff0;
  if (lVar9 == 0) {
label_040bd37a:
    auVar19 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar19._8_8_;
    puVar12 = &stack0xffffffffffffffe8;
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        lhs = *(System_Exception_o **)(lVar9 + 0x20);
        auVar17._8_8_ = *(undefined8 *)(lVar9 + 0x28);
        auVar17._0_8_ = auVar19._0_8_;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar19 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar19._8_8_;
    if (lVar9 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac535 == '\0') {
        uStack_40 = 0x40bd3fc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        uStack_40 = 0x40bd408;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
        uStack_40 = 0x40bd414;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
        g_data_057ac535 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        uStack_40 = 0x40bd433;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_40 = 0x40bd43d;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      uStack_40 = 0x40bd44c;
      __this_01 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      uStack_40 = 0x40bd461;
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_01;
      pIVar8 = (Il2CppObject *)
               il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_01);
      return pIVar8;
    }
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs_00 = *(System_Exception_o **)(lVar9 + 0x20);
    auVar18._8_8_ = *(undefined8 *)(lVar9 + 0x28);
    auVar18._0_8_ = auVar19._0_8_;
  }
  else {
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd37a;
    unaff_RBX = *(System_Exception_o **)(lVar9 + 0x20);
    unaff_R14 = *(Il2CppObject **)(lVar9 + 0x28);
    puVar11 = &uStack_40;
    lhs = unaff_RBX;
    uStack_40 = auVar19._0_8_;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar6,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
      pSVar6 = (unaff_RBX->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = (pSVar6->fields)._stringLength - *(int *)&(pIVar3->_1).name;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)&(pSVar6->fields)._firstChar - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,iVar13,(MethodInfo *)0x0);
        auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar19._0_8_,pUVar5,auVar19._8_8_);
        return (Il2CppObject *)auVar19._0_8_;
      }
    }
    auVar17 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pIVar8 = auVar17._8_8_;
    *(undefined8 *)((long)puVar11 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
    *(Il2CppObject **)((long)puVar11 + -0x18) = unaff_R14;
    *(undefined8 **)((long)puVar11 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
    *(System_Exception_o **)((long)puVar11 + -0x30) = unaff_RBX;
    puVar12 = (undefined1 *)((long)puVar11 + -0x38);
    *(long *)((long)puVar11 + -0x38) = auVar17._0_8_;
    lhs_00 = lhs;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (lhs == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac1d;
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac2d;
      lhs = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar6,(Il2CppObject *)lhs,pIVar8,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac3c;
      lhs_00 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(lhs);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((lhs->klass->_2).naturalAligment < bVar1) || (pIVar8 == (Il2CppObject *)0x0)) ||
          ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((pIVar8->klass->_2).naturalAligment < bVar1 ||
          ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar6 = (lhs->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = *(int *)&(pIVar3->_1).name * (pSVar6->fields)._stringLength;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar6->fields)._firstChar;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar6[1].klass;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar6[1].klass + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babcf;
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,iVar13,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babf1;
        auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar19._0_8_,pUVar5,auVar19._8_8_);
        return (Il2CppObject *)auVar19._0_8_;
      }
    }
    *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac4c;
    auVar18 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = lhs;
    unaff_R14 = pIVar8;
  }
  pIVar8 = auVar18._8_8_;
  *(undefined8 *)(puVar12 + -8) = unaff_RBP;
  *(undefined8 *)(puVar12 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar12 + -0x18) = unaff_R14;
  *(undefined8 **)(puVar12 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar12 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar12 + -0x30) = unaff_RBX;
  *(long *)(puVar12 + -0x38) = auVar18._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (pIVar8 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar8->klass->_2).naturalAligment &&
        ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar6 = (lhs_00->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = (pSVar6->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)&(pSVar6->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar4 = iVar13 / iVar2;
        a = 0xff;
        if (iVar4 < 0x100) {
          a = iVar4;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad82;
        pUVar5 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar6,(long)iVar13 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,a,(MethodInfo *)0x0);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bada4;
        auVar19 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar12 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar19._0_8_,pUVar5,auVar19._8_8_);
        return (Il2CppObject *)auVar19._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40badd0;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar12 + -0x40) = 0x40bade0;
  lhs_00 = CustomLogic_CustomLogicUtils__OperatorException
                     (pSVar6,(Il2CppObject *)lhs_00,pIVar8,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs_00);
label_040badfa:
  *(undefined8 *)(puVar12 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar12 + -0x40) = lhs_00;
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae0d;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae2e;
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae39;
  uVar7 = il2cpp_runtime_helper_022b2b10(__this_00,uVar7);
  *(undefined8 *)(puVar12 + -0x48) = uVar7;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd350

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  int iVar4;
  Utility_Color255_o *pUVar5;
  System_Exception_o *lhs;
  System_String_o *pSVar6;
  System_Exception_o *lhs_00;
  undefined8 uVar7;
  System_NotImplementedException_o *__this_00;
  CustomLogic_BuiltinClassInstance_c *__this_01;
  Il2CppObject *pIVar8;
  long lVar9;
  int iVar10;
  int a;
  System_Exception_o *unaff_RBX;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 unaff_RBP;
  int32_t iVar14;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  int iVar15;
  Il2CppObject *unaff_R14;
  int iVar16;
  undefined8 unaff_R15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_38;
  
  puVar11 = (undefined8 *)&stack0xfffffffffffffff8;
  if (__a == (System_Object_array *)0x0) {
label_040bd37a:
    auVar17 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar17._8_8_;
    puVar12 = &stack0xfffffffffffffff0;
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
        lhs = *(System_Exception_o **)(lVar9 + 0x20);
        auVar18._8_8_ = *(undefined8 *)(lVar9 + 0x28);
        auVar18._0_8_ = auVar17._0_8_;
        goto CustomLogic_CustomLogicColorBuiltin____Mul__;
      }
    }
    auVar17 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar17._8_8_;
    if (lVar9 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac535 == '\0') {
        uStack_38 = 0x40bd3fc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
        uStack_38 = 0x40bd408;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Object_System_Object);
        uStack_38 = 0x40bd414;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_object_object);
        g_data_057ac535 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        uStack_38 = 0x40bd433;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_38 = 0x40bd43d;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      uStack_38 = 0x40bd44c;
      __this_01 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      uStack_38 = 0x40bd461;
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_01;
      pIVar8 = (Il2CppObject *)
               il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_01);
      return pIVar8;
    }
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs_00 = *(System_Exception_o **)(lVar9 + 0x20);
    auVar19._8_8_ = *(undefined8 *)(lVar9 + 0x28);
    auVar19._0_8_ = auVar17._0_8_;
  }
  else {
    iVar15 = (int)__a->max_length;
    if ((iVar15 == 0) || (iVar15 == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd37a;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd37a;
    unaff_RBX = (System_Exception_o *)__a->m_Items[0];
    unaff_R14 = __a->m_Items[1];
    puVar11 = &uStack_38;
    lhs = unaff_RBX;
    if (g_data_057ac518 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac518 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040baa5d:
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar6,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
      pSVar6 = (unaff_RBX->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = (pSVar6->fields)._stringLength - *(int *)&(pIVar3->_1).name;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)&(pSVar6->fields)._firstChar - *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass - *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4) - *(int *)((long)&(pIVar3->_1).namespaze + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,iVar13,(MethodInfo *)0x0);
        auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar5,auVar17._8_8_);
        return (Il2CppObject *)auVar17._0_8_;
      }
    }
    auVar18 = il2cpp_runtime_helper_022b2c90();
CustomLogic_CustomLogicColorBuiltin____Mul__:
    pIVar8 = auVar18._8_8_;
    *(undefined8 *)((long)puVar11 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
    *(Il2CppObject **)((long)puVar11 + -0x18) = unaff_R14;
    *(undefined8 **)((long)puVar11 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
    *(System_Exception_o **)((long)puVar11 + -0x30) = unaff_RBX;
    puVar12 = (undefined1 *)((long)puVar11 + -0x38);
    *(long *)((long)puVar11 + -0x38) = auVar18._0_8_;
    lhs_00 = lhs;
    if (g_data_057ac519 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baac6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40baad2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (lhs == (System_Exception_o *)0x0) {
label_040bac11:
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac1d;
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac2d;
      lhs = CustomLogic_CustomLogicUtils__OperatorException
                      (pSVar6,(Il2CppObject *)lhs,pIVar8,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac3c;
      lhs_00 = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac47;
      il2cpp_runtime_helper_022b2b10(lhs);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((lhs->klass->_2).naturalAligment < bVar1) || (pIVar8 == (Il2CppObject *)0x0)) ||
          ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((pIVar8->klass->_2).naturalAligment < bVar1 ||
          ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar6 = (lhs->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = *(int *)&(pIVar3->_1).name * (pSVar6->fields)._stringLength;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar6->fields)._firstChar;
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar6[1].klass;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar6[1].klass + 4);
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babcf;
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babe8;
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,iVar13,(MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babf1;
        auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)((long)puVar11 + -0x40) = 0x40babff;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar5,auVar17._8_8_);
        return (Il2CppObject *)auVar17._0_8_;
      }
    }
    *(undefined8 *)((long)puVar11 + -0x40) = 0x40bac4c;
    auVar19 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = lhs;
    unaff_R14 = pIVar8;
  }
  pIVar8 = auVar19._8_8_;
  *(undefined8 *)(puVar12 + -8) = unaff_RBP;
  *(undefined8 *)(puVar12 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar12 + -0x18) = unaff_R14;
  *(undefined8 **)(puVar12 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar12 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar12 + -0x30) = unaff_RBX;
  *(long *)(puVar12 + -0x38) = auVar19._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar12 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (pIVar8 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar8->klass->_2).naturalAligment &&
        ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar6 = (lhs_00->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar15 = (pSVar6->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        iVar14 = 0;
        if (iVar15 < 0) {
          iVar15 = iVar14;
        }
        iVar16 = *(int *)&(pSVar6->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar16) {
          iVar16 = 0xff;
        }
        if (iVar16 < 0) {
          iVar16 = iVar14;
        }
        iVar10 = *(int *)&pSVar6[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar14;
        }
        iVar13 = *(int *)((long)&pSVar6[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar4 = iVar13 / iVar2;
        a = 0xff;
        if (iVar4 < 0x100) {
          a = iVar4;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad82;
        pUVar5 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar6,(long)iVar13 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar5,iVar15,iVar16,iVar10,a,(MethodInfo *)0x0);
        *(undefined8 *)(puVar12 + -0x40) = 0x40bada4;
        auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar12 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar5,auVar17._8_8_);
        return (Il2CppObject *)auVar17._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar12 + -0x40) = 0x40badd0;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar12 + -0x40) = 0x40bade0;
  lhs_00 = CustomLogic_CustomLogicUtils__OperatorException
                     (pSVar6,(Il2CppObject *)lhs_00,pIVar8,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar12 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs_00);
label_040badfa:
  *(undefined8 *)(puVar12 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar12 + -0x40) = lhs_00;
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae0d;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae2e;
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar12 + -0x48) = 0x40bae39;
  uVar7 = il2cpp_runtime_helper_022b2b10(__this_00,uVar7);
  *(undefined8 *)(puVar12 + -0x48) = uVar7;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar12 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd380

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  int iVar4;
  Utility_Color255_o *pUVar5;
  System_String_o *pSVar6;
  System_Exception_o *lhs;
  undefined8 uVar7;
  System_NotImplementedException_o *__this_00;
  CustomLogic_BuiltinClassInstance_c *__this_01;
  Il2CppObject *pIVar8;
  long lVar9;
  int iVar10;
  int a;
  System_Exception_o *unaff_RBX;
  undefined1 *puVar11;
  int iVar12;
  undefined8 unaff_RBP;
  int32_t iVar13;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  int iVar14;
  Il2CppObject *unaff_R14;
  int iVar15;
  undefined8 unaff_R15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_38 [8];
  
  puVar11 = &stack0xfffffffffffffff8;
  if (__a == (System_Object_array *)0x0) {
label_040bd3aa:
    auVar16 = il2cpp_runtime_helper_022b2c90();
    lVar9 = auVar16._8_8_;
    if (lVar9 == 0) {
label_040bd3da:
      il2cpp_runtime_helper_022b2c90();
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
      __this_01 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,MethodInfo_Dictionary_2_System_Object_System_Object);
      ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_01;
      pIVar8 = (Il2CppObject *)
               il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_01);
      return pIVar8;
    }
    if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3da;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
    lhs = *(System_Exception_o **)(lVar9 + 0x20);
    auVar17._8_8_ = *(undefined8 *)(lVar9 + 0x28);
    auVar17._0_8_ = auVar16._0_8_;
  }
  else {
    iVar14 = (int)__a->max_length;
    if ((iVar14 == 0) || (iVar14 == 1)) {
      il2cpp_runtime_helper_022b2ca0();
      goto label_040bd3aa;
    }
    if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3aa;
    unaff_RBX = (System_Exception_o *)__a->m_Items[0];
    unaff_R14 = __a->m_Items[1];
    puVar11 = auStack_38;
    lhs = unaff_RBX;
    if (g_data_057ac519 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac519 = '\x01';
    }
    if (unaff_RBX == (System_Exception_o *)0x0) {
label_040bac11:
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
      unaff_RBX = CustomLogic_CustomLogicUtils__OperatorException
                            (pSVar6,(Il2CppObject *)unaff_RBX,unaff_R14,(MethodInfo *)0x0);
      lhs = (System_Exception_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
      il2cpp_runtime_helper_022b2b10(unaff_RBX);
    }
    else {
      unaff_R13 = &TypeInfo_CustomLogicColorBuiltin;
      bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
      if (((((((Il2CppClass *)unaff_RBX->klass)->_2).naturalAligment < bVar1) ||
           (unaff_R14 == (Il2CppObject *)0x0)) ||
          ((((Il2CppClass *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
         (((unaff_R14->klass->_2).naturalAligment < bVar1 ||
          ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
      pSVar6 = (unaff_RBX->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = unaff_R14[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar14 = *(int *)&(pIVar3->_1).name * (pSVar6->fields)._stringLength;
        if (0xff < iVar14) {
          iVar14 = 0xff;
        }
        iVar13 = 0;
        if (iVar14 < 0) {
          iVar14 = iVar13;
        }
        iVar15 = *(int *)((long)&(pIVar3->_1).name + 4) * *(int *)&(pSVar6->fields)._firstChar;
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        if (iVar15 < 0) {
          iVar15 = iVar13;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze * *(int *)&pSVar6[1].klass;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar13;
        }
        iVar12 = *(int *)((long)&(pIVar3->_1).namespaze + 4) * *(int *)((long)&pSVar6[1].klass + 4);
        if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar5,iVar14,iVar15,iVar10,iVar12,(MethodInfo *)0x0);
        auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar5,auVar16._8_8_);
        return (Il2CppObject *)auVar16._0_8_;
      }
    }
    auVar17 = il2cpp_runtime_helper_022b2c90();
  }
  pIVar8 = auVar17._8_8_;
  *(undefined8 *)(puVar11 + -8) = unaff_RBP;
  *(undefined8 *)(puVar11 + -0x10) = unaff_R15;
  *(Il2CppObject **)(puVar11 + -0x18) = unaff_R14;
  *(undefined8 **)(puVar11 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar11 + -0x28) = unaff_R12;
  *(System_Exception_o **)(puVar11 + -0x30) = unaff_RBX;
  *(long *)(puVar11 + -0x38) = auVar17._0_8_;
  if (g_data_057ac51a == '\0') {
    *(undefined8 *)(puVar11 + -0x40) = 0x40bac76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    *(undefined8 *)(puVar11 + -0x40) = 0x40bac82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs != (System_Exception_o *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs->klass->_2).naturalAligment) && (pIVar8 != (Il2CppObject *)0x0)) &&
        ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (pIVar8->klass->_2).naturalAligment &&
        ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pSVar6 = (lhs->fields)._helpURL;
      if ((pSVar6 != (System_String_o *)0x0) && (pIVar3 = pIVar8[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
        iVar14 = (pSVar6->fields)._stringLength / *(int *)&(pIVar3->_1).name;
        if (0xff < iVar14) {
          iVar14 = 0xff;
        }
        iVar13 = 0;
        if (iVar14 < 0) {
          iVar14 = iVar13;
        }
        iVar15 = *(int *)&(pSVar6->fields)._firstChar / *(int *)((long)&(pIVar3->_1).name + 4);
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        if (iVar15 < 0) {
          iVar15 = iVar13;
        }
        iVar10 = *(int *)&pSVar6[1].klass / *(int *)&(pIVar3->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar13;
        }
        iVar12 = *(int *)((long)&pSVar6[1].klass + 4);
        iVar2 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar4 = iVar12 / iVar2;
        a = 0xff;
        if (iVar4 < 0x100) {
          a = iVar4;
        }
        if (a < 0) {
          a = 0;
        }
        *(undefined8 *)(puVar11 + -0x40) = 0x40bad82;
        pUVar5 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pSVar6,(long)iVar12 % (long)iVar2 & 0xffffffff);
        *(undefined8 *)(puVar11 + -0x40) = 0x40bad9b;
        Utility_Color255___ctor(pUVar5,iVar14,iVar15,iVar10,a,(MethodInfo *)0x0);
        *(undefined8 *)(puVar11 + -0x40) = 0x40bada4;
        auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        *(undefined8 *)(puVar11 + -0x40) = 0x40badb2;
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar5,auVar16._8_8_);
        return (Il2CppObject *)auVar16._0_8_;
      }
      goto label_040badfa;
    }
  }
  *(undefined8 *)(puVar11 + -0x40) = 0x40badd0;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  *(undefined8 *)(puVar11 + -0x40) = 0x40bade0;
  lhs = CustomLogic_CustomLogicUtils__OperatorException(pSVar6,(Il2CppObject *)lhs,pIVar8,(MethodInfo *)0x0);
  *(undefined8 *)(puVar11 + -0x40) = 0x40badef;
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  *(undefined8 *)(puVar11 + -0x40) = 0x40badfa;
  il2cpp_runtime_helper_022b2b10(lhs);
label_040badfa:
  *(undefined8 *)(puVar11 + -0x40) = 0x40badff;
  il2cpp_runtime_helper_022b2c90();
  *(System_Exception_o **)(puVar11 + -0x40) = lhs;
  *(undefined8 *)(puVar11 + -0x48) = 0x40bae0d;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  *(undefined8 *)(puVar11 + -0x48) = 0x40bae15;
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  *(undefined8 *)(puVar11 + -0x48) = 0x40bae22;
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)(puVar11 + -0x48) = 0x40bae2e;
  uVar7 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  *(undefined8 *)(puVar11 + -0x48) = 0x40bae39;
  uVar7 = il2cpp_runtime_helper_022b2b10(__this_00,uVar7);
  *(undefined8 *)(puVar11 + -0x48) = uVar7;
  if (g_data_057ac51b == '\0') {
    *(undefined8 *)(puVar11 + -0x50) = 0x40bae56;
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40bd3b0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *rhs;
  int iVar6;
  int g;
  int b;
  int iVar7;
  Utility_Color255_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar8;
  undefined8 uVar9;
  System_NotImplementedException_o *__this_01;
  CustomLogic_BuiltinClassInstance_c *__this_02;
  Il2CppObject *pIVar10;
  int a;
  int32_t iVar11;
  undefined1 auVar12 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_040bd3da:
    il2cpp_runtime_helper_022b2c90();
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
    __this_02 = (CustomLogic_BuiltinClassInstance_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_object_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,MethodInfo_Dictionary_2_System_Object_System_Object);
    ((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30))->klass = __this_02;
    pIVar10 = (Il2CppObject *)
              il2cpp_runtime_helper_022b4080((CustomLogic_BuiltinClassInstance_o *)((long)__this + 0x30),__this_02);
    return pIVar10;
  }
  iVar6 = (int)__a->max_length;
  if ((iVar6 == 0) || (iVar6 == 1)) {
    il2cpp_runtime_helper_022b2ca0();
    goto label_040bd3da;
  }
  if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040bd3da;
  pIVar10 = __a->m_Items[0];
  rhs = __a->m_Items[1];
  if (g_data_057ac51a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (pIVar10 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (pIVar10->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
        ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (rhs->klass->_2).naturalAligment &&
        ((rhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar4 = pIVar10[3].klass;
      if ((pIVar4 != (Il2CppClass *)0x0) && (pIVar5 = rhs[3].klass, pIVar5 != (Il2CppClass *)0x0)) {
        iVar6 = *(int *)&(pIVar4->_1).name / *(int *)&(pIVar5->_1).name;
        if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        iVar11 = 0;
        if (iVar6 < 0) {
          iVar6 = iVar11;
        }
        g = *(int *)((long)&(pIVar4->_1).name + 4) / *(int *)((long)&(pIVar5->_1).name + 4);
        if (0xff < g) {
          g = 0xff;
        }
        if (g < 0) {
          g = iVar11;
        }
        b = *(int *)&(pIVar4->_1).namespaze / *(int *)&(pIVar5->_1).namespaze;
        if (0xff < b) {
          b = 0xff;
        }
        if (b < 0) {
          b = iVar11;
        }
        iVar2 = *(int *)((long)&(pIVar4->_1).namespaze + 4);
        iVar3 = *(int *)((long)&(pIVar5->_1).namespaze + 4);
        iVar7 = iVar2 / iVar3;
        a = 0xff;
        if (iVar7 < 0x100) {
          a = iVar7;
        }
        if (a < 0) {
          a = 0;
        }
        __this_00 = (Utility_Color255_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pIVar4,(long)iVar2 % (long)iVar3 & 0xffffffff);
        Utility_Color255___ctor(__this_00,iVar6,g,b,a,(MethodInfo *)0x0);
        auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar12._0_8_,__this_00,auVar12._8_8_);
        return (Il2CppObject *)auVar12._0_8_;
      }
      goto label_040badfa;
    }
  }
  operatorName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar8 = CustomLogic_CustomLogicUtils__OperatorException(operatorName,pIVar10,rhs,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar8);
label_040badfa:
  il2cpp_runtime_helper_022b2c90();
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_01 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_NotImplementedException___ctor(__this_01,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  il2cpp_runtime_helper_022b2b10(__this_01,uVar9);
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40bb150

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ac51d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    il2cpp_runtime_helper_023445d0(&"__Str__");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    il2cpp_runtime_helper_023445d0(&"Gradient");
    il2cpp_runtime_helper_023445d0(&"Lerp");
    il2cpp_runtime_helper_023445d0(&"ToHexString");
    il2cpp_runtime_helper_023445d0(&"__Div__");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    il2cpp_runtime_helper_023445d0(&"__Add__");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ac51d = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x993c73c6) {
    if (uVar3 < 0x2115286d) {
      if (uVar3 == 0xdc1f3cc) {
        bVar4 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac529 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Add___b__13_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac529 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x18c37b41) {
        bVar4 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac52b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Mul___b__15_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac52b = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x2115286c) &&
              (bVar4 = System_String__op_Equality(name,"ToHexString",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac522 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToHexString_b__6_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac522 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0x792a6492) {
      if (uVar3 == 0x549f4d10) {
        bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac527 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__11_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac527 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x792a6491) &&
              (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac526 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__10_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac526 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x91efe6d7) {
      bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac525 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__9_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac525 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x993c73c5) &&
            (bVar4 = System_String__op_Equality(name,"Gradient",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac524 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Gradient_b__8_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac524 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xc40bf6cd) {
    if (uVar3 < 0x9f4a1a21) {
      if (uVar3 == 0x9e956088) {
        bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ac523 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Lerp_b__7_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057ac523 = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
            System_Func_object__object__object____ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x9f4a1a20) &&
              (bVar4 = System_String__op_Equality(name,"__Str__",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac528 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Str___b__12_0);
          il2cpp_runtime_helper_023445d0(&TypeInfo_c);
          g_data_057ac528 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
          System_Func_object__object__object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xc20bf3a6) {
      bVar4 = System_String__op_Equality(name,"G",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac51f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__G_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__G_g____setter_3_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
          g_data_057ac51f = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xc40bf6cc) &&
            (bVar4 = System_String__op_Equality(name,"A",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac521 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__A_g____getter_5_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__A_g____setter_5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
        g_data_057ac521 = '\x01';
      }
      pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
      System_Func_object__object____ctor();
      pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
      System_Action_object__object____ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xd70c14b6) {
    if (uVar3 == 0xc70bfb85) {
      bVar4 = System_String__op_Equality(name,"B",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac520 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__B_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__B_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
          g_data_057ac520 = '\x01';
        }
        pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
        System_Func_object__object____ctor();
        pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
        System_Action_object__object____ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xd70c14b5) &&
            (bVar4 = System_String__op_Equality(name,"R",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R;
    }
  }
  else if (uVar3 == 0xd7cecb55) {
    bVar4 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac52a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Sub___b__14_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac52a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xff76b6dc) &&
          (bVar4 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac52c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Div___b__16_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ac52c = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
      System_Func_object__object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    CustomLogic_CLMethodBinding_object____ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicColorBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)auStack_18;
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ac51e == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb78a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb796;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__R_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb7a2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__R_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb7ae;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb7ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb7c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
    g_data_057ac51e = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb7dc;
  pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb7f5;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb804;
  pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb81d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb82c;
  pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40bb847;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar8;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R (const MethodInfo* method);
// 0x40bb770

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac51e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__R_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__R_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
    g_data_057ac51e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__G
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G (const MethodInfo* method);
// 0x40bb850

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac51f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__G_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__G_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
    g_data_057ac51f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__B
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B (const MethodInfo* method);
// 0x40bb930

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac520 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__B_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__B_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
    g_data_057ac520 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__A
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A (const MethodInfo* method);
// 0x40bba10

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac521 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicColorBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__A_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__A_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object);
    g_data_057ac521 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicColorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__ToHexString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString (const MethodInfo* method);
// 0x40bbaf0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac522 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ToHexString_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac522 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x40bbc40

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac523 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Lerp_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac523 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Gradient
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient (const MethodInfo* method);
// 0x40bbd90

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac524 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Gradient_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac524 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x40bbee0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac525 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Eq___b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac525 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x40bc030

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac526 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Hash___b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac526 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x40bc180

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac527 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Copy___b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac527 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Str__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__ (const MethodInfo* method);
// 0x40bc2d0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac528 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Str___b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac528 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x40bc420

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac529 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Add___b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac529 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x40bc570

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac52a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Sub___b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac52a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x40bc6c0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac52b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Mul___b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac52b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x40bc810

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *__this;
  
  if (g_data_057ac52c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding____Div___b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac52c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicColorBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicColorBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40bc960

void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_IEqualityComparer_T__o *pSVar1;
  int32_t iVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EE950 *pMVar3;
  MethodInfo_24EE950 *obj_00;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  MethodInfo_33E0570 *pMVar5;
  MethodInfo_24EE950 *pMVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  MethodInfo_33E0570 *pMStack_70;
  MethodInfo_24EE950 *pMStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  MethodInfo_33E0570 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  undefined8 uStack_20;
  
  if (g_data_057ac52d == '\0') {
    uStack_20 = 0x40bc97d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40bc989;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40bc995;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40bc9a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40bc9ad;
    il2cpp_runtime_helper_023445d0(&"__Sub__");
    uStack_20 = 0x40bc9b9;
    il2cpp_runtime_helper_023445d0(&"__Copy__");
    uStack_20 = 0x40bc9c5;
    il2cpp_runtime_helper_023445d0(&"__Str__");
    uStack_20 = 0x40bc9d1;
    il2cpp_runtime_helper_023445d0(&"R");
    uStack_20 = 0x40bc9dd;
    il2cpp_runtime_helper_023445d0(&"G");
    uStack_20 = 0x40bc9e9;
    il2cpp_runtime_helper_023445d0(&"__Eq__");
    uStack_20 = 0x40bc9f5;
    il2cpp_runtime_helper_023445d0(&"__Hash__");
    uStack_20 = 0x40bca01;
    il2cpp_runtime_helper_023445d0(&"Gradient");
    uStack_20 = 0x40bca0d;
    il2cpp_runtime_helper_023445d0(&"Lerp");
    uStack_20 = 0x40bca19;
    il2cpp_runtime_helper_023445d0(&"ToHexString");
    uStack_20 = 0x40bca25;
    il2cpp_runtime_helper_023445d0(&"__Div__");
    uStack_20 = 0x40bca31;
    il2cpp_runtime_helper_023445d0(&"B");
    uStack_20 = 0x40bca3d;
    il2cpp_runtime_helper_023445d0(&"__Mul__");
    uStack_20 = 0x40bca49;
    il2cpp_runtime_helper_023445d0(&"__Add__");
    uStack_20 = 0x40bca55;
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ac52d = '\x01';
  }
  uStack_20 = 0x40bca6b;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40bca80;
  obj = MethodInfo_HashSet_1_System_String;
  pSVar4 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40bcaa5;
    System_Collections_Generic_HashSet_object___Add(__this,"R",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcaba;
    System_Collections_Generic_HashSet_object___Add(__this,"G",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcacf;
    System_Collections_Generic_HashSet_object___Add(__this,"B",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcae4;
    System_Collections_Generic_HashSet_object___Add(__this,"A",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcaf9;
    System_Collections_Generic_HashSet_object___Add(__this,"ToHexString",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb0e;
    System_Collections_Generic_HashSet_object___Add(__this,"Lerp",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb23;
    System_Collections_Generic_HashSet_object___Add(__this,"Gradient",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb38;
    System_Collections_Generic_HashSet_object___Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb4d;
    System_Collections_Generic_HashSet_object___Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb62;
    System_Collections_Generic_HashSet_object___Add(__this,"__Copy__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb77;
    System_Collections_Generic_HashSet_object___Add(__this,"__Str__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcb8c;
    System_Collections_Generic_HashSet_object___Add(__this,"__Add__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcba1;
    System_Collections_Generic_HashSet_object___Add(__this,"__Sub__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcbb6;
    System_Collections_Generic_HashSet_object___Add(__this,"__Mul__",MethodInfo_Boolean_Add);
    uStack_20 = 0x40bcbcb;
    System_Collections_Generic_HashSet_object___Add(__this,"__Div__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x40bcbfd;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (pSVar1 = (pSVar4->fields)._comparer, pSVar1 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0)
     ) {
    uStack_20 = CONCAT44(*(undefined4 *)&pSVar1[1].klass,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this;
  if (g_data_057ac52e == '\0') {
    uStack_40 = 0x40bcc5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_40 = 0x40bcc6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40bcc8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40bcc9c;
  pMVar3 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar5 = obj;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (pSVar1 = (pSVar4->fields)._comparer, pSVar1 != (System_Collections_Generic_IEqualityComparer_T__o *)0x0)
     ) {
    *(int32_t *)&pSVar1[1].klass = iVar2;
    return;
  }
  uStack_40 = 0x40bccba;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo_33E0570 *)0x0) && (pMVar5->parameters != (Il2CppType **)0x0)) {
    uStack_40 = CONCAT44(*(undefined4 *)((long)pMVar5->parameters + 0x14),(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_33E0570 *)0x40bcceb;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_33E0570 *)0x40bccf2;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pSStack_50 = pSVar4;
  pMStack_48 = obj;
  if (g_data_057ac52f == '\0') {
    uStack_60 = 0x40bcd1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_60 = 0x40bcd2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40bcd4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40bcd5c;
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar6 = pMVar3;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar3,MethodInfo_Int32_ConvertTo_Int32);
  if ((pMVar5 != (MethodInfo_33E0570 *)0x0) && (pMVar5->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)pMVar5->parameters + 0x14) = iVar2;
    return;
  }
  uStack_60 = 0x40bcd7a;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo_24EE950 *)0x0) && (pMVar6->parameters != (Il2CppType **)0x0)) {
    uStack_60 = CONCAT44(*(undefined4 *)(pMVar6->parameters + 3),(undefined4)uStack_60);
    pMStack_68 = (MethodInfo_24EE950 *)0x40bcdab;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  pMStack_68 = (MethodInfo_24EE950 *)0x40bcdb2;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = pMVar5;
  pMStack_68 = pMVar3;
  if (g_data_057ac530 == '\0') {
    uStack_80 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_80 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_80 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_80 = 0x40bce1c;
  pMVar3 = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if ((pMVar6 != (MethodInfo_24EE950 *)0x0) && (pMVar6->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)(pMVar6->parameters + 3) = iVar2;
    return;
  }
  uStack_80 = 0x40bce3a;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EE950 *)0x0) && (obj_00->parameters != (Il2CppType **)0x0)) {
    uStack_80 = CONCAT44(*(undefined4 *)((long)obj_00->parameters + 0x1c),(undefined4)uStack_80);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_80 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar3,MethodInfo_Int32_ConvertTo_Int32);
  if ((obj_00 != (MethodInfo_24EE950 *)0x0) && (obj_00->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)obj_00->parameters + 0x1c) = iVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x40bcc00

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  MethodInfo_24EE950 *pMVar4;
  MethodInfo_24EE950 *obj;
  MethodInfo *pMVar5;
  MethodInfo_24EE950 *pMVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  MethodInfo *pMStack_58;
  MethodInfo_24EE950 *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicColorBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar3;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac52e == '\0') {
    uStack_28 = 0x40bcc5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_28 = 0x40bcc6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40bcc8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40bcc9c;
  pMVar4 = MethodInfo_Int32_ConvertTo_Int32;
  pMVar5 = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).R = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,iVar2);
  }
  uStack_28 = 0x40bccba;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo *)0x0) && (pMVar5->parameters != (Il2CppType **)0x0)) {
    uStack_28 = CONCAT44(*(undefined4 *)((long)pMVar5->parameters + 0x14),(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40bcceb;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar3;
  }
  pMStack_30 = (MethodInfo *)0x40bccf2;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac52f == '\0') {
    uStack_48 = 0x40bcd1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_48 = 0x40bcd2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40bcd4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40bcd5c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pMVar6 = pMVar4;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar4,MethodInfo_Int32_ConvertTo_Int32);
  if ((pMVar5 != (MethodInfo *)0x0) && (pMVar5->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)pMVar5->parameters + 0x14) = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var_00,iVar2);
  }
  uStack_48 = 0x40bcd7a;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar6 != (MethodInfo_24EE950 *)0x0) && (pMVar6->parameters != (Il2CppType **)0x0)) {
    uStack_48 = CONCAT44(*(undefined4 *)(pMVar6->parameters + 3),(undefined4)uStack_48);
    pMStack_50 = (MethodInfo_24EE950 *)0x40bcdab;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar3;
  }
  pMStack_50 = (MethodInfo_24EE950 *)0x40bcdb2;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pMStack_58 = pMVar5;
  pMStack_50 = pMVar4;
  if (g_data_057ac530 == '\0') {
    uStack_68 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_68 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_68 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_68 = 0x40bce1c;
  pMVar4 = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((pMVar6 != (MethodInfo_24EE950 *)0x0) && (pMVar6->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)(pMVar6->parameters + 3) = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var_01,iVar2);
  }
  uStack_68 = 0x40bce3a;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    uStack_68 = CONCAT44(*(undefined4 *)((long)obj->parameters + 0x1c),(undefined4)uStack_68);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_68 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar4,MethodInfo_Int32_ConvertTo_Int32);
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)obj->parameters + 0x1c) = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var_02,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40bcc40

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  MethodInfo_24EE950 *pMVar4;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE950 *pMVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  Il2CppObject *pIStack_50;
  MethodInfo_24EE950 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicColorBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac52e == '\0') {
    uStack_20 = 0x40bcc5f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20 = 0x40bcc6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40bcc8a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40bcc9c;
  pMVar4 = MethodInfo_Int32_ConvertTo_Int32;
  pIVar3 = __v;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).R = iVar2;
    return;
  }
  uStack_20 = 0x40bccba;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT44(*(undefined4 *)((long)&((pIVar3[3].klass)->_1).name + 4),(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40bcceb;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40bccf2;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac52f == '\0') {
    uStack_40 = 0x40bcd1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_40 = 0x40bcd2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40bcd4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40bcd5c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pMVar5 = pMVar4;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar4,MethodInfo_Int32_ConvertTo_Int32);
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].klass != (Il2CppClass *)0x0)) {
    *(int32_t *)((long)&((pIVar3[3].klass)->_1).name + 4) = iVar2;
    return;
  }
  uStack_40 = 0x40bcd7a;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar5 != (MethodInfo_24EE950 *)0x0) && (pMVar5->parameters != (Il2CppType **)0x0)) {
    uStack_40 = CONCAT44(*(undefined4 *)(pMVar5->parameters + 3),(undefined4)uStack_40);
    pMStack_48 = (MethodInfo_24EE950 *)0x40bcdab;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
    return;
  }
  pMStack_48 = (MethodInfo_24EE950 *)0x40bcdb2;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pIStack_50 = pIVar3;
  pMStack_48 = pMVar4;
  if (g_data_057ac530 == '\0') {
    uStack_60 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_60 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = 0x40bce1c;
  pMVar4 = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((pMVar5 != (MethodInfo_24EE950 *)0x0) && (pMVar5->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)(pMVar5->parameters + 3) = iVar2;
    return;
  }
  uStack_60 = 0x40bce3a;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    uStack_60 = CONCAT44(*(undefined4 *)((long)obj->parameters + 0x1c),(undefined4)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)pMVar4,MethodInfo_Int32_ConvertTo_Int32);
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)obj->parameters + 0x1c) = iVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x40bccc0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE950 *obj_00;
  MethodInfo *pMVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  CustomLogic_CustomLogicColorBuiltin_o *pCStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar3;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac52f == '\0') {
    uStack_28 = 0x40bcd1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_28 = 0x40bcd2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40bcd4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40bcd5c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pMVar4 = method;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).G = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,iVar2);
  }
  uStack_28 = 0x40bcd7a;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar4 != (MethodInfo *)0x0) && (pMVar4->parameters != (Il2CppType **)0x0)) {
    uStack_28 = CONCAT44(*(undefined4 *)(pMVar4->parameters + 3),(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40bcdab;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar3;
  }
  pMStack_30 = (MethodInfo *)0x40bcdb2;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pCStack_38 = __i;
  pMStack_30 = method;
  if (g_data_057ac530 == '\0') {
    uStack_48 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_48 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40bce1c;
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((pMVar4 != (MethodInfo *)0x0) && (pMVar4->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)(pMVar4->parameters + 3) = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var_00,iVar2);
  }
  uStack_48 = 0x40bce3a;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    uStack_48 = CONCAT44(*(undefined4 *)((long)obj->parameters + 0x1c),(undefined4)uStack_48);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)obj->parameters + 0x1c) = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var_01,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40bcd00

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  MethodInfo_24EE950 *obj;
  MethodInfo_24EE950 *obj_00;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicColorBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac52f == '\0') {
    uStack_20 = 0x40bcd1f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20 = 0x40bcd2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac52f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40bcd4a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40bcd5c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  pIVar3 = __v;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).G = iVar2;
    return;
  }
  uStack_20 = 0x40bcd7a;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT44(*(undefined4 *)&((pIVar3[3].klass)->_1).namespaze,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40bcdab;
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40bcdb2;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac530 == '\0') {
    uStack_40 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_40 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40bce1c;
  obj_00 = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].klass != (Il2CppClass *)0x0)) {
    *(int32_t *)&((pIVar3[3].klass)->_1).namespaze = iVar2;
    return;
  }
  uStack_40 = 0x40bce3a;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    uStack_40 = CONCAT44(*(undefined4 *)((long)obj->parameters + 0x1c),(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if ((obj != (MethodInfo_24EE950 *)0x0) && (obj->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)obj->parameters + 0x1c) = iVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x40bcd80

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  MethodInfo_24EE950 *obj;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar3;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac530 == '\0') {
    uStack_28 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_28 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40bce1c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).B = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,iVar2);
  }
  uStack_28 = 0x40bce3a;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method->parameters != (Il2CppType **)0x0)) {
    uStack_28 = CONCAT44(*(undefined4 *)((long)method->parameters + 0x1c),(undefined4)uStack_28);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((method != (MethodInfo *)0x0) && (method->parameters != (Il2CppType **)0x0)) {
    *(int32_t *)((long)method->parameters + 0x1c) = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var_00,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40bcdc0

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *__this;
  MethodInfo_24EE950 *obj;
  undefined8 uStack_20;
  
  if (g_data_057ac530 == '\0') {
    uStack_20 = 0x40bcddf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20 = 0x40bcdeb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac530 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40bce0a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40bce1c;
  obj = MethodInfo_Int32_ConvertTo_Int32;
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).B = iVar2;
    return;
  }
  uStack_20 = 0x40bce3a;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[3].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT44(*(undefined4 *)((long)&((__v[3].klass)->_1).namespaze + 4),(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((__v != (Il2CppObject *)0x0) && (__v[3].klass != (Il2CppClass *)0x0)) {
    *(int32_t *)((long)&((__v[3].klass)->_1).namespaze + 4) = iVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x40bce40

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  undefined4 extraout_var;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     ((__i->fields).Value != (Utility_Color255_o *)0x0)) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).A = iVar2;
    return (Il2CppObject *)CONCAT44(extraout_var,iVar2);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar3;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar3);
  return pIVar3;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40bce80

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  Il2CppObject *__this;
  
  if (g_data_057ac531 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac531 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).A = iVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac532 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac532 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40b9910

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (g_data_057ac50a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac50a = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, System_String_o* hexString, const MethodInfo* method);
// 0x40b99a0

void CustomLogic_CustomLogicColorBuiltin___ctor_3fb99a0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,System_String_o *hexString,MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  bool_conflict bVar2;
  Utility_Color255_o *pUVar3;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (g_data_057ac50b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac50b = '\x01';
  }
  local_58.r = 0.0;
  local_58.g = 0.0;
  local_58.b = 0.0;
  local_58.a = 0.0;
  pUVar3 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(pUVar3,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar3;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hexString,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    local_38.r = local_58.r;
    local_38.g = local_58.g;
    local_38.b = 0.0;
    local_38.a = 0.0;
    local_48 = local_58.b;
    fStack_44 = local_58.a;
    uStack_40 = 0;
    pUVar3 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    color.fields.b = local_48;
    color.fields.a = fStack_44;
    color.fields.r = local_38.r;
    color.fields.g = local_38.g;
    Utility_Color255___ctor_4388bb0(pUVar3,color,(MethodInfo *)0x0);
    *ppUVar1 = pUVar3;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar3);
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, const MethodInfo* method);
// 0x40b9aa0

void CustomLogic_CustomLogicColorBuiltin___ctor_3fb9aa0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,MethodInfo *method
               )

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *pUVar2;
  
  if (g_data_057ac50c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac50c = '\x01';
  }
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(pUVar2,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,r,g,b,0xff,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar2);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x40b9b80

void CustomLogic_CustomLogicColorBuiltin___ctor_3fb9b80
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,int32_t a,
               MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *pUVar2;
  
  if (g_data_057ac50d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac50d = '\x01';
  }
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(pUVar2,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,r,g,b,a,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar2);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x40b9c60

void CustomLogic_CustomLogicColorBuiltin___ctor_3fb9c60
               (CustomLogic_CustomLogicColorBuiltin_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *pUVar2;
  
  if (g_data_057ac50e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac50e = '\x01';
  }
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(pUVar2,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388bb0(pUVar2,color,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar2;
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar2);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x40b9d30

void CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  Utility_Color255_o **ppUVar1;
  Utility_Color255_o *__this_00;
  
  if (g_data_057ac50f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac50f = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = __this_00;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = value;
  il2cpp_runtime_helper_022b4080(ppUVar1,value);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_R
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_R (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40b9de0

int32_t CustomLogic_CustomLogicColorBuiltin__get_R
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  int32_t iVar4;
  System_String_o *pSVar5;
  Utility_Color255_o *pUVar6;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  MethodInfo *pMVar9;
  long *plVar10;
  Utility_Color255_o *pUVar11;
  _union_13 *method_00;
  _union_13 *p_Var12;
  Il2CppRGCTXData *pIVar13;
  Il2CppRGCTXData *pIVar14;
  float fVar15;
  float time;
  UnityEngine_Color_o UVar16;
  undefined1 auVar17 [16];
  undefined4 in_stack_ffffffffffffff18;
  undefined4 uVar18;
  undefined4 in_stack_ffffffffffffff1c;
  undefined4 uVar19;
  undefined4 in_stack_ffffffffffffff20;
  undefined4 uVar20;
  float in_stack_ffffffffffffff24;
  float fVar21;
  float in_stack_ffffffffffffff28;
  float fVar22;
  _union_13 _Stack_d0;
  float fStack_c8;
  float fStack_c4;
  _union_13 _Stack_b8;
  _union_13 _Stack_b0;
  _union_14 a_Stack_a8 [2];
  _union_13 _Stack_98;
  undefined8 uStack_90;
  float fStack_88;
  Utility_Color255_o *pUStack_80;
  
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).R;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).R = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).G;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).G = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).B;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).B = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).A;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).A = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    UVar16 = Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
    pSVar5 = Unity_VisualScripting_XColor__ToHexString(UVar16,(MethodInfo *)0x0);
    return (int32_t)pSVar5;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  pUVar11 = pUVar6;
  if (g_data_057ac510 == '\0') {
    pUVar11 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar6 != (Utility_Color255_o *)0x0) && (method != (MethodInfo *)0x0)) {
    pUVar6 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar6[1].fields,(Utility_Color255_o *)method->parameters,
                        fVar15,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var12 = (_union_13 *)&stack0xffffffffffffff18;
  pUStack_80 = pUVar6;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar10 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar11 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    _Stack_98.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_90 = 0;
    fStack_88 = 0.0;
    method_00 = &_Stack_98;
    plVar10 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff1c;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff18;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff20;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff24;
    __this_00.fields.time = in_stack_ffffffffffffff28;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar16,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar18 = _Stack_98._0_4_;
    uVar19 = _Stack_98._4_4_;
    uVar20 = (undefined4)uStack_90;
    fVar21 = (float)((ulong)uStack_90 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_88;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_98;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_90;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_90._4_4_;
    if (pMVar9 == (MethodInfo *)0x0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if ((Utility_Color255_o *)pMVar9->parameters == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar22 = fStack_88;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
    _Stack_b8.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_b0.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_a8[0]._0_4_ = 0.0;
    method_00 = &_Stack_b8;
    time = 1.0;
    plVar10 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar19;
    __this_01.fields.color.fields.r = (float)uVar18;
    __this_01.fields.color.fields.b = (float)uVar20;
    __this_01.fields.color.fields.a = fVar21;
    __this_01.fields.time = fVar22;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar16,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_a8[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_b8._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_b8._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_b0._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_b0._4_4_;
    plVar10 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar10 = (long *)0x0;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_c8 = UVar16.fields.a;
    fStack_c4 = UVar16.fields.a;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    uVar18 = 0.0;
    uVar19 = 0.0;
    __this_02.fields.time = fStack_c4;
    __this_02.fields.alpha = fStack_c8;
    plVar10 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar16.fields.a,time,(MethodInfo *)&stack0xffffffffffffff18)
    ;
    method_00 = p_Var12;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar19;
      UVar3.alpha = (float)uVar18;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
        plVar10 = (long *)0x0;
        UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
          fStack_c8 = UVar16.fields.a;
          fStack_c4 = UVar16.fields.a;
          UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
          _Stack_d0.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_d0;
          __this_03.fields.time = fStack_c4;
          __this_03.fields.alpha = fStack_c8;
          plVar10 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar16.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_d0;
            pUVar6 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar15,(MethodInfo *)0x0);
            auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
            return auVar17._0_4_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar13 = method_00[6].rgctx_data;
  if (pIVar13 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar13->type[0x15].bits;
    iVar4 = (*vtableDispatch)(pIVar13,pIVar13->type[0x16].data,extraout_RDX,vtableDispatch);
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar13;
  if (g_data_057ac512 == '\0') {
    pIVar14 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (*(byte *)(*plVar10 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return 0;
  }
  if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin)
  {
    return 0;
  }
  pIVar2 = pIVar13[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar8 = plVar10[6], lVar8 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar8 + 0x10)) {
      return 0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar8 + 0x14)) {
      return 0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar8 + 0x18)) {
      return 0;
    }
    return CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                    *(int *)&pIVar2[1].field_0xc == *(int *)(lVar8 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar7);
            pSVar5 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return (int32_t)pSVar5;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar8 = il2cpp_runtime_helper_0231b270();
  plVar10 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 != 0) {
    iVar4 = *(int32_t *)(lVar8 + 0x10);
    g = *(int32_t *)(lVar8 + 0x14);
    b = *(int32_t *)(lVar8 + 0x18);
    a = *(int32_t *)(lVar8 + 0x1c);
    pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar6,iVar4,g,b,a,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar10 + 0x130)) {
      if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar10 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar10 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (int32_t)CONCAT71((int7)((ulong)plVar10[6] >> 8),plVar10[6] == extraout_RDX_00[6]);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$set_R
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_R (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40b9e00

void CustomLogic_CustomLogicColorBuiltin__set_R
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  Utility_Color255_o *pUVar4;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  undefined4 in_register_00000034;
  long lVar7;
  long *plVar8;
  Utility_Color255_o *pUVar9;
  _union_13 *method_00;
  _union_13 *p_Var10;
  Il2CppRGCTXData *pIVar11;
  Il2CppRGCTXData *pIVar12;
  float fVar13;
  float time;
  UnityEngine_Color_o UVar14;
  undefined1 auVar15 [16];
  undefined4 in_stack_ffffffffffffff20;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff24;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff28;
  undefined4 uVar18;
  float in_stack_ffffffffffffff2c;
  float fVar19;
  float in_stack_ffffffffffffff30;
  float fVar20;
  _union_13 _Stack_c8;
  float fStack_c0;
  float fStack_bc;
  _union_13 _Stack_b0;
  _union_13 _Stack_a8;
  _union_14 a_Stack_a0 [2];
  _union_13 _Stack_90;
  undefined8 uStack_88;
  float fStack_80;
  Utility_Color255_o *pUStack_78;
  
  lVar6 = CONCAT44(in_register_00000034,value);
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).R = value;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Utility_Color255_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).G = (int32_t)lVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Utility_Color255_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).B = (int32_t)lVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Utility_Color255_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).A = (int32_t)lVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    UVar14 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    Unity_VisualScripting_XColor__ToHexString(UVar14,(MethodInfo *)0x0);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  lVar7 = lVar6;
  pUVar9 = pUVar4;
  if (g_data_057ac510 == '\0') {
    pUVar9 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar4 != (Utility_Color255_o *)0x0) && (lVar6 != 0)) {
    pUVar4 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar4[1].fields,*(Utility_Color255_o **)(lVar6 + 0x30),
                        fVar13,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var10 = (_union_13 *)&stack0xffffffffffffff20;
  pUStack_78 = pUVar4;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar8 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar9 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    _Stack_90.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_88 = 0;
    fStack_80 = 0.0;
    method_00 = &_Stack_90;
    plVar8 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff24;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff20;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff28;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff2c;
    __this_00.fields.time = in_stack_ffffffffffffff30;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar14,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar16 = _Stack_90._0_4_;
    uVar17 = _Stack_90._4_4_;
    uVar18 = (undefined4)uStack_88;
    fVar19 = (float)((ulong)uStack_88 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_80;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_90;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_88;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_88._4_4_;
    if (lVar7 == 0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)(lVar7 + 0x30) == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar20 = fStack_80;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
    _Stack_b0.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_a8.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_a0[0]._0_4_ = 0.0;
    method_00 = &_Stack_b0;
    time = 1.0;
    plVar8 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar17;
    __this_01.fields.color.fields.r = (float)uVar16;
    __this_01.fields.color.fields.b = (float)uVar18;
    __this_01.fields.color.fields.a = fVar19;
    __this_01.fields.time = fVar20;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar14,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_a0[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_b0._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_b0._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_a8._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_a8._4_4_;
    plVar8 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar8 = (long *)0x0;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_c0 = UVar14.fields.a;
    fStack_bc = UVar14.fields.a;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    uVar16 = 0.0;
    uVar17 = 0.0;
    __this_02.fields.time = fStack_bc;
    __this_02.fields.alpha = fStack_c0;
    plVar8 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar14.fields.a,time,(MethodInfo *)&stack0xffffffffffffff20)
    ;
    method_00 = p_Var10;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar17;
      UVar3.alpha = (float)uVar16;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
        plVar8 = (long *)0x0;
        UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
          fStack_c0 = UVar14.fields.a;
          fStack_bc = UVar14.fields.a;
          UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
          _Stack_c8.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_c8;
          __this_03.fields.time = fStack_bc;
          __this_03.fields.alpha = fStack_c0;
          plVar8 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar14.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_c8;
            pUVar4 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar13,(MethodInfo *)0x0);
            auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
            return;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar11 = method_00[6].rgctx_data;
  if (pIVar11 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar11->type[0x15].bits;
    (*vtableDispatch)(pIVar11,pIVar11->type[0x16].data,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar11;
  if (g_data_057ac512 == '\0') {
    pIVar12 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return;
  }
  pIVar2 = pIVar11[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar6 = plVar8[6], lVar6 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar6 + 0x10)) {
      return;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar6 + 0x14)) {
      return;
    }
    if (pIVar2[1].bits != *(uint *)(lVar6 + 0x18)) {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar5;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar5;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar5);
            System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar6 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar6 = *(long *)(lVar6 + 0x30);
  if (lVar6 != 0) {
    r = *(int32_t *)(lVar6 + 0x10);
    g = *(int32_t *)(lVar6 + 0x14);
    b = *(int32_t *)(lVar6 + 0x18);
    a = *(int32_t *)(lVar6 + 0x1c);
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b,a,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_G
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_G (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40b9e20

int32_t CustomLogic_CustomLogicColorBuiltin__get_G
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  int32_t iVar4;
  System_String_o *pSVar5;
  Utility_Color255_o *pUVar6;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  MethodInfo *pMVar9;
  long *plVar10;
  Utility_Color255_o *pUVar11;
  _union_13 *method_00;
  _union_13 *p_Var12;
  Il2CppRGCTXData *pIVar13;
  Il2CppRGCTXData *pIVar14;
  float fVar15;
  float time;
  UnityEngine_Color_o UVar16;
  undefined1 auVar17 [16];
  undefined4 in_stack_ffffffffffffff28;
  undefined4 uVar18;
  undefined4 in_stack_ffffffffffffff2c;
  undefined4 uVar19;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 uVar20;
  float in_stack_ffffffffffffff34;
  float fVar21;
  float in_stack_ffffffffffffff38;
  float fVar22;
  _union_13 _Stack_c0;
  float fStack_b8;
  float fStack_b4;
  _union_13 _Stack_a8;
  _union_13 _Stack_a0;
  _union_14 a_Stack_98 [2];
  _union_13 _Stack_88;
  undefined8 uStack_80;
  float fStack_78;
  Utility_Color255_o *pUStack_70;
  
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).G;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).G = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).B;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).B = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).A;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).A = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    UVar16 = Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
    pSVar5 = Unity_VisualScripting_XColor__ToHexString(UVar16,(MethodInfo *)0x0);
    return (int32_t)pSVar5;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  pUVar11 = pUVar6;
  if (g_data_057ac510 == '\0') {
    pUVar11 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar6 != (Utility_Color255_o *)0x0) && (method != (MethodInfo *)0x0)) {
    pUVar6 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar6[1].fields,(Utility_Color255_o *)method->parameters,
                        fVar15,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var12 = (_union_13 *)&stack0xffffffffffffff28;
  pUStack_70 = pUVar6;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar10 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar11 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    _Stack_88.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_80 = 0;
    fStack_78 = 0.0;
    method_00 = &_Stack_88;
    plVar10 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff2c;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff28;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff30;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff34;
    __this_00.fields.time = in_stack_ffffffffffffff38;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar16,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar18 = _Stack_88._0_4_;
    uVar19 = _Stack_88._4_4_;
    uVar20 = (undefined4)uStack_80;
    fVar21 = (float)((ulong)uStack_80 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_78;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_88;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_80;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_80._4_4_;
    if (pMVar9 == (MethodInfo *)0x0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if ((Utility_Color255_o *)pMVar9->parameters == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar22 = fStack_78;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
    _Stack_a8.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_a0.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_98[0]._0_4_ = 0.0;
    method_00 = &_Stack_a8;
    time = 1.0;
    plVar10 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar19;
    __this_01.fields.color.fields.r = (float)uVar18;
    __this_01.fields.color.fields.b = (float)uVar20;
    __this_01.fields.color.fields.a = fVar21;
    __this_01.fields.time = fVar22;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar16,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_98[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_a8._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_a8._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_a0._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_a0._4_4_;
    plVar10 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar10 = (long *)0x0;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_b8 = UVar16.fields.a;
    fStack_b4 = UVar16.fields.a;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    uVar18 = 0.0;
    uVar19 = 0.0;
    __this_02.fields.time = fStack_b4;
    __this_02.fields.alpha = fStack_b8;
    plVar10 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar16.fields.a,time,(MethodInfo *)&stack0xffffffffffffff28)
    ;
    method_00 = p_Var12;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar19;
      UVar3.alpha = (float)uVar18;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
        plVar10 = (long *)0x0;
        UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
          fStack_b8 = UVar16.fields.a;
          fStack_b4 = UVar16.fields.a;
          UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
          _Stack_c0.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_c0;
          __this_03.fields.time = fStack_b4;
          __this_03.fields.alpha = fStack_b8;
          plVar10 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar16.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_c0;
            pUVar6 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar15,(MethodInfo *)0x0);
            auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
            return auVar17._0_4_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar13 = method_00[6].rgctx_data;
  if (pIVar13 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar13->type[0x15].bits;
    iVar4 = (*vtableDispatch)(pIVar13,pIVar13->type[0x16].data,extraout_RDX,vtableDispatch);
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar13;
  if (g_data_057ac512 == '\0') {
    pIVar14 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (*(byte *)(*plVar10 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return 0;
  }
  if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin)
  {
    return 0;
  }
  pIVar2 = pIVar13[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar8 = plVar10[6], lVar8 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar8 + 0x10)) {
      return 0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar8 + 0x14)) {
      return 0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar8 + 0x18)) {
      return 0;
    }
    return CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                    *(int *)&pIVar2[1].field_0xc == *(int *)(lVar8 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar7);
            pSVar5 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return (int32_t)pSVar5;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar8 = il2cpp_runtime_helper_0231b270();
  plVar10 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 != 0) {
    iVar4 = *(int32_t *)(lVar8 + 0x10);
    g = *(int32_t *)(lVar8 + 0x14);
    b = *(int32_t *)(lVar8 + 0x18);
    a = *(int32_t *)(lVar8 + 0x1c);
    pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar6,iVar4,g,b,a,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar10 + 0x130)) {
      if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar10 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar10 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (int32_t)CONCAT71((int7)((ulong)plVar10[6] >> 8),plVar10[6] == extraout_RDX_00[6]);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$set_G
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_G (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40b9e40

void CustomLogic_CustomLogicColorBuiltin__set_G
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  Utility_Color255_o *pUVar4;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  undefined4 in_register_00000034;
  long lVar7;
  long *plVar8;
  Utility_Color255_o *pUVar9;
  _union_13 *method_00;
  _union_13 *p_Var10;
  Il2CppRGCTXData *pIVar11;
  Il2CppRGCTXData *pIVar12;
  float fVar13;
  float time;
  UnityEngine_Color_o UVar14;
  undefined1 auVar15 [16];
  undefined4 in_stack_ffffffffffffff30;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 uVar18;
  float in_stack_ffffffffffffff3c;
  float fVar19;
  float in_stack_ffffffffffffff40;
  float fVar20;
  _union_13 _Stack_b8;
  float fStack_b0;
  float fStack_ac;
  _union_13 _Stack_a0;
  _union_13 _Stack_98;
  _union_14 a_Stack_90 [2];
  _union_13 _Stack_80;
  undefined8 uStack_78;
  float fStack_70;
  Utility_Color255_o *pUStack_68;
  
  lVar6 = CONCAT44(in_register_00000034,value);
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).G = value;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Utility_Color255_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).B = (int32_t)lVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Utility_Color255_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).A = (int32_t)lVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    UVar14 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    Unity_VisualScripting_XColor__ToHexString(UVar14,(MethodInfo *)0x0);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  lVar7 = lVar6;
  pUVar9 = pUVar4;
  if (g_data_057ac510 == '\0') {
    pUVar9 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar4 != (Utility_Color255_o *)0x0) && (lVar6 != 0)) {
    pUVar4 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar4[1].fields,*(Utility_Color255_o **)(lVar6 + 0x30),
                        fVar13,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var10 = (_union_13 *)&stack0xffffffffffffff30;
  pUStack_68 = pUVar4;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar8 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar9 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    _Stack_80.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_78 = 0;
    fStack_70 = 0.0;
    method_00 = &_Stack_80;
    plVar8 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff34;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff30;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff38;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff3c;
    __this_00.fields.time = in_stack_ffffffffffffff40;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar14,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar16 = _Stack_80._0_4_;
    uVar17 = _Stack_80._4_4_;
    uVar18 = (undefined4)uStack_78;
    fVar19 = (float)((ulong)uStack_78 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_70;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_80;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_78;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_78._4_4_;
    if (lVar7 == 0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)(lVar7 + 0x30) == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar20 = fStack_70;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
    _Stack_a0.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_98.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_90[0]._0_4_ = 0.0;
    method_00 = &_Stack_a0;
    time = 1.0;
    plVar8 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar17;
    __this_01.fields.color.fields.r = (float)uVar16;
    __this_01.fields.color.fields.b = (float)uVar18;
    __this_01.fields.color.fields.a = fVar19;
    __this_01.fields.time = fVar20;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar14,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_90[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_a0._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_a0._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_98._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_98._4_4_;
    plVar8 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar8 = (long *)0x0;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_b0 = UVar14.fields.a;
    fStack_ac = UVar14.fields.a;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    uVar16 = 0.0;
    uVar17 = 0.0;
    __this_02.fields.time = fStack_ac;
    __this_02.fields.alpha = fStack_b0;
    plVar8 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar14.fields.a,time,(MethodInfo *)&stack0xffffffffffffff30)
    ;
    method_00 = p_Var10;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar17;
      UVar3.alpha = (float)uVar16;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
        plVar8 = (long *)0x0;
        UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
          fStack_b0 = UVar14.fields.a;
          fStack_ac = UVar14.fields.a;
          UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
          _Stack_b8.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_b8;
          __this_03.fields.time = fStack_ac;
          __this_03.fields.alpha = fStack_b0;
          plVar8 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar14.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_b8;
            pUVar4 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar13,(MethodInfo *)0x0);
            auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
            return;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar11 = method_00[6].rgctx_data;
  if (pIVar11 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar11->type[0x15].bits;
    (*vtableDispatch)(pIVar11,pIVar11->type[0x16].data,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar11;
  if (g_data_057ac512 == '\0') {
    pIVar12 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return;
  }
  pIVar2 = pIVar11[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar6 = plVar8[6], lVar6 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar6 + 0x10)) {
      return;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar6 + 0x14)) {
      return;
    }
    if (pIVar2[1].bits != *(uint *)(lVar6 + 0x18)) {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar5;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar5;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar5);
            System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar6 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar6 = *(long *)(lVar6 + 0x30);
  if (lVar6 != 0) {
    r = *(int32_t *)(lVar6 + 0x10);
    g = *(int32_t *)(lVar6 + 0x14);
    b = *(int32_t *)(lVar6 + 0x18);
    a = *(int32_t *)(lVar6 + 0x1c);
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b,a,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_B
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_B (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40b9e60

int32_t CustomLogic_CustomLogicColorBuiltin__get_B
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  int32_t iVar4;
  System_String_o *pSVar5;
  Utility_Color255_o *pUVar6;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  MethodInfo *pMVar9;
  long *plVar10;
  Utility_Color255_o *pUVar11;
  _union_13 *method_00;
  _union_13 *p_Var12;
  Il2CppRGCTXData *pIVar13;
  Il2CppRGCTXData *pIVar14;
  float fVar15;
  float time;
  UnityEngine_Color_o UVar16;
  undefined1 auVar17 [16];
  undefined4 in_stack_ffffffffffffff38;
  undefined4 uVar18;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 uVar19;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 uVar20;
  float in_stack_ffffffffffffff44;
  float fVar21;
  float in_stack_ffffffffffffff48;
  float fVar22;
  _union_13 _Stack_b0;
  float fStack_a8;
  float fStack_a4;
  _union_13 _Stack_98;
  _union_13 _Stack_90;
  _union_14 a_Stack_88 [2];
  _union_13 _Stack_78;
  undefined8 uStack_70;
  float fStack_68;
  Utility_Color255_o *pUStack_60;
  
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).B;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).B = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).A;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).A = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    UVar16 = Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
    pSVar5 = Unity_VisualScripting_XColor__ToHexString(UVar16,(MethodInfo *)0x0);
    return (int32_t)pSVar5;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  pUVar11 = pUVar6;
  if (g_data_057ac510 == '\0') {
    pUVar11 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar6 != (Utility_Color255_o *)0x0) && (method != (MethodInfo *)0x0)) {
    pUVar6 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar6[1].fields,(Utility_Color255_o *)method->parameters,
                        fVar15,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var12 = (_union_13 *)&stack0xffffffffffffff38;
  pUStack_60 = pUVar6;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar10 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar11 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_70 = 0;
    fStack_68 = 0.0;
    method_00 = &_Stack_78;
    plVar10 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff3c;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff38;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff40;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff44;
    __this_00.fields.time = in_stack_ffffffffffffff48;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar16,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar18 = _Stack_78._0_4_;
    uVar19 = _Stack_78._4_4_;
    uVar20 = (undefined4)uStack_70;
    fVar21 = (float)((ulong)uStack_70 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_68;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_78;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_70;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_70._4_4_;
    if (pMVar9 == (MethodInfo *)0x0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if ((Utility_Color255_o *)pMVar9->parameters == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar22 = fStack_68;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
    _Stack_98.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_90.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_88[0]._0_4_ = 0.0;
    method_00 = &_Stack_98;
    time = 1.0;
    plVar10 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar19;
    __this_01.fields.color.fields.r = (float)uVar18;
    __this_01.fields.color.fields.b = (float)uVar20;
    __this_01.fields.color.fields.a = fVar21;
    __this_01.fields.time = fVar22;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar16,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_88[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_98._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_98._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_90._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_90._4_4_;
    plVar10 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar10 = (long *)0x0;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_a8 = UVar16.fields.a;
    fStack_a4 = UVar16.fields.a;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    uVar18 = 0.0;
    uVar19 = 0.0;
    __this_02.fields.time = fStack_a4;
    __this_02.fields.alpha = fStack_a8;
    plVar10 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar16.fields.a,time,(MethodInfo *)&stack0xffffffffffffff38)
    ;
    method_00 = p_Var12;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar19;
      UVar3.alpha = (float)uVar18;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
        plVar10 = (long *)0x0;
        UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
          fStack_a8 = UVar16.fields.a;
          fStack_a4 = UVar16.fields.a;
          UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
          _Stack_b0.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_b0;
          __this_03.fields.time = fStack_a4;
          __this_03.fields.alpha = fStack_a8;
          plVar10 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar16.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_b0;
            pUVar6 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar15,(MethodInfo *)0x0);
            auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
            return auVar17._0_4_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar13 = method_00[6].rgctx_data;
  if (pIVar13 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar13->type[0x15].bits;
    iVar4 = (*vtableDispatch)(pIVar13,pIVar13->type[0x16].data,extraout_RDX,vtableDispatch);
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar13;
  if (g_data_057ac512 == '\0') {
    pIVar14 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (*(byte *)(*plVar10 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return 0;
  }
  if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin)
  {
    return 0;
  }
  pIVar2 = pIVar13[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar8 = plVar10[6], lVar8 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar8 + 0x10)) {
      return 0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar8 + 0x14)) {
      return 0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar8 + 0x18)) {
      return 0;
    }
    return CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                    *(int *)&pIVar2[1].field_0xc == *(int *)(lVar8 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar7);
            pSVar5 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return (int32_t)pSVar5;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar8 = il2cpp_runtime_helper_0231b270();
  plVar10 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 != 0) {
    iVar4 = *(int32_t *)(lVar8 + 0x10);
    g = *(int32_t *)(lVar8 + 0x14);
    b = *(int32_t *)(lVar8 + 0x18);
    a = *(int32_t *)(lVar8 + 0x1c);
    pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar6,iVar4,g,b,a,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar10 + 0x130)) {
      if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar10 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar10 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (int32_t)CONCAT71((int7)((ulong)plVar10[6] >> 8),plVar10[6] == extraout_RDX_00[6]);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$set_B
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_B (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40b9e80

void CustomLogic_CustomLogicColorBuiltin__set_B
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  Utility_Color255_o *pUVar4;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  undefined4 in_register_00000034;
  long lVar7;
  long *plVar8;
  Utility_Color255_o *pUVar9;
  _union_13 *method_00;
  _union_13 *p_Var10;
  Il2CppRGCTXData *pIVar11;
  Il2CppRGCTXData *pIVar12;
  float fVar13;
  float time;
  UnityEngine_Color_o UVar14;
  undefined1 auVar15 [16];
  undefined4 in_stack_ffffffffffffff40;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  float in_stack_ffffffffffffff4c;
  float fVar19;
  float in_stack_ffffffffffffff50;
  float fVar20;
  _union_13 _Stack_a8;
  float fStack_a0;
  float fStack_9c;
  _union_13 _Stack_90;
  _union_13 _Stack_88;
  _union_14 a_Stack_80 [2];
  _union_13 _Stack_70;
  undefined8 uStack_68;
  float fStack_60;
  Utility_Color255_o *pUStack_58;
  
  lVar6 = CONCAT44(in_register_00000034,value);
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).B = value;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this->fields).Value != (Utility_Color255_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).A = (int32_t)lVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    UVar14 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    Unity_VisualScripting_XColor__ToHexString(UVar14,(MethodInfo *)0x0);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  lVar7 = lVar6;
  pUVar9 = pUVar4;
  if (g_data_057ac510 == '\0') {
    pUVar9 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar4 != (Utility_Color255_o *)0x0) && (lVar6 != 0)) {
    pUVar4 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar4[1].fields,*(Utility_Color255_o **)(lVar6 + 0x30),
                        fVar13,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var10 = (_union_13 *)&stack0xffffffffffffff40;
  pUStack_58 = pUVar4;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar8 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar9 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    _Stack_70.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_68 = 0;
    fStack_60 = 0.0;
    method_00 = &_Stack_70;
    plVar8 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff44;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff40;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff48;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff4c;
    __this_00.fields.time = in_stack_ffffffffffffff50;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar14,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar16 = _Stack_70._0_4_;
    uVar17 = _Stack_70._4_4_;
    uVar18 = (undefined4)uStack_68;
    fVar19 = (float)((ulong)uStack_68 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_60;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_70;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_68;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_68._4_4_;
    if (lVar7 == 0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)(lVar7 + 0x30) == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar20 = fStack_60;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
    _Stack_90.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_88.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_80[0]._0_4_ = 0.0;
    method_00 = &_Stack_90;
    time = 1.0;
    plVar8 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar17;
    __this_01.fields.color.fields.r = (float)uVar16;
    __this_01.fields.color.fields.b = (float)uVar18;
    __this_01.fields.color.fields.a = fVar19;
    __this_01.fields.time = fVar20;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar14,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_80[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_90._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_90._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_88._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_88._4_4_;
    plVar8 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar8 = (long *)0x0;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_a0 = UVar14.fields.a;
    fStack_9c = UVar14.fields.a;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    uVar16 = 0.0;
    uVar17 = 0.0;
    __this_02.fields.time = fStack_9c;
    __this_02.fields.alpha = fStack_a0;
    plVar8 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar14.fields.a,time,(MethodInfo *)&stack0xffffffffffffff40)
    ;
    method_00 = p_Var10;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar17;
      UVar3.alpha = (float)uVar16;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
        plVar8 = (long *)0x0;
        UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
          fStack_a0 = UVar14.fields.a;
          fStack_9c = UVar14.fields.a;
          UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
          _Stack_a8.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_a8;
          __this_03.fields.time = fStack_9c;
          __this_03.fields.alpha = fStack_a0;
          plVar8 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar14.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_a8;
            pUVar4 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar13,(MethodInfo *)0x0);
            auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
            return;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar11 = method_00[6].rgctx_data;
  if (pIVar11 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar11->type[0x15].bits;
    (*vtableDispatch)(pIVar11,pIVar11->type[0x16].data,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar11;
  if (g_data_057ac512 == '\0') {
    pIVar12 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return;
  }
  pIVar2 = pIVar11[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar6 = plVar8[6], lVar6 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar6 + 0x10)) {
      return;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar6 + 0x14)) {
      return;
    }
    if (pIVar2[1].bits != *(uint *)(lVar6 + 0x18)) {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar5;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar5;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar5);
            System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar6 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar6 = *(long *)(lVar6 + 0x30);
  if (lVar6 != 0) {
    r = *(int32_t *)(lVar6 + 0x10);
    g = *(int32_t *)(lVar6 + 0x14);
    b = *(int32_t *)(lVar6 + 0x18);
    a = *(int32_t *)(lVar6 + 0x1c);
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b,a,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_A
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_A (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40b9ea0

int32_t CustomLogic_CustomLogicColorBuiltin__get_A
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  int32_t iVar4;
  System_String_o *pSVar5;
  Utility_Color255_o *pUVar6;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  MethodInfo *pMVar9;
  long *plVar10;
  Utility_Color255_o *pUVar11;
  _union_13 *method_00;
  _union_13 *p_Var12;
  Il2CppRGCTXData *pIVar13;
  Il2CppRGCTXData *pIVar14;
  float fVar15;
  float time;
  UnityEngine_Color_o UVar16;
  undefined1 auVar17 [16];
  undefined4 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 uVar19;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 uVar20;
  float in_stack_ffffffffffffff54;
  float fVar21;
  float in_stack_ffffffffffffff58;
  float fVar22;
  _union_13 _Stack_a0;
  float fStack_98;
  float fStack_94;
  _union_13 _Stack_88;
  _union_13 _Stack_80;
  _union_14 a_Stack_78 [2];
  _union_13 _Stack_68;
  undefined8 uStack_60;
  float fStack_58;
  Utility_Color255_o *pUStack_50;
  
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    return (pUVar6->fields).A;
  }
  iVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    (pUVar6->fields).A = (int32_t)method;
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).Value;
  if (pUVar6 != (Utility_Color255_o *)0x0) {
    UVar16 = Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
    pSVar5 = Unity_VisualScripting_XColor__ToHexString(UVar16,(MethodInfo *)0x0);
    return (int32_t)pSVar5;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  pUVar11 = pUVar6;
  if (g_data_057ac510 == '\0') {
    pUVar11 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar6 != (Utility_Color255_o *)0x0) && (method != (MethodInfo *)0x0)) {
    pUVar6 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar6[1].fields,(Utility_Color255_o *)method->parameters,
                        fVar15,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var12 = (_union_13 *)&stack0xffffffffffffff48;
  pUStack_50 = pUVar6;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar10 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar11 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_60 = 0;
    fStack_58 = 0.0;
    method_00 = &_Stack_68;
    plVar10 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff4c;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff48;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff50;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff54;
    __this_00.fields.time = in_stack_ffffffffffffff58;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar16,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar18 = _Stack_68._0_4_;
    uVar19 = _Stack_68._4_4_;
    uVar20 = (undefined4)uStack_60;
    fVar21 = (float)((ulong)uStack_60 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_58;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_68;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_60;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_60._4_4_;
    if (pMVar9 == (MethodInfo *)0x0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if ((Utility_Color255_o *)pMVar9->parameters == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar22 = fStack_58;
    UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
    _Stack_88.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_80.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_78[0]._0_4_ = 0.0;
    method_00 = &_Stack_88;
    time = 1.0;
    plVar10 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar19;
    __this_01.fields.color.fields.r = (float)uVar18;
    __this_01.fields.color.fields.b = (float)uVar20;
    __this_01.fields.color.fields.a = fVar21;
    __this_01.fields.time = fVar22;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar16,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_78[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_88._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_88._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_80._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_80._4_4_;
    plVar10 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar10 = (long *)0x0;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar11[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_98 = UVar16.fields.a;
    fStack_94 = UVar16.fields.a;
    UVar16 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar11[1].fields,(MethodInfo *)0x0);
    uVar18 = 0.0;
    uVar19 = 0.0;
    __this_02.fields.time = fStack_94;
    __this_02.fields.alpha = fStack_98;
    plVar10 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar16.fields.a,time,(MethodInfo *)&stack0xffffffffffffff48)
    ;
    method_00 = p_Var12;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar19;
      UVar3.alpha = (float)uVar18;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
        plVar10 = (long *)0x0;
        UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if ((Utility_Color255_o *)pMVar9->parameters != (Utility_Color255_o *)0x0) {
          fStack_98 = UVar16.fields.a;
          fStack_94 = UVar16.fields.a;
          UVar16 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar9->parameters,(MethodInfo *)0x0);
          _Stack_a0.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_a0;
          __this_03.fields.time = fStack_94;
          __this_03.fields.alpha = fStack_98;
          plVar10 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar16.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_a0;
            pUVar6 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar15,(MethodInfo *)0x0);
            auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
            return auVar17._0_4_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar13 = method_00[6].rgctx_data;
  if (pIVar13 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar13->type[0x15].bits;
    iVar4 = (*vtableDispatch)(pIVar13,pIVar13->type[0x16].data,extraout_RDX,vtableDispatch);
    return iVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar13;
  if (g_data_057ac512 == '\0') {
    pIVar14 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (*(byte *)(*plVar10 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return 0;
  }
  if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin)
  {
    return 0;
  }
  pIVar2 = pIVar13[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar8 = plVar10[6], lVar8 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar8 + 0x10)) {
      return 0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar8 + 0x14)) {
      return 0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar8 + 0x18)) {
      return 0;
    }
    return CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                    *(int *)&pIVar2[1].field_0xc == *(int *)(lVar8 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar14[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar7);
            pSVar5 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return (int32_t)pSVar5;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar8 = il2cpp_runtime_helper_0231b270();
  plVar10 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 != 0) {
    iVar4 = *(int32_t *)(lVar8 + 0x10);
    g = *(int32_t *)(lVar8 + 0x14);
    b = *(int32_t *)(lVar8 + 0x18);
    a = *(int32_t *)(lVar8 + 0x1c);
    pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar6,iVar4,g,b,a,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar17._0_8_,pUVar6,auVar17._8_8_);
    return auVar17._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar10 + 0x130)) {
      if (*(long *)(*(long *)(*plVar10 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar10 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar10 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (int32_t)CONCAT71((int7)((ulong)plVar10[6] >> 8),plVar10[6] == extraout_RDX_00[6]);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$set_A
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_A (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40b9ec0

void CustomLogic_CustomLogicColorBuiltin__set_A
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  Utility_Color255_o *pUVar4;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  undefined4 in_register_00000034;
  long lVar7;
  long *plVar8;
  Utility_Color255_o *pUVar9;
  _union_13 *method_00;
  _union_13 *p_Var10;
  Il2CppRGCTXData *pIVar11;
  Il2CppRGCTXData *pIVar12;
  float fVar13;
  float time;
  UnityEngine_Color_o UVar14;
  undefined1 auVar15 [16];
  undefined4 in_stack_ffffffffffffff50;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 uVar18;
  float in_stack_ffffffffffffff5c;
  float fVar19;
  float in_stack_ffffffffffffff60;
  float fVar20;
  _union_13 _Stack_98;
  float fStack_90;
  float fStack_8c;
  _union_13 _Stack_80;
  _union_13 _Stack_78;
  _union_14 a_Stack_70 [2];
  _union_13 _Stack_60;
  undefined8 uStack_58;
  float fStack_50;
  Utility_Color255_o *pUStack_48;
  
  lVar6 = CONCAT44(in_register_00000034,value);
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    (pUVar4->fields).A = value;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = (__this->fields).Value;
  if (pUVar4 != (Utility_Color255_o *)0x0) {
    UVar14 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    Unity_VisualScripting_XColor__ToHexString(UVar14,(MethodInfo *)0x0);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  lVar7 = lVar6;
  pUVar9 = pUVar4;
  if (g_data_057ac510 == '\0') {
    pUVar9 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar4 != (Utility_Color255_o *)0x0) && (lVar6 != 0)) {
    pUVar4 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar4[1].fields,*(Utility_Color255_o **)(lVar6 + 0x30),
                        fVar13,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var10 = (_union_13 *)&stack0xffffffffffffff50;
  pUStack_48 = pUVar4;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar8 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar9 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_58 = 0;
    fStack_50 = 0.0;
    method_00 = &_Stack_60;
    plVar8 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff54;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff50;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff58;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff5c;
    __this_00.fields.time = in_stack_ffffffffffffff60;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar14,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar16 = _Stack_60._0_4_;
    uVar17 = _Stack_60._4_4_;
    uVar18 = (undefined4)uStack_58;
    fVar19 = (float)((ulong)uStack_58 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_50;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_60;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_58;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_58._4_4_;
    if (lVar7 == 0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)(lVar7 + 0x30) == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar20 = fStack_50;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
    _Stack_80.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_70[0]._0_4_ = 0.0;
    method_00 = &_Stack_80;
    time = 1.0;
    plVar8 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar17;
    __this_01.fields.color.fields.r = (float)uVar16;
    __this_01.fields.color.fields.b = (float)uVar18;
    __this_01.fields.color.fields.a = fVar19;
    __this_01.fields.time = fVar20;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar14,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_70[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_80._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_80._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_78._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_78._4_4_;
    plVar8 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar8 = (long *)0x0;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar9[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_90 = UVar14.fields.a;
    fStack_8c = UVar14.fields.a;
    UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar9[1].fields,(MethodInfo *)0x0);
    uVar16 = 0.0;
    uVar17 = 0.0;
    __this_02.fields.time = fStack_8c;
    __this_02.fields.alpha = fStack_90;
    plVar8 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar14.fields.a,time,(MethodInfo *)&stack0xffffffffffffff50)
    ;
    method_00 = p_Var10;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar17;
      UVar3.alpha = (float)uVar16;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
        plVar8 = (long *)0x0;
        UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if (*(Utility_Color255_o **)(lVar7 + 0x30) != (Utility_Color255_o *)0x0) {
          fStack_90 = UVar14.fields.a;
          fStack_8c = UVar14.fields.a;
          UVar14 = Utility_Color255__ToColor(*(Utility_Color255_o **)(lVar7 + 0x30),(MethodInfo *)0x0);
          _Stack_98.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_98;
          __this_03.fields.time = fStack_8c;
          __this_03.fields.alpha = fStack_90;
          plVar8 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar14.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_98;
            pUVar4 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar13,(MethodInfo *)0x0);
            auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
            return;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar11 = method_00[6].rgctx_data;
  if (pIVar11 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar11->type[0x15].bits;
    (*vtableDispatch)(pIVar11,pIVar11->type[0x16].data,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar11;
  if (g_data_057ac512 == '\0') {
    pIVar12 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return;
  }
  pIVar2 = pIVar11[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar6 = plVar8[6], lVar6 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar6 + 0x10)) {
      return;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar6 + 0x14)) {
      return;
    }
    if (pIVar2[1].bits != *(uint *)(lVar6 + 0x18)) {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar5;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar5;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar5);
            System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar6 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar6 = *(long *)(lVar6 + 0x30);
  if (lVar6 != 0) {
    r = *(int32_t *)(lVar6 + 0x10);
    g = *(int32_t *)(lVar6 + 0x14);
    b = *(int32_t *)(lVar6 + 0x18);
    a = *(int32_t *)(lVar6 + 0x1c);
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b,a,(MethodInfo *)0x0);
    auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar4,auVar15._8_8_);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$ToHexString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToHexString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40b9ee0

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToHexString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientColorKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientAlphaKey_o __this_03;
  System_String_o *pSVar4;
  Utility_Color255_o *pUVar5;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  MethodInfo *pMVar8;
  long *plVar9;
  Utility_Color255_o *pUVar10;
  _union_13 *method_00;
  _union_13 *p_Var11;
  Il2CppRGCTXData *pIVar12;
  Il2CppRGCTXData *pIVar13;
  float fVar14;
  float time;
  UnityEngine_Color_o UVar15;
  undefined1 auVar16 [16];
  undefined4 in_stack_ffffffffffffff58;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 uVar18;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 uVar19;
  float in_stack_ffffffffffffff64;
  float fVar20;
  float in_stack_ffffffffffffff68;
  float fVar21;
  _union_13 _Stack_90;
  float fStack_88;
  float fStack_84;
  _union_13 _Stack_78;
  _union_13 _Stack_70;
  _union_14 a_Stack_68 [2];
  _union_13 _Stack_58;
  undefined8 uStack_50;
  float fStack_48;
  Utility_Color255_o *pUStack_40;
  
  pUVar5 = (__this->fields).Value;
  if (pUVar5 != (Utility_Color255_o *)0x0) {
    UVar15 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    pSVar4 = Unity_VisualScripting_XColor__ToHexString(UVar15,(MethodInfo *)0x0);
    return pSVar4;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar8 = method;
  pUVar10 = pUVar5;
  if (g_data_057ac510 == '\0') {
    pUVar10 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((pUVar5 != (Utility_Color255_o *)0x0) && (method != (MethodInfo *)0x0)) {
    pUVar5 = Utility_Color255__Lerp
                       (*(Utility_Color255_o **)&pUVar5[1].fields,(Utility_Color255_o *)method->parameters,
                        fVar14,(MethodInfo *)0x0);
    auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar5,auVar16._8_8_);
    return (System_String_o *)auVar16._0_8_;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var11 = (_union_13 *)&stack0xffffffffffffff58;
  pUStack_40 = pUVar5;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar9 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar10 == (Utility_Color255_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar10[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar15 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar10[1].fields,(MethodInfo *)0x0);
    _Stack_58.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_50 = 0;
    fStack_48 = 0.0;
    method_00 = &_Stack_58;
    plVar9 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)in_stack_ffffffffffffff5c;
    __this_00.fields.color.fields.r = (float)in_stack_ffffffffffffff58;
    __this_00.fields.color.fields.b = (float)in_stack_ffffffffffffff60;
    __this_00.fields.color.fields.a = in_stack_ffffffffffffff64;
    __this_00.fields.time = in_stack_ffffffffffffff68;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar15,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar17 = _Stack_58._0_4_;
    uVar18 = _Stack_58._4_4_;
    uVar19 = (undefined4)uStack_50;
    fVar20 = (float)((ulong)uStack_50 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_48;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_58;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_50;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_50._4_4_;
    if (pMVar8 == (MethodInfo *)0x0) goto label_040ba1e8;
    method_00 = (_union_13 *)0x0;
    if ((Utility_Color255_o *)pMVar8->parameters == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar21 = fStack_48;
    UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar8->parameters,(MethodInfo *)0x0);
    _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_70.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_68[0]._0_4_ = 0.0;
    method_00 = &_Stack_78;
    time = 1.0;
    plVar9 = (long *)0x0;
    __this_01.fields.color.fields.g = (float)uVar18;
    __this_01.fields.color.fields.r = (float)uVar17;
    __this_01.fields.color.fields.b = (float)uVar19;
    __this_01.fields.color.fields.a = fVar20;
    __this_01.fields.time = fVar21;
    UnityEngine_GradientColorKey___ctor(__this_01,UVar15,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_68[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_78._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_78._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_70._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_70._4_4_;
    plVar9 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar10[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar9 = (long *)0x0;
    UVar15 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar10[1].fields,(MethodInfo *)0x0);
    method_00 = (_union_13 *)0x0;
    if (*(Utility_Color255_o **)&pUVar10[1].fields == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_88 = UVar15.fields.a;
    fStack_84 = UVar15.fields.a;
    UVar15 = Utility_Color255__ToColor(*(Utility_Color255_o **)&pUVar10[1].fields,(MethodInfo *)0x0);
    uVar17 = 0.0;
    uVar18 = 0.0;
    __this_02.fields.time = fStack_84;
    __this_02.fields.alpha = fStack_88;
    plVar9 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_02,UVar15.fields.a,time,(MethodInfo *)&stack0xffffffffffffff58)
    ;
    method_00 = p_Var11;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar18;
      UVar3.alpha = (float)uVar17;
      alphakeys->m_Items[0].fields = UVar3;
      method_00 = (_union_13 *)0x0;
      if ((Utility_Color255_o *)pMVar8->parameters != (Utility_Color255_o *)0x0) {
        plVar9 = (long *)0x0;
        UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar8->parameters,(MethodInfo *)0x0);
        method_00 = (_union_13 *)0x0;
        if ((Utility_Color255_o *)pMVar8->parameters != (Utility_Color255_o *)0x0) {
          fStack_88 = UVar15.fields.a;
          fStack_84 = UVar15.fields.a;
          UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar8->parameters,(MethodInfo *)0x0);
          _Stack_90.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_90;
          __this_03.fields.time = fStack_84;
          __this_03.fields.alpha = fStack_88;
          plVar9 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_03,UVar15.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_90;
            pUVar5 = Utility_Color255__Gradient(colorKeys,alphakeys,0,fVar14,(MethodInfo *)0x0);
            auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar5,auVar16._8_8_);
            return (System_String_o *)auVar16._0_8_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar12 = method_00[6].rgctx_data;
  if (pIVar12 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar12->type[0x15].bits;
    pSVar4 = (System_String_o *)
             (*vtableDispatch)(pIVar12,pIVar12->type[0x16].data,extraout_RDX,vtableDispatch);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  if (g_data_057ac512 == '\0') {
    pIVar13 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar9 == (long *)0x0) {
    return (System_String_o *)0x0;
  }
  if (*(byte *)(*plVar9 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return (System_String_o *)0x0;
  }
  if (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return (System_String_o *)0x0;
  }
  pIVar2 = pIVar12[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar7 = plVar9[6], lVar7 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar7 + 0x10)) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar7 + 0x14)) {
      return (System_String_o *)0x0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar7 + 0x18)) {
      return (System_String_o *)0x0;
    }
    return (System_String_o *)
           (ulong)CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                           *(int *)&pIVar2[1].field_0xc == *(int *)(lVar7 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar13[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar6;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar13[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar6;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar13[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar6;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar13[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar6;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar6);
            pSVar4 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return pSVar4;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar7 = il2cpp_runtime_helper_0231b270();
  plVar9 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if (lVar7 != 0) {
    r = *(int32_t *)(lVar7 + 0x10);
    g = *(int32_t *)(lVar7 + 0x14);
    b = *(int32_t *)(lVar7 + 0x18);
    a = *(int32_t *)(lVar7 + 0x1c);
    pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar5,r,g,b,a,(MethodInfo *)0x0);
    auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar5,auVar16._8_8_);
    return (System_String_o *)auVar16._0_8_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar9 + 0x130)) {
      if (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar9 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar9 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (System_String_o *)CONCAT71((int7)((ulong)plVar9[6] >> 8),plVar9[6] == extraout_RDX_00[6]);
      }
    }
  }
  return (System_String_o *)0x0;
}


// CustomLogic.CustomLogicColorBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Lerp (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x40b9f00

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Lerp
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t,
          MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b_00;
  int32_t a_00;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientAlphaKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  Utility_Color255_o *pUVar4;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 extraout_RDX;
  long *extraout_RDX_00;
  long *plVar8;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar9;
  _union_13 *method_00;
  _union_13 *p_Var10;
  Il2CppRGCTXData *pIVar11;
  Il2CppRGCTXData *pIVar12;
  float t_00;
  float time;
  UnityEngine_Color_o UVar13;
  undefined1 auVar14 [16];
  undefined4 in_stack_ffffffffffffff60;
  undefined4 uVar15;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 uVar17;
  float in_stack_ffffffffffffff6c;
  float fVar18;
  float in_stack_ffffffffffffff70;
  float fVar19;
  _union_13 _Stack_88;
  float fStack_80;
  float fStack_7c;
  _union_13 _Stack_70;
  _union_13 _Stack_68;
  _union_14 a_Stack_60 [2];
  _union_13 _Stack_50;
  undefined8 uStack_48;
  float fStack_40;
  CustomLogic_CustomLogicColorBuiltin_o *pCStack_38;
  
  pCVar5 = b;
  pCVar9 = a;
  if (g_data_057ac510 == '\0') {
    pCVar9 = (CustomLogic_CustomLogicColorBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac510 = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) {
    pUVar4 = Utility_Color255__Lerp((a->fields).Value,(b->fields).Value,t,(MethodInfo *)0x0);
    auVar14 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar14._0_8_,pUVar4,auVar14._8_8_);
    return auVar14._0_8_;
  }
  t_00 = (float)il2cpp_runtime_helper_022b2c90();
  p_Var10 = (_union_13 *)&stack0xffffffffffffff60;
  pCStack_38 = a;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
  }
  plVar8 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40();
  if (pCVar9 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar4 = (pCVar9->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar13 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    _Stack_50.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_48 = 0;
    fStack_40 = 0.0;
    method_00 = &_Stack_50;
    plVar8 = (long *)0x0;
    __this.fields.color.fields.g = (float)in_stack_ffffffffffffff64;
    __this.fields.color.fields.r = (float)in_stack_ffffffffffffff60;
    __this.fields.color.fields.b = (float)in_stack_ffffffffffffff68;
    __this.fields.color.fields.a = in_stack_ffffffffffffff6c;
    __this.fields.time = in_stack_ffffffffffffff70;
    UnityEngine_GradientColorKey___ctor(__this,UVar13,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar15 = _Stack_50._0_4_;
    uVar16 = _Stack_50._4_4_;
    uVar17 = (undefined4)uStack_48;
    fVar18 = (float)((ulong)uStack_48 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_40;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_50;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_48;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_48._4_4_;
    if (pCVar5 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040ba1e8;
    pUVar4 = (pCVar5->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar19 = fStack_40;
    UVar13 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    _Stack_70.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_60[0]._0_4_ = 0.0;
    method_00 = &_Stack_70;
    time = 1.0;
    plVar8 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)uVar16;
    __this_00.fields.color.fields.r = (float)uVar15;
    __this_00.fields.color.fields.b = (float)uVar17;
    __this_00.fields.color.fields.a = fVar18;
    __this_00.fields.time = fVar19;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar13,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_60[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_70._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_70._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_68._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_68._4_4_;
    plVar8 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    pUVar4 = (pCVar9->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar8 = (long *)0x0;
    UVar13 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (pCVar9->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_80 = UVar13.fields.a;
    fStack_7c = UVar13.fields.a;
    UVar13 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    uVar15 = 0.0;
    uVar16 = 0.0;
    __this_01.fields.time = fStack_7c;
    __this_01.fields.alpha = fStack_80;
    plVar8 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_01,UVar13.fields.a,time,(MethodInfo *)&stack0xffffffffffffff60)
    ;
    method_00 = p_Var10;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar16;
      UVar3.alpha = (float)uVar15;
      alphakeys->m_Items[0].fields = UVar3;
      pUVar4 = (pCVar5->fields).Value;
      method_00 = (_union_13 *)0x0;
      if (pUVar4 != (Utility_Color255_o *)0x0) {
        plVar8 = (long *)0x0;
        UVar13 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (pCVar5->fields).Value;
        method_00 = (_union_13 *)0x0;
        if (pUVar4 != (Utility_Color255_o *)0x0) {
          fStack_80 = UVar13.fields.a;
          fStack_7c = UVar13.fields.a;
          UVar13 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
          _Stack_88.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_88;
          __this_02.fields.time = fStack_7c;
          __this_02.fields.alpha = fStack_80;
          plVar8 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_02,UVar13.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_88;
            pUVar4 = Utility_Color255__Gradient(colorKeys,alphakeys,0,t_00,(MethodInfo *)0x0);
            auVar14 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar14._0_8_,pUVar4,auVar14._8_8_);
            return auVar14._0_8_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar11 = method_00[6].rgctx_data;
  if (pIVar11 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar11->type[0x15].bits;
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
             (*vtableDispatch)(pIVar11,pIVar11->type[0x16].data,extraout_RDX,vtableDispatch);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar11;
  if (g_data_057ac512 == '\0') {
    pIVar12 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar8 == (long *)0x0) {
    return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  }
  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  }
  pIVar2 = pIVar11[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar7 = plVar8[6], lVar7 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar7 + 0x10)) {
      return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar7 + 0x14)) {
      return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar7 + 0x18)) {
      return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    return (CustomLogic_CustomLogicColorBuiltin_o *)
           (ulong)CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                           *(int *)&pIVar2[1].field_0xc == *(int *)(lVar7 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar6;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar6;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar6;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar12[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar6;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar6);
            pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
                     System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return pCVar5;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar7 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if (lVar7 != 0) {
    r = *(int32_t *)(lVar7 + 0x10);
    g = *(int32_t *)(lVar7 + 0x14);
    b_00 = *(int32_t *)(lVar7 + 0x18);
    a_00 = *(int32_t *)(lVar7 + 0x1c);
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b_00,a_00,(MethodInfo *)0x0);
    auVar14 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar14._0_8_,pUVar4,auVar14._8_8_);
    return auVar14._0_8_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX_00 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_00 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_00 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (CustomLogic_CustomLogicColorBuiltin_o *)
               CONCAT71((int7)((ulong)plVar8[6] >> 8),plVar8[6] == extraout_RDX_00[6]);
      }
    }
  }
  return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicColorBuiltin$$Gradient
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Gradient (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x40b9f80

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Gradient
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t,
          MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b_00;
  int32_t a_00;
  code *vtableDispatch;
  Il2CppType *pIVar2;
  UnityEngine_GradientAlphaKey_Fields UVar3;
  UnityEngine_GradientColorKey_o __this;
  UnityEngine_GradientColorKey_o __this_00;
  UnityEngine_GradientAlphaKey_o __this_01;
  UnityEngine_GradientAlphaKey_o __this_02;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  Utility_Color255_o *pUVar4;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  long *extraout_RDX_01;
  long *plVar8;
  _union_13 *method_00;
  _union_13 *p_Var9;
  Il2CppRGCTXData *pIVar10;
  Il2CppRGCTXData *pIVar11;
  float time;
  UnityEngine_Color_o UVar12;
  undefined1 auVar13 [16];
  undefined4 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 uVar15;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 uVar16;
  float in_stack_ffffffffffffff84;
  float fVar17;
  float in_stack_ffffffffffffff88;
  float fVar18;
  _union_13 _Stack_70;
  float fStack_68;
  float fStack_64;
  _union_13 _Stack_58;
  _union_13 _Stack_50;
  _union_14 a_Stack_48 [2];
  _union_13 _Stack_38;
  undefined8 uStack_30;
  float fStack_28;
  
  p_Var9 = (_union_13 *)&stack0xffffffffffffff78;
  if (g_data_057ac511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientAlphaKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GradientColorKey);
    g_data_057ac511 = '\x01';
    method = extraout_RDX;
  }
  plVar8 = (long *)0x2;
  method_00 = TypeInfo_GradientColorKey;
  colorKeys = (UnityEngine_GradientColorKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientColorKey,2,method);
  if (a == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
label_040ba1e8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar4 = (a->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    UVar12 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    _Stack_38.rgctx_data = (Il2CppRGCTXData *)0x0;
    uStack_30 = 0;
    fStack_28 = 0.0;
    method_00 = &_Stack_38;
    plVar8 = (long *)0x0;
    __this.fields.color.fields.g = (float)in_stack_ffffffffffffff7c;
    __this.fields.color.fields.r = (float)in_stack_ffffffffffffff78;
    __this.fields.color.fields.b = (float)in_stack_ffffffffffffff80;
    __this.fields.color.fields.a = in_stack_ffffffffffffff84;
    __this.fields.time = in_stack_ffffffffffffff88;
    UnityEngine_GradientColorKey___ctor(__this,UVar12,0.0,(MethodInfo *)method_00);
    if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_040ba1e8;
    uVar14 = _Stack_38._0_4_;
    uVar15 = _Stack_38._4_4_;
    uVar16 = (undefined4)uStack_30;
    fVar17 = (float)((ulong)uStack_30 >> 0x20);
    if ((int)colorKeys->max_length == 0) goto label_040ba1ed;
    colorKeys->m_Items[0].fields.time = fStack_28;
    *(_union_13 *)&colorKeys->m_Items[0].fields.color.fields = (Il2CppRGCTXData *)_Stack_38;
    colorKeys->m_Items[0].fields.color.fields.b = (float)(undefined4)uStack_30;
    colorKeys->m_Items[0].fields.color.fields.a = (float)uStack_30._4_4_;
    if (b == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_040ba1e8;
    pUVar4 = (b->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fVar18 = fStack_28;
    UVar12 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    _Stack_58.rgctx_data = (Il2CppRGCTXData *)0x0;
    _Stack_50.rgctx_data = (Il2CppRGCTXData *)0x0;
    a_Stack_48[0]._0_4_ = 0.0;
    method_00 = &_Stack_58;
    time = 1.0;
    plVar8 = (long *)0x0;
    __this_00.fields.color.fields.g = (float)uVar15;
    __this_00.fields.color.fields.r = (float)uVar14;
    __this_00.fields.color.fields.b = (float)uVar16;
    __this_00.fields.color.fields.a = fVar17;
    __this_00.fields.time = fVar18;
    UnityEngine_GradientColorKey___ctor(__this_00,UVar12,1.0,(MethodInfo *)method_00);
    if ((uint)colorKeys->max_length < 2) goto label_040ba1ed;
    colorKeys->m_Items[1].fields.time = (float)a_Stack_48[0]._0_4_;
    colorKeys->m_Items[1].fields.color.fields.r = (float)_Stack_58._0_4_;
    colorKeys->m_Items[1].fields.color.fields.g = (float)_Stack_58._4_4_;
    colorKeys->m_Items[1].fields.color.fields.b = _Stack_50._0_4_;
    colorKeys->m_Items[1].fields.color.fields.a = _Stack_50._4_4_;
    plVar8 = (long *)0x2;
    alphakeys = (UnityEngine_GradientAlphaKey_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GradientAlphaKey);
    pUVar4 = (a->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    plVar8 = (long *)0x0;
    UVar12 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (a->fields).Value;
    method_00 = (_union_13 *)0x0;
    if (pUVar4 == (Utility_Color255_o *)0x0) goto label_040ba1e8;
    fStack_68 = UVar12.fields.a;
    fStack_64 = UVar12.fields.a;
    UVar12 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    uVar14 = 0.0;
    uVar15 = 0.0;
    __this_01.fields.time = fStack_64;
    __this_01.fields.alpha = fStack_68;
    plVar8 = (long *)0x0;
    UnityEngine_GradientAlphaKey___ctor(__this_01,UVar12.fields.a,time,(MethodInfo *)&stack0xffffffffffffff78)
    ;
    method_00 = p_Var9;
    if (alphakeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_040ba1e8;
    if ((int)alphakeys->max_length != 0) {
      UVar3.time = (float)uVar15;
      UVar3.alpha = (float)uVar14;
      alphakeys->m_Items[0].fields = UVar3;
      pUVar4 = (b->fields).Value;
      method_00 = (_union_13 *)0x0;
      if (pUVar4 != (Utility_Color255_o *)0x0) {
        plVar8 = (long *)0x0;
        UVar12 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (b->fields).Value;
        method_00 = (_union_13 *)0x0;
        if (pUVar4 != (Utility_Color255_o *)0x0) {
          fStack_68 = UVar12.fields.a;
          fStack_64 = UVar12.fields.a;
          UVar12 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
          _Stack_70.rgctx_data = (Il2CppRGCTXData *)0x0;
          method_00 = &_Stack_70;
          __this_02.fields.time = fStack_64;
          __this_02.fields.alpha = fStack_68;
          plVar8 = (long *)0x0;
          UnityEngine_GradientAlphaKey___ctor(__this_02,UVar12.fields.a,time,(MethodInfo *)method_00);
          if (1 < (uint)alphakeys->max_length) {
            ((_union_13 *)(alphakeys->m_Items + 1))->rgctx_data = (Il2CppRGCTXData *)_Stack_70;
            pUVar4 = Utility_Color255__Gradient(colorKeys,alphakeys,0,t,(MethodInfo *)0x0);
            auVar13 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar13._0_8_,pUVar4,auVar13._8_8_);
            return auVar13._0_8_;
          }
          goto label_040ba1ed;
        }
      }
      goto label_040ba1e8;
    }
  }
label_040ba1ed:
  il2cpp_runtime_helper_022b2ca0();
  pIVar10 = method_00[6].rgctx_data;
  if (pIVar10 != (Il2CppRGCTXData *)0x0) {
    vtableDispatch = *(code **)&pIVar10->type[0x15].bits;
    pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
             (*vtableDispatch)(pIVar10,pIVar10->type[0x16].data,extraout_RDX_00,vtableDispatch);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = pIVar10;
  if (g_data_057ac512 == '\0') {
    pIVar11 = (Il2CppRGCTXData *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (plVar8 == (long *)0x0) {
    return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  }
  if (*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8) != TypeInfo_CustomLogicColorBuiltin) {
    return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  }
  pIVar2 = pIVar10[6].type;
  if ((pIVar2 != (Il2CppType *)0x0) && (lVar7 = plVar8[6], lVar7 != 0)) {
    if (*(int *)&pIVar2[1].data != *(int *)(lVar7 + 0x10)) {
      return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    if (*(int *)((long)&pIVar2[1].data + 4) != *(int *)(lVar7 + 0x14)) {
      return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    if (pIVar2[1].bits != *(uint *)(lVar7 + 0x18)) {
      return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    return (CustomLogic_CustomLogicColorBuiltin_o *)
           (ulong)CONCAT31((int3)((uint)*(int *)&pIVar2[1].field_0xc >> 8),
                           *(int *)&pIVar2[1].field_0xc == *(int *)(lVar7 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if ((pIVar11[6].rgctxDataDummy == (Il2CppType *)0x0) ||
     (pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar6;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if (pIVar11[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar6;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (pIVar11[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
        pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar6;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if (pIVar11[6].rgctxDataDummy == (Il2CppType *)0x0) goto label_040ba4c8;
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar6 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar6;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar6);
            pCVar5 = (CustomLogic_CustomLogicColorBuiltin_o *)
                     System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return pCVar5;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar7 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if (lVar7 != 0) {
    r = *(int32_t *)(lVar7 + 0x10);
    g = *(int32_t *)(lVar7 + 0x14);
    b_00 = *(int32_t *)(lVar7 + 0x18);
    a_00 = *(int32_t *)(lVar7 + 0x1c);
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b_00,a_00,(MethodInfo *)0x0);
    auVar13 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar13._0_8_,pUVar4,auVar13._8_8_);
    return auVar13._0_8_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX_01 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX_01 + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX_01 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (CustomLogic_CustomLogicColorBuiltin_o *)
               CONCAT71((int7)((ulong)plVar8[6] >> 8),plVar8[6] == extraout_RDX_01[6]);
      }
    }
  }
  return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicColorBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40ba200

int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppMethodPointer vtableDispatch;
  Il2CppType **ppIVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int32_t iVar6;
  System_Object_array *args;
  Il2CppObject *pIVar7;
  long lVar8;
  System_String_o *pSVar9;
  Utility_Color255_o *pUVar10;
  undefined8 in_RDX;
  long *extraout_RDX;
  long *plVar11;
  undefined1 auVar12 [16];
  
  pUVar10 = (__this->fields).Value;
  if (pUVar10 != (Utility_Color255_o *)0x0) {
    vtableDispatch = (pUVar10->klass->vtable)._2_GetHashCode.methodPtr;
    iVar6 = (*vtableDispatch)
                      (pUVar10,(pUVar10->klass->vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
    return iVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar11 = (long *)pUVar10;
  if (g_data_057ac512 == '\0') {
    plVar11 = &TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (method == (MethodInfo *)0x0) {
    return 0;
  }
  if ((byte)method->methodPointer[0x130] < (byte)*(code *)(TypeInfo_CustomLogicColorBuiltin + 0x130)) {
    return 0;
  }
  if (*(long *)(*(long *)(method->methodPointer + 200) + -8 + (ulong)(byte)*(code *)(TypeInfo_CustomLogicColorBuiltin + 0x130) * 8
               ) != TypeInfo_CustomLogicColorBuiltin) {
    return 0;
  }
  lVar8 = *(long *)&pUVar10[1].fields;
  if ((lVar8 != 0) && (ppIVar2 = method->parameters, ppIVar2 != (Il2CppType **)0x0)) {
    if (*(int *)(lVar8 + 0x10) != *(int *)(ppIVar2 + 2)) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x14) != *(int *)((long)ppIVar2 + 0x14)) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x18) != *(int *)(ppIVar2 + 3)) {
      return 0;
    }
    return CONCAT31((int3)((uint)*(int *)(lVar8 + 0x1c) >> 8),
                    *(int *)(lVar8 + 0x1c) == *(int *)((long)ppIVar2 + 0x1c));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  lVar8._0_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).R;
  lVar8._4_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).G;
  if ((lVar8 == 0) ||
     (pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      lVar3._0_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).R;
      lVar3._4_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).G;
      if (lVar3 == 0) goto label_040ba4c8;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        lVar4._0_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).R;
        lVar4._4_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).G;
        if (lVar4 == 0) goto label_040ba4c8;
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar7;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          lVar5._0_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).R;
          lVar5._4_4_ = (((Utility_Color255_o *)((long)plVar11 + 0x20))->fields).G;
          if (lVar5 == 0) goto label_040ba4c8;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar7 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7), lVar8 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar7);
            pSVar9 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return (int32_t)pSVar9;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar8 = il2cpp_runtime_helper_0231b270();
  plVar11 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 != 0) {
    iVar6 = *(int32_t *)(lVar8 + 0x10);
    g = *(int32_t *)(lVar8 + 0x14);
    b = *(int32_t *)(lVar8 + 0x18);
    a = *(int32_t *)(lVar8 + 0x1c);
    pUVar10 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar10,iVar6,g,b,a,(MethodInfo *)0x0);
    auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar12._0_8_,pUVar10,auVar12._8_8_);
    return auVar12._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar11 != (long *)0x0) {
    bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if (bVar1 <= *(byte *)(*plVar11 + 0x130)) {
      if (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar11 = (long *)0x0;
      }
      if ((((extraout_RDX != (long *)0x0) && (plVar11 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (int32_t)CONCAT71((int7)((ulong)plVar11[6] >> 8),plVar11[6] == extraout_RDX[6]);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__Equals (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x40ba230

bool_conflict
CustomLogic_CustomLogicColorBuiltin__Equals
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppClass *pIVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  Utility_Color255_o *pUVar7;
  long *extraout_RDX;
  long *plVar8;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar9;
  undefined1 auVar10 [16];
  
  pCVar9 = __this;
  if (g_data_057ac512 == '\0') {
    pCVar9 = (CustomLogic_CustomLogicColorBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac512 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    return 0;
  }
  bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
  if ((obj->klass->_2).naturalAligment < bVar1) {
    return 0;
  }
  if ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin) {
    return 0;
  }
  pUVar7 = (__this->fields).Value;
  if ((pUVar7 != (Utility_Color255_o *)0x0) && (pIVar3 = obj[3].klass, pIVar3 != (Il2CppClass *)0x0)) {
    if ((pUVar7->fields).R != *(int *)&(pIVar3->_1).name) {
      return 0;
    }
    if ((pUVar7->fields).G != *(int *)((long)&(pIVar3->_1).name + 4)) {
      return 0;
    }
    if ((pUVar7->fields).B != *(int *)&(pIVar3->_1).namespaze) {
      return 0;
    }
    iVar2 = (pUVar7->fields).A;
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == *(int *)((long)&(pIVar3->_1).namespaze + 4));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (((pCVar9->fields).Value == (Utility_Color255_o *)0x0) ||
     (pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar4 != (Il2CppObject *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pIVar4), lVar5 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar4;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if ((pCVar9->fields).Value == (Utility_Color255_o *)0x0) goto label_040ba4c8;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar4 != (Il2CppObject *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pIVar4), lVar5 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar4;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if ((pCVar9->fields).Value == (Utility_Color255_o *)0x0) goto label_040ba4c8;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar4 != (Il2CppObject *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pIVar4), lVar5 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar4;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if ((pCVar9->fields).Value == (Utility_Color255_o *)0x0) goto label_040ba4c8;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar4 != (Il2CppObject *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pIVar4), lVar5 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar4;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar4);
            pSVar6 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return (bool_conflict)pSVar6;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar5 = il2cpp_runtime_helper_0231b270();
  plVar8 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar5 = *(long *)(lVar5 + 0x30);
  if (lVar5 != 0) {
    r = *(int32_t *)(lVar5 + 0x10);
    g = *(int32_t *)(lVar5 + 0x14);
    b = *(int32_t *)(lVar5 + 0x18);
    a = *(int32_t *)(lVar5 + 0x1c);
    pUVar7 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar7,r,g,b,a,(MethodInfo *)0x0);
    auVar10 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar10._0_8_,pUVar7,auVar10._8_8_);
    return auVar10._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (plVar8 != (long *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(Il2CppClass **)(*(long *)(*plVar8 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        plVar8 = (long *)0x0;
      }
      if ((((extraout_RDX != (long *)0x0) && (plVar8 != (long *)0x0)) &&
          (bVar1 <= *(byte *)(*extraout_RDX + 0x130))) &&
         (*(Il2CppClass **)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (bool_conflict)CONCAT71((int7)((ulong)plVar8[6] >> 8),plVar8[6] == extraout_RDX[6]);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40ba2d0

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *pSVar4;
  Utility_Color255_o *__this_00;
  long *extraout_RDX;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"({0}, {1}, {2}, {3})");
    g_data_057ac513 = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (((__this->fields).Value == (Utility_Color255_o *)0x0) ||
     (pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), args == (System_Object_array *)0x0)) {
label_040ba4c8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pIVar2 != (Il2CppObject *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pIVar2), lVar3 == 0))
    goto label_040ba4d2;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar2;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      if ((__this->fields).Value == (Utility_Color255_o *)0x0) goto label_040ba4c8;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((pIVar2 != (Il2CppObject *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pIVar2), lVar3 == 0))
      goto label_040ba4d2;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar2;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if ((__this->fields).Value == (Utility_Color255_o *)0x0) goto label_040ba4c8;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar2 != (Il2CppObject *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pIVar2), lVar3 == 0))
        goto label_040ba4d2;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar2;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if ((__this->fields).Value == (Utility_Color255_o *)0x0) goto label_040ba4c8;
          pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar2 != (Il2CppObject *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pIVar2), lVar3 == 0))
          goto label_040ba4d2;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar2;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar2);
            pSVar4 = System_String__Format_3af7980("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
            return pSVar4;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_040ba4d2:
  lVar3 = il2cpp_runtime_helper_0231b270();
  plVar5 = (long *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  lVar3 = *(long *)(lVar3 + 0x30);
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac515 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
      g_data_057ac515 = '\x01';
    }
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
      if (bVar1 <= *(byte *)(*plVar5 + 0x130)) {
        if (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
          plVar5 = (long *)0x0;
        }
        if ((((extraout_RDX != (long *)0x0) && (plVar5 != (long *)0x0)) &&
            (bVar1 <= *(byte *)(*extraout_RDX + 0x130))) &&
           (*(long *)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
          return (System_String_o *)CONCAT71((int7)((ulong)plVar5[6] >> 8),plVar5[6] == extraout_RDX[6]);
        }
      }
    }
    return (System_String_o *)0x0;
  }
  r = *(int32_t *)(lVar3 + 0x10);
  g = *(int32_t *)(lVar3 + 0x14);
  b = *(int32_t *)(lVar3 + 0x18);
  a = *(int32_t *)(lVar3 + 0x1c);
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
  auVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar6._0_8_,__this_00,auVar6._8_8_);
  return (System_String_o *)auVar6._0_8_;
}


// CustomLogic.CustomLogicColorBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Copy (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40ba4f0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Copy(CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  code cVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Utility_Color255_o *pUVar2;
  long *extraout_RDX;
  undefined1 auVar3 [16];
  
  if (g_data_057ac514 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac514 = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (Utility_Color255_o *)0x0) {
    r = (pUVar2->fields).R;
    g = (pUVar2->fields).G;
    b = (pUVar2->fields).B;
    a = (pUVar2->fields).A;
    pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar2,r,g,b,a,(MethodInfo *)0x0);
    auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar3._0_8_,pUVar2,auVar3._8_8_);
    return auVar3._0_8_;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (method != (MethodInfo *)0x0) {
    cVar1 = *(code *)(TypeInfo_CustomLogicColorBuiltin + 0x130);
    if ((byte)cVar1 <= (byte)method->methodPointer[0x130]) {
      if (*(long *)(*(long *)(method->methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) != TypeInfo_CustomLogicColorBuiltin) {
        method = (MethodInfo *)0x0;
      }
      if ((((extraout_RDX != (long *)0x0) && (method != (MethodInfo *)0x0)) &&
          ((byte)cVar1 <= (byte)*(code *)(*extraout_RDX + 0x130))) &&
         (*(long *)(*(long *)(*extraout_RDX + 200) + -8 + (ulong)(byte)cVar1 * 8) == TypeInfo_CustomLogicColorBuiltin)) {
        return (CustomLogic_CustomLogicColorBuiltin_o *)
               CONCAT71((int7)((ulong)method->parameters >> 8),
                        method->parameters == (Il2CppType **)extraout_RDX[6]);
      }
    }
  }
  return (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicColorBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin____Eq__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40ba5a0

bool_conflict
CustomLogic_CustomLogicColorBuiltin____Eq__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  
  if (g_data_057ac515 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac515 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (bVar1 <= (self->klass->_2).naturalAligment) {
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin) {
        self = (Il2CppObject *)0x0;
      }
      if ((((other != (Il2CppObject *)0x0) && (self != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).naturalAligment)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
        return (bool_conflict)CONCAT71((int7)((ulong)self[3].klass >> 8),self[3].klass == other[3].klass);
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin____Hash__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40ba640

int32_t CustomLogic_CustomLogicColorBuiltin____Hash__
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppMethodPointer vtableDispatch;
  long lVar1;
  int32_t iVar2;
  Utility_Color255_o *pUVar3;
  undefined8 in_RDX;
  Utility_Color255_o *pUVar4;
  undefined1 auVar5 [16];
  
  pUVar3 = (__this->fields).Value;
  if (pUVar3 != (Utility_Color255_o *)0x0) {
    vtableDispatch = (pUVar3->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtableDispatch)
                      (pUVar3,(pUVar3->klass->vtable)._2_GetHashCode.method,in_RDX,vtableDispatch);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar3;
  if (g_data_057ac516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pUVar4 = (Utility_Color255_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac516 = '\x01';
  }
  lVar1 = *(long *)&pUVar3[1].fields;
  if (lVar1 != 0) {
    iVar2 = *(int32_t *)(lVar1 + 0x10);
    g = *(int32_t *)(lVar1 + 0x14);
    b = *(int32_t *)(lVar1 + 0x18);
    a = *(int32_t *)(lVar1 + 0x1c);
    pUVar3 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar3,iVar2,g,b,a,(MethodInfo *)0x0);
    auVar5 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar5._0_8_,pUVar3,auVar5._8_8_);
    return auVar5._0_4_;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar2 = (*(pUVar4->klass->vtable)._3_ToString.methodPtr)();
  return iVar2;
}


// CustomLogic.CustomLogicColorBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Copy__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40ba670

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Copy__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Utility_Color255_o *pUVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar3;
  undefined1 auVar4 [16];
  
  pCVar3 = __this;
  if (g_data_057ac516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pCVar3 = (CustomLogic_CustomLogicColorBuiltin_o *)&TypeInfo_CustomLogicColorBuiltin;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac516 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    r = (pUVar1->fields).R;
    g = (pUVar1->fields).G;
    b = (pUVar1->fields).B;
    a = (pUVar1->fields).A;
    pUVar1 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar1,r,g,b,a,(MethodInfo *)0x0);
    auVar4 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar4._0_8_,pUVar1,auVar4._8_8_);
    return (Il2CppObject *)auVar4._0_8_;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar2 = (Il2CppObject *)(*(pCVar3->klass->vtable)._3_ToString.methodPtr)();
  return pIVar2;
}


// CustomLogic.CustomLogicColorBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin____Str__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40ba720

System_String_o *
CustomLogic_CustomLogicColorBuiltin____Str__(CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._3_ToString.methodPtr;
  pSVar1 = (System_String_o *)
           (*vtableDispatch)
                     (__this,(__this->klass->vtable)._3_ToString.method,in_RDX,vtableDispatch);
  return pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Add__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40ba740

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Add__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  int iVar5;
  Utility_Color255_o *pUVar6;
  Il2CppObject *lhs;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_Exception_o *pSVar9;
  undefined8 uVar10;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *rhs;
  Il2CppObject *rhs_00;
  Il2CppObject *rhs_01;
  int iVar11;
  int a;
  int iVar12;
  int32_t iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  
  pIVar7 = self;
  if (g_data_057ac517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac517 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
label_040ba8ad:
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Add__");
    pSVar9 = CustomLogic_CustomLogicUtils__OperatorException(pSVar8,self,other,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Add);
    il2cpp_runtime_helper_022b2b10(pSVar9);
  }
  else {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (((((self->klass->_2).naturalAligment < bVar1) || (other == (Il2CppObject *)0x0)) ||
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
       (((other->klass->_2).naturalAligment < bVar1 ||
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040ba8ad;
    pIVar3 = self[3].klass;
    if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = other[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
      iVar14 = *(int *)&(pIVar4->_1).name + *(int *)&(pIVar3->_1).name;
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      iVar13 = 0;
      if (iVar14 < 0) {
        iVar14 = iVar13;
      }
      iVar15 = *(int *)((long)&(pIVar4->_1).name + 4) + *(int *)((long)&(pIVar3->_1).name + 4);
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar15 < 0) {
        iVar15 = iVar13;
      }
      iVar11 = *(int *)&(pIVar4->_1).namespaze + *(int *)&(pIVar3->_1).namespaze;
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = iVar13;
      }
      iVar12 = *(int *)((long)&(pIVar4->_1).namespaze + 4) + *(int *)((long)&(pIVar3->_1).namespaze + 4);
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar6,iVar14,iVar15,iVar11,iVar12,(MethodInfo *)0x0);
      auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar6,auVar16._8_8_);
      return (Il2CppObject *)auVar16._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lhs = pIVar7;
  if (g_data_057ac518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac518 = '\x01';
  }
  if (pIVar7 == (Il2CppObject *)0x0) {
label_040baa5d:
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
    pSVar9 = CustomLogic_CustomLogicUtils__OperatorException(pSVar8,pIVar7,rhs,(MethodInfo *)0x0);
    lhs = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
    il2cpp_runtime_helper_022b2b10(pSVar9);
  }
  else {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (((((pIVar7->klass->_2).naturalAligment < bVar1) || (rhs == (Il2CppObject *)0x0)) ||
        ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
       (((rhs->klass->_2).naturalAligment < bVar1 ||
        ((rhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
    pIVar3 = pIVar7[3].klass;
    if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = rhs[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
      iVar14 = *(int *)&(pIVar3->_1).name - *(int *)&(pIVar4->_1).name;
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      iVar13 = 0;
      if (iVar14 < 0) {
        iVar14 = iVar13;
      }
      iVar15 = *(int *)((long)&(pIVar3->_1).name + 4) - *(int *)((long)&(pIVar4->_1).name + 4);
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar15 < 0) {
        iVar15 = iVar13;
      }
      iVar11 = *(int *)&(pIVar3->_1).namespaze - *(int *)&(pIVar4->_1).namespaze;
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = iVar13;
      }
      iVar12 = *(int *)((long)&(pIVar3->_1).namespaze + 4) - *(int *)((long)&(pIVar4->_1).namespaze + 4);
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar6,iVar14,iVar15,iVar11,iVar12,(MethodInfo *)0x0);
      auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar6,auVar16._8_8_);
      return (Il2CppObject *)auVar16._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar7 = lhs;
  if (g_data_057ac519 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac519 = '\x01';
  }
  if (lhs == (Il2CppObject *)0x0) {
label_040bac11:
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
    pSVar9 = CustomLogic_CustomLogicUtils__OperatorException(pSVar8,lhs,rhs_00,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
    il2cpp_runtime_helper_022b2b10(pSVar9);
  }
  else {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (((((lhs->klass->_2).naturalAligment < bVar1) || (rhs_00 == (Il2CppObject *)0x0)) ||
        ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
       (((rhs_00->klass->_2).naturalAligment < bVar1 ||
        ((rhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
    pIVar3 = lhs[3].klass;
    if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = rhs_00[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
      iVar14 = *(int *)&(pIVar4->_1).name * *(int *)&(pIVar3->_1).name;
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      iVar13 = 0;
      if (iVar14 < 0) {
        iVar14 = iVar13;
      }
      iVar15 = *(int *)((long)&(pIVar4->_1).name + 4) * *(int *)((long)&(pIVar3->_1).name + 4);
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar15 < 0) {
        iVar15 = iVar13;
      }
      iVar11 = *(int *)&(pIVar4->_1).namespaze * *(int *)&(pIVar3->_1).namespaze;
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = iVar13;
      }
      iVar12 = *(int *)((long)&(pIVar4->_1).namespaze + 4) * *(int *)((long)&(pIVar3->_1).namespaze + 4);
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar6,iVar14,iVar15,iVar11,iVar12,(MethodInfo *)0x0);
      auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar6,auVar16._8_8_);
      return (Il2CppObject *)auVar16._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac51a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (pIVar7 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (pIVar7->klass->_2).naturalAligment) && (rhs_01 != (Il2CppObject *)0x0)) &&
        ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (rhs_01->klass->_2).naturalAligment &&
        ((rhs_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar3 = pIVar7[3].klass;
      if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = rhs_01[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
        iVar14 = *(int *)&(pIVar3->_1).name / *(int *)&(pIVar4->_1).name;
        if (0xff < iVar14) {
          iVar14 = 0xff;
        }
        iVar13 = 0;
        if (iVar14 < 0) {
          iVar14 = iVar13;
        }
        iVar15 = *(int *)((long)&(pIVar3->_1).name + 4) / *(int *)((long)&(pIVar4->_1).name + 4);
        if (0xff < iVar15) {
          iVar15 = 0xff;
        }
        if (iVar15 < 0) {
          iVar15 = iVar13;
        }
        iVar11 = *(int *)&(pIVar3->_1).namespaze / *(int *)&(pIVar4->_1).namespaze;
        if (0xff < iVar11) {
          iVar11 = 0xff;
        }
        if (iVar11 < 0) {
          iVar11 = iVar13;
        }
        iVar12 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar2 = *(int *)((long)&(pIVar4->_1).namespaze + 4);
        iVar5 = iVar12 / iVar2;
        a = 0xff;
        if (iVar5 < 0x100) {
          a = iVar5;
        }
        if (a < 0) {
          a = 0;
        }
        pUVar6 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pIVar3,(long)iVar12 % (long)iVar2 & 0xffffffff);
        Utility_Color255___ctor(pUVar6,iVar14,iVar15,iVar11,a,(MethodInfo *)0x0);
        auVar16 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar16._0_8_,pUVar6,auVar16._8_8_);
        return (Il2CppObject *)auVar16._0_8_;
      }
      goto label_040badfa;
    }
  }
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar9 = CustomLogic_CustomLogicUtils__OperatorException(pSVar8,pIVar7,rhs_01,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar9);
label_040badfa:
  il2cpp_runtime_helper_022b2c90();
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar10);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar10);
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Sub__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40ba8f0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Sub__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  int iVar5;
  Utility_Color255_o *pUVar6;
  Il2CppObject *lhs;
  Il2CppObject *lhs_00;
  System_String_o *pSVar7;
  System_Exception_o *pSVar8;
  undefined8 uVar9;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *rhs;
  Il2CppObject *rhs_00;
  int iVar10;
  int a;
  int iVar11;
  int32_t iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  
  lhs = self;
  if (g_data_057ac518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac518 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
label_040baa5d:
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Sub__");
    pSVar8 = CustomLogic_CustomLogicUtils__OperatorException(pSVar7,self,other,(MethodInfo *)0x0);
    lhs = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Sub);
    il2cpp_runtime_helper_022b2b10(pSVar8);
  }
  else {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (((((self->klass->_2).naturalAligment < bVar1) || (other == (Il2CppObject *)0x0)) ||
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
       (((other->klass->_2).naturalAligment < bVar1 ||
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040baa5d;
    pIVar3 = self[3].klass;
    if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = other[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
      iVar13 = *(int *)&(pIVar3->_1).name - *(int *)&(pIVar4->_1).name;
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      iVar12 = 0;
      if (iVar13 < 0) {
        iVar13 = iVar12;
      }
      iVar14 = *(int *)((long)&(pIVar3->_1).name + 4) - *(int *)((long)&(pIVar4->_1).name + 4);
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar14 < 0) {
        iVar14 = iVar12;
      }
      iVar10 = *(int *)&(pIVar3->_1).namespaze - *(int *)&(pIVar4->_1).namespaze;
      if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      if (iVar10 < 0) {
        iVar10 = iVar12;
      }
      iVar11 = *(int *)((long)&(pIVar3->_1).namespaze + 4) - *(int *)((long)&(pIVar4->_1).namespaze + 4);
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar6,iVar13,iVar14,iVar10,iVar11,(MethodInfo *)0x0);
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar6,auVar15._8_8_);
      return (Il2CppObject *)auVar15._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lhs_00 = lhs;
  if (g_data_057ac519 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac519 = '\x01';
  }
  if (lhs == (Il2CppObject *)0x0) {
label_040bac11:
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
    pSVar8 = CustomLogic_CustomLogicUtils__OperatorException(pSVar7,lhs,rhs,(MethodInfo *)0x0);
    lhs_00 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
    il2cpp_runtime_helper_022b2b10(pSVar8);
  }
  else {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (((((lhs->klass->_2).naturalAligment < bVar1) || (rhs == (Il2CppObject *)0x0)) ||
        ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
       (((rhs->klass->_2).naturalAligment < bVar1 ||
        ((rhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
    pIVar3 = lhs[3].klass;
    if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = rhs[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
      iVar13 = *(int *)&(pIVar4->_1).name * *(int *)&(pIVar3->_1).name;
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      iVar12 = 0;
      if (iVar13 < 0) {
        iVar13 = iVar12;
      }
      iVar14 = *(int *)((long)&(pIVar4->_1).name + 4) * *(int *)((long)&(pIVar3->_1).name + 4);
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar14 < 0) {
        iVar14 = iVar12;
      }
      iVar10 = *(int *)&(pIVar4->_1).namespaze * *(int *)&(pIVar3->_1).namespaze;
      if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      if (iVar10 < 0) {
        iVar10 = iVar12;
      }
      iVar11 = *(int *)((long)&(pIVar4->_1).namespaze + 4) * *(int *)((long)&(pIVar3->_1).namespaze + 4);
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar6,iVar13,iVar14,iVar10,iVar11,(MethodInfo *)0x0);
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar6,auVar15._8_8_);
      return (Il2CppObject *)auVar15._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac51a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs_00 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs_00->klass->_2).naturalAligment) && (rhs_00 != (Il2CppObject *)0x0)) &&
        ((lhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (rhs_00->klass->_2).naturalAligment &&
        ((rhs_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar3 = lhs_00[3].klass;
      if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = rhs_00[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
        iVar13 = *(int *)&(pIVar3->_1).name / *(int *)&(pIVar4->_1).name;
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        iVar12 = 0;
        if (iVar13 < 0) {
          iVar13 = iVar12;
        }
        iVar14 = *(int *)((long)&(pIVar3->_1).name + 4) / *(int *)((long)&(pIVar4->_1).name + 4);
        if (0xff < iVar14) {
          iVar14 = 0xff;
        }
        if (iVar14 < 0) {
          iVar14 = iVar12;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze / *(int *)&(pIVar4->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar12;
        }
        iVar11 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar2 = *(int *)((long)&(pIVar4->_1).namespaze + 4);
        iVar5 = iVar11 / iVar2;
        a = 0xff;
        if (iVar5 < 0x100) {
          a = iVar5;
        }
        if (a < 0) {
          a = 0;
        }
        pUVar6 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pIVar3,(long)iVar11 % (long)iVar2 & 0xffffffff);
        Utility_Color255___ctor(pUVar6,iVar13,iVar14,iVar10,a,(MethodInfo *)0x0);
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar6,auVar15._8_8_);
        return (Il2CppObject *)auVar15._0_8_;
      }
      goto label_040badfa;
    }
  }
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar8 = CustomLogic_CustomLogicUtils__OperatorException(pSVar7,lhs_00,rhs_00,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar8);
label_040badfa:
  il2cpp_runtime_helper_022b2c90();
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar9);
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mul__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40baaa0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mul__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  int iVar5;
  Utility_Color255_o *pUVar6;
  Il2CppObject *lhs;
  System_String_o *pSVar7;
  System_Exception_o *pSVar8;
  undefined8 uVar9;
  System_NotImplementedException_o *__this_00;
  Il2CppObject *rhs;
  int iVar10;
  int a;
  int iVar11;
  int32_t iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  
  lhs = self;
  if (g_data_057ac519 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac519 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
label_040bac11:
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Mul__");
    pSVar8 = CustomLogic_CustomLogicUtils__OperatorException(pSVar7,self,other,(MethodInfo *)0x0);
    lhs = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mul);
    il2cpp_runtime_helper_022b2b10(pSVar8);
  }
  else {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if (((((self->klass->_2).naturalAligment < bVar1) || (other == (Il2CppObject *)0x0)) ||
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)) ||
       (((other->klass->_2).naturalAligment < bVar1 ||
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicColorBuiltin)))) goto label_040bac11;
    pIVar3 = self[3].klass;
    if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = other[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
      iVar13 = *(int *)&(pIVar4->_1).name * *(int *)&(pIVar3->_1).name;
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      iVar12 = 0;
      if (iVar13 < 0) {
        iVar13 = iVar12;
      }
      iVar14 = *(int *)((long)&(pIVar4->_1).name + 4) * *(int *)((long)&(pIVar3->_1).name + 4);
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar14 < 0) {
        iVar14 = iVar12;
      }
      iVar10 = *(int *)&(pIVar4->_1).namespaze * *(int *)&(pIVar3->_1).namespaze;
      if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      if (iVar10 < 0) {
        iVar10 = iVar12;
      }
      iVar11 = *(int *)((long)&(pIVar4->_1).namespaze + 4) * *(int *)((long)&(pIVar3->_1).namespaze + 4);
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      pUVar6 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar6,iVar13,iVar14,iVar10,iVar11,(MethodInfo *)0x0);
      auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar6,auVar15._8_8_);
      return (Il2CppObject *)auVar15._0_8_;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac51a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (lhs != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (lhs->klass->_2).naturalAligment) && (rhs != (Il2CppObject *)0x0)) &&
        ((lhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (rhs->klass->_2).naturalAligment &&
        ((rhs->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar3 = lhs[3].klass;
      if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar4 = rhs[3].klass, pIVar4 != (Il2CppClass *)0x0)) {
        iVar13 = *(int *)&(pIVar3->_1).name / *(int *)&(pIVar4->_1).name;
        if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        iVar12 = 0;
        if (iVar13 < 0) {
          iVar13 = iVar12;
        }
        iVar14 = *(int *)((long)&(pIVar3->_1).name + 4) / *(int *)((long)&(pIVar4->_1).name + 4);
        if (0xff < iVar14) {
          iVar14 = 0xff;
        }
        if (iVar14 < 0) {
          iVar14 = iVar12;
        }
        iVar10 = *(int *)&(pIVar3->_1).namespaze / *(int *)&(pIVar4->_1).namespaze;
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        if (iVar10 < 0) {
          iVar10 = iVar12;
        }
        iVar11 = *(int *)((long)&(pIVar3->_1).namespaze + 4);
        iVar2 = *(int *)((long)&(pIVar4->_1).namespaze + 4);
        iVar5 = iVar11 / iVar2;
        a = 0xff;
        if (iVar5 < 0x100) {
          a = iVar5;
        }
        if (a < 0) {
          a = 0;
        }
        pUVar6 = (Utility_Color255_o *)
                 il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pIVar3,(long)iVar11 % (long)iVar2 & 0xffffffff);
        Utility_Color255___ctor(pUVar6,iVar13,iVar14,iVar10,a,(MethodInfo *)0x0);
        auVar15 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar15._0_8_,pUVar6,auVar15._8_8_);
        return (Il2CppObject *)auVar15._0_8_;
      }
      goto label_040badfa;
    }
  }
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar8 = CustomLogic_CustomLogicUtils__OperatorException(pSVar7,lhs,rhs,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar8);
label_040badfa:
  il2cpp_runtime_helper_022b2c90();
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar9);
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Div__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40bac50

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Div__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  int r;
  int g;
  int b;
  int iVar6;
  Utility_Color255_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar7;
  undefined8 uVar8;
  System_NotImplementedException_o *__this_01;
  int a;
  int32_t iVar9;
  undefined1 auVar10 [16];
  
  if (g_data_057ac51a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    g_data_057ac51a = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)) &&
       ((bVar1 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicColorBuiltin)))) {
      pIVar4 = self[3].klass;
      if ((pIVar4 != (Il2CppClass *)0x0) && (pIVar5 = other[3].klass, pIVar5 != (Il2CppClass *)0x0)) {
        r = *(int *)&(pIVar4->_1).name / *(int *)&(pIVar5->_1).name;
        if (0xff < r) {
          r = 0xff;
        }
        iVar9 = 0;
        if (r < 0) {
          r = iVar9;
        }
        g = *(int *)((long)&(pIVar4->_1).name + 4) / *(int *)((long)&(pIVar5->_1).name + 4);
        if (0xff < g) {
          g = 0xff;
        }
        if (g < 0) {
          g = iVar9;
        }
        b = *(int *)&(pIVar4->_1).namespaze / *(int *)&(pIVar5->_1).namespaze;
        if (0xff < b) {
          b = 0xff;
        }
        if (b < 0) {
          b = iVar9;
        }
        iVar2 = *(int *)((long)&(pIVar4->_1).namespaze + 4);
        iVar3 = *(int *)((long)&(pIVar5->_1).namespaze + 4);
        iVar6 = iVar2 / iVar3;
        a = 0xff;
        if (iVar6 < 0x100) {
          a = iVar6;
        }
        if (a < 0) {
          a = 0;
        }
        __this_00 = (Utility_Color255_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Color255,pIVar4,(long)iVar2 % (long)iVar3 & 0xffffffff);
        Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
        auVar10 = il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
        CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(auVar10._0_8_,__this_00,auVar10._8_8_);
        return (Il2CppObject *)auVar10._0_8_;
      }
      goto label_040badfa;
    }
  }
  operatorName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"__Div__");
  pSVar7 = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Div);
  il2cpp_runtime_helper_022b2b10(pSVar7);
label_040badfa:
  il2cpp_runtime_helper_022b2c90();
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_01 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_NotImplementedException___ctor(__this_01,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  il2cpp_runtime_helper_022b2b10(__this_01,uVar8);
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mod__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x40bae00

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mod__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object___Mod);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__get_ClassName (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40bae40

System_String_o *
CustomLogic_CustomLogicColorBuiltin__get_ClassName
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac51b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057ac51b = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsAbstract (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40bae70

bool_conflict
CustomLogic_CustomLogicColorBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsStatic (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40bae80

bool_conflict
CustomLogic_CustomLogicColorBuiltin__get_IsStatic
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicColorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x40bae90

bool_conflict
CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


