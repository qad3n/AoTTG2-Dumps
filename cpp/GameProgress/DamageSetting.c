// Type: GameProgress.DamageSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/DamageSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/DamageSetting.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.DamageSetting.<>c$$.cctor
// il2cpp: void GameProgress_DamageSetting___c___cctor (const MethodInfo* method);
// 0x4209490

void GameProgress_DamageSetting_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570502a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570502a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameProgress.DamageSetting.<>c$$.ctor
// il2cpp: void GameProgress_DamageSetting___c___ctor (GameProgress_DamageSetting___c_o* __this, const MethodInfo* method);
// 0x4209500

void GameProgress_DamageSetting_<>c___ctor
               (GameProgress_DamageSetting___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_0
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_0 (GameProgress_DamageSetting___c_o* __this, int32_t w, const MethodInfo* method);
// 0x4209510

System_String_o *
GameProgress_DamageSetting_<>c__<_cctor>b__5_0
          (GameProgress_DamageSetting___c_o *__this,int32_t w,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (DAT_0570502b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
    DAT_0570502b = '\x01';
  }
  local_20.klass = TypeInfo_KillWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = w;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_1
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_1 (GameProgress_DamageSetting___c_o* __this, System_String_o* k, const MethodInfo* method);
// 0x4209570

System_String_o *
GameProgress_DamageSetting_<>c__<_cctor>b__5_1
          (GameProgress_DamageSetting___c_o *__this,System_String_o *k,MethodInfo *method)

{
  return k;
}


// GameProgress.DamageSetting.<>c$$<GetStatLabels>b__17_0
// il2cpp: bool GameProgress_DamageSetting___c___GetStatLabels_b__17_0 (GameProgress_DamageSetting___c_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp, const MethodInfo* method);
// 0x4209580

bool_conflict
GameProgress_DamageSetting_<>c__<GetStatLabels>b__17_0
          (GameProgress_DamageSetting___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570502c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&"Overall");
    DAT_0570502c = '\x01';
  }
  bVar1 = System_String__op_Inequality(kvp.fields.key,"Overall",(MethodInfo *)0x0);
  return bVar1;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$.ctor
// il2cpp: void GameProgress_DamageSetting___c__DisplayClass5_0___ctor (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x4208740

void GameProgress_DamageSetting_<>c__DisplayClass5_0___ctor
               (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__2
// il2cpp: int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__2 (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, System_String_o* v, const MethodInfo* method);
// 0x42095d0

int32_t GameProgress_DamageSetting_<>c__DisplayClass5_0__<_cctor>b__2
                  (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,System_String_o *v,
                  MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).i;
  (__this->fields).i = iVar1 + 1;
  return iVar1;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__3
// il2cpp: int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__3 (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o lhs, System_Collections_Generic_KeyValuePair_string__JSONNode__o rhs, const MethodInfo* method);
// 0x42095e0

int32_t GameProgress_DamageSetting_<>c__DisplayClass5_0__<_cctor>b__3
                  (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o lhs,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o rhs,MethodInfo *method
                  )

{
  System_Collections_Generic_Dictionary_object__int__o *pSVar1;
  byte bVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  byte bVar5;
  int32_t iVar6;
  System_String_o *strB;
  System_String_o *strA;
  int32_t local_30;
  int32_t local_2c;
  
  strB = rhs.fields.key;
  strA = lhs.fields.key;
  if (DAT_0570502d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue,strA,lhs.fields.value,strB,rhs.fields.value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    DAT_0570502d = '\x01';
  }
  local_2c = 0;
  local_30 = 0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).orderByString;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__int>__TryGetValue
                      (pSVar1,(Il2CppObject *)strB,&local_2c,MethodInfo_Boolean_TryGetValue);
    pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).orderByString;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary<object__int>__TryGetValue
                        (pSVar1,(Il2CppObject *)strA,&local_30,MethodInfo_Boolean_TryGetValue);
      bVar2 = (byte)bVar4;
      bVar5 = (byte)bVar3;
      if ((bVar5 & bVar2) == 1) {
        iVar6 = local_2c - local_30;
      }
      else {
        iVar6 = 1;
        if (((byte)(bVar5 ^ 1 | bVar2) == 1) && (iVar6 = -1, (byte)(bVar5 | bVar2 ^ 1) == 1)) {
          iVar6 = System_String__Compare(strA,strB,(MethodInfo *)0x0);
        }
      }
      return iVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$.ctor
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17___ctor (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4209460

void GameProgress_DamageSetting_<GetStatLabels>d__17___ctor
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.IDisposable.Dispose
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17__System_IDisposable_Dispose (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x42096d0

void GameProgress_DamageSetting_<GetStatLabels>d__17__System_IDisposable_Dispose
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 < -2) {
    if (iVar1 == -4) goto LAB_04209710;
    if (iVar1 != -3) {
      return;
    }
  }
  else {
    if (iVar1 == 4) {
LAB_04209710:
      if (DAT_05705030 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_05705030 = '\x01';
      }
      goto LAB_0420972c;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  if (DAT_0570502f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570502f = '\x01';
  }
LAB_0420972c:
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_3176CE0 *)&(__this->fields).__7__wrap2);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$MoveNext
// il2cpp: bool GameProgress_DamageSetting__GetStatLabels_d__17__MoveNext (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x4209750

bool_conflict
GameProgress_DamageSetting_<GetStatLabels>d__17__MoveNext
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameProgress_DamageSetting_o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar3;
  bool_conflict bVar4;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *pSVar5;
  long *plVar6;
  uint64_t uVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *pGVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_Comparison_T__o *comparison;
  MethodInfo *method_00;
  MethodInfo_2B4A590 *in_R8;
  System_ValueTuple_ulong__ulong__o SVar13;
  undefined1 auVar14 [16];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar15;
  System_ValueTuple_object__object__o __this_09;
  System_ValueTuple_object__object__o __this_10;
  System_ValueTuple_object__object__o __this_11;
  System_ValueTuple_object__object__o __this_12;
  System_ValueTuple_object__object__o __this_13;
  System_ValueTuple_object__object__o __this_14;
  undefined8 in_stack_ffffffffffffff08;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *pGVar16;
  int32_t in_stack_ffffffffffffff18;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff1c;
  undefined4 uVar18;
  int32_t in_stack_ffffffffffffff20;
  undefined4 uVar19;
  int32_t in_stack_ffffffffffffff24;
  undefined4 uVar20;
  int32_t in_stack_ffffffffffffff28;
  int32_t in_stack_ffffffffffffff2c;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  int32_t in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  System_Collections_Generic_List_Enumerator_T__o SStack_78;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int32_t iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  
  pGVar16 = __this;
  if (DAT_0570502e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DamageSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_String_SimpleJSONFi);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_Simpl);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__JSONNode___bool);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetStatLabels_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_String_String);
    il2cpp_init_method_metadata(&"Total ");
    il2cpp_init_method_metadata(&"Total Overall");
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Highest ");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"Highest Overall");
    il2cpp_init_method_metadata(&"Highest");
    il2cpp_init_method_metadata(&" (");
    DAT_0570502e = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 5) {
    __this_00 = (__this->fields).__4__this;
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      if (__this_00 == (GameProgress_DamageSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar12 = (__this_00->fields).root;
      if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      source = SimpleJSONFixed_JSONNode__get_Linq(pSVar12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      pGVar11 = pGVar16;
      if (predicate == (System_Func_TSource__bool__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__JSONNode___bool);
        System_Func<KeyValuePair<object__object>__bool>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__bool__o **)(lVar2 + 8) = predicate;
        il2cpp_runtime_glue(lVar2 + 8,predicate);
      }
      source_00 = System_Linq_Enumerable__Where<KeyValuePair<object__object>>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_Simpl);
      pSVar5 = (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)
               System_Linq_Enumerable__ToList<KeyValuePair<object__object>>(source_00,MethodInfo_List_1_KeyValuePair_2_System_String_SimpleJSONFi);
      if (pGVar16 == (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (pGVar16->fields)._rootPairs_5__2 = pSVar5;
      il2cpp_runtime_glue(&(pGVar16->fields)._rootPairs_5__2,pSVar5);
      pSVar5 = (pGVar11->fields)._rootPairs_5__2;
      if (*(int *)(TypeInfo_DamageSetting + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pSVar5 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      comparison = (System_Comparison_T__o *)**(undefined8 **)(TypeInfo_DamageSetting + 0xb8);
      System_Collections_Generic_List<KeyValuePair<object__object>>__Sort
                ((System_Collections_Generic_List_T__o *)pSVar5,comparison,MethodInfo_Void_Sort);
      SVar13 = GameProgress_DamageSetting__get_Overall(__this_00,(MethodInfo *)comparison);
      pSVar9 = Utility_Format__Suffix(SVar13.fields.Item1,(MethodInfo *)0x0);
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      __this_09.fields.Item2 = "Highest Overall";
      __this_09.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
      System_ValueTuple<object__object>___ctor(__this_09,(Il2CppObject *)pSVar9,MethodInfo_ValueTuple_2_String_String,in_R8);
      *(undefined4 *)&(pGVar11->fields).__2__current.fields.Item1 = uVar17;
      *(undefined4 *)((long)&(pGVar11->fields).__2__current.fields.Item1 + 4) = uVar18;
      *(undefined4 *)&(pGVar11->fields).__2__current.fields.Item2 = uVar19;
      *(undefined4 *)((long)&(pGVar11->fields).__2__current.fields.Item2 + 4) = uVar20;
      il2cpp_runtime_glue(&(pGVar11->fields).__2__current,0);
      (pGVar11->fields).__1__state = 1;
      break;
    case 1:
      (__this->fields).__1__state = -1;
      pSVar5 = (__this->fields)._rootPairs_5__2;
      if (pSVar5 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
                (&SStack_78,(System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
      *(int32_t *)&(pGVar16->fields).__7__wrap2.fields._current.fields.key =
           (int32_t)SStack_78.fields._current;
      *(int32_t *)((long)&(pGVar16->fields).__7__wrap2.fields._current.fields.key + 4) =
           SStack_78.fields._current._4_4_;
      *(undefined4 *)&(pGVar16->fields).__7__wrap2.fields._current.fields.value = uStack_60;
      *(undefined4 *)((long)&(pGVar16->fields).__7__wrap2.fields._current.fields.value + 4) =
           uStack_5c;
      *(int32_t *)&(pGVar16->fields).__7__wrap2.fields._list = (int32_t)SStack_78.fields._list;
      *(undefined4 *)((long)&(pGVar16->fields).__7__wrap2.fields._list + 4) =
           SStack_78.fields._list._4_4_;
      (pGVar16->fields).__7__wrap2.fields._index = SStack_78.fields._index;
      (pGVar16->fields).__7__wrap2.fields._version = SStack_78.fields._version;
      in_stack_ffffffffffffff18 = (int32_t)SStack_78.fields._list;
      in_stack_ffffffffffffff1c = SStack_78.fields._list._4_4_;
      il2cpp_runtime_glue(&(pGVar16->fields).__7__wrap2,0);
      (pGVar16->fields).__1__state = -3;
      __this = pGVar16;
      while( true ) {
        __this_01.fields._8_8_ = __this;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff18;
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff1c;
        bVar4 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                          (__this_01,(MethodInfo_3176CF0 *)&(__this->fields).__7__wrap2);
        if ((char)bVar4 == '\0') break;
        auVar14 = il2cpp_glue_03c129b0(&(__this->fields).__7__wrap2,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
        plVar6 = auVar14._8_8_;
        (__this->fields)._weapon_5__4 = auVar14._0_8_;
        il2cpp_runtime_glue(&(__this->fields)._weapon_5__4,auVar14._0_8_);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (**(code **)(*plVar6 + 0x338))(&SStack_78,plVar6,*(undefined8 *)(*plVar6 + 0x340));
        (__this->fields).__7__wrap4.fields.m_Array.fields._current = pSStack_38;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Array.fields._list = uStack_48;
        *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Array.fields._list + 4) =
             uStack_44;
        (__this->fields).__7__wrap4.fields.m_Array.fields._index = iStack_40;
        (__this->fields).__7__wrap4.fields.m_Array.fields._version = iStack_3c;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value =
             uStack_58;
        *(undefined4 *)
         ((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value + 4) =
             uStack_54;
        (__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = iStack_50;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields.field_0x24 = uStack_4c;
        (__this->fields).__7__wrap4.fields.m_Object.fields._version =
             (int32_t)SStack_78.fields._current;
        (__this->fields).__7__wrap4.fields.m_Object.fields._index = SStack_78.fields._current._4_4_;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key =
             uStack_60;
        *(undefined4 *)
         ((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key + 4) =
             uStack_5c;
        (__this->fields).__7__wrap4.fields.type = (int32_t)SStack_78.fields._list;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.field_0x4 = SStack_78.fields._list._4_4_;
        *(int32_t *)&(__this->fields).__7__wrap4.fields.m_Object.fields._dictionary =
             SStack_78.fields._index;
        *(int32_t *)((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._dictionary + 4) =
             SStack_78.fields._version;
        in_stack_ffffffffffffff18 = (int32_t)SStack_78.fields._list;
        in_stack_ffffffffffffff1c = SStack_78.fields._list._4_4_;
        in_stack_ffffffffffffff20 = SStack_78.fields._index;
        in_stack_ffffffffffffff24 = SStack_78.fields._version;
        in_stack_ffffffffffffff28 = (int32_t)SStack_78.fields._current;
        in_stack_ffffffffffffff2c = SStack_78.fields._current._4_4_;
        in_stack_ffffffffffffff30 = uStack_60;
        in_stack_ffffffffffffff34 = uStack_5c;
        in_stack_ffffffffffffff38 = uStack_58;
        in_stack_ffffffffffffff3c = uStack_54;
        in_stack_ffffffffffffff40 = iStack_50;
        in_stack_ffffffffffffff44 = uStack_4c;
        in_stack_ffffffffffffff48 = uStack_48;
        in_stack_ffffffffffffff4c = uStack_44;
        il2cpp_runtime_glue(&(__this->fields).__7__wrap4.fields.m_Object,0);
        pGVar16 = __this;
LAB_04209d82:
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar16;
        __this_05.fields._0_8_ = in_stack_ffffffffffffff08;
        __this_05.fields.m_Object.fields._version = in_stack_ffffffffffffff18;
        __this_05.fields.m_Object.fields._index = in_stack_ffffffffffffff1c;
        __this_05.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff20;
        __this_05.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff24;
        __this_05.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_ffffffffffffff28;
        __this_05.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_ffffffffffffff2c;
        __this_05.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff30;
        __this_05.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff34;
        __this_05.fields.m_Array.fields._list._0_4_ = in_stack_ffffffffffffff38;
        __this_05.fields.m_Array.fields._list._4_4_ = in_stack_ffffffffffffff3c;
        __this_05.fields.m_Array.fields._index = in_stack_ffffffffffffff40;
        __this_05.fields.m_Array.fields._version = in_stack_ffffffffffffff44;
        __this_05.fields.m_Array.fields._current._0_4_ = in_stack_ffffffffffffff48;
        __this_05.fields.m_Array.fields._current._4_4_ = in_stack_ffffffffffffff4c;
        bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_05,(MethodInfo *)&(__this->fields).__7__wrap4);
        if ((char)bVar4 != '\0') {
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar16;
          __this_06.fields._0_8_ = in_stack_ffffffffffffff08;
          __this_06.fields.m_Object.fields._version = in_stack_ffffffffffffff18;
          __this_06.fields.m_Object.fields._index = in_stack_ffffffffffffff1c;
          __this_06.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff20;
          __this_06.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff24;
          __this_06.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_ffffffffffffff28;
          __this_06.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_ffffffffffffff2c;
          __this_06.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff30;
          __this_06.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff34;
          __this_06.fields.m_Array.fields._list._0_4_ = in_stack_ffffffffffffff38;
          __this_06.fields.m_Array.fields._list._4_4_ = in_stack_ffffffffffffff3c;
          __this_06.fields.m_Array.fields._index = in_stack_ffffffffffffff40;
          __this_06.fields.m_Array.fields._version = in_stack_ffffffffffffff44;
          __this_06.fields.m_Array.fields._current._0_4_ = in_stack_ffffffffffffff48;
          __this_06.fields.m_Array.fields._current._4_4_ = in_stack_ffffffffffffff4c;
          SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_06,(MethodInfo *)&(pGVar16->fields).__7__wrap4);
          pSVar12 = SVar15.fields.value;
          pSVar9 = SVar15.fields.key;
          if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          plVar6 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar12,"Highest",
                                      (pSVar12->klass->vtable)._7_get_Item.method);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar7 = (**(code **)(*plVar6 + 1000))(plVar6);
          pSVar8 = Utility_Format__Suffix(uVar7,(MethodInfo *)0x0);
          bVar4 = System_String__op_Equality(pSVar9,"None",(MethodInfo *)0x0);
          pGVar11 = pGVar16;
          if ((char)bVar4 == '\0') {
            pSVar10 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
            if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((int)pSVar10->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[0] = "Highest ";
            il2cpp_runtime_glue(pSVar10->m_Items);
            if ((uint)pSVar10->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[1] = (pGVar11->fields)._weapon_5__4;
            il2cpp_runtime_glue(pSVar10->m_Items + 1);
            if ((uint)pSVar10->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[2] = " (";
            il2cpp_runtime_glue(pSVar10->m_Items + 2);
            if ((uint)pSVar10->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[3] = pSVar9;
            il2cpp_runtime_glue(pSVar10->m_Items + 3,pSVar9);
            if ((uint)pSVar10->max_length < 5) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[4] = ")";
            il2cpp_runtime_glue(pSVar10->m_Items + 4);
            pSVar9 = System_String__Concat(pSVar10,(MethodInfo *)0x0);
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            __this_12.fields.Item2 = (Il2CppObject *)pSVar9;
            __this_12.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
            System_ValueTuple<object__object>___ctor
                      (__this_12,(Il2CppObject *)pSVar8,MethodInfo_ValueTuple_2_String_String,in_R8);
            if (pGVar16 == (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            pSVar9 = System_String__Concat
                               ("Highest ",(pGVar16->fields)._weapon_5__4,(MethodInfo *)0x0);
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            __this_11.fields.Item2 = (Il2CppObject *)pSVar9;
            __this_11.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
            System_ValueTuple<object__object>___ctor
                      (__this_11,(Il2CppObject *)pSVar8,MethodInfo_ValueTuple_2_String_String,in_R8);
          }
          *(undefined4 *)&(pGVar16->fields).__2__current.fields.Item1 = uStack_88;
          *(undefined4 *)((long)&(pGVar16->fields).__2__current.fields.Item1 + 4) = uStack_84;
          *(undefined4 *)&(pGVar16->fields).__2__current.fields.Item2 = uStack_80;
          *(undefined4 *)((long)&(pGVar16->fields).__2__current.fields.Item2 + 4) = uStack_7c;
          il2cpp_runtime_glue(&(pGVar16->fields).__2__current,0);
          (pGVar11->fields).__1__state = 2;
          goto LAB_0420a604;
        }
        pSVar3 = &(pGVar16->fields).__7__wrap4;
        (pSVar3->fields).m_Array.fields._index = 0;
        (pSVar3->fields).m_Array.fields._version = 0;
        (pGVar16->fields).__7__wrap4.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)0x0;
        *(undefined8 *)&(pGVar16->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType =
             0;
        (pGVar16->fields).__7__wrap4.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)0x0;
        (pGVar16->fields).__7__wrap4.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)0x0;
        (pGVar16->fields).__7__wrap4.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)0x0;
        (pGVar16->fields).__7__wrap4.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        pSVar3 = &(pGVar16->fields).__7__wrap4;
        (pSVar3->fields).m_Object.fields._version = 0;
        (pSVar3->fields).m_Object.fields._index = 0;
        (pGVar16->fields)._weapon_5__4 = (System_String_o *)0x0;
        *(undefined8 *)&(pGVar16->fields).__7__wrap4.fields = 0;
        il2cpp_runtime_glue(&(pGVar16->fields)._weapon_5__4,0);
        __this = pGVar16;
      }
      pGVar11 = __this;
      if (DAT_0570502f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_0570502f = '\x01';
      }
      (__this->fields).__1__state = -1;
      __this_02.fields._8_8_ = pGVar11;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff18;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff1c;
      method_00 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
                (__this_02,(MethodInfo_3176CE0 *)&(__this->fields).__7__wrap2);
      (pGVar11->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)0x0;
      (pGVar11->fields).__7__wrap2.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
      (pGVar11->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pGVar11->fields).__7__wrap2.fields._index = 0;
      (pGVar11->fields).__7__wrap2.fields._version = 0;
      if (__this_00 == (GameProgress_DamageSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      SVar13 = GameProgress_DamageSetting__get_Overall(__this_00,method_00);
      pSVar9 = Utility_Format__Suffix(SVar13.fields.Item2,(MethodInfo *)0x0);
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      __this_10.fields.Item2 = "Total Overall";
      __this_10.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
      System_ValueTuple<object__object>___ctor(__this_10,(Il2CppObject *)pSVar9,MethodInfo_ValueTuple_2_String_String,in_R8);
      *(undefined4 *)&(pGVar11->fields).__2__current.fields.Item1 = uVar17;
      *(undefined4 *)((long)&(pGVar11->fields).__2__current.fields.Item1 + 4) = uVar18;
      *(undefined4 *)&(pGVar11->fields).__2__current.fields.Item2 = uVar19;
      *(undefined4 *)((long)&(pGVar11->fields).__2__current.fields.Item2 + 4) = uVar20;
      il2cpp_runtime_glue(&(pGVar11->fields).__2__current,0);
      (pGVar11->fields).__1__state = 3;
      break;
    case 2:
      (__this->fields).__1__state = -3;
      goto LAB_04209d82;
    case 3:
      (__this->fields).__1__state = -1;
      pSVar5 = (__this->fields)._rootPairs_5__2;
      if (pSVar5 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
                (&SStack_78,(System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
      *(int32_t *)&(pGVar16->fields).__7__wrap2.fields._current.fields.key =
           (int32_t)SStack_78.fields._current;
      *(int32_t *)((long)&(pGVar16->fields).__7__wrap2.fields._current.fields.key + 4) =
           SStack_78.fields._current._4_4_;
      *(undefined4 *)&(pGVar16->fields).__7__wrap2.fields._current.fields.value = uStack_60;
      *(undefined4 *)((long)&(pGVar16->fields).__7__wrap2.fields._current.fields.value + 4) =
           uStack_5c;
      *(int32_t *)&(pGVar16->fields).__7__wrap2.fields._list = (int32_t)SStack_78.fields._list;
      *(undefined4 *)((long)&(pGVar16->fields).__7__wrap2.fields._list + 4) =
           SStack_78.fields._list._4_4_;
      (pGVar16->fields).__7__wrap2.fields._index = SStack_78.fields._index;
      (pGVar16->fields).__7__wrap2.fields._version = SStack_78.fields._version;
      in_stack_ffffffffffffff18 = (int32_t)SStack_78.fields._list;
      in_stack_ffffffffffffff1c = SStack_78.fields._list._4_4_;
      il2cpp_runtime_glue(&(pGVar16->fields).__7__wrap2,0);
      (pGVar16->fields).__1__state = -4;
      __this = pGVar16;
      while( true ) {
        __this_03.fields._8_8_ = __this;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
        __this_03.fields._current._0_4_ = in_stack_ffffffffffffff18;
        __this_03.fields._current._4_4_ = in_stack_ffffffffffffff1c;
        bVar4 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                          (__this_03,(MethodInfo_3176CF0 *)&(__this->fields).__7__wrap2);
        if ((char)bVar4 == '\0') break;
        auVar14 = il2cpp_glue_03c129b0(&(__this->fields).__7__wrap2,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSO);
        plVar6 = auVar14._8_8_;
        (__this->fields)._weapon_5__4 = auVar14._0_8_;
        il2cpp_runtime_glue(&(__this->fields)._weapon_5__4,auVar14._0_8_);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (**(code **)(*plVar6 + 0x338))(&SStack_78,plVar6,*(undefined8 *)(*plVar6 + 0x340));
        (__this->fields).__7__wrap4.fields.m_Array.fields._current = pSStack_38;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Array.fields._list = uStack_48;
        *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Array.fields._list + 4) =
             uStack_44;
        (__this->fields).__7__wrap4.fields.m_Array.fields._index = iStack_40;
        (__this->fields).__7__wrap4.fields.m_Array.fields._version = iStack_3c;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value =
             uStack_58;
        *(undefined4 *)
         ((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value + 4) =
             uStack_54;
        (__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = iStack_50;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields.field_0x24 = uStack_4c;
        (__this->fields).__7__wrap4.fields.m_Object.fields._version =
             (int32_t)SStack_78.fields._current;
        (__this->fields).__7__wrap4.fields.m_Object.fields._index = SStack_78.fields._current._4_4_;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key =
             uStack_60;
        *(undefined4 *)
         ((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key + 4) =
             uStack_5c;
        (__this->fields).__7__wrap4.fields.type = (int32_t)SStack_78.fields._list;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.field_0x4 = SStack_78.fields._list._4_4_;
        *(int32_t *)&(__this->fields).__7__wrap4.fields.m_Object.fields._dictionary =
             SStack_78.fields._index;
        *(int32_t *)((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._dictionary + 4) =
             SStack_78.fields._version;
        in_stack_ffffffffffffff18 = (int32_t)SStack_78.fields._list;
        in_stack_ffffffffffffff1c = SStack_78.fields._list._4_4_;
        in_stack_ffffffffffffff20 = SStack_78.fields._index;
        in_stack_ffffffffffffff24 = SStack_78.fields._version;
        in_stack_ffffffffffffff28 = (int32_t)SStack_78.fields._current;
        in_stack_ffffffffffffff2c = SStack_78.fields._current._4_4_;
        in_stack_ffffffffffffff30 = uStack_60;
        in_stack_ffffffffffffff34 = uStack_5c;
        in_stack_ffffffffffffff38 = uStack_58;
        in_stack_ffffffffffffff3c = uStack_54;
        in_stack_ffffffffffffff40 = iStack_50;
        in_stack_ffffffffffffff44 = uStack_4c;
        in_stack_ffffffffffffff48 = uStack_48;
        in_stack_ffffffffffffff4c = uStack_44;
        il2cpp_runtime_glue(&(__this->fields).__7__wrap4.fields.m_Object,0);
        pGVar16 = __this;
LAB_0420a365:
        __this_07.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar16;
        __this_07.fields._0_8_ = in_stack_ffffffffffffff08;
        __this_07.fields.m_Object.fields._version = in_stack_ffffffffffffff18;
        __this_07.fields.m_Object.fields._index = in_stack_ffffffffffffff1c;
        __this_07.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff20;
        __this_07.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff24;
        __this_07.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_ffffffffffffff28;
        __this_07.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_ffffffffffffff2c;
        __this_07.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff30;
        __this_07.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff34;
        __this_07.fields.m_Array.fields._list._0_4_ = in_stack_ffffffffffffff38;
        __this_07.fields.m_Array.fields._list._4_4_ = in_stack_ffffffffffffff3c;
        __this_07.fields.m_Array.fields._index = in_stack_ffffffffffffff40;
        __this_07.fields.m_Array.fields._version = in_stack_ffffffffffffff44;
        __this_07.fields.m_Array.fields._current._0_4_ = in_stack_ffffffffffffff48;
        __this_07.fields.m_Array.fields._current._4_4_ = in_stack_ffffffffffffff4c;
        bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_07,(MethodInfo *)&(__this->fields).__7__wrap4);
        if ((char)bVar4 != '\0') {
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar16;
          __this_08.fields._0_8_ = in_stack_ffffffffffffff08;
          __this_08.fields.m_Object.fields._version = in_stack_ffffffffffffff18;
          __this_08.fields.m_Object.fields._index = in_stack_ffffffffffffff1c;
          __this_08.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff20;
          __this_08.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff24;
          __this_08.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_ffffffffffffff28;
          __this_08.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_ffffffffffffff2c;
          __this_08.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff30;
          __this_08.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff34;
          __this_08.fields.m_Array.fields._list._0_4_ = in_stack_ffffffffffffff38;
          __this_08.fields.m_Array.fields._list._4_4_ = in_stack_ffffffffffffff3c;
          __this_08.fields.m_Array.fields._index = in_stack_ffffffffffffff40;
          __this_08.fields.m_Array.fields._version = in_stack_ffffffffffffff44;
          __this_08.fields.m_Array.fields._current._0_4_ = in_stack_ffffffffffffff48;
          __this_08.fields.m_Array.fields._current._4_4_ = in_stack_ffffffffffffff4c;
          SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_08,(MethodInfo *)&(pGVar16->fields).__7__wrap4);
          pSVar12 = SVar15.fields.value;
          pSVar9 = SVar15.fields.key;
          if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          plVar6 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar12,"Total",
                                      (pSVar12->klass->vtable)._7_get_Item.method);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar7 = (**(code **)(*plVar6 + 1000))(plVar6);
          pSVar8 = Utility_Format__Suffix(uVar7,(MethodInfo *)0x0);
          bVar4 = System_String__op_Equality(pSVar9,"None",(MethodInfo *)0x0);
          pGVar11 = pGVar16;
          if ((char)bVar4 == '\0') {
            pSVar10 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
            if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((int)pSVar10->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[0] = "Total ";
            il2cpp_runtime_glue(pSVar10->m_Items);
            if ((uint)pSVar10->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[1] = (pGVar11->fields)._weapon_5__4;
            il2cpp_runtime_glue(pSVar10->m_Items + 1);
            if ((uint)pSVar10->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[2] = " (";
            il2cpp_runtime_glue(pSVar10->m_Items + 2);
            if ((uint)pSVar10->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[3] = pSVar9;
            il2cpp_runtime_glue(pSVar10->m_Items + 3,pSVar9);
            if ((uint)pSVar10->max_length < 5) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10->m_Items[4] = ")";
            il2cpp_runtime_glue(pSVar10->m_Items + 4);
            pSVar9 = System_String__Concat(pSVar10,(MethodInfo *)0x0);
            uStack_98 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            __this_14.fields.Item2 = (Il2CppObject *)pSVar9;
            __this_14.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
            System_ValueTuple<object__object>___ctor
                      (__this_14,(Il2CppObject *)pSVar8,MethodInfo_ValueTuple_2_String_String,in_R8);
            if (pGVar16 == (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            pSVar9 = System_String__Concat
                               ("Total ",(pGVar16->fields)._weapon_5__4,(MethodInfo *)0x0);
            uStack_98 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            __this_13.fields.Item2 = (Il2CppObject *)pSVar9;
            __this_13.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
            System_ValueTuple<object__object>___ctor
                      (__this_13,(Il2CppObject *)pSVar8,MethodInfo_ValueTuple_2_String_String,in_R8);
          }
          *(undefined4 *)&(pGVar16->fields).__2__current.fields.Item1 = uStack_98;
          *(undefined4 *)((long)&(pGVar16->fields).__2__current.fields.Item1 + 4) = uStack_94;
          *(undefined4 *)&(pGVar16->fields).__2__current.fields.Item2 = uStack_90;
          *(undefined4 *)((long)&(pGVar16->fields).__2__current.fields.Item2 + 4) = uStack_8c;
          il2cpp_runtime_glue(&(pGVar16->fields).__2__current,0);
          (pGVar11->fields).__1__state = 4;
          goto LAB_0420a604;
        }
        pSVar3 = &(pGVar16->fields).__7__wrap4;
        (pSVar3->fields).m_Array.fields._index = 0;
        (pSVar3->fields).m_Array.fields._version = 0;
        (pGVar16->fields).__7__wrap4.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)0x0;
        *(undefined8 *)&(pGVar16->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType =
             0;
        (pGVar16->fields).__7__wrap4.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)0x0;
        (pGVar16->fields).__7__wrap4.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)0x0;
        (pGVar16->fields).__7__wrap4.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)0x0;
        (pGVar16->fields).__7__wrap4.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        pSVar3 = &(pGVar16->fields).__7__wrap4;
        (pSVar3->fields).m_Object.fields._version = 0;
        (pSVar3->fields).m_Object.fields._index = 0;
        (pGVar16->fields)._weapon_5__4 = (System_String_o *)0x0;
        *(undefined8 *)&(pGVar16->fields).__7__wrap4.fields = 0;
        il2cpp_runtime_glue(&(pGVar16->fields)._weapon_5__4,0);
        __this = pGVar16;
      }
      pGVar16 = __this;
      if (DAT_05705030 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_05705030 = '\x01';
      }
      (__this->fields).__1__state = -1;
      __this_04.fields._8_8_ = pGVar16;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_04.fields._current._0_4_ = in_stack_ffffffffffffff18;
      __this_04.fields._current._4_4_ = in_stack_ffffffffffffff1c;
      System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
                (__this_04,(MethodInfo_3176CE0 *)&(__this->fields).__7__wrap2);
      (pGVar16->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)0x0;
      (pGVar16->fields).__7__wrap2.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
      (pGVar16->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pGVar16->fields).__7__wrap2.fields._index = 0;
      (pGVar16->fields).__7__wrap2.fields._version = 0;
      goto LAB_0420a419;
    case 4:
      (__this->fields).__1__state = -4;
      goto LAB_0420a365;
    }
LAB_0420a604:
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)pGVar11 >> 8),1);
  }
  else {
LAB_0420a419:
    bVar4 = 0;
  }
  return bVar4;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$<>m__Finally1
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17____m__Finally1 (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420a880

void GameProgress_DamageSetting_<GetStatLabels>d__17__<>m__Finally1
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_0570502f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570502f = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_3176CE0 *)&(__this->fields).__7__wrap2);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$<>m__Finally2
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17____m__Finally2 (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420a8c0

void GameProgress_DamageSetting_<GetStatLabels>d__17__<>m__Finally2
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05705030 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705030 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_3176CE0 *)&(__this->fields).__7__wrap2);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.Generic.IEnumerator<(System.Stringtitle,System.Stringvalue)>.get_Current
// il2cpp: System_ValueTuple_string__string__o GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420a900

System_ValueTuple_string__string__o
GameProgress_DamageSetting_<GetStatLabels>d__17__System_Collections_Generic_IEnumerator<_System_Stringtitle_System_Stringvalue_>_get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  return (System_ValueTuple_string__string__o)(__this->fields).__2__current.fields;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerator_Reset (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420a910

void GameProgress_DamageSetting_<GetStatLabels>d__17__System_Collections_IEnumerator_Reset
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerator_get_Current (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420a950

Il2CppObject *
GameProgress_DamageSetting_<GetStatLabels>d__17__System_Collections_IEnumerator_get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_05705031 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ValueTuple_string__string);
    DAT_05705031 = '\x01';
  }
  local_18 = *(undefined4 *)&(__this->fields).__2__current.fields.Item1;
  uStack_14 = *(undefined4 *)((long)&(__this->fields).__2__current.fields.Item1 + 4);
  uStack_10 = *(undefined4 *)&(__this->fields).__2__current.fields.Item2;
  uStack_c = *(undefined4 *)((long)&(__this->fields).__2__current.fields.Item2 + 4);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ValueTuple_string__string,&local_18);
  return pIVar1;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.Generic.IEnumerable<(System.Stringtitle,System.Stringvalue)>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420a9a0

System_Collections_IEnumerator_o *
GameProgress_DamageSetting_<GetStatLabels>d__17__System_Collections_Generic_IEnumerable<_System_Stringtitle_System_Stringvalue_>_GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_05705032 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05705032 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetStatLabels_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].monitor = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = (Il2CppClass *)(__this->fields).__4__this;
    il2cpp_runtime_glue(__this_00 + 3);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerable_GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x420aa40

System_Collections_IEnumerator_o *
GameProgress_DamageSetting_<GetStatLabels>d__17__System_Collections_IEnumerable_GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_05705032 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05705032 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetStatLabels_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].monitor = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = (Il2CppClass *)(__this->fields).__4__this;
    il2cpp_runtime_glue(__this_00 + 3);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.DamageSetting$$.cctor
// il2cpp: void GameProgress_DamageSetting___cctor (const MethodInfo* method);
// 0x4208390

void GameProgress_DamageSetting___cctor(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *__this;
  System_Type_o *enumType;
  System_Array_o *pSVar1;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *first;
  System_Object_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Func_TSource__TElement__o *elementSelector;
  System_Collections_Generic_Dictionary_TKey__TElement__o *pSVar3;
  undefined8 uVar4;
  
  if (DAT_05705022 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Comparison_KeyValuePair_string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_DamageSetting);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Concat_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_KillWeapon_S);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32__ToDicti);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Func_KillWeapon__string);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__int);
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
    il2cpp_init_method_metadata(&TypeRef_KillWeapon);
    il2cpp_init_method_metadata(&MethodInfo_String___cctor_b__5_0);
    il2cpp_init_method_metadata(&MethodInfo_String___cctor_b__5_1);
    il2cpp_init_method_metadata(&MethodInfo_Int32___cctor_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Int32___cctor_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05705022 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  handle.fields.value = TypeRef_KillWeapon.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_KillWeapon__string);
  pSVar2 = (System_Collections_Generic_IEnumerable_TSource__o *)0x0;
  System_Func<Int32Enum__object>___ctor();
  uVar4 = TypeInfo_KillWeapon;
  if ((pSVar1 != (System_Array_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_IEnumerable_TSource__o *)
               il2cpp_runtime_glue(pSVar1,TypeInfo_KillWeapon),
     pSVar2 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar1,uVar4);
  }
  first = System_Linq_Enumerable__Select<Int32Enum__object>(pSVar2,selector,MethodInfo_IEnumerable_1_System_String__Select_KillWeapon_S);
  if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Linq_Enumerable__Concat<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)
                      **(undefined8 **)(TypeInfo_HumanSpecials + 0xb8),MethodInfo_IEnumerable_1_System_String__Concat_String);
  pSVar2 = System_Linq_Enumerable__Concat<object>
                     (pSVar2,*(System_Collections_Generic_IEnumerable_TSource__o **)
                              (*(long *)(TypeInfo_HumanSpecials + 0xb8) + 8),MethodInfo_IEnumerable_1_System_String__Concat_String);
  pSVar2 = System_Linq_Enumerable__Concat<object>
                     (pSVar2,*(System_Collections_Generic_IEnumerable_TSource__o **)
                              (*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x10),MethodInfo_IEnumerable_1_System_String__Concat_String);
  pSVar2 = System_Linq_Enumerable__Concat<object>
                     (pSVar2,*(System_Collections_Generic_IEnumerable_TSource__o **)
                              (*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x18),MethodInfo_IEnumerable_1_System_String__Concat_String);
  source = System_Linq_Enumerable__ToArray<object>(pSVar2,MethodInfo_String___ToArray_String);
  if (__this == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(undefined4 *)&__this[1].klass = 0;
  keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
  System_Func<object__object>___ctor();
  elementSelector = (System_Func_TSource__TElement__o *)il2cpp_runtime_glue(TypeInfo_Func_string__int);
  System_Func<object__int>___ctor();
  pSVar3 = System_Linq_Enumerable__ToDictionary<object__object__int>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                      elementSelector,MethodInfo_Dictionary_2_System_String_System_Int32__ToDicti);
  __this[1].monitor = pSVar3;
  il2cpp_runtime_glue(&__this[1].monitor,pSVar3);
  uVar4 = il2cpp_runtime_glue(TypeInfo_Comparison_KeyValuePair_string__JSONNode);
  System_Comparison<KeyValuePair<object__object>>___ctor();
  **(undefined8 **)(TypeInfo_DamageSetting + 0xb8) = uVar4;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DamageSetting + 0xb8),uVar4);
  return;
}


// GameProgress.DamageSetting$$get_Item
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x4208750

System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Item(void)

{
  System_ValueTuple_ulong__ulong__Fields SVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  long *plVar5;
  long *plVar6;
  uint64_t uVar7;
  uint64_t item1;
  System_String_o *in_RDX;
  long in_RDI;
  MethodInfo_2B4B4A0 *in_R8;
  System_ValueTuple_ulong__ulong__o __this;
  uint64_t local_58;
  uint64_t uStack_50;
  System_Enum_o local_48;
  
  if (DAT_05705023 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"Highest");
    DAT_05705023 = '\x01';
  }
  plVar5 = *(long **)(in_RDI + 0x10);
  if (DAT_05705045 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
    DAT_05705045 = '\x01';
  }
  local_48.klass = TypeInfo_KillWeapon;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if (plVar5 == (long *)0x0) goto LAB_04208a91;
  cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x300));
  if (cVar2 != '\0') {
    plVar5 = *(long **)(in_RDI + 0x10);
    if (DAT_05705045 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
      DAT_05705045 = '\x01';
    }
    local_48.klass = TypeInfo_KillWeapon;
    local_48.monitor = (void *)0xffffffffffffffff;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    if (plVar5 == (long *)0x0) {
LAB_04208a91:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
    if (DAT_05705046 == '\0') {
      il2cpp_init_method_metadata(&"None");
      DAT_05705046 = '\x01';
    }
    System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
    if (plVar5 == (long *)0x0) goto LAB_04208a91;
    cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
    if (cVar2 != '\0') {
      plVar5 = *(long **)(in_RDI + 0x10);
      if (DAT_05705045 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
        DAT_05705045 = '\x01';
      }
      local_48.klass = TypeInfo_KillWeapon;
      local_48.monitor = (void *)0xffffffffffffffff;
      pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if (plVar5 == (long *)0x0) goto LAB_04208a91;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                 (plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
      if (DAT_05705046 == '\0') {
        il2cpp_init_method_metadata(&"None");
        DAT_05705046 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
      if (plVar5 == (long *)0x0) goto LAB_04208a91;
      if ((char)bVar3 != '\0') {
        in_RDX = "None";
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                 (plVar5,in_RDX,*(undefined8 *)(*plVar5 + 0x1b0));
      if (plVar5 == (long *)0x0) goto LAB_04208a91;
      cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,"Highest",*(undefined8 *)(*plVar5 + 0x300));
      if (cVar2 == '\0') {
        uVar7 = 0;
      }
      else {
        plVar6 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                   (plVar5,"Highest",*(undefined8 *)(*plVar5 + 0x1b0));
        if (plVar6 == (long *)0x0) goto LAB_04208a91;
        uVar7 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
      }
      cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,"Total",*(undefined8 *)(*plVar5 + 0x300));
      if (cVar2 == '\0') {
        item1 = 0;
      }
      else {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                   (plVar5,"Total",*(undefined8 *)(*plVar5 + 0x1b0));
        if (plVar5 == (long *)0x0) goto LAB_04208a91;
        item1 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
      }
      goto LAB_04208a74;
    }
  }
  uVar7 = 0;
  item1 = 0;
LAB_04208a74:
  uStack_50 = 0;
  local_58 = 0;
  __this.fields.Item2 = uVar7;
  __this.fields.Item1 = (uint64_t)&local_58;
  System_ValueTuple<ulong__ulong>___ctor(__this,item1,MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  SVar1.Item2 = uStack_50;
  SVar1.Item1 = local_58;
  return (System_ValueTuple_ulong__ulong__o)SVar1;
}


// GameProgress.DamageSetting$$set_Item
// il2cpp: void GameProgress_DamageSetting__set_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x4208b50

void GameProgress_DamageSetting__set_Item(void)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONObject_o *pSVar4;
  long *plVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  uint64_t in_RCX;
  System_String_o *in_RDX;
  long lVar7;
  long in_RDI;
  uint64_t in_R8;
  uint64_t n;
  System_Enum_o local_68 [2];
  long local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = in_RCX;
  if (DAT_05705024 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"Highest");
    DAT_05705024 = '\x01';
  }
  plVar5 = *(long **)(in_RDI + 0x10);
  if (DAT_05705045 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
    DAT_05705045 = '\x01';
  }
  local_68[0].klass = TypeInfo_KillWeapon;
  local_68[0].monitor = (void *)0xffffffffffffffff;
  pSVar3 = System_Enum__ToString(local_68,(MethodInfo *)0x0);
  if (plVar5 != (long *)0x0) {
    cVar1 = (**(code **)(*plVar5 + 0x2f8))(plVar5,pSVar3,*(undefined8 *)(*plVar5 + 0x300));
    local_48 = in_RDI;
    local_40 = in_R8;
    if (cVar1 == '\0') {
      plVar5 = *(long **)(in_RDI + 0x10);
      if (DAT_05705045 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
        DAT_05705045 = '\x01';
      }
      local_68[0].klass = TypeInfo_KillWeapon;
      local_68[0].monitor = (void *)0xffffffffffffffff;
      pSVar3 = System_Enum__ToString(local_68,(MethodInfo *)0x0);
      pSVar4 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar4,(MethodInfo *)0x0);
      if (plVar5 == (long *)0x0) goto LAB_04208faa;
      (**(code **)(*plVar5 + 0x278))(plVar5,pSVar3,pSVar4,*(undefined8 *)(*plVar5 + 0x280));
    }
    n = local_40;
    lVar7 = local_48;
    plVar5 = *(long **)(local_48 + 0x10);
    if (DAT_05705045 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
      DAT_05705045 = '\x01';
    }
    local_68[0].klass = TypeInfo_KillWeapon;
    local_68[0].monitor = (void *)0xffffffffffffffff;
    pSVar3 = System_Enum__ToString(local_68,(MethodInfo *)0x0);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                 (plVar5,pSVar3,*(undefined8 *)(*plVar5 + 0x1b0));
      if (DAT_05705046 == '\0') {
        il2cpp_init_method_metadata(&"None");
        DAT_05705046 = '\x01';
      }
      System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
      if (plVar5 != (long *)0x0) {
        cVar1 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
        if (cVar1 == '\0') {
          plVar5 = *(long **)(lVar7 + 0x10);
          if (DAT_05705045 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
            DAT_05705045 = '\x01';
          }
          local_68[0].klass = TypeInfo_KillWeapon;
          local_68[0].monitor = (void *)0xffffffffffffffff;
          pSVar3 = System_Enum__ToString(local_68,(MethodInfo *)0x0);
          if (plVar5 == (long *)0x0) goto LAB_04208faa;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                     (plVar5,pSVar3,*(undefined8 *)(*plVar5 + 0x1b0));
          if (DAT_05705046 == '\0') {
            il2cpp_init_method_metadata(&"None");
            DAT_05705046 = '\x01';
          }
          bVar2 = System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
          pSVar3 = "None";
          pSVar4 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
          SimpleJSONFixed_JSONObject___ctor(pSVar4,(MethodInfo *)0x0);
          if (plVar5 == (long *)0x0) goto LAB_04208faa;
          if ((char)bVar2 == '\0') {
            pSVar3 = in_RDX;
          }
          (**(code **)(*plVar5 + 0x278))(plVar5,pSVar3,pSVar4,*(undefined8 *)(*plVar5 + 0x280));
          lVar7 = local_48;
          n = local_40;
        }
        plVar5 = *(long **)(lVar7 + 0x10);
        if (DAT_05705045 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
          DAT_05705045 = '\x01';
        }
        local_68[0].klass = TypeInfo_KillWeapon;
        local_68[0].monitor = (void *)0xffffffffffffffff;
        pSVar3 = System_Enum__ToString(local_68,(MethodInfo *)0x0);
        if (plVar5 != (long *)0x0) {
          plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                     (plVar5,pSVar3,*(undefined8 *)(*plVar5 + 0x1b0));
          if (DAT_05705046 == '\0') {
            il2cpp_init_method_metadata(&"None");
            DAT_05705046 = '\x01';
          }
          bVar2 = System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
          if (plVar5 != (long *)0x0) {
            if ((char)bVar2 != '\0') {
              in_RDX = "None";
            }
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                       (plVar5,in_RDX,*(undefined8 *)(*plVar5 + 0x1b0));
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(local_38,(MethodInfo *)0x0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x1b8))
                        (plVar5,"Highest",pSVar6,*(undefined8 *)(*plVar5 + 0x1c0));
              pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
              (**(code **)(*plVar5 + 0x1b8))
                        (plVar5,"Total",pSVar6,*(undefined8 *)(*plVar5 + 0x1c0));
              return;
            }
          }
        }
      }
    }
  }
LAB_04208faa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.DamageSetting$$get_Overall
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Overall (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x4208fb0

System_ValueTuple_ulong__ulong__o
GameProgress_DamageSetting__get_Overall(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_ValueTuple_ulong__ulong__Fields SVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  uint64_t uVar6;
  uint64_t item1;
  MethodInfo_2B4B4A0 *in_R8;
  System_ValueTuple_ulong__ulong__o __this_00;
  uint64_t local_28;
  uint64_t uStack_20;
  
  if (DAT_05705025 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"Overall");
    il2cpp_init_method_metadata(&"Highest");
    DAT_05705025 = '\x01';
  }
  pSVar1 = (__this->fields).root;
  if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_04209151:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar3 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)
                    (pSVar1,"Overall",(pSVar1->klass->vtable)._28_HasKey.method);
  if (cVar3 == '\0') {
    uVar6 = 0;
    item1 = 0;
  }
  else {
    pSVar1 = (__this->fields).root;
    if ((pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (plVar4 = (long *)(*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar1,"Overall",(pSVar1->klass->vtable)._7_get_Item.method),
       plVar4 == (long *)0x0)) goto LAB_04209151;
    cVar3 = (**(code **)(*plVar4 + 0x2f8))(plVar4,"Highest",*(undefined8 *)(*plVar4 + 0x300));
    if (cVar3 == '\0') {
      uVar6 = 0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                 (plVar4,"Highest",*(undefined8 *)(*plVar4 + 0x1b0));
      if (plVar5 == (long *)0x0) goto LAB_04209151;
      uVar6 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
    }
    cVar3 = (**(code **)(*plVar4 + 0x2f8))(plVar4,"Total",*(undefined8 *)(*plVar4 + 0x300));
    if (cVar3 == '\0') {
      item1 = 0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                 (plVar4,"Total",*(undefined8 *)(*plVar4 + 0x1b0));
      if (plVar4 == (long *)0x0) goto LAB_04209151;
      item1 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
    }
  }
  uStack_20 = 0;
  local_28 = 0;
  __this_00.fields.Item2 = uVar6;
  __this_00.fields.Item1 = (uint64_t)&local_28;
  System_ValueTuple<ulong__ulong>___ctor(__this_00,item1,MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  SVar2.Item2 = uStack_20;
  SVar2.Item1 = local_28;
  return (System_ValueTuple_ulong__ulong__o)SVar2;
}


// GameProgress.DamageSetting$$set_Overall
// il2cpp: void GameProgress_DamageSetting__set_Overall (GameProgress_DamageSetting_o* __this, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x4209160

void GameProgress_DamageSetting__set_Overall
               (GameProgress_DamageSetting_o *__this,System_ValueTuple_ulong__ulong__o value,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  long lVar2;
  char cVar3;
  SimpleJSONFixed_JSONObject_o *__this_00;
  long *plVar4;
  long *plVar5;
  
  if (DAT_05705026 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"Overall");
    il2cpp_init_method_metadata(&"Highest");
    DAT_05705026 = '\x01';
  }
  pSVar1 = (__this->fields).root;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar3 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar1,"Overall",(pSVar1->klass->vtable)._28_HasKey.method);
    if (cVar3 == '\0') {
      pSVar1 = (__this->fields).root;
      __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_042092d5;
      (*(pSVar1->klass->vtable)._20_Add.methodPtr)
                (pSVar1,"Overall",__this_00,(pSVar1->klass->vtable)._20_Add.method);
    }
    pSVar1 = (__this->fields).root;
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar4 = (long *)(*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar1,"Overall",(pSVar1->klass->vtable)._7_get_Item.method);
      if (plVar4 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                   (plVar4,"Highest",*(undefined8 *)(*plVar4 + 0x1b0));
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x3f8))(plVar5,value.fields.Item1,*(undefined8 *)(*plVar5 + 0x400))
          ;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                     (plVar4,"Total",*(undefined8 *)(*plVar4 + 0x1b0));
          if (plVar4 != (long *)0x0) {
            lVar2 = *plVar4;
            (**(code **)(lVar2 + 0x3f8))
                      (plVar4,value.fields.Item2,*(undefined8 *)(lVar2 + 0x400),lVar2,
                       *(code **)(lVar2 + 0x3f8));
            return;
          }
        }
      }
    }
  }
LAB_042092d5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.DamageSetting$$.ctor
// il2cpp: void GameProgress_DamageSetting___ctor (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x42092e0

void GameProgress_DamageSetting___ctor(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtable_dispatch)
  ;
  return;
}


// GameProgress.DamageSetting$$SetDefault
// il2cpp: void GameProgress_DamageSetting__SetDefault (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x4209310

void GameProgress_DamageSetting__SetDefault(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *__this_00;
  
  if (DAT_05705027 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    DAT_05705027 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).root = (SimpleJSONFixed_JSONNode_o *)__this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  return;
}


// GameProgress.DamageSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* GameProgress_DamageSetting__SerializeToJsonObject (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x4209370

SimpleJSONFixed_JSONNode_o *
GameProgress_DamageSetting__SerializeToJsonObject
          (GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  return (__this->fields).root;
}


// GameProgress.DamageSetting$$DeserializeFromJsonObject
// il2cpp: void GameProgress_DamageSetting__DeserializeFromJsonObject (GameProgress_DamageSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4209380

void GameProgress_DamageSetting__DeserializeFromJsonObject
               (GameProgress_DamageSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  (__this->fields).root = json;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// GameProgress.DamageSetting$$Register
// il2cpp: void GameProgress_DamageSetting__Register (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, uint64_t damage, const MethodInfo* method);
// 0x4209390

void GameProgress_DamageSetting__Register(void)

{
  ulong uVar1;
  ulong in_RCX;
  MethodInfo *method;
  MethodInfo *in_RSI;
  GameProgress_DamageSetting_o *in_RDI;
  MethodInfo_2B4B4A0 *in_R8;
  System_ValueTuple_ulong__ulong__o SVar2;
  System_ValueTuple_ulong__ulong__o __this;
  System_ValueTuple_ulong__ulong__o __this_00;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if (DAT_05705028 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    DAT_05705028 = '\x01';
  }
  SVar2 = GameProgress_DamageSetting__get_Overall(in_RDI,in_RSI);
  uVar1 = SVar2.fields.Item1;
  if (SVar2.fields.Item1 < in_RCX) {
    uVar1 = in_RCX;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  __this.fields.Item2 = uVar1;
  __this.fields.Item1 = (uint64_t)&uStack_38;
  method = MethodInfo_ValueTuple_2_UInt64_UInt64;
  System_ValueTuple<ulong__ulong>___ctor
            (__this,SVar2.fields.Item2 + in_RCX,(uint64_t)MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  SVar2.fields.Item2 = uStack_30;
  SVar2.fields.Item1 = uStack_38;
  GameProgress_DamageSetting__set_Overall(in_RDI,SVar2,method);
  SVar2 = GameProgress_DamageSetting__get_Item();
  uVar1 = SVar2.fields.Item1;
  if (SVar2.fields.Item1 < in_RCX) {
    uVar1 = in_RCX;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  __this_00.fields.Item2 = uVar1;
  __this_00.fields.Item1 = (uint64_t)&uStack_38;
  System_ValueTuple<ulong__ulong>___ctor
            (__this_00,SVar2.fields.Item2 + in_RCX,(uint64_t)MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  GameProgress_DamageSetting__set_Item();
  return;
}


// GameProgress.DamageSetting$$GetStatLabels
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x41fce40

System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *
GameProgress_DamageSetting__GetStatLabels(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  
  if (DAT_05705029 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GetStatLabels_d__17);
    DAT_05705029 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetStatLabels_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].monitor = iVar1;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 3,__this);
    return (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


