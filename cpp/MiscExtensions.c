// Type: MiscExtensions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MiscExtensions.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/MiscExtensions.cs
// --------------------------------

// MiscExtensions.<>c$$.cctor
// il2cpp: void MiscExtensions___c___cctor (const MethodInfo* method);
// 0x4067480

void MiscExtensions___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac2c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2c3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// MiscExtensions.<>c$$.ctor
// il2cpp: void MiscExtensions___c___ctor (MiscExtensions___c_o* __this, const MethodInfo* method);
// 0x40674f0

void MiscExtensions___c___ctor(MiscExtensions___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MiscExtensions.<>c$$<ReplaceNamedColorTags>b__15_0
// il2cpp: System_String_o* MiscExtensions___c___ReplaceNamedColorTags_b__15_0 (MiscExtensions___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x4067500

System_String_o *
MiscExtensions___c___ReplaceNamedColorTags_b__15_0
          (MiscExtensions___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_Text_RegularExpressions_Match_o *__this_01;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar2;
  ExitGames_Client_Photon_Hashtable_o *pEVar3;
  undefined4 extraout_var;
  MethodInfo *extraout_RDX;
  System_String_o *value;
  System_Text_RegularExpressions_Match_o *key;
  MethodInfo *method_00;
  System_String_o **ppSVar4;
  
  key = match;
  if (g_data_057ac2c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    ppSVar4 = &">";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2c4 = '\x01';
    method = extraout_RDX;
    __this = (MiscExtensions___c_o *)ppSVar4;
  }
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    key = (System_Text_RegularExpressions_Match_o *)(match->klass->vtable)._5_get_Groups.method;
    __this = (MiscExtensions___c_o *)match;
    __this_01 = (System_Text_RegularExpressions_Match_o *)
                (*(match->klass->vtable)._5_get_Groups.methodPtr)(match,key,method);
    if (__this_01 != (System_Text_RegularExpressions_Match_o *)0x0) {
      key = (System_Text_RegularExpressions_Match_o *)0x1;
      __this_02 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__get_Item
                            ((System_Text_RegularExpressions_GroupCollection_o *)__this_01,1,(MethodInfo *)0x0
                            );
      __this = (MiscExtensions___c_o *)__this_01;
      if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = MiscExtensions__ResolveNamedColorHex(pSVar2,method_00);
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                             ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
          return pSVar2;
        }
        pSVar2 = System_String__Concat_3af7150("<color=#",pSVar2,">",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    g_data_057ac2c5 = '\x01';
  }
  if (g_data_057ac2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057ac2c7 = '\x01';
  }
  if ((System_Text_RegularExpressions_Match_o *)__this == (System_Text_RegularExpressions_Match_o *)0x0)
  goto label_0406770b;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (((System_Text_RegularExpressions_Match_o *)__this)->fields)._Name_k__BackingField;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406770b;
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (__this_00,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 == '\0') goto label_04067710;
  pEVar3 = (ExitGames_Client_Photon_Hashtable_o *)
           (((System_Text_RegularExpressions_Match_o *)__this)->fields)._Name_k__BackingField;
  if (pEVar3 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_0406770b;
  pSVar2 = (System_String_o *)
           ExitGames_Client_Photon_Hashtable__get_Item(pEVar3,(Il2CppObject *)key,(MethodInfo *)0x0);
  if (pSVar2 != value) {
    do {
      pEVar3 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
      ExitGames_Client_Photon_Hashtable___ctor(pEVar3,(MethodInfo *)0x0);
      if (pEVar3 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pEVar3,(Il2CppObject *)key,
                   (Il2CppObject *)value,MethodInfo_Void_Add);
        bVar1 = Photon_Realtime_Player__SetCustomProperties
                          ((Photon_Realtime_Player_o *)__this,pEVar3,
                           (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                           (MethodInfo *)0x0);
        return (System_String_o *)CONCAT44(extraout_var,bVar1);
      }
label_0406770b:
      il2cpp_runtime_helper_022b2c90();
label_04067710:
      pSVar2 = (System_String_o *)0x0;
    } while (value != (System_String_o *)0x0);
  }
  return pSVar2;
}


// MiscExtensions$$ResolveNamedColorHex
// il2cpp: System_String_o* MiscExtensions__ResolveNamedColorHex (System_String_o* name, const MethodInfo* method);
// 0x4064b20

System_String_o * MiscExtensions__ResolveNamedColorHex(System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_c *pSVar6;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Object_array *pSVar9;
  char cVar10;
  uint16_t c;
  bool_conflict bVar11;
  Il2CppClass *pIVar12;
  System_String_o *pSVar13;
  System_String_array *evaluator;
  undefined4 extraout_var;
  System_String_array *values;
  uint *puVar14;
  float *pfVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_List_object__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppMethodPointer *ppIVar17;
  System_Text_RegularExpressions_Capture_o *__this_03;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  UnityEngine_GameObject_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *pMVar23;
  System_Text_RegularExpressions_Regex_o *pSVar24;
  long lVar25;
  undefined8 unaff_R12;
  UnityEngine_GameObject_o **ppUVar26;
  MethodInfo *method_01;
  uint uVar27;
  int iVar28;
  System_String_o **value;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  int32_t in_XMM1_Da;
  undefined1 auVar32 [12];
  uint16_t uStack_12e;
  uint uStack_12c;
  System_Collections_IEnumerator_o *pSStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  UnityEngine_GameObject_o **ppUStack_110;
  System_String_o *pSStack_108;
  Il2CppClass *pIStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  System_String_o *pSStack_e8;
  MethodInfo *pMStack_e0;
  uint16_t uStack_ca;
  System_String_array *pSStack_c8;
  MethodInfo *pMStack_c0;
  Il2CppMethodPointer pIStack_70;
  System_String_array *pSStack_60;
  System_Text_RegularExpressions_Regex_o *pSStack_58;
  Il2CppClass *pIStack_50;
  Il2CppClass *pIStack_48;
  Il2CppType *pIStack_40;
  Il2CppClass *local_18;
  
  if (g_data_057ac2b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057ac2b1 = '\x01';
  }
  local_18 = (Il2CppClass *)0x0;
  bVar11 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  pIVar12 = (Il2CppClass *)0x0;
  if ((char)bVar11 == '\0') {
    plVar21 = &TypeInfo_MiscExtensions;
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x68);
    value = (System_String_o **)(Il2CppClass *)0x0;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04064c03:
      il2cpp_runtime_helper_022b2c90();
      pIStack_40 = (Il2CppType *)plVar21;
      if (g_data_057ac2b2 == '\0') {
        pIStack_48 = (Il2CppClass *)0x4064c31;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MatchEvaluator);
        pIStack_48 = (Il2CppClass *)0x4064c3d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        pIStack_48 = (Il2CppClass *)0x4064c49;
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_ReplaceNamedColorTags_b__15_0);
        pIStack_48 = (Il2CppClass *)0x4064c55;
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac2b2 = '\x01';
      }
      pIStack_48 = (Il2CppClass *)0x4064c66;
      bVar11 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return (System_String_o *)(Il2CppClass *)value;
      }
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        pIStack_48 = (Il2CppClass *)0x4064c8f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar24 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x60);
      ppUVar26 = &TypeInfo_c;
      if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
        pIStack_48 = (Il2CppClass *)0x4064ce8;
        il2cpp_runtime_helper_02337ed0();
        evaluator = *(System_String_array **)(TypeInfo_c[7].fields.m_CachedPtr + 8);
      }
      else {
        evaluator = *(System_String_array **)(TypeInfo_c[7].fields.m_CachedPtr + 8);
      }
      __this_04 = TypeInfo_c;
      if (evaluator == (System_String_array *)0x0) {
        if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
          pIStack_48 = (Il2CppClass *)0x4064d0a;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = *(undefined8 *)TypeInfo_c[7].fields.m_CachedPtr;
        pIStack_48 = (Il2CppClass *)0x4064d27;
        evaluator = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MatchEvaluator);
        pIStack_48 = (Il2CppClass *)0x4064d41;
        System_Text_RegularExpressions_MatchEvaluator___ctor();
        lVar25 = TypeInfo_c[7].fields.m_CachedPtr;
        *(System_String_array **)(lVar25 + 8) = evaluator;
        __this_04 = (UnityEngine_GameObject_o *)(lVar25 + 8);
        pIStack_48 = (Il2CppClass *)0x4064d5c;
        il2cpp_runtime_helper_022b4080();
      }
      if (pSVar24 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar13 = System_Text_RegularExpressions_Regex__Replace_4906bf0
                            (pSVar24,(System_String_o *)value,
                             (System_Text_RegularExpressions_MatchEvaluator_o *)evaluator,(MethodInfo *)0x0);
        return pSVar13;
      }
      pIStack_48 = (Il2CppClass *)0x4064d6a;
      pIStack_48 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
      if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
        bVar11 = UnityEngine_GameObject__get_activeInHierarchy(__this_04,(MethodInfo *)0x0);
        return (System_String_o *)CONCAT44(extraout_var,bVar11);
      }
      pIStack_50 = (Il2CppClass *)0x4064d83;
      pIStack_70 = (Il2CppMethodPointer)il2cpp_runtime_helper_022b2c90();
      pMVar23 = (MethodInfo *)&pIStack_70;
      pSStack_60 = evaluator;
      pSStack_58 = pSVar24;
      pIStack_50 = (Il2CppClass *)value;
      if (g_data_057ac2b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&"(");
        il2cpp_runtime_helper_023445d0(&")");
        il2cpp_runtime_helper_023445d0(&",");
        g_data_057ac2b3 = '\x01';
      }
      method_00 = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
      method_01 = (MethodInfo *)0x0;
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "(";
          fVar29 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
          pSVar13 = System_Single__ToString(fVar29,(MethodInfo *)&pIStack_70);
          method_00 = pMVar23;
          if (1 < (uint)values->max_length) {
            method_00 = (MethodInfo *)(values->m_Items + 1);
            values->m_Items[1] = pSVar13;
            il2cpp_runtime_helper_022b4080(method_00,pSVar13);
            if (2 < (uint)values->max_length) {
              value = &",";
              values->m_Items[2] = ",";
              fVar29 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              method_00 = (MethodInfo *)((long)&pIStack_70 + 4);
              pSVar13 = System_Single__ToString(fVar29,method_00);
              if (3 < (uint)values->max_length) {
                method_00 = (MethodInfo *)(values->m_Items + 3);
                values->m_Items[3] = pSVar13;
                il2cpp_runtime_helper_022b4080(method_00,pSVar13);
                if (4 < (uint)values->max_length) {
                  method_01 = (MethodInfo *)&stack0xffffffffffffff98;
                  values->m_Items[4] = ",";
                  fVar29 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  method_00 = method_01;
                  pSVar13 = System_Single__ToString(fVar29,method_01);
                  if (5 < (uint)values->max_length) {
                    method_00 = (MethodInfo *)(values->m_Items + 5);
                    values->m_Items[5] = pSVar13;
                    il2cpp_runtime_helper_022b4080(method_00,pSVar13);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ")";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar13 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                      return pSVar13;
                    }
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        evaluator = values;
      }
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (method_00 == (MethodInfo *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (method_00->methodPointer == g_data_057b9bb8) {
          il2cpp_runtime_helper_02305440();
          return pSVar13;
        }
        if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bf0 + 0x40)) {
          il2cpp_runtime_helper_02305440();
          return pSVar13;
        }
      }
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b2fd0();
      if (method_00 == (MethodInfo *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (method_00->methodPointer == g_data_057b9bb8) {
          il2cpp_runtime_helper_02305440();
          return pSVar13;
        }
        if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9be8 + 0x40)) {
          il2cpp_runtime_helper_02305440();
          return pSVar13;
        }
      }
      il2cpp_runtime_helper_022b2fd0();
      if (method_00 == (MethodInfo *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (method_00->methodPointer == g_data_057b9be8) {
          pfVar15 = (float *)il2cpp_runtime_helper_02305440();
          return (System_String_o *)(ulong)(uint)(int)*pfVar15;
        }
        if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bb8 + 0x40)) {
          puVar14 = (uint *)il2cpp_runtime_helper_02305440();
          return (System_String_o *)(ulong)*puVar14;
        }
      }
      uVar31 = il2cpp_runtime_helper_022b2fd0();
      fVar29 = (float)((ulong)uVar31 >> 0x20);
      fVar30 = (float)uVar31;
      if (g_data_057ac2b4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_float);
        g_data_057ac2b4 = '\x01';
      }
      pSVar13 = TypeInfo_float;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
      if (pSVar16 != (System_String_o *)0x0) {
        pSVar6 = pSVar16[1].klass;
        uVar27 = (uint)pSVar6;
        if (((uVar27 != 0) && (*(float *)&pSVar16[1].monitor = fVar30, uVar27 != 1)) &&
           (*(float *)((long)&pSVar16[1].monitor + 4) = fVar29, 2 < uVar27)) {
          pSVar16[1].fields._stringLength = in_XMM1_Da;
          if (1 < (int)uVar27) {
            uVar20 = (ulong)pSVar6 & 0xffffffff;
            if (fVar29 <= fVar30) {
              fVar29 = fVar30;
            }
            if (uVar20 == 2) {
              return pSVar16;
            }
            uVar19 = (ulong)(uVar27 - 2 & 3);
            if (uVar20 - 3 < 3) {
              lVar22 = 2;
            }
            else {
              lVar25 = 0;
              do {
                lVar22 = lVar25;
                fVar30 = (float)(&pSVar16[1].fields._stringLength)[lVar22];
                if (fVar30 <= fVar29) {
                  fVar30 = fVar29;
                }
                fVar29 = *(float *)(&pSVar16[1].fields._firstChar + lVar22 * 2);
                if (fVar29 <= fVar30) {
                  fVar29 = fVar30;
                }
                fVar30 = *(float *)((long)&pSVar16[2].klass + lVar22 * 4);
                if (fVar30 <= fVar29) {
                  fVar30 = fVar29;
                }
                fVar29 = *(float *)((long)&pSVar16[2].klass + lVar22 * 4 + 4);
                if (fVar29 <= fVar30) {
                  fVar29 = fVar30;
                }
                lVar25 = lVar22 + 4;
              } while ((uVar20 - uVar19) + -2 != lVar22 + 4);
              lVar22 = lVar22 + 6;
            }
            if (uVar19 != 0) {
              pSVar16 = (System_String_o *)((long)&pSVar16[1].monitor + lVar22 * 4);
              uVar20 = 0;
              do {
                fVar30 = *(float *)((long)&pSVar16->klass + uVar20 * 4);
                if (fVar30 <= fVar29) {
                  fVar30 = fVar29;
                }
                uVar20 = uVar20 + 1;
                fVar29 = fVar30;
              } while (uVar19 != uVar20);
            }
          }
          return pSVar16;
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      uStack_ca = 0;
      pMStack_e0 = (MethodInfo *)0x4065181;
      pSVar16 = pSVar13;
      pSStack_c8 = evaluator;
      pMStack_c0 = method_01;
      bVar11 = System_String__op_Equality
                         (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0)
      ;
      if ((char)bVar11 == '\0') {
        if (pSVar13 == (System_String_o *)0x0) {
          pMStack_e0 = (MethodInfo *)0x4065213;
          uStack_f0 = il2cpp_runtime_helper_022b2c90();
          pSStack_e8 = pSVar13;
          pMStack_e0 = method_01;
          if (g_data_057ac2b5 == '\0') {
            puStack_f8 = (undefined8 *)0x406527a;
            il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
            puStack_f8 = (undefined8 *)0x4065286;
            il2cpp_runtime_helper_023445d0(&"");
            g_data_057ac2b5 = '\x01';
            iVar28 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
          }
          else {
            iVar28 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
          }
          if (iVar28 == 0) {
            puStack_f8 = (undefined8 *)0x40652a5;
            il2cpp_runtime_helper_02337ed0();
            pSVar24 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
          }
          else {
            pSVar24 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
          }
          if (pSVar24 != (System_Text_RegularExpressions_Regex_o *)0x0) {
            pSVar13 = System_Text_RegularExpressions_Regex__Replace_4906910
                                (pSVar24,pSVar16,"",(MethodInfo *)0x0);
            return pSVar13;
          }
          puStack_f8 = (undefined8 *)0x40652bd;
          il2cpp_runtime_helper_022b2c90();
          puStack_f8 = &g_data_057b9b70;
          ppUStack_110 = &TypeInfo_c;
          plStack_120 = &TypeInfo_MiscExtensions;
          uStack_118 = unaff_R12;
          pSStack_108 = pSVar16;
          pIStack_100 = (Il2CppClass *)value;
          if (g_data_057ac2b6 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
            il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
            g_data_057ac2b6 = '\x01';
          }
          uStack_12e = 0;
          __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
          if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
             (__this_02 = System_Text_RegularExpressions_Regex__Matches_4906660
                                    (__this_00,(System_String_o *)pSVar24,(MethodInfo *)0x0),
             __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
            uVar20 = 0;
            pSStack_128 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                    (__this_02,(MethodInfo *)0x0);
            if (pSStack_128 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
            uVar27 = 0;
label_040653fb:
            pSVar7 = pSStack_128->klass;
            uVar3._0_1_ = (pSVar7->_2).rank;
            uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
            uStack_12c = uVar27;
            if ((ulong)uVar3 != 0) {
              pIVar8 = (pSVar7->_1).interfaceOffsets;
              lVar25 = 0;
              do {
                if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IEnumerator) {
                  ppIVar17 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar25)].methodPtr;
                  goto label_04065463;
                }
                lVar25 = lVar25 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar25);
            }
            ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_128,TypeInfo_IEnumerator,0);
label_04065463:
            cVar10 = (**ppIVar17)(pSStack_128,(MethodInfo *)ppIVar17[1]);
            if (cVar10 == '\0') {
              iVar28 = 6;
              ppUVar26 = (UnityEngine_GameObject_o **)0x0;
              goto label_04065677;
            }
            pSVar7 = pSStack_128->klass;
            uVar4._0_1_ = (pSVar7->_2).rank;
            uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar8 = (pSVar7->_1).interfaceOffsets;
              lVar25 = 0;
              do {
                if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IEnumerator) {
                  ppIVar17 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar25) + 1].methodPtr;
                  goto label_040654e8;
                }
                lVar25 = lVar25 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar25);
            }
            ppIVar17 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_128,TypeInfo_IEnumerator,1);
label_040654e8:
            __this_03 = (System_Text_RegularExpressions_Capture_o *)
                        (**ppIVar17)(pSStack_128,(MethodInfo *)ppIVar17[1]);
            ppUVar26 = (UnityEngine_GameObject_o **)&MethodInfo_Void_Add;
            if (__this_03 != (System_Text_RegularExpressions_Capture_o *)0x0) {
              bVar2 = (TypeInfo_Match->_2).naturalAligment;
              if (((__this_03->klass->_2).naturalAligment < bVar2) ||
                 ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
                il2cpp_runtime_helper_022b2fd0(__this_03);
                goto label_04065803;
              }
              iVar28 = (__this_03->fields)._Index_k__BackingField;
              if (pSVar24 == (System_Text_RegularExpressions_Regex_o *)0x0) {
                if ((int)uVar27 < iVar28) goto label_0406581a;
              }
              else if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                if ((int)uVar27 < iVar28) goto label_04065824;
              }
              else if ((int)uVar27 < iVar28) {
                do {
                  uStack_12e = System_String__get_Chars((System_String_o *)pSVar24,uVar27,(MethodInfo *)0x0);
                  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar13 = System_Char__ToString((uint16_t)&uStack_12e,(MethodInfo *)0x0);
                  lVar25 = MethodInfo_Void_Add;
                  piVar1 = &(__this_01->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (__this_01->fields)._items;
                  if (pSVar9 == (System_Object_array *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_040657fb;
                  }
                  uVar5 = (__this_01->fields)._size;
                  if (uVar5 < (uint)pSVar9->max_length) {
                    (__this_01->fields)._size = uVar5 + 1;
                    pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pSVar13;
                    il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_01,(Il2CppObject *)pSVar13,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar27 = uVar27 + 1;
                } while ((int)uVar27 < (__this_03->fields)._Index_k__BackingField);
              }
              pSVar13 = System_Text_RegularExpressions_Capture__get_Value(__this_03,(MethodInfo *)0x0);
              lVar25 = MethodInfo_Void_Add;
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (__this_01->fields)._items;
              if (pSVar9 == (System_Object_array *)0x0) goto label_04065815;
              uVar27 = (__this_01->fields)._size;
              if (uVar27 < (uint)pSVar9->max_length) {
                (__this_01->fields)._size = uVar27 + 1;
                pSVar9->m_Items[(int)uVar27] = (Il2CppObject *)pSVar13;
                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar27,pSVar13);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,(Il2CppObject *)pSVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
              uVar27 = (__this_03->fields)._Length_k__BackingField +
                       (__this_03->fields)._Index_k__BackingField;
              goto label_040653fb;
            }
label_04065803:
            il2cpp_runtime_helper_022b2c90();
label_04065808:
            uStack_12c = 0;
            il2cpp_runtime_helper_022b2c90();
label_04065815:
            il2cpp_runtime_helper_022b2c90();
label_0406581a:
            il2cpp_runtime_helper_022b2c90();
          }
label_0406581f:
          do {
            il2cpp_runtime_helper_022b2c90();
label_04065824:
            uStack_12e = System_String__get_Chars((System_String_o *)pSVar24,uStack_12c,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar20 = 0;
            System_Char__ToString((uint16_t)&uStack_12e,(MethodInfo *)0x0);
            il2cpp_runtime_helper_022b2c90();
label_04065864:
            il2cpp_runtime_helper_022b2c90();
label_04065869:
            il2cpp_runtime_helper_022fefe0(ppUVar26);
label_04065871:
            uStack_12e = System_String__get_Chars
                                   ((System_String_o *)pSVar24,(int32_t)uVar20,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            System_Char__ToString((uint16_t)&uStack_12e,(MethodInfo *)0x0);
            auVar32 = il2cpp_runtime_helper_022b2c90();
            uStack_12c = 0;
            iVar28 = 0;
            if (auVar32._8_4_ != 1) {
              plVar21 = (long *)il2cpp_runtime_helper_023051f0(pSStack_128,TypeInfo_IDisposable);
              if (plVar21 == (long *)0x0) goto label_04065a06;
              lVar25 = *plVar21;
              if ((ulong)*(ushort *)(lVar25 + 0x12e) == 0) goto label_040659df;
              lVar22 = 0;
              goto label_040659d0;
            }
            puVar18 = (undefined8 *)__cxa_begin_catch(auVar32._0_8_);
            ppUVar26 = (UnityEngine_GameObject_o **)*puVar18;
            __cxa_end_catch();
label_04065677:
            uVar20 = TypeInfo_IDisposable;
            plVar21 = (long *)il2cpp_runtime_helper_023051f0();
            if (plVar21 != (long *)0x0) {
              lVar25 = *plVar21;
              if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
                lVar22 = 0;
                do {
                  if (*(ulong *)(*(long *)(lVar25 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
                    puVar18 = (undefined8 *)
                              (lVar25 + (long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                    goto label_040656ed;
                  }
                  lVar22 = lVar22 + 0x10;
                } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar22);
              }
              puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040656ed:
              uVar20 = puVar18[1];
              (*(code *)*puVar18)(plVar21);
            }
            if (ppUVar26 != (UnityEngine_GameObject_o **)0x0) goto label_04065869;
            if ((iVar28 != 6) && (iVar28 != 0)) {
              return (System_String_o *)__this_01;
            }
            if (pSVar24 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
            iVar28 = (int)(pSVar24->fields).internalMatchTimeout.fields._ticks;
            uVar20 = (ulong)uStack_12c;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
              if (iVar28 <= (int)uStack_12c) {
                return (System_String_o *)0x0;
              }
              goto label_04065871;
            }
            if (iVar28 <= (int)uStack_12c) {
              return (System_String_o *)__this_01;
            }
            while( true ) {
              uStack_12e = System_String__get_Chars
                                     ((System_String_o *)pSVar24,(int32_t)uVar20,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = System_Char__ToString((uint16_t)&uStack_12e,(MethodInfo *)0x0);
              lVar25 = MethodInfo_Void_Add;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (__this_01->fields)._items;
              ppUVar26 = (UnityEngine_GameObject_o **)&MethodInfo_Void_Add;
              if (pSVar9 == (System_Object_array *)0x0) break;
              uVar27 = (__this_01->fields)._size;
              if (uVar27 < (uint)pSVar9->max_length) {
                (__this_01->fields)._size = uVar27 + 1;
                pSVar9->m_Items[(int)uVar27] = (Il2CppObject *)pSVar13;
                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar27,pSVar13);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,(Il2CppObject *)pSVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
              uVar27 = (int32_t)uVar20 + 1;
              uVar20 = (ulong)uVar27;
              if ((int)(pSVar24->fields).internalMatchTimeout.fields._ticks <= (int)uVar27) {
                return (System_String_o *)__this_01;
              }
            }
          } while( true );
        }
        if ((pSVar13->fields)._stringLength < 2) {
          pMStack_e0 = (MethodInfo *)0x406519e;
          pSVar13 = System_String__ToUpper(pSVar13,(MethodInfo *)0x0);
        }
        else {
          pMStack_e0 = (MethodInfo *)0x40651ac;
          c = System_String__get_Chars(pSVar13,0,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            pMStack_e0 = (MethodInfo *)0x40651c4;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_e0 = (MethodInfo *)0x40651cf;
          uStack_ca = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
          pMStack_e0 = (MethodInfo *)0x40651e0;
          pSVar16 = System_Char__ToString((uint16_t)&uStack_ca,(MethodInfo *)0x0);
          pMStack_e0 = (MethodInfo *)0x40651f2;
          pSVar13 = System_String__Substring(pSVar13,1,(MethodInfo *)0x0);
          pMStack_e0 = (MethodInfo *)0x40651ff;
          pSVar13 = System_String__Concat_3ae5ba0(pSVar16,pSVar13,(MethodInfo *)0x0);
        }
      }
      return pSVar13;
    }
    bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (__this,(Il2CppObject *)name,(Il2CppObject **)&local_18,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar11 == '\0') {
      pIVar12 = (Il2CppClass *)0x0;
    }
    else {
      value = (System_String_o **)local_18;
      if (local_18 == (Il2CppClass *)0x0) goto label_04064c03;
      bVar11 = System_String__StartsWith((System_String_o *)local_18,"#",(MethodInfo *)0x0);
      pIVar12 = local_18;
      if ((char)bVar11 != '\0') {
        plVar21 = (long *)0x0;
        if (local_18 == (Il2CppClass *)0x0) goto label_04064c03;
        pIVar12 = (Il2CppClass *)System_String__Substring((System_String_o *)local_18,1,(MethodInfo *)0x0);
      }
    }
  }
  return (System_String_o *)pIVar12;
  while (lVar22 = lVar22 + 0x10, (ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar22) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar25 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar25 + (long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar21,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar18)(plVar21,puVar18[1]);
label_04065a06:
  _Unwind_Resume(auVar32._0_8_);
}


// MiscExtensions$$ReplaceNamedColorTags
// il2cpp: System_String_o* MiscExtensions__ReplaceNamedColorTags (System_String_o* input, const MethodInfo* method);
// 0x4064c10

System_String_o * MiscExtensions__ReplaceNamedColorTags(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_String_c *pSVar6;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Object_array *pSVar9;
  char cVar10;
  uint16_t c;
  bool_conflict bVar11;
  System_String_o *pSVar12;
  System_String_array *evaluator;
  undefined4 extraout_var;
  System_String_array *values;
  uint *puVar13;
  float *pfVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar16;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  UnityEngine_GameObject_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *pMVar22;
  System_Text_RegularExpressions_Regex_o *pSVar23;
  long lVar24;
  undefined8 unaff_R12;
  UnityEngine_GameObject_o **ppUVar25;
  MethodInfo *method_01;
  uint uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  int32_t in_XMM1_Da;
  undefined1 auVar31 [12];
  uint16_t uStack_116;
  uint uStack_114;
  System_Collections_IEnumerator_o *pSStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  UnityEngine_GameObject_o **ppUStack_f8;
  System_String_o *pSStack_f0;
  System_String_o *pSStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  System_String_o *pSStack_d0;
  MethodInfo *pMStack_c8;
  uint16_t uStack_b2;
  System_String_array *pSStack_b0;
  MethodInfo *pMStack_a8;
  undefined1 auStack_58 [8];
  System_String_array *pSStack_48;
  System_Text_RegularExpressions_Regex_o *pSStack_40;
  Il2CppClass *pIStack_38;
  Il2CppClass *pIStack_30;
  
  if (g_data_057ac2b2 == '\0') {
    pIStack_30 = (Il2CppClass *)0x4064c31;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MatchEvaluator);
    pIStack_30 = (Il2CppClass *)0x4064c3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    pIStack_30 = (Il2CppClass *)0x4064c49;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ReplaceNamedColorTags_b__15_0);
    pIStack_30 = (Il2CppClass *)0x4064c55;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2b2 = '\x01';
  }
  pIStack_30 = (Il2CppClass *)0x4064c66;
  bVar11 = System_String__IsNullOrEmpty(input,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return input;
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    pIStack_30 = (Il2CppClass *)0x4064c8f;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar23 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x60);
  ppUVar25 = &TypeInfo_c;
  if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
    pIStack_30 = (Il2CppClass *)0x4064ce8;
    il2cpp_runtime_helper_02337ed0();
    evaluator = *(System_String_array **)(TypeInfo_c[7].fields.m_CachedPtr + 8);
  }
  else {
    evaluator = *(System_String_array **)(TypeInfo_c[7].fields.m_CachedPtr + 8);
  }
  __this_03 = TypeInfo_c;
  if (evaluator == (System_String_array *)0x0) {
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
      pIStack_30 = (Il2CppClass *)0x4064d0a;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = *(undefined8 *)TypeInfo_c[7].fields.m_CachedPtr;
    pIStack_30 = (Il2CppClass *)0x4064d27;
    evaluator = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MatchEvaluator);
    pIStack_30 = (Il2CppClass *)0x4064d41;
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    lVar24 = TypeInfo_c[7].fields.m_CachedPtr;
    *(System_String_array **)(lVar24 + 8) = evaluator;
    __this_03 = (UnityEngine_GameObject_o *)(lVar24 + 8);
    pIStack_30 = (Il2CppClass *)0x4064d5c;
    il2cpp_runtime_helper_022b4080();
  }
  if (pSVar23 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar12 = System_Text_RegularExpressions_Regex__Replace_4906bf0
                        (pSVar23,input,(System_Text_RegularExpressions_MatchEvaluator_o *)evaluator,
                         (MethodInfo *)0x0);
    return pSVar12;
  }
  pIStack_30 = (Il2CppClass *)0x4064d6a;
  pIStack_30 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    bVar11 = UnityEngine_GameObject__get_activeInHierarchy(__this_03,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,bVar11);
  }
  pIStack_38 = (Il2CppClass *)0x4064d83;
  auStack_58 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  pMVar22 = (MethodInfo *)auStack_58;
  pSStack_48 = evaluator;
  pSStack_40 = pSVar23;
  pIStack_38 = (Il2CppClass *)input;
  if (g_data_057ac2b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac2b3 = '\x01';
  }
  method_00 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  method_01 = (MethodInfo *)0x0;
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      fVar28 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar12 = System_Single__ToString(fVar28,(MethodInfo *)auStack_58);
      method_00 = pMVar22;
      if (1 < (uint)values->max_length) {
        method_00 = (MethodInfo *)(values->m_Items + 1);
        values->m_Items[1] = pSVar12;
        il2cpp_runtime_helper_022b4080(method_00,pSVar12);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ",";
          fVar28 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          method_00 = (MethodInfo *)(auStack_58 + 4);
          pSVar12 = System_Single__ToString(fVar28,method_00);
          input = (System_String_o *)&",";
          if (3 < (uint)values->max_length) {
            method_00 = (MethodInfo *)(values->m_Items + 3);
            values->m_Items[3] = pSVar12;
            il2cpp_runtime_helper_022b4080(method_00,pSVar12);
            if (4 < (uint)values->max_length) {
              method_01 = (MethodInfo *)&stack0xffffffffffffffb0;
              values->m_Items[4] = ",";
              fVar28 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              method_00 = method_01;
              pSVar12 = System_Single__ToString(fVar28,method_01);
              if (5 < (uint)values->max_length) {
                method_00 = (MethodInfo *)(values->m_Items + 5);
                values->m_Items[5] = pSVar12;
                il2cpp_runtime_helper_022b4080(method_00,pSVar12);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = ")";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                  pSVar12 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  return pSVar12;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    evaluator = values;
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9bb8) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bf0 + 0x40)) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2fd0();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9bb8) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9be8 + 0x40)) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9be8) {
      pfVar14 = (float *)il2cpp_runtime_helper_02305440();
      return (System_String_o *)(ulong)(uint)(int)*pfVar14;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bb8 + 0x40)) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440();
      return (System_String_o *)(ulong)*puVar13;
    }
  }
  uVar30 = il2cpp_runtime_helper_022b2fd0();
  fVar28 = (float)((ulong)uVar30 >> 0x20);
  fVar29 = (float)uVar30;
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar12 = TypeInfo_float;
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (pSVar15 != (System_String_o *)0x0) {
    pSVar6 = pSVar15[1].klass;
    uVar26 = (uint)pSVar6;
    if (((uVar26 != 0) && (*(float *)&pSVar15[1].monitor = fVar29, uVar26 != 1)) &&
       (*(float *)((long)&pSVar15[1].monitor + 4) = fVar28, 2 < uVar26)) {
      pSVar15[1].fields._stringLength = in_XMM1_Da;
      if (1 < (int)uVar26) {
        uVar20 = (ulong)pSVar6 & 0xffffffff;
        if (fVar28 <= fVar29) {
          fVar28 = fVar29;
        }
        if (uVar20 == 2) {
          return pSVar15;
        }
        uVar19 = (ulong)(uVar26 - 2 & 3);
        if (uVar20 - 3 < 3) {
          lVar21 = 2;
        }
        else {
          lVar24 = 0;
          do {
            lVar21 = lVar24;
            fVar29 = (float)(&pSVar15[1].fields._stringLength)[lVar21];
            if (fVar29 <= fVar28) {
              fVar29 = fVar28;
            }
            fVar28 = *(float *)(&pSVar15[1].fields._firstChar + lVar21 * 2);
            if (fVar28 <= fVar29) {
              fVar28 = fVar29;
            }
            fVar29 = *(float *)((long)&pSVar15[2].klass + lVar21 * 4);
            if (fVar29 <= fVar28) {
              fVar29 = fVar28;
            }
            fVar28 = *(float *)((long)&pSVar15[2].klass + lVar21 * 4 + 4);
            if (fVar28 <= fVar29) {
              fVar28 = fVar29;
            }
            lVar24 = lVar21 + 4;
          } while ((uVar20 - uVar19) + -2 != lVar21 + 4);
          lVar21 = lVar21 + 6;
        }
        if (uVar19 != 0) {
          pSVar15 = (System_String_o *)((long)&pSVar15[1].monitor + lVar21 * 4);
          uVar20 = 0;
          do {
            fVar29 = *(float *)((long)&pSVar15->klass + uVar20 * 4);
            if (fVar29 <= fVar28) {
              fVar29 = fVar28;
            }
            uVar20 = uVar20 + 1;
            fVar28 = fVar29;
          } while (uVar19 != uVar20);
        }
      }
      return pSVar15;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_b2 = 0;
  pMStack_c8 = (MethodInfo *)0x4065181;
  pSVar15 = pSVar12;
  pSStack_b0 = evaluator;
  pMStack_a8 = method_01;
  bVar11 = System_String__op_Equality
                     (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    if (pSVar12 == (System_String_o *)0x0) {
      pMStack_c8 = (MethodInfo *)0x4065213;
      uStack_d8 = il2cpp_runtime_helper_022b2c90();
      pSStack_d0 = pSVar12;
      pMStack_c8 = method_01;
      if (g_data_057ac2b5 == '\0') {
        puStack_e0 = (undefined8 *)0x406527a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        puStack_e0 = (undefined8 *)0x4065286;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar27 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar27 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar27 == 0) {
        puStack_e0 = (undefined8 *)0x40652a5;
        il2cpp_runtime_helper_02337ed0();
        pSVar23 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        pSVar23 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (pSVar23 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar12 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (pSVar23,pSVar15,"",(MethodInfo *)0x0);
        return pSVar12;
      }
      puStack_e0 = (undefined8 *)0x40652bd;
      il2cpp_runtime_helper_022b2c90();
      puStack_e0 = &g_data_057b9b70;
      ppUStack_f8 = &TypeInfo_c;
      plStack_108 = &TypeInfo_MiscExtensions;
      uStack_100 = unaff_R12;
      pSStack_f0 = pSVar15;
      pSStack_e8 = input;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_116 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)pSVar23,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar20 = 0;
        pSStack_110 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                                (__this_01,(MethodInfo *)0x0);
        if (pSStack_110 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        uVar26 = 0;
label_040653fb:
        pSVar7 = pSStack_110->klass;
        uVar3._0_1_ = (pSVar7->_2).rank;
        uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
        uStack_114 = uVar26;
        if ((ulong)uVar3 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar24) == TypeInfo_IEnumerator) {
              ppIVar16 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar24)].methodPtr;
              goto label_04065463;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar24);
        }
        ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_110,TypeInfo_IEnumerator,0);
label_04065463:
        cVar10 = (**ppIVar16)(pSStack_110,(MethodInfo *)ppIVar16[1]);
        if (cVar10 == '\0') {
          iVar27 = 6;
          ppUVar25 = (UnityEngine_GameObject_o **)0x0;
          goto label_04065677;
        }
        pSVar7 = pSStack_110->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar24 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar24) == TypeInfo_IEnumerator) {
              ppIVar16 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar24) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar24);
        }
        ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_110,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar16)(pSStack_110,(MethodInfo *)ppIVar16[1]);
        ppUVar25 = (UnityEngine_GameObject_o **)&MethodInfo_Void_Add;
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar27 = (__this_02->fields)._Index_k__BackingField;
          if (pSVar23 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar26 < iVar27) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar26 < iVar27) goto label_04065824;
          }
          else if ((int)uVar26 < iVar27) {
            do {
              uStack_116 = System_String__get_Chars((System_String_o *)pSVar23,uVar26,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar12 = System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
              lVar24 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (__this_00->fields)._items;
              if (pSVar9 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar9->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pSVar12;
                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar12,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
              uVar26 = uVar26 + 1;
            } while ((int)uVar26 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar12 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar24 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_Object_array *)0x0) goto label_04065815;
          uVar26 = (__this_00->fields)._size;
          if (uVar26 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar26 + 1;
            pSVar9->m_Items[(int)uVar26] = (Il2CppObject *)pSVar12;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar26,pSVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
          uVar26 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_114 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_116 = System_String__get_Chars((System_String_o *)pSVar23,uStack_114,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar20 = 0;
        System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(ppUVar25);
label_04065871:
        uStack_116 = System_String__get_Chars((System_String_o *)pSVar23,(int32_t)uVar20,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
        auVar31 = il2cpp_runtime_helper_022b2c90();
        uStack_114 = 0;
        iVar27 = 0;
        if (auVar31._8_4_ != 1) {
          plVar17 = (long *)il2cpp_runtime_helper_023051f0(pSStack_110,TypeInfo_IDisposable);
          if (plVar17 == (long *)0x0) goto label_04065a06;
          lVar24 = *plVar17;
          if ((ulong)*(ushort *)(lVar24 + 0x12e) == 0) goto label_040659df;
          lVar21 = 0;
          goto label_040659d0;
        }
        puVar18 = (undefined8 *)__cxa_begin_catch(auVar31._0_8_);
        ppUVar25 = (UnityEngine_GameObject_o **)*puVar18;
        __cxa_end_catch();
label_04065677:
        uVar20 = TypeInfo_IDisposable;
        plVar17 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar17 != (long *)0x0) {
          lVar24 = *plVar17;
          if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar24 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                puVar18 = (undefined8 *)
                          (lVar24 + (long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar21);
          }
          puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040656ed:
          uVar20 = puVar18[1];
          (*(code *)*puVar18)(plVar17);
        }
        if (ppUVar25 != (UnityEngine_GameObject_o **)0x0) goto label_04065869;
        if ((iVar27 != 6) && (iVar27 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (pSVar23 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar27 = (int)(pSVar23->fields).internalMatchTimeout.fields._ticks;
        uVar20 = (ulong)uStack_114;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar27 <= (int)uStack_114) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar27 <= (int)uStack_114) {
          return (System_String_o *)__this_00;
        }
        while( true ) {
          uStack_116 = System_String__get_Chars((System_String_o *)pSVar23,(int32_t)uVar20,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = System_Char__ToString((uint16_t)&uStack_116,(MethodInfo *)0x0);
          lVar24 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          ppUVar25 = (UnityEngine_GameObject_o **)&MethodInfo_Void_Add;
          if (pSVar9 == (System_Object_array *)0x0) break;
          uVar26 = (__this_00->fields)._size;
          if (uVar26 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar26 + 1;
            pSVar9->m_Items[(int)uVar26] = (Il2CppObject *)pSVar12;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar26,pSVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
          uVar26 = (int32_t)uVar20 + 1;
          uVar20 = (ulong)uVar26;
          if ((int)(pSVar23->fields).internalMatchTimeout.fields._ticks <= (int)uVar26) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((pSVar12->fields)._stringLength < 2) {
      pMStack_c8 = (MethodInfo *)0x406519e;
      pSVar12 = System_String__ToUpper(pSVar12,(MethodInfo *)0x0);
    }
    else {
      pMStack_c8 = (MethodInfo *)0x40651ac;
      c = System_String__get_Chars(pSVar12,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        pMStack_c8 = (MethodInfo *)0x40651c4;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_c8 = (MethodInfo *)0x40651cf;
      uStack_b2 = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pMStack_c8 = (MethodInfo *)0x40651e0;
      pSVar15 = System_Char__ToString((uint16_t)&uStack_b2,(MethodInfo *)0x0);
      pMStack_c8 = (MethodInfo *)0x40651f2;
      pSVar12 = System_String__Substring(pSVar12,1,(MethodInfo *)0x0);
      pMStack_c8 = (MethodInfo *)0x40651ff;
      pSVar12 = System_String__Concat_3ae5ba0(pSVar15,pSVar12,(MethodInfo *)0x0);
    }
  }
  return pSVar12;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar21) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar24 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar24 + (long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
label_04065a06:
  _Unwind_Resume(auVar31._0_8_);
}


// MiscExtensions$$GetActive
// il2cpp: bool MiscExtensions__GetActive (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x4064d70

bool_conflict MiscExtensions__GetActive(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_array *values;
  System_String_o *pSVar11;
  bool_conflict *pbVar12;
  float *pfVar13;
  long lVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar16;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  System_String_array *unaff_RBX;
  long lVar21;
  MethodInfo *method_00;
  MethodInfo *pMVar22;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar23;
  long *unaff_R13;
  MethodInfo *unaff_R14;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 in_XMM1_Da;
  undefined1 auVar29 [12];
  uint16_t uStack_ee;
  uint uStack_ec;
  System_Collections_IEnumerator_o *pSStack_e8;
  long *plStack_e0;
  uint16_t uStack_8a;
  System_String_array *pSStack_88;
  MethodInfo *pMStack_80;
  undefined1 auStack_30 [8];
  
  if (target != (UnityEngine_GameObject_o *)0x0) {
    bVar10 = UnityEngine_GameObject__get_activeInHierarchy(target,(MethodInfo *)0x0);
    return bVar10;
  }
  auStack_30 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  pMVar22 = (MethodInfo *)auStack_30;
  if (g_data_057ac2b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac2b3 = '\x01';
  }
  method_00 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      fVar26 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar11 = System_Single__ToString(fVar26,(MethodInfo *)auStack_30);
      method_00 = pMVar22;
      if (1 < (uint)values->max_length) {
        method_00 = (MethodInfo *)(values->m_Items + 1);
        values->m_Items[1] = pSVar11;
        il2cpp_runtime_helper_022b4080(method_00,pSVar11);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ",";
          fVar26 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          method_00 = (MethodInfo *)(auStack_30 + 4);
          pSVar11 = System_Single__ToString(fVar26,method_00);
          if (3 < (uint)values->max_length) {
            method_00 = (MethodInfo *)(values->m_Items + 3);
            values->m_Items[3] = pSVar11;
            il2cpp_runtime_helper_022b4080(method_00,pSVar11);
            if (4 < (uint)values->max_length) {
              unaff_R14 = (MethodInfo *)&stack0xffffffffffffffd8;
              values->m_Items[4] = ",";
              fVar26 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              method_00 = unaff_R14;
              pSVar11 = System_Single__ToString(fVar26,unaff_R14);
              if (5 < (uint)values->max_length) {
                method_00 = (MethodInfo *)(values->m_Items + 5);
                values->m_Items[5] = pSVar11;
                il2cpp_runtime_helper_022b4080(method_00,pSVar11);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = ")";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                  pSVar11 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  return (bool_conflict)pSVar11;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = values;
  }
  bVar10 = il2cpp_runtime_helper_022b2c90();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9bb8) {
      il2cpp_runtime_helper_02305440();
      return bVar10;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bf0 + 0x40)) {
      il2cpp_runtime_helper_02305440();
      return bVar10;
    }
  }
  bVar10 = il2cpp_runtime_helper_022b2fd0();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9bb8) {
      il2cpp_runtime_helper_02305440();
      return bVar10;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9be8 + 0x40)) {
      il2cpp_runtime_helper_02305440();
      return bVar10;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9be8) {
      pfVar13 = (float *)il2cpp_runtime_helper_02305440();
      return (int)*pfVar13;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bb8 + 0x40)) {
      pbVar12 = (bool_conflict *)il2cpp_runtime_helper_02305440();
      return *pbVar12;
    }
  }
  uVar28 = il2cpp_runtime_helper_022b2fd0();
  fVar26 = (float)((ulong)uVar28 >> 0x20);
  fVar27 = (float)uVar28;
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar11 = TypeInfo_float;
  lVar14 = il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (lVar14 != 0) {
    uVar24 = (uint)*(ulong *)(lVar14 + 0x18);
    if (((uVar24 != 0) && (*(float *)(lVar14 + 0x20) = fVar27, uVar24 != 1)) &&
       (*(float *)(lVar14 + 0x24) = fVar26, 2 < uVar24)) {
      *(undefined4 *)(lVar14 + 0x28) = in_XMM1_Da;
      if (1 < (int)uVar24) {
        uVar20 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        if (fVar26 <= fVar27) {
          fVar26 = fVar27;
        }
        if (uVar20 == 2) {
          return (bool_conflict)lVar14;
        }
        uVar19 = (ulong)(uVar24 - 2 & 3);
        if (uVar20 - 3 < 3) {
          lVar21 = 2;
        }
        else {
          lVar23 = 0;
          do {
            lVar21 = lVar23;
            fVar27 = *(float *)(lVar14 + 0x28 + lVar21 * 4);
            if (fVar27 <= fVar26) {
              fVar27 = fVar26;
            }
            fVar26 = *(float *)(lVar14 + 0x2c + lVar21 * 4);
            if (fVar26 <= fVar27) {
              fVar26 = fVar27;
            }
            fVar27 = *(float *)(lVar14 + 0x30 + lVar21 * 4);
            if (fVar27 <= fVar26) {
              fVar27 = fVar26;
            }
            fVar26 = *(float *)(lVar14 + 0x34 + lVar21 * 4);
            if (fVar26 <= fVar27) {
              fVar26 = fVar27;
            }
            lVar23 = lVar21 + 4;
          } while ((uVar20 - uVar19) + -2 != lVar21 + 4);
          lVar21 = lVar21 + 6;
        }
        if (uVar19 != 0) {
          lVar14 = lVar14 + lVar21 * 4 + 0x20;
          uVar20 = 0;
          do {
            fVar27 = *(float *)(lVar14 + uVar20 * 4);
            if (fVar27 <= fVar26) {
              fVar27 = fVar26;
            }
            uVar20 = uVar20 + 1;
            fVar26 = fVar27;
          } while (uVar19 != uVar20);
        }
      }
      return (bool_conflict)lVar14;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_8a = 0;
  pSVar15 = pSVar11;
  pSStack_88 = unaff_RBX;
  pMStack_80 = unaff_R14;
  bVar10 = System_String__op_Equality
                     (pSVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (pSVar11 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar11 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar15,"",(MethodInfo *)0x0);
        return (bool_conflict)pSVar11;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_e0 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_ee = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar20 = 0;
        pSStack_e8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_e8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar24 = 0;
label_040653fb:
        pSVar6 = pSStack_e8->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_ec = uVar24;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IEnumerator) {
              pVVar16 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto label_04065463;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar14);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_e8,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar16->methodPtr)(pSStack_e8,pVVar16->method);
        if (cVar9 == '\0') {
          iVar25 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_e8->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IEnumerator) {
              pVVar16 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar14) + 1);
              goto label_040654e8;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar14);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_e8,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar16->methodPtr)(pSStack_e8,pVVar16->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar25 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar24 < iVar25) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar24 < iVar25) goto label_04065824;
          }
          else if ((int)uVar24 < iVar25) {
            do {
              uStack_ee = System_String__get_Chars((System_String_o *)__this_03,uVar24,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar11 = System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
              lVar14 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar11;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar11,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              uVar24 = uVar24 + 1;
            } while ((int)uVar24 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar11 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar24 = (__this_00->fields)._size;
          if (uVar24 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar24 + 1;
            pSVar8->m_Items[(int)uVar24] = (Il2CppObject *)pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar24 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_ec = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      il2cpp_runtime_helper_022b2c90();
label_04065824:
      uStack_ee = System_String__get_Chars((System_String_o *)__this_03,uStack_ec,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar20 = 0;
      System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_04065864:
      il2cpp_runtime_helper_022b2c90();
label_04065869:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
      do {
        uStack_ee = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar20,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
        auVar29 = il2cpp_runtime_helper_022b2c90();
        uStack_ec = 0;
        iVar25 = 0;
        if (auVar29._8_4_ != 1) {
          plVar17 = (long *)il2cpp_runtime_helper_023051f0(pSStack_e8,TypeInfo_IDisposable);
          if (plVar17 == (long *)0x0) goto label_04065a06;
          lVar14 = *plVar17;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto label_040659df;
          lVar23 = 0;
          goto label_040659d0;
        }
        puVar18 = (undefined8 *)__cxa_begin_catch(auVar29._0_8_);
        unaff_R13 = (long *)*puVar18;
        __cxa_end_catch();
label_04065677:
        uVar20 = TypeInfo_IDisposable;
        plVar17 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar17 != (long *)0x0) {
          lVar14 = *plVar17;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar14 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
                puVar18 = (undefined8 *)
                          (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar23);
          }
          puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040656ed:
          uVar20 = puVar18[1];
          (*(code *)*puVar18)(plVar17);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar25 != 6) && (iVar25 != 0)) goto label_040657e4;
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar25 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar20 = (ulong)uStack_ec;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar25 <= (int)uStack_ec) goto label_040657e4;
          unaff_R13 = &MethodInfo_Void_Add;
          goto label_04065778;
        }
        if (iVar25 <= (int)uStack_ec) goto label_040657e4;
      } while( true );
    }
    if ((pSVar11->fields)._stringLength < 2) {
      pSVar11 = System_String__ToUpper(pSVar11,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(pSVar11,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_8a = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar15 = System_Char__ToString((uint16_t)&uStack_8a,(MethodInfo *)0x0);
      pSVar11 = System_String__Substring(pSVar11,1,(MethodInfo *)0x0);
      pSVar11 = System_String__Concat_3ae5ba0(pSVar15,pSVar11,(MethodInfo *)0x0);
    }
  }
  return (bool_conflict)pSVar11;
label_04065778:
  uStack_ee = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar20,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Char__ToString((uint16_t)&uStack_ee,(MethodInfo *)0x0);
  lVar14 = MethodInfo_Void_Add;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (__this_00->fields)._items;
  if (pSVar8 == (System_Object_array *)0x0) goto label_0406581f;
  uVar24 = (__this_00->fields)._size;
  if (uVar24 < (uint)pSVar8->max_length) {
    (__this_00->fields)._size = uVar24 + 1;
    pSVar8->m_Items[(int)uVar24] = (Il2CppObject *)pSVar11;
    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24,pSVar11);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)pSVar11,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
  }
  uVar24 = (int32_t)uVar20 + 1;
  uVar20 = (ulong)uVar24;
  if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar24) {
label_040657e4:
    return (bool_conflict)__this_00;
  }
  goto label_04065778;
  while (lVar23 = lVar23 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar23) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar14 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
label_04065a06:
  _Unwind_Resume(auVar29._0_8_);
}


// MiscExtensions$$ToDisplayString
// il2cpp: System_String_o* MiscExtensions__ToDisplayString (UnityEngine_Vector3_o vector, const MethodInfo* method);
// 0x4064d90

System_String_o * MiscExtensions__ToDisplayString(UnityEngine_Vector3_o vector,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_String_c *pSVar6;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Object_array *pSVar9;
  char cVar10;
  uint16_t c;
  bool_conflict bVar11;
  System_String_array *values;
  System_String_o *pSVar12;
  uint *puVar13;
  float *pfVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar16;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  System_String_array *unaff_RBX;
  long lVar21;
  MethodInfo *method_00;
  MethodInfo *pMVar22;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar23;
  long *unaff_R13;
  MethodInfo *unaff_R14;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar30 [12];
  uint16_t uStack_e6;
  uint uStack_e4;
  System_Collections_IEnumerator_o *pSStack_e0;
  long *plStack_d8;
  uint16_t uStack_82;
  System_String_array *pSStack_80;
  MethodInfo *pMStack_78;
  undefined1 local_28 [8];
  float local_20 [2];
  undefined8 uVar28;
  
  fVar29 = vector.fields.z;
  pMVar22 = (MethodInfo *)local_28;
  local_28 = vector.fields._0_8_;
  local_20[0] = fVar29;
  if (g_data_057ac2b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac2b3 = '\x01';
  }
  method_00 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      fVar26 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar12 = System_Single__ToString(fVar26,(MethodInfo *)local_28);
      method_00 = pMVar22;
      if (1 < (uint)values->max_length) {
        method_00 = (MethodInfo *)(values->m_Items + 1);
        values->m_Items[1] = pSVar12;
        il2cpp_runtime_helper_022b4080(method_00,pSVar12);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ",";
          fVar26 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          method_00 = (MethodInfo *)(local_28 + 4);
          pSVar12 = System_Single__ToString(fVar26,method_00);
          if (3 < (uint)values->max_length) {
            method_00 = (MethodInfo *)(values->m_Items + 3);
            values->m_Items[3] = pSVar12;
            il2cpp_runtime_helper_022b4080(method_00,pSVar12);
            if (4 < (uint)values->max_length) {
              unaff_R14 = (MethodInfo *)local_20;
              values->m_Items[4] = ",";
              fVar26 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              method_00 = unaff_R14;
              pSVar12 = System_Single__ToString(fVar26,unaff_R14);
              if (5 < (uint)values->max_length) {
                method_00 = (MethodInfo *)(values->m_Items + 5);
                values->m_Items[5] = pSVar12;
                il2cpp_runtime_helper_022b4080(method_00,pSVar12);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = ")";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                  pSVar12 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  return pSVar12;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = values;
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9bb8) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bf0 + 0x40)) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2fd0();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9bb8) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9be8 + 0x40)) {
      il2cpp_runtime_helper_02305440();
      return pSVar12;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (method_00->methodPointer == g_data_057b9be8) {
      pfVar14 = (float *)il2cpp_runtime_helper_02305440();
      return (System_String_o *)(ulong)(uint)(int)*pfVar14;
    }
    if (*(long *)(method_00->methodPointer + 0x40) == *(long *)(g_data_057b9bb8 + 0x40)) {
      puVar13 = (uint *)il2cpp_runtime_helper_02305440();
      return (System_String_o *)(ulong)*puVar13;
    }
  }
  uVar28 = il2cpp_runtime_helper_022b2fd0();
  fVar26 = (float)((ulong)uVar28 >> 0x20);
  fVar27 = (float)uVar28;
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar12 = TypeInfo_float;
  pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (pSVar15 != (System_String_o *)0x0) {
    pSVar6 = pSVar15[1].klass;
    uVar24 = (uint)pSVar6;
    if (((uVar24 != 0) && (*(float *)&pSVar15[1].monitor = fVar27, uVar24 != 1)) &&
       (*(float *)((long)&pSVar15[1].monitor + 4) = fVar26, 2 < uVar24)) {
      pSVar15[1].fields._stringLength = (int32_t)fVar29;
      if (1 < (int)uVar24) {
        uVar20 = (ulong)pSVar6 & 0xffffffff;
        if (fVar26 <= fVar27) {
          fVar26 = fVar27;
        }
        if (uVar20 == 2) {
          return pSVar15;
        }
        uVar19 = (ulong)(uVar24 - 2 & 3);
        if (uVar20 - 3 < 3) {
          lVar21 = 2;
        }
        else {
          lVar23 = 0;
          do {
            lVar21 = lVar23;
            fVar29 = (float)(&pSVar15[1].fields._stringLength)[lVar21];
            if (fVar29 <= fVar26) {
              fVar29 = fVar26;
            }
            fVar26 = *(float *)(&pSVar15[1].fields._firstChar + lVar21 * 2);
            if (fVar26 <= fVar29) {
              fVar26 = fVar29;
            }
            fVar29 = *(float *)((long)&pSVar15[2].klass + lVar21 * 4);
            if (fVar29 <= fVar26) {
              fVar29 = fVar26;
            }
            fVar26 = *(float *)((long)&pSVar15[2].klass + lVar21 * 4 + 4);
            if (fVar26 <= fVar29) {
              fVar26 = fVar29;
            }
            lVar23 = lVar21 + 4;
          } while ((uVar20 - uVar19) + -2 != lVar21 + 4);
          lVar21 = lVar21 + 6;
        }
        if (uVar19 != 0) {
          pSVar15 = (System_String_o *)((long)&pSVar15[1].monitor + lVar21 * 4);
          uVar20 = 0;
          do {
            fVar29 = *(float *)((long)&pSVar15->klass + uVar20 * 4);
            if (fVar29 <= fVar26) {
              fVar29 = fVar26;
            }
            uVar20 = uVar20 + 1;
            fVar26 = fVar29;
          } while (uVar19 != uVar20);
        }
      }
      return pSVar15;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_82 = 0;
  pSVar15 = pSVar12;
  pSStack_80 = unaff_RBX;
  pMStack_78 = unaff_R14;
  bVar11 = System_String__op_Equality
                     (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    if (pSVar12 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar12 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar15,"",(MethodInfo *)0x0);
        return pSVar12;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_d8 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_e6 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar20 = 0;
        pSStack_e0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_e0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar24 = 0;
label_040653fb:
        pSVar7 = pSStack_e0->klass;
        uVar3._0_1_ = (pSVar7->_2).rank;
        uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
        uStack_e4 = uVar24;
        if ((ulong)uVar3 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerator) {
              ppIVar16 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar23)].methodPtr;
              goto label_04065463;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar23);
        }
        ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_e0,TypeInfo_IEnumerator,0);
label_04065463:
        cVar10 = (**ppIVar16)(pSStack_e0,(MethodInfo *)ppIVar16[1]);
        if (cVar10 == '\0') {
          iVar25 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar7 = pSStack_e0->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar23) == TypeInfo_IEnumerator) {
              ppIVar16 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar23) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar23);
        }
        ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_e0,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar16)(pSStack_e0,(MethodInfo *)ppIVar16[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar25 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar24 < iVar25) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar24 < iVar25) goto label_04065824;
          }
          else if ((int)uVar24 < iVar25) {
            do {
              uStack_e6 = System_String__get_Chars((System_String_o *)__this_03,uVar24,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar12 = System_Char__ToString((uint16_t)&uStack_e6,(MethodInfo *)0x0);
              lVar23 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (__this_00->fields)._items;
              if (pSVar9 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar9->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pSVar12;
                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar12,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              uVar24 = uVar24 + 1;
            } while ((int)uVar24 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar12 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar23 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_Object_array *)0x0) goto label_04065815;
          uVar24 = (__this_00->fields)._size;
          if (uVar24 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar24 + 1;
            pSVar9->m_Items[(int)uVar24] = (Il2CppObject *)pSVar12;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar24,pSVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          uVar24 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_e4 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_e6 = System_String__get_Chars((System_String_o *)__this_03,uStack_e4,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar20 = 0;
        System_Char__ToString((uint16_t)&uStack_e6,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_e6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar20,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_e6,(MethodInfo *)0x0);
        auVar30 = il2cpp_runtime_helper_022b2c90();
        uStack_e4 = 0;
        iVar25 = 0;
        if (auVar30._8_4_ != 1) {
          plVar17 = (long *)il2cpp_runtime_helper_023051f0(pSStack_e0,TypeInfo_IDisposable);
          if (plVar17 == (long *)0x0) goto label_04065a06;
          lVar23 = *plVar17;
          if ((ulong)*(ushort *)(lVar23 + 0x12e) == 0) goto label_040659df;
          lVar21 = 0;
          goto label_040659d0;
        }
        puVar18 = (undefined8 *)__cxa_begin_catch(auVar30._0_8_);
        unaff_R13 = (long *)*puVar18;
        __cxa_end_catch();
label_04065677:
        uVar20 = TypeInfo_IDisposable;
        plVar17 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar17 != (long *)0x0) {
          lVar23 = *plVar17;
          if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar23 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                puVar18 = (undefined8 *)
                          (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar21);
          }
          puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040656ed:
          uVar20 = puVar18[1];
          (*(code *)*puVar18)(plVar17);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar25 != 6) && (iVar25 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar25 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar20 = (ulong)uStack_e4;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar25 <= (int)uStack_e4) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar25 <= (int)uStack_e4) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_e6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar20,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = System_Char__ToString((uint16_t)&uStack_e6,(MethodInfo *)0x0);
          lVar23 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_Object_array *)0x0) break;
          uVar24 = (__this_00->fields)._size;
          if (uVar24 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar24 + 1;
            pSVar9->m_Items[(int)uVar24] = (Il2CppObject *)pSVar12;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar24,pSVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          uVar24 = (int32_t)uVar20 + 1;
          uVar20 = (ulong)uVar24;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar24) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((pSVar12->fields)._stringLength < 2) {
      pSVar12 = System_String__ToUpper(pSVar12,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(pSVar12,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_82 = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar15 = System_Char__ToString((uint16_t)&uStack_82,(MethodInfo *)0x0);
      pSVar12 = System_String__Substring(pSVar12,1,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_3ae5ba0(pSVar15,pSVar12,(MethodInfo *)0x0);
    }
  }
  return pSVar12;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar21) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar23 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
label_04065a06:
  _Unwind_Resume(auVar30._0_8_);
}


// MiscExtensions$$UnboxToDouble
// il2cpp: double MiscExtensions__UnboxToDouble (Il2CppObject* obj, const MethodInfo* method);
// 0x4064f10

double MiscExtensions__UnboxToDouble(Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  double *pdVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar17;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar23;
  long *unaff_R13;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  double dVar29;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 in_XMM1_Da;
  float fVar31;
  undefined1 auVar32 [12];
  uint16_t uStack_be;
  uint uStack_bc;
  System_Collections_IEnumerator_o *pSStack_b8;
  long *plStack_b0;
  uint16_t uStack_5a;
  
  if (obj == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (obj->klass == g_data_057b9bb8) {
      piVar13 = (int *)il2cpp_runtime_helper_02305440();
      return (double)*piVar13;
    }
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9bf0 + 0x40)) {
      pdVar11 = (double *)il2cpp_runtime_helper_02305440();
      return *pdVar11;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (obj == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (obj->klass == g_data_057b9bb8) {
      piVar13 = (int *)il2cpp_runtime_helper_02305440();
      return (double)CONCAT44(extraout_XMM0_Db,(float)*piVar13);
    }
    if ((obj->klass->_1).element_class == (g_data_057b9be8->_1).element_class) {
      puVar12 = (uint *)il2cpp_runtime_helper_02305440();
      return (double)(ulong)*puVar12;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (obj == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (obj->klass == g_data_057b9be8) {
      dVar29 = (double)il2cpp_runtime_helper_02305440();
      return dVar29;
    }
    if ((obj->klass->_1).element_class == (g_data_057b9bb8->_1).element_class) {
      dVar29 = (double)il2cpp_runtime_helper_02305440();
      return dVar29;
    }
  }
  dVar29 = (double)il2cpp_runtime_helper_022b2fd0();
  fVar26 = (float)((ulong)dVar29 >> 0x20);
  fVar27 = SUB84(dVar29,0);
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar16 = TypeInfo_float;
  lVar14 = il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (lVar14 != 0) {
    uVar24 = (uint)*(ulong *)(lVar14 + 0x18);
    if (((uVar24 != 0) && (*(float *)(lVar14 + 0x20) = fVar27, uVar24 != 1)) &&
       (*(float *)(lVar14 + 0x24) = fVar26, 2 < uVar24)) {
      *(undefined4 *)(lVar14 + 0x28) = in_XMM1_Da;
      if (1 < (int)uVar24) {
        uVar21 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        fVar31 = fVar26;
        if (fVar26 <= fVar27) {
          fVar31 = fVar27;
        }
        dVar29 = (double)CONCAT44(fVar26,fVar31);
        if (uVar21 == 2) {
          return (double)CONCAT44(fVar26,fVar31);
        }
        uVar20 = (ulong)(uVar24 - 2 & 3);
        if (uVar21 - 3 < 3) {
          lVar22 = 2;
        }
        else {
          lVar23 = 0;
          do {
            lVar22 = lVar23;
            fVar27 = *(float *)(lVar14 + 0x28 + lVar22 * 4);
            if (fVar27 <= fVar31) {
              fVar27 = fVar31;
            }
            fVar26 = *(float *)(lVar14 + 0x2c + lVar22 * 4);
            if (fVar26 <= fVar27) {
              fVar26 = fVar27;
            }
            fVar27 = *(float *)(lVar14 + 0x30 + lVar22 * 4);
            if (fVar27 <= fVar26) {
              fVar27 = fVar26;
            }
            fVar31 = *(float *)(lVar14 + 0x34 + lVar22 * 4);
            if (fVar31 <= fVar27) {
              fVar31 = fVar27;
            }
            lVar23 = lVar22 + 4;
          } while ((uVar21 - uVar20) + -2 != lVar22 + 4);
          lVar22 = lVar22 + 6;
          dVar29 = (double)(ulong)(uint)fVar31;
        }
        if (uVar20 != 0) {
          uVar21 = 0;
          do {
            fVar27 = *(float *)(lVar14 + lVar22 * 4 + 0x20 + uVar21 * 4);
            if (fVar27 <= fVar31) {
              fVar27 = fVar31;
            }
            dVar29 = (double)(ulong)(uint)fVar27;
            uVar21 = uVar21 + 1;
            fVar31 = fVar27;
          } while (uVar20 != uVar21);
        }
      }
      return dVar29;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_5a = 0;
  pSVar15 = pSVar16;
  bVar10 = System_String__op_Equality
                     (pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  uVar28 = extraout_XMM0_Da;
  uVar30 = extraout_XMM0_Db_00;
  if ((char)bVar10 == '\0') {
    if (pSVar16 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar25 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar25 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        System_Text_RegularExpressions_Regex__Replace_4906910
                  (__this_03,pSVar15,"",(MethodInfo *)0x0);
        return (double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02);
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_b0 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_be = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar21 = 0;
        pSStack_b8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_b8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar24 = 0;
label_040653fb:
        pSVar6 = pSStack_b8->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_bc = uVar24;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IEnumerator) {
              pVVar17 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto label_04065463;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar14);
        }
        pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_b8,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar17->methodPtr)(pSStack_b8,pVVar17->method);
        if (cVar9 == '\0') {
          iVar25 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_b8->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IEnumerator) {
              pVVar17 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar14) + 1);
              goto label_040654e8;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar14);
        }
        pVVar17 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_b8,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar17->methodPtr)(pSStack_b8,pVVar17->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar25 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar24 < iVar25) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar24 < iVar25) goto label_04065824;
          }
          else if ((int)uVar24 < iVar25) {
            do {
              uStack_be = System_String__get_Chars((System_String_o *)__this_03,uVar24,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar16 = System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
              lVar14 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar16;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar16,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              uVar24 = uVar24 + 1;
            } while ((int)uVar24 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar16 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar24 = (__this_00->fields)._size;
          if (uVar24 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar24 + 1;
            pSVar8->m_Items[(int)uVar24] = (Il2CppObject *)pSVar16;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24,pSVar16);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar24 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_bc = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_be = System_String__get_Chars((System_String_o *)__this_03,uStack_bc,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar21 = 0;
        System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_be = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar21,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
        auVar32 = il2cpp_runtime_helper_022b2c90();
        uStack_bc = 0;
        iVar25 = 0;
        if (auVar32._8_4_ != 1) {
          plVar18 = (long *)il2cpp_runtime_helper_023051f0(pSStack_b8,TypeInfo_IDisposable);
          if (plVar18 == (long *)0x0) goto label_04065a06;
          lVar14 = *plVar18;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto label_040659df;
          lVar23 = 0;
          goto label_040659d0;
        }
        puVar19 = (undefined8 *)__cxa_begin_catch(auVar32._0_8_);
        unaff_R13 = (long *)*puVar19;
        __cxa_end_catch();
label_04065677:
        uVar21 = TypeInfo_IDisposable;
        plVar18 = (long *)il2cpp_runtime_helper_023051f0();
        dVar29 = (double)CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03);
        if (plVar18 != (long *)0x0) {
          lVar14 = *plVar18;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar14 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
                puVar19 = (undefined8 *)
                          (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar23);
          }
          puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_040656ed:
          uVar21 = puVar19[1];
          dVar29 = (double)(*(code *)*puVar19)(plVar18);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar25 != 6) && (iVar25 != 0)) {
          return dVar29;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar25 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar21 = (ulong)uStack_bc;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar25 <= (int)uStack_bc) {
            return dVar29;
          }
          goto label_04065871;
        }
        if (iVar25 <= (int)uStack_bc) {
          return dVar29;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_be = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar21,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = System_Char__ToString((uint16_t)&uStack_be,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar24 = (__this_00->fields)._size;
          if (uVar24 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar24 + 1;
            pSVar8->m_Items[(int)uVar24] = (Il2CppObject *)pSVar16;
            dVar29 = (double)il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar24,pSVar16);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            dVar29 = (double)CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04);
          }
          uVar24 = (int32_t)uVar21 + 1;
          uVar21 = (ulong)uVar24;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar24) {
            return dVar29;
          }
        }
      } while( true );
    }
    if ((pSVar16->fields)._stringLength < 2) {
      System_String__ToUpper(pSVar16,(MethodInfo *)0x0);
      uVar28 = extraout_XMM0_Da_00;
      uVar30 = extraout_XMM0_Db_01;
    }
    else {
      c = System_String__get_Chars(pSVar16,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_5a = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar15 = System_Char__ToString((uint16_t)&uStack_5a,(MethodInfo *)0x0);
      pSVar16 = System_String__Substring(pSVar16,1,(MethodInfo *)0x0);
      System_String__Concat_3ae5ba0(pSVar15,pSVar16,(MethodInfo *)0x0);
      uVar28 = extraout_XMM0_Da_01;
      uVar30 = extraout_XMM0_Db_02;
    }
  }
  return (double)CONCAT44(uVar30,uVar28);
  while (lVar23 = lVar23 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar23) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar14 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)(lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar19)(plVar18,puVar19[1]);
label_04065a06:
  _Unwind_Resume(auVar32._0_8_);
}


// MiscExtensions$$UnboxToFloat
// il2cpp: float MiscExtensions__UnboxToFloat (Il2CppObject* obj, const MethodInfo* method);
// 0x4064f60

float MiscExtensions__UnboxToFloat(Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  float *pfVar11;
  int *piVar12;
  long lVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar16;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar22;
  long *unaff_R13;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  undefined8 uVar27;
  undefined4 in_XMM1_Da;
  undefined1 auVar28 [12];
  uint16_t uStack_b6;
  uint uStack_b4;
  System_Collections_IEnumerator_o *pSStack_b0;
  long *plStack_a8;
  uint16_t uStack_52;
  
  if (obj == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (obj->klass == g_data_057b9bb8) {
      piVar12 = (int *)il2cpp_runtime_helper_02305440();
      return (float)*piVar12;
    }
    if ((obj->klass->_1).element_class == (g_data_057b9be8->_1).element_class) {
      pfVar11 = (float *)il2cpp_runtime_helper_02305440();
      return *pfVar11;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (obj == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (obj->klass == g_data_057b9be8) {
      fVar25 = (float)il2cpp_runtime_helper_02305440();
      return fVar25;
    }
    if ((obj->klass->_1).element_class == (g_data_057b9bb8->_1).element_class) {
      fVar25 = (float)il2cpp_runtime_helper_02305440();
      return fVar25;
    }
  }
  uVar27 = il2cpp_runtime_helper_022b2fd0();
  fVar25 = (float)((ulong)uVar27 >> 0x20);
  fVar26 = (float)uVar27;
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar15 = TypeInfo_float;
  lVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (lVar13 != 0) {
    uVar23 = (uint)*(ulong *)(lVar13 + 0x18);
    if (((uVar23 != 0) && (*(float *)(lVar13 + 0x20) = fVar26, uVar23 != 1)) &&
       (*(float *)(lVar13 + 0x24) = fVar25, 2 < uVar23)) {
      *(undefined4 *)(lVar13 + 0x28) = in_XMM1_Da;
      if (1 < (int)uVar23) {
        uVar20 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        if (fVar25 <= fVar26) {
          fVar25 = fVar26;
        }
        if (uVar20 == 2) {
          return fVar25;
        }
        uVar19 = (ulong)(uVar23 - 2 & 3);
        if (uVar20 - 3 < 3) {
          lVar21 = 2;
          fVar26 = fVar25;
        }
        else {
          lVar22 = 0;
          do {
            lVar21 = lVar22;
            fVar26 = *(float *)(lVar13 + 0x28 + lVar21 * 4);
            if (fVar26 <= fVar25) {
              fVar26 = fVar25;
            }
            fVar25 = *(float *)(lVar13 + 0x2c + lVar21 * 4);
            if (fVar25 <= fVar26) {
              fVar25 = fVar26;
            }
            fVar26 = *(float *)(lVar13 + 0x30 + lVar21 * 4);
            if (fVar26 <= fVar25) {
              fVar26 = fVar25;
            }
            fVar25 = *(float *)(lVar13 + 0x34 + lVar21 * 4);
            if (fVar25 <= fVar26) {
              fVar25 = fVar26;
            }
            lVar22 = lVar21 + 4;
          } while ((uVar20 - uVar19) + -2 != lVar21 + 4);
          lVar21 = lVar21 + 6;
          fVar26 = fVar25;
        }
        if (uVar19 != 0) {
          uVar20 = 0;
          fVar25 = fVar26;
          do {
            fVar26 = *(float *)(lVar13 + lVar21 * 4 + 0x20 + uVar20 * 4);
            if (fVar26 <= fVar25) {
              fVar26 = fVar25;
            }
            uVar20 = uVar20 + 1;
            fVar25 = fVar26;
          } while (uVar19 != uVar20);
        }
      }
      return fVar26;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_52 = 0;
  pSVar14 = pSVar15;
  bVar10 = System_String__op_Equality
                     (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  fVar25 = extraout_XMM0_Da;
  if ((char)bVar10 == '\0') {
    if (pSVar15 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar24 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar24 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar24 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        System_Text_RegularExpressions_Regex__Replace_4906910
                  (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return extraout_XMM0_Da_02;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_a8 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_b6 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar20 = 0;
        pSStack_b0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_b0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar23 = 0;
label_040653fb:
        pSVar6 = pSStack_b0->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_b4 = uVar23;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar16 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar13);
              goto label_04065463;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar13);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_b0,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar16->methodPtr)(pSStack_b0,pVVar16->method);
        if (cVar9 == '\0') {
          iVar24 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_b0->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar13) == TypeInfo_IEnumerator) {
              pVVar16 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar13) + 1);
              goto label_040654e8;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar13);
        }
        pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_b0,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar16->methodPtr)(pSStack_b0,pVVar16->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar24 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar23 < iVar24) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar23 < iVar24) goto label_04065824;
          }
          else if ((int)uVar23 < iVar24) {
            do {
              uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,uVar23,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar15 = System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
              lVar13 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar15;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar15,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar15 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar13 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar23 = (__this_00->fields)._size;
          if (uVar23 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar23 + 1;
            pSVar8->m_Items[(int)uVar23] = (Il2CppObject *)pSVar15;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar23,pSVar15);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar23 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_b4 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,uStack_b4,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar20 = 0;
        System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar20,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
        auVar28 = il2cpp_runtime_helper_022b2c90();
        uStack_b4 = 0;
        iVar24 = 0;
        if (auVar28._8_4_ != 1) {
          plVar17 = (long *)il2cpp_runtime_helper_023051f0(pSStack_b0,TypeInfo_IDisposable);
          if (plVar17 == (long *)0x0) goto label_04065a06;
          lVar13 = *plVar17;
          if ((ulong)*(ushort *)(lVar13 + 0x12e) == 0) goto label_040659df;
          lVar22 = 0;
          goto label_040659d0;
        }
        puVar18 = (undefined8 *)__cxa_begin_catch(auVar28._0_8_);
        unaff_R13 = (long *)*puVar18;
        __cxa_end_catch();
label_04065677:
        uVar20 = TypeInfo_IDisposable;
        plVar17 = (long *)il2cpp_runtime_helper_023051f0();
        fVar25 = extraout_XMM0_Da_03;
        if (plVar17 != (long *)0x0) {
          lVar13 = *plVar17;
          if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
            lVar22 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar13 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
                puVar18 = (undefined8 *)
                          (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar22);
          }
          puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040656ed:
          uVar20 = puVar18[1];
          fVar25 = (float)(*(code *)*puVar18)(plVar17);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar24 != 6) && (iVar24 != 0)) {
          return fVar25;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar24 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar20 = (ulong)uStack_b4;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar24 <= (int)uStack_b4) {
            return fVar25;
          }
          goto label_04065871;
        }
        if (iVar24 <= (int)uStack_b4) {
          return fVar25;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_b6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar20,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = System_Char__ToString((uint16_t)&uStack_b6,(MethodInfo *)0x0);
          lVar13 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar23 = (__this_00->fields)._size;
          if (uVar23 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar23 + 1;
            pSVar8->m_Items[(int)uVar23] = (Il2CppObject *)pSVar15;
            fVar25 = (float)il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar23,pSVar15);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            fVar25 = extraout_XMM0_Da_04;
          }
          uVar23 = (int32_t)uVar20 + 1;
          uVar20 = (ulong)uVar23;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar23) {
            return fVar25;
          }
        }
      } while( true );
    }
    if ((pSVar15->fields)._stringLength < 2) {
      System_String__ToUpper(pSVar15,(MethodInfo *)0x0);
      fVar25 = extraout_XMM0_Da_00;
    }
    else {
      c = System_String__get_Chars(pSVar15,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_52 = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)&uStack_52,(MethodInfo *)0x0);
      pSVar15 = System_String__Substring(pSVar15,1,(MethodInfo *)0x0);
      System_String__Concat_3ae5ba0(pSVar14,pSVar15,(MethodInfo *)0x0);
      fVar25 = extraout_XMM0_Da_01;
    }
  }
  return fVar25;
  while (lVar22 = lVar22 + 0x10, (ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar22) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar13 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
label_04065a06:
  _Unwind_Resume(auVar28._0_8_);
}


// MiscExtensions$$UnboxToInt
// il2cpp: int32_t MiscExtensions__UnboxToInt (Il2CppObject* obj, const MethodInfo* method);
// 0x4064fb0

int32_t MiscExtensions__UnboxToInt(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Object_array *pSVar7;
  char cVar8;
  uint16_t c;
  bool_conflict bVar9;
  int32_t *piVar10;
  float *pfVar11;
  long lVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar15;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar21;
  long *unaff_R13;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 in_XMM1_Da;
  undefined1 auVar27 [12];
  uint16_t uStack_ae;
  uint uStack_ac;
  System_Collections_IEnumerator_o *pSStack_a8;
  long *plStack_a0;
  uint16_t uStack_4a;
  
  if (obj == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (obj->klass == g_data_057b9be8) {
      pfVar11 = (float *)il2cpp_runtime_helper_02305440();
      return (int)*pfVar11;
    }
    if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      piVar10 = (int32_t *)il2cpp_runtime_helper_02305440();
      return *piVar10;
    }
  }
  uVar26 = il2cpp_runtime_helper_022b2fd0();
  fVar24 = (float)((ulong)uVar26 >> 0x20);
  fVar25 = (float)uVar26;
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar13 = TypeInfo_float;
  lVar12 = il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (lVar12 != 0) {
    uVar22 = (uint)*(ulong *)(lVar12 + 0x18);
    if (((uVar22 != 0) && (*(float *)(lVar12 + 0x20) = fVar25, uVar22 != 1)) &&
       (*(float *)(lVar12 + 0x24) = fVar24, 2 < uVar22)) {
      *(undefined4 *)(lVar12 + 0x28) = in_XMM1_Da;
      if (1 < (int)uVar22) {
        uVar19 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        if (fVar24 <= fVar25) {
          fVar24 = fVar25;
        }
        if (uVar19 == 2) {
          return (int32_t)lVar12;
        }
        uVar18 = (ulong)(uVar22 - 2 & 3);
        if (uVar19 - 3 < 3) {
          lVar20 = 2;
        }
        else {
          lVar21 = 0;
          do {
            lVar20 = lVar21;
            fVar25 = *(float *)(lVar12 + 0x28 + lVar20 * 4);
            if (fVar25 <= fVar24) {
              fVar25 = fVar24;
            }
            fVar24 = *(float *)(lVar12 + 0x2c + lVar20 * 4);
            if (fVar24 <= fVar25) {
              fVar24 = fVar25;
            }
            fVar25 = *(float *)(lVar12 + 0x30 + lVar20 * 4);
            if (fVar25 <= fVar24) {
              fVar25 = fVar24;
            }
            fVar24 = *(float *)(lVar12 + 0x34 + lVar20 * 4);
            if (fVar24 <= fVar25) {
              fVar24 = fVar25;
            }
            lVar21 = lVar20 + 4;
          } while ((uVar19 - uVar18) + -2 != lVar20 + 4);
          lVar20 = lVar20 + 6;
        }
        if (uVar18 != 0) {
          lVar12 = lVar12 + lVar20 * 4 + 0x20;
          uVar19 = 0;
          do {
            fVar25 = *(float *)(lVar12 + uVar19 * 4);
            if (fVar25 <= fVar24) {
              fVar25 = fVar24;
            }
            uVar19 = uVar19 + 1;
            fVar24 = fVar25;
          } while (uVar18 != uVar19);
        }
      }
      return (int32_t)lVar12;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_4a = 0;
  pSVar14 = pSVar13;
  bVar9 = System_String__op_Equality
                    (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    if (pSVar13 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar23 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar23 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar13 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar14,"",(MethodInfo *)0x0);
        return (int32_t)pSVar13;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_a0 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_ae = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar19 = 0;
        pSStack_a8 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_a8 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar22 = 0;
label_040653fb:
        pSVar5 = pSStack_a8->klass;
        uVar2._0_1_ = (pSVar5->_2).rank;
        uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
        uStack_ac = uVar22;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pSVar5->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar15 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar12);
              goto label_04065463;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_a8,TypeInfo_IEnumerator,0);
label_04065463:
        cVar8 = (*pVVar15->methodPtr)(pSStack_a8,pVVar15->method);
        if (cVar8 == '\0') {
          iVar23 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar5 = pSStack_a8->klass;
        uVar3._0_1_ = (pSVar5->_2).rank;
        uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar6 = (pSVar5->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar15 = pSVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar12) + 1);
              goto label_040654e8;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar12);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_a8,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar15->methodPtr)(pSStack_a8,pVVar15->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar1 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar1) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar23 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar22 < iVar23) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar22 < iVar23) goto label_04065824;
          }
          else if ((int)uVar22 < iVar23) {
            do {
              uStack_ae = System_String__get_Chars((System_String_o *)__this_03,uVar22,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
              lVar12 = MethodInfo_Void_Add;
              piVar10 = &(__this_00->fields)._version;
              *piVar10 = *piVar10 + 1;
              pSVar7 = (__this_00->fields)._items;
              if (pSVar7 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar4 = (__this_00->fields)._size;
              if (uVar4 < (uint)pSVar7->max_length) {
                (__this_00->fields)._size = uVar4 + 1;
                pSVar7->m_Items[(int)uVar4] = (Il2CppObject *)pSVar13;
                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar13 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar12 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar10 = &(__this_00->fields)._version;
          *piVar10 = *piVar10 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_Object_array *)0x0) goto label_04065815;
          uVar22 = (__this_00->fields)._size;
          if (uVar22 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar22 + 1;
            pSVar7->m_Items[(int)uVar22] = (Il2CppObject *)pSVar13;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar22,pSVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar22 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_ac = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      il2cpp_runtime_helper_022b2c90();
label_04065824:
      uStack_ae = System_String__get_Chars((System_String_o *)__this_03,uStack_ac,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar19 = 0;
      System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_04065864:
      il2cpp_runtime_helper_022b2c90();
label_04065869:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
      do {
        uStack_ae = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar19,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
        auVar27 = il2cpp_runtime_helper_022b2c90();
        uStack_ac = 0;
        iVar23 = 0;
        if (auVar27._8_4_ != 1) {
          plVar16 = (long *)il2cpp_runtime_helper_023051f0(pSStack_a8,TypeInfo_IDisposable);
          if (plVar16 == (long *)0x0) goto label_04065a06;
          lVar12 = *plVar16;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto label_040659df;
          lVar21 = 0;
          goto label_040659d0;
        }
        puVar17 = (undefined8 *)__cxa_begin_catch(auVar27._0_8_);
        unaff_R13 = (long *)*puVar17;
        __cxa_end_catch();
label_04065677:
        uVar19 = TypeInfo_IDisposable;
        plVar16 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar16 != (long *)0x0) {
          lVar12 = *plVar16;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar12 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                puVar17 = (undefined8 *)
                          (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar21);
          }
          puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_040656ed:
          uVar19 = puVar17[1];
          (*(code *)*puVar17)(plVar16);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar23 != 6) && (iVar23 != 0)) goto label_040657e4;
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar23 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar19 = (ulong)uStack_ac;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar23 <= (int)uStack_ac) goto label_040657e4;
          unaff_R13 = &MethodInfo_Void_Add;
          goto label_04065778;
        }
        if (iVar23 <= (int)uStack_ac) goto label_040657e4;
      } while( true );
    }
    if ((pSVar13->fields)._stringLength < 2) {
      pSVar13 = System_String__ToUpper(pSVar13,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(pSVar13,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_4a = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar14 = System_Char__ToString((uint16_t)&uStack_4a,(MethodInfo *)0x0);
      pSVar13 = System_String__Substring(pSVar13,1,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0(pSVar14,pSVar13,(MethodInfo *)0x0);
    }
  }
  return (int32_t)pSVar13;
label_04065778:
  uStack_ae = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar19,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Char__ToString((uint16_t)&uStack_ae,(MethodInfo *)0x0);
  lVar12 = MethodInfo_Void_Add;
  piVar10 = &(__this_00->fields)._version;
  *piVar10 = *piVar10 + 1;
  pSVar7 = (__this_00->fields)._items;
  if (pSVar7 == (System_Object_array *)0x0) goto label_0406581f;
  uVar22 = (__this_00->fields)._size;
  if (uVar22 < (uint)pSVar7->max_length) {
    (__this_00->fields)._size = uVar22 + 1;
    pSVar7->m_Items[(int)uVar22] = (Il2CppObject *)pSVar13;
    il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar22,pSVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (__this_00,(Il2CppObject *)pSVar13,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  uVar22 = (int32_t)uVar19 + 1;
  uVar19 = (ulong)uVar22;
  if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar22) {
label_040657e4:
    return (int32_t)__this_00;
  }
  goto label_04065778;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar21) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar12 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar17 = (undefined8 *)(lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
label_04065a06:
  _Unwind_Resume(auVar27._0_8_);
}


// MiscExtensions$$MaxComponent
// il2cpp: float MiscExtensions__MaxComponent (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x4065000

float MiscExtensions__MaxComponent(UnityEngine_Vector3_o v,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  long lVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar14;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar20;
  long *unaff_R13;
  uint uVar21;
  int iVar22;
  float fVar23;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar24;
  float extraout_XMM0_Da_04;
  undefined1 auVar25 [12];
  uint16_t uStack_a6;
  uint uStack_a4;
  System_Collections_IEnumerator_o *pSStack_a0;
  long *plStack_98;
  uint16_t local_42;
  float local_18;
  float fStack_14;
  
  if (g_data_057ac2b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    g_data_057ac2b4 = '\x01';
  }
  pSVar13 = TypeInfo_float;
  lVar11 = il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
  if (lVar11 != 0) {
    uVar21 = (uint)*(ulong *)(lVar11 + 0x18);
    local_18 = v.fields.x;
    fStack_14 = v.fields.y;
    if (((uVar21 != 0) && (*(float *)(lVar11 + 0x20) = local_18, uVar21 != 1)) &&
       (*(float *)(lVar11 + 0x24) = fStack_14, 2 < uVar21)) {
      *(float *)(lVar11 + 0x28) = v.fields.z;
      if (1 < (int)uVar21) {
        uVar18 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        if (fStack_14 <= local_18) {
          fStack_14 = local_18;
        }
        if (uVar18 == 2) {
          return fStack_14;
        }
        uVar17 = (ulong)(uVar21 - 2 & 3);
        if (uVar18 - 3 < 3) {
          lVar19 = 2;
          local_18 = fStack_14;
        }
        else {
          lVar20 = 0;
          do {
            lVar19 = lVar20;
            fVar24 = *(float *)(lVar11 + 0x28 + lVar19 * 4);
            if (fVar24 <= fStack_14) {
              fVar24 = fStack_14;
            }
            fVar23 = *(float *)(lVar11 + 0x2c + lVar19 * 4);
            if (fVar23 <= fVar24) {
              fVar23 = fVar24;
            }
            fVar24 = *(float *)(lVar11 + 0x30 + lVar19 * 4);
            if (fVar24 <= fVar23) {
              fVar24 = fVar23;
            }
            fStack_14 = *(float *)(lVar11 + 0x34 + lVar19 * 4);
            if (fStack_14 <= fVar24) {
              fStack_14 = fVar24;
            }
            lVar20 = lVar19 + 4;
          } while ((uVar18 - uVar17) + -2 != lVar19 + 4);
          lVar19 = lVar19 + 6;
          local_18 = fStack_14;
        }
        if (uVar17 != 0) {
          uVar18 = 0;
          fVar24 = local_18;
          do {
            local_18 = *(float *)(lVar11 + lVar19 * 4 + 0x20 + uVar18 * 4);
            if (local_18 <= fVar24) {
              local_18 = fVar24;
            }
            uVar18 = uVar18 + 1;
            fVar24 = local_18;
          } while (uVar17 != uVar18);
        }
      }
      return local_18;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  local_42 = 0;
  pSVar12 = pSVar13;
  bVar10 = System_String__op_Equality
                     (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  fVar24 = extraout_XMM0_Da;
  if ((char)bVar10 == '\0') {
    if (pSVar13 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar22 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar22 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar22 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        System_Text_RegularExpressions_Regex__Replace_4906910
                  (__this_03,pSVar12,"",(MethodInfo *)0x0);
        return extraout_XMM0_Da_02;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_98 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_a6 = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar18 = 0;
        pSStack_a0 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_a0 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar21 = 0;
label_040653fb:
        pSVar6 = pSStack_a0->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_a4 = uVar21;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IEnumerator) {
              pVVar14 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar11);
              goto label_04065463;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar11);
        }
        pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_a0,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (*pVVar14->methodPtr)(pSStack_a0,pVVar14->method);
        if (cVar9 == '\0') {
          iVar22 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_a0->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IEnumerator) {
              pVVar14 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar11) + 1);
              goto label_040654e8;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar11);
        }
        pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSStack_a0,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (*pVVar14->methodPtr)(pSStack_a0,pVVar14->method);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar22 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar21 < iVar22) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar21 < iVar22) goto label_04065824;
          }
          else if ((int)uVar21 < iVar22) {
            do {
              uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,uVar21,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
              lVar11 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar13;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar13 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar11 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar21 = (__this_00->fields)._size;
          if (uVar21 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar21 + 1;
            pSVar8->m_Items[(int)uVar21] = (Il2CppObject *)pSVar13;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar21,pSVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          uVar21 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_a4 = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,uStack_a4,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar18 = 0;
        System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar18,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
        auVar25 = il2cpp_runtime_helper_022b2c90();
        uStack_a4 = 0;
        iVar22 = 0;
        if (auVar25._8_4_ != 1) {
          plVar15 = (long *)il2cpp_runtime_helper_023051f0(pSStack_a0,TypeInfo_IDisposable);
          if (plVar15 == (long *)0x0) goto label_04065a06;
          lVar11 = *plVar15;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto label_040659df;
          lVar20 = 0;
          goto label_040659d0;
        }
        puVar16 = (undefined8 *)__cxa_begin_catch(auVar25._0_8_);
        unaff_R13 = (long *)*puVar16;
        __cxa_end_catch();
label_04065677:
        uVar18 = TypeInfo_IDisposable;
        plVar15 = (long *)il2cpp_runtime_helper_023051f0();
        fVar24 = extraout_XMM0_Da_03;
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
            lVar20 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar11 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
                puVar16 = (undefined8 *)
                          (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar20);
          }
          puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_040656ed:
          uVar18 = puVar16[1];
          fVar24 = (float)(*(code *)*puVar16)(plVar15);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar22 != 6) && (iVar22 != 0)) {
          return fVar24;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar22 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar18 = (ulong)uStack_a4;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar22 <= (int)uStack_a4) {
            return fVar24;
          }
          goto label_04065871;
        }
        if (iVar22 <= (int)uStack_a4) {
          return fVar24;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_a6 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar18,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = System_Char__ToString((uint16_t)&uStack_a6,(MethodInfo *)0x0);
          lVar11 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar21 = (__this_00->fields)._size;
          if (uVar21 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar21 + 1;
            pSVar8->m_Items[(int)uVar21] = (Il2CppObject *)pSVar13;
            fVar24 = (float)il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar21,pSVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            fVar24 = extraout_XMM0_Da_04;
          }
          uVar21 = (int32_t)uVar18 + 1;
          uVar18 = (ulong)uVar21;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar21) {
            return fVar24;
          }
        }
      } while( true );
    }
    if ((pSVar13->fields)._stringLength < 2) {
      System_String__ToUpper(pSVar13,(MethodInfo *)0x0);
      fVar24 = extraout_XMM0_Da_00;
    }
    else {
      c = System_String__get_Chars(pSVar13,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_42 = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar12 = System_Char__ToString((uint16_t)&local_42,(MethodInfo *)0x0);
      pSVar13 = System_String__Substring(pSVar13,1,(MethodInfo *)0x0);
      System_String__Concat_3ae5ba0(pSVar12,pSVar13,(MethodInfo *)0x0);
      fVar24 = extraout_XMM0_Da_01;
    }
  }
  return fVar24;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar20) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar11 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar16 = (undefined8 *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar16)(plVar15,puVar16[1]);
label_04065a06:
  _Unwind_Resume(auVar25._0_8_);
}


// MiscExtensions$$UpperFirstLetter
// il2cpp: System_String_o* MiscExtensions__UpperFirstLetter (System_String_o* text, const MethodInfo* method);
// 0x4065150

System_String_o * MiscExtensions__UpperFirstLetter(System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  uint16_t c;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_String_o *str1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar12;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar16;
  long lVar17;
  long *unaff_R13;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  uint16_t uStack_7e;
  uint uStack_7c;
  System_Collections_IEnumerator_o *pSStack_78;
  long *plStack_70;
  uint16_t uStack_1a;
  
  uStack_1a = 0;
  pSVar11 = text;
  bVar10 = System_String__op_Equality
                     (text,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (text == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac2b5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac2b5 = '\x01';
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      else {
        iVar19 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
      }
      if (iVar19 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      else {
        __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
      }
      if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
        pSVar11 = System_Text_RegularExpressions_Regex__Replace_4906910
                            (__this_03,pSVar11,"",(MethodInfo *)0x0);
        return pSVar11;
      }
      il2cpp_runtime_helper_022b2c90();
      plStack_70 = &TypeInfo_MiscExtensions;
      if (g_data_057ac2b6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        g_data_057ac2b6 = '\x01';
      }
      uStack_7e = 0;
      __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
      if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
         (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                                (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
         __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
        uVar15 = 0;
        pSStack_78 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                               (__this_01,(MethodInfo *)0x0);
        if (pSStack_78 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
        unaff_R13 = &MethodInfo_Void_Add;
        uVar18 = 0;
label_040653fb:
        pSVar6 = pSStack_78->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        uStack_7c = uVar18;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar12 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16)].methodPtr;
              goto label_04065463;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar16);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_78,TypeInfo_IEnumerator,0);
label_04065463:
        cVar9 = (**ppIVar12)(pSStack_78,(MethodInfo *)ppIVar12[1]);
        if (cVar9 == '\0') {
          iVar19 = 6;
          unaff_R13 = (long *)0x0;
          goto label_04065677;
        }
        pSVar6 = pSStack_78->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerator) {
              ppIVar12 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar16) + 1].methodPtr;
              goto label_040654e8;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar16);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_78,TypeInfo_IEnumerator,1);
label_040654e8:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)
                    (**ppIVar12)(pSStack_78,(MethodInfo *)ppIVar12[1]);
        if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
          bVar2 = (TypeInfo_Match->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar2) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
            il2cpp_runtime_helper_022b2fd0(__this_02);
            goto label_04065803;
          }
          iVar19 = (__this_02->fields)._Index_k__BackingField;
          if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_0406581a;
          }
          else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
            if ((int)uVar18 < iVar19) goto label_04065824;
          }
          else if ((int)uVar18 < iVar19) {
            do {
              uStack_7e = System_String__get_Chars((System_String_o *)__this_03,uVar18,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar11 = System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
              lVar16 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_040657fb;
              }
              uVar5 = (__this_00->fields)._size;
              if (uVar5 < (uint)pSVar8->max_length) {
                (__this_00->fields)._size = uVar5 + 1;
                pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar11;
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,(Il2CppObject *)pSVar11,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (__this_02->fields)._Index_k__BackingField);
          }
          pSVar11 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
          goto label_040653fb;
        }
label_04065803:
        il2cpp_runtime_helper_022b2c90();
label_04065808:
        uStack_7c = 0;
        il2cpp_runtime_helper_022b2c90();
label_04065815:
        il2cpp_runtime_helper_022b2c90();
label_0406581a:
        il2cpp_runtime_helper_022b2c90();
      }
label_0406581f:
      do {
        il2cpp_runtime_helper_022b2c90();
label_04065824:
        uStack_7e = System_String__get_Chars((System_String_o *)__this_03,uStack_7c,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
        il2cpp_runtime_helper_022b2c90();
label_04065864:
        il2cpp_runtime_helper_022b2c90();
label_04065869:
        il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
        uStack_7e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uStack_7c = 0;
        iVar19 = 0;
        if (auVar20._8_4_ != 1) {
          plVar13 = (long *)il2cpp_runtime_helper_023051f0(pSStack_78,TypeInfo_IDisposable);
          if (plVar13 == (long *)0x0) goto label_04065a06;
          lVar16 = *plVar13;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto label_040659df;
          lVar17 = 0;
          goto label_040659d0;
        }
        puVar14 = (undefined8 *)__cxa_begin_catch(auVar20._0_8_);
        unaff_R13 = (long *)*puVar14;
        __cxa_end_catch();
label_04065677:
        uVar15 = TypeInfo_IDisposable;
        plVar13 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar13 != (long *)0x0) {
          lVar16 = *plVar13;
          if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
            lVar17 = 0;
            do {
              if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                puVar14 = (undefined8 *)
                          (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                goto label_040656ed;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
          }
          puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_040656ed:
          uVar15 = puVar14[1];
          (*(code *)*puVar14)(plVar13);
        }
        if (unaff_R13 != (long *)0x0) goto label_04065869;
        if ((iVar19 != 6) && (iVar19 != 0)) {
          return (System_String_o *)__this_00;
        }
        if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
        iVar19 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
        uVar15 = (ulong)uStack_7c;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          if (iVar19 <= (int)uStack_7c) {
            return (System_String_o *)0x0;
          }
          goto label_04065871;
        }
        if (iVar19 <= (int)uStack_7c) {
          return (System_String_o *)__this_00;
        }
        unaff_R13 = &MethodInfo_Void_Add;
        while( true ) {
          uStack_7e = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar15,(MethodInfo *)0x0)
          ;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = System_Char__ToString((uint16_t)&uStack_7e,(MethodInfo *)0x0);
          lVar16 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) break;
          uVar18 = (__this_00->fields)._size;
          if (uVar18 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar18 + 1;
            pSVar8->m_Items[(int)uVar18] = (Il2CppObject *)pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar18,pSVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = (int32_t)uVar15 + 1;
          uVar15 = (ulong)uVar18;
          if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar18) {
            return (System_String_o *)__this_00;
          }
        }
      } while( true );
    }
    if ((text->fields)._stringLength < 2) {
      text = System_String__ToUpper(text,(MethodInfo *)0x0);
    }
    else {
      c = System_String__get_Chars(text,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_1a = System_Char__ToUpper_3c18a00(c,(MethodInfo *)0x0);
      pSVar11 = System_Char__ToString((uint16_t)&uStack_1a,(MethodInfo *)0x0);
      str1 = System_String__Substring(text,1,(MethodInfo *)0x0);
      text = System_String__Concat_3ae5ba0(pSVar11,str1,(MethodInfo *)0x0);
    }
  }
  return text;
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
label_040659d0:
    if (*(ulong *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)(lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
label_04065a06:
  _Unwind_Resume(auVar20._0_8_);
}


// MiscExtensions$$StripHex
// il2cpp: System_String_o* MiscExtensions__StripHex (System_String_o* text, const MethodInfo* method);
// 0x4065220

System_String_o * MiscExtensions__StripHex(System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Object_array *pSVar8;
  char cVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  Il2CppMethodPointer *ppIVar11;
  System_Text_RegularExpressions_Capture_o *__this_02;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  System_Text_RegularExpressions_Regex_o *__this_03;
  long lVar15;
  long lVar16;
  long *unaff_R13;
  uint uVar17;
  int iVar18;
  undefined1 auVar19 [12];
  uint16_t uStack_56;
  uint uStack_54;
  System_Collections_IEnumerator_o *pSStack_50;
  long *plStack_48;
  
  if (g_data_057ac2b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b5 = '\x01';
    iVar18 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar18 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar18 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
  }
  else {
    __this_03 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x38);
  }
  if (__this_03 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar10 = System_Text_RegularExpressions_Regex__Replace_4906910
                        (__this_03,text,"",(MethodInfo *)0x0);
    return pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_48 = &TypeInfo_MiscExtensions;
  if (g_data_057ac2b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ac2b6 = '\x01';
  }
  uStack_56 = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660
                            (__this,(System_String_o *)__this_03,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    uVar14 = 0;
    pSStack_50 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_01,(MethodInfo *)0x0);
    if (pSStack_50 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
    unaff_R13 = &MethodInfo_Void_Add;
    uVar17 = 0;
label_040653fb:
    pSVar6 = pSStack_50->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uStack_54 = uVar17;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar15)].methodPtr;
          goto label_04065463;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar15);
    }
    ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_50,TypeInfo_IEnumerator,0);
label_04065463:
    cVar9 = (**ppIVar11)(pSStack_50,(MethodInfo *)ppIVar11[1]);
    if (cVar9 == '\0') {
      iVar18 = 6;
      unaff_R13 = (long *)0x0;
      goto label_04065677;
    }
    pSVar6 = pSStack_50->klass;
    uVar4._0_1_ = (pSVar6->_2).rank;
    uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          ppIVar11 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar15) + 1].methodPtr;
          goto label_040654e8;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSStack_50,TypeInfo_IEnumerator,1);
label_040654e8:
    __this_02 = (System_Text_RegularExpressions_Capture_o *)(**ppIVar11)(pSStack_50,(MethodInfo *)ppIVar11[1])
    ;
    if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
      bVar2 = (TypeInfo_Match->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar2) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
        il2cpp_runtime_helper_022b2fd0(__this_02);
        goto label_04065803;
      }
      iVar18 = (__this_02->fields)._Index_k__BackingField;
      if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) {
        if ((int)uVar17 < iVar18) goto label_0406581a;
      }
      else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
        if ((int)uVar17 < iVar18) goto label_04065824;
      }
      else if ((int)uVar17 < iVar18) {
        do {
          uStack_56 = System_String__get_Chars((System_String_o *)__this_03,uVar17,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = System_Char__ToString((uint16_t)&uStack_56,(MethodInfo *)0x0);
          lVar15 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_040657fb;
          }
          uVar5 = (__this_00->fields)._size;
          if (uVar5 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar5 + 1;
            pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)pSVar10;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (__this_02->fields)._Index_k__BackingField);
      }
      pSVar10 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
      lVar15 = MethodInfo_Void_Add;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_04065808;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 == (System_Object_array *)0x0) goto label_04065815;
      uVar17 = (__this_00->fields)._size;
      if (uVar17 < (uint)pSVar8->max_length) {
        (__this_00->fields)._size = uVar17 + 1;
        pSVar8->m_Items[(int)uVar17] = (Il2CppObject *)pSVar10;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar17,pSVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)pSVar10,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      uVar17 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
      goto label_040653fb;
    }
label_04065803:
    il2cpp_runtime_helper_022b2c90();
label_04065808:
    uStack_54 = 0;
    il2cpp_runtime_helper_022b2c90();
label_04065815:
    il2cpp_runtime_helper_022b2c90();
label_0406581a:
    il2cpp_runtime_helper_022b2c90();
  }
label_0406581f:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04065824:
    uStack_56 = System_String__get_Chars((System_String_o *)__this_03,uStack_54,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    System_Char__ToString((uint16_t)&uStack_56,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
label_04065864:
    il2cpp_runtime_helper_022b2c90();
label_04065869:
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
    uStack_56 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar14,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Char__ToString((uint16_t)&uStack_56,(MethodInfo *)0x0);
    auVar19 = il2cpp_runtime_helper_022b2c90();
    uStack_54 = 0;
    iVar18 = 0;
    if (auVar19._8_4_ != 1) {
      plVar12 = (long *)il2cpp_runtime_helper_023051f0(pSStack_50,TypeInfo_IDisposable);
      if (plVar12 == (long *)0x0) goto label_04065a06;
      lVar15 = *plVar12;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto label_040659df;
      lVar16 = 0;
      break;
    }
    puVar13 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
    unaff_R13 = (long *)*puVar13;
    __cxa_end_catch();
label_04065677:
    uVar14 = TypeInfo_IDisposable;
    plVar12 = (long *)il2cpp_runtime_helper_023051f0();
    if (plVar12 != (long *)0x0) {
      lVar15 = *plVar12;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(ulong *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
            puVar13 = (undefined8 *)
                      (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
            goto label_040656ed;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
      uVar14 = puVar13[1];
      (*(code *)*puVar13)(plVar12);
    }
    if (unaff_R13 != (long *)0x0) goto label_04065869;
    if ((iVar18 != 6) && (iVar18 != 0)) {
      return (System_String_o *)__this_00;
    }
    if (__this_03 == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_0406581f;
    iVar18 = (int)(__this_03->fields).internalMatchTimeout.fields._ticks;
    uVar14 = (ulong)uStack_54;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar18 <= (int)uStack_54) {
        return (System_String_o *)0x0;
      }
      goto label_04065871;
    }
    if (iVar18 <= (int)uStack_54) {
      return (System_String_o *)__this_00;
    }
    unaff_R13 = &MethodInfo_Void_Add;
    while( true ) {
      uStack_56 = System_String__get_Chars((System_String_o *)__this_03,(int32_t)uVar14,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Char__ToString((uint16_t)&uStack_56,(MethodInfo *)0x0);
      lVar15 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 == (System_Object_array *)0x0) break;
      uVar17 = (__this_00->fields)._size;
      if (uVar17 < (uint)pSVar8->max_length) {
        (__this_00->fields)._size = uVar17 + 1;
        pSVar8->m_Items[(int)uVar17] = (Il2CppObject *)pSVar10;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar17,pSVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)pSVar10,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      uVar17 = (int32_t)uVar14 + 1;
      uVar14 = (ulong)uVar17;
      if ((int)(__this_03->fields).internalMatchTimeout.fields._ticks <= (int)uVar17) {
        return (System_String_o *)__this_00;
      }
    }
  } while( true );
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
    if (*(ulong *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar19._0_8_);
}


// MiscExtensions$$Tokenize
// il2cpp: System_Collections_Generic_List_string__o* MiscExtensions__Tokenize (System_String_o* input, const MethodInfo* method);
// 0x40652c0

System_Collections_Generic_List_string__o *
MiscExtensions__Tokenize(System_String_o *input,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Text_RegularExpressions_Regex_o *__this;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_String_array *pSVar8;
  char cVar9;
  System_Collections_Generic_List_string__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar10;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *unaff_R13;
  uint uVar17;
  int iVar18;
  undefined1 auVar19 [12];
  uint16_t local_3e;
  uint local_3c;
  System_Collections_IEnumerator_o *local_38;
  
  if (g_data_057ac2b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ac2b6 = '\x01';
  }
  local_3e = 0;
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (__this_01 = System_Text_RegularExpressions_Regex__Matches_4906660(__this,input,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    uVar14 = 0;
    local_38 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_01,(MethodInfo *)0x0);
    if (local_38 == (System_Collections_IEnumerator_o *)0x0) goto label_04065864;
    unaff_R13 = &MethodInfo_Void_Add;
    uVar17 = 0;
label_040653fb:
    pSVar6 = local_38->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    local_3c = uVar17;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar15);
          goto label_04065463;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar15);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(local_38,TypeInfo_IEnumerator,0);
label_04065463:
    cVar9 = (*pVVar10->methodPtr)(local_38,pVVar10->method);
    if (cVar9 == '\0') {
      iVar18 = 6;
      unaff_R13 = (long *)0x0;
      goto label_04065677;
    }
    pSVar6 = local_38->klass;
    uVar4._0_1_ = (pSVar6->_2).rank;
    uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar15) + 1);
          goto label_040654e8;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(local_38,TypeInfo_IEnumerator,1);
label_040654e8:
    __this_02 = (System_Text_RegularExpressions_Capture_o *)(*pVVar10->methodPtr)(local_38,pVVar10->method);
    if (__this_02 != (System_Text_RegularExpressions_Capture_o *)0x0) {
      bVar2 = (TypeInfo_Match->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar2) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Match)) {
label_040657fb:
        il2cpp_runtime_helper_022b2fd0(__this_02);
        goto label_04065803;
      }
      iVar18 = (__this_02->fields)._Index_k__BackingField;
      if (input == (System_String_o *)0x0) {
        if ((int)uVar17 < iVar18) goto label_0406581a;
      }
      else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        if ((int)uVar17 < iVar18) goto label_04065824;
      }
      else if ((int)uVar17 < iVar18) {
        do {
          local_3e = System_String__get_Chars(input,uVar17,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
          lVar15 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_String_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_040657fb;
          }
          uVar5 = (__this_00->fields)._size;
          if (uVar5 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar5 + 1;
            pSVar8->m_Items[(int)uVar5] = pSVar11;
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (__this_02->fields)._Index_k__BackingField);
      }
      pSVar11 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
      lVar15 = MethodInfo_Void_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_04065808;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 == (System_String_array *)0x0) goto label_04065815;
      uVar17 = (__this_00->fields)._size;
      if (uVar17 < (uint)pSVar8->max_length) {
        (__this_00->fields)._size = uVar17 + 1;
        pSVar8->m_Items[(int)uVar17] = pSVar11;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar17,pSVar11);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      uVar17 = (__this_02->fields)._Length_k__BackingField + (__this_02->fields)._Index_k__BackingField;
      goto label_040653fb;
    }
label_04065803:
    il2cpp_runtime_helper_022b2c90();
label_04065808:
    local_3c = 0;
    il2cpp_runtime_helper_022b2c90();
label_04065815:
    il2cpp_runtime_helper_022b2c90();
label_0406581a:
    il2cpp_runtime_helper_022b2c90();
  }
label_0406581f:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04065824:
    local_3e = System_String__get_Chars(input,local_3c,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
label_04065864:
    il2cpp_runtime_helper_022b2c90();
label_04065869:
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04065871:
    local_3e = System_String__get_Chars(input,(int32_t)uVar14,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
    auVar19 = il2cpp_runtime_helper_022b2c90();
    local_3c = 0;
    iVar18 = 0;
    if (auVar19._8_4_ != 1) {
      plVar12 = (long *)il2cpp_runtime_helper_023051f0(local_38,TypeInfo_IDisposable);
      if (plVar12 == (long *)0x0) goto label_04065a06;
      lVar15 = *plVar12;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto label_040659df;
      lVar16 = 0;
      break;
    }
    puVar13 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
    unaff_R13 = (long *)*puVar13;
    __cxa_end_catch();
label_04065677:
    uVar14 = TypeInfo_IDisposable;
    plVar12 = (long *)il2cpp_runtime_helper_023051f0();
    if (plVar12 != (long *)0x0) {
      lVar15 = *plVar12;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(ulong *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
            puVar13 = (undefined8 *)
                      (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
            goto label_040656ed;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040656ed:
      uVar14 = puVar13[1];
      (*(code *)*puVar13)(plVar12);
    }
    if (unaff_R13 != (long *)0x0) goto label_04065869;
    if ((iVar18 != 6) && (iVar18 != 0)) {
      return __this_00;
    }
    if (input == (System_String_o *)0x0) goto label_0406581f;
    iVar18 = (input->fields)._stringLength;
    uVar14 = (ulong)local_3c;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      if (iVar18 <= (int)local_3c) {
        return (System_Collections_Generic_List_string__o *)0x0;
      }
      goto label_04065871;
    }
    if (iVar18 <= (int)local_3c) {
      return __this_00;
    }
    unaff_R13 = &MethodInfo_Void_Add;
    while( true ) {
      local_3e = System_String__get_Chars(input,(int32_t)uVar14,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = System_Char__ToString((uint16_t)&local_3e,(MethodInfo *)0x0);
      lVar15 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 == (System_String_array *)0x0) break;
      uVar17 = (__this_00->fields)._size;
      if (uVar17 < (uint)pSVar8->max_length) {
        (__this_00->fields)._size = uVar17 + 1;
        pSVar8->m_Items[(int)uVar17] = pSVar11;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar17,pSVar11);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      uVar17 = (int32_t)uVar14 + 1;
      uVar14 = (ulong)uVar17;
      if ((input->fields)._stringLength <= (int)uVar17) {
        return __this_00;
      }
    }
  } while( true );
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
    if (*(ulong *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)(lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto label_040659fd;
    }
  }
label_040659df:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IDisposable,0);
label_040659fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
label_04065a06:
  _Unwind_Resume(auVar19._0_8_);
}


// MiscExtensions$$StripRichText
// il2cpp: System_String_o* MiscExtensions__StripRichText (System_String_o* text, const MethodInfo* method);
// 0x4065a30

System_String_o * MiscExtensions__StripRichText(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined8 uVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  int iVar6;
  System_String_o *pSVar7;
  Il2CppRGCTXData IVar8;
  Il2CppRGCTXData IVar9;
  System_String_array *values;
  MethodInfo *pMVar10;
  Il2CppRGCTXData *values_00;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar11;
  int iVar12;
  Il2CppRGCTXData IVar13;
  Il2CppRGCTXData *method_00;
  System_Text_RegularExpressions_Regex_o *pSVar14;
  System_Text_RegularExpressions_Regex_o *__this_04;
  Il2CppRGCTXData *text_00;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined1 auVar15 [12];
  UnityEngine_Color_o color;
  undefined1 in_stack_fffffffffffffed8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o SStack_f8;
  Il2CppRGCTXData *pIStack_e0;
  
  if (g_data_057ac2b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b7 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065a53;
label_04065ab0:
    il2cpp_runtime_helper_02337ed0();
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065ab0;
label_04065a53:
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar14,text,"",(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065af3;
label_04065b50:
    il2cpp_runtime_helper_02337ed0();
    __this_04 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065b50;
label_04065af3:
    __this_04 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (__this_04 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (__this_04,(System_String_o *)pSVar14,"",(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"<color=#FFFFFF>");
    g_data_057ac2b9 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065b93;
label_04065bf0:
    il2cpp_runtime_helper_02337ed0();
    IVar8 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40))->method;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065bf0;
label_04065b93:
    IVar8 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40))->method;
  }
  if (IVar8.rgctxDataDummy != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       ((System_Text_RegularExpressions_Regex_o *)IVar8.method,(System_String_o *)__this_04,
                        "<color=#FFFFFF>",(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2ba = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065c34;
label_04065c7b:
    il2cpp_runtime_helper_02337ed0();
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065c7b;
label_04065c34:
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar14,(System_String_o *)IVar8.method,"",(MethodInfo *)0x0);
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x48);
    method = IVar8.method;
    if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                         (pSVar14,pSVar7,"",(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  pSVar7 = (System_String_o *)0x0;
  uVar3 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bb = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar8.method = (MethodInfo *)MiscExtensions__StripColor(pSVar7,method);
  color.fields.a = (float)in_XMM1_Db;
  color.fields.b = (float)in_XMM1_Da;
  text_00 = (Il2CppRGCTXData *)0x0;
  color.fields.r = (float)(int)uVar3;
  color.fields.g = (float)(int)((ulong)uVar3 >> 0x20);
  pSVar7 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    iVar12 = (pSVar7->fields)._stringLength;
    if (iVar12 < 3) {
      return ((MethodInfo *)IVar8).rgctxDataDummy;
    }
    IVar9.method = (MethodInfo *)System_String__Substring_3af8da0(pSVar7,0,iVar12 + -2,(MethodInfo *)0x0);
    method = (MethodInfo *)0x5;
    text_00 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    IVar13 = "<color=#";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        text_00 = (Il2CppRGCTXData *)values->m_Items;
        values->m_Items[0] = (System_String_o *)"<color=#";
        il2cpp_runtime_helper_022b4080();
        method = IVar13.method;
        if (1 < (uint)values->max_length) {
          text_00 = (Il2CppRGCTXData *)(values->m_Items + 1);
          ((Il2CppRGCTXData *)(values->m_Items + 1))->method = (MethodInfo *)IVar9;
          il2cpp_runtime_helper_022b4080();
          IVar13 = ">";
          method = IVar9.method;
          if (2 < (uint)values->max_length) {
            text_00 = (Il2CppRGCTXData *)(values->m_Items + 2);
            *(Il2CppRGCTXData *)(values->m_Items + 2) = ">";
            il2cpp_runtime_helper_022b4080();
            method = IVar13.method;
            if (3 < (uint)values->max_length) {
              text_00 = (Il2CppRGCTXData *)(values->m_Items + 3);
              ((Il2CppRGCTXData *)(values->m_Items + 3))->method = (MethodInfo *)IVar8;
              il2cpp_runtime_helper_022b4080();
              method = IVar8.method;
              if (4 < (uint)values->max_length) {
                *(Il2CppRGCTXData *)(values->m_Items + 4) = "</color>";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar7 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar7;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  IVar8.method = method;
  if (g_data_057ac2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bc = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)MiscExtensions__StripColor((System_String_o *)text_00,IVar8.method);
  iVar12 = 5;
  method_00 = TypeInfo_string;
  values_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar8 = "<color=#";
  pIStack_e0 = text_00;
  if (values_00 != (Il2CppRGCTXData *)0x0) {
    if (*(int *)(values_00 + 3) != 0) {
      method_00 = values_00 + 4;
      values_00[4] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      iVar12 = IVar8._0_4_;
      if (1 < *(uint *)(values_00 + 3)) {
        method_00 = values_00 + 5;
        values_00[5].method = method;
        IVar13.method = method;
        il2cpp_runtime_helper_022b4080();
        IVar8 = ">";
        iVar12 = IVar13._0_4_;
        if (2 < *(uint *)(values_00 + 3)) {
          method_00 = values_00 + 6;
          values_00[6] = ">";
          il2cpp_runtime_helper_022b4080();
          iVar12 = IVar8._0_4_;
          if (3 < *(uint *)(values_00 + 3)) {
            method_00 = values_00 + 7;
            values_00[7].method = pMVar10;
            il2cpp_runtime_helper_022b4080();
            iVar12 = (int)pMVar10;
            if (4 < *(uint *)(values_00 + 3)) {
              values_00[8] = "</color>";
              il2cpp_runtime_helper_022b4080(values_00 + 8);
              pSVar7 = System_String__Concat_3af7570((System_String_array *)values_00,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_e0 = values_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar6 = 0;
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar14,(System_String_o *)method_00,"",(MethodInfo *)0x0);
    IVar8.method = (MethodInfo *)MiscExtensions__Tokenize(pSVar7,(MethodInfo *)method_00);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    method = IVar8.method;
    if (IVar8.rgctxDataDummy != (System_Text_RegularExpressions_Regex_o *)0x0) {
      method = (*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_f8,(System_Collections_Generic_List_object__o *)IVar8.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_f8.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_00.fields._version = iVar12;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8._0_8_;
            __this_00.fields._index = in_stack_fffffffffffffed8._8_4_;
            __this_00.fields._current = (Il2CppObject *)pSVar16;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8);
            if ((char)bVar4 == '\0') goto label_040663ef;
            if ((System_String_o *)SStack_f8.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)SStack_f8.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar4 = System_String__StartsWith
                              ((System_String_o *)SStack_f8.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') goto label_04066421;
            bVar4 = System_String__StartsWith
                              ((System_String_o *)SStack_f8.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar4 == '\0');
        }
        else {
          do {
            while( true ) {
              __this.fields._version = iVar12;
              __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8._0_8_;
              __this.fields._index = in_stack_fffffffffffffed8._8_4_;
              __this.fields._current = (Il2CppObject *)pSVar16;
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8);
              if ((char)bVar4 == '\0') goto label_040663ef;
              if ((System_String_o *)SStack_f8.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)SStack_f8.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar4 = System_String__StartsWith
                                ((System_String_o *)SStack_f8.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') break;
              pSVar7 = System_String__Substring_3af8da0
                                 ((System_String_o *)SStack_f8.fields._current,2,
                                  ((System_String_Fields *)((long)SStack_f8.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar4 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
                if ((char)bVar4 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  method = (MethodInfo *)
                           System_String__Concat_3ae5ba0
                                     ((System_String_o *)method,(System_String_o *)SStack_f8.fields._current,
                                      (MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar4 = System_String__StartsWith
                              ((System_String_o *)SStack_f8.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar4 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar5 = System_String__IndexOfAny
                          ((System_String_o *)SStack_f8.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar7 = System_String__Substring_3af8da0
                           ((System_String_o *)SStack_f8.fields._current,1,iVar5 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar7,MethodInfo_Void_Push);
        method = (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           ((System_String_o *)method,(System_String_o *)SStack_f8.fields._current,
                            (MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar7 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      method = (MethodInfo *)
               System_String__Concat_3af7470
                         ((System_String_o *)method,"</",pSVar7,">".method,(MethodInfo *)0x0)
      ;
      if ((unaff_R13->fields)._size < 1) {
        return method.rgctxDataDummy;
      }
    }
  } while( true );
label_040663a0:
  iVar6 = iVar6 + 1;
  if (iVar12 < iVar6) goto label_040663ef;
  method = (MethodInfo *)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)method,(System_String_o *)SStack_f8.fields._current,(MethodInfo *)0x0
                     );
  goto label_040661e6;
label_040663ef:
  __this_01.fields._version = iVar12;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8._0_8_;
  __this_01.fields._index = in_stack_fffffffffffffed8._8_4_;
  __this_01.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return method.rgctxDataDummy;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)SStack_f8.fields._current,2,
             ((System_String_Fields *)((long)SStack_f8.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar2 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._version = iVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffed8._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
    if (lVar2 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._version = iVar12;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed8._0_8_;
  __this_03.fields._index = in_stack_fffffffffffffed8._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
  _Unwind_Resume(auVar15._0_8_);
}


// MiscExtensions$$StripIllegalRichText
// il2cpp: System_String_o* MiscExtensions__StripIllegalRichText (System_String_o* text, const MethodInfo* method);
// 0x4065ad0

System_String_o * MiscExtensions__StripIllegalRichText(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined8 uVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  int iVar6;
  System_String_o *pSVar7;
  Il2CppRGCTXData IVar8;
  Il2CppRGCTXData IVar9;
  System_String_array *values;
  MethodInfo *pMVar10;
  Il2CppRGCTXData *values_00;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar11;
  int iVar12;
  Il2CppRGCTXData IVar13;
  Il2CppRGCTXData *method_00;
  System_Text_RegularExpressions_Regex_o *pSVar14;
  Il2CppRGCTXData *text_00;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined1 auVar15 [12];
  UnityEngine_Color_o color;
  undefined1 in_stack_fffffffffffffef0 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o SStack_e0;
  Il2CppRGCTXData *pIStack_c8;
  
  if (g_data_057ac2b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065af3;
label_04065b50:
    il2cpp_runtime_helper_02337ed0();
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065b50;
label_04065af3:
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar14,text,"",(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"<color=#FFFFFF>");
    g_data_057ac2b9 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065b93;
label_04065bf0:
    il2cpp_runtime_helper_02337ed0();
    IVar8 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40))->method;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065bf0;
label_04065b93:
    IVar8 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40))->method;
  }
  if (IVar8.rgctxDataDummy != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       ((System_Text_RegularExpressions_Regex_o *)IVar8.method,(System_String_o *)pSVar14,
                        "<color=#FFFFFF>",(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2ba = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065c34;
label_04065c7b:
    il2cpp_runtime_helper_02337ed0();
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065c7b;
label_04065c34:
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar14,(System_String_o *)IVar8.method,"",(MethodInfo *)0x0);
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x48);
    method = IVar8.method;
    if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                         (pSVar14,pSVar7,"",(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  pSVar7 = (System_String_o *)0x0;
  uVar3 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bb = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar8.method = (MethodInfo *)MiscExtensions__StripColor(pSVar7,method);
  color.fields.a = (float)in_XMM1_Db;
  color.fields.b = (float)in_XMM1_Da;
  text_00 = (Il2CppRGCTXData *)0x0;
  color.fields.r = (float)(int)uVar3;
  color.fields.g = (float)(int)((ulong)uVar3 >> 0x20);
  pSVar7 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    iVar12 = (pSVar7->fields)._stringLength;
    if (iVar12 < 3) {
      return ((MethodInfo *)IVar8).rgctxDataDummy;
    }
    IVar9.method = (MethodInfo *)System_String__Substring_3af8da0(pSVar7,0,iVar12 + -2,(MethodInfo *)0x0);
    method = (MethodInfo *)0x5;
    text_00 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    IVar13 = "<color=#";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        text_00 = (Il2CppRGCTXData *)values->m_Items;
        values->m_Items[0] = (System_String_o *)"<color=#";
        il2cpp_runtime_helper_022b4080();
        method = IVar13.method;
        if (1 < (uint)values->max_length) {
          text_00 = (Il2CppRGCTXData *)(values->m_Items + 1);
          ((Il2CppRGCTXData *)(values->m_Items + 1))->method = (MethodInfo *)IVar9;
          il2cpp_runtime_helper_022b4080();
          IVar13 = ">";
          method = IVar9.method;
          if (2 < (uint)values->max_length) {
            text_00 = (Il2CppRGCTXData *)(values->m_Items + 2);
            *(Il2CppRGCTXData *)(values->m_Items + 2) = ">";
            il2cpp_runtime_helper_022b4080();
            method = IVar13.method;
            if (3 < (uint)values->max_length) {
              text_00 = (Il2CppRGCTXData *)(values->m_Items + 3);
              ((Il2CppRGCTXData *)(values->m_Items + 3))->method = (MethodInfo *)IVar8;
              il2cpp_runtime_helper_022b4080();
              method = IVar8.method;
              if (4 < (uint)values->max_length) {
                *(Il2CppRGCTXData *)(values->m_Items + 4) = "</color>";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar7 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar7;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  IVar8.method = method;
  if (g_data_057ac2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bc = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)MiscExtensions__StripColor((System_String_o *)text_00,IVar8.method);
  iVar12 = 5;
  method_00 = TypeInfo_string;
  values_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar8 = "<color=#";
  pIStack_c8 = text_00;
  if (values_00 != (Il2CppRGCTXData *)0x0) {
    if (*(int *)(values_00 + 3) != 0) {
      method_00 = values_00 + 4;
      values_00[4] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      iVar12 = IVar8._0_4_;
      if (1 < *(uint *)(values_00 + 3)) {
        method_00 = values_00 + 5;
        values_00[5].method = method;
        IVar13.method = method;
        il2cpp_runtime_helper_022b4080();
        IVar8 = ">";
        iVar12 = IVar13._0_4_;
        if (2 < *(uint *)(values_00 + 3)) {
          method_00 = values_00 + 6;
          values_00[6] = ">";
          il2cpp_runtime_helper_022b4080();
          iVar12 = IVar8._0_4_;
          if (3 < *(uint *)(values_00 + 3)) {
            method_00 = values_00 + 7;
            values_00[7].method = pMVar10;
            il2cpp_runtime_helper_022b4080();
            iVar12 = (int)pMVar10;
            if (4 < *(uint *)(values_00 + 3)) {
              values_00[8] = "</color>";
              il2cpp_runtime_helper_022b4080(values_00 + 8);
              pSVar7 = System_String__Concat_3af7570((System_String_array *)values_00,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_c8 = values_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    pSVar14 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (pSVar14 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar6 = 0;
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar14,(System_String_o *)method_00,"",(MethodInfo *)0x0);
    IVar8.method = (MethodInfo *)MiscExtensions__Tokenize(pSVar7,(MethodInfo *)method_00);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    method = IVar8.method;
    if (IVar8.rgctxDataDummy != (System_Text_RegularExpressions_Regex_o *)0x0) {
      method = (*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_e0,(System_Collections_Generic_List_object__o *)IVar8.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_e0.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_00.fields._version = iVar12;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef0._0_8_;
            __this_00.fields._index = in_stack_fffffffffffffef0._8_4_;
            __this_00.fields._current = (Il2CppObject *)pSVar16;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff00);
            if ((char)bVar4 == '\0') goto label_040663ef;
            if ((System_String_o *)SStack_e0.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)SStack_e0.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar4 = System_String__StartsWith
                              ((System_String_o *)SStack_e0.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') goto label_04066421;
            bVar4 = System_String__StartsWith
                              ((System_String_o *)SStack_e0.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar4 == '\0');
        }
        else {
          do {
            while( true ) {
              __this.fields._version = iVar12;
              __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef0._0_8_;
              __this.fields._index = in_stack_fffffffffffffef0._8_4_;
              __this.fields._current = (Il2CppObject *)pSVar16;
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff00);
              if ((char)bVar4 == '\0') goto label_040663ef;
              if ((System_String_o *)SStack_e0.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)SStack_e0.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar4 = System_String__StartsWith
                                ((System_String_o *)SStack_e0.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') break;
              pSVar7 = System_String__Substring_3af8da0
                                 ((System_String_o *)SStack_e0.fields._current,2,
                                  ((System_String_Fields *)((long)SStack_e0.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar4 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
                if ((char)bVar4 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  method = (MethodInfo *)
                           System_String__Concat_3ae5ba0
                                     ((System_String_o *)method,(System_String_o *)SStack_e0.fields._current,
                                      (MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar4 = System_String__StartsWith
                              ((System_String_o *)SStack_e0.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar4 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar5 = System_String__IndexOfAny
                          ((System_String_o *)SStack_e0.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar7 = System_String__Substring_3af8da0
                           ((System_String_o *)SStack_e0.fields._current,1,iVar5 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar7,MethodInfo_Void_Push);
        method = (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           ((System_String_o *)method,(System_String_o *)SStack_e0.fields._current,
                            (MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar7 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      method = (MethodInfo *)
               System_String__Concat_3af7470
                         ((System_String_o *)method,"</",pSVar7,">".method,(MethodInfo *)0x0)
      ;
      if ((unaff_R13->fields)._size < 1) {
        return method.rgctxDataDummy;
      }
    }
  } while( true );
label_040663a0:
  iVar6 = iVar6 + 1;
  if (iVar12 < iVar6) goto label_040663ef;
  method = (MethodInfo *)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)method,(System_String_o *)SStack_e0.fields._current,(MethodInfo *)0x0
                     );
  goto label_040661e6;
label_040663ef:
  __this_01.fields._version = iVar12;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef0._0_8_;
  __this_01.fields._index = in_stack_fffffffffffffef0._8_4_;
  __this_01.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return method.rgctxDataDummy;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)SStack_e0.fields._current,2,
             ((System_String_Fields *)((long)SStack_e0.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar2 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._version = iVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef0._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffef0._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
    if (lVar2 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._version = iVar12;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef0._0_8_;
  __this_03.fields._index = in_stack_fffffffffffffef0._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
  _Unwind_Resume(auVar15._0_8_);
}


// MiscExtensions$$ForceWhiteColorTag
// il2cpp: System_String_o* MiscExtensions__ForceWhiteColorTag (System_String_o* text, const MethodInfo* method);
// 0x4065b70

System_String_o * MiscExtensions__ForceWhiteColorTag(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined8 uVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  int iVar7;
  System_String_o *pSVar8;
  Il2CppRGCTXData IVar9;
  Il2CppRGCTXData IVar10;
  System_String_array *values;
  MethodInfo *pMVar11;
  Il2CppRGCTXData *values_00;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar12;
  int iVar13;
  Il2CppRGCTXData IVar14;
  Il2CppRGCTXData *method_00;
  Il2CppRGCTXData *text_00;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined1 auVar15 [12];
  UnityEngine_Color_o color;
  undefined1 in_stack_ffffffffffffff08 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o SStack_c8;
  Il2CppRGCTXData *pIStack_b0;
  
  if (g_data_057ac2b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"<color=#FFFFFF>");
    g_data_057ac2b9 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065b93;
label_04065bf0:
    il2cpp_runtime_helper_02337ed0();
    IVar9 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40))->method;
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065bf0;
label_04065b93:
    IVar9 = (Il2CppRGCTXData)((Il2CppRGCTXData *)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40))->method;
  }
  if (IVar9.rgctxDataDummy != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar8 = System_Text_RegularExpressions_Regex__Replace_4906910
                       ((System_Text_RegularExpressions_Regex_o *)IVar9.method,text,"<color=#FFFFFF>",
                        (MethodInfo *)0x0);
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2ba = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065c34;
label_04065c7b:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065c7b;
label_04065c34:
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar8 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar2,(System_String_o *)IVar9.method,"",(MethodInfo *)0x0);
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x48);
    method = IVar9.method;
    if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar8 = System_Text_RegularExpressions_Regex__Replace_4906910
                         (pSVar2,pSVar8,"",(MethodInfo *)0x0);
      return pSVar8;
    }
  }
  pSVar8 = (System_String_o *)0x0;
  uVar4 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bb = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar9.method = (MethodInfo *)MiscExtensions__StripColor(pSVar8,method);
  color.fields.a = (float)in_XMM1_Db;
  color.fields.b = (float)in_XMM1_Da;
  text_00 = (Il2CppRGCTXData *)0x0;
  color.fields.r = (float)(int)uVar4;
  color.fields.g = (float)(int)((ulong)uVar4 >> 0x20);
  pSVar8 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar8 != (System_String_o *)0x0) {
    iVar13 = (pSVar8->fields)._stringLength;
    if (iVar13 < 3) {
      return ((MethodInfo *)IVar9).rgctxDataDummy;
    }
    IVar10.method = (MethodInfo *)System_String__Substring_3af8da0(pSVar8,0,iVar13 + -2,(MethodInfo *)0x0);
    method = (MethodInfo *)0x5;
    text_00 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    IVar14 = "<color=#";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        text_00 = (Il2CppRGCTXData *)values->m_Items;
        values->m_Items[0] = (System_String_o *)"<color=#";
        il2cpp_runtime_helper_022b4080();
        method = IVar14.method;
        if (1 < (uint)values->max_length) {
          text_00 = (Il2CppRGCTXData *)(values->m_Items + 1);
          ((Il2CppRGCTXData *)(values->m_Items + 1))->method = (MethodInfo *)IVar10;
          il2cpp_runtime_helper_022b4080();
          IVar14 = ">";
          method = IVar10.method;
          if (2 < (uint)values->max_length) {
            text_00 = (Il2CppRGCTXData *)(values->m_Items + 2);
            *(Il2CppRGCTXData *)(values->m_Items + 2) = ">";
            il2cpp_runtime_helper_022b4080();
            method = IVar14.method;
            if (3 < (uint)values->max_length) {
              text_00 = (Il2CppRGCTXData *)(values->m_Items + 3);
              ((Il2CppRGCTXData *)(values->m_Items + 3))->method = (MethodInfo *)IVar9;
              il2cpp_runtime_helper_022b4080();
              method = IVar9.method;
              if (4 < (uint)values->max_length) {
                *(Il2CppRGCTXData *)(values->m_Items + 4) = "</color>";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar8 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar8;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  IVar9.method = method;
  if (g_data_057ac2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bc = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)MiscExtensions__StripColor((System_String_o *)text_00,IVar9.method);
  iVar13 = 5;
  method_00 = TypeInfo_string;
  values_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar9 = "<color=#";
  pIStack_b0 = text_00;
  if (values_00 != (Il2CppRGCTXData *)0x0) {
    if (*(int *)(values_00 + 3) != 0) {
      method_00 = values_00 + 4;
      values_00[4] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      iVar13 = IVar9._0_4_;
      if (1 < *(uint *)(values_00 + 3)) {
        method_00 = values_00 + 5;
        values_00[5].method = method;
        IVar14.method = method;
        il2cpp_runtime_helper_022b4080();
        IVar9 = ">";
        iVar13 = IVar14._0_4_;
        if (2 < *(uint *)(values_00 + 3)) {
          method_00 = values_00 + 6;
          values_00[6] = ">";
          il2cpp_runtime_helper_022b4080();
          iVar13 = IVar9._0_4_;
          if (3 < *(uint *)(values_00 + 3)) {
            method_00 = values_00 + 7;
            values_00[7].method = pMVar11;
            il2cpp_runtime_helper_022b4080();
            iVar13 = (int)pMVar11;
            if (4 < *(uint *)(values_00 + 3)) {
              values_00[8] = "</color>";
              il2cpp_runtime_helper_022b4080(values_00 + 8);
              pSVar8 = System_String__Concat_3af7570((System_String_array *)values_00,(MethodInfo *)0x0);
              return pSVar8;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_b0 = values_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar7 = 0;
    pSVar8 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar2,(System_String_o *)method_00,"",(MethodInfo *)0x0);
    IVar9.method = (MethodInfo *)MiscExtensions__Tokenize(pSVar8,(MethodInfo *)method_00);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    method = IVar9.method;
    if (IVar9.rgctxDataDummy != (System_Text_RegularExpressions_Regex_o *)0x0) {
      method = (*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_c8,(System_Collections_Generic_List_object__o *)IVar9.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_c8.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_00.fields._version = iVar13;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08._0_8_;
            __this_00.fields._index = in_stack_ffffffffffffff08._8_4_;
            __this_00.fields._current = (Il2CppObject *)pSVar16;
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
            if ((char)bVar5 == '\0') goto label_040663ef;
            if ((System_String_o *)SStack_c8.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)SStack_c8.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar5 = System_String__StartsWith
                              ((System_String_o *)SStack_c8.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') goto label_04066421;
            bVar5 = System_String__StartsWith
                              ((System_String_o *)SStack_c8.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar5 == '\0');
        }
        else {
          do {
            while( true ) {
              __this.fields._version = iVar13;
              __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08._0_8_;
              __this.fields._index = in_stack_ffffffffffffff08._8_4_;
              __this.fields._current = (Il2CppObject *)pSVar16;
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
              if ((char)bVar5 == '\0') goto label_040663ef;
              if ((System_String_o *)SStack_c8.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)SStack_c8.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar5 = System_String__StartsWith
                                ((System_String_o *)SStack_c8.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') break;
              pSVar8 = System_String__Substring_3af8da0
                                 ((System_String_o *)SStack_c8.fields._current,2,
                                  ((System_String_Fields *)((long)SStack_c8.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar5 = System_String__op_Equality(a,pSVar8,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  method = (MethodInfo *)
                           System_String__Concat_3ae5ba0
                                     ((System_String_o *)method,(System_String_o *)SStack_c8.fields._current,
                                      (MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar5 = System_String__StartsWith
                              ((System_String_o *)SStack_c8.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar5 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar6 = System_String__IndexOfAny
                          ((System_String_o *)SStack_c8.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar8 = System_String__Substring_3af8da0
                           ((System_String_o *)SStack_c8.fields._current,1,iVar6 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar8,MethodInfo_Void_Push);
        method = (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           ((System_String_o *)method,(System_String_o *)SStack_c8.fields._current,
                            (MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar8 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      method = (MethodInfo *)
               System_String__Concat_3af7470
                         ((System_String_o *)method,"</",pSVar8,">".method,(MethodInfo *)0x0)
      ;
      if ((unaff_R13->fields)._size < 1) {
        return method.rgctxDataDummy;
      }
    }
  } while( true );
label_040663a0:
  iVar7 = iVar7 + 1;
  if (iVar13 < iVar7) goto label_040663ef;
  method = (MethodInfo *)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)method,(System_String_o *)SStack_c8.fields._current,(MethodInfo *)0x0
                     );
  goto label_040661e6;
label_040663ef:
  __this_01.fields._version = iVar13;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffff08._8_4_;
  __this_01.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return method.rgctxDataDummy;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)SStack_c8.fields._current,2,
             ((System_String_Fields *)((long)SStack_c8.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar3 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._version = iVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff08._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
    if (lVar3 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._version = iVar13;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff08._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
  _Unwind_Resume(auVar15._0_8_);
}


// MiscExtensions$$StripColor
// il2cpp: System_String_o* MiscExtensions__StripColor (System_String_o* text, const MethodInfo* method);
// 0x4065c10

System_String_o * MiscExtensions__StripColor(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined8 uVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  int iVar7;
  Il2CppRGCTXData IVar8;
  System_String_o *pSVar9;
  Il2CppRGCTXData IVar10;
  System_String_array *values;
  MethodInfo *pMVar11;
  Il2CppRGCTXData *values_00;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar12;
  int iVar13;
  Il2CppRGCTXData IVar14;
  Il2CppRGCTXData *method_00;
  Il2CppRGCTXData *text_00;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined1 auVar15 [12];
  UnityEngine_Color_o color;
  undefined1 in_stack_ffffffffffffff20 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o SStack_b0;
  Il2CppRGCTXData *pIStack_98;
  
  if (g_data_057ac2ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2ba = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04065c7b;
label_04065c34:
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_04065c34;
label_04065c7b:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x40);
  }
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar9 = System_Text_RegularExpressions_Regex__Replace_4906910(pSVar2,text,"",(MethodInfo *)0x0)
    ;
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x48);
    method = (MethodInfo *)text;
    if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar9 = System_Text_RegularExpressions_Regex__Replace_4906910
                         (pSVar2,pSVar9,"",(MethodInfo *)0x0);
      return pSVar9;
    }
  }
  pSVar9 = (System_String_o *)0x0;
  uVar4 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bb = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar8.method = (MethodInfo *)MiscExtensions__StripColor(pSVar9,method);
  color.fields.a = (float)in_XMM1_Db;
  color.fields.b = (float)in_XMM1_Da;
  text_00 = (Il2CppRGCTXData *)0x0;
  color.fields.r = (float)(int)uVar4;
  color.fields.g = (float)(int)((ulong)uVar4 >> 0x20);
  pSVar9 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar9 != (System_String_o *)0x0) {
    iVar13 = (pSVar9->fields)._stringLength;
    if (iVar13 < 3) {
      return ((MethodInfo *)IVar8).rgctxDataDummy;
    }
    IVar10.method = (MethodInfo *)System_String__Substring_3af8da0(pSVar9,0,iVar13 + -2,(MethodInfo *)0x0);
    method = (MethodInfo *)0x5;
    text_00 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    IVar14 = "<color=#";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        text_00 = (Il2CppRGCTXData *)values->m_Items;
        values->m_Items[0] = (System_String_o *)"<color=#";
        il2cpp_runtime_helper_022b4080();
        method = IVar14.method;
        if (1 < (uint)values->max_length) {
          text_00 = (Il2CppRGCTXData *)(values->m_Items + 1);
          ((Il2CppRGCTXData *)(values->m_Items + 1))->method = (MethodInfo *)IVar10;
          il2cpp_runtime_helper_022b4080();
          IVar14 = ">";
          method = IVar10.method;
          if (2 < (uint)values->max_length) {
            text_00 = (Il2CppRGCTXData *)(values->m_Items + 2);
            *(Il2CppRGCTXData *)(values->m_Items + 2) = ">";
            il2cpp_runtime_helper_022b4080();
            method = IVar14.method;
            if (3 < (uint)values->max_length) {
              text_00 = (Il2CppRGCTXData *)(values->m_Items + 3);
              ((Il2CppRGCTXData *)(values->m_Items + 3))->method = (MethodInfo *)IVar8;
              il2cpp_runtime_helper_022b4080();
              method = IVar8.method;
              if (4 < (uint)values->max_length) {
                *(Il2CppRGCTXData *)(values->m_Items + 4) = "</color>";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar9 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar9;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  IVar8.method = method;
  if (g_data_057ac2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bc = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)MiscExtensions__StripColor((System_String_o *)text_00,IVar8.method);
  iVar13 = 5;
  method_00 = TypeInfo_string;
  values_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar8 = "<color=#";
  pIStack_98 = text_00;
  if (values_00 != (Il2CppRGCTXData *)0x0) {
    if (*(int *)(values_00 + 3) != 0) {
      method_00 = values_00 + 4;
      values_00[4] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      iVar13 = IVar8._0_4_;
      if (1 < *(uint *)(values_00 + 3)) {
        method_00 = values_00 + 5;
        values_00[5].method = method;
        IVar14.method = method;
        il2cpp_runtime_helper_022b4080();
        IVar8 = ">";
        iVar13 = IVar14._0_4_;
        if (2 < *(uint *)(values_00 + 3)) {
          method_00 = values_00 + 6;
          values_00[6] = ">";
          il2cpp_runtime_helper_022b4080();
          iVar13 = IVar8._0_4_;
          if (3 < *(uint *)(values_00 + 3)) {
            method_00 = values_00 + 7;
            values_00[7].method = pMVar11;
            il2cpp_runtime_helper_022b4080();
            iVar13 = (int)pMVar11;
            if (4 < *(uint *)(values_00 + 3)) {
              values_00[8] = "</color>";
              il2cpp_runtime_helper_022b4080(values_00 + 8);
              pSVar9 = System_String__Concat_3af7570((System_String_array *)values_00,(MethodInfo *)0x0);
              return pSVar9;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_98 = values_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    pSVar2 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar7 = 0;
    pSVar9 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (pSVar2,(System_String_o *)method_00,"",(MethodInfo *)0x0);
    IVar8.method = (MethodInfo *)MiscExtensions__Tokenize(pSVar9,(MethodInfo *)method_00);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    method = IVar8.method;
    if (IVar8.rgctxDataDummy != (MethodInfo *)0x0) {
      method = (*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_b0,(System_Collections_Generic_List_object__o *)IVar8.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_b0.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_00.fields._version = iVar13;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
            __this_00.fields._index = in_stack_ffffffffffffff20._8_4_;
            __this_00.fields._current = (Il2CppObject *)pSVar16;
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30);
            if ((char)bVar5 == '\0') goto label_040663ef;
            if ((System_String_o *)SStack_b0.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)SStack_b0.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar5 = System_String__StartsWith
                              ((System_String_o *)SStack_b0.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') goto label_04066421;
            bVar5 = System_String__StartsWith
                              ((System_String_o *)SStack_b0.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar5 == '\0');
        }
        else {
          do {
            while( true ) {
              __this.fields._version = iVar13;
              __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
              __this.fields._index = in_stack_ffffffffffffff20._8_4_;
              __this.fields._current = (Il2CppObject *)pSVar16;
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30);
              if ((char)bVar5 == '\0') goto label_040663ef;
              if ((System_String_o *)SStack_b0.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)SStack_b0.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar5 = System_String__StartsWith
                                ((System_String_o *)SStack_b0.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') break;
              pSVar9 = System_String__Substring_3af8da0
                                 ((System_String_o *)SStack_b0.fields._current,2,
                                  ((System_String_Fields *)((long)SStack_b0.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar5 = System_String__op_Equality(a,pSVar9,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  method = (MethodInfo *)
                           System_String__Concat_3ae5ba0
                                     ((System_String_o *)method,(System_String_o *)SStack_b0.fields._current,
                                      (MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar5 = System_String__StartsWith
                              ((System_String_o *)SStack_b0.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar5 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar6 = System_String__IndexOfAny
                          ((System_String_o *)SStack_b0.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar9 = System_String__Substring_3af8da0
                           ((System_String_o *)SStack_b0.fields._current,1,iVar6 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar9,MethodInfo_Void_Push);
        method = (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           ((System_String_o *)method,(System_String_o *)SStack_b0.fields._current,
                            (MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar9 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      method = (MethodInfo *)
               System_String__Concat_3af7470
                         ((System_String_o *)method,"</",pSVar9,">".method,(MethodInfo *)0x0)
      ;
      if ((unaff_R13->fields)._size < 1) {
        return method.rgctxDataDummy;
      }
    }
  } while( true );
label_040663a0:
  iVar7 = iVar7 + 1;
  if (iVar13 < iVar7) goto label_040663ef;
  method = (MethodInfo *)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)method,(System_String_o *)SStack_b0.fields._current,(MethodInfo *)0x0
                     );
  goto label_040661e6;
label_040663ef:
  __this_01.fields._version = iVar13;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffff20._8_4_;
  __this_01.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return method.rgctxDataDummy;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)SStack_b0.fields._current,2,
             ((System_String_Fields *)((long)SStack_b0.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar3 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._version = iVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff20._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
    if (lVar3 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._version = iVar13;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff20._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
  _Unwind_Resume(auVar15._0_8_);
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4065ce0

System_String_o *
MiscExtensions__ForceColor(System_String_o *text,UnityEngine_Color_o color,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  int32_t iVar4;
  int iVar5;
  Il2CppRGCTXData IVar6;
  System_String_o *pSVar7;
  Il2CppRGCTXData IVar8;
  System_String_array *values;
  MethodInfo *pMVar9;
  Il2CppRGCTXData *values_00;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar10;
  int iVar11;
  Il2CppRGCTXData IVar12;
  Il2CppRGCTXData *method_00;
  Il2CppRGCTXData *text_00;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  undefined1 auVar13 [12];
  undefined1 in_stack_ffffffffffffff38 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_Enumerator_T__o SStack_98;
  Il2CppRGCTXData *pIStack_80;
  
  if (g_data_057ac2bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bb = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar6.method = (MethodInfo *)MiscExtensions__StripColor(text,method);
  text_00 = (Il2CppRGCTXData *)0x0;
  pSVar7 = Unity_VisualScripting_XColor__ToHexString(color,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    iVar11 = (pSVar7->fields)._stringLength;
    if (iVar11 < 3) {
      return ((MethodInfo *)IVar6).rgctxDataDummy;
    }
    IVar8.method = (MethodInfo *)System_String__Substring_3af8da0(pSVar7,0,iVar11 + -2,(MethodInfo *)0x0);
    method = (MethodInfo *)0x5;
    text_00 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    IVar12 = "<color=#";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        text_00 = (Il2CppRGCTXData *)values->m_Items;
        values->m_Items[0] = (System_String_o *)"<color=#";
        il2cpp_runtime_helper_022b4080();
        method = IVar12.method;
        if (1 < (uint)values->max_length) {
          text_00 = (Il2CppRGCTXData *)(values->m_Items + 1);
          ((Il2CppRGCTXData *)(values->m_Items + 1))->method = (MethodInfo *)IVar8;
          il2cpp_runtime_helper_022b4080();
          IVar12 = ">";
          method = IVar8.method;
          if (2 < (uint)values->max_length) {
            text_00 = (Il2CppRGCTXData *)(values->m_Items + 2);
            *(Il2CppRGCTXData *)(values->m_Items + 2) = ">";
            il2cpp_runtime_helper_022b4080();
            method = IVar12.method;
            if (3 < (uint)values->max_length) {
              text_00 = (Il2CppRGCTXData *)(values->m_Items + 3);
              ((Il2CppRGCTXData *)(values->m_Items + 3))->method = (MethodInfo *)IVar6;
              il2cpp_runtime_helper_022b4080();
              method = IVar6.method;
              if (4 < (uint)values->max_length) {
                *(Il2CppRGCTXData *)(values->m_Items + 4) = "</color>";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar7 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar7;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  IVar6.method = method;
  if (g_data_057ac2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bc = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)MiscExtensions__StripColor((System_String_o *)text_00,IVar6.method);
  iVar11 = 5;
  method_00 = TypeInfo_string;
  values_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar6 = "<color=#";
  pIStack_80 = text_00;
  if (values_00 != (Il2CppRGCTXData *)0x0) {
    if (*(int *)(values_00 + 3) != 0) {
      method_00 = values_00 + 4;
      values_00[4] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      iVar11 = IVar6._0_4_;
      if (1 < *(uint *)(values_00 + 3)) {
        method_00 = values_00 + 5;
        values_00[5].method = method;
        IVar12.method = method;
        il2cpp_runtime_helper_022b4080();
        IVar6 = ">";
        iVar11 = IVar12._0_4_;
        if (2 < *(uint *)(values_00 + 3)) {
          method_00 = values_00 + 6;
          values_00[6] = ">";
          il2cpp_runtime_helper_022b4080();
          iVar11 = IVar6._0_4_;
          if (3 < *(uint *)(values_00 + 3)) {
            method_00 = values_00 + 7;
            values_00[7].method = pMVar9;
            il2cpp_runtime_helper_022b4080();
            iVar11 = (int)pMVar9;
            if (4 < *(uint *)(values_00 + 3)) {
              values_00[8] = "</color>";
              il2cpp_runtime_helper_022b4080(values_00 + 8);
              pSVar7 = System_String__Concat_3af7570((System_String_array *)values_00,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_80 = values_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar5 = 0;
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (__this,(System_String_o *)method_00,"",(MethodInfo *)0x0);
    IVar6.method = (MethodInfo *)MiscExtensions__Tokenize(pSVar7,(MethodInfo *)method_00);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    method = IVar6.method;
    if (IVar6.rgctxDataDummy != (MethodInfo *)0x0) {
      method = (*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_98,(System_Collections_Generic_List_object__o *)IVar6.method,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_98.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_01.fields._version = iVar11;
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
            __this_01.fields._index = in_stack_ffffffffffffff38._8_4_;
            __this_01.fields._current = (Il2CppObject *)pSVar14;
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
            if ((char)bVar3 == '\0') goto label_040663ef;
            if ((System_String_o *)SStack_98.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)SStack_98.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar3 = System_String__StartsWith
                              ((System_String_o *)SStack_98.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') goto label_04066421;
            bVar3 = System_String__StartsWith
                              ((System_String_o *)SStack_98.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
        }
        else {
          do {
            while( true ) {
              __this_00.fields._version = iVar11;
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_
              ;
              __this_00.fields._index = in_stack_ffffffffffffff38._8_4_;
              __this_00.fields._current = (Il2CppObject *)pSVar14;
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
              if ((char)bVar3 == '\0') goto label_040663ef;
              if ((System_String_o *)SStack_98.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)SStack_98.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar3 = System_String__StartsWith
                                ((System_String_o *)SStack_98.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') break;
              pSVar7 = System_String__Substring_3af8da0
                                 ((System_String_o *)SStack_98.fields._current,2,
                                  ((System_String_Fields *)((long)SStack_98.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar3 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  method = (MethodInfo *)
                           System_String__Concat_3ae5ba0
                                     ((System_String_o *)method,(System_String_o *)SStack_98.fields._current,
                                      (MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar3 = System_String__StartsWith
                              ((System_String_o *)SStack_98.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar4 = System_String__IndexOfAny
                          ((System_String_o *)SStack_98.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar7 = System_String__Substring_3af8da0
                           ((System_String_o *)SStack_98.fields._current,1,iVar4 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar7,MethodInfo_Void_Push);
        method = (MethodInfo *)
                 System_String__Concat_3ae5ba0
                           ((System_String_o *)method,(System_String_o *)SStack_98.fields._current,
                            (MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar7 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      method = (MethodInfo *)
               System_String__Concat_3af7470
                         ((System_String_o *)method,"</",pSVar7,">".method,(MethodInfo *)0x0)
      ;
      if ((unaff_R13->fields)._size < 1) {
        return method.rgctxDataDummy;
      }
    }
  } while( true );
label_040663a0:
  iVar5 = iVar5 + 1;
  if (iVar11 < iVar5) goto label_040663ef;
  method = (MethodInfo *)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)method,(System_String_o *)SStack_98.fields._current,(MethodInfo *)0x0
                     );
  goto label_040661e6;
label_040663ef:
  __this_02.fields._version = iVar11;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff38._8_4_;
  __this_02.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return method.rgctxDataDummy;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)SStack_98.fields._current,2,
             ((System_String_Fields *)((long)SStack_98.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_03.fields._version = iVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff38._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
    if (lVar2 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version = iVar11;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff38._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
  _Unwind_Resume(auVar13._0_8_);
}


// MiscExtensions$$ForceColor
// il2cpp: System_String_o* MiscExtensions__ForceColor (System_String_o* text, System_String_o* colorHex, const MethodInfo* method);
// 0x4065e80

System_String_o *
MiscExtensions__ForceColor_3f65e80(System_String_o *text,System_String_o *colorHex,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  int32_t iVar4;
  int iVar5;
  MethodInfo *pMVar6;
  Il2CppRGCTXData *values;
  System_String_o *pSVar7;
  System_Collections_Generic_List_string__o *__this_05;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar8;
  int iVar9;
  Il2CppRGCTXData IVar10;
  Il2CppRGCTXData *method_00;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  undefined1 auVar11 [12];
  undefined1 in_stack_ffffffffffffff70 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o SStack_60;
  Il2CppRGCTXData *pIStack_48;
  
  pMVar6 = (MethodInfo *)colorHex;
  if (g_data_057ac2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bc = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)MiscExtensions__StripColor(text,pMVar6);
  iVar9 = 5;
  method_00 = TypeInfo_string;
  values = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar10 = "<color=#";
  pIStack_48 = (Il2CppRGCTXData *)text;
  if (values != (Il2CppRGCTXData *)0x0) {
    if (*(int *)(values + 3) != 0) {
      method_00 = values + 4;
      values[4] = "<color=#";
      il2cpp_runtime_helper_022b4080();
      iVar9 = IVar10._0_4_;
      if (1 < *(uint *)(values + 3)) {
        method_00 = values + 5;
        values[5].method = (MethodInfo *)colorHex;
        pSVar7 = colorHex;
        il2cpp_runtime_helper_022b4080();
        IVar10 = ">";
        iVar9 = (int)pSVar7;
        if (2 < *(uint *)(values + 3)) {
          method_00 = values + 6;
          values[6] = ">";
          il2cpp_runtime_helper_022b4080();
          iVar9 = IVar10._0_4_;
          if (3 < *(uint *)(values + 3)) {
            method_00 = values + 7;
            values[7].method = pMVar6;
            il2cpp_runtime_helper_022b4080();
            iVar9 = (int)pMVar6;
            if (4 < *(uint *)(values + 3)) {
              values[8] = "</color>";
              il2cpp_runtime_helper_022b4080(values + 8);
              pSVar7 = System_String__Concat_3af7570((System_String_array *)values,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_48 = values;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar5 = 0;
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910
                       (__this,(System_String_o *)method_00,"",(MethodInfo *)0x0);
    __this_05 = MiscExtensions__Tokenize(pSVar7,(MethodInfo *)method_00);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    colorHex = (System_String_o *)__this_05;
    if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) {
      colorHex = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_60,(System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_60.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_01.fields._version = iVar9;
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
            __this_01.fields._index = in_stack_ffffffffffffff70._8_4_;
            __this_01.fields._current = (Il2CppObject *)pSVar12;
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
            if ((char)bVar3 == '\0') goto label_040663ef;
            if ((System_String_o *)SStack_60.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)SStack_60.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar3 = System_String__StartsWith
                              ((System_String_o *)SStack_60.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') goto label_04066421;
            bVar3 = System_String__StartsWith
                              ((System_String_o *)SStack_60.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
        }
        else {
          do {
            while( true ) {
              __this_00.fields._version = iVar9;
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_
              ;
              __this_00.fields._index = in_stack_ffffffffffffff70._8_4_;
              __this_00.fields._current = (Il2CppObject *)pSVar12;
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
              if ((char)bVar3 == '\0') goto label_040663ef;
              if ((System_String_o *)SStack_60.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)SStack_60.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar3 = System_String__StartsWith
                                ((System_String_o *)SStack_60.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') break;
              pSVar7 = System_String__Substring_3af8da0
                                 ((System_String_o *)SStack_60.fields._current,2,
                                  ((System_String_Fields *)((long)SStack_60.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar3 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  colorHex = System_String__Concat_3ae5ba0
                                       (colorHex,(System_String_o *)SStack_60.fields._current,
                                        (MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar3 = System_String__StartsWith
                              ((System_String_o *)SStack_60.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar4 = System_String__IndexOfAny
                          ((System_String_o *)SStack_60.fields._current,anyOf,(MethodInfo *)0x0);
        pSVar7 = System_String__Substring_3af8da0
                           ((System_String_o *)SStack_60.fields._current,1,iVar4 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar7,MethodInfo_Void_Push);
        colorHex = System_String__Concat_3ae5ba0
                             (colorHex,(System_String_o *)SStack_60.fields._current,(MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar7 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      colorHex = System_String__Concat_3af7470
                           (colorHex,"</",pSVar7,(System_String_o *)">".method,
                            (MethodInfo *)0x0);
      if ((unaff_R13->fields)._size < 1) {
        return (System_String_o *)(System_Collections_Generic_List_string__o *)colorHex;
      }
    }
  } while( true );
label_040663a0:
  iVar5 = iVar5 + 1;
  if (iVar9 < iVar5) goto label_040663ef;
  colorHex = System_String__Concat_3ae5ba0
                       (colorHex,(System_String_o *)SStack_60.fields._current,(MethodInfo *)0x0);
  goto label_040661e6;
label_040663ef:
  __this_02.fields._version = iVar9;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff70._8_4_;
  __this_02.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return (System_String_o *)(System_Collections_Generic_List_string__o *)colorHex;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)SStack_60.fields._current,2,
             ((System_String_Fields *)((long)SStack_60.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._version = iVar9;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff70._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar2 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version = iVar9;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff70._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar11._0_8_);
}


// MiscExtensions$$TruncateRichText
// il2cpp: System_String_o* MiscExtensions__TruncateRichText (System_String_o* text, int32_t length, const MethodInfo* method);
// 0x4065fc0

System_String_o * MiscExtensions__TruncateRichText(System_String_o *text,int32_t length,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  int32_t iVar4;
  int iVar5;
  System_Collections_Generic_List_string__o *__this_05;
  System_String_o *a;
  System_Char_array *anyOf;
  long *plVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Stack_object__o *unaff_R13;
  System_Collections_Generic_List_string__o *unaff_R14;
  undefined1 auVar8 [12];
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ac2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Peek);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_string);
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2bd = '\x01';
  }
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ac2b8 == '\0') goto label_040660fb;
label_040660cb:
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) != 0) goto label_040660d8;
label_04066127:
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  else {
    if (g_data_057ac2b8 != '\0') goto label_040660cb;
label_040660fb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b8 = '\x01';
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) goto label_04066127;
label_040660d8:
    __this = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x58);
  }
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    iVar5 = 0;
    pSVar7 = System_Text_RegularExpressions_Regex__Replace_4906910(__this,text,"",(MethodInfo *)0x0)
    ;
    __this_05 = MiscExtensions__Tokenize(pSVar7,(MethodInfo *)text);
    unaff_R13 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_string);
    System_Collections_Generic_Stack_object____ctor(unaff_R13,MethodInfo_Stack_1_System_String);
    unaff_R14 = __this_05;
    if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) {
      unaff_R14 = (System_Collections_Generic_List_string__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      System_Collections_Generic_List_object___GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
label_040661e6:
      do {
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) {
          do {
            __this_01.fields._version = length;
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
            __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
            __this_01.fields._current = (Il2CppObject *)pSVar9;
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
            if ((char)bVar3 == '\0') goto label_040663ef;
            if ((System_String_o *)local_48.fields._current == (System_String_o *)0x0) goto label_0406641c;
            if (((System_String_Fields *)((long)local_48.fields._current + 0x10))->_stringLength == 1)
            goto label_040663a0;
            bVar3 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"</",(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') goto label_04066421;
            bVar3 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
        }
        else {
          do {
            while( true ) {
              __this_00.fields._version = length;
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
              ;
              __this_00.fields._index = in_stack_ffffffffffffff88._8_4_;
              __this_00.fields._current = (Il2CppObject *)pSVar9;
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
              if ((char)bVar3 == '\0') goto label_040663ef;
              if ((System_String_o *)local_48.fields._current == (System_String_o *)0x0) goto label_0406641c;
              if (((System_String_Fields *)((long)local_48.fields._current + 0x10))->_stringLength == 1)
              goto label_040663a0;
              bVar3 = System_String__StartsWith
                                ((System_String_o *)local_48.fields._current,"</",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') break;
              pSVar7 = System_String__Substring_3af8da0
                                 ((System_String_o *)local_48.fields._current,2,
                                  ((System_String_Fields *)((long)local_48.fields._current + 0x10))->
                                  _stringLength + -3,(MethodInfo *)0x0);
              if (0 < (unaff_R13->fields)._size) {
                a = (System_String_o *)System_Collections_Generic_Stack_object___Peek(unaff_R13,MethodInfo_String_Peek);
                bVar3 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
                  unaff_R14 = (System_Collections_Generic_List_string__o *)
                              System_String__Concat_3ae5ba0
                                        ((System_String_o *)unaff_R14,
                                         (System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
                  goto label_040661e6;
                }
              }
            }
            bVar3 = System_String__StartsWith
                              ((System_String_o *)local_48.fields._current,"<",(MethodInfo *)0x0);
          } while ((char)bVar3 == '\0');
        }
        anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,2);
        if (anyOf == (System_Char_array *)0x0) goto label_0406643b;
        iVar1 = (int)anyOf->max_length;
        if (iVar1 == 0) goto label_04066440;
        anyOf->m_Items[0] = 0x3d;
        if (iVar1 == 1) goto label_04066445;
        anyOf->m_Items[1] = 0x3e;
        iVar4 = System_String__IndexOfAny((System_String_o *)local_48.fields._current,anyOf,(MethodInfo *)0x0)
        ;
        pSVar7 = System_String__Substring_3af8da0
                           ((System_String_o *)local_48.fields._current,1,iVar4 + -1,(MethodInfo *)0x0);
        if (unaff_R13 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0406644a;
        System_Collections_Generic_Stack_object___Push(unaff_R13,(Il2CppObject *)pSVar7,MethodInfo_Void_Push);
        unaff_R14 = (System_Collections_Generic_List_string__o *)
                    System_String__Concat_3ae5ba0
                              ((System_String_o *)unaff_R14,(System_String_o *)local_48.fields._current,
                               (MethodInfo *)0x0);
      } while( true );
    }
  }
label_040665f2:
  do {
    il2cpp_runtime_helper_022b2c90();
label_040665f7:
    while (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
      pSVar7 = (System_String_o *)System_Collections_Generic_Stack_object___Pop(unaff_R13,MethodInfo_String_Pop);
      unaff_R14 = (System_Collections_Generic_List_string__o *)
                  System_String__Concat_3af7470
                            ((System_String_o *)unaff_R14,"</",pSVar7,">",(MethodInfo *)0x0);
      if ((unaff_R13->fields)._size < 1) {
        return (System_String_o *)unaff_R14;
      }
    }
  } while( true );
label_040663a0:
  iVar5 = iVar5 + 1;
  if (length < iVar5) goto label_040663ef;
  unaff_R14 = (System_Collections_Generic_List_string__o *)
              System_String__Concat_3ae5ba0
                        ((System_String_o *)unaff_R14,(System_String_o *)local_48.fields._current,
                         (MethodInfo *)0x0);
  goto label_040661e6;
label_040663ef:
  __this_02.fields._version = length;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_02.fields._current = (Il2CppObject *)pSVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  if (unaff_R13 != (System_Collections_Generic_Stack_object__o *)0x0) {
    if (0 < (unaff_R13->fields)._size) goto label_040665f7;
    return (System_String_o *)unaff_R14;
  }
  goto label_040665f2;
label_0406641c:
  il2cpp_runtime_helper_022b2c90();
label_04066421:
  System_String__Substring_3af8da0
            ((System_String_o *)local_48.fields._current,2,
             ((System_String_Fields *)((long)local_48.fields._current + 0x10))->_stringLength + -3,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
label_0406643b:
  il2cpp_runtime_helper_022b2c90();
label_04066440:
  il2cpp_runtime_helper_022b2ca0();
label_04066445:
  il2cpp_runtime_helper_022b2ca0();
label_0406644a:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._version = length;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) goto label_040665f7;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version = length;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar8._0_8_);
}


// MiscExtensions$$HexColor
// il2cpp: System_String_o* MiscExtensions__HexColor (System_String_o* text, const MethodInfo* method);
// 0x4066650

System_String_o * MiscExtensions__HexColor(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  System_Text_RegularExpressions_Regex_o *pSVar4;
  System_Text_RegularExpressions_Regex_o *pSVar5;
  System_String_o *pSVar6;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *extraout_RAX;
  
  if (g_data_057ac2be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"]");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ac2be = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ac2b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac2b7 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  else {
    pSVar5 = *(System_Text_RegularExpressions_Regex_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x50);
  }
  if ((pSVar5 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (pSVar4 = (System_Text_RegularExpressions_Regex_o *)
               System_Text_RegularExpressions_Regex__Replace_4906910
                         (pSVar5,text,"",(MethodInfo *)0x0),
     pSVar4 != (System_Text_RegularExpressions_Regex_o *)0x0)) {
    bVar2 = System_String__Contains((System_String_o *)pSVar4,"]",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_0406680c;
    pSVar5 = (System_Text_RegularExpressions_Regex_o *)
             System_String__Replace_3af9030
                       ((System_String_o *)pSVar4,"]",">",(MethodInfo *)0x0);
    __this = pSVar4;
    while (pSVar4 = pSVar5, pSVar5 = __this, pSVar4 != (System_Text_RegularExpressions_Regex_o *)0x0) {
label_0406680c:
      bVar2 = System_String__Contains((System_String_o *)pSVar4,"[",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return (System_String_o *)pSVar4;
      }
      iVar3 = System_String__IndexOf_3afc440((System_String_o *)pSVar4,"[",(MethodInfo *)0x0);
      if ((int)(pSVar4->fields).internalMatchTimeout.fields._ticks < iVar3 + 7) {
        System_String__Contains((System_String_o *)pSVar4,"[",(MethodInfo *)0x0);
        return (System_String_o *)
               (System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSVar6 = System_String__Substring_3af8da0((System_String_o *)pSVar4,iVar3 + 1,6,(MethodInfo *)0x0);
      pSVar4 = (System_Text_RegularExpressions_Regex_o *)
               System_String__Remove((System_String_o *)pSVar4,iVar3,7,(MethodInfo *)0x0);
      pSVar5 = "<color=#";
      pSVar6 = System_String__Concat_3ae5ba0((System_String_o *)"<color=#",pSVar6,(MethodInfo *)0x0);
      if ((pSVar4 == (System_Text_RegularExpressions_Regex_o *)0x0) ||
         (__this = (System_Text_RegularExpressions_Regex_o *)
                   System_String__Insert((System_String_o *)pSVar4,iVar3,pSVar6,(MethodInfo *)0x0),
         pSVar5 = pSVar4, __this == (System_Text_RegularExpressions_Regex_o *)0x0)) break;
      iVar3 = (int32_t)(__this->fields).internalMatchTimeout.fields._ticks;
      bVar2 = System_String__Contains((System_String_o *)__this,"[",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        iVar3 = System_String__IndexOf_3afc440((System_String_o *)__this,"[",(MethodInfo *)0x0);
      }
      pSVar5 = (System_Text_RegularExpressions_Regex_o *)
               System_String__Insert((System_String_o *)__this,iVar3,"</color>",(MethodInfo *)0x0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Single__Parse((System_String_o *)pSVar5,(MethodInfo *)0x0);
  return extraout_RAX;
}


// MiscExtensions$$ToEnum<Int32Enum>
// il2cpp: int32_t MiscExtensions__ToEnum_Int32Enum_ (System_String_o* value, bool ignoreCase, const MethodInfo_2583A90* method);
// 0x2683a90

int32_t MiscExtensions__ToEnum_Int32Enum_
                  (System_String_o *value,bool_conflict ignoreCase,MethodInfo_2583A90 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  void *__dest;
  uint uVar2;
  bool_conflict bVar3;
  MethodInfo_2583A90_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  int32_t *piVar8;
  ulong uVar9;
  Il2CppObject *pIVar10;
  long lVar11;
  void *pvVar12;
  Il2CppClass *pIVar13;
  void *extraout_RDX;
  ulong __n;
  System_String_o *pSVar14;
  System_RuntimeTypeHandle_Fields *pSVar15;
  void *__s;
  undefined8 uStack_98;
  Il2CppClass *pIStack_90;
  System_String_o *pSStack_88;
  void *pvStack_80;
  uint uStack_74;
  ulong uStack_70;
  System_RuntimeTypeHandle_Fields SStack_68;
  MethodInfo_2583A90 *pMStack_60;
  undefined8 *puStack_58;
  System_String_o *pSStack_50;
  ulong uStack_48;
  System_String_o *pSStack_40;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_2583A90_RGCTXs *)0x0) {
    pSStack_40 = (System_String_o *)0x2683ab5;
    il2cpp_runtime_helper_02300a20(method);
    pMVar4 = method->rgctx_data;
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_40 = (System_String_o *)0x2683ad9;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_String_o *)0x2683ae5;
  pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    pSStack_40 = (System_String_o *)0x2683afd;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_String_o *)0x2683b0a;
  bVar3 = System_Enum__IsDefined(pSVar5,(Il2CppObject *)value,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0;
  }
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_40 = (System_String_o *)0x2683b2f;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_String_o *)0x2683b39;
  pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    pSStack_40 = (System_String_o *)0x2683b51;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar13 = (Il2CppClass *)0x0;
  pSStack_40 = (System_String_o *)0x2683b62;
  pSVar6 = (System_String_o *)System_Enum__Parse_3cf22f0(pSVar5,value,ignoreCase & 0xff,(MethodInfo *)0x0);
  pIVar7 = method->rgctx_data->_1_T;
  if (((pIVar7->_2).field_0x6d & 1) == 0) {
    pSStack_40 = (System_String_o *)0x2683b7f;
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
  }
  if (pSVar6 == (System_String_o *)0x0) {
    pSStack_40 = (System_String_o *)0x2683bb2;
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar13 = (((Il2CppClass *)pSVar6->klass)->_1).element_class;
    if (pIVar13 == (pIVar7->_1).element_class) {
      pSStack_40 = (System_String_o *)0x2683b9a;
      piVar8 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar6);
      return *piVar8;
    }
  }
  uStack_74 = (uint)pIVar7;
  pSStack_40 = (System_String_o *)0x2683bbd;
  pSVar14 = pSVar6;
  il2cpp_runtime_helper_022b2fd0();
  puStack_58 = &g_data_057b9b70;
  pSVar15 = *(System_RuntimeTypeHandle_Fields **)&(pIVar13->_1).this_arg.bits;
  pSStack_88 = pSVar14;
  pvStack_80 = extraout_RDX;
  SStack_68.value = (intptr_t)SVar1.fields.value;
  pMStack_60 = method;
  pSStack_50 = value;
  uStack_48 = (ulong)(uint)ignoreCase;
  pSStack_40 = pSVar6;
  if (pSVar15 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_98 = 0x2683bf0;
    il2cpp_runtime_helper_02300a20(pIVar13);
    pSVar15 = *(System_RuntimeTypeHandle_Fields **)&(pIVar13->_1).this_arg.bits;
  }
  __n = (ulong)*(uint *)(pSVar15[1].value + 0xfc);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  pvVar12 = (void *)((long)&pIStack_90 - uVar9);
  __s = (void *)((long)pvVar12 - uVar9);
  pIStack_90 = pIVar13;
  uStack_70 = __n;
  *(undefined8 *)((long)__s + -8) = 0x2683c2a;
  memset(__s,0,__n);
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pSVar15->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2683c4a;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)__s + -8) = 0x2683c54;
  pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2683c6c;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = pSStack_88;
  *(undefined8 *)((long)__s + -8) = 0x2683c7d;
  bVar3 = System_Enum__IsDefined(pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  uVar9 = uStack_70;
  pIVar7 = pIStack_90;
  if ((char)bVar3 == '\0') {
    *(undefined8 *)((long)__s + -8) = 0x2683d2a;
    memset(__s,0,uVar9);
    *(undefined8 *)((long)__s + -8) = 0x2683d38;
    memcpy(pvVar12,__s,uVar9);
  }
  else {
    SVar1.fields.value =
         (System_RuntimeTypeHandle_Fields)
         (*(System_RuntimeTypeHandle_Fields **)&(pIStack_90->_1).this_arg.bits)->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683caf;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)__s + -8) = 0x2683cb9;
    pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683cd1;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar2 = uStack_74;
    *(undefined8 *)((long)__s + -8) = 0x2683ce2;
    pIVar10 = System_Enum__Parse_3cf22f0(pSVar5,pSVar6,uVar2 & 0xff,(MethodInfo *)0x0);
    lVar11 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683cfe;
      lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
    }
    uVar9 = uStack_70;
    *(undefined8 *)((long)__s + -8) = 0x2683d10;
    pvVar12 = (void *)il2cpp_runtime_helper_022b2b80(pIVar10,lVar11,pvVar12);
  }
  __dest = pvStack_80;
  *(undefined8 *)((long)__s + -8) = 0x2683d47;
  pvVar12 = memcpy(__dest,pvVar12,uVar9);
  return (int32_t)pvVar12;
}


// MiscExtensions$$ToEnum<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__ToEnum___Il2CppFullySharedGenericType_ (System_String_o* value, bool ignoreCase, const MethodInfo_2583BC0* method);
// 0x2683bc0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__ToEnum___Il2CppFullySharedGenericType_
          (System_String_o *value,bool_conflict ignoreCase,MethodInfo_2583BC0 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  System_String_o *value_00;
  MethodInfo_2583BC0 *__dest;
  uint uVar2;
  bool_conflict bVar3;
  ulong uVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  long lVar7;
  void *__dest_00;
  long in_RCX;
  ulong __n;
  void *extraout_RDX;
  System_RuntimeTypeHandle_Fields *pSVar8;
  void *__s;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar9;
  undefined8 uStack_60;
  long local_58;
  System_String_o *local_50;
  MethodInfo_2583BC0 *local_48;
  uint local_3c;
  ulong local_38;
  
  pSVar8 = *(System_RuntimeTypeHandle_Fields **)(in_RCX + 0x38);
  local_50 = value;
  local_48 = method;
  local_3c = ignoreCase;
  if (pSVar8 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_60 = 0x2683bf0;
    il2cpp_runtime_helper_02300a20();
    pSVar8 = *(System_RuntimeTypeHandle_Fields **)(in_RCX + 0x38);
  }
  __n = (ulong)*(uint *)(pSVar8[1].value + 0xfc);
  uVar4 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = (void *)((long)&local_58 - uVar4);
  __s = (void *)((long)__dest_00 - uVar4);
  local_58 = in_RCX;
  local_38 = __n;
  *(undefined8 *)((long)__s + -8) = 0x2683c2a;
  memset(__s,0,__n);
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)pSVar8->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2683c4a;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)__s + -8) = 0x2683c54;
  pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2683c6c;
    il2cpp_runtime_helper_02337ed0();
  }
  value_00 = local_50;
  *(undefined8 *)((long)__s + -8) = 0x2683c7d;
  bVar3 = System_Enum__IsDefined(pSVar5,(Il2CppObject *)value_00,(MethodInfo *)0x0);
  uVar4 = local_38;
  if ((char)bVar3 == '\0') {
    *(undefined8 *)((long)__s + -8) = 0x2683d2a;
    memset(__s,0,uVar4);
    *(undefined8 *)((long)__s + -8) = 0x2683d38;
    memcpy(__dest_00,__s,uVar4);
  }
  else {
    SVar1.fields.value =
         (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(local_58 + 0x38))->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683caf;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)__s + -8) = 0x2683cb9;
    pSVar5 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683cd1;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar2 = local_3c;
    *(undefined8 *)((long)__s + -8) = 0x2683ce2;
    pIVar6 = System_Enum__Parse_3cf22f0(pSVar5,value_00,uVar2 & 0xff,(MethodInfo *)0x0);
    lVar7 = *(long *)(*(long *)(local_58 + 0x38) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683cfe;
      lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
    }
    uVar4 = local_38;
    *(undefined8 *)((long)__s + -8) = 0x2683d10;
    __dest_00 = (void *)il2cpp_runtime_helper_022b2b80(pIVar6,lVar7,__dest_00);
  }
  __dest = local_48;
  *(undefined8 *)((long)__s + -8) = 0x2683d47;
  UVar9.klass = memcpy(__dest,__dest_00,uVar4);
  UVar9.monitor = extraout_RDX;
  return UVar9;
}


// MiscExtensions$$ParseFloat
// il2cpp: float MiscExtensions__ParseFloat (System_String_o* str, const MethodInfo* method);
// 0x4066910

float MiscExtensions__ParseFloat(System_String_o *str,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = System_Single__Parse(str,(MethodInfo *)0x0);
  return fVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (UnityEngine_Color_o color, const MethodInfo* method);
// 0x4066920

bool_conflict MiscExtensions__IsGray(UnityEngine_Color_o color,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = color.fields.r;
  uVar1 = 0;
  if (fVar2 == color.fields.g) {
    uVar1 = 0;
    if ((fVar2 == color.fields.b) && (!NAN(fVar2) && !NAN(color.fields.b))) {
      uVar1 = -(uint)(color.fields.a == 1.0) & 1;
    }
  }
  return uVar1;
}


// MiscExtensions$$IsGray
// il2cpp: bool MiscExtensions__IsGray (Utility_Color255_o* color, const MethodInfo* method);
// 0x4066950

bool_conflict MiscExtensions__IsGray_3f66950(Utility_Color255_o *color,MethodInfo *method)

{
  int iVar1;
  Utility_Color255_c *pUVar2;
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  int32_t g;
  int32_t b;
  int32_t a;
  bool_conflict extraout_EAX;
  long *plVar6;
  Utility_Color255_o *__this;
  Il2CppObject *pIVar7;
  Utility_Color255_o *pUVar8;
  
  if (color != (Utility_Color255_o *)0x0) {
    iVar1 = (color->fields).R;
    if ((iVar1 == (color->fields).G) && (iVar1 == (color->fields).B)) {
      return CONCAT31((int3)((uint)iVar1 >> 8),(color->fields).A == 0xff);
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (color != (Utility_Color255_o *)0x0) {
    iVar4 = (*color->klass[1]._1.interopData)();
    iVar4 = UnityEngine_Random__Range_4df2410(0,iVar4,(MethodInfo *)0x0);
    pUVar2 = color->klass;
    vtableDispatch = (code *)pUVar2[1]._1.name;
    bVar5 = (*vtableDispatch)(color,iVar4,pUVar2[1]._1.namespaze,pUVar2,vtableDispatch);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = color;
  if (g_data_057ac2bf == '\0') {
    pUVar8 = (Utility_Color255_o *)&TypeInfo_Color255;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2bf = '\x01';
  }
  if ((color != (Utility_Color255_o *)0x0) &&
     (pUVar8 = color,
     plVar6 = (long *)(*(code *)color->klass[1]._1.name)(color,0,color->klass[1]._1.namespaze),
     plVar6 != (long *)0x0)) {
    iVar4 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
    pUVar8 = color;
    plVar6 = (long *)(*(code *)color->klass[1]._1.name)(color,1,color->klass[1]._1.namespaze);
    if (plVar6 != (long *)0x0) {
      g = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
      pUVar8 = color;
      plVar6 = (long *)(*(code *)color->klass[1]._1.name)(color,2,color->klass[1]._1.namespaze);
      if (plVar6 != (long *)0x0) {
        b = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
        plVar6 = (long *)(*(code *)color->klass[1]._1.name)(color,3,color->klass[1]._1.namespaze);
        pUVar8 = color;
        if (plVar6 != (long *)0x0) {
          a = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
          __this = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          pUVar8 = __this;
          Utility_Color255___ctor(__this,iVar4,g,b,a,(MethodInfo *)0x0);
          if (__this != (Utility_Color255_o *)0x0) {
            Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
            return extraout_EAX;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ac2c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((pUVar8 != (Utility_Color255_o *)0x0) &&
     (pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar3,(pUVar8->fields).B,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18)
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pIVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar3,(pUVar8->fields).B,MethodInfo_PlayerInfo_get_Item);
      return (bool_conflict)pIVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return 0;
}


// MiscExtensions$$GetRandomItem<int>
// il2cpp: int32_t MiscExtensions__GetRandomItem_int_ (System_Collections_Generic_List_T__o* list, const MethodInfo_2583420* method);
// 0x2683420

int32_t MiscExtensions__GetRandomItem_int_
                  (System_Collections_Generic_List_T__o *list,MethodInfo_2583420 *method)

{
  code *pcVar1;
  int32_t iVar2;
  
  if (method->rgctx_data == (MethodInfo_2583420_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20();
  }
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    iVar2 = UnityEngine_Random__Range_4df2410(0,(list->fields)._size,(MethodInfo *)0x0);
    iVar2 = System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_int__o *)list,iVar2,
                       (MethodInfo_35FDCE0 *)
                       method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


// MiscExtensions$$GetRandomItem<object>
// il2cpp: Il2CppObject* MiscExtensions__GetRandomItem_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_2583990* method);
// 0x2683990

Il2CppObject *
MiscExtensions__GetRandomItem_object_(System_Collections_Generic_List_T__o *list,MethodInfo_2583990 *method)

{
  byte bVar1;
  Il2CppMethodPointer pIVar2;
  MethodInfo *pMVar3;
  InvokerMethod pIVar4;
  System_RuntimeTypeHandle_o SVar5;
  System_String_o *value;
  long lVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  undefined4 uVar9;
  Il2CppObject *pIVar10;
  MethodInfo_2583990_RGCTXs *pMVar11;
  System_RuntimeTypeHandle_Fields *pSVar12;
  System_Type_o *pSVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  void *pvVar18;
  Il2CppClass *pIVar19;
  MethodInfo_2583990 *extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong __n;
  size_t __n_00;
  uint uVar20;
  MethodInfo_2583990 *__dest;
  MethodInfo_2583990 *pMVar21;
  MethodInfo_2583990 *pMVar22;
  MethodInfo_2583990 *value_00;
  Il2CppObject *pIVar23;
  void *__dest_00;
  void *__s;
  undefined1 auVar24 [16];
  undefined8 uStack_f8;
  long alStack_f0 [3];
  byte abStack_d4 [4];
  ulong uStack_d0;
  undefined1 auStack_c8 [8];
  long alStack_c0 [11];
  undefined8 uStack_68;
  int32_t *piStack_60;
  void *pvStack_58;
  int32_t iStack_4c;
  System_Collections_Generic_List_T__o *pSStack_48;
  
  __dest = method;
  pMVar22 = (MethodInfo_2583990 *)list;
  if (method->rgctx_data == (MethodInfo_2583990_RGCTXs *)0x0) {
    pMVar22 = method;
    il2cpp_runtime_helper_02300a20();
  }
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    iVar7 = UnityEngine_Random__Range_4df2410(0,(list->fields)._size,(MethodInfo *)0x0);
    pIVar10 = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)list,iVar7,
                         (MethodInfo_362BED0 *)
                         method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return pIVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = extraout_RDX->rgctx_data;
  pMVar21 = __dest;
  value_00 = pMVar22;
  pSStack_48 = list;
  if (pMVar11 == (MethodInfo_2583990_RGCTXs *)0x0) {
    uStack_68 = 0x2683a0b;
    value_00 = extraout_RDX;
    il2cpp_runtime_helper_02300a20();
    pMVar11 = extraout_RDX->rgctx_data;
  }
  uVar16 = (ulong)(pMVar11->_3_T->_2).actualSize;
  lVar6 = -(uVar16 + 0xf & 0xfffffffffffffff0);
  pvVar18 = (void *)((long)&piStack_60 + lVar6);
  if (pMVar22 != (MethodInfo_2583990 *)0x0) {
    pIVar2 = pMVar11->_1_System_Collections_Generic_List_T__get_Count->methodPointer;
    *(undefined8 *)((long)&uStack_68 + lVar6) = 0x2683a39;
    iVar7 = (*pIVar2)();
    *(undefined8 *)((long)&uStack_68 + lVar6) = 0x2683a44;
    iStack_4c = UnityEngine_Random__Range_4df2410(0,iVar7,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
    pIVar2 = pMVar3->methodPointer;
    piStack_60 = &iStack_4c;
    pIVar4 = pMVar3->invoker_method;
    pvStack_58 = pvVar18;
    *(undefined8 *)((long)&uStack_68 + lVar6) = 0x2683a6b;
    (*pIVar4)(pIVar2,pMVar3,pMVar22,&piStack_60,pvVar18);
    *(undefined8 *)((long)&uStack_68 + lVar6) = 0x2683a79;
    pIVar10 = memcpy(__dest,pvVar18,uVar16);
    return pIVar10;
  }
  *(undefined8 *)((long)&uStack_68 + lVar6) = 0x2683a8d;
  auVar24 = il2cpp_runtime_helper_022b2c90();
  lVar17 = auVar24._8_8_;
  *(undefined1 **)((long)&uStack_68 + lVar6) = &stack0xffffffffffffffe0;
  *(ulong *)((long)alStack_c0 + lVar6 + 0x50) = uVar16;
  *(MethodInfo_2583990 **)((long)alStack_c0 + lVar6 + 0x48) = __dest;
  *(MethodInfo_2583990 **)((long)alStack_c0 + lVar6 + 0x40) = extraout_RDX;
  *(undefined8 *)((long)alStack_c0 + lVar6 + 0x38) = 0;
  *(void **)((long)alStack_c0 + lVar6 + 0x30) = pvVar18;
  *(long *)((long)alStack_c0 + lVar6 + 0x28) = auVar24._0_8_;
  pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
  if (pSVar12 == (System_RuntimeTypeHandle_Fields *)0x0) {
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683ab5;
    il2cpp_runtime_helper_02300a20(lVar17);
    pSVar12 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
  }
  SVar5.fields.value = (System_RuntimeTypeHandle_Fields)pSVar12->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683ad9;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = 0;
  *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683ae5;
  pSVar13 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683afd;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b0a;
  bVar8 = System_Enum__IsDefined(pSVar13,(Il2CppObject *)value_00,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    SVar5.fields.value =
         (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38))->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b2f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b39;
    pSVar13 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b51;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar19 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b62;
    pIVar10 = System_Enum__Parse_3cf22f0
                        (pSVar13,(System_String_o *)value_00,(uint)pMVar21 & 0xff,(MethodInfo *)0x0);
    lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b7f;
      lVar14 = il2cpp_runtime_helper_023009c0(lVar14);
    }
    if (pIVar10 == (Il2CppObject *)0x0) {
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683bb2;
      lVar14 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      pIVar19 = (pIVar10->klass->_1).element_class;
      if (pIVar19 == *(Il2CppClass **)(lVar14 + 0x40)) {
        *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683b9a;
        puVar15 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
        uVar20 = *puVar15;
        goto label_02683b9c;
      }
    }
    uVar9 = (undefined4)lVar14;
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x2683bbd;
    pIVar23 = pIVar10;
    il2cpp_runtime_helper_022b2fd0();
    *(Il2CppObject **)((long)alStack_c0 + lVar6 + 0x20) = pIVar10;
    *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = (ulong)pMVar21 & 0xffffffff;
    *(MethodInfo_2583990 **)((long)alStack_c0 + lVar6 + 0x10) = value_00;
    *(undefined8 **)((long)alStack_c0 + lVar6 + 8) = &g_data_057b9b70;
    *(long *)((long)alStack_c0 + lVar6) = lVar17;
    ((System_RuntimeTypeHandle_Fields *)(auStack_c8 + lVar6))->value = (intptr_t)SVar5.fields.value;
    *(undefined8 *)((long)alStack_f0 + lVar6 + 0x10) = extraout_RDX_00;
    *(undefined4 *)(abStack_d4 + lVar6) = uVar9;
    *(Il2CppObject **)((long)alStack_f0 + lVar6 + 8) = pIVar23;
    pSVar12 = *(System_RuntimeTypeHandle_Fields **)&(pIVar19->_1).this_arg.bits;
    if (pSVar12 == (System_RuntimeTypeHandle_Fields *)0x0) {
      *(undefined8 *)((long)&uStack_f8 + lVar6) = 0x2683bf0;
      il2cpp_runtime_helper_02300a20(pIVar19);
      pSVar12 = *(System_RuntimeTypeHandle_Fields **)&(pIVar19->_1).this_arg.bits;
    }
    *(Il2CppClass **)((long)alStack_f0 + lVar6) = pIVar19;
    __n = (ulong)*(uint *)(pSVar12[1].value + 0xfc);
    uVar16 = __n + 0xf & 0xfffffffffffffff0;
    pvVar18 = (void *)((long)alStack_f0 + (lVar6 - uVar16));
    __s = (void *)((long)pvVar18 - uVar16);
    *(ulong *)((long)&uStack_d0 + lVar6) = __n;
    *(undefined8 *)((long)__s + -8) = 0x2683c2a;
    memset(__s,0,__n);
    SVar5.fields.value = (System_RuntimeTypeHandle_Fields)pSVar12->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683c4a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)__s + -8) = 0x2683c54;
    pSVar13 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683c6c;
      il2cpp_runtime_helper_02337ed0();
    }
    value = *(System_String_o **)((long)alStack_f0 + lVar6 + 8);
    *(undefined8 *)((long)__s + -8) = 0x2683c7d;
    bVar8 = System_Enum__IsDefined(pSVar13,(Il2CppObject *)value,(MethodInfo *)0x0);
    lVar17 = *(long *)((long)alStack_f0 + lVar6);
    if ((char)bVar8 == '\0') {
      __n_00 = *(size_t *)((long)&uStack_d0 + lVar6);
      *(undefined8 *)((long)__s + -8) = 0x2683d2a;
      memset(__s,0,__n_00);
      *(undefined8 *)((long)__s + -8) = 0x2683d38;
      memcpy(pvVar18,__s,__n_00);
      __dest_00 = *(void **)((long)alStack_f0 + lVar6 + 0x10);
    }
    else {
      SVar5.fields.value =
           (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38))->value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x2683caf;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)__s + -8) = 0x2683cb9;
      pSVar13 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x2683cd1;
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = abStack_d4[lVar6];
      *(undefined8 *)((long)__s + -8) = 0x2683ce2;
      pIVar10 = System_Enum__Parse_3cf22f0(pSVar13,value,(uint)bVar1,(MethodInfo *)0x0);
      lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x2683cfe;
        lVar17 = il2cpp_runtime_helper_023009c0(lVar17);
      }
      __n_00 = *(size_t *)((long)&uStack_d0 + lVar6);
      *(undefined8 *)((long)__s + -8) = 0x2683d10;
      pvVar18 = (void *)il2cpp_runtime_helper_022b2b80(pIVar10,lVar17,pvVar18);
      __dest_00 = *(void **)((long)alStack_f0 + lVar6 + 0x10);
    }
    *(undefined8 *)((long)__s + -8) = 0x2683d47;
    pIVar10 = memcpy(__dest_00,pvVar18,__n_00);
    return pIVar10;
  }
label_02683b9c:
  return (Il2CppObject *)(ulong)uVar20;
}


// MiscExtensions$$GetRandomItem<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, const MethodInfo_25839E0* method);
// 0x26839e0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
MiscExtensions__GetRandomItem___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *list,MethodInfo_25839E0 *method)

{
  byte bVar1;
  code *pcVar2;
  Il2CppArrayBounds *pIVar3;
  il2cpp_array_size_t iVar4;
  System_RuntimeTypeHandle_o SVar5;
  System_String_o *value;
  long lVar6;
  int32_t maxExclusive;
  bool_conflict bVar7;
  undefined4 uVar8;
  System_Object_array *pSVar9;
  System_RuntimeTypeHandle_Fields *pSVar10;
  System_Type_o *pSVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  Il2CppClass *pIVar17;
  System_Collections_Generic_List_T__o *in_RDX;
  void *extraout_RDX;
  void *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  ulong __n;
  void *extraout_RDX_02;
  size_t __n_00;
  uint uVar18;
  MethodInfo_25839E0 *pMVar19;
  System_Collections_Generic_List_T__o *value_00;
  Il2CppObject *pIVar20;
  void *__dest;
  void *__s;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar21;
  undefined1 auVar22 [16];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar23;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar24;
  undefined8 uStack_e0;
  long alStack_d8 [3];
  byte abStack_bc [4];
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  long alStack_a8 [11];
  undefined8 uStack_50;
  int32_t *local_48;
  void *local_40;
  int32_t local_34;
  
  pSVar9 = in_RDX[1].fields._items;
  pMVar19 = method;
  value_00 = list;
  if (pSVar9 == (System_Object_array *)0x0) {
    uStack_50 = 0x2683a0b;
    value_00 = in_RDX;
    il2cpp_runtime_helper_02300a20();
    pSVar9 = in_RDX[1].fields._items;
  }
  uVar14 = (ulong)*(uint *)(pSVar9->max_length + 0xfc);
  lVar6 = -(uVar14 + 0xf & 0xfffffffffffffff0);
  pvVar16 = (void *)((long)&local_48 + lVar6);
  if (list != (System_Collections_Generic_List_T__o *)0x0) {
    pcVar2 = *(code **)(pSVar9->obj).monitor;
    *(undefined8 *)((long)&uStack_50 + lVar6) = 0x2683a39;
    maxExclusive = (*pcVar2)();
    *(undefined8 *)((long)&uStack_50 + lVar6) = 0x2683a44;
    local_34 = UnityEngine_Random__Range_4df2410(0,maxExclusive,(MethodInfo *)0x0);
    pIVar3 = (in_RDX[1].fields._items)->bounds;
    iVar4 = pIVar3->length;
    local_48 = &local_34;
    pcVar2 = (code *)pIVar3[1].length;
    local_40 = pvVar16;
    *(undefined8 *)((long)&uStack_50 + lVar6) = 0x2683a6b;
    (*pcVar2)(iVar4,pIVar3,list,&local_48,pvVar16);
    *(undefined8 *)((long)&uStack_50 + lVar6) = 0x2683a79;
    UVar21.klass = memcpy(method,pvVar16,uVar14);
    UVar21.monitor = extraout_RDX;
    return UVar21;
  }
  *(undefined8 *)((long)&uStack_50 + lVar6) = 0x2683a8d;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  lVar15 = auVar22._8_8_;
  *(undefined1 **)((long)&uStack_50 + lVar6) = &stack0xfffffffffffffff8;
  *(ulong *)((long)alStack_a8 + lVar6 + 0x50) = uVar14;
  *(MethodInfo_25839E0 **)((long)alStack_a8 + lVar6 + 0x48) = method;
  *(System_Collections_Generic_List_T__o **)((long)alStack_a8 + lVar6 + 0x40) = in_RDX;
  *(undefined8 *)((long)alStack_a8 + lVar6 + 0x38) = 0;
  *(void **)((long)alStack_a8 + lVar6 + 0x30) = pvVar16;
  *(long *)((long)alStack_a8 + lVar6 + 0x28) = auVar22._0_8_;
  pSVar10 = *(System_RuntimeTypeHandle_Fields **)(lVar15 + 0x38);
  if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
    *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683ab5;
    il2cpp_runtime_helper_02300a20(lVar15);
    pSVar10 = *(System_RuntimeTypeHandle_Fields **)(lVar15 + 0x38);
  }
  SVar5.fields.value = (System_RuntimeTypeHandle_Fields)pSVar10->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683ad9;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar18 = 0;
  *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683ae5;
  pSVar11 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683afd;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b0a;
  bVar7 = System_Enum__IsDefined(pSVar11,(Il2CppObject *)value_00,(MethodInfo *)0x0);
  pvVar16 = extraout_RDX_00;
  if ((char)bVar7 != '\0') {
    SVar5.fields.value =
         (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar15 + 0x38))->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b2f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b39;
    pSVar11 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b51;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar17 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b62;
    pIVar12 = System_Enum__Parse_3cf22f0
                        (pSVar11,(System_String_o *)value_00,(uint)pMVar19 & 0xff,(MethodInfo *)0x0);
    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b7f;
      lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
    }
    if (pIVar12 == (Il2CppObject *)0x0) {
      *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683bb2;
      lVar13 = il2cpp_runtime_helper_022b2c90();
    }
    else {
      pIVar17 = (pIVar12->klass->_1).element_class;
      if (pIVar17 == *(Il2CppClass **)(lVar13 + 0x40)) {
        *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683b9a;
        auVar22 = il2cpp_runtime_helper_02305440(pIVar12);
        pvVar16 = auVar22._8_8_;
        uVar18 = *auVar22._0_8_;
        goto label_02683b9c;
      }
    }
    uVar8 = (undefined4)lVar13;
    *(undefined8 *)((long)alStack_a8 + lVar6 + 0x20) = 0x2683bbd;
    pIVar20 = pIVar12;
    il2cpp_runtime_helper_022b2fd0();
    *(Il2CppObject **)((long)alStack_a8 + lVar6 + 0x20) = pIVar12;
    *(ulong *)((long)alStack_a8 + lVar6 + 0x18) = (ulong)pMVar19 & 0xffffffff;
    *(System_Collections_Generic_List_T__o **)((long)alStack_a8 + lVar6 + 0x10) = value_00;
    *(undefined8 **)((long)alStack_a8 + lVar6 + 8) = &g_data_057b9b70;
    *(long *)((long)alStack_a8 + lVar6) = lVar15;
    ((System_RuntimeTypeHandle_Fields *)(auStack_b0 + lVar6))->value = (intptr_t)SVar5.fields.value;
    *(undefined8 *)((long)alStack_d8 + lVar6 + 0x10) = extraout_RDX_01;
    *(undefined4 *)(abStack_bc + lVar6) = uVar8;
    *(Il2CppObject **)((long)alStack_d8 + lVar6 + 8) = pIVar20;
    pSVar10 = *(System_RuntimeTypeHandle_Fields **)&(pIVar17->_1).this_arg.bits;
    if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
      *(undefined8 *)((long)&uStack_e0 + lVar6) = 0x2683bf0;
      il2cpp_runtime_helper_02300a20(pIVar17);
      pSVar10 = *(System_RuntimeTypeHandle_Fields **)&(pIVar17->_1).this_arg.bits;
    }
    *(Il2CppClass **)((long)alStack_d8 + lVar6) = pIVar17;
    __n = (ulong)*(uint *)(pSVar10[1].value + 0xfc);
    uVar14 = __n + 0xf & 0xfffffffffffffff0;
    pvVar16 = (void *)((long)alStack_d8 + (lVar6 - uVar14));
    __s = (void *)((long)pvVar16 - uVar14);
    *(ulong *)((long)&uStack_b8 + lVar6) = __n;
    *(undefined8 *)((long)__s + -8) = 0x2683c2a;
    memset(__s,0,__n);
    SVar5.fields.value = (System_RuntimeTypeHandle_Fields)pSVar10->value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683c4a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)__s + -8) = 0x2683c54;
    pSVar11 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2683c6c;
      il2cpp_runtime_helper_02337ed0();
    }
    value = *(System_String_o **)((long)alStack_d8 + lVar6 + 8);
    *(undefined8 *)((long)__s + -8) = 0x2683c7d;
    bVar7 = System_Enum__IsDefined(pSVar11,(Il2CppObject *)value,(MethodInfo *)0x0);
    lVar15 = *(long *)((long)alStack_d8 + lVar6);
    if ((char)bVar7 == '\0') {
      __n_00 = *(size_t *)((long)&uStack_b8 + lVar6);
      *(undefined8 *)((long)__s + -8) = 0x2683d2a;
      memset(__s,0,__n_00);
      *(undefined8 *)((long)__s + -8) = 0x2683d38;
      memcpy(pvVar16,__s,__n_00);
      __dest = *(void **)((long)alStack_d8 + lVar6 + 0x10);
    }
    else {
      SVar5.fields.value =
           (System_RuntimeTypeHandle_Fields)(*(System_RuntimeTypeHandle_Fields **)(lVar15 + 0x38))->value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x2683caf;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)__s + -8) = 0x2683cb9;
      pSVar11 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x2683cd1;
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = abStack_bc[lVar6];
      *(undefined8 *)((long)__s + -8) = 0x2683ce2;
      pIVar12 = System_Enum__Parse_3cf22f0(pSVar11,value,(uint)bVar1,(MethodInfo *)0x0);
      lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x2683cfe;
        lVar15 = il2cpp_runtime_helper_023009c0(lVar15);
      }
      __n_00 = *(size_t *)((long)&uStack_b8 + lVar6);
      *(undefined8 *)((long)__s + -8) = 0x2683d10;
      pvVar16 = (void *)il2cpp_runtime_helper_022b2b80(pIVar12,lVar15,pvVar16);
      __dest = *(void **)((long)alStack_d8 + lVar6 + 0x10);
    }
    *(undefined8 *)((long)__s + -8) = 0x2683d47;
    UVar24.klass = memcpy(__dest,pvVar16,__n_00);
    UVar24.monitor = extraout_RDX_02;
    return UVar24;
  }
label_02683b9c:
  UVar23.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(ulong)uVar18;
  UVar23.monitor = pvVar16;
  return UVar23;
}


// MiscExtensions$$GetRandomItem
// il2cpp: SimpleJSONFixed_JSONNode_o* MiscExtensions__GetRandomItem (SimpleJSONFixed_JSONNode_o* list, const MethodInfo* method);
// 0x4066980

SimpleJSONFixed_JSONNode_o *
MiscExtensions__GetRandomItem(SimpleJSONFixed_JSONNode_o *list,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  int32_t iVar4;
  uint uVar5;
  int32_t g;
  int32_t b;
  int32_t a;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  long *plVar8;
  Utility_Color255_o *__this;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  Il2CppObject *pIVar9;
  Utility_Color255_o *pUVar10;
  
  if (list != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar4 = (*(list->klass->vtable)._11_get_Count.methodPtr)(list,(list->klass->vtable)._11_get_Count.method);
    uVar5 = UnityEngine_Random__Range_4df2410(0,iVar4,(MethodInfo *)0x0);
    pSVar2 = list->klass;
    vtableDispatch = (pSVar2->vtable)._5_get_Item.methodPtr;
    pSVar7 = (SimpleJSONFixed_JSONNode_o *)
             (*vtableDispatch)
                       (list,(ulong)uVar5,(pSVar2->vtable)._5_get_Item.method,pSVar2,vtableDispatch);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = (Utility_Color255_o *)list;
  if (g_data_057ac2bf == '\0') {
    pUVar10 = (Utility_Color255_o *)&TypeInfo_Color255;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2bf = '\x01';
  }
  if (((Utility_Color255_o *)list != (Utility_Color255_o *)0x0) &&
     (pUVar10 = (Utility_Color255_o *)list,
     plVar8 = (long *)(*(code *)((Utility_Color255_o *)list)->klass[1]._1.name)
                                (list,0,((Utility_Color255_o *)list)->klass[1]._1.namespaze),
     plVar8 != (long *)0x0)) {
    iVar4 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
    pUVar10 = (Utility_Color255_o *)list;
    plVar8 = (long *)(*(code *)((Utility_Color255_o *)list)->klass[1]._1.name)
                               (list,1,((Utility_Color255_o *)list)->klass[1]._1.namespaze);
    if (plVar8 != (long *)0x0) {
      g = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
      pUVar10 = (Utility_Color255_o *)list;
      plVar8 = (long *)(*(code *)((Utility_Color255_o *)list)->klass[1]._1.name)
                                 (list,2,((Utility_Color255_o *)list)->klass[1]._1.namespaze);
      if (plVar8 != (long *)0x0) {
        b = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
        plVar8 = (long *)(*(code *)((Utility_Color255_o *)list)->klass[1]._1.name)
                                   (list,3,((Utility_Color255_o *)list)->klass[1]._1.namespaze);
        pUVar10 = (Utility_Color255_o *)list;
        if (plVar8 != (long *)0x0) {
          a = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
          __this = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          pUVar10 = __this;
          Utility_Color255___ctor(__this,iVar4,g,b,a,(MethodInfo *)0x0);
          if (__this != (Utility_Color255_o *)0x0) {
            Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ac2c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((pUVar10 != (Utility_Color255_o *)0x0) &&
     (pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar3,(pUVar10->fields).B,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18)
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pIVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar3,(pUVar10->fields).B,MethodInfo_PlayerInfo_get_Item);
      return (SimpleJSONFixed_JSONNode_o *)pIVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// MiscExtensions$$ToColor
// il2cpp: UnityEngine_Color_o MiscExtensions__ToColor (SimpleJSONFixed_JSONNode_o* array, const MethodInfo* method);
// 0x40669d0

UnityEngine_Color_o MiscExtensions__ToColor(SimpleJSONFixed_JSONNode_o *array,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  bool_conflict bVar3;
  long *plVar4;
  Utility_Color255_o *__this;
  Utility_Color255_o *pUVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  UnityEngine_Color_Fields UVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_Color_o UVar9;
  undefined8 extraout_XMM0_Qa_00;
  
  pUVar5 = (Utility_Color255_o *)array;
  if (g_data_057ac2bf == '\0') {
    pUVar5 = (Utility_Color255_o *)&TypeInfo_Color255;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2bf = '\x01';
  }
  if ((array != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pUVar5 = (Utility_Color255_o *)array,
     plVar4 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                                (array,0,(array->klass->vtable)._5_get_Item.method), plVar4 != (long *)0x0)) {
    r = (**(code **)(*plVar4 + 0x368))(plVar4,*(undefined8 *)(*plVar4 + 0x370));
    pUVar5 = (Utility_Color255_o *)array;
    plVar4 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                               (array,1,(array->klass->vtable)._5_get_Item.method);
    if (plVar4 != (long *)0x0) {
      g = (**(code **)(*plVar4 + 0x368))(plVar4,*(undefined8 *)(*plVar4 + 0x370));
      pUVar5 = (Utility_Color255_o *)array;
      plVar4 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                                 (array,2,(array->klass->vtable)._5_get_Item.method);
      if (plVar4 != (long *)0x0) {
        b = (**(code **)(*plVar4 + 0x368))(plVar4,*(undefined8 *)(*plVar4 + 0x370));
        plVar4 = (long *)(*(array->klass->vtable)._5_get_Item.methodPtr)
                                   (array,3,(array->klass->vtable)._5_get_Item.method);
        pUVar5 = (Utility_Color255_o *)array;
        if (plVar4 != (long *)0x0) {
          a = (**(code **)(*plVar4 + 0x368))(plVar4,*(undefined8 *)(*plVar4 + 0x370));
          __this = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          pUVar5 = __this;
          Utility_Color255___ctor(__this,r,g,b,a,(MethodInfo *)0x0);
          if (__this != (Utility_Color255_o *)0x0) {
            UVar7 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
            return (UnityEngine_Color_o)UVar7;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ac2c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((pUVar5 != (Utility_Color255_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(pUVar5->fields).B,MethodInfo_Boolean_ContainsKey);
    uVar6 = extraout_XMM0_Qa;
    if ((char)bVar3 == '\0') goto label_04066c17;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___get_Item(pSVar2,(pUVar5->fields).B,MethodInfo_PlayerInfo_get_Item);
      UVar8.fields.b = (float)(int)in_XMM1_Qa;
      UVar8.fields.a = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
      UVar8.fields.r = (float)(int)extraout_XMM0_Qa_00;
      UVar8.fields.g = (float)(int)((ulong)extraout_XMM0_Qa_00 >> 0x20);
      return (UnityEngine_Color_o)UVar8.fields;
    }
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
label_04066c17:
  UVar9.fields.b = (float)(int)in_XMM1_Qa;
  UVar9.fields.a = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
  UVar9.fields.r = (float)(int)uVar6;
  UVar9.fields.g = (float)(int)((ulong)uVar6 >> 0x20);
  return (UnityEngine_Color_o)UVar9.fields;
}


// MiscExtensions$$GetPlayerInfo
// il2cpp: GameManagers_PlayerInfo_o* MiscExtensions__GetPlayerInfo (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4066b20

GameManagers_PlayerInfo_o * MiscExtensions__GetPlayerInfo(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool_conflict bVar3;
  GameManagers_PlayerInfo_o *pGVar4;
  
  if (g_data_057ac2c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ac2c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (GameManagers_PlayerInfo_o *)0x0;
    }
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pGVar4 = (GameManagers_PlayerInfo_o *)
               System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar2,(player->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
      return pGVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (GameManagers_PlayerInfo_o *)0x0;
}


// MiscExtensions$$ReverseString
// il2cpp: System_String_o* MiscExtensions__ReverseString (System_String_o* s, const MethodInfo* method);
// 0x4066c30

System_String_o * MiscExtensions__ReverseString(System_String_o *s,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Char_array *array;
  System_String_o *pSVar3;
  System_Text_RegularExpressions_Regex_o *pSVar4;
  System_String_array *values;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ac2c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Reverse_Char);
    g_data_057ac2c1 = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    array = System_String__ToCharArray(s,(MethodInfo *)0x0);
    System_Array__Reverse_char_(array,MethodInfo_Void_Reverse_Char);
    pSVar3 = System_String__CreateString_3af3bd0((System_String_o *)0x0,array,(MethodInfo *)0x0);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=(\\w+)>");
    il2cpp_runtime_helper_023445d0(&"#808080ff");
    il2cpp_runtime_helper_023445d0(&"(</color>)");
    il2cpp_runtime_helper_023445d0(&"#a52a2aff");
    il2cpp_runtime_helper_023445d0(&"teal");
    il2cpp_runtime_helper_023445d0(&"magenta");
    il2cpp_runtime_helper_023445d0(&"darkblue");
    il2cpp_runtime_helper_023445d0(&"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
    il2cpp_runtime_helper_023445d0(&"lightblue");
    il2cpp_runtime_helper_023445d0(&"brown");
    il2cpp_runtime_helper_023445d0(&"#008080ff");
    il2cpp_runtime_helper_023445d0(&"grey");
    il2cpp_runtime_helper_023445d0(&"<\\/?material.*?>");
    il2cpp_runtime_helper_023445d0(&"olive");
    il2cpp_runtime_helper_023445d0(&"#0000a0ff");
    il2cpp_runtime_helper_023445d0(&"#c0c0c0ff");
    il2cpp_runtime_helper_023445d0(&"(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)");
    il2cpp_runtime_helper_023445d0(&"#ff00ffff");
    il2cpp_runtime_helper_023445d0(&"silver");
    il2cpp_runtime_helper_023445d0(&"#00ff00ff");
    il2cpp_runtime_helper_023445d0(&"|");
    il2cpp_runtime_helper_023445d0(&"aqua");
    il2cpp_runtime_helper_023445d0(&"#00ffffff");
    il2cpp_runtime_helper_023445d0(&"<\\/?size.*?>");
    il2cpp_runtime_helper_023445d0(&"#add8e6ff");
    il2cpp_runtime_helper_023445d0(&"lime");
    il2cpp_runtime_helper_023445d0(&"#000080ff");
    il2cpp_runtime_helper_023445d0(&"navy");
    il2cpp_runtime_helper_023445d0(&"fuchsia");
    il2cpp_runtime_helper_023445d0(&"#808000ff");
    il2cpp_runtime_helper_023445d0(&"cyan");
    il2cpp_runtime_helper_023445d0(&"<\\/?[^>]+>");
    il2cpp_runtime_helper_023445d0(&"<\\/?quad.*?>");
    il2cpp_runtime_helper_023445d0(&"maroon");
    il2cpp_runtime_helper_023445d0(&"#800000ff");
    g_data_057ac2c2 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MiscExtensions + 0xb8) = "(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MiscExtensions + 0xb8),"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 8) = "(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)";
  il2cpp_runtime_helper_022b4080(lVar2 + 8);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = "(</color>)";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = "<\\/?[^>]+>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x18);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x20) = "<\\/?size.*?>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x28) = "<\\/?material.*?>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x30) = "<\\/?quad.*?>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
  pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_MiscExtensions + 0xb8);
  pSVar4 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x38) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar4);
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 8);
  pSVar4 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x40) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar4);
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x10);
  pSVar4 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x48) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar4);
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x18);
  pSVar4 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x50) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar4);
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (values == (System_String_array *)0x0) goto label_0406747a;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x20);
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = "|";
      il2cpp_runtime_helper_022b4080(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x28);
        il2cpp_runtime_helper_022b4080(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = "|";
          il2cpp_runtime_helper_022b4080(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x30);
            il2cpp_runtime_helper_022b4080(values->m_Items + 4);
            pSVar3 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
            pSVar4 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
            System_Text_RegularExpressions_Regex___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
            lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
            *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x58) = pSVar4;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar4);
            pSVar4 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
            System_Text_RegularExpressions_Regex___ctor_4907710(pSVar4,"<color=(\\w+)>",9,(MethodInfo *)0x0);
            lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
            *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x60) = pSVar4;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar4);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              if (g_data_057a9c88 != '\0') goto label_04067214;
label_04067445:
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              if (g_data_057a9c88 == '\0') goto label_04067445;
label_04067214:
              iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                        (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
            System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this,comparer,MethodInfo_Dictionary_2_System_String_System_String)
            ;
            if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"aqua","#00ffffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"cyan","#00ffffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"brown","#a52a2aff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"darkblue","#0000a0ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"fuchsia","#ff00ffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"magenta","#ff00ffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"grey","#808080ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"lightblue","#add8e6ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"lime","#00ff00ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"maroon","#800000ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"navy","#000080ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"olive","#808000ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"silver","#c0c0c0ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"teal","#008080ff",MethodInfo_Void_Add);
              lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
              *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x68) = __this;
              pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar2 + 0x68,__this);
              return pSVar3;
            }
            goto label_0406747a;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0406747a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2c3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar3;
}


// MiscExtensions$$.cctor
// il2cpp: void MiscExtensions___cctor (const MethodInfo* method);
// 0x4066c90

void MiscExtensions___cctor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Text_RegularExpressions_Regex_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ac2c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=(\\w+)>");
    il2cpp_runtime_helper_023445d0(&"#808080ff");
    il2cpp_runtime_helper_023445d0(&"(</color>)");
    il2cpp_runtime_helper_023445d0(&"#a52a2aff");
    il2cpp_runtime_helper_023445d0(&"teal");
    il2cpp_runtime_helper_023445d0(&"magenta");
    il2cpp_runtime_helper_023445d0(&"darkblue");
    il2cpp_runtime_helper_023445d0(&"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
    il2cpp_runtime_helper_023445d0(&"lightblue");
    il2cpp_runtime_helper_023445d0(&"brown");
    il2cpp_runtime_helper_023445d0(&"#008080ff");
    il2cpp_runtime_helper_023445d0(&"grey");
    il2cpp_runtime_helper_023445d0(&"<\\/?material.*?>");
    il2cpp_runtime_helper_023445d0(&"olive");
    il2cpp_runtime_helper_023445d0(&"#0000a0ff");
    il2cpp_runtime_helper_023445d0(&"#c0c0c0ff");
    il2cpp_runtime_helper_023445d0(&"(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)");
    il2cpp_runtime_helper_023445d0(&"#ff00ffff");
    il2cpp_runtime_helper_023445d0(&"silver");
    il2cpp_runtime_helper_023445d0(&"#00ff00ff");
    il2cpp_runtime_helper_023445d0(&"|");
    il2cpp_runtime_helper_023445d0(&"aqua");
    il2cpp_runtime_helper_023445d0(&"#00ffffff");
    il2cpp_runtime_helper_023445d0(&"<\\/?size.*?>");
    il2cpp_runtime_helper_023445d0(&"#add8e6ff");
    il2cpp_runtime_helper_023445d0(&"lime");
    il2cpp_runtime_helper_023445d0(&"#000080ff");
    il2cpp_runtime_helper_023445d0(&"navy");
    il2cpp_runtime_helper_023445d0(&"fuchsia");
    il2cpp_runtime_helper_023445d0(&"#808000ff");
    il2cpp_runtime_helper_023445d0(&"cyan");
    il2cpp_runtime_helper_023445d0(&"<\\/?[^>]+>");
    il2cpp_runtime_helper_023445d0(&"<\\/?quad.*?>");
    il2cpp_runtime_helper_023445d0(&"maroon");
    il2cpp_runtime_helper_023445d0(&"#800000ff");
    g_data_057ac2c2 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MiscExtensions + 0xb8) = "(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MiscExtensions + 0xb8),"(\\[)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(\\])");
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 8) = "(<color=#)([A-Fa-f0-9]{3}|[A-Fa-f0-9]{6})(>)";
  il2cpp_runtime_helper_022b4080(lVar2 + 8);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = "(</color>)";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = "<\\/?[^>]+>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x18);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x20) = "<\\/?size.*?>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x28) = "<\\/?material.*?>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(undefined8 *)(lVar2 + 0x30) = "<\\/?quad.*?>";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
  pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_MiscExtensions + 0xb8);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x38) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar3);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 8);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x40) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar3);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x10);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x48) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar3);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x18);
  pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
  *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x50) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar3);
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (values == (System_String_array *)0x0) goto label_0406747a;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x20);
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = "|";
      il2cpp_runtime_helper_022b4080(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x28);
        il2cpp_runtime_helper_022b4080(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = "|";
          il2cpp_runtime_helper_022b4080(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = *(System_String_o **)(*(long *)(TypeInfo_MiscExtensions + 0xb8) + 0x30);
            il2cpp_runtime_helper_022b4080(values->m_Items + 4);
            pSVar4 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
            pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
            System_Text_RegularExpressions_Regex___ctor(pSVar3,pSVar4,(MethodInfo *)0x0);
            lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
            *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x58) = pSVar3;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar3);
            pSVar3 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
            System_Text_RegularExpressions_Regex___ctor_4907710(pSVar3,"<color=(\\w+)>",9,(MethodInfo *)0x0);
            lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
            *(System_Text_RegularExpressions_Regex_o **)(lVar2 + 0x60) = pSVar3;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x60,pSVar3);
            if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              if (g_data_057a9c88 != '\0') goto label_04067214;
label_04067445:
              il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
              g_data_057a9c88 = '\x01';
              iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            else {
              if (g_data_057a9c88 == '\0') goto label_04067445;
label_04067214:
              iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                        (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
            System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this,comparer,MethodInfo_Dictionary_2_System_String_System_String)
            ;
            if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"aqua","#00ffffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"cyan","#00ffffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"brown","#a52a2aff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"darkblue","#0000a0ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"fuchsia","#ff00ffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"magenta","#ff00ffff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"grey","#808080ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"lightblue","#add8e6ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"lime","#00ff00ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"maroon","#800000ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"navy","#000080ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"olive","#808000ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"silver","#c0c0c0ff",MethodInfo_Void_Add);
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,"teal","#008080ff",MethodInfo_Void_Add);
              lVar2 = *(long *)(TypeInfo_MiscExtensions + 0xb8);
              *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x68) = __this;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x68,__this);
              return;
            }
            goto label_0406747a;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0406747a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac2c3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


