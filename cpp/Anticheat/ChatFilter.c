// Type: Anticheat.ChatFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Anticheat/ChatFilter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Anticheat/ChatFilter.cs  [CHANGED since prior version]
// --------------------------------

// Anticheat.ChatFilter.<>c$$.cctor
// il2cpp: void Anticheat_ChatFilter___c___cctor (const MethodInfo* method);
// 0x41b5f60

void Anticheat_ChatFilter_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704d4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704d4b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Anticheat.ChatFilter.<>c$$.ctor
// il2cpp: void Anticheat_ChatFilter___c___ctor (Anticheat_ChatFilter___c_o* __this, const MethodInfo* method);
// 0x41b5fd0

void Anticheat_ChatFilter_<>c___ctor(Anticheat_ChatFilter___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c$$<FilterBadWords>b__3_0
// il2cpp: System_String_o* Anticheat_ChatFilter___c___FilterBadWords_b__3_0 (Anticheat_ChatFilter___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x41b5fe0

System_String_o *
Anticheat_ChatFilter_<>c__<FilterBadWords>b__3_0
          (Anticheat_ChatFilter___c_o *__this,System_Text_RegularExpressions_Match_o *match,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    pSVar1 = System_String__CreateString
                       ((System_String_o *)0x0,0x2a,(match->fields)._Length_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ChatFilter.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Anticheat_ChatFilter___c__DisplayClass4_0___ctor (Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x41b5e70

void Anticheat_ChatFilter_<>c__DisplayClass4_0___ctor
               (Anticheat_ChatFilter___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c__DisplayClass4_0$$<FilterSizeTag>b__0
// il2cpp: bool Anticheat_ChatFilter___c__DisplayClass4_0___FilterSizeTag_b__0 (Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, System_Collections_Generic_KeyValuePair_int__string__o p, const MethodInfo* method);
// 0x41b6000

bool_conflict
Anticheat_ChatFilter_<>c__DisplayClass4_0__<FilterSizeTag>b__0
          (Anticheat_ChatFilter___c__DisplayClass4_0_o *__this,
          System_Collections_Generic_KeyValuePair_int__string__o p,MethodInfo *method)

{
  System_Text_RegularExpressions_Match_o *pSVar1;
  
  if (DAT_05704d4c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Key,p.fields._0_8_,p.fields.value);
    DAT_05704d4c = '\x01';
  }
  pSVar1 = (__this->fields).match;
  if (pSVar1 != (System_Text_RegularExpressions_Match_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pSVar1 >> 8),
                    (pSVar1->fields)._Index_k__BackingField == p.fields.key);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ChatFilter$$Init
// il2cpp: void Anticheat_ChatFilter__Init (const MethodInfo* method);
// 0x41b4cd0

void Anticheat_ChatFilter__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint16_t item;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_char__o *__this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Text_RegularExpressions_Regex_o *__this_07;
  System_Char_array *pSVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  _union_13 _Var20;
  _union_14 _Var21;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704d47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"banned_regex");
    il2cpp_init_method_metadata(&"ChatFilterInfo");
    il2cpp_init_method_metadata(&"banned_char");
    DAT_05704d47 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_01;
  }
  pSVar7 = ApplicationManagers_ResourceManager__TryLoadText(pSVar7,"ChatFilterInfo",in_RDX);
  pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
  if (((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
      (plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar8,"banned_regex",(pSVar8->klass->vtable)._7_get_Item.method),
      plVar9 != (long *)0x0)) &&
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410)),
     plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x338))(&local_78,plVar9,*(undefined8 *)(*plVar9 + 0x340));
    __this_01.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_01.fields._0_8_ = local_78;
    __this_01.fields.m_Object.fields._8_8_ = local_68;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
    __this_01.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
    __this_01.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_01.fields.m_Array.fields._current = local_38.genericMethod;
    pIVar13 = local_78;
    pIVar14 = pIStack_70;
    pIVar15 = local_68;
    pcVar16 = pcStack_60;
    pIVar17 = local_58;
    pIVar18 = pIStack_50;
    ppIVar19 = local_48;
    _Var20 = _Stack_40;
    _Var21 = local_38;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
    cVar5 = (char)bVar6;
    while (cVar5 != '\0') {
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
      __this_03.fields._0_8_ = pIVar13;
      __this_03.fields.m_Object.fields._8_8_ = pIVar15;
      __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
      __this_03.fields.m_Object.fields._32_8_ = pIVar18;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19;
      __this_03.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
      __this_03.fields.m_Array.fields._current = _Var21.genericMethod;
      SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
      if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041b517e;
      pSVar7 = (System_String_o *)
               (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
      __this_07 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
      System_Text_RegularExpressions_Regex___ctor(__this_07,pSVar7,8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar4 = MethodInfo_Void_Add;
      __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ChatFilter + 0xb8);
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_041b517e;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_041b517e;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_07;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_07);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,(Il2CppObject *)__this_07,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
      __this_02.fields._0_8_ = pIVar13;
      __this_02.fields.m_Object.fields._8_8_ = pIVar15;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
      __this_02.fields.m_Object.fields._32_8_ = pIVar18;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19;
      __this_02.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
      __this_02.fields.m_Array.fields._current = _Var21.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
      cVar5 = (char)bVar6;
    }
    plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"banned_char",(pSVar8->klass->vtable)._7_get_Item.method);
    if ((plVar9 != (long *)0x0) &&
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410)),
       plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x338))(&local_78,plVar9,*(undefined8 *)(*plVar9 + 0x340));
      __this_04.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this_04.fields._0_8_ = local_78;
      __this_04.fields.m_Object.fields._8_8_ = local_68;
      __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
      __this_04.fields.m_Object.fields._32_8_ = pIStack_50;
      __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
      __this_04.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this_04.fields.m_Array.fields._current = local_38.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
      cVar5 = (char)bVar6;
      pIVar13 = local_78;
      pIVar14 = pIStack_70;
      pIVar15 = local_68;
      pcVar16 = pcStack_60;
      pIVar17 = local_58;
      pIVar18 = pIStack_50;
      ppIVar19 = local_48;
      _Var20 = _Stack_40;
      _Var21 = local_38;
      while( true ) {
        if (cVar5 == '\0') {
          return;
        }
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
        __this_06.fields._0_8_ = pIVar13;
        __this_06.fields.m_Object.fields._8_8_ = pIVar15;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
        __this_06.fields.m_Object.fields._32_8_ = pIVar18;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19;
        __this_06.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
        __this_06.fields.m_Array.fields._current = _Var21.genericMethod;
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        __this_00 = *(System_Collections_Generic_List_char__o **)
                     (*(long *)(TypeInfo_ChatFilter + 0xb8) + 8);
        pSVar7 = (System_String_o *)(*(pSVar8->klass->vtable)._9_get_Value.methodPtr)(pSVar8);
        if ((pSVar7 == (System_String_o *)0x0) ||
           (pSVar11 = System_String__ToCharArray(pSVar7,(MethodInfo *)0x0), lVar4 = MethodInfo_Void_Add,
           pSVar11 == (System_Char_array *)0x0)) break;
        if ((int)pSVar11->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (__this_00 == (System_Collections_Generic_List_char__o *)0x0) break;
        item = pSVar11->m_Items[0];
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar11 = (__this_00->fields)._items;
        if (pSVar11 == (System_Char_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = item;
        }
        else {
          System_Collections_Generic_List<char>__AddWithResize
                    (__this_00,item,
                     *(MethodInfo_34FBF70 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
        __this_05.fields._0_8_ = pIVar13;
        __this_05.fields.m_Object.fields._8_8_ = pIVar15;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
        __this_05.fields.m_Object.fields._32_8_ = pIVar18;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar19;
        __this_05.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var21.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
        cVar5 = (char)bVar6;
      }
    }
  }
LAB_041b517e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ChatFilter$$FilterBadWords
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterBadWords (System_String_o* text, const MethodInfo* method);
// 0x41b5190

System_String_o * Anticheat_ChatFilter__FilterBadWords(System_String_o *text,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_char__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar2;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  _union_247038 _Var3;
  Il2CppType *pIVar4;
  System_Text_RegularExpressions_Regex_o *__this_04;
  System_Text_RegularExpressions_Regex_o *pSVar5;
  _union_247038 local_68;
  Il2CppType *pIStack_60;
  System_Text_RegularExpressions_Regex_o *local_58;
  _union_247038 local_48;
  Il2CppType *pIStack_40;
  System_Text_RegularExpressions_Regex_o *local_38;
  
  if (DAT_05704d48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Char_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Regex_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Char__GetEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Text_RegularExpressi);
    il2cpp_init_method_metadata(&TypeInfo_MatchEvaluator);
    il2cpp_init_method_metadata(&MethodInfo_String__FilterBadWords_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704d48 = '\x01';
  }
  local_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (System_Text_RegularExpressions_Regex_o *)0x0;
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ChatFilter + 0xb8) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ChatFilter + 0xb8),
               MethodInfo_List_1_T__Enumerator_System_Text_RegularExpressi);
    _Var3 = local_48;
    pIVar4 = pIStack_40;
    __this_04 = local_38;
    while (__this_00.fields._8_8_ = pIVar4, __this_00.fields._list = _Var3.genericMethod,
          __this_00.fields._current = (Il2CppObject *)__this_04,
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
          (char)bVar2 != '\0') {
      pSVar5 = __this_04;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
        evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)
                     (*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)
                     (*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)
                    il2cpp_runtime_glue(TypeInfo_MatchEvaluator);
        System_Text_RegularExpressions_MatchEvaluator___ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Text_RegularExpressions_MatchEvaluator_o **)(lVar1 + 8) = evaluator;
        il2cpp_runtime_glue(lVar1 + 8,evaluator);
      }
      if (__this_04 == (System_Text_RegularExpressions_Regex_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      text = System_Text_RegularExpressions_Regex__Replace
                       (__this_04,text,evaluator,(MethodInfo *)0x0);
      __this_04 = pSVar5;
    }
    __this_01.fields._8_8_ = pIVar4;
    __this_01.fields._list = _Var3.genericMethod;
    __this_01.fields._current = (Il2CppObject *)__this_04;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_List_char__o **)(*(long *)(TypeInfo_ChatFilter + 0xb8) + 8);
    if (__this != (System_Collections_Generic_List_char__o *)0x0) {
      System_Collections_Generic_List<char>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this,MethodInfo_List_1_T__Enumerator_System_Char__GetEnumerator);
      local_58 = local_38;
      local_68 = local_48;
      pIStack_60 = pIStack_40;
      while( true ) {
        __this_02.fields._8_8_ = pIVar4;
        __this_02.fields._list = _Var3.genericMethod;
        __this_02.fields._current = (Il2CppObject *)__this_04;
        bVar2 = System_Collections_Generic_List_Enumerator<char>__MoveNext
                          (__this_02,(MethodInfo_317C480 *)&local_68);
        if ((char)bVar2 == '\0') {
          __this_03.fields._8_8_ = pIVar4;
          __this_03.fields._list = _Var3.genericMethod;
          __this_03.fields._current = (Il2CppObject *)__this_04;
          System_Collections_Generic_List_Enumerator<char>__Dispose
                    (__this_03,(MethodInfo_317C470 *)&local_68);
          return text;
        }
        if (text == (System_String_o *)0x0) break;
        text = System_String__Replace(text,(uint16_t)local_58,0x2a,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ChatFilter$$FilterSizeTag
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterSizeTag (System_String_o* text, const MethodInfo* method);
// 0x41b55e0

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
  char cVar11;
  bool_conflict bVar12;
  int startIndex;
  System_String_o *pSVar13;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_02;
  System_Collections_IEnumerator_o *pSVar14;
  VirtualInvokeData *pVVar15;
  Il2CppObject *__this_03;
  Il2CppClass *pIVar16;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar17;
  long *plVar18;
  undefined8 *puVar19;
  System_String_o *str2;
  System_String_o *__this_04;
  long lVar20;
  long lVar21;
  MethodInfo_347AEF0 *in_R8;
  System_Collections_Generic_KeyValuePair_int__object__o __this_05;
  System_Collections_Generic_KeyValuePair_int__object__o item;
  undefined1 auVar22 [8];
  undefined1 local_58 [8];
  Il2CppType *pIStack_50;
  
  if (DAT_05704d49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_KeyValuePair_2_System_Int32_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_System_String__get_C);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_int__string___bool);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_Int32_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_KeyValuePair_int__string);
    il2cpp_init_method_metadata(&TypeInfo_Match);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__FilterSizeTag_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    il2cpp_init_method_metadata(&"<size=");
    il2cpp_init_method_metadata(&"<size=20>");
    il2cpp_init_method_metadata(&"(<size=(.*?>))");
    DAT_05704d49 = '\x01';
  }
  if (text != (System_String_o *)0x0) {
    pSVar13 = System_String__ToLower(text,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Regex + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = System_Text_RegularExpressions_Regex__Matches
                          (pSVar13,"(<size=(.*?>))",(MethodInfo *)0x0);
    __this_02 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
                il2cpp_runtime_glue(TypeInfo_List_KeyValuePair_int__string);
    System_Collections_Generic_List<KeyValuePair<int__object>>___ctor(__this_02,MethodInfo_List_1_KeyValuePair_2_System_Int32_System_String);
    if (__this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
      pSVar14 = System_Text_RegularExpressions_MatchCollection__GetEnumerator
                          (__this_01,(MethodInfo *)0x0);
      if (pSVar14 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = (System_String_o *)0x0;
      do {
        pSVar7 = pSVar14->klass;
        uVar3._0_1_ = (pSVar7->_2).rank;
        uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator) {
              pVVar15 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
              goto LAB_041b5823;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar20);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,0);
LAB_041b5823:
        cVar11 = (*pVVar15->methodPtr)(pSVar14);
        if (cVar11 == '\0') {
          plVar18 = (long *)il2cpp_runtime_glue(pSVar14,TypeInfo_IDisposable);
          if (plVar18 == (long *)0x0) goto LAB_041b5b96;
          lVar20 = *plVar18;
          if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_041b5b6f;
          lVar21 = 0;
          goto LAB_041b5b60;
        }
        __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
        System_Object___ctor(__this_03,(MethodInfo *)0x0);
        pSVar7 = pSVar14->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator) {
              pVVar15 = pSVar7->vtable + (*(int *)((long)&pIVar8->offset + lVar20) + 1);
              goto LAB_041b58b8;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar20);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,1);
LAB_041b58b8:
        pIVar16 = (Il2CppClass *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method);
        lVar20 = TypeInfo_Match;
        if (__this_03 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pIVar16 == (Il2CppClass *)0x0) {
          __this_03[1].klass = (Il2CppClass *)0x0;
        }
        else {
          pvVar9 = (pIVar16->_1).image;
          bVar2 = *(byte *)(TypeInfo_Match + 0x130);
          if ((*(byte *)((long)pvVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)((long)pvVar9 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_Match)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar16);
          }
          __this_03[1].klass = pIVar16;
          pvVar9 = (pIVar16->_1).image;
          if ((*(byte *)((long)pvVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)((long)pvVar9 + 200) + -8 + (ulong)bVar2 * 8) != lVar20)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar16);
          }
        }
        il2cpp_runtime_glue(__this_03 + 1,pIVar16);
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_int__string___bool);
        System_Func<KeyValuePair<int__object>__bool>___ctor();
        bVar12 = System_Linq_Enumerable__Any<KeyValuePair<int__object>>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)__this_02,predicate
                            ,MethodInfo_Boolean_Any_KeyValuePair_2_System_Int32_System_S);
        if ((char)bVar12 == '\0') {
          pIVar16 = __this_03[1].klass;
          if (pIVar16 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar5 = ((System_Text_RegularExpressions_Capture_Fields *)&(pIVar16->_1).name)->
                  _Index_k__BackingField;
          pSVar17 = System_Text_RegularExpressions_Capture__get_Value
                              ((System_Text_RegularExpressions_Capture_o *)pIVar16,(MethodInfo *)0x0
                              );
          local_58 = (undefined1  [8])0x0;
          pIStack_50 = (Il2CppType *)0x0;
          __this_05.fields.value._0_4_ = iVar5;
          __this_05.fields._0_8_ = local_58;
          __this_05.fields.value._4_4_ = 0;
          System_Collections_Generic_KeyValuePair<int__object>___ctor
                    (__this_05,(int32_t)pSVar17,MethodInfo_KeyValuePair_2_System_Int32_System_String,in_R8);
          lVar20 = MethodInfo_Void_Add;
          if (__this_02 == (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item.fields._0_8_ = (ulong)local_58 & 0xffffffff;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar10 = (__this_02->fields)._items;
          if (pSVar10 == (System_Collections_Generic_KeyValuePair_int__object__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar6 = (__this_02->fields)._size;
          if (uVar6 < (uint)pSVar10->max_length) {
            (__this_02->fields)._size = uVar6 + 1;
            pSVar10->m_Items[(int)uVar6].fields.key = local_58._0_4_;
            pSVar10->m_Items[(int)uVar6].fields.value = (Il2CppObject *)pIStack_50;
            il2cpp_runtime_glue(&pSVar10->m_Items[(int)uVar6].fields.value,0);
          }
          else {
            item.fields.value = (Il2CppObject *)pIStack_50;
            System_Collections_Generic_List<KeyValuePair<int__object>>__AddWithResize
                      (__this_02,item,
                       *(MethodInfo_349C530 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_041b5d72;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
LAB_041b5b60:
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto LAB_041b5b8d;
    }
  }
LAB_041b5b6f:
  puVar19 = (undefined8 *)il2cpp_runtime_glue(plVar18,TypeInfo_IDisposable,0);
LAB_041b5b8d:
  (*(code *)*puVar19)(plVar18,puVar19[1]);
LAB_041b5b96:
  if (pSVar13 != (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_022c0ed0();
  }
  if (__this_02 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
    System_Collections_Generic_List<KeyValuePair<int__object>>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,__this_02,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Int32);
    auVar22 = local_58;
    while( true ) {
      do {
        __this.fields._8_8_ = pSVar13;
        __this.fields._list = (System_Collections_Generic_List_T__o *)text;
        __this.fields._current = (Il2CppObject *)auVar22;
        bVar12 = System_Collections_Generic_List_Enumerator<KeyValuePair<int__object>>__MoveNext
                           (__this,(MethodInfo_3176610 *)&stack0xffffffffffffff88);
        if ((char)bVar12 == '\0') {
          __this_00.fields._8_8_ = pSVar13;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)text;
          __this_00.fields._current = (Il2CppObject *)auVar22;
          System_Collections_Generic_List_Enumerator<KeyValuePair<int__object>>__Dispose
                    (__this_00,(MethodInfo_3176600 *)&stack0xffffffffffffff88);
          return text;
        }
        startIndex = il2cpp_glue_040bdcb0((MethodInfo_3176610 *)&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_Int32_System_String__get_C);
        if (__this_04 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar12 = System_String__StartsWith(__this_04,"<size=",(MethodInfo *)0x0);
      } while (((char)bVar12 == '\0') || (iVar5 = (__this_04->fields)._stringLength, iVar5 < 10));
      if (text == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = System_String__Remove(text,startIndex,iVar5,(MethodInfo *)0x0);
      if (pSVar13 == (System_String_o *)0x0) break;
      pSVar17 = System_String__Substring(pSVar13,0,startIndex,(MethodInfo *)0x0);
      str2 = System_String__Substring
                       (pSVar13,startIndex,(pSVar13->fields)._stringLength - startIndex,
                        (MethodInfo *)0x0);
      text = System_String__Concat(pSVar17,"<size=20>",str2,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041b5d72:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.ChatFilter$$.cctor
// il2cpp: void Anticheat_ChatFilter___cctor (const MethodInfo* method);
// 0x41b5e80

void Anticheat_ChatFilter___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_char__o *__this_00;
  
  if (DAT_05704d4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Text_RegularExpressions_Regex);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Char);
    il2cpp_init_method_metadata(&TypeInfo_List_char);
    il2cpp_init_method_metadata(&TypeInfo_List_Regex);
    DAT_05704d4a = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Regex);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_Text_RegularExpressions_Regex);
  **(undefined8 **)(TypeInfo_ChatFilter + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ChatFilter + 0xb8),__this);
  __this_00 = (System_Collections_Generic_List_char__o *)il2cpp_runtime_glue(TypeInfo_List_char);
  System_Collections_Generic_List<char>___ctor(__this_00,MethodInfo_List_1_System_Char);
  lVar1 = *(long *)(TypeInfo_ChatFilter + 0xb8);
  *(System_Collections_Generic_List_char__o **)(lVar1 + 8) = __this_00;
  il2cpp_runtime_glue(lVar1 + 8,__this_00);
  return;
}


