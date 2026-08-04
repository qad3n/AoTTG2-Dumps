// Type: SimpleJSONFixed.JSON
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSON.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSON$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSON__Parse (System_String_o* aJSON, const MethodInfo* method);
// 0x4081790

SimpleJSONFixed_JSONNode_o * SimpleJSONFixed_JSON__Parse(System_String_o *aJSON,MethodInfo *method)

{
  uint index;
  int iVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  Il2CppMethodPointer pIVar7;
  bool bVar8;
  byte bVar9;
  uint16_t uVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar13;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_Collections_Generic_Stack_object__o *pSVar15;
  System_Text_StringBuilder_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar16;
  undefined8 uVar17;
  System_Exception_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  undefined8 unaff_RBX;
  MethodInfo *unaff_RBP;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  System_String_o **ppSVar19;
  undefined *puVar20;
  System_Exception_o *__this_03;
  uint index_00;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar21;
  undefined8 unaff_R15;
  undefined1 auVar22 [16];
  
  if (g_data_057ac3b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac3b5 = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  do {
    *(MethodInfo **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057ac351 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407acea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407acf6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad02;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Peek);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad1a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Pop);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad26;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad32;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad3e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad56;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad62;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ac351 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad78;
    pSVar15 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_JSONNode);
    *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40) = pSVar15;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad8f;
    System_Collections_Generic_Stack_object____ctor(pSVar15,MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ad9e;
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407adab;
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    if (aJSON == (System_String_o *)0x0) {
label_0407b618:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b61d;
      il2cpp_runtime_helper_022b2c90();
label_0407b61d:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b629;
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b631;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
      puVar20 = &"JSON Parse: Too many closing brackets";
label_0407b65b:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b660;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar20);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b66d;
      System_Exception___ctor_3cf6120(__this_01,pSVar16,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b679;
      uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Parse);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b684;
      __this_03 = __this_01;
      uVar17 = il2cpp_runtime_helper_022b2b10(__this_01,uVar17);
      *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x70) = __this;
      *(System_Exception_o **)((long)register0x00000020 + -0x78) = __this_01;
      *(undefined8 *)((long)register0x00000020 + -0x80) = uVar17;
      if (g_data_057ac382 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6ac;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6b8;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6c4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac382 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6da;
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6ef;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
      (__this_03->fields)._className = (System_String_o *)__this_02;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b6ff;
      il2cpp_runtime_helper_022b4080(&__this_03->fields);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x407b717;
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    index_00 = 0;
    if (0 < (aJSON->fields)._stringLength) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = "";
      bVar21 = false;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x38) = __this;
label_0407ae34:
      method_00 = (MethodInfo *)(ulong)index_00;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407ae41;
      uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
      pMVar18 = extraout_RDX_00;
      bVar8 = bVar21;
      if (uVar10 < 0x30) {
        if (uVar10 < 0x21) {
          bVar8 = true;
          switch(uVar10) {
          case 9:
          case 0x20:
            bVar8 = bVar21;
            if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) goto switchD_0407ae72_caseD_2;
            break;
          case 10:
          case 0xd:
            break;
          default:
            goto switchD_0407ae72_caseD_2;
          }
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar10 == 0x22) {
          bVar9 = ~(byte)*(undefined8 *)((long)register0x00000020 + -0x60);
          *(ulong *)((long)register0x00000020 + -0x60) =
               CONCAT71((int7)((ulong)*(undefined8 *)((long)register0x00000020 + -0x60) >> 8),bVar9) &
               0xffffffffffffff01;
          *(ulong *)((long)register0x00000020 + -0x50) =
               CONCAT71((int7)((ulong)*(undefined8 *)((long)register0x00000020 + -0x50) >> 8),
                        (byte)*(undefined8 *)((long)register0x00000020 + -0x50) | bVar9) & 0xffffffffffffff01;
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar10 == 0x2c) {
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) goto switchD_0407ae72_caseD_2;
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b173;
          iVar11 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          uVar6 = *(ulong *)((long)register0x00000020 + -0x50);
          uVar17 = "";
          if (0 < iVar11 || (uVar6 & 1) != 0) {
            pMVar18 = (__this->klass->vtable)._3_ToString.method;
            pIVar7 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b19a;
            auVar22 = (*pIVar7)(__this,pMVar18);
            pMVar18 = auVar22._8_8_;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b1b1;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_09;
            }
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b1bd;
            pSVar14 = SimpleJSONFixed_JSONNode__ParseElement(auVar22._0_8_,(uint)uVar6 & 1,pMVar18);
            plVar4 = *(long **)((long)register0x00000020 + -0x58);
            if (plVar4 != (long *)0x0) {
              uVar17 = *(undefined8 *)(*plVar4 + 0x280);
              pcVar5 = *(code **)(*plVar4 + 0x278);
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b1e3;
              (*pcVar5)(plVar4,*(undefined8 *)((long)register0x00000020 + -0x48),pSVar14,uVar17);
              uVar17 = "";
              goto label_0407b1f4;
            }
            goto label_0407b618;
          }
          goto label_0407b1f4;
        }
        if (uVar10 == 0x2f) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3bd;
            il2cpp_runtime_helper_02337ed0();
            bVar9 = *(byte *)((long)register0x00000020 + -0x60);
          }
          else {
            bVar9 = *(byte *)((long)register0x00000020 + -0x60);
          }
          if ((((bVar9 & 1) == 0) && (*(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 2) != '\0')) &&
             (index = index_00 + 1, (int)index < (aJSON->fields)._stringLength)) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407af45;
            uVar10 = System_String__get_Chars(aJSON,index,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_01;
            if (uVar10 == 0x2f) {
              do {
                index_00 = index;
                if ((aJSON->fields)._stringLength <= (int)index_00) break;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407af69;
                uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_02;
                if (uVar10 == 10) break;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407af80;
                uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_03;
                index = index_00 + 1;
              } while (uVar10 != 0xd);
              goto label_0407b3ef;
            }
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3d9;
          uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3ef;
          System_Text_StringBuilder__Append_3b048f0(__this,uVar10,(MethodInfo *)0x0);
          pMVar18 = extraout_RDX_14;
label_0407b3ef:
          index_00 = index_00 + 1;
          if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        }
      }
      else {
        if (0x5d < uVar10) {
          if (uVar10 == 0xfeff) goto switchD_0407ae72_caseD_1;
          if (uVar10 == 0x7d) goto switchD_0407aea8_caseD_23;
          if ((uVar10 != 0x7b) || ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0))
          goto switchD_0407ae72_caseD_2;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407afc9;
          __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407afd4;
          SimpleJSONFixed_JSONObject___ctor(__this_00,method_00);
          pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40);
          if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b294;
          goto label_0407b618;
        }
        switch(uVar10) {
        case 0x3a:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) == 0) {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            pIVar7 = (__this->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407aed1;
            uVar17 = (*pIVar7)(__this);
label_0407b1f4:
            *(undefined8 *)((long)register0x00000020 + -0x48) = uVar17;
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b20c;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_10;
            goto switchD_0407ae72_caseD_1;
          }
          break;
        case 0x5b:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b27b;
            __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b286;
            SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,method_00);
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40);
            if (pSVar15 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b618;
label_0407b294:
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b2a6;
            System_Collections_Generic_Stack_object___Push(pSVar15,(Il2CppObject *)__this_00,MethodInfo_Void_Push);
            pSVar14 = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x58);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b455;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_18;
              if (g_data_057ac34d == '\0') goto label_0407b462;
label_0407b2d0:
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
            }
            else {
              pMVar18 = extraout_RDX_11;
              if (g_data_057ac34d != '\0') goto label_0407b2d0;
label_0407b462:
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b46a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
              pMVar18 = extraout_RDX_19;
            }
            if (iVar1 == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b487;
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_20;
            }
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b2eb;
            bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar14,(Il2CppObject *)0x0,pMVar18);
            if ((char)bVar12 == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b303;
              pIVar13 = System_Collections_Generic_Stack_object___Peek
                                  (*(System_Collections_Generic_Stack_object__o **)
                                    ((long)register0x00000020 + -0x40),MethodInfo_JSONNode_Peek);
              if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0407b618;
              pMVar18 = (pSVar14->klass->vtable)._20_Add.method;
              pIVar7 = (pSVar14->klass->vtable)._20_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b327;
              (*pIVar7)(pSVar14,*(undefined8 *)((long)register0x00000020 + -0x48),pIVar13,pMVar18);
            }
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            *(undefined8 *)((long)register0x00000020 + -0x48) = "";
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b355;
            System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b369;
            pIVar13 = System_Collections_Generic_Stack_object___Peek
                                (*(System_Collections_Generic_Stack_object__o **)
                                  ((long)register0x00000020 + -0x40),MethodInfo_JSONNode_Peek);
            *(Il2CppObject **)((long)register0x00000020 + -0x58) = pIVar13;
            index_00 = index_00 + 1;
            bVar21 = false;
            pMVar18 = extraout_RDX_12;
            if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
            goto label_0407ae34;
          }
          break;
        case 0x5c:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b22d;
            uVar10 = System_String__get_Chars(aJSON,index_00 + 1,(MethodInfo *)0x0);
            if (uVar10 < 0x67) {
              if (uVar10 == 0x62) {
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 8;
              }
              else {
                if (uVar10 != 0x66) goto switchD_0407b4a6_caseD_1;
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 0xc;
              }
            }
            else {
              switch(uVar10) {
              case 0x6e:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 10;
                break;
              default:
switchD_0407b4a6_caseD_1:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                break;
              case 0x72:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 0xd;
                break;
              case 0x74:
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 9;
                break;
              case 0x75:
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b53e;
                pSVar16 = System_String__Substring_3af8da0(aJSON,index_00 + 2,4,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b54d;
                iVar11 = System_Int32__Parse_3cb4720(pSVar16,0x200,(MethodInfo *)0x0);
                if (__this != (System_Text_StringBuilder_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b563;
                  System_Text_StringBuilder__Append_3b048f0(__this,(uint16_t)iVar11,(MethodInfo *)0x0);
                  index_00 = index_00 + 5;
                  pMVar18 = extraout_RDX_22;
                  goto label_0407b3ef;
                }
                goto label_0407b618;
              }
            }
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b50a;
            System_Text_StringBuilder__Append_3b048f0(__this,uVar10,(MethodInfo *)0x0);
            pMVar18 = extraout_RDX_21;
          }
          index_00 = index_00 + 2;
          if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
          goto label_0407ae34;
        case 0x5d:
switchD_0407aea8_caseD_23:
          if ((*(byte *)((long)register0x00000020 + -0x60) & 1) == 0) {
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40);
            if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) {
              if ((pSVar15->fields)._size != 0) {
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b019;
                System_Collections_Generic_Stack_object___Pop(pSVar15,MethodInfo_JSONNode_Pop);
                if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b02c;
                iVar11 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
                uVar6 = *(ulong *)((long)register0x00000020 + -0x50);
                __this = (System_Text_StringBuilder_o *)(uVar6 & 0xffffffffffffff01);
                pMVar18 = extraout_RDX_04;
                if (0 < iVar11 || (char)__this != '\0') {
                  lVar3 = **(long **)((long)register0x00000020 + -0x38);
                  uVar17 = *(undefined8 *)(lVar3 + 0x170);
                  pcVar5 = *(code **)(lVar3 + 0x168);
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b055;
                  auVar22 = (*pcVar5)(*(long **)((long)register0x00000020 + -0x38),uVar17);
                  pMVar18 = auVar22._8_8_;
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b06a;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar18 = extraout_RDX_05;
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b076;
                  pSVar14 = SimpleJSONFixed_JSONNode__ParseElement(auVar22._0_8_,(uint)uVar6 & 1,pMVar18);
                  plVar4 = *(long **)((long)register0x00000020 + -0x58);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar17 = *(undefined8 *)(*plVar4 + 0x280);
                  pcVar5 = *(code **)(*plVar4 + 0x278);
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b09c;
                  (*pcVar5)(plVar4,*(undefined8 *)((long)register0x00000020 + -0x48),pSVar14,uVar17);
                  pMVar18 = extraout_RDX_06;
                }
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b414;
                  il2cpp_runtime_helper_02337ed0();
                  __this = *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x38);
                  pMVar18 = extraout_RDX_15;
                  if (g_data_057ac34d == '\0') goto label_0407b426;
label_0407b0c6:
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                }
                else {
                  __this = *(System_Text_StringBuilder_o **)((long)register0x00000020 + -0x38);
                  if (g_data_057ac34d != '\0') goto label_0407b0c6;
label_0407b426:
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b42e;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                  g_data_057ac34d = '\x01';
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                  pMVar18 = extraout_RDX_16;
                }
                if (iVar1 == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b44b;
                  il2cpp_runtime_helper_02337ed0();
                  pMVar18 = extraout_RDX_17;
                }
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b0e3;
                bVar12 = SimpleJSONFixed_JSONNode__op_Equality
                                   (*(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x58),
                                    (Il2CppObject *)0x0,pMVar18);
                if ((char)bVar12 == '\0') {
                  plVar4 = *(long **)((long)register0x00000020 + -0x58);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar17 = *(undefined8 *)(*plVar4 + 0x270);
                  pcVar5 = *(code **)(*plVar4 + 0x268);
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b10f;
                  (*pcVar5)(plVar4,!bVar21,uVar17);
                }
                *(undefined8 *)((long)register0x00000020 + -0x48) = "";
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b12a;
                System_Text_StringBuilder__set_Length(__this,0,(MethodInfo *)0x0);
                pMVar18 = extraout_RDX_07;
                if (0 < ((*(System_Collections_Generic_Stack_object__o **)((long)register0x00000020 + -0x40))
                        ->fields)._size) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b144;
                  pIVar13 = System_Collections_Generic_Stack_object___Peek
                                      (*(System_Collections_Generic_Stack_object__o **)
                                        ((long)register0x00000020 + -0x40),MethodInfo_JSONNode_Peek);
                  *(Il2CppObject **)((long)register0x00000020 + -0x58) = pIVar13;
                  pMVar18 = extraout_RDX_08;
                }
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
                goto switchD_0407ae72_caseD_1;
              }
              goto label_0407b61d;
            }
            goto label_0407b618;
          }
        }
      }
switchD_0407ae72_caseD_2:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b39d;
      uVar10 = System_String__get_Chars(aJSON,index_00,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b3b3;
      System_Text_StringBuilder__Append_3b048f0(__this,uVar10,(MethodInfo *)0x0);
      pMVar18 = extraout_RDX_13;
      bVar8 = bVar21;
switchD_0407ae72_caseD_1:
      bVar21 = bVar8;
      index_00 = index_00 + 1;
      if ((aJSON->fields)._stringLength <= (int)index_00) goto label_0407b581;
      goto label_0407ae34;
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    pMVar18 = extraout_RDX;
label_0407b581:
    if ((*(byte *)((long)register0x00000020 + -0x60) & 1) != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b649;
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b651;
      __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
      puVar20 = &"JSON Parse: Quotation marks seems to be messed up.";
      goto label_0407b65b;
    }
    pSVar14 = *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x58);
    uVar6 = *(ulong *)((long)register0x00000020 + -0x50);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5ae;
      il2cpp_runtime_helper_02337ed0();
      pMVar18 = extraout_RDX_23;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5b8;
    bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar14,(Il2CppObject *)0x0,pMVar18);
    if ((char)bVar12 == '\0') {
      return pSVar14;
    }
    if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
    pMVar18 = (__this->klass->vtable)._3_ToString.method;
    pIVar7 = (__this->klass->vtable)._3_ToString.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5d4;
    pSVar16 = (System_String_o *)(*pIVar7)(__this,pMVar18);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x407b5e8;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (MethodInfo *)(ulong)((byte)uVar6 & 1);
    unaff_R12 = *(undefined8 *)((long)register0x00000020 + -0x28);
    unaff_R13 = *(undefined8 *)((long)register0x00000020 + -0x20);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x18);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x30);
    pMVar18 = unaff_RBP;
    aJSON = pSVar16;
    if (g_data_057ac350 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa56;
      il2cpp_runtime_helper_023445d0(&"null");
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa62;
      il2cpp_runtime_helper_023445d0(&"false");
      ppSVar19 = &"true";
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aa6e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac350 = '\x01';
      aJSON = (System_String_o *)ppSVar19;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    if ((uVar6 & 1) != 0) goto label_0407ab64;
    if (pSVar16 != (System_String_o *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407acb3;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
  } while( true );
  if ((pSVar16->fields)._stringLength < 6) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab96;
    a = System_String__ToLower(pSVar16,(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abad;
    bVar12 = System_String__op_Equality(a,"false",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abc5;
      bVar12 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac84;
        bVar12 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          pMVar18 = TypeInfo_JSONNull;
          if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aca4;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aca9;
          pSVar14 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet(pMVar18);
          return pSVar14;
        }
        goto label_0407aa9a;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abe1;
    bVar12 = System_String__op_Equality(a,"true",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407abfb;
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac349 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac10;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
      g_data_057ac349 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac26;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
    if (g_data_057ac393 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac393 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac56;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ac60;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(char *)&pIVar13[1].klass = (char)bVar12;
  }
  else {
label_0407aa9a:
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aab2;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aab9;
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pMVar18 = (MethodInfo *)&g_data_000000a7;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aad1;
    bVar12 = System_Double__TryParse_3c9a570
                       (pSVar16,0xa7,(System_IFormatProvider_o *)provider,
                        (double *)((long)register0x00000020 + -0x20),(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_0407ab64:
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab7c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab84;
      pIVar13 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit(pSVar16,pMVar18);
    }
    else {
      pIVar2 = *(Il2CppClass **)((long)register0x00000020 + -0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407aaf6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac33f == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab0b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
        g_data_057ac33f = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab21;
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
      if (g_data_057ac38e == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab39;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac38e = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab51;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x407ab5b;
      System_Object___ctor(pIVar13,(MethodInfo *)0x0);
      pIVar13[1].klass = pIVar2;
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)pIVar13;
}


