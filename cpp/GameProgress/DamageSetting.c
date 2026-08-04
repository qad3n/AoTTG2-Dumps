// Type: GameProgress.DamageSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/DamageSetting.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/DamageSetting.cs
// --------------------------------

// GameProgress.DamageSetting.<>c$$.cctor
// il2cpp: void GameProgress_DamageSetting___c___cctor (const MethodInfo* method);
// 0x453bae0

void GameProgress_DamageSetting___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aef05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aef05 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameProgress.DamageSetting.<>c$$.ctor
// il2cpp: void GameProgress_DamageSetting___c___ctor (GameProgress_DamageSetting___c_o* __this, const MethodInfo* method);
// 0x453bb50

void GameProgress_DamageSetting___c___ctor(GameProgress_DamageSetting___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_0
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_0 (GameProgress_DamageSetting___c_o* __this, int32_t w, const MethodInfo* method);
// 0x453bb60

System_String_o *
GameProgress_DamageSetting___c____cctor_b__5_0
          (GameProgress_DamageSetting___c_o *__this,int32_t w,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (g_data_057aef06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
    g_data_057aef06 = '\x01';
  }
  local_20.klass = TypeInfo_KillWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = w;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.DamageSetting.<>c$$<.cctor>b__5_1
// il2cpp: System_String_o* GameProgress_DamageSetting___c____cctor_b__5_1 (GameProgress_DamageSetting___c_o* __this, System_String_o* k, const MethodInfo* method);
// 0x453bbc0

System_String_o *
GameProgress_DamageSetting___c____cctor_b__5_1
          (GameProgress_DamageSetting___c_o *__this,System_String_o *k,MethodInfo *method)

{
  return k;
}


// GameProgress.DamageSetting.<>c$$<GetStatLabels>b__17_0
// il2cpp: bool GameProgress_DamageSetting___c___GetStatLabels_b__17_0 (GameProgress_DamageSetting___c_o* __this, System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp, const MethodInfo* method);
// 0x453bbd0

bool_conflict
GameProgress_DamageSetting___c___GetStatLabels_b__17_0
          (GameProgress_DamageSetting___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__JSONNode__o kvp,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aef07 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&"Overall");
    g_data_057aef07 = '\x01';
  }
  bVar1 = System_String__op_Inequality(kvp.fields.key,"Overall",(MethodInfo *)0x0);
  return bVar1;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$.ctor
// il2cpp: void GameProgress_DamageSetting___c__DisplayClass5_0___ctor (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x453ad10

void GameProgress_DamageSetting___c__DisplayClass5_0___ctor
               (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__2
// il2cpp: int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__2 (GameProgress_DamageSetting___c__DisplayClass5_0_o* __this, System_String_o* v, const MethodInfo* method);
// 0x453bc20

int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__2
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
// 0x453bc30

int32_t GameProgress_DamageSetting___c__DisplayClass5_0____cctor_b__3
                  (GameProgress_DamageSetting___c__DisplayClass5_0_o *__this,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o lhs,
                  System_Collections_Generic_KeyValuePair_string__JSONNode__o rhs,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  byte bVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  int32_t extraout_EAX;
  byte bVar6;
  int32_t iVar7;
  System_String_o *strB;
  undefined8 unaff_RBX;
  System_String_o *strA;
  long lVar8;
  Il2CppObject *unaff_R12;
  int iVar9;
  int iVar10;
  
  strB = rhs.fields.key;
  strA = lhs.fields.key;
  if (g_data_057aef08 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue,strA,lhs.fields.value,strB,rhs.fields.value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    g_data_057aef08 = '\x01';
  }
  iVar10 = 0;
  iVar9 = 0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).orderByString;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                      (pSVar2,(Il2CppObject *)strB,(int32_t *)&stack0xffffffffffffffd4,MethodInfo_Boolean_TryGetValue);
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).orderByString;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                        (pSVar2,(Il2CppObject *)strA,(int32_t *)&stack0xffffffffffffffd0,MethodInfo_Boolean_TryGetValue);
      bVar3 = (byte)bVar5;
      bVar6 = (byte)bVar4;
      if ((bVar6 & bVar3) == 1) {
        iVar7 = iVar10 - iVar9;
      }
      else {
        iVar7 = 1;
        if (((byte)(bVar6 ^ 1 | bVar3) == 1) && (iVar7 = -1, (byte)(bVar6 | bVar3 ^ 1) == 1)) {
          iVar7 = System_String__Compare(strA,strB,(MethodInfo *)0x0);
        }
      }
      return iVar7;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  iVar1 = *(int *)(lVar8 + 0x10);
  if (iVar1 < -2) {
    if (iVar1 == -4) goto label_0453bd60;
    if (iVar1 != -3) {
      return iVar1;
    }
  }
  else {
    if (iVar1 == 4) {
label_0453bd60:
      if (g_data_057aef0b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057aef0b = '\x01';
      }
      goto label_0453bd7c;
    }
    if (iVar1 != 2) {
      return iVar1;
    }
  }
  if (g_data_057aef0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef0a = '\x01';
  }
label_0453bd7c:
  *(undefined4 *)(lVar8 + 0x10) = 0xffffffff;
  __this_00.fields._list._4_4_ = iVar10;
  __this_00.fields._list._0_4_ = iVar9;
  __this_00.fields._index = (int)unaff_RBX;
  __this_00.fields._version = (int)((ulong)unaff_RBX >> 0x20);
  __this_00.fields._current = unaff_R12;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            (__this_00,(MethodInfo_31F77C0 *)(lVar8 + 0x40));
  return extraout_EAX;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$.ctor
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17___ctor (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x453bab0

void GameProgress_DamageSetting__GetStatLabels_d__17___ctor
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
// 0x453bd20

void GameProgress_DamageSetting__GetStatLabels_d__17__System_IDisposable_Dispose
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 < -2) {
    if (iVar1 == -4) goto label_0453bd60;
    if (iVar1 != -3) {
      return;
    }
  }
  else {
    if (iVar1 == 4) {
label_0453bd60:
      if (g_data_057aef0b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057aef0b = '\x01';
      }
      goto label_0453bd7c;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  if (g_data_057aef0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef0a = '\x01';
  }
label_0453bd7c:
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_31F77C0 *)&(__this->fields).__7__wrap2);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$MoveNext
// il2cpp: bool GameProgress_DamageSetting__GetStatLabels_d__17__MoveNext (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453bda0

bool_conflict
GameProgress_DamageSetting__GetStatLabels_d__17__MoveNext
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  GameProgress_DamageSetting_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_T__o __this_05;
  System_Collections_Generic_List_Enumerator_T__o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  System_Collections_Generic_List_Enumerator_T__o __this_11;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__JSONNode___o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *pSVar5;
  uint64_t uVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *pGVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_Comparison_T__o *comparison;
  MethodInfo *method_00;
  MethodInfo_2BBB0A0 *in_R8;
  undefined1 auVar15 [12];
  System_ValueTuple_ulong__ulong__o SVar16;
  undefined1 auVar17 [16];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  System_ValueTuple_object__object__o __this_12;
  System_ValueTuple_object__object__o __this_13;
  System_ValueTuple_object__object__o __this_14;
  System_ValueTuple_object__object__o __this_15;
  System_ValueTuple_object__object__o __this_16;
  System_ValueTuple_object__object__o __this_17;
  undefined8 in_stack_ffffffffffffff08;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *pGVar19;
  int32_t in_stack_ffffffffffffff18;
  undefined4 uVar20;
  undefined4 in_stack_ffffffffffffff1c;
  undefined4 uVar21;
  int32_t in_stack_ffffffffffffff20;
  undefined4 uVar22;
  int32_t in_stack_ffffffffffffff24;
  undefined4 uVar23;
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
  int32_t iStack_98;
  undefined4 uStack_94;
  int32_t iStack_90;
  int32_t iStack_8c;
  int32_t iStack_88;
  undefined4 uStack_84;
  int32_t iStack_80;
  int32_t iStack_7c;
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
  
  pGVar19 = __this;
  if (g_data_057aef09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DamageSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_String_SimpleJSONFixed_JSON);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_SimpleJ);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetStatLabels_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_String_String);
    il2cpp_runtime_helper_023445d0(&"Total ");
    il2cpp_runtime_helper_023445d0(&"Total Overall");
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Highest ");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"Highest Overall");
    il2cpp_runtime_helper_023445d0(&"Highest");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057aef09 = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (4 < uVar1) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameProgress_DamageSetting_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0453c1b1:
      il2cpp_runtime_helper_022b2c90();
      goto label_0453c1b6;
    }
    pSVar14 = (__this_00->fields).root;
    if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0453c1b1;
    source = SimpleJSONFixed_JSONNode__get_Linq(pSVar14,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    pGVar10 = pGVar19;
    if (predicate == (System_Func_TSource__bool__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_JSONNode_bool);
      System_Func_KeyValuePair_object__object___bool____ctor();
      lVar13 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__bool__o **)(lVar13 + 8) = predicate;
      il2cpp_runtime_helper_022b4080(lVar13 + 8,predicate);
    }
    source_00 = System_Linq_Enumerable__Where_KeyValuePair_object__object__
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_KeyValuePair_2_System_String_SimpleJSONFix)
    ;
    pSVar5 = (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)
             System_Linq_Enumerable__ToList_KeyValuePair_object__object__(source_00,MethodInfo_List_1_KeyValuePair_2_System_String_SimpleJSONFixed_JSON);
    if (pGVar19 == (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0) goto label_0453c1c0;
    (pGVar19->fields)._rootPairs_5__2 = pSVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar19->fields)._rootPairs_5__2,pSVar5);
    pSVar5 = (pGVar10->fields)._rootPairs_5__2;
    if (*(int *)(TypeInfo_DamageSetting + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar5 != (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
      comparison = (System_Comparison_T__o *)**(undefined8 **)(TypeInfo_DamageSetting + 0xb8);
      System_Collections_Generic_List_KeyValuePair_object__object____Sort_352ea90
                ((System_Collections_Generic_List_T__o *)pSVar5,comparison,MethodInfo_Void_Sort);
      SVar16 = GameProgress_DamageSetting__get_Overall(__this_00,(MethodInfo *)comparison);
      pSVar8 = Utility_Format__Suffix(SVar16.fields.Item1,(MethodInfo *)0x0);
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      __this_12.fields.Item2 = "Highest Overall";
      __this_12.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
      System_ValueTuple_object__object____ctor(__this_12,(Il2CppObject *)pSVar8,MethodInfo_ValueTuple_2_String_String,in_R8);
      *(undefined4 *)&(pGVar10->fields).__2__current.fields.Item1 = uVar20;
      *(undefined4 *)((long)&(pGVar10->fields).__2__current.fields.Item1 + 4) = uVar21;
      *(undefined4 *)&(pGVar10->fields).__2__current.fields.Item2 = uVar22;
      *(undefined4 *)((long)&(pGVar10->fields).__2__current.fields.Item2 + 4) = uVar23;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).__2__current,0);
      (pGVar10->fields).__1__state = 1;
      goto label_0453cc54;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar5 = (__this->fields)._rootPairs_5__2;
    pGVar10 = pGVar19;
    if (pSVar5 == (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) goto label_0453c1bb;
    System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
              (&SStack_78,(System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_SimpleJ);
    *(int32_t *)&(pGVar19->fields).__7__wrap2.fields._current.fields.key = (int32_t)SStack_78.fields._current;
    *(int32_t *)((long)&(pGVar19->fields).__7__wrap2.fields._current.fields.key + 4) =
         SStack_78.fields._current._4_4_;
    *(undefined4 *)&(pGVar19->fields).__7__wrap2.fields._current.fields.value = uStack_60;
    *(undefined4 *)((long)&(pGVar19->fields).__7__wrap2.fields._current.fields.value + 4) = uStack_5c;
    *(int32_t *)&(pGVar19->fields).__7__wrap2.fields._list = (int32_t)SStack_78.fields._list;
    *(undefined4 *)((long)&(pGVar19->fields).__7__wrap2.fields._list + 4) = SStack_78.fields._list._4_4_;
    (pGVar19->fields).__7__wrap2.fields._index = SStack_78.fields._index;
    (pGVar19->fields).__7__wrap2.fields._version = SStack_78.fields._version;
    in_stack_ffffffffffffff18 = (int32_t)SStack_78.fields._list;
    in_stack_ffffffffffffff1c = SStack_78.fields._list._4_4_;
    in_stack_ffffffffffffff20 = SStack_78.fields._index;
    in_stack_ffffffffffffff24 = SStack_78.fields._version;
    il2cpp_runtime_helper_022b4080(&(pGVar19->fields).__7__wrap2,0);
    (pGVar19->fields).__1__state = -3;
    __this = pGVar19;
    while (__this_01.fields._8_8_ = __this,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08,
          __this_01.fields._current._0_4_ = in_stack_ffffffffffffff18,
          __this_01.fields._current._4_4_ = in_stack_ffffffffffffff1c,
          bVar4 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                            (__this_01,(MethodInfo_31F77D0 *)&(__this->fields).__7__wrap2),
          (char)bVar4 != '\0') {
      auVar17 = il2cpp_runtime_helper_03f08300(&(__this->fields).__7__wrap2,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
      plVar11 = auVar17._8_8_;
      (__this->fields)._weapon_5__4 = auVar17._0_8_;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._weapon_5__4,auVar17._0_8_);
      if (plVar11 == (long *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pGVar10 = __this;
label_0453c6e2:
        il2cpp_runtime_helper_022b2c90();
        goto label_0453c6e7;
      }
      (**(code **)(*plVar11 + 0x338))(&SStack_78,plVar11,*(undefined8 *)(*plVar11 + 0x340));
      (__this->fields).__7__wrap4.fields.m_Array.fields._current = pSStack_38;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Array.fields._list = uStack_48;
      *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Array.fields._list + 4) = uStack_44;
      (__this->fields).__7__wrap4.fields.m_Array.fields._index = iStack_40;
      (__this->fields).__7__wrap4.fields.m_Array.fields._version = iStack_3c;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = uStack_58;
      *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value + 4) =
           uStack_54;
      (__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = iStack_50;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields.field_0x24 = uStack_4c;
      (__this->fields).__7__wrap4.fields.m_Object.fields._version = (int32_t)SStack_78.fields._current;
      (__this->fields).__7__wrap4.fields.m_Object.fields._index = SStack_78.fields._current._4_4_;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = uStack_60;
      *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key + 4) =
           uStack_5c;
      (__this->fields).__7__wrap4.fields.type = (int32_t)SStack_78.fields._list;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.field_0x4 = SStack_78.fields._list._4_4_;
      *(int32_t *)&(__this->fields).__7__wrap4.fields.m_Object.fields._dictionary = SStack_78.fields._index;
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
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap4.fields.m_Object,0);
      pGVar19 = __this;
label_0453c3d2:
      __this_07.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar19;
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
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar19;
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
        SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_08,(MethodInfo *)&(pGVar19->fields).__7__wrap4);
        pSVar14 = SVar18.fields.value;
        pSVar8 = SVar18.fields.key;
        pGVar10 = pGVar19;
        if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0453c6e2;
        plVar11 = (long *)(*(pSVar14->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar14,"Highest",(pSVar14->klass->vtable)._7_get_Item.method);
        pGVar10 = pGVar19;
        if (plVar11 == (long *)0x0) goto label_0453c6ec;
        uVar6 = (**(code **)(*plVar11 + 1000))(plVar11);
        pSVar7 = Utility_Format__Suffix(uVar6,(MethodInfo *)0x0);
        bVar4 = System_String__op_Equality(pSVar8,"None",(MethodInfo *)0x0);
        pGVar10 = pGVar19;
        if ((char)bVar4 == '\0') {
          pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
          if (pSVar9 == (System_String_array *)0x0) goto label_0453c6f1;
          if ((int)pSVar9->max_length == 0) goto label_0453c6f6;
          pSVar9->m_Items[0] = "Highest ";
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items);
          if ((uint)pSVar9->max_length < 2) goto label_0453c6fb;
          pSVar9->m_Items[1] = (pGVar10->fields)._weapon_5__4;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 1);
          if ((uint)pSVar9->max_length < 3) goto label_0453c700;
          pSVar9->m_Items[2] = " (";
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 2);
          if ((uint)pSVar9->max_length < 4) goto label_0453c705;
          pSVar9->m_Items[3] = pSVar8;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 3,pSVar8);
          if ((uint)pSVar9->max_length < 5) goto label_0453c70a;
          pSVar9->m_Items[4] = ")";
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 4);
          pSVar8 = System_String__Concat_3af7570(pSVar9,(MethodInfo *)0x0);
          in_stack_ffffffffffffff18 = 0;
          in_stack_ffffffffffffff1c = 0;
          in_stack_ffffffffffffff20 = 0;
          in_stack_ffffffffffffff24 = 0;
          __this_15.fields.Item2 = (Il2CppObject *)pSVar8;
          __this_15.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
          System_ValueTuple_object__object____ctor(__this_15,(Il2CppObject *)pSVar7,MethodInfo_ValueTuple_2_String_String,in_R8);
          iStack_88 = in_stack_ffffffffffffff18;
          uStack_84 = in_stack_ffffffffffffff1c;
          iStack_80 = in_stack_ffffffffffffff20;
          iStack_7c = in_stack_ffffffffffffff24;
          if (pGVar19 == (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0) goto label_0453c70f;
        }
        else {
          pSVar8 = System_String__Concat_3ae5ba0
                             ("Highest ",(pGVar19->fields)._weapon_5__4,(MethodInfo *)0x0);
          iStack_88 = 0;
          uStack_84 = 0;
          iStack_80 = 0;
          iStack_7c = 0;
          __this_14.fields.Item2 = (Il2CppObject *)pSVar8;
          __this_14.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
          System_ValueTuple_object__object____ctor(__this_14,(Il2CppObject *)pSVar7,MethodInfo_ValueTuple_2_String_String,in_R8);
        }
        *(int32_t *)&(pGVar19->fields).__2__current.fields.Item1 = iStack_88;
        *(undefined4 *)((long)&(pGVar19->fields).__2__current.fields.Item1 + 4) = uStack_84;
        *(int32_t *)&(pGVar19->fields).__2__current.fields.Item2 = iStack_80;
        *(int32_t *)((long)&(pGVar19->fields).__2__current.fields.Item2 + 4) = iStack_7c;
        il2cpp_runtime_helper_022b4080(&(pGVar19->fields).__2__current,0);
        (pGVar10->fields).__1__state = 2;
        goto label_0453cc54;
      }
      pSVar3 = &(pGVar19->fields).__7__wrap4;
      (pSVar3->fields).m_Array.fields._index = 0;
      (pSVar3->fields).m_Array.fields._version = 0;
      (pGVar19->fields).__7__wrap4.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
      *(undefined8 *)&(pGVar19->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = 0;
      (pGVar19->fields).__7__wrap4.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pGVar19->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
      (pGVar19->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
      (pGVar19->fields).__7__wrap4.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      pSVar3 = &(pGVar19->fields).__7__wrap4;
      (pSVar3->fields).m_Object.fields._version = 0;
      (pSVar3->fields).m_Object.fields._index = 0;
      (pGVar19->fields)._weapon_5__4 = (System_String_o *)0x0;
      *(undefined8 *)&(pGVar19->fields).__7__wrap4.fields = 0;
      il2cpp_runtime_helper_022b4080(&(pGVar19->fields)._weapon_5__4,0);
      __this = pGVar19;
    }
    pGVar10 = __this;
    if (g_data_057aef0a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057aef0a = '\x01';
    }
    (__this->fields).__1__state = -1;
    __this_02.fields._8_8_ = pGVar10;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_02.fields._current._0_4_ = in_stack_ffffffffffffff18;
    __this_02.fields._current._4_4_ = in_stack_ffffffffffffff1c;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
              (__this_02,(MethodInfo_31F77C0 *)&(__this->fields).__7__wrap2);
    (pGVar10->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)0x0;
    (pGVar10->fields).__7__wrap2.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
    (pGVar10->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (pGVar10->fields).__7__wrap2.fields._index = 0;
    (pGVar10->fields).__7__wrap2.fields._version = 0;
    if (__this_00 != (GameProgress_DamageSetting_o *)0x0) {
      SVar16 = GameProgress_DamageSetting__get_Overall(__this_00,method_00);
      pSVar8 = Utility_Format__Suffix(SVar16.fields.Item2,(MethodInfo *)0x0);
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      __this_13.fields.Item2 = "Total Overall";
      __this_13.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
      System_ValueTuple_object__object____ctor(__this_13,(Il2CppObject *)pSVar8,MethodInfo_ValueTuple_2_String_String,in_R8);
      *(undefined4 *)&(pGVar10->fields).__2__current.fields.Item1 = uVar20;
      *(undefined4 *)((long)&(pGVar10->fields).__2__current.fields.Item1 + 4) = uVar21;
      *(undefined4 *)&(pGVar10->fields).__2__current.fields.Item2 = uVar22;
      *(undefined4 *)((long)&(pGVar10->fields).__2__current.fields.Item2 + 4) = uVar23;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).__2__current,0);
      (pGVar10->fields).__1__state = 3;
label_0453cc54:
      return (bool_conflict)CONCAT71((int7)((ulong)pGVar10 >> 8),1);
    }
label_0453c6e7:
    il2cpp_runtime_helper_022b2c90();
label_0453c6ec:
    il2cpp_runtime_helper_022b2c90();
label_0453c6f1:
    il2cpp_runtime_helper_022b2c90();
label_0453c6f6:
    il2cpp_runtime_helper_022b2ca0();
label_0453c6fb:
    il2cpp_runtime_helper_022b2ca0();
label_0453c700:
    il2cpp_runtime_helper_022b2ca0();
label_0453c705:
    il2cpp_runtime_helper_022b2ca0();
label_0453c70a:
    il2cpp_runtime_helper_022b2ca0();
label_0453c70f:
    auVar15 = il2cpp_runtime_helper_022b2c90();
    goto joined_r0x0453cca0;
  case 2:
    (__this->fields).__1__state = -3;
    goto label_0453c3d2;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar5 = (__this->fields)._rootPairs_5__2;
    if (pSVar5 != (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o *)0x0) {
      System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
                (&SStack_78,(System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_SimpleJ);
      *(int32_t *)&(pGVar19->fields).__7__wrap2.fields._current.fields.key =
           (int32_t)SStack_78.fields._current;
      *(int32_t *)((long)&(pGVar19->fields).__7__wrap2.fields._current.fields.key + 4) =
           SStack_78.fields._current._4_4_;
      *(undefined4 *)&(pGVar19->fields).__7__wrap2.fields._current.fields.value = uStack_60;
      *(undefined4 *)((long)&(pGVar19->fields).__7__wrap2.fields._current.fields.value + 4) = uStack_5c;
      *(int32_t *)&(pGVar19->fields).__7__wrap2.fields._list = (int32_t)SStack_78.fields._list;
      *(undefined4 *)((long)&(pGVar19->fields).__7__wrap2.fields._list + 4) = SStack_78.fields._list._4_4_;
      (pGVar19->fields).__7__wrap2.fields._index = SStack_78.fields._index;
      (pGVar19->fields).__7__wrap2.fields._version = SStack_78.fields._version;
      in_stack_ffffffffffffff18 = (int32_t)SStack_78.fields._list;
      in_stack_ffffffffffffff1c = SStack_78.fields._list._4_4_;
      in_stack_ffffffffffffff20 = SStack_78.fields._index;
      in_stack_ffffffffffffff24 = SStack_78.fields._version;
      il2cpp_runtime_helper_022b4080(&(pGVar19->fields).__7__wrap2,0);
      (pGVar19->fields).__1__state = -4;
      __this = pGVar19;
      while( true ) {
        __this_03.fields._8_8_ = __this;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
        __this_03.fields._current._0_4_ = in_stack_ffffffffffffff18;
        __this_03.fields._current._4_4_ = in_stack_ffffffffffffff1c;
        bVar4 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                          (__this_03,(MethodInfo_31F77D0 *)&(__this->fields).__7__wrap2);
        if ((char)bVar4 == '\0') {
          pGVar19 = __this;
          if (g_data_057aef0b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            g_data_057aef0b = '\x01';
          }
          (__this->fields).__1__state = -1;
          __this_04.fields._8_8_ = pGVar19;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
          __this_04.fields._current._0_4_ = in_stack_ffffffffffffff18;
          __this_04.fields._current._4_4_ = in_stack_ffffffffffffff1c;
          System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                    (__this_04,(MethodInfo_31F77C0 *)&(__this->fields).__7__wrap2);
          (pGVar19->fields).__7__wrap2.fields._current.fields.key = (System_String_o *)0x0;
          (pGVar19->fields).__7__wrap2.fields._current.fields.value = (SimpleJSONFixed_JSONNode_o *)0x0;
          (pGVar19->fields).__7__wrap2.fields._list = (System_Collections_Generic_List_T__o *)0x0;
          (pGVar19->fields).__7__wrap2.fields._index = 0;
          (pGVar19->fields).__7__wrap2.fields._version = 0;
          return 0;
        }
        auVar17 = il2cpp_runtime_helper_03f08300(&(__this->fields).__7__wrap2,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONNode_ge);
        plVar11 = auVar17._8_8_;
        (__this->fields)._weapon_5__4 = auVar17._0_8_;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._weapon_5__4,auVar17._0_8_);
        if (plVar11 == (long *)0x0) break;
        (**(code **)(*plVar11 + 0x338))(&SStack_78,plVar11,*(undefined8 *)(*plVar11 + 0x340));
        (__this->fields).__7__wrap4.fields.m_Array.fields._current = pSStack_38;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Array.fields._list = uStack_48;
        *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Array.fields._list + 4) = uStack_44;
        (__this->fields).__7__wrap4.fields.m_Array.fields._index = iStack_40;
        (__this->fields).__7__wrap4.fields.m_Array.fields._version = iStack_3c;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = uStack_58;
        *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.value + 4) =
             uStack_54;
        (__this->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = iStack_50;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields.field_0x24 = uStack_4c;
        (__this->fields).__7__wrap4.fields.m_Object.fields._version = (int32_t)SStack_78.fields._current;
        (__this->fields).__7__wrap4.fields.m_Object.fields._index = SStack_78.fields._current._4_4_;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = uStack_60;
        *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields.m_Object.fields._current.fields.key + 4) =
             uStack_5c;
        (__this->fields).__7__wrap4.fields.type = (int32_t)SStack_78.fields._list;
        *(undefined4 *)&(__this->fields).__7__wrap4.fields.field_0x4 = SStack_78.fields._list._4_4_;
        *(int32_t *)&(__this->fields).__7__wrap4.fields.m_Object.fields._dictionary = SStack_78.fields._index;
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
        il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap4.fields.m_Object,0);
        pGVar19 = __this;
label_0453c9b5:
        __this_09.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar19;
        __this_09.fields._0_8_ = in_stack_ffffffffffffff08;
        __this_09.fields.m_Object.fields._version = in_stack_ffffffffffffff18;
        __this_09.fields.m_Object.fields._index = in_stack_ffffffffffffff1c;
        __this_09.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff20;
        __this_09.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff24;
        __this_09.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_ffffffffffffff28;
        __this_09.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_ffffffffffffff2c;
        __this_09.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff30;
        __this_09.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff34;
        __this_09.fields.m_Array.fields._list._0_4_ = in_stack_ffffffffffffff38;
        __this_09.fields.m_Array.fields._list._4_4_ = in_stack_ffffffffffffff3c;
        __this_09.fields.m_Array.fields._index = in_stack_ffffffffffffff40;
        __this_09.fields.m_Array.fields._version = in_stack_ffffffffffffff44;
        __this_09.fields.m_Array.fields._current._0_4_ = in_stack_ffffffffffffff48;
        __this_09.fields.m_Array.fields._current._4_4_ = in_stack_ffffffffffffff4c;
        bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_09,(MethodInfo *)&(__this->fields).__7__wrap4);
        if ((char)bVar4 != '\0') {
          __this_10.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar19;
          __this_10.fields._0_8_ = in_stack_ffffffffffffff08;
          __this_10.fields.m_Object.fields._version = in_stack_ffffffffffffff18;
          __this_10.fields.m_Object.fields._index = in_stack_ffffffffffffff1c;
          __this_10.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_ffffffffffffff20;
          __this_10.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_ffffffffffffff24;
          __this_10.fields.m_Object.fields._current.fields.value._0_4_ = in_stack_ffffffffffffff28;
          __this_10.fields.m_Object.fields._current.fields.value._4_4_ = in_stack_ffffffffffffff2c;
          __this_10.fields.m_Object.fields._getEnumeratorRetType = in_stack_ffffffffffffff30;
          __this_10.fields.m_Object.fields._36_4_ = in_stack_ffffffffffffff34;
          __this_10.fields.m_Array.fields._list._0_4_ = in_stack_ffffffffffffff38;
          __this_10.fields.m_Array.fields._list._4_4_ = in_stack_ffffffffffffff3c;
          __this_10.fields.m_Array.fields._index = in_stack_ffffffffffffff40;
          __this_10.fields.m_Array.fields._version = in_stack_ffffffffffffff44;
          __this_10.fields.m_Array.fields._current._0_4_ = in_stack_ffffffffffffff48;
          __this_10.fields.m_Array.fields._current._4_4_ = in_stack_ffffffffffffff4c;
          SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_10,(MethodInfo *)&(pGVar19->fields).__7__wrap4);
          pSVar14 = SVar18.fields.value;
          pSVar8 = SVar18.fields.key;
          if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0453cc6d;
          plVar11 = (long *)(*(pSVar14->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar14,"Total",(pSVar14->klass->vtable)._7_get_Item.method);
          pGVar10 = pGVar19;
          if (plVar11 == (long *)0x0) goto label_0453cc72;
          uVar6 = (**(code **)(*plVar11 + 1000))(plVar11);
          pSVar7 = Utility_Format__Suffix(uVar6,(MethodInfo *)0x0);
          bVar4 = System_String__op_Equality(pSVar8,"None",(MethodInfo *)0x0);
          pGVar10 = pGVar19;
          if ((char)bVar4 == '\0') {
            pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
            if (pSVar9 == (System_String_array *)0x0) goto label_0453cc77;
            if ((int)pSVar9->max_length == 0) goto label_0453cc7c;
            pSVar9->m_Items[0] = "Total ";
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items);
            if ((uint)pSVar9->max_length < 2) goto label_0453cc81;
            pSVar9->m_Items[1] = (pGVar10->fields)._weapon_5__4;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 1);
            if ((uint)pSVar9->max_length < 3) goto label_0453cc86;
            pSVar9->m_Items[2] = " (";
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 2);
            if ((uint)pSVar9->max_length < 4) goto label_0453cc8b;
            pSVar9->m_Items[3] = pSVar8;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 3,pSVar8);
            if ((uint)pSVar9->max_length < 5) goto label_0453cc90;
            pSVar9->m_Items[4] = ")";
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 4);
            pSVar8 = System_String__Concat_3af7570(pSVar9,(MethodInfo *)0x0);
            in_stack_ffffffffffffff18 = 0;
            in_stack_ffffffffffffff1c = 0;
            in_stack_ffffffffffffff20 = 0;
            in_stack_ffffffffffffff24 = 0;
            __this_17.fields.Item2 = (Il2CppObject *)pSVar8;
            __this_17.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
            System_ValueTuple_object__object____ctor(__this_17,(Il2CppObject *)pSVar7,MethodInfo_ValueTuple_2_String_String,in_R8);
            iStack_98 = in_stack_ffffffffffffff18;
            uStack_94 = in_stack_ffffffffffffff1c;
            iStack_90 = in_stack_ffffffffffffff20;
            iStack_8c = in_stack_ffffffffffffff24;
            if (pGVar19 != (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0) goto label_0453cc2f;
            goto label_0453cc95;
          }
          pSVar8 = System_String__Concat_3ae5ba0
                             ("Total ",(pGVar19->fields)._weapon_5__4,(MethodInfo *)0x0);
          iStack_98 = 0;
          uStack_94 = 0;
          iStack_90 = 0;
          iStack_8c = 0;
          __this_16.fields.Item2 = (Il2CppObject *)pSVar8;
          __this_16.fields.Item1 = (Il2CppObject *)&stack0xffffffffffffff18;
          System_ValueTuple_object__object____ctor(__this_16,(Il2CppObject *)pSVar7,MethodInfo_ValueTuple_2_String_String,in_R8);
label_0453cc2f:
          *(int32_t *)&(pGVar19->fields).__2__current.fields.Item1 = iStack_98;
          *(undefined4 *)((long)&(pGVar19->fields).__2__current.fields.Item1 + 4) = uStack_94;
          *(int32_t *)&(pGVar19->fields).__2__current.fields.Item2 = iStack_90;
          *(int32_t *)((long)&(pGVar19->fields).__2__current.fields.Item2 + 4) = iStack_8c;
          il2cpp_runtime_helper_022b4080(&(pGVar19->fields).__2__current,0);
          (pGVar10->fields).__1__state = 4;
          goto label_0453cc54;
        }
        pSVar3 = &(pGVar19->fields).__7__wrap4;
        (pSVar3->fields).m_Array.fields._index = 0;
        (pSVar3->fields).m_Array.fields._version = 0;
        (pGVar19->fields).__7__wrap4.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
        *(undefined8 *)&(pGVar19->fields).__7__wrap4.fields.m_Object.fields._getEnumeratorRetType = 0;
        (pGVar19->fields).__7__wrap4.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0
        ;
        (pGVar19->fields).__7__wrap4.fields.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
        (pGVar19->fields).__7__wrap4.fields.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
        (pGVar19->fields).__7__wrap4.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        pSVar3 = &(pGVar19->fields).__7__wrap4;
        (pSVar3->fields).m_Object.fields._version = 0;
        (pSVar3->fields).m_Object.fields._index = 0;
        (pGVar19->fields)._weapon_5__4 = (System_String_o *)0x0;
        *(undefined8 *)&(pGVar19->fields).__7__wrap4.fields = 0;
        il2cpp_runtime_helper_022b4080(&(pGVar19->fields)._weapon_5__4,0);
        __this = pGVar19;
      }
      il2cpp_runtime_helper_022b2c90();
      pGVar19 = __this;
label_0453cc6d:
      il2cpp_runtime_helper_022b2c90();
      pGVar10 = pGVar19;
label_0453cc72:
      il2cpp_runtime_helper_022b2c90();
label_0453cc77:
      il2cpp_runtime_helper_022b2c90();
label_0453cc7c:
      il2cpp_runtime_helper_022b2ca0();
label_0453cc81:
      il2cpp_runtime_helper_022b2ca0();
label_0453cc86:
      il2cpp_runtime_helper_022b2ca0();
label_0453cc8b:
      il2cpp_runtime_helper_022b2ca0();
label_0453cc90:
      il2cpp_runtime_helper_022b2ca0();
label_0453cc95:
      auVar15 = il2cpp_runtime_helper_022b2c90();
      goto joined_r0x0453cca0;
    }
label_0453c1b6:
    il2cpp_runtime_helper_022b2c90();
    pGVar10 = pGVar19;
label_0453c1bb:
    il2cpp_runtime_helper_022b2c90();
label_0453c1c0:
    il2cpp_runtime_helper_022b2c90();
    break;
  case 4:
    (__this->fields).__1__state = -4;
    goto label_0453c9b5;
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
joined_r0x0453cca0:
  uVar12 = auVar15._0_8_;
  if (auVar15._8_4_ != 1) {
label_0453ce15:
    _Unwind_Resume(uVar12);
  }
  plVar11 = (long *)__cxa_begin_catch(uVar12);
  lVar13 = *plVar11;
  __cxa_end_catch();
  if (lVar13 == 0) {
    return 0;
  }
  il2cpp_runtime_helper_022373f0(pGVar10);
  uVar12 = il2cpp_runtime_helper_022fefe0(lVar13);
  if (lVar13 == 0) goto label_0453ce15;
  iVar2 = (pGVar10->fields).__1__state;
  if (iVar2 < -2) {
    if (iVar2 == -4) goto label_0453ce7d;
    if (iVar2 != -3) goto label_0453ceb7;
  }
  else {
    if (iVar2 == 4) {
label_0453ce7d:
      pGVar19 = pGVar10;
      if (g_data_057aef0b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057aef0b = '\x01';
      }
      (pGVar10->fields).__1__state = -1;
      __this_06.fields._8_8_ = pGVar19;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_06.fields._current._0_4_ = in_stack_ffffffffffffff18;
      __this_06.fields._current._4_4_ = in_stack_ffffffffffffff1c;
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                (__this_06,(MethodInfo_31F77C0 *)&(pGVar10->fields).__7__wrap2);
      pGVar10 = pGVar19;
      goto label_0453ceb7;
    }
    if (iVar2 != 2) goto label_0453ceb7;
  }
  pGVar19 = pGVar10;
  if (g_data_057aef0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef0a = '\x01';
  }
  (pGVar10->fields).__1__state = -1;
  __this_05.fields._8_8_ = pGVar19;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
  __this_05.fields._current._0_4_ = in_stack_ffffffffffffff18;
  __this_05.fields._current._4_4_ = in_stack_ffffffffffffff1c;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            (__this_05,(MethodInfo_31F77C0 *)&(pGVar10->fields).__7__wrap2);
  pGVar10 = pGVar19;
label_0453ceb7:
  lVar13 = il2cpp_runtime_helper_022fefe0(lVar13);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057aef0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef0a = '\x01';
  }
  *(undefined4 *)(lVar13 + 0x10) = 0xffffffff;
  __this_11.fields._index = in_stack_ffffffffffffff18;
  __this_11.fields._list = (System_Collections_Generic_List_T__o *)pGVar10;
  __this_11.fields._version = in_stack_ffffffffffffff1c;
  __this_11.fields._current._0_4_ = in_stack_ffffffffffffff20;
  __this_11.fields._current._4_4_ = in_stack_ffffffffffffff24;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            (__this_11,(MethodInfo_31F77C0 *)(lVar13 + 0x40));
  return extraout_EAX;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$<>m__Finally1
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17____m__Finally1 (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453ced0

void GameProgress_DamageSetting__GetStatLabels_d__17____m__Finally1
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057aef0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef0a = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_31F77C0 *)&(__this->fields).__7__wrap2);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$<>m__Finally2
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17____m__Finally2 (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453cf10

void GameProgress_DamageSetting__GetStatLabels_d__17____m__Finally2
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057aef0b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef0b = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_31F77C0 *)&(__this->fields).__7__wrap2);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.Generic.IEnumerator<(System.Stringtitle,System.Stringvalue)>.get_Current
// il2cpp: System_ValueTuple_string__string__o GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453cf50

System_ValueTuple_string__string__o
GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_Generic_IEnumerator__System_Stringtitle_System_Stringvalue___get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  return (System_ValueTuple_string__string__o)(__this->fields).__2__current.fields;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerator_Reset (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453cf60

void GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerator_Reset
               (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  System_NotSupportedException_o *pSStack_10;
  
  pSStack_10 = (System_NotSupportedException_o *)0x453cf6d;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_10 = (System_NotSupportedException_o *)0x453cf75;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_10 = (System_NotSupportedException_o *)0x453cf82;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_10 = (System_NotSupportedException_o *)0x453cf8e;
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  pSStack_10 = (System_NotSupportedException_o *)0x453cf99;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  pSStack_10 = __this_00;
  if (g_data_057aef0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ValueTuple_string_string);
    g_data_057aef0c = '\x01';
  }
  uStack_20 = *(undefined4 *)&(pSVar2->fields)._message;
  uStack_1c = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_18 = *(undefined4 *)&(pSVar2->fields)._data;
  uStack_14 = *(undefined4 *)((long)&(pSVar2->fields)._data + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_ValueTuple_string_string,&uStack_20);
  return;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerator_get_Current (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453cfa0

Il2CppObject *
GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerator_get_Current
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (g_data_057aef0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ValueTuple_string_string);
    g_data_057aef0c = '\x01';
  }
  local_18 = *(undefined4 *)&(__this->fields).__2__current.fields.Item1;
  uStack_14 = *(undefined4 *)((long)&(__this->fields).__2__current.fields.Item1 + 4);
  uStack_10 = *(undefined4 *)&(__this->fields).__2__current.fields.Item2;
  uStack_c = *(undefined4 *)((long)&(__this->fields).__2__current.fields.Item2 + 4);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_ValueTuple_string_string,&local_18);
  return pIVar1;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.Generic.IEnumerable<(System.Stringtitle,System.Stringvalue)>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453cff0

System_Collections_IEnumerator_o *
GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_Generic_IEnumerable__System_Stringtitle_System_Stringvalue___GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Il2CppObject *__this_00;
  undefined8 unaff_RBX;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *pGVar3;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *unaff_R14;
  
  while( true ) {
    pGVar3 = __this;
    *(GameProgress_DamageSetting__GetStatLabels_d__17_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aef0d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d00c;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef0d = '\x01';
    }
    if ((pGVar3->fields).__1__state == -2) {
      iVar1 = (pGVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d025;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pGVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pGVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d042;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetStatLabels_d__17);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d04f;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d05d;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].monitor = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d08c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pGVar3;
  }
  __this_00[3].klass = (Il2CppClass *)(pGVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d079;
  il2cpp_runtime_helper_022b4080(__this_00 + 3);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.DamageSetting.<GetStatLabels>d__17$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerable_GetEnumerator (GameProgress_DamageSetting__GetStatLabels_d__17_o* __this, const MethodInfo* method);
// 0x453d090

System_Collections_IEnumerator_o *
GameProgress_DamageSetting__GetStatLabels_d__17__System_Collections_IEnumerable_GetEnumerator
          (GameProgress_DamageSetting__GetStatLabels_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *pGVar3;
  GameProgress_DamageSetting__GetStatLabels_d__17_o *unaff_R14;
  
  while( true ) {
    pGVar3 = __this;
    *(GameProgress_DamageSetting__GetStatLabels_d__17_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aef0d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d00c;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef0d = '\x01';
    }
    if ((pGVar3->fields).__1__state == -2) {
      iVar1 = (pGVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d025;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pGVar3->fields).__1__state = 0;
        return (System_Collections_IEnumerator_o *)pGVar3;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d042;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetStatLabels_d__17);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d04f;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    __this = (GameProgress_DamageSetting__GetStatLabels_d__17_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d05d;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&__this_00[2].monitor = iVar2;
    if (__this_00 != (Il2CppObject *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d08c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pGVar3;
  }
  __this_00[3].klass = (Il2CppClass *)(pGVar3->fields).__4__this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453d079;
  il2cpp_runtime_helper_022b4080(__this_00 + 3);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.DamageSetting$$.cctor
// il2cpp: void GameProgress_DamageSetting___cctor (const MethodInfo* method);
// 0x453a960

void GameProgress_DamageSetting___cctor(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *__this;
  System_Type_o *enumType;
  Il2CppObject *__this_00;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *first;
  System_Object_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Func_TSource__TElement__o *elementSelector;
  System_Collections_Generic_Dictionary_TKey__TElement__o *pSVar2;
  undefined8 uVar3;
  
  if (g_data_057aeefd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_KeyValuePair_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DamageSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Concat_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_KillWeapon_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32_ToDictionary_Str);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KillWeapon_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSpecials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
    il2cpp_runtime_helper_023445d0(&TypeRef_KillWeapon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_cctor_b__5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_cctor_b__5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_cctor_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_cctor_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeefd = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  handle.fields.value = TypeRef_KillWeapon.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KillWeapon_string);
  pSVar1 = (System_Collections_Generic_IEnumerable_TSource__o *)0x0;
  System_Func_Int32Enum__object____ctor();
  if ((__this_00 == (Il2CppObject *)0x0) ||
     (pSVar1 = (System_Collections_Generic_IEnumerable_TSource__o *)il2cpp_runtime_helper_023051f0(__this_00,TypeInfo_KillWeapon)
     , pSVar1 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0)) {
    first = System_Linq_Enumerable__Select_Int32Enum__object_(pSVar1,selector,MethodInfo_IEnumerable_1_System_String_Select_KillWeapon_String);
    __this_00 = (Il2CppObject *)&TypeInfo_HumanSpecials;
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = System_Linq_Enumerable__Concat_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                        (System_Collections_Generic_IEnumerable_TSource__o *)
                        **(undefined8 **)(TypeInfo_HumanSpecials + 0xb8),MethodInfo_IEnumerable_1_System_String_Concat_String);
    pSVar1 = System_Linq_Enumerable__Concat_object_
                       (pSVar1,*(System_Collections_Generic_IEnumerable_TSource__o **)
                                (*(long *)(TypeInfo_HumanSpecials + 0xb8) + 8),MethodInfo_IEnumerable_1_System_String_Concat_String);
    pSVar1 = System_Linq_Enumerable__Concat_object_
                       (pSVar1,*(System_Collections_Generic_IEnumerable_TSource__o **)
                                (*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x10),MethodInfo_IEnumerable_1_System_String_Concat_String);
    pSVar1 = System_Linq_Enumerable__Concat_object_
                       (pSVar1,*(System_Collections_Generic_IEnumerable_TSource__o **)
                                (*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x18),MethodInfo_IEnumerable_1_System_String_Concat_String);
    source = System_Linq_Enumerable__ToArray_object_(pSVar1,MethodInfo_String_ToArray_String);
    if (__this != (Il2CppObject *)0x0) {
      *(undefined4 *)&__this[1].klass = 0;
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      elementSelector = (System_Func_TSource__TElement__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_int);
      System_Func_object__int____ctor();
      pSVar2 = System_Linq_Enumerable__ToDictionary_object__object__int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                          elementSelector,MethodInfo_Dictionary_2_System_String_System_Int32_ToDictionary_Str);
      __this[1].monitor = pSVar2;
      il2cpp_runtime_helper_022b4080(&__this[1].monitor,pSVar2);
      uVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_KeyValuePair_string_JSONNode);
      System_Comparison_KeyValuePair_object__object_____ctor();
      **(undefined8 **)(TypeInfo_DamageSetting + 0xb8) = uVar3;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DamageSetting + 0xb8),uVar3);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// GameProgress.DamageSetting$$get_Item
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x453ad20

System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Item(void)

{
  System_ValueTuple_ulong__ulong__Fields SVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  long *plVar5;
  uint64_t uVar6;
  uint64_t item1;
  System_String_o *in_RDX;
  uint64_t extraout_RDX;
  System_String_o *in_RDI;
  System_String_o *__this;
  MethodInfo_2BBBFB0 *in_R8;
  System_ValueTuple_ulong__ulong__o SVar7;
  System_ValueTuple_ulong__ulong__o __this_00;
  System_Enum_o SStack_78;
  undefined4 uStack_68;
  System_String_o *pSStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  System_String_o local_48;
  
  if (g_data_057aeefe == '\0') {
    pSStack_60 = (System_String_o *)0x453ad4c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    pSStack_60 = (System_String_o *)0x453ad58;
    il2cpp_runtime_helper_023445d0(&"Total");
    pSStack_60 = (System_String_o *)0x453ad64;
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aeefe = '\x01';
  }
  plVar5 = *(long **)&(in_RDI->fields)._stringLength;
  if (g_data_057aef20 == '\0') {
    pSStack_60 = (System_String_o *)0x453ad84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
    g_data_057aef20 = '\x01';
  }
  local_48.klass = TypeInfo_KillWeapon;
  local_48.monitor = (void *)0xffffffffffffffff;
  __this = &local_48;
  pSStack_60 = (System_String_o *)0x453adb5;
  pSVar4 = System_Enum__ToString((System_Enum_o *)__this,(MethodInfo *)0x0);
  if (plVar5 == (long *)0x0) goto label_0453b061;
  pSStack_60 = (System_String_o *)0x453add5;
  cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x300));
  if (cVar2 != '\0') {
    plVar5 = *(long **)&(in_RDI->fields)._stringLength;
    if (g_data_057aef20 == '\0') {
      pSStack_60 = (System_String_o *)0x453adf6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
      g_data_057aef20 = '\x01';
    }
    local_48.klass = TypeInfo_KillWeapon;
    local_48.monitor = (void *)0xffffffffffffffff;
    __this = &local_48;
    pSStack_60 = (System_String_o *)0x453ae20;
    pSVar4 = System_Enum__ToString((System_Enum_o *)__this,(MethodInfo *)0x0);
    if (plVar5 == (long *)0x0) {
label_0453b061:
      pSStack_60 = (System_String_o *)0x453b066;
      il2cpp_runtime_helper_022b2c90();
      pSStack_60 = in_RDI;
      if (g_data_057aef20 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
        g_data_057aef20 = '\x01';
      }
      SStack_78.klass = (System_Enum_c *)TypeInfo_KillWeapon;
      SStack_78.monitor = (void *)0xffffffffffffffff;
      uStack_68 = *(undefined4 *)&__this->klass;
      SVar7.fields.Item1 = System_Enum__ToString(&SStack_78,(MethodInfo *)0x0);
      SVar7.fields.Item2 = extraout_RDX;
      return (System_ValueTuple_ulong__ulong__o)SVar7.fields;
    }
    pSStack_60 = (System_String_o *)0x453ae40;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
    if (g_data_057aef21 == '\0') {
      pSStack_60 = (System_String_o *)0x453ae58;
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057aef21 = '\x01';
    }
    pSStack_60 = (System_String_o *)0x453ae69;
    __this = in_RDX;
    System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
    if (plVar5 == (long *)0x0) goto label_0453b061;
    pSStack_60 = (System_String_o *)0x453ae98;
    cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
    if (cVar2 != '\0') {
      plVar5 = *(long **)&(in_RDI->fields)._stringLength;
      if (g_data_057aef20 == '\0') {
        pSStack_60 = (System_String_o *)0x453aeb9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
        g_data_057aef20 = '\x01';
      }
      local_48.klass = TypeInfo_KillWeapon;
      local_48.monitor = (void *)0xffffffffffffffff;
      __this = &local_48;
      pSStack_60 = (System_String_o *)0x453aee3;
      pSVar4 = System_Enum__ToString((System_Enum_o *)__this,(MethodInfo *)0x0);
      in_RDI = (System_String_o *)0x0;
      if (plVar5 == (long *)0x0) goto label_0453b061;
      pSStack_60 = (System_String_o *)0x453af02;
      in_RDI = (System_String_o *)
               (**(code **)(*plVar5 + 0x1a8))(plVar5,pSVar4,*(undefined8 *)(*plVar5 + 0x1b0));
      if (g_data_057aef21 == '\0') {
        pSStack_60 = (System_String_o *)0x453af1a;
        il2cpp_runtime_helper_023445d0(&"None");
        g_data_057aef21 = '\x01';
      }
      pSStack_60 = (System_String_o *)0x453af2b;
      __this = in_RDX;
      bVar3 = System_String__IsNullOrEmpty(in_RDX,(MethodInfo *)0x0);
      if (in_RDI == (System_String_o *)0x0) goto label_0453b061;
      if ((char)bVar3 != '\0') {
        in_RDX = "None";
      }
      pSStack_60 = (System_String_o *)0x453af52;
      __this = in_RDI;
      pSVar4 = (System_String_o *)
               (*(in_RDI->klass->vtable)._7_CompareTo.methodPtr)
                         (in_RDI,in_RDX,(in_RDI->klass->vtable)._7_CompareTo.method);
      if (pSVar4 == (System_String_o *)0x0) goto label_0453b061;
      pSStack_60 = (System_String_o *)0x453af7c;
      cVar2 = (*(code *)pSVar4->klass[1]._1.name)
                        (pSVar4,"Highest",(Il2CppClass *)pSVar4->klass[1]._1.namespaze);
      in_RDI = pSVar4;
      if (cVar2 == '\0') {
        uVar6 = 0;
      }
      else {
        pSStack_60 = (System_String_o *)0x453af97;
        __this = pSVar4;
        plVar5 = (long *)(*(pSVar4->klass->vtable)._7_CompareTo.methodPtr)
                                   (pSVar4,"Highest",(pSVar4->klass->vtable)._7_CompareTo.method);
        if (plVar5 == (long *)0x0) goto label_0453b061;
        pSStack_60 = (System_String_o *)0x453afb3;
        uVar6 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
      }
      pSStack_60 = (System_String_o *)0x453aff3;
      cVar2 = (*(code *)pSVar4->klass[1]._1.name)
                        (pSVar4,"Total",(Il2CppClass *)pSVar4->klass[1]._1.namespaze);
      if (cVar2 == '\0') {
        item1 = 0;
      }
      else {
        pSStack_60 = (System_String_o *)0x453b00e;
        __this = pSVar4;
        plVar5 = (long *)(*(pSVar4->klass->vtable)._7_CompareTo.methodPtr)
                                   (pSVar4,"Total",(pSVar4->klass->vtable)._7_CompareTo.method);
        if (plVar5 == (long *)0x0) goto label_0453b061;
        pSStack_60 = (System_String_o *)0x453b026;
        item1 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
      }
      goto label_0453b044;
    }
  }
  uVar6 = 0;
  item1 = 0;
label_0453b044:
  uStack_50 = 0;
  local_58 = 0;
  pSStack_60 = (System_String_o *)0x453b049;
  __this_00.fields.Item2 = uVar6;
  __this_00.fields.Item1 = (uint64_t)&local_58;
  System_ValueTuple_ulong__ulong____ctor(__this_00,item1,MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  SVar1.Item2 = uStack_50;
  SVar1.Item1 = local_58;
  return (System_ValueTuple_ulong__ulong__o)SVar1;
}


// GameProgress.DamageSetting$$set_Item
// il2cpp: void GameProgress_DamageSetting__set_Item (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x453b120

void GameProgress_DamageSetting__set_Item(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  long *plVar6;
  System_ValueTuple_T1__T2__c *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  uint64_t uVar10;
  uint64_t item1;
  SimpleJSONFixed_JSONObject_o *pSVar11;
  System_ValueTuple_T1__T2__c *in_RCX;
  System_ValueTuple_T1__T2__c *in_RDX;
  undefined8 extraout_RDX;
  undefined8 uVar12;
  System_ValueTuple_T1__T2__c *in_RDI;
  System_ValueTuple_T1__T2__c *pSVar13;
  System_ValueTuple_T1__T2__c *pSVar14;
  System_ValueTuple_T1__T2__c *pSVar15;
  long *plVar16;
  SimpleJSONFixed_JSONObject_o *__this;
  System_ValueTuple_T1__T2__c *in_R8;
  System_ValueTuple_T1__T2__c *method;
  System_ValueTuple_ulong__ulong__o __this_00;
  undefined8 uStack_90;
  undefined8 uStack_88;
  System_ValueTuple_T1__T2__c *pSStack_80;
  System_ValueTuple_T1__T2__c *pSStack_78;
  System_ValueTuple_T1__T2__c *pSStack_70;
  undefined1 local_68 [48];
  System_ValueTuple_T1__T2__c *local_38;
  
  pSVar13 = (System_ValueTuple_T1__T2__c *)local_68;
  pSVar14 = (System_ValueTuple_T1__T2__c *)local_68;
  pSVar7 = (System_ValueTuple_T1__T2__c *)local_68;
  pSVar15 = (System_ValueTuple_T1__T2__c *)local_68;
  method = in_R8;
  local_38 = in_RCX;
  if (g_data_057aeeff == '\0') {
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b154;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b160;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b16c;
    il2cpp_runtime_helper_023445d0(&"Total");
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b178;
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aeeff = '\x01';
  }
  plVar6 = (long *)(in_RDI->_1).name;
  if (g_data_057aef20 == '\0') {
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b198;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
    g_data_057aef20 = '\x01';
  }
  local_68._0_8_ = TypeInfo_KillWeapon;
  local_68._8_8_ = (void *)0xffffffffffffffff;
  uVar12 = 0;
  pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b1c6;
  pSVar5 = System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
  if (plVar6 != (long *)0x0) {
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b1e6;
    cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6,pSVar5,*(undefined8 *)(*plVar6 + 0x300));
    local_68._32_8_ = in_RDI;
    local_68._40_8_ = in_R8;
    if (cVar2 == '\0') {
      plVar6 = (long *)(in_RDI->_1).name;
      if (g_data_057aef20 == '\0') {
        pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b211;
        il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
        g_data_057aef20 = '\x01';
      }
      local_68._0_8_ = TypeInfo_KillWeapon;
      local_68._8_8_ = (void *)0xffffffffffffffff;
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b23b;
      in_R8 = (System_ValueTuple_T1__T2__c *)
              System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b24d;
      in_RDI = (System_ValueTuple_T1__T2__c *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      uVar12 = 0;
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b25a;
      pSVar13 = in_RDI;
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)in_RDI,(MethodInfo *)0x0);
      if (plVar6 == (long *)0x0) goto label_0453b57a;
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b27d;
      (**(code **)(*plVar6 + 0x278))(plVar6,in_R8,in_RDI,*(undefined8 *)(*plVar6 + 0x280));
    }
    in_R8 = (System_ValueTuple_T1__T2__c *)local_68._40_8_;
    in_RDI = (System_ValueTuple_T1__T2__c *)local_68._32_8_;
    plVar6 = (long *)((Il2CppClass_1 *)local_68._32_8_)->name;
    if (g_data_057aef20 == '\0') {
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b2aa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
      g_data_057aef20 = '\x01';
    }
    local_68._0_8_ = TypeInfo_KillWeapon;
    local_68._8_8_ = (void *)0xffffffffffffffff;
    uVar12 = 0;
    pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b2d1;
    pSVar5 = System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
    pSVar13 = pSVar14;
    if (plVar6 != (long *)0x0) {
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b2f1;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,pSVar5,*(undefined8 *)(*plVar6 + 0x1b0));
      if (g_data_057aef21 == '\0') {
        pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b309;
        il2cpp_runtime_helper_023445d0(&"None");
        g_data_057aef21 = '\x01';
      }
      uVar12 = 0;
      pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b31a;
      pSVar13 = in_RDX;
      System_String__IsNullOrEmpty((System_String_o *)in_RDX,(MethodInfo *)0x0);
      if (plVar6 != (long *)0x0) {
        pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b348;
        cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
        if (cVar2 == '\0') {
          plVar6 = (long *)(in_RDI->_1).name;
          if (g_data_057aef20 == '\0') {
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b369;
            il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
            g_data_057aef20 = '\x01';
          }
          local_68._0_8_ = TypeInfo_KillWeapon;
          local_68._8_8_ = (void *)0xffffffffffffffff;
          uVar12 = 0;
          pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b390;
          pSVar5 = System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
          pSVar13 = pSVar7;
          if (plVar6 != (long *)0x0) {
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b3b5;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,pSVar5,*(undefined8 *)(*plVar6 + 0x1b0));
            if (g_data_057aef21 == '\0') {
              pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b3cd;
              il2cpp_runtime_helper_023445d0(&"None");
              g_data_057aef21 = '\x01';
            }
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b3de;
            uVar3 = System_String__IsNullOrEmpty((System_String_o *)in_RDX,(MethodInfo *)0x0);
            in_R8 = "None";
            in_RDI = (System_ValueTuple_T1__T2__c *)(ulong)uVar3;
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b3f9;
            pSVar7 = (System_ValueTuple_T1__T2__c *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
            uVar12 = 0;
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b406;
            pSVar13 = pSVar7;
            SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pSVar7,(MethodInfo *)0x0);
            if (plVar6 != (long *)0x0) {
              if ((char)uVar3 == '\0') {
                in_R8 = in_RDX;
              }
              pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b42f;
              (**(code **)(*plVar6 + 0x278))(plVar6,in_R8,pSVar7,*(undefined8 *)(*plVar6 + 0x280));
              in_RDI = (System_ValueTuple_T1__T2__c *)local_68._32_8_;
              in_R8 = (System_ValueTuple_T1__T2__c *)local_68._40_8_;
              goto label_0453b43e;
            }
          }
        }
        else {
label_0453b43e:
          plVar6 = (long *)(in_RDI->_1).name;
          if (g_data_057aef20 == '\0') {
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b457;
            il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
            g_data_057aef20 = '\x01';
          }
          local_68._0_8_ = TypeInfo_KillWeapon;
          local_68._8_8_ = (void *)0xffffffffffffffff;
          uVar12 = 0;
          pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b47e;
          pSVar5 = System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
          pSVar13 = pSVar15;
          if (plVar6 != (long *)0x0) {
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b49e;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,pSVar5,*(undefined8 *)(*plVar6 + 0x1b0));
            if (g_data_057aef21 == '\0') {
              pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b4b6;
              il2cpp_runtime_helper_023445d0(&"None");
              g_data_057aef21 = '\x01';
            }
            uVar12 = 0;
            pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b4c7;
            pSVar13 = in_RDX;
            bVar4 = System_String__IsNullOrEmpty((System_String_o *)in_RDX,(MethodInfo *)0x0);
            if (plVar6 != (long *)0x0) {
              if ((char)bVar4 != '\0') {
                in_RDX = "None";
              }
              pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b4f5;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,in_RDX,*(undefined8 *)(*plVar6 + 0x1b0));
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b510;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar12 = 0;
              pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b51c;
              pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a230((uint64_t)local_38,(MethodInfo *)0x0);
              in_RDI = (System_ValueTuple_T1__T2__c *)0x0;
              pSVar13 = local_38;
              if (plVar6 != (long *)0x0) {
                pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b541;
                (**(code **)(*plVar6 + 0x1b8))(plVar6,"Highest",pSVar8,*(undefined8 *)(*plVar6 + 0x1c0));
                pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b54b;
                pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a230((uint64_t)in_R8,(MethodInfo *)0x0);
                pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b56b;
                (**(code **)(*plVar6 + 0x1b8))(plVar6,"Total",pSVar8,*(undefined8 *)(*plVar6 + 0x1c0));
                return;
              }
            }
          }
        }
      }
    }
  }
label_0453b57a:
  pSStack_70 = (System_ValueTuple_T1__T2__c *)0x453b57f;
  il2cpp_runtime_helper_022b2c90();
  pSStack_80 = in_RDI;
  pSStack_78 = in_R8;
  pSStack_70 = in_RDX;
  if (g_data_057aef00 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Overall");
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aef00 = '\x01';
  }
  plVar6 = (long *)(pSVar13->_1).name;
  plVar16 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    uVar12 = "Overall";
    cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6,"Overall",*(undefined8 *)(*plVar6 + 0x300));
    if (cVar2 == '\0') {
      uVar10 = 0;
      item1 = 0;
      goto label_0453b709;
    }
    plVar16 = (long *)(pSVar13->_1).name;
    if ((plVar16 != (long *)0x0) &&
       (uVar12 = "Overall",
       plVar6 = (long *)(**(code **)(*plVar16 + 0x1a8))
                                  (plVar16,"Overall",*(undefined8 *)(*plVar16 + 0x1b0)),
       plVar6 != (long *)0x0)) {
      cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6,"Highest",*(undefined8 *)(*plVar6 + 0x300));
      if (cVar2 == '\0') {
        uVar10 = 0;
      }
      else {
        uVar12 = "Highest";
        plVar16 = plVar6;
        plVar9 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"Highest",*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar9 == (long *)0x0) goto label_0453b721;
        uVar10 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
      }
      cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6,"Total",*(undefined8 *)(*plVar6 + 0x300));
      if (cVar2 == '\0') {
        item1 = 0;
label_0453b709:
        uStack_88 = 0;
        uStack_90 = 0;
        __this_00.fields.Item2 = uVar10;
        __this_00.fields.Item1 = (uint64_t)&uStack_90;
        System_ValueTuple_ulong__ulong____ctor(__this_00,item1,MethodInfo_ValueTuple_2_UInt64_UInt64,(MethodInfo_2BBBFB0 *)method);
        return;
      }
      uVar12 = "Total";
      plVar9 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"Total",*(undefined8 *)(*plVar6 + 0x1b0));
      plVar16 = plVar6;
      if (plVar9 != (long *)0x0) {
        item1 = (**(code **)(*plVar9 + 1000))(plVar9,*(undefined8 *)(*plVar9 + 0x3f0));
        goto label_0453b709;
      }
    }
  }
label_0453b721:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Overall");
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aef01 = '\x01';
  }
  plVar6 = (long *)plVar16[2];
  __this = (SimpleJSONFixed_JSONObject_o *)0x0;
  if (plVar6 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6,"Overall",*(undefined8 *)(*plVar6 + 0x300));
    if (cVar2 == '\0') {
      plVar6 = (long *)plVar16[2];
      pSVar11 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      __this = pSVar11;
      SimpleJSONFixed_JSONObject___ctor(pSVar11,(MethodInfo *)0x0);
      if (plVar6 == (long *)0x0) goto label_0453b8a5;
      (**(code **)(*plVar6 + 0x278))(plVar6,"Overall",pSVar11,*(undefined8 *)(*plVar6 + 0x280));
    }
    __this = (SimpleJSONFixed_JSONObject_o *)plVar16[2];
    if (((__this != (SimpleJSONFixed_JSONObject_o *)0x0) &&
        (pSVar11 = (SimpleJSONFixed_JSONObject_o *)
                   (*(__this->klass->vtable)._7_get_Item.methodPtr)
                             (__this,"Overall",(__this->klass->vtable)._7_get_Item.method),
        pSVar11 != (SimpleJSONFixed_JSONObject_o *)0x0)) &&
       (__this = pSVar11,
       plVar6 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar11,"Highest",(pSVar11->klass->vtable)._7_get_Item.method),
       plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x3f8))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x400));
      plVar6 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar11,"Total",(pSVar11->klass->vtable)._7_get_Item.method);
      __this = pSVar11;
      if (plVar6 != (long *)0x0) {
        lVar1 = *plVar6;
        (**(code **)(lVar1 + 0x3f8))
                  (plVar6,extraout_RDX,*(undefined8 *)(lVar1 + 0x400),lVar1,*(code **)(lVar1 + 0x3f8));
        return;
      }
    }
  }
label_0453b8a5:
  il2cpp_runtime_helper_022b2c90();
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_get_Tag.methodPtr)(__this,(__this->klass->vtable)._4_get_Tag.method);
  return;
}


// GameProgress.DamageSetting$$get_Overall
// il2cpp: System_ValueTuple_ulong__ulong__o GameProgress_DamageSetting__get_Overall (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x453b580

System_ValueTuple_ulong__ulong__o
GameProgress_DamageSetting__get_Overall(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  void *pvVar1;
  SimpleJSONFixed_JSONObject_c *pSVar2;
  long lVar3;
  System_ValueTuple_ulong__ulong__Fields SVar4;
  char cVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long *plVar7;
  uint64_t uVar8;
  uint64_t item1;
  SimpleJSONFixed_JSONNode_c *__this_00;
  SimpleJSONFixed_JSONNode_c *pSVar9;
  undefined8 extraout_RDX;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONNode_c *__this_01;
  MethodInfo_2BBBFB0 *in_R8;
  System_ValueTuple_ulong__ulong__o SVar11;
  uint64_t local_28;
  uint64_t uStack_20;
  
  if (g_data_057aef00 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Overall");
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aef00 = '\x01';
  }
  pSVar6 = (__this->fields).root;
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    method = "Overall";
    cVar5 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar6,"Overall",(pSVar6->klass->vtable)._28_HasKey.method);
    if (cVar5 == '\0') {
      uVar8 = 0;
      item1 = 0;
      goto label_0453b709;
    }
    pSVar10 = (__this->fields).root;
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (method = "Overall",
       pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar10,"Overall",(pSVar10->klass->vtable)._7_get_Item.method),
       pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      cVar5 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar6,"Highest",(pSVar6->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') {
        uVar8 = 0;
      }
      else {
        method = "Highest";
        pSVar10 = pSVar6;
        plVar7 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,"Highest",(pSVar6->klass->vtable)._7_get_Item.method);
        if (plVar7 == (long *)0x0) goto label_0453b721;
        uVar8 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
      }
      cVar5 = (*(pSVar6->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar6,"Total",(pSVar6->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') {
        item1 = 0;
label_0453b709:
        uStack_20 = 0;
        local_28 = 0;
        SVar11.fields.Item2 = uVar8;
        SVar11.fields.Item1 = (uint64_t)&local_28;
        System_ValueTuple_ulong__ulong____ctor(SVar11,item1,MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
        SVar4.Item2 = uStack_20;
        SVar4.Item1 = local_28;
        return (System_ValueTuple_ulong__ulong__o)SVar4;
      }
      method = "Total";
      plVar7 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,"Total",(pSVar6->klass->vtable)._7_get_Item.method);
      pSVar10 = pSVar6;
      if (plVar7 != (long *)0x0) {
        item1 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
        goto label_0453b709;
      }
    }
  }
label_0453b721:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Overall");
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aef01 = '\x01';
  }
  pSVar9 = pSVar10[1].klass;
  __this_01 = (SimpleJSONFixed_JSONNode_c *)0x0;
  if (pSVar9 != (SimpleJSONFixed_JSONNode_c *)0x0) {
    pvVar1 = (pSVar9->_1).image;
    cVar5 = (**(code **)((long)pvVar1 + 0x2f8))(pSVar9,"Overall",*(undefined8 *)((long)pvVar1 + 0x300));
    if (cVar5 == '\0') {
      pSVar9 = pSVar10[1].klass;
      __this_00 = (SimpleJSONFixed_JSONNode_c *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      __this_01 = __this_00;
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar9 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_0453b8a5;
      pvVar1 = (pSVar9->_1).image;
      (**(code **)((long)pvVar1 + 0x278))(pSVar9,"Overall",__this_00,*(undefined8 *)((long)pvVar1 + 0x280))
      ;
    }
    __this_01 = pSVar10[1].klass;
    if (((__this_01 != (SimpleJSONFixed_JSONNode_c *)0x0) &&
        (pSVar2 = (__this_01->_1).image,
        pSVar9 = (SimpleJSONFixed_JSONNode_c *)
                 (*(pSVar2->vtable)._7_get_Item.methodPtr)
                           (__this_01,"Overall",(pSVar2->vtable)._7_get_Item.method),
        pSVar9 != (SimpleJSONFixed_JSONNode_c *)0x0)) &&
       (pSVar2 = (pSVar9->_1).image, __this_01 = pSVar9,
       plVar7 = (long *)(*(pSVar2->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,"Highest",(pSVar2->vtable)._7_get_Item.method),
       plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x3f8))(plVar7,method,*(undefined8 *)(*plVar7 + 0x400));
      pSVar2 = (pSVar9->_1).image;
      plVar7 = (long *)(*(pSVar2->vtable)._7_get_Item.methodPtr)
                                 (pSVar9,"Total",(pSVar2->vtable)._7_get_Item.method);
      __this_01 = pSVar9;
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        SVar11.fields =
             (System_ValueTuple_ulong__ulong__Fields)
             (**(code **)(lVar3 + 0x3f8))
                       (plVar7,extraout_RDX,*(undefined8 *)(lVar3 + 0x400),lVar3,*(code **)(lVar3 + 0x3f8));
        return (System_ValueTuple_ulong__ulong__o)SVar11.fields;
      }
    }
  }
label_0453b8a5:
  il2cpp_runtime_helper_022b2c90();
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_01,(MethodInfo *)0x0);
  pSVar2 = (__this_01->_1).image;
  SVar11.fields =
       (System_ValueTuple_ulong__ulong__Fields)
       (*(pSVar2->vtable)._4_get_Tag.methodPtr)(__this_01,(pSVar2->vtable)._4_get_Tag.method);
  return (System_ValueTuple_ulong__ulong__o)SVar11.fields;
}


// GameProgress.DamageSetting$$set_Overall
// il2cpp: void GameProgress_DamageSetting__set_Overall (GameProgress_DamageSetting_o* __this, System_ValueTuple_ulong__ulong__o value, const MethodInfo* method);
// 0x453b730

void GameProgress_DamageSetting__set_Overall
               (GameProgress_DamageSetting_o *__this,System_ValueTuple_ulong__ulong__o value,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  long lVar2;
  char cVar3;
  SimpleJSONFixed_JSONObject_o *pSVar4;
  long *plVar5;
  SimpleJSONFixed_JSONObject_o *__this_00;
  
  if (g_data_057aef01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Overall");
    il2cpp_runtime_helper_023445d0(&"Highest");
    g_data_057aef01 = '\x01';
  }
  pSVar1 = (__this->fields).root;
  __this_00 = (SimpleJSONFixed_JSONObject_o *)0x0;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar3 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar1,"Overall",(pSVar1->klass->vtable)._28_HasKey.method);
    if (cVar3 == '\0') {
      pSVar1 = (__this->fields).root;
      pSVar4 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      __this_00 = pSVar4;
      SimpleJSONFixed_JSONObject___ctor(pSVar4,(MethodInfo *)0x0);
      if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0453b8a5;
      (*(pSVar1->klass->vtable)._20_Add.methodPtr)
                (pSVar1,"Overall",pSVar4,(pSVar1->klass->vtable)._20_Add.method);
    }
    __this_00 = (SimpleJSONFixed_JSONObject_o *)(__this->fields).root;
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      pSVar4 = (SimpleJSONFixed_JSONObject_o *)
               (*(__this_00->klass->vtable)._7_get_Item.methodPtr)
                         (__this_00,"Overall",(__this_00->klass->vtable)._7_get_Item.method);
      if (pSVar4 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        __this_00 = pSVar4;
        plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar4,"Highest",(pSVar4->klass->vtable)._7_get_Item.method);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x3f8))(plVar5,value.fields.Item1,*(undefined8 *)(*plVar5 + 0x400));
          plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar4,"Total",(pSVar4->klass->vtable)._7_get_Item.method);
          __this_00 = pSVar4;
          if (plVar5 != (long *)0x0) {
            lVar2 = *plVar5;
            (**(code **)(lVar2 + 0x3f8))
                      (plVar5,value.fields.Item2,*(undefined8 *)(lVar2 + 0x400),lVar2,
                       *(code **)(lVar2 + 0x3f8));
            return;
          }
        }
      }
    }
  }
label_0453b8a5:
  il2cpp_runtime_helper_022b2c90();
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._4_get_Tag.methodPtr)(__this_00,(__this_00->klass->vtable)._4_get_Tag.method);
  return;
}


// GameProgress.DamageSetting$$.ctor
// il2cpp: void GameProgress_DamageSetting___ctor (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x453b8b0

void GameProgress_DamageSetting___ctor(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// GameProgress.DamageSetting$$SetDefault
// il2cpp: void GameProgress_DamageSetting__SetDefault (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x453b8e0

void GameProgress_DamageSetting__SetDefault(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *__this_00;
  
  if (g_data_057aef02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057aef02 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).root = (SimpleJSONFixed_JSONNode_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  return;
}


// GameProgress.DamageSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* GameProgress_DamageSetting__SerializeToJsonObject (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x453b940

SimpleJSONFixed_JSONNode_o *
GameProgress_DamageSetting__SerializeToJsonObject(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  return (__this->fields).root;
}


// GameProgress.DamageSetting$$DeserializeFromJsonObject
// il2cpp: void GameProgress_DamageSetting__DeserializeFromJsonObject (GameProgress_DamageSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x453b950

void GameProgress_DamageSetting__DeserializeFromJsonObject
               (GameProgress_DamageSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  (__this->fields).root = json;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// GameProgress.DamageSetting$$Register
// il2cpp: void GameProgress_DamageSetting__Register (GameProgress_DamageSetting_o* __this, GameProgress_KillMethod_o method, uint64_t damage, const MethodInfo* method);
// 0x453b960

void GameProgress_DamageSetting__Register(void)

{
  ulong uVar1;
  ulong in_RCX;
  MethodInfo *method;
  MethodInfo *in_RSI;
  GameProgress_DamageSetting_o *in_RDI;
  MethodInfo_2BBBFB0 *in_R8;
  System_ValueTuple_ulong__ulong__o SVar2;
  System_ValueTuple_ulong__ulong__o __this;
  System_ValueTuple_ulong__ulong__o __this_00;
  uint64_t local_38;
  uint64_t uStack_30;
  
  if (g_data_057aef03 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_UInt64_UInt64);
    g_data_057aef03 = '\x01';
  }
  SVar2 = GameProgress_DamageSetting__get_Overall(in_RDI,in_RSI);
  uVar1 = SVar2.fields.Item1;
  if (SVar2.fields.Item1 < in_RCX) {
    uVar1 = in_RCX;
  }
  local_38 = 0;
  uStack_30 = 0;
  __this.fields.Item2 = uVar1;
  __this.fields.Item1 = (uint64_t)&local_38;
  method = MethodInfo_ValueTuple_2_UInt64_UInt64;
  System_ValueTuple_ulong__ulong____ctor(__this,SVar2.fields.Item2 + in_RCX,(uint64_t)MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  SVar2.fields.Item2 = uStack_30;
  SVar2.fields.Item1 = local_38;
  GameProgress_DamageSetting__set_Overall(in_RDI,SVar2,method);
  SVar2 = GameProgress_DamageSetting__get_Item();
  uVar1 = SVar2.fields.Item1;
  if (SVar2.fields.Item1 < in_RCX) {
    uVar1 = in_RCX;
  }
  local_38 = 0;
  uStack_30 = 0;
  __this_00.fields.Item2 = uVar1;
  __this_00.fields.Item1 = (uint64_t)&local_38;
  System_ValueTuple_ulong__ulong____ctor(__this_00,SVar2.fields.Item2 + in_RCX,(uint64_t)MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
  GameProgress_DamageSetting__set_Item();
  return;
}


// GameProgress.DamageSetting$$GetStatLabels
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_string__string___o* GameProgress_DamageSetting__GetStatLabels (GameProgress_DamageSetting_o* __this, const MethodInfo* method);
// 0x453ba30

System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *
GameProgress_DamageSetting__GetStatLabels(GameProgress_DamageSetting_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  undefined4 uVar2;
  Il2CppObject *__this_01;
  
  if (g_data_057aef04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetStatLabels_d__17);
    g_data_057aef04 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GetStatLabels_d__17);
  uVar2 = 0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  __this_01 = (Il2CppObject *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].monitor = iVar1;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,__this);
    return (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_01[2].monitor = iVar1;
  return (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)CONCAT44(extraout_var,iVar1);
}


