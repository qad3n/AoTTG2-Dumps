// Type: Anticheat.ChatFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/ChatFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/ChatFilter.cs
// --------------------------------

// Anticheat.ChatFilter.<>c$$.cctor
// il2cpp: void Anticheat_ChatFilter___c___cctor (const MethodInfo* method);
// 0x44d38e0

void Anticheat_ChatFilter___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeb3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeb3a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Anticheat.ChatFilter.<>c$$.ctor
// il2cpp: void Anticheat_ChatFilter___c___ctor (Anticheat_ChatFilter___c_o* __this, const MethodInfo* method);
// 0x44d3950

void Anticheat_ChatFilter___c___ctor(Anticheat_ChatFilter___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c$$<FilterBadWords>b__3_0
// il2cpp: System_String_o* Anticheat_ChatFilter___c___FilterBadWords_b__3_0 (Anticheat_ChatFilter___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x44d3960

System_String_o *
Anticheat_ChatFilter___c___FilterBadWords_b__3_0
          (Anticheat_ChatFilter___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method
          )

{
  int iVar1;
  Anticheat_ChatFilter___c_c *pAVar2;
  System_String_o *pSVar3;
  
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    pSVar3 = System_String__CreateString_3afdbf0
                       ((System_String_o *)0x0,0x2a,(match->fields)._Length_k__BackingField,(MethodInfo *)0x0)
    ;
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb3b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Key);
    g_data_057aeb3b = '\x01';
  }
  pAVar2 = __this[1].klass;
  if (pAVar2 == (Anticheat_ChatFilter___c_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeb3c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb3c = '\x01';
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar1 != 0) {
      return (System_String_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                      *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
    }
    il2cpp_runtime_helper_02337ed0();
    return (System_String_o *)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
  }
  return (System_String_o *)CONCAT71((int7)((ulong)pAVar2 >> 8),*(int *)&(pAVar2->_1).name == (int)match);
}


// Anticheat.ChatFilter.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Anticheat_ChatFilter___c__DisplayClass4_0___ctor (Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x44d37f0

void Anticheat_ChatFilter___c__DisplayClass4_0___ctor
               (Anticheat_ChatFilter___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c__DisplayClass4_0$$<FilterSizeTag>b__0
// il2cpp: bool Anticheat_ChatFilter___c__DisplayClass4_0___FilterSizeTag_b__0 (Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, System_Collections_Generic_KeyValuePair_int__string__o p, const MethodInfo* method);
// 0x44d3980

bool_conflict
Anticheat_ChatFilter___c__DisplayClass4_0___FilterSizeTag_b__0
          (Anticheat_ChatFilter___c__DisplayClass4_0_o *__this,
          System_Collections_Generic_KeyValuePair_int__string__o p,MethodInfo *method)

{
  int iVar1;
  System_Text_RegularExpressions_Match_o *pSVar2;
  
  if (g_data_057aeb3b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Key,p.fields._0_8_,p.fields.value);
    g_data_057aeb3b = '\x01';
  }
  pSVar2 = (__this->fields).match;
  if (pSVar2 != (System_Text_RegularExpressions_Match_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pSVar2 >> 8),(pSVar2->fields)._Index_k__BackingField == p.fields.key);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb3c = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
}


// Anticheat.ChatFilter$$Init
// il2cpp: void Anticheat_ChatFilter__Init (const MethodInfo* method);
// 0x44d2650

void Anticheat_ChatFilter__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint16_t item;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_char__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_12;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  long *plVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Char_array *pSVar11;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Collections_Generic_List_object__o **unaff_RBP;
  long *unaff_R12;
  long *unaff_R13;
  System_Collections_Generic_List_object__o **unaff_R14;
  System_Collections_Generic_List_object__o *unaff_R15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  undefined1 auVar13 [12];
  _union_249395 _Var14;
  Il2CppType *pIVar15;
  System_Text_RegularExpressions_Regex_o *__this_13;
  System_Text_RegularExpressions_Regex_o *pSVar16;
  _union_249395 _Stack_130;
  Il2CppType *pIStack_128;
  System_Text_RegularExpressions_Regex_o *pSStack_120;
  _union_249395 _Stack_110;
  Il2CppType *pIStack_108;
  System_Text_RegularExpressions_Regex_o *pSStack_100;
  System_Collections_Generic_List_object__o *pSStack_f8;
  System_Text_RegularExpressions_Regex_o *pSStack_f0;
  long *plStack_e8;
  System_Collections_Generic_List_object__o **ppSStack_e0;
  System_Collections_Generic_List_object__o *pSStack_d8;
  System_Collections_Generic_List_object__o **ppSStack_d0;
  Il2CppRGCTXData IVar17;
  Il2CppMethodPointer pIVar18;
  System_Object_array *pSVar19;
  char *pcVar20;
  Il2CppClass *pIVar21;
  Il2CppType **ppIVar22;
  _union_13 _Var23;
  _union_14 _Var24;
  Il2CppRGCTXData local_78;
  Il2CppMethodPointer pIStack_70;
  System_Object_array *local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057aeb36 == '\0') {
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2676;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2682;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d268e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d269a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d26a6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d26b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d26be;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d26ca;
    il2cpp_runtime_helper_023445d0(&"banned_regex");
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d26d6;
    il2cpp_runtime_helper_023445d0(&"ChatFilterInfo");
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d26e2;
    il2cpp_runtime_helper_023445d0(&"banned_char");
    g_data_057aeb36 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2720;
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar10 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2746;
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_01;
  }
  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2758;
  __this_12 = (System_Collections_Generic_List_object__o *)
              ApplicationManagers_ResourceManager__TryLoadText((System_String_o *)pSVar10,"ChatFilterInfo",in_RDX)
  ;
  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2762;
  pSVar6 = (System_Collections_Generic_List_object__o *)
           SimpleJSONFixed_JSON__Parse((System_String_o *)__this_12,(MethodInfo *)0x0);
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d278b;
    __this_12 = pSVar6;
    pSVar7 = (System_Collections_Generic_List_object__o *)
             (*(pSVar6->klass->vtable)._7_Insert.methodPtr)
                       (pSVar6,"banned_regex",(pSVar6->klass->vtable)._7_Insert.method);
    pSVar10 = pSVar6;
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d27ac;
      plVar8 = (long *)(*(code *)pSVar7->klass[1]._1.nestedTypes)
                                 (pSVar7,pSVar7->klass[1]._1.implementedInterfaces);
      __this_12 = pSVar7;
      if (plVar8 != (long *)0x0) {
        ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d27cd;
        (**(code **)(*plVar8 + 0x338))(&local_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
        ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d280e;
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_06.fields._0_8_ = local_78.rgctxDataDummy;
        __this_06.fields.m_Object.fields._8_8_ = local_68;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
        __this_06.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
        __this_06.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_06.fields.m_Array.fields._current = local_38.genericMethod;
        IVar17 = local_78;
        pIVar18 = pIStack_70;
        pSVar19 = local_68;
        pcVar20 = pcStack_60;
        pIVar21 = local_58;
        pIVar15 = pIStack_50;
        ppIVar22 = local_48;
        _Var23 = _Stack_40;
        _Var24 = local_38;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar5 != '\0') {
          unaff_RBP = (System_Collections_Generic_List_object__o **)&TypeInfo_Regex;
          unaff_R14 = &TypeInfo_ChatFilter;
          unaff_R13 = &MethodInfo_Void_Add;
          do {
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2863;
            __this_08.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_08.fields._0_8_ = IVar17.rgctxDataDummy;
            __this_08.fields.m_Object.fields._8_8_ = pSVar19;
            __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_08.fields.m_Object.fields._32_8_ = pIVar15;
            __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar22;
            __this_08.fields.m_Array.fields._8_8_ = _Var23.rgctx_data;
            __this_08.fields.m_Array.fields._current = _Var24.genericMethod;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_08,(MethodInfo *)&stack0xffffffffffffff38);
            unaff_R12 = (long *)SVar12.fields.value;
            pSVar10 = (System_Collections_Generic_List_object__o *)SVar12.fields.key;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2881;
              il2cpp_runtime_helper_02337ed0();
            }
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d288e;
            __this_12 = pSVar10;
            pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar12,(MethodInfo *)0x0);
            unaff_R15 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff38;
            if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044d2afe;
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d28aa;
            pSVar10 = (System_Collections_Generic_List_object__o *)
                      (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d28b6;
            unaff_R12 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d28cb;
            System_Text_RegularExpressions_Regex___ctor_4907710
                      ((System_Text_RegularExpressions_Regex_o *)unaff_R12,(System_String_o *)pSVar10,8,
                       (MethodInfo *)0x0);
            if (TypeInfo_ChatFilter[5].fields._version == 0) {
              ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d28dc;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar4 = MethodInfo_Void_Add;
            __this_12 = (System_Collections_Generic_List_object__o *)
                        **(undefined8 **)&TypeInfo_ChatFilter[4].fields._size;
            unaff_R15 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff38;
            if (__this_12 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d2afe;
            piVar1 = &(__this_12->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_12->fields)._items;
            unaff_R15 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff38;
            if (pSVar3 == (System_Object_array *)0x0) goto label_044d2afe;
            uVar2 = (__this_12->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_12->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)unaff_R12;
              ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d292f;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,unaff_R12);
            }
            else {
              ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2847;
              System_Collections_Generic_List_object___AddWithResize
                        (__this_12,(Il2CppObject *)unaff_R12,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2851;
            __this_07.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_07.fields._0_8_ = IVar17.rgctxDataDummy;
            __this_07.fields.m_Object.fields._8_8_ = pSVar19;
            __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_07.fields.m_Object.fields._32_8_ = pIVar15;
            __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar22;
            __this_07.fields.m_Array.fields._8_8_ = _Var23.rgctx_data;
            __this_07.fields.m_Array.fields._current = _Var24.genericMethod;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_07,(MethodInfo *)&stack0xffffffffffffff38);
            unaff_R15 = (System_Collections_Generic_List_object__o *)&stack0xffffffffffffff38;
          } while ((char)bVar5 != '\0');
        }
        ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2953;
        pSVar7 = (System_Collections_Generic_List_object__o *)
                 (*(pSVar6->klass->vtable)._7_Insert.methodPtr)
                           (pSVar6,"banned_char",(pSVar6->klass->vtable)._7_Insert.method);
        __this_12 = pSVar6;
        if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
          ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d296f;
          plVar8 = (long *)(*(code *)pSVar7->klass[1]._1.nestedTypes)
                                     (pSVar7,pSVar7->klass[1]._1.implementedInterfaces);
          __this_12 = pSVar7;
          if (plVar8 != (long *)0x0) {
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2990;
            (**(code **)(*plVar8 + 0x338))(&local_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
            ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d29d1;
            __this_09.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
            __this_09.fields._0_8_ = local_78.rgctxDataDummy;
            __this_09.fields.m_Object.fields._8_8_ = local_68;
            __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
            __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
            __this_09.fields.m_Object.fields._32_8_ = pIStack_50;
            __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
            __this_09.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
            __this_09.fields.m_Array.fields._current = local_38.genericMethod;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_09,(MethodInfo *)&stack0xffffffffffffff38);
            if ((char)bVar5 != '\0') {
              unaff_R12 = &TypeInfo_JSONNode;
              unaff_RBP = &TypeInfo_ChatFilter;
              unaff_R13 = &MethodInfo_Void_Add;
              IVar17 = local_78;
              pIVar18 = pIStack_70;
              pSVar19 = local_68;
              pcVar20 = pcStack_60;
              pIVar21 = local_58;
              pIVar15 = pIStack_50;
              ppIVar22 = local_48;
              _Var23 = _Stack_40;
              _Var24 = local_38;
              do {
                ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a36;
                __this_11.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
                __this_11.fields._0_8_ = IVar17.rgctxDataDummy;
                __this_11.fields.m_Object.fields._8_8_ = pSVar19;
                __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
                __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
                __this_11.fields.m_Object.fields._32_8_ = pIVar15;
                __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar22;
                __this_11.fields.m_Array.fields._8_8_ = _Var23.rgctx_data;
                __this_11.fields.m_Array.fields._current = _Var24.genericMethod;
                SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_11,(MethodInfo *)&stack0xffffffffffffff38);
                pSVar10 = (System_Collections_Generic_List_object__o *)SVar12.fields.key;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a4e;
                  il2cpp_runtime_helper_02337ed0();
                }
                ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a5b;
                unaff_R15 = (System_Collections_Generic_List_object__o *)
                            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar12,(MethodInfo *)0x0);
                if (TypeInfo_ChatFilter[5].fields._version == 0) {
                  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a70;
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_12 = TypeInfo_ChatFilter;
                unaff_R14 = (System_Collections_Generic_List_object__o **)&stack0xffffffffffffff38;
                if (unaff_R15 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d2afe;
                pSVar10 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)&TypeInfo_ChatFilter[4].fields._size + 8);
                ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a9b;
                __this_12 = unaff_R15;
                pSVar6 = (System_Collections_Generic_List_object__o *)
                         (*(unaff_R15->klass->vtable)._9_unknown.methodPtr)();
                unaff_R14 = (System_Collections_Generic_List_object__o **)&stack0xffffffffffffff38;
                if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d2afe;
                ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2aaa;
                pSVar11 = System_String__ToCharArray((System_String_o *)pSVar6,(MethodInfo *)0x0);
                lVar4 = MethodInfo_Void_Add;
                __this_12 = pSVar6;
                unaff_R14 = (System_Collections_Generic_List_object__o **)&stack0xffffffffffffff38;
                if (pSVar11 == (System_Char_array *)0x0) goto label_044d2afe;
                unaff_R14 = (System_Collections_Generic_List_object__o **)&stack0xffffffffffffff38;
                if ((int)pSVar11->max_length == 0) goto label_044d2b03;
                unaff_R14 = (System_Collections_Generic_List_object__o **)&stack0xffffffffffffff38;
                if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d2afe;
                item = pSVar11->m_Items[0];
                piVar1 = &(pSVar10->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar10->fields)._items;
                unaff_R14 = (System_Collections_Generic_List_object__o **)&stack0xffffffffffffff38;
                if (pSVar3 == (System_Object_array *)0x0) goto label_044d2afe;
                uVar2 = (pSVar10->fields)._size;
                if (uVar2 < (uint)pSVar3->max_length) {
                  (pSVar10->fields)._size = uVar2 + 1;
                  *(uint16_t *)((long)pSVar3->m_Items + (long)(int)uVar2 * 2) = item;
                }
                else {
                  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a1a;
                  System_Collections_Generic_List_char___AddWithResize
                            ((System_Collections_Generic_List_char__o *)pSVar10,item,
                             *(MethodInfo_3582650 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2a24;
                __this_10.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
                __this_10.fields._0_8_ = IVar17.rgctxDataDummy;
                __this_10.fields.m_Object.fields._8_8_ = pSVar19;
                __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
                __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
                __this_10.fields.m_Object.fields._32_8_ = pIVar15;
                __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar22;
                __this_10.fields.m_Array.fields._8_8_ = _Var23.rgctx_data;
                __this_10.fields.m_Array.fields._current = _Var24.genericMethod;
                bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  (__this_10,(MethodInfo *)&stack0xffffffffffffff38);
              } while ((char)bVar5 != '\0');
            }
            return;
          }
        }
      }
    }
  }
label_044d2afe:
  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2b03;
  il2cpp_runtime_helper_022b2c90();
label_044d2b03:
  ppSStack_d0 = (System_Collections_Generic_List_object__o **)0x44d2b08;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_f8 = pSVar10;
  pSStack_f0 = (System_Text_RegularExpressions_Regex_o *)unaff_R12;
  plStack_e8 = unaff_R13;
  ppSStack_e0 = unaff_R14;
  pSStack_d8 = unaff_R15;
  ppSStack_d0 = unaff_RBP;
  if (g_data_057aeb37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Regex_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Char_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Text_RegularExpressions_Regex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MatchEvaluator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FilterBadWords_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeb37 = '\x01';
  }
  _Var14.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  __this_13 = (System_Text_RegularExpressions_Regex_o *)0x0;
  _Stack_130.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_128 = (Il2CppType *)0x0;
  pSStack_120 = (System_Text_RegularExpressions_Regex_o *)0x0;
  if (TypeInfo_ChatFilter[5].fields._version == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_Collections_Generic_List_object__o *)**(undefined8 **)&TypeInfo_ChatFilter[4].fields._size;
  if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d2e21;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_110,pSVar10,MethodInfo_List_1_T_Enumerator_System_Text_RegularExpressions_Regex);
  _Var14 = _Stack_110;
  pIVar15 = pIStack_108;
  __this_13 = pSStack_100;
  while( true ) {
    __this_00.fields._8_8_ = pIVar15;
    __this_00.fields._list = _Var14.genericMethod;
    __this_00.fields._current = (Il2CppObject *)__this_13;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffeb0);
    if ((char)bVar5 == '\0') {
      __this_01.fields._8_8_ = pIVar15;
      __this_01.fields._list = _Var14.genericMethod;
      __this_01.fields._current = (Il2CppObject *)__this_13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb0);
      goto label_044d2d4f;
    }
    pSVar16 = __this_13;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MatchEvaluator);
      System_Text_RegularExpressions_MatchEvaluator___ctor();
      lVar4 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Text_RegularExpressions_MatchEvaluator_o **)(lVar4 + 8) = evaluator;
      il2cpp_runtime_helper_022b4080(lVar4 + 8,evaluator);
    }
    if (__this_13 == (System_Text_RegularExpressions_Regex_o *)0x0) break;
    __this_12 = (System_Collections_Generic_List_object__o *)
                System_Text_RegularExpressions_Regex__Replace_4906bf0
                          (__this_13,(System_String_o *)__this_12,evaluator,(MethodInfo *)0x0);
    __this_13 = pSVar16;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = __this_12;
    __this_13 = pSVar16;
label_044d2e21:
    do {
      __this_12 = unaff_R15;
      auVar13 = il2cpp_runtime_helper_022b2c90();
      if (auVar13._8_4_ != 1) {
label_044d2ebe:
        __this_05.fields._8_8_ = pIVar15;
        __this_05.fields._list = _Var14.genericMethod;
        __this_05.fields._current = (Il2CppObject *)__this_13;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb0);
        _Unwind_Resume(auVar13._0_8_);
      }
      plVar8 = (long *)__cxa_begin_catch(auVar13._0_8_);
      lVar4 = *plVar8;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar15;
      __this_04.fields._list = _Var14.genericMethod;
      __this_04.fields._current = (Il2CppObject *)__this_13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb0);
      if (lVar4 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar4);
        goto label_044d2ebe;
      }
label_044d2d4f:
      pSVar16 = __this_13;
      if (TypeInfo_ChatFilter[5].fields._version == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar16 = __this_13;
      }
      __this = *(System_Collections_Generic_List_char__o **)(*(long *)&TypeInfo_ChatFilter[4].fields._size + 8);
      unaff_R15 = __this_12;
      __this_13 = pSVar16;
    } while (__this == (System_Collections_Generic_List_char__o *)0x0);
    System_Collections_Generic_List_char___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_110,__this,MethodInfo_List_1_T_Enumerator_System_Char_GetEnumerator);
    pSStack_120 = pSStack_100;
    _Stack_130 = _Stack_110;
    pIStack_128 = pIStack_108;
    while( true ) {
      __this_02.fields._8_8_ = pIVar15;
      __this_02.fields._list = _Var14.genericMethod;
      __this_02.fields._current = (Il2CppObject *)pSVar16;
      bVar5 = System_Collections_Generic_List_Enumerator_char___MoveNext
                        (__this_02,(MethodInfo_31FCF60 *)&_Stack_130);
      if ((char)bVar5 == '\0') {
        __this_03.fields._8_8_ = pIVar15;
        __this_03.fields._list = _Var14.genericMethod;
        __this_03.fields._current = (Il2CppObject *)pSVar16;
        System_Collections_Generic_List_Enumerator_char___Dispose(__this_03,(MethodInfo_31FCF50 *)&_Stack_130)
        ;
        return;
      }
      if (__this_12 == (System_Collections_Generic_List_object__o *)0x0) break;
      __this_12 = (System_Collections_Generic_List_object__o *)
                  System_String__Replace
                            ((System_String_o *)__this_12,(uint16_t)pSStack_120,0x2a,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// Anticheat.ChatFilter$$FilterBadWords
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterBadWords (System_String_o* text, const MethodInfo* method);
// 0x44d2b10

System_String_o * Anticheat_ChatFilter__FilterBadWords(System_String_o *text,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_char__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  long *plVar3;
  System_String_o *unaff_R15;
  undefined1 auVar4 [12];
  _union_249395 _Var5;
  Il2CppType *pIVar6;
  System_Text_RegularExpressions_Regex_o *__this_06;
  System_Text_RegularExpressions_Regex_o *pSVar7;
  _union_249395 local_68;
  Il2CppType *pIStack_60;
  System_Text_RegularExpressions_Regex_o *local_58;
  _union_249395 local_48;
  Il2CppType *pIStack_40;
  System_Text_RegularExpressions_Regex_o *local_38;
  
  if (g_data_057aeb37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Regex_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Char_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Text_RegularExpressions_Regex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MatchEvaluator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FilterBadWords_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeb37 = '\x01';
  }
  _Var5.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  __this_06 = (System_Text_RegularExpressions_Regex_o *)0x0;
  local_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (System_Text_RegularExpressions_Regex_o *)0x0;
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ChatFilter + 0xb8) ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_044d2e21;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
             (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ChatFilter + 0xb8),MethodInfo_List_1_T_Enumerator_System_Text_RegularExpressions_Regex)
  ;
  _Var5 = local_48;
  pIVar6 = pIStack_40;
  __this_06 = local_38;
  while( true ) {
    __this_00.fields._8_8_ = pIVar6;
    __this_00.fields._list = _Var5.genericMethod;
    __this_00.fields._current = (Il2CppObject *)__this_06;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
    if ((char)bVar2 == '\0') {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = _Var5.genericMethod;
      __this_01.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      goto label_044d2d4f;
    }
    pSVar7 = __this_06;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MatchEvaluator);
      System_Text_RegularExpressions_MatchEvaluator___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Text_RegularExpressions_MatchEvaluator_o **)(lVar1 + 8) = evaluator;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,evaluator);
    }
    if (__this_06 == (System_Text_RegularExpressions_Regex_o *)0x0) break;
    text = System_Text_RegularExpressions_Regex__Replace_4906bf0(__this_06,text,evaluator,(MethodInfo *)0x0);
    __this_06 = pSVar7;
  }
  do {
    il2cpp_runtime_helper_022b2c90();
    unaff_R15 = text;
    __this_06 = pSVar7;
label_044d2e21:
    do {
      text = unaff_R15;
      auVar4 = il2cpp_runtime_helper_022b2c90();
      if (auVar4._8_4_ != 1) {
label_044d2ebe:
        __this_05.fields._8_8_ = pIVar6;
        __this_05.fields._list = _Var5.genericMethod;
        __this_05.fields._current = (Il2CppObject *)__this_06;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        _Unwind_Resume(auVar4._0_8_);
      }
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar6;
      __this_04.fields._list = _Var5.genericMethod;
      __this_04.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      if (lVar1 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar1);
        goto label_044d2ebe;
      }
label_044d2d4f:
      pSVar7 = __this_06;
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = __this_06;
      }
      __this = *(System_Collections_Generic_List_char__o **)(*(long *)(TypeInfo_ChatFilter + 0xb8) + 8);
      unaff_R15 = text;
      __this_06 = pSVar7;
    } while (__this == (System_Collections_Generic_List_char__o *)0x0);
    System_Collections_Generic_List_char___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this,MethodInfo_List_1_T_Enumerator_System_Char_GetEnumerator);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    while( true ) {
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = _Var5.genericMethod;
      __this_02.fields._current = (Il2CppObject *)pSVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_char___MoveNext
                        (__this_02,(MethodInfo_31FCF60 *)&local_68);
      if ((char)bVar2 == '\0') {
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._list = _Var5.genericMethod;
        __this_03.fields._current = (Il2CppObject *)pSVar7;
        System_Collections_Generic_List_Enumerator_char___Dispose(__this_03,(MethodInfo_31FCF50 *)&local_68);
        return text;
      }
      if (text == (System_String_o *)0x0) break;
      text = System_String__Replace(text,(uint16_t)local_58,0x2a,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// Anticheat.ChatFilter$$FilterSizeTag
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterSizeTag (System_String_o* text, const MethodInfo* method);
// 0x44d2f60

System_String_o * Anticheat_ChatFilter__FilterSizeTag(System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int32_t iVar5;
  uint uVar6;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  void *pvVar9;
  System_Collections_Generic_KeyValuePair_int__object__array *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  char cVar11;
  bool_conflict bVar12;
  int startIndex;
  System_String_o *pSVar13;
  System_Text_RegularExpressions_MatchCollection_o *__this_03;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_04;
  System_Collections_IEnumerator_o *pSVar14;
  Il2CppMethodPointer *ppIVar15;
  Il2CppObject *__this_05;
  Il2CppClass *pIVar16;
  System_Func_TSource__bool__o *predicate;
  System_String_o *str0;
  System_String_o *str2;
  long *plVar17;
  undefined8 *puVar18;
  System_String_o *__this_06;
  long lVar19;
  long lVar20;
  MethodInfo_3501450 *in_R8;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  System_Collections_Generic_KeyValuePair_int__object__o __this_07;
  System_Collections_Generic_KeyValuePair_int__object__o item;
  System_String_o *in_stack_ffffffffffffff80;
  undefined1 auVar23 [8];
  undefined1 local_58 [8];
  Il2CppType *pIStack_50;
  
  if (g_data_057aeb38 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_KeyValuePair_2_System_Int32_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_int_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_Int32_System_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_Int32_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_KeyValuePair_int_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_FilterSizeTag_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"<size=");
    il2cpp_runtime_helper_023445d0(&"<size=20>");
    il2cpp_runtime_helper_023445d0(&"(<size=(.*?>))");
    g_data_057aeb38 = '\x01';
  }
  auVar23 = (undefined1  [8])0x0;
  if (text == (System_String_o *)0x0) {
label_044d36f2:
    il2cpp_runtime_helper_022b2c90();
label_044d36f7:
    il2cpp_runtime_helper_022b2c90();
label_044d36fc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar13 = System_String__ToLower(text,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Regex + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = System_Text_RegularExpressions_Regex__Matches(pSVar13,"(<size=(.*?>))",(MethodInfo *)0x0);
    __this_04 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_List_KeyValuePair_int_string);
    System_Collections_Generic_List_KeyValuePair_int__object_____ctor(__this_04,MethodInfo_List_1_KeyValuePair_2_System_Int32_System_String);
    if (__this_03 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) goto label_044d36f2;
    pSVar14 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_03,(MethodInfo *)0x0);
    if (pSVar14 != (System_Collections_IEnumerator_o *)0x0) {
      in_stack_ffffffffffffff80 = (System_String_o *)0x0;
label_044d3147:
      pSVar7 = pSVar14->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            ppIVar15 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar19)].methodPtr;
            goto label_044d31a3;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar19);
      }
      ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IEnumerator,0);
label_044d31a3:
      cVar11 = (**ppIVar15)(pSVar14);
      if (cVar11 == '\0') goto label_044d349d;
      __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
      System_Object___ctor(__this_05,(MethodInfo *)0x0);
      pSVar7 = pSVar14->klass;
      uVar4._0_1_ = (pSVar7->_2).rank;
      uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            ppIVar15 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar19) + 1].methodPtr;
            goto label_044d3238;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar19);
      }
      ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IEnumerator,1);
label_044d3238:
      pIVar16 = (Il2CppClass *)(**ppIVar15)(pSVar14,(MethodInfo *)ppIVar15[1]);
      lVar19 = TypeInfo_Match;
      if (__this_05 == (Il2CppObject *)0x0) goto label_044d33b4;
      if (pIVar16 == (Il2CppClass *)0x0) {
        __this_05[1].klass = (Il2CppClass *)0x0;
label_044d32c0:
        il2cpp_runtime_helper_022b4080(__this_05 + 1,pIVar16);
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_int_string_bool);
        System_Func_KeyValuePair_int__object___bool____ctor();
        bVar12 = System_Linq_Enumerable__Any_KeyValuePair_int__object__
                           ((System_Collections_Generic_IEnumerable_TSource__o *)__this_04,predicate,
                            MethodInfo_Boolean_Any_KeyValuePair_2_System_Int32_System_String);
        if ((char)bVar12 == '\0') {
          pIVar16 = __this_05[1].klass;
          if (pIVar16 == (Il2CppClass *)0x0) goto label_044d33b9;
          iVar5 = ((System_Text_RegularExpressions_Capture_Fields *)&(pIVar16->_1).name)->
                  _Index_k__BackingField;
          pSVar13 = System_Text_RegularExpressions_Capture__get_Value
                              ((System_Text_RegularExpressions_Capture_o *)pIVar16,(MethodInfo *)0x0);
          local_58 = (undefined1  [8])0x0;
          pIStack_50 = (Il2CppType *)0x0;
          __this_07.fields.value._0_4_ = iVar5;
          __this_07.fields._0_8_ = local_58;
          __this_07.fields.value._4_4_ = 0;
          System_Collections_Generic_KeyValuePair_int__object____ctor
                    (__this_07,(int32_t)pSVar13,MethodInfo_KeyValuePair_2_System_Int32_System_String,in_R8);
          lVar19 = MethodInfo_Void_Add;
          if (__this_04 == (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0)
          goto label_044d33be;
          item.fields._0_8_ = (ulong)local_58 & 0xffffffff;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar10 = (__this_04->fields)._items;
          if (pSVar10 == (System_Collections_Generic_KeyValuePair_int__object__array *)0x0) goto label_044d33c3;
          uVar6 = (__this_04->fields)._size;
          if (uVar6 < (uint)pSVar10->max_length) {
            (__this_04->fields)._size = uVar6 + 1;
            pSVar10->m_Items[(int)uVar6].fields.key = local_58._0_4_;
            pSVar10->m_Items[(int)uVar6].fields.value = (Il2CppObject *)pIStack_50;
            il2cpp_runtime_helper_022b4080(&pSVar10->m_Items[(int)uVar6].fields.value,0);
          }
          else {
            item.fields.value = (Il2CppObject *)pIStack_50;
            System_Collections_Generic_List_KeyValuePair_int__object____AddWithResize
                      (__this_04,item,
                       *(MethodInfo_3522B00 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
        }
        goto label_044d3147;
      }
      pvVar9 = (pIVar16->_1).image;
      bVar2 = *(byte *)(TypeInfo_Match + 0x130);
      if ((bVar2 <= *(byte *)((long)pvVar9 + 0x130)) &&
         (*(long *)(*(long *)((long)pvVar9 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_Match)) {
        __this_05[1].klass = pIVar16;
        pvVar9 = (pIVar16->_1).image;
        if ((*(byte *)((long)pvVar9 + 0x130) < bVar2) ||
           (*(long *)(*(long *)((long)pvVar9 + 200) + -8 + (ulong)bVar2 * 8) != lVar19)) goto label_044d33ac;
        goto label_044d32c0;
      }
      pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0(pIVar16);
label_044d33ac:
      il2cpp_runtime_helper_022b2fd0(pIVar16);
label_044d33b4:
      il2cpp_runtime_helper_022b2c90();
label_044d33b9:
      il2cpp_runtime_helper_022b2c90();
label_044d33be:
      il2cpp_runtime_helper_022b2c90();
label_044d33c3:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar22 = il2cpp_runtime_helper_022b2c90();
    uVar21 = auVar22._0_8_;
    if (auVar22._8_4_ != 1) {
      in_stack_ffffffffffffff80 = (System_String_o *)0x0;
      plVar17 = (long *)il2cpp_runtime_helper_023051f0(pSVar14,TypeInfo_IDisposable);
      if (plVar17 != (long *)0x0) {
        lVar19 = *plVar17;
        if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
          lVar20 = 0;
          do {
            if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
              puVar18 = (undefined8 *)
                        (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
              goto label_044d36cd;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
        }
        puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_044d36cd:
        (*(code *)*puVar18)(plVar17,puVar18[1]);
      }
      if (in_stack_ffffffffffffff80 == (System_String_o *)0x0) goto label_044d36e0;
      il2cpp_runtime_helper_022fefe0();
label_044d36ed:
      il2cpp_runtime_helper_022b2c90();
      goto label_044d36f2;
    }
    puVar18 = (undefined8 *)__cxa_begin_catch(uVar21);
    in_stack_ffffffffffffff80 = (System_String_o *)*puVar18;
    __cxa_end_catch();
label_044d349d:
    plVar17 = (long *)il2cpp_runtime_helper_023051f0(pSVar14,TypeInfo_IDisposable);
    if (plVar17 != (long *)0x0) {
      lVar19 = *plVar17;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
            puVar18 = (undefined8 *)
                      (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
            goto label_044d350d;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
      }
      puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_044d350d:
      (*(code *)*puVar18)(plVar17,puVar18[1]);
    }
    if (in_stack_ffffffffffffff80 == (System_String_o *)0x0) {
      if (__this_04 == (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) goto label_044d36f2;
      System_Collections_Generic_List_KeyValuePair_int__object____GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,__this_04,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_Int32_System_S);
      auVar23 = local_58;
      while( true ) {
        do {
          __this.fields._8_8_ = in_stack_ffffffffffffff80;
          __this.fields._list = (System_Collections_Generic_List_T__o *)text;
          __this.fields._current = (Il2CppObject *)auVar23;
          bVar12 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____MoveNext
                             (__this,(MethodInfo_31F70F0 *)&stack0xffffffffffffff88);
          if ((char)bVar12 == '\0') {
            __this_00.fields._8_8_ = in_stack_ffffffffffffff80;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)text;
            __this_00.fields._current = (Il2CppObject *)auVar23;
            System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                      (__this_00,(MethodInfo_31F70E0 *)&stack0xffffffffffffff88);
            return text;
          }
          startIndex = il2cpp_runtime_helper_043e7100((MethodInfo_31F70F0 *)&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_Int32_System_String_get_Current);
          if (__this_06 == (System_String_o *)0x0) goto label_044d36ed;
          bVar12 = System_String__StartsWith(__this_06,"<size=",(MethodInfo *)0x0);
        } while (((char)bVar12 == '\0') || (iVar5 = (__this_06->fields)._stringLength, iVar5 < 10));
        if (text == (System_String_o *)0x0) break;
        pSVar13 = System_String__Remove(text,startIndex,iVar5,(MethodInfo *)0x0);
        if (pSVar13 == (System_String_o *)0x0) goto label_044d36fc;
        str0 = System_String__Substring_3af8da0(pSVar13,0,startIndex,(MethodInfo *)0x0);
        str2 = System_String__Substring_3af8da0
                         (pSVar13,startIndex,(pSVar13->fields)._stringLength - startIndex,(MethodInfo *)0x0);
        text = System_String__Concat_3af7150(str0,"<size=20>",str2,(MethodInfo *)0x0);
        in_stack_ffffffffffffff80 = pSVar13;
      }
      goto label_044d36f7;
    }
  }
  auVar22 = il2cpp_runtime_helper_022fefe0();
  uVar21 = auVar22._0_8_;
  pSVar13 = (System_String_o *)0x0;
  if (auVar22._8_4_ == 1) {
    plVar17 = (long *)__cxa_begin_catch(uVar21);
    lVar19 = *plVar17;
    __cxa_end_catch();
    __this_01.fields._8_8_ = in_stack_ffffffffffffff80;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
    __this_01.fields._current = (Il2CppObject *)auVar23;
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
              (__this_01,(MethodInfo_31F70E0 *)&stack0xffffffffffffff88);
    if (lVar19 == 0) {
      return pSVar13;
    }
    il2cpp_runtime_helper_022fefe0(lVar19);
  }
  __this_02.fields._8_8_ = in_stack_ffffffffffffff80;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
  __this_02.fields._current = (Il2CppObject *)auVar23;
  System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
            (__this_02,(MethodInfo_31F70E0 *)&stack0xffffffffffffff88);
label_044d36e0:
  _Unwind_Resume(uVar21);
}


// Anticheat.ChatFilter$$.cctor
// il2cpp: void Anticheat_ChatFilter___cctor (const MethodInfo* method);
// 0x44d3800

void Anticheat_ChatFilter___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_char__o *__this_00;
  
  if (g_data_057aeb39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Text_RegularExpressions_Regex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Regex);
    g_data_057aeb39 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Regex);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_Text_RegularExpressions_Regex);
  **(undefined8 **)(TypeInfo_ChatFilter + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ChatFilter + 0xb8),__this);
  __this_00 = (System_Collections_Generic_List_char__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_char);
  System_Collections_Generic_List_char____ctor(__this_00,MethodInfo_List_1_System_Char);
  lVar1 = *(long *)(TypeInfo_ChatFilter + 0xb8);
  *(System_Collections_Generic_List_char__o **)(lVar1 + 8) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,__this_00);
  return;
}


