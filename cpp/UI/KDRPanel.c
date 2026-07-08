// Type: UI.KDRPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/KDRPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/KDRPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.KDRPanel.<>c$$.cctor
// il2cpp: void UI_KDRPanel___c___cctor (const MethodInfo* method);
// 0x40bdcc0

void UI_KDRPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704694 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704694 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.KDRPanel.<>c$$.ctor
// il2cpp: void UI_KDRPanel___c___ctor (UI_KDRPanel___c_o* __this, const MethodInfo* method);
// 0x40bdd30

void UI_KDRPanel_<>c___ctor(UI_KDRPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_0
// il2cpp: System_String_o* UI_KDRPanel___c___ReorganizeLayout_b__14_0 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x, const MethodInfo* method);
// 0x40bdd40

System_String_o *
UI_KDRPanel_<>c__<ReorganizeLayout>b__14_0
          (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x
          ,MethodInfo *method)

{
  if (DAT_05704695 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key,x.fields.key,x.fields.value);
    DAT_05704695 = '\x01';
  }
  return x.fields.key;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_2
// il2cpp: int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x40bdd70

int32_t UI_KDRPanel_<>c__<ReorganizeLayout>b__14_2
                  (UI_KDRPanel___c_o *__this,
                  System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x,MethodInfo *method)

{
  if (DAT_05704696 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Key,x.fields._0_8_,x.fields.value);
    DAT_05704696 = '\x01';
  }
  return x.fields.key;
}


// UI.KDRPanel$$Setup
// il2cpp: void UI_KDRPanel__Setup (UI_KDRPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x40bc1e0

void UI_KDRPanel__Setup(UI_KDRPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  (__this->fields)._style = style;
  il2cpp_runtime_glue(&(__this->fields)._style);
  UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)style);
  UI_KDRPanel__Sync(__this,(MethodInfo *)style);
  return;
}


// UI.KDRPanel$$Update
// il2cpp: void UI_KDRPanel__Update (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bc870

void UI_KDRPanel__Update(UI_KDRPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  UI_KDRPanel__Sync(__this,method);
  return;
}


// UI.KDRPanel$$Sync
// il2cpp: void UI_KDRPanel__Sync (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bc720

void UI_KDRPanel__Sync(UI_KDRPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  
  if (DAT_05704687 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704687 = '\x01';
  }
  lVar4 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  if ((*(long *)(lVar4 + 0x28) == 0) ||
     (lVar3 = *(long *)(*(long *)(lVar4 + 0x28) + 0xb0), lVar3 == 0)) {
LAB_040bc86b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 != (__this->fields)._kdrMode) {
    (__this->fields)._kdrMode = iVar2;
    UI_KDRPanel__DestroyAndRecreate(__this,method);
    lVar4 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  }
  if (((*(long *)(lVar4 + 0x50) == 0) ||
      (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x58), lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_040bc86b;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == (__this->fields)._pvpMode) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_040bc7e8;
LAB_040bc82e:
    il2cpp_init_class();
    lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    (__this->fields)._pvpMode = iVar2;
    UI_KDRPanel__DestroyAndRecreate(__this,method);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_040bc82e;
LAB_040bc7e8:
    lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar4 != 0) {
    cVar1 = *(char *)(lVar4 + 0x84);
    if (*(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) == cVar1) {
      cVar5 = *(char *)(lVar4 + 0x83);
      if ((char)(__this->fields)._showScoreboardLoadout == cVar5) goto LAB_040bc85c;
    }
    else {
      cVar5 = *(char *)(lVar4 + 0x83);
    }
    *(char *)&(__this->fields)._showScoreboardLoadout = cVar5;
    *(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) = cVar1;
    UI_KDRPanel__DestroyAndRecreate(__this,method);
  }
LAB_040bc85c:
  (__this->fields)._currentSyncDelay = 0.2;
  return;
}


// UI.KDRPanel$$GetPlayerTeam
// il2cpp: System_String_o* UI_KDRPanel__GetPlayerTeam (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40bc8c0

System_String_o *
UI_KDRPanel__GetPlayerTeam
          (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704688 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704688 = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
       (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x14) == 2) {
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = PhotonExtensions__GetStringProperty
                           (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                            (__this->fields)._defaultTeam,(MethodInfo *)0x0);
        return pSVar2;
      }
      return (__this->fields)._defaultTeam;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.KDRPanel$$ReorganizeLayout
// il2cpp: void UI_KDRPanel__ReorganizeLayout (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bc9a0

/* WARNING: Removing unreachable block (ram,0x040bce4e) */

void UI_KDRPanel__ReorganizeLayout(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *source;
  long lVar1;
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *source_00;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar2;
  System_Func_TSource__TKey__o *pSVar3;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *__this_04;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_05;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *a;
  MethodInfo *method_00;
  int index;
  undefined1 auVar6 [16];
  undefined8 in_stack_ffffffffffffff48;
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_247206 local_68;
  _union_247200 _Stack_60;
  undefined1 local_50 [16];
  _union_247206 local_40;
  _union_247200 _Stack_38;
  
  if (DAT_05704689 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_Int32_UI_PlayerKDRR);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_String_UI_TeamKDRRo);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow__get);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_UI_TeamKDRRow__get);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_int__PlayerKDRRow___int);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_int__PlayerKDRRow___string);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__TeamKDRRow___string);
    il2cpp_init_method_metadata(&MethodInfo_String__ReorganizeLayout_b__14_1);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String__ReorganizeLayout_b__14_0);
    il2cpp_init_method_metadata(&MethodInfo_Int32__ReorganizeLayout_b__14_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704689 = '\x01';
  }
  local_68.genericMethod = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (char *)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  source = (__this->fields)._teamHeaders;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar3 == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__TeamKDRRow___string);
    System_Func<KeyValuePair<object__object>__object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 8) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 8,pSVar3);
  }
  pSVar4 = System_Linq_Enumerable__OrderBy<KeyValuePair<object__object>__object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar3,
                      MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
  __this_04 = System_Linq_Enumerable__ToList<KeyValuePair<object__object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_List_1_KeyValuePair_2_System_String_UI_TeamKDRRo);
  source_00 = (__this->fields)._players;
  pSVar3 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_int__PlayerKDRRow___string);
  System_Func<KeyValuePair<int__object>__object>___ctor();
  pSVar4 = System_Linq_Enumerable__OrderBy<KeyValuePair<int__object>__object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,pSVar3,
                      MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar3 == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_int__PlayerKDRRow___int);
    System_Func<KeyValuePair<int__object>__int>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 0x10) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0x10,pSVar3);
  }
  pSVar4 = System_Linq_Enumerable__ThenBy<KeyValuePair<int__object>__int>
                     (pSVar4,pSVar3,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
  __this_05 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
              System_Linq_Enumerable__ToList<KeyValuePair<int__object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_List_1_KeyValuePair_2_System_Int32_UI_PlayerKDRR);
  if (__this_04 == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
             (System_Collections_Generic_List_T__o *)__this_04,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
  index = 0;
  pSVar7 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
LAB_040bcd20:
  __this_00.fields._8_8_ = __this;
  __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_00.fields._current = (Il2CppObject *)pSVar7;
  bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                    (__this_00,(MethodInfo_3176CF0 *)&stack0xffffffffffffff58);
  if ((char)bVar2 == '\0') {
    __this_03.fields._8_8_ = __this;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_03.fields._current = (Il2CppObject *)pSVar7;
    System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
              (__this_03,(MethodInfo_3176CE0 *)&stack0xffffffffffffff58);
    return;
  }
  auVar6 = il2cpp_glue_03c129b0(&stack0xffffffffffffff58);
  if (auVar6._8_8_ == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar5 = UnityEngine_Component__get_transform(auVar6._8_8_,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UnityEngine_Transform__SetSiblingIndex(pUVar5,index,(MethodInfo *)0x0);
  if (__this_05 == (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<KeyValuePair<int__object>>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_05,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Int32);
  local_68 = local_40;
  _Stack_60 = _Stack_38;
  local_78 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
  pIStack_70 = (Il2CppRGCTXData *)local_50._8_8_;
  do {
    index = index + 1;
    do {
      __this_01.fields._8_8_ = __this;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
      __this_01.fields._current = (Il2CppObject *)pSVar7;
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<int__object>>__MoveNext
                        (__this_01,(MethodInfo_3176610 *)&local_78);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = __this;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
        __this_02.fields._current = (Il2CppObject *)pSVar7;
        System_Collections_Generic_List_Enumerator<KeyValuePair<int__object>>__Dispose
                  (__this_02,(MethodInfo_3176600 *)&local_78);
        goto LAB_040bcd20;
      }
      il2cpp_glue_040bdcb0((MethodInfo_3176610 *)&local_78,MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow__get);
      if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      a = UI_KDRPanel__GetPlayerTeam(__this,(Photon_Realtime_Player_o *)method_00->klass,method_00);
      bVar2 = System_String__op_Equality(a,auVar6._0_8_,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)method_00,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Transform__SetSiblingIndex(pUVar5,index,(MethodInfo *)0x0);
  } while( true );
}


// UI.KDRPanel$$AddPlayer
// il2cpp: void UI_KDRPanel__AddPlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, bool isVisible, const MethodInfo* method);
// 0x40bcfd0

void UI_KDRPanel__AddPlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool_conflict redoLayout,
               bool_conflict isVisible,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_PlayerKDRRow_o *player_00;
  System_String_o *team;
  Il2CppObject *value;
  UI_TeamKDRRow_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_0570468a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_GetComponent_PlayerKDRRow);
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_GetComponent_TeamKDRRow);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570468a = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreatePlayerKDRRow
                       (pUVar5,(__this->fields)._style,player,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      player_00 = (UI_PlayerKDRRow_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_PlayerKDRRow_GetComponent_PlayerKDRRow);
      if ((char)isVisible == '\0') {
        if ((player_00 == (UI_PlayerKDRRow_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)player_00,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040bd25a;
        UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int__object>__Add
                  (pSVar1,(player->fields).actorNumber,(Il2CppObject *)player_00,MethodInfo_Void_Add);
        if ((__this->fields)._pvpMode != 2) {
          return;
        }
        team = UI_KDRPanel__GetPlayerTeam(__this,player,method_00);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._teamHeaders;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar2,(Il2CppObject *)team,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar4 == '\0') {
            pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar6 = UI_ElementFactory__CreateTeamKDRRow
                               (pUVar5,(__this->fields)._style,team,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040bd25a;
            value = UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_TeamKDRRow_GetComponent_TeamKDRRow);
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb0), lVar3 == 0)) goto LAB_040bd25a;
            UnityEngine_GameObject__SetActive
                      (pUVar6,(uint)(*(int *)(lVar3 + 0x14) != 0),(MethodInfo *)0x0);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._teamHeaders;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_040bd25a;
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar2,(Il2CppObject *)team,value,MethodInfo_Void_Add);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._teamHeaders;
          if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (__this_00 = (UI_TeamKDRRow_o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (pSVar2,(Il2CppObject *)team,MethodInfo_TeamKDRRow_get_Item),
             __this_00 != (UI_TeamKDRRow_o *)0x0)) {
            UI_TeamKDRRow__AddPlayerStats(__this_00,player_00,(MethodInfo *)0x0);
            method_01 = (MethodInfo *)0x0;
            UI_TeamKDRRow__UpdateRow(__this_00,(MethodInfo *)0x0);
            if ((char)redoLayout == '\0') {
              return;
            }
            UI_KDRPanel__ReorganizeLayout(__this,method_01);
            return;
          }
        }
      }
    }
  }
LAB_040bd25a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KDRPanel$$RemovePlayer
// il2cpp: void UI_KDRPanel__RemovePlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, const MethodInfo* method);
// 0x40bd260

void UI_KDRPanel__RemovePlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool_conflict redoLayout,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  UI_TeamKDRRow_o *pUVar6;
  UI_PlayerKDRRow_o *player_00;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *key;
  
  if (DAT_0570468b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570468b = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_040bd531;
  bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar4 == '\0') {
    return;
  }
  if ((__this->fields)._pvpMode == 2) {
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (((pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar2,(player->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item),
        pIVar5 == (Il2CppObject *)0x0)) ||
       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._teamHeaders,
       pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto LAB_040bd531;
    key = pIVar5[6].monitor;
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      key = (MethodInfo *)(__this->fields)._defaultTeam;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._teamHeaders;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_040bd531;
    method_00 = key;
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._teamHeaders;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_040bd531;
      pUVar6 = (UI_TeamKDRRow_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar3,(Il2CppObject *)key,MethodInfo_TeamKDRRow_get_Item);
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (player_00 = (UI_PlayerKDRRow_o *)
                      System_Collections_Generic_Dictionary<int__object>__get_Item
                                (pSVar2,(player->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item),
         pUVar6 == (UI_TeamKDRRow_o *)0x0)) goto LAB_040bd531;
      UI_TeamKDRRow__RemovePlayerStats(pUVar6,player_00,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._teamHeaders;
      if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         ((pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar3,(Il2CppObject *)key,MethodInfo_TeamKDRRow_get_Item),
          pIVar5 == (Il2CppObject *)0x0 ||
          (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._teamHeaders,
          pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))))
      goto LAB_040bd531;
      iVar1 = *(int *)&pIVar5[4].monitor;
      pUVar6 = (UI_TeamKDRRow_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar3,(Il2CppObject *)key,MethodInfo_TeamKDRRow_get_Item);
      if (pUVar6 == (UI_TeamKDRRow_o *)0x0) goto LAB_040bd531;
      method_00 = (MethodInfo *)0x0;
      if (iVar1 < 1) {
        pUVar7 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(pUVar7,(MethodInfo *)0x0);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._teamHeaders;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_040bd531;
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
        method_00 = key;
      }
      else {
        UI_TeamKDRRow__UpdateRow(pUVar6,(MethodInfo *)0x0);
      }
    }
    if ((char)redoLayout != '\0') {
      UI_KDRPanel__ReorganizeLayout(__this,method_00);
    }
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this_00 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar2,(player->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item),
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar7,(MethodInfo *)0x0);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int__object>__Remove
                (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
      return;
    }
  }
LAB_040bd531:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KDRPanel$$DestroyAndRecreate
// il2cpp: void UI_KDRPanel__DestroyAndRecreate (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bc210

void UI_KDRPanel__DestroyAndRecreate(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar6;
  UnityEngine_Object_o *pUVar7;
  MethodInfo *method_00;
  Photon_Realtime_Player_array *pPVar8;
  ulong uVar9;
  UnityEngine_Component_o *__this_04;
  UnityEngine_Component_o *__this_05;
  ulong uVar10;
  MethodInfo *in_R8;
  bool bVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppType **ppIVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppRGCTXData *pIVar15;
  InvokerMethod pIVar16;
  _union_229680 _Var17;
  char *pcVar18;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar19;
  undefined1 local_88 [56];
  Il2CppRGCTXData *pIStack_50;
  _union_229680 local_48;
  char *pcStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_0570468c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_UI_TeamKDRRow__get);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow__get);
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570468c = '\x01';
  }
  local_88._16_8_ = (InvokerMethod)0x0;
  local_88._24_8_ = (char *)0x0;
  local_88._0_8_ = (Il2CppType **)0x0;
  local_88._8_8_ = (Il2CppRGCTXData *)0x0;
  local_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pIVar16 = (InvokerMethod)0x0;
  pcVar18 = (char *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  pSVar19 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)(local_88 + 0x30)
               ,pSVar3,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    local_88._32_8_ = local_38;
    local_88._16_8_ = local_48;
    local_88._24_8_ = pcStack_40;
    local_88._0_8_ = local_88._48_8_;
    local_88._8_8_ = pIStack_50;
    while( true ) {
      __this_00.fields._8_8_ = pIVar14;
      __this_00.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar12;
      __this_00.fields._current.fields.key = (Il2CppObject *)pIVar16;
      __this_00.fields._current.fields.value = (Il2CppObject *)pcVar18;
      __this_00.fields._32_8_ = pSVar19;
      bVar6 = System_Collections_Generic_Dictionary_Enumerator<int__object>__MoveNext
                        (__this_00,(MethodInfo_31C2A20 *)local_88);
      if ((char)bVar6 == '\0') break;
      il2cpp_glue_02716390((MethodInfo_31C2A20 *)local_88);
      if (__this_04 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject(__this_04,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar7,(MethodInfo *)0x0);
    }
    __this_01.fields._8_8_ = pIVar14;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar12;
    __this_01.fields._current.fields.key = (Il2CppObject *)pIVar16;
    __this_01.fields._current.fields.value = (Il2CppObject *)pcVar18;
    __this_01.fields._32_8_ = pSVar19;
    System_Collections_Generic_Dictionary_Enumerator<int__object>__Dispose
              (__this_01,(MethodInfo_31C2B30 *)local_88);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int__object>__Clear(pSVar3,MethodInfo_Void_Clear);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._teamHeaders;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                   (local_88 + 0x30),pSVar4,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
        ppIVar13 = (Il2CppType **)local_88._48_8_;
        pIVar15 = pIStack_50;
        _Var17 = local_48;
        pcVar18 = pcStack_40;
        pSVar19 = local_38;
        while( true ) {
          __this_02.fields._8_8_ = pIVar15;
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
          __this_02.fields._current.fields.key = _Var17.genericMethod;
          __this_02.fields._current.fields.value = (Il2CppObject *)pcVar18;
          __this_02.fields._32_8_ = pSVar19;
          bVar6 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this_02,(MethodInfo_31CFE90 *)&stack0xffffffffffffff48);
          if ((char)bVar6 == '\0') break;
          il2cpp_glue_032bf890(&stack0xffffffffffffff48);
          if (__this_05 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject(__this_05,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__Destroy(pUVar7,(MethodInfo *)0x0);
        }
        __this_03.fields._8_8_ = pIVar15;
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
        __this_03.fields._current.fields.key = _Var17.genericMethod;
        __this_03.fields._current.fields.value = (Il2CppObject *)pcVar18;
        __this_03.fields._32_8_ = pSVar19;
        System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                  (__this_03,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff48);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._teamHeaders;
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Clear(pSVar4,MethodInfo_Void_Clear);
          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 != 0)) {
            iVar1 = *(int *)(lVar5 + 0x14);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar11 = false;
            method_00 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            UI_KDRPanel__AddPlayer
                      (__this,(Photon_Realtime_Player_o *)method_00,0,(uint)(iVar1 != 0),in_R8);
            if (iVar1 != 0) {
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 == 0)) goto LAB_040bc601;
              bVar11 = *(int *)(lVar5 + 0x14) != 1;
            }
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pPVar8 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
            if (pPVar8 != (Photon_Realtime_Player_array *)0x0) {
              if (0 < (int)pPVar8->max_length) {
                uVar9 = pPVar8->max_length & 0xffffffff;
                uVar10 = 0;
                do {
                  if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  method_00 = (MethodInfo *)pPVar8->m_Items[uVar10];
                  UI_KDRPanel__AddPlayer
                            (__this,(Photon_Realtime_Player_o *)method_00,0,(uint)bVar11,in_R8);
                  uVar10 = uVar10 + 1;
                  uVar2 = (uint)pPVar8->max_length;
                  uVar9 = (ulong)uVar2;
                } while ((long)uVar10 < (long)(int)uVar2);
              }
              UI_KDRPanel__ReorganizeLayout(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_040bc601:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KDRPanel$$OnPlayerEnteredRoom
// il2cpp: void UI_KDRPanel__OnPlayerEnteredRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x40bd540

void UI_KDRPanel__OnPlayerEnteredRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newPlayer,MethodInfo *method)

{
  long lVar1;
  MethodInfo *in_R8;
  
  if (DAT_0570468d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570468d = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xb0), lVar1 != 0)) {
    UI_KDRPanel__AddPlayer
              (__this,newPlayer,1,
               (uint)(newPlayer != (Photon_Realtime_Player_o *)0x0 && *(int *)(lVar1 + 0x14) == 2),
               in_R8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KDRPanel$$OnPlayerLeftRoom
// il2cpp: void UI_KDRPanel__OnPlayerLeftRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x40bd5d0

void UI_KDRPanel__OnPlayerLeftRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *otherPlayer,MethodInfo *method)

{
  long lVar1;
  MethodInfo *in_RCX;
  
  if (DAT_0570468e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570468e = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xb0), lVar1 != 0)) {
    if ((otherPlayer != (Photon_Realtime_Player_o *)0x0) && (*(int *)(lVar1 + 0x14) == 2)) {
      UI_KDRPanel__RemovePlayer(__this,otherPlayer,1,in_RCX);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KDRPanel$$OnPlayerPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnPlayerPropertiesUpdate (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x40bd660

void UI_KDRPanel__OnPlayerPropertiesUpdate
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *key;
  UI_TeamKDRRow_o *pUVar7;
  UI_PlayerKDRRow_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  bool bVar9;
  Il2CppObject *pIStack_38;
  
  if (DAT_0570468f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570468f = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xb0), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x14);
    if (iVar1 == 0) {
      bVar9 = false;
      iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    }
    else if (iVar1 == 1) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar9 = pPVar6 == targetPlayer;
      iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    }
    else {
      bVar9 = true;
      iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if (changedProps != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      method_00 = MethodInfo_Boolean_TryGetValue;
      System_Collections_Generic_Dictionary<object__object>__TryGetValue
                ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                 *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),&pIStack_38,
                 (MethodInfo_308E3E0 *)MethodInfo_Boolean_TryGetValue);
      if (pIStack_38 != (Il2CppObject *)0x0) {
        UI_KDRPanel__RemovePlayer(__this,targetPlayer,0,method_00);
        UI_KDRPanel__AddPlayer(__this,targetPlayer,1,(uint)bVar9,in_R8);
        return;
      }
      if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
        if ((char)(targetPlayer->fields).IsLocal == '\0') {
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xb0), lVar2 == 0)) goto LAB_040bd9e6;
          if (*(int *)(lVar2 + 0x14) != 2) {
            return;
          }
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
        if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                            (pSVar3,(targetPlayer->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            return;
          }
          if ((__this->fields)._pvpMode == 2) {
            key = UI_KDRPanel__GetPlayerTeam(__this,targetPlayer,method_01);
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._teamHeaders;
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar4,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar5 == '\0') {
                return;
              }
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._teamHeaders;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pUVar7 = (UI_TeamKDRRow_o *)
                         System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar4,(Il2CppObject *)key,MethodInfo_TeamKDRRow_get_Item);
                pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                         (__this->fields)._players;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                   (pUVar8 = (UI_PlayerKDRRow_o *)
                             System_Collections_Generic_Dictionary<int__object>__get_Item
                                       (pSVar3,(targetPlayer->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item),
                   pUVar7 != (UI_TeamKDRRow_o *)0x0)) {
                  UI_TeamKDRRow__RemovePlayerStats(pUVar7,pUVar8,(MethodInfo *)0x0);
                  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                           (__this->fields)._players;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (pUVar8 = (UI_PlayerKDRRow_o *)
                               System_Collections_Generic_Dictionary<int__object>__get_Item
                                         (pSVar3,(targetPlayer->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item),
                     pUVar8 != (UI_PlayerKDRRow_o *)0x0)) {
                    UI_PlayerKDRRow__UpdateRow(pUVar8,targetPlayer,(MethodInfo *)0x0);
                    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._teamHeaders;
                    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      pUVar7 = (UI_TeamKDRRow_o *)
                               System_Collections_Generic_Dictionary<object__object>__get_Item
                                         (pSVar4,(Il2CppObject *)key,MethodInfo_TeamKDRRow_get_Item);
                      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                               (__this->fields)._players;
                      if ((pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                         (pUVar8 = (UI_PlayerKDRRow_o *)
                                   System_Collections_Generic_Dictionary<int__object>__get_Item
                                             (pSVar3,(targetPlayer->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item
                                             ), pUVar7 != (UI_TeamKDRRow_o *)0x0)) {
                        UI_TeamKDRRow__AddPlayerStats(pUVar7,pUVar8,(MethodInfo *)0x0);
                        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._teamHeaders;
                        if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)
                                       0x0) &&
                           (pUVar7 = (UI_TeamKDRRow_o *)
                                     System_Collections_Generic_Dictionary<object__object>__get_Item
                                               (pSVar4,(Il2CppObject *)key,MethodInfo_TeamKDRRow_get_Item),
                           pUVar7 != (UI_TeamKDRRow_o *)0x0)) {
                          UI_TeamKDRRow__UpdateRow(pUVar7,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this->fields)._players;
            if ((pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar8 = (UI_PlayerKDRRow_o *)
                         System_Collections_Generic_Dictionary<int__object>__get_Item
                                   (pSVar3,(targetPlayer->fields).actorNumber,MethodInfo_PlayerKDRRow_get_Item),
               pUVar8 != (UI_PlayerKDRRow_o *)0x0)) {
              UI_PlayerKDRRow__UpdateRow(pUVar8,targetPlayer,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_040bd9e6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KDRPanel$$OnJoinedRoom
// il2cpp: void UI_KDRPanel__OnJoinedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bd9f0

void UI_KDRPanel__OnJoinedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  UI_KDRPanel__DestroyAndRecreate(__this,method);
  return;
}


// UI.KDRPanel$$OnEnable
// il2cpp: void UI_KDRPanel__OnEnable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bda00

void UI_KDRPanel__OnEnable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704690 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704690 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnDisable
// il2cpp: void UI_KDRPanel__OnDisable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bda70

void UI_KDRPanel__OnDisable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704691 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704691 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnRoomPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnRoomPropertiesUpdate (UI_KDRPanel_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x40bdae0

void UI_KDRPanel__OnRoomPropertiesUpdate
               (UI_KDRPanel_o *__this,ExitGames_Client_Photon_Hashtable_o *propertiesThatChanged,
               MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnMasterClientSwitched
// il2cpp: void UI_KDRPanel__OnMasterClientSwitched (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x40bdaf0

void UI_KDRPanel__OnMasterClientSwitched
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newMasterClient,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnFriendListUpdate
// il2cpp: void UI_KDRPanel__OnFriendListUpdate (UI_KDRPanel_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x40bdb00

void UI_KDRPanel__OnFriendListUpdate
               (UI_KDRPanel_o *__this,System_Collections_Generic_List_FriendInfo__o *friendList,
               MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnCreatedRoom
// il2cpp: void UI_KDRPanel__OnCreatedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bdb10

void UI_KDRPanel__OnCreatedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnCreateRoomFailed
// il2cpp: void UI_KDRPanel__OnCreateRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x40bdb20

void UI_KDRPanel__OnCreateRoomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method
               )

{
  return;
}


// UI.KDRPanel$$OnJoinRoomFailed
// il2cpp: void UI_KDRPanel__OnJoinRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x40bdb30

void UI_KDRPanel__OnJoinRoomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method
               )

{
  return;
}


// UI.KDRPanel$$OnJoinRandomFailed
// il2cpp: void UI_KDRPanel__OnJoinRandomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x40bdb40

void UI_KDRPanel__OnJoinRandomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method
               )

{
  return;
}


// UI.KDRPanel$$OnLeftRoom
// il2cpp: void UI_KDRPanel__OnLeftRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bdb50

void UI_KDRPanel__OnLeftRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$.ctor
// il2cpp: void UI_KDRPanel___ctor (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x40bdb60

void UI_KDRPanel___ctor(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (DAT_05704692 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_UI_PlayerKDRRow);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UI_TeamKDRRow);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__TeamKDRRow);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__PlayerKDRRow);
    il2cpp_init_method_metadata(&"Individuals");
    DAT_05704692 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_int__PlayerKDRRow);
  System_Collections_Generic_Dictionary<int__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_UI_PlayerKDRRow);
  (__this->fields)._players =
       (System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._players,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__TeamKDRRow);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_String_UI_TeamKDRRow);
  (__this->fields)._teamHeaders =
       (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._teamHeaders,__this_01);
  (__this->fields)._currentSyncDelay = 1.0;
  (__this->fields)._defaultTeam = "Individuals";
  il2cpp_runtime_glue(&(__this->fields)._defaultTeam);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$<ReorganizeLayout>b__14_1
// il2cpp: System_String_o* UI_KDRPanel___ReorganizeLayout_b__14_1 (UI_KDRPanel_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x40bdc50

System_String_o *
UI_KDRPanel__<ReorganizeLayout>b__14_1
          (UI_KDRPanel_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  UI_PlayerKDRRow_o *pUVar2;
  UI_PlayerKDRRow_o *extraout_RDX;
  UI_PlayerKDRRow_o *method_00;
  
  pUVar2 = x.fields.value;
  method_00 = pUVar2;
  if (DAT_05704693 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_get_Value,x.fields._0_8_);
    DAT_05704693 = '\x01';
    method_00 = extraout_RDX;
  }
  if (pUVar2 != (UI_PlayerKDRRow_o *)0x0) {
    pSVar1 = UI_KDRPanel__GetPlayerTeam
                       (__this,(Photon_Realtime_Player_o *)(pUVar2->fields).player,
                        (MethodInfo *)method_00);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


