// Type: UI.ScoreboardScorePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardScorePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs
// --------------------------------

// UI.ScoreboardScorePanel.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass18_0___ctor (UI_ScoreboardScorePanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5d4e780

void UI_ScoreboardScorePanel___c__DisplayClass18_0___ctor
               (UI_ScoreboardScorePanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass18_0$$<OnClickKick>b__0
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass18_0___OnClickKick_b__0 (UI_ScoreboardScorePanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5d4e790

void UI_ScoreboardScorePanel___c__DisplayClass18_0___OnClickKick_b__0
               (UI_ScoreboardScorePanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardScorePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardScorePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardScorePanel__FinishKickPlayer(__this_00,(__this->fields).player,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardScorePanel__get_VerticalSpacing (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x5d4bcf0

float UI_ScoreboardScorePanel__get_VerticalSpacing(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 6.0;
}


// UI.ScoreboardScorePanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardScorePanel__get_VerticalPadding (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x5d4bd00

int32_t UI_ScoreboardScorePanel__get_VerticalPadding(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 0x18;
}


// UI.ScoreboardScorePanel$$Setup
// il2cpp: void UI_ScoreboardScorePanel__Setup (UI_ScoreboardScorePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d4bd10

void UI_ScoreboardScorePanel__Setup
               (UI_ScoreboardScorePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Il2CppMethodInitialized_07547ee2 = '\x01';
    method = extraout_RDX;
  }
  UI_ScoreboardCategoryPanel__SetupGisketch((UI_ScoreboardCategoryPanel_o *)__this,parent,method);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor
            ((Gisketch_Aottg2UI_Game_AottgInGameView_o *)method_00,(MethodInfo *)0x0);
  (__this->fields)._view = (Gisketch_Aottg2UI_Game_AottgInGameView_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  UI_ScoreboardScorePanel__Sync(__this,method_00);
  return;
}


// UI.ScoreboardScorePanel$$Update
// il2cpp: void UI_ScoreboardScorePanel__Update (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x5d4bd80

void UI_ScoreboardScorePanel__Update(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

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
  UI_ScoreboardScorePanel__Sync(__this,method);
  return;
}


// UI.ScoreboardScorePanel$$Sync
// il2cpp: void UI_ScoreboardScorePanel__Sync (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x5d49980
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d499b3: jmp 0x5d49b12
// asm:   0x5d49a5b: mov rsi, rax
// asm:   0x5d49a5e: lea rdi, [r15 + 0x80]
// asm:   0x5d49a65: jmp 0x5d49a7b

void UI_ScoreboardScorePanel__Sync(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_array *pPVar1;
  Il2CppObject *obj;
  Il2CppObject *pIVar2;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  Photon_Realtime_Room_o *pPVar3;
  MethodInfo *method_00;
  UI_ElementStyle_o *style;
  MethodInfo *in_R8;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_07547ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_Player_array);
    Il2CppMethodInitialized_07547ee3 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05d499f6;
label_05d499a7:
    pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05d499a7;
label_05d499f6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  if (pPVar1 != (Photon_Realtime_Player_array *)0x0) {
    obj = System_Array__Clone((System_Array_o *)pPVar1,(MethodInfo *)0x0);
    pIVar4 = TypeInfo_Photon_Realtime_Player_array;
    if (obj == (Il2CppObject *)0x0) {
      (__this->fields)._lastPlayers = (Photon_Realtime_Player_array *)0x0;
    }
    else {
      pPVar1 = (Photon_Realtime_Player_array *)
               il2cpp_vm_Object_IsInst(obj,TypeInfo_Photon_Realtime_Player_array);
      if (pPVar1 == (Photon_Realtime_Player_array *)0x0) {
label_05d49b17:
        il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
      }
      (__this->fields)._lastPlayers = pPVar1;
      pIVar4 = TypeInfo_Photon_Realtime_Player_array;
      pIVar2 = il2cpp_vm_Object_IsInst(obj,TypeInfo_Photon_Realtime_Player_array);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05d49b17;
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastPlayers);
    themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    style = (UI_ElementStyle_o *)&g_data_00000020;
    UI_ElementStyle___ctor(__this_00,0x20,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._lastPlayers;
    if ((pPVar1 != (Photon_Realtime_Player_array *)0x0) &&
       (pPVar3 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0),
       pPVar3 != (Photon_Realtime_Room_o *)0x0)) {
      UI_ScoreboardScorePanel__SetHeader
                (__this,style,(int32_t)pPVar1->max_length,(pPVar3->fields).maxPlayers,in_R8);
      UI_ScoreboardScorePanel__SetRows(__this,__this_00,method_00);
      (__this->fields)._currentSyncDelay = 1.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$SetRows
// il2cpp: void UI_ScoreboardScorePanel__SetRows (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d4c440
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4c56e: jmp 0x5d4c684
// asm:   0x5d4c5b6: jmp 0x5d4c684

void UI_ScoreboardScorePanel__SetRows
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *obj;
  Photon_Realtime_Player_array *pPVar6;
  Il2CppRGCTXData *method_00;
  ulong uVar7;
  int iVar8;
  System_Collections_Generic_List_Transform__o *pSVar9;
  
  if (Il2CppMethodInitialized_07547ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_RemoveAt)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ee4 = '\x01';
  }
  method_00 = (Il2CppRGCTXData *)(__this->fields)._rows;
  if ((method_00 != (Il2CppRGCTXData *)0x0) &&
     (pPVar6 = (__this->fields)._lastPlayers, pPVar6 != (Photon_Realtime_Player_array *)0x0)) {
    iVar2 = *(int *)&method_00[3].rgctxDataDummy;
    iVar8 = (int)pPVar6->max_length;
    if (iVar8 < iVar2) {
      iVar8 = -1;
      do {
        iVar8 = iVar8 + 1;
        if (iVar2 - (int)pPVar6->max_length <= iVar8) goto label_05d4c628;
        pSVar9 = (__this->fields)._rows;
        if ((pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) ||
           (pUVar5 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar9,
                                (pSVar9->fields)._size + -1,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_Transform_get_Item),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) break;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
        pSVar9 = (__this->fields)._rows;
        if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar9,(pSVar9->fields)._size + -1,
                   (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Transform_RemoveAt);
        pPVar6 = (__this->fields)._lastPlayers;
      } while (pPVar6 != (Photon_Realtime_Player_array *)0x0);
    }
    else if (iVar2 < iVar8) {
      iVar8 = -1;
      do {
        while( true ) {
          iVar8 = iVar8 + 1;
          if ((int)pPVar6->max_length - iVar2 <= iVar8) goto label_05d4c628;
          pSVar9 = (__this->fields)._rows;
          if (pSVar9 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_05d4c684;
          style = (UI_ElementStyle_o *)
                  UI_ScoreboardScorePanel__CreateRow
                            (__this,style,(pSVar9->fields)._size,(MethodInfo *)method_00);
          pMVar4 = MethodInfo_System_Collections_Generic_List_Transform_Add;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          method_00 = (Il2CppRGCTXData *)(pSVar9->fields)._items;
          if (method_00 == (Il2CppRGCTXData *)0x0) goto label_05d4c684;
          uVar3 = (pSVar9->fields)._size;
          if (*(uint *)&method_00[3].rgctxDataDummy <= uVar3) break;
          (pSVar9->fields)._size = uVar3 + 1;
          method_00[(long)(int)uVar3 + 4].method = (MethodInfo *)style;
          Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar3 + 4].rgctxDataDummy);
          pPVar6 = (__this->fields)._lastPlayers;
          if (pPVar6 == (Photon_Realtime_Player_array *)0x0) goto label_05d4c684;
        }
        method_00 = pMVar4->klass->rgctx_data;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)style,
                   (MethodInfo_395D230 *)method_00[0xe].method);
        pPVar6 = (__this->fields)._lastPlayers;
      } while (pPVar6 != (Photon_Realtime_Player_array *)0x0);
    }
    else {
label_05d4c628:
      pSVar9 = (__this->fields)._rows;
      if (pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0) {
        uVar7 = 0;
        do {
          if ((long)(pSVar9->fields)._size <= (long)uVar7) {
            return;
          }
          pUVar5 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar9,(int32_t)uVar7,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          pPVar6 = (__this->fields)._lastPlayers;
          if (pPVar6 == (Photon_Realtime_Player_array *)0x0) break;
          if (*(uint *)&pPVar6->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          UI_ScoreboardScorePanel__SetRow
                    (__this,pUVar5,(Photon_Realtime_Player_o *)pPVar6->m_Items[uVar7],(MethodInfo *)pPVar6);
          uVar7 = uVar7 + 1;
          pSVar9 = (__this->fields)._rows;
        } while (pSVar9 != (System_Collections_Generic_List_Transform__o *)0x0);
      }
    }
  }
label_05d4c684:
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$SetHeader
// il2cpp: void UI_ScoreboardScorePanel__SetHeader (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t currentPlayers, int32_t maxPlayers, const MethodInfo* method);
// 0x5d4bdd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4c2c6: jmp 0x5d4c2ea

void UI_ScoreboardScorePanel__SetHeader
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t currentPlayers,
               int32_t maxPlayers,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  TMPro_TMP_Text_o *pTVar4;
  System_String_o *pSVar5;
  System_String_array *values;
  CustomLogic_CustomLogicEvaluator_o *pCVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  int32_t local_38;
  int32_t local_34;
  
  local_38 = maxPlayers;
  local_34 = currentPlayers;
  if (Il2CppMethodInitialized_07547ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Action");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameTableHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameColumnHeading");
    Il2CppMethodInitialized_07547ee5 = '\x01';
  }
  pUVar3 = (__this->fields)._header;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._header;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._view;
    pUVar3 = (__this->fields).SinglePanel;
    fVar10 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                       (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_05d4c439;
    pUVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,pUVar3,"inGameTableHeader",fVar10 + -80.0,48.0,true,
                        (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
    *targetAddress = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,*targetAddress,"",440.0,40.0,"inGameColumnHeading",
                        (MethodInfo *)0x0);
    if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_05d4c439;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pTVar4,"Player",(MethodInfo *)0x0);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,*targetAddress,"",440.0,40.0,"inGameColumnHeading",
                        (MethodInfo *)0x0);
    if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_05d4c439;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pTVar4,"Score",(MethodInfo *)0x0);
    pUVar3 = *targetAddress;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Action",
                        "","",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar3,pSVar5,220.0,40.0,"inGameColumnHeading",(MethodInfo *)0x0);
    pUVar3 = *targetAddress;
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Ping",
                        "","",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar3,pSVar5,220.0,40.0,"inGameColumnHeading",(MethodInfo *)0x0);
  }
  if ((*targetAddress == (UnityEngine_Transform_o *)0x0) ||
     (pUVar3 = UnityEngine_Transform__Find(*targetAddress,"Player",(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_05d4c439;
  pTVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar3,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar5 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Scoreboard","Player","",
                      "",(MethodInfo *)0x0);
  if (values == (System_String_array *)0x0) goto label_05d4c439;
  if ((int)values->max_length == 0) {
label_05d4c434:
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[0] = pSVar5;
  Il2CppCodeGenWriteBarrier(values->m_Items);
  if ((values->max_length & 0xfffffffe) == 0) goto label_05d4c434;
  values->m_Items[1] = " (";
  Il2CppCodeGenWriteBarrier(values->m_Items + 1);
  pSVar5 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  if ((uint)values->max_length < 3) goto label_05d4c434;
  values->m_Items[2] = pSVar5;
  Il2CppCodeGenWriteBarrier(values->m_Items + 2);
  if ((values->max_length & 0xfffffffc) == 0) goto label_05d4c434;
  values->m_Items[3] = "/";
  Il2CppCodeGenWriteBarrier(values->m_Items + 3);
  pSVar5 = System_Int32__ToString(&local_38,(MethodInfo *)0x0);
  if ((uint)values->max_length < 5) goto label_05d4c434;
  values->m_Items[4] = pSVar5;
  Il2CppCodeGenWriteBarrier(values->m_Items + 4);
  if ((uint)values->max_length < 6) goto label_05d4c434;
  values->m_Items[5] = ")";
  Il2CppCodeGenWriteBarrier(values->m_Items + 5);
  pSVar5 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
  if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_05d4c439;
  (*(pTVar4->klass->vtable)._66_set_text.methodPtr)(pTVar4,pSVar5,(pTVar4->klass->vtable)._66_set_text.method)
  ;
  if ((*targetAddress == (UnityEngine_Transform_o *)0x0) ||
     (pUVar3 = UnityEngine_Transform__Find(*targetAddress,"Score",(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_05d4c439;
  pTVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar3,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar6 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4c2e1;
label_05d4c2ea:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Score",
                        "","",(MethodInfo *)0x0);
  }
  else {
    pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4c2ea;
label_05d4c2e1:
    pSVar5 = (pCVar6->fields).ScoreboardHeader;
    if (pSVar5 == (System_String_o *)0x0) goto label_05d4c2ea;
  }
  if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar4->klass->vtable)._66_set_text.methodPtr)
              (pTVar4,pSVar5,(pTVar4->klass->vtable)._66_set_text.method);
    if ((*targetAddress != (UnityEngine_Transform_o *)0x0) &&
       (pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                           ((UnityEngine_Component_o *)*targetAddress,
                            (MethodInfo_34B11B0 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text),
       pSVar7 != (System_Object_array *)0x0)) {
      if ((int)pSVar7->max_length < 1) {
        fVar10 = 48.0;
      }
      else {
        uVar8 = pSVar7->max_length & 0xffffffff;
        fVar10 = 48.0;
        uVar9 = 0;
        do {
          if (uVar8 <= uVar9) goto label_05d4c434;
          pTVar4 = (TMPro_TMP_Text_o *)pSVar7->m_Items[uVar9];
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
          }
          fVar11 = Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight(pTVar4,40.0,(MethodInfo *)0x0);
          if (fVar10 <= fVar11 + 8.0) {
            fVar10 = fVar11 + 8.0;
          }
          uVar9 = uVar9 + 1;
          uVar1 = (uint)pSVar7->max_length;
          uVar8 = (ulong)uVar1;
        } while ((long)uVar9 < (long)(int)uVar1);
      }
      pUVar3 = *targetAddress;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight(pUVar3,fVar10,(MethodInfo *)0x0);
      return;
    }
  }
label_05d4c439:
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$CreateRow
// il2cpp: UnityEngine_Transform_o* UI_ScoreboardScorePanel__CreateRow (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t index, const MethodInfo* method);
// 0x5d4c6a0

UnityEngine_Transform_o *
UI_ScoreboardScorePanel__CreateRow
          (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  PatreonEffects_EffectText_o *__this_01;
  TMPro_TMP_Text_o *pTVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Button_o *pUVar7;
  float fVar8;
  int32_t local_3c;
  System_Nullable_float__Fields local_38;
  
  local_3c = index;
  if (Il2CppMethodInitialized_07547ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameRow");
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"Actions");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameRowAlternate");
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.mute");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"MutePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07547ee6 = '\x01';
  }
  pSVar6 = "inGameRowAlternate";
  pSVar5 = "inGameRow";
  __this_00 = (__this->fields)._view;
  pUVar1 = (__this->fields).SinglePanel;
  fVar8 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    if ((index & 1U) == 0) {
      pSVar6 = pSVar5;
    }
    pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,pUVar1,pSVar6,fVar8 + -80.0,58.0,true,(System_Nullable_float__o)0x0,
                        (MethodInfo *)0x0);
    pUVar2 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,pUVar1,"clear",440.0,58.0,true,(System_Nullable_float__o)0x0,
                        (MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)pUVar2,"Player",(MethodInfo *)0x0);
      pUVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage(__this_00,pUVar2,28.0,28.0,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)pUVar3,"Status",(MethodInfo *)0x0);
        pUVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
                           (__this_00,pUVar2,28.0,28.0,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_Object__set_name((UnityEngine_Object_o *)pUVar3,"Loadout",(MethodInfo *)0x0)
          ;
          __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName
                                (__this_00,pUVar2,370.0,(MethodInfo *)0x0);
          if (__this_01 != (PatreonEffects_EffectText_o *)0x0) {
            UnityEngine_Object__set_name
                      ((UnityEngine_Object_o *)__this_01,"Name",(MethodInfo *)0x0);
            pTVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                               (__this_00,pUVar1,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                440.0,40.0,"inGameText",(MethodInfo *)0x0);
            if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
              UnityEngine_Object__set_name
                        ((UnityEngine_Object_o *)pTVar4,"Score",(MethodInfo *)0x0);
              local_38.hasValue = false;
              local_38._1_3_ = 0;
              local_38.value = 0.0;
              System_Nullable_float____ctor
                        ((System_Nullable_float__o *)&local_38,4.0,
                         (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
              pUVar2 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                 (__this_00,pUVar1,"clear",220.0,58.0,true,
                                  (System_Nullable_float__o)local_38,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Object__set_name
                          ((UnityEngine_Object_o *)pUVar2,"Actions",(MethodInfo *)0x0);
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pSVar5 = UI_UIManager__GetLocaleCommon("Profile",(MethodInfo *)0x0);
                pSVar6 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
                pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                   (__this_00,pUVar2,pSVar5,"ingame.player.profile",pSVar6,68.0,36.0,3,
                                    (MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                  UnityEngine_Object__set_name
                            ((UnityEngine_Object_o *)pUVar7,"Profile",(MethodInfo *)0x0);
                  pSVar5 = UI_UIManager__GetLocale
                                     ("ScoreboardPopup","MutePopup","Title",
                                      "","",(MethodInfo *)0x0);
                  pSVar6 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
                  pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                     (__this_00,pUVar2,pSVar5,"ingame.player.mute",pSVar6,68.0,36.0,3,
                                      (MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                    UnityEngine_Object__set_name
                              ((UnityEngine_Object_o *)pUVar7,"Mute",(MethodInfo *)0x0);
                    pSVar5 = UI_UIManager__GetLocale
                                       ("ScoreboardPopup","Moderation","Kick",
                                        "","",(MethodInfo *)0x0);
                    pSVar6 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
                    pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                       (__this_00,pUVar2,pSVar5,"ingame.player.kick",pSVar6,68.0,36.0,3,
                                        (MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                      UnityEngine_Object__set_name
                                ((UnityEngine_Object_o *)pUVar7,"Kick",(MethodInfo *)0x0);
                      pTVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                                         (__this_00,pUVar1,"0",220.0,40.0,
                                          "inGameText",(MethodInfo *)0x0);
                      if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
                        UnityEngine_Object__set_name
                                  ((UnityEngine_Object_o *)pTVar4,"Ping",(MethodInfo *)0x0);
                        return pUVar1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$SetRow
// il2cpp: void UI_ScoreboardScorePanel__SetRow (UI_ScoreboardScorePanel_o* __this, UnityEngine_Transform_o* row, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d4cc30
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4d0db: jmp 0x5d4e2ec
// asm:   0x5d4d37e: je 0x5d4d68e
// asm:   0x5d4d662: jmp 0x5d4e2ec
// asm:   0x5d4d686: jmp 0x5d4e2ec
// asm:   0x5d4d68b: mov rbx, r15
// asm:   0x5d4da40: jmp 0x5d4e2ec
// asm:   0x5d4ddee: jmp 0x5d4e2ec
// asm:   0x5d4ddf3: mov r12, qword ptr [rsp + 0x48]
// asm:   0x5d4ddf8: lea r13, [rip + 0x152dc39]  ; TypeInfo_GameManagers_PlayerProperty
// asm:   0x5d4ddff: test rbp, rbp
// asm:   0x5d4dfd8: jmp 0x5d4e2d1
// asm:   0x5d4dfdd: mov rdi, qword ptr [r13]
// asm:   0x5d4dfe1: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5d4dfe8: jne 0x5d4dff3
// asm:   0x5d4e09a: mov rdi, qword ptr [r13]
// asm:   0x5d4e09e: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5d4e0a5: jne 0x5d4e0b0
// asm:   0x5d4e150: lea rbx, [rip + 0x152ac01]  ; TypeInfo_GameManagers_HumanLoadout
// asm:   0x5d4e157: mov rdi, qword ptr [rbx]
// asm:   0x5d4e15a: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5d4e161: jne 0x5d4e16b
// asm:   0x5d4e20a: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d4e20f: jmp 0x5d4d9c3
// asm:   0x5d4e214: lea rbx, [rip + 0x152ab3d]  ; TypeInfo_GameManagers_HumanLoadout
// asm:   0x5d4e21b: mov rdi, qword ptr [rbx]
// asm:   0x5d4e21e: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5d4e225: jne 0x5d4e22f

void UI_ScoreboardScorePanel__SetRow
               (UI_ScoreboardScorePanel_o *__this,UnityEngine_Transform_o *row,
               Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int32_t id;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  MethodInfo *pMVar3;
  undefined4 effect;
  bool bVar4;
  bool includeMC;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_string__o *__this_01;
  ulong uVar7;
  Il2CppObject *pIVar8;
  System_String_array *pSVar9;
  System_String_o *__this_02;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_RawImage_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Texture_o *value;
  System_String_o **ppSVar13;
  CustomLogic_CustomLogicEvaluator_o *pCVar14;
  PatreonEffects_EffectText_o *__this_03;
  TMPro_TMP_FontAsset_o *value_00;
  UnityEngine_Transform_o *pUVar15;
  TMPro_TMP_Text_o *pTVar16;
  Photon_Realtime_Player_o *pPVar17;
  ulong uVar18;
  System_String_o *__this_04;
  Photon_Realtime_Player_o *__this_05;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorD;
  int32_t local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  UI_ScoreboardScorePanel_o *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  UnityEngine_Transform_o *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  System_String_o *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  UnityEngine_Color_Fields local_c8;
  System_String_o *local_b0;
  undefined1 local_a8 [8];
  UnityEngine_UI_RawImage_o *pUStack_a0;
  System_String_o *local_98;
  System_String_o *pSStack_90;
  Photon_Realtime_Player_o *local_88;
  undefined1 auStack_80 [8];
  System_String_o *local_78;
  UnityEngine_Color_Fields UStack_70;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  UnityEngine_Color_Fields local_48;
  
  local_130 = __this;
  if (Il2CppMethodInitialized_07547ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ThunderspearIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"DeadColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"Actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadoutTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadoutShifter");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/APGIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/BladeIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Specials/NoneSpecialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/SpectateIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/Skull1Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/TitanIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateColor");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadoutHuman");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07547ee7 = '\x01';
  }
  local_78 = (System_String_o *)0x0;
  UStack_70.r = 0.0;
  UStack_70.g = 0.0;
  local_88 = (Photon_Realtime_Player_o *)0x0;
  auStack_80._0_4_ = 0.0;
  auStack_80._4_4_ = 0.0;
  local_98 = (System_String_o *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  local_a8[0] = false;
  local_a8._1_3_ = 0;
  local_a8._4_4_ = 0;
  pUStack_a0 = (UnityEngine_UI_RawImage_o *)0x0;
  UStack_70.b = 0.0;
  UStack_70.a = 0.0;
  local_14c = 0;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar5 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  local_f0 = MiscExtensions__TruncateRichText(pSVar5,0xf,(MethodInfo *)0x0);
  local_e8 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                        "",(MethodInfo *)0x0);
  local_108 = PhotonExtensions__GetStringProperty
                        (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                         "",(MethodInfo *)0x0);
  local_d8 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                        "",(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  local_110 = row;
  if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_05d4d0e0:
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pIVar6 = SZArrayNew(TypeInfo_string_array,4);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05d4e2ec;
    if (*(int *)&pIVar6[1].monitor == 0) {
label_05d4e2cc:
      ThrowIndexOutOfRangeException();
    }
    pIVar6[2].klass = (Il2CppClass *)"Kills";
    Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
    if (((ulong)pIVar6[1].monitor & 0xfffffffe) == 0) goto label_05d4e2cc;
    pIVar6[2].monitor = "Deaths";
    Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor);
    if (*(uint *)&pIVar6[1].monitor < 3) goto label_05d4e2cc;
    pIVar6[3].klass = (Il2CppClass *)"HighestDamage";
    Il2CppCodeGenWriteBarrier(&pIVar6[3].klass);
    if (((ulong)pIVar6[1].monitor & 0xfffffffc) == 0) goto label_05d4e2cc;
    pIVar6[3].monitor = "TotalDamage";
    Il2CppCodeGenWriteBarrier(&pIVar6[3].monitor);
    if ((int)pIVar6[1].monitor < 1) {
      local_14c = 0;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d4e2ec;
    }
    else {
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
        pIVar6 = PhotonExtensions__GetCustomProperty
                           (player,(System_String_o *)pIVar6[2].klass,(MethodInfo *)0x0);
        if (pIVar6 != (Il2CppObject *)0x0) {
          (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
          ThrowNullReferenceException();
        }
        goto label_05d4e2ec;
      }
      uVar7 = (ulong)pIVar6[1].monitor & 0xffffffff;
      uVar18 = 0;
      do {
        if (uVar7 <= uVar18) goto label_05d4e2cc;
        pIVar8 = PhotonExtensions__GetCustomProperty
                           (player,(System_String_o *)(&pIVar6[2].klass)[uVar18],(MethodInfo *)0x0);
        if (pIVar8 == (Il2CppObject *)0x0) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          pSVar5 = (System_String_o *)
                   (*pIVar8->klass->vtable[3].methodPtr)(pIVar8,pIVar8->klass->vtable[3].method);
        }
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_01->fields)._items;
        if (pSVar9 == (System_String_array *)0x0) goto label_05d4e2ec;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        uVar18 = uVar18 + 1;
        uVar7 = (ulong)*(uint *)&pIVar6[1].monitor;
      } while ((long)uVar18 < (long)(int)*(uint *)&pIVar6[1].monitor);
      local_14c = (int32_t)uVar18;
    }
    pSVar9 = (System_String_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this_01,
                        (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar5 = System_String__Join(" / ",pSVar9,(MethodInfo *)0x0);
    row = local_110;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4e2ec;
    }
    bVar4 = System_String__op_Inequality
                      ((pCVar14->fields).ScoreboardProperty,
                       (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (!bVar4) goto label_05d4d0e0;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4e2ec;
    pIVar6 = PhotonExtensions__GetCustomProperty
                       (player,(pCVar14->fields).ScoreboardProperty,(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar5 = (System_String_o *)
               (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
    }
  }
  local_128 = player;
  if ((row == (UnityEngine_Transform_o *)0x0) ||
     (__this_02 = (System_String_o *)UnityEngine_Transform__Find(row,"Player",(MethodInfo *)0x0),
     __this_02 == (System_String_o *)0x0)) goto label_05d4e2ec;
  local_b0 = pSVar5;
  pUVar10 = UnityEngine_Transform__Find
                      ((UnityEngine_Transform_o *)__this_02,"Status",(MethodInfo *)0x0);
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05d4e2ec;
  pUVar11 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar10,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_05d4d68e:
    if ((pUVar11 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d4e2ec;
    UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d4d63a;
label_05d4d6ca:
    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4d657;
label_05d4d6de:
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4e2ec;
    }
    fVar23 = (float)(uint)(pCVar14->fields).ShowScoreboardLoadout;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4e2ec;
    }
    if ((pCVar14->fields).ShowScoreboardStatus == false) goto label_05d4d68e;
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar4 = System_String__op_Equality
                      (local_e8,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
                       (MethodInfo *)0x0);
    if (bVar4) {
      if ((pUVar11 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
         pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d4e2ec;
      UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar5,"Icons/Game/SpectateIcon",true,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05d4e2d1;
      UnityEngine_UI_RawImage__set_texture(pUVar11,value,(MethodInfo *)0x0);
      pSVar5 = (*(local_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (local_130,(local_130->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      ppSVar13 = &"SpectateColor";
    }
    else {
      if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
      }
      bVar4 = System_String__op_Equality
                        (local_e8,TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,(MethodInfo *)0x0);
      if (!bVar4) goto label_05d4d68e;
      if ((pUVar11 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
         pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d4e2ec;
      UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar5,"Icons/Quests/Skull1Icon",true,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05d4e2d1;
      UnityEngine_UI_RawImage__set_texture(pUVar11,value,(MethodInfo *)0x0);
      pSVar5 = (*(local_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (local_130,(local_130->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      ppSVar13 = &"DeadColor";
    }
    UVar35 = UI_UIManager__GetThemeColor
                       (pSVar5,"Icon",*ppSVar13,"DefaultPanel",(MethodInfo *)0x0);
    (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
              (pUVar11,UVar35,(pUVar11->klass->vtable)._23_set_color.method);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d4d6ca;
label_05d4d63a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar14 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d4d6de;
label_05d4d657:
    fVar23 = 0.0;
  }
  if ((__this_02 == (System_String_o *)0x0) ||
     (pUVar10 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)__this_02,"Loadout",(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05d4e2ec;
  local_148 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar10,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
  local_c8.r = fVar23;
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  pSVar5 = local_108;
  bVar4 = System_String__op_Equality
                    (local_108,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar5 = (*(local_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (local_130,(local_130->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UVar35 = UI_UIManager__GetThemeColor
                       (pSVar5,"Icon","LoadoutHuman","DefaultPanel",
                        (MethodInfo *)0x0);
    if (local_148 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d4e2ec;
    (*(local_148->klass->vtable)._23_set_color.methodPtr)
              (local_148,UVar35,(local_148->klass->vtable)._23_set_color.method);
    pSVar5 = local_d8;
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pUVar11 = local_148;
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ppSVar13 = &"Icons/Game/BladeIcon";
      goto label_05d4d98e;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    __this_05 = local_128;
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
    if (bVar4) {
      local_108 = (System_String_o *)0x0;
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar5,"Icons/Game/AHSSIcon",true,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05d4e2d1;
      pUVar11 = local_148;
label_05d4d9c3:
      UnityEngine_UI_RawImage__set_texture(pUVar11,value,(MethodInfo *)0x0);
      goto label_05d4d9d0;
    }
    local_108 = __this_02;
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    pUVar11 = local_148;
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
    __this_04 = local_108;
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar5,"Icons/Game/APGIcon",true,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05d4e2d1;
      goto label_05d4d9c3;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                       (MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar5,"Icons/Game/ThunderspearIcon",true,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05d4e2d1;
      __this_02 = local_108;
      goto label_05d4d9c3;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,(MethodInfo *)0x0);
    if (bVar4) {
label_05d4e283:
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ppSVar13 = &"Icons/Specials/NoneSpecialIcon";
      __this_02 = __this_04;
      goto label_05d4dfa2;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,(MethodInfo *)0x0);
    if (bVar4) goto label_05d4e283;
  }
  else {
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    pUVar11 = local_148;
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar5 = (*(local_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (local_130,(local_130->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UVar35 = UI_UIManager__GetThemeColor
                         (pSVar5,"Icon","LoadoutTitan","DefaultPanel",
                          (MethodInfo *)0x0);
      if (pUVar11 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d4e2ec;
      (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                (pUVar11,UVar35,(pUVar11->klass->vtable)._23_set_color.method);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ppSVar13 = &"Icons/Game/TitanIcon";
label_05d4d98e:
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar5,*ppSVar13,true,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) goto label_05d4e2d1;
      __this_05 = local_128;
      goto label_05d4d9c3;
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    __this_05 = local_128;
    bVar4 = System_String__op_Equality
                      (pSVar5,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      pSVar5 = (*(local_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (local_130,(local_130->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UVar35 = UI_UIManager__GetThemeColor
                         (pSVar5,"Icon","LoadoutShifter","DefaultPanel",
                          (MethodInfo *)0x0);
      if (local_148 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d4e2ec;
      (*(local_148->klass->vtable)._23_set_color.methodPtr)
                (local_148,UVar35,(local_148->klass->vtable)._23_set_color.method);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ppSVar13 = &"Icons/Game/ShifterIcon";
label_05d4dfa2:
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar5,*ppSVar13,true,false,(MethodInfo *)0x0);
      pUVar11 = local_148;
      if ((value != (UnityEngine_Texture_o *)0x0) &&
         (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
label_05d4e2d1:
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      goto label_05d4d9c3;
    }
label_05d4d9d0:
    __this_04 = __this_02;
  }
  if (local_c8.r == 0.0) {
label_05d4da13:
    if ((pUVar11 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d4e2ec;
    UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar4 = System_String__op_Equality
                      (local_e8,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
                       (MethodInfo *)0x0);
    if (bVar4) goto label_05d4da13;
    if ((pUVar11 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d4e2ec;
    UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
  }
  if (__this_05 != (Photon_Realtime_Player_o *)0x0) {
    id = (__this_05->fields).actorNumber;
    includeMC = Photon_Realtime_Player__get_IsMasterClient(__this_05,(MethodInfo *)0x0);
    bVar4 = (__this_05->fields).IsLocal;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar5 = GameManagers_ChatManager__GetIDString(id,includeMC,bVar4,(MethodInfo *)0x0);
    bVar4 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                      (__this_05,(PatreonEffects_ResolvedNameEffect_o *)local_a8,(MethodInfo *)0x0);
    if (bVar4) {
      effect = local_a8._4_4_;
      uVar19 = (int)pUStack_a0;
      uVar21 = (int)((ulong)pUStack_a0 >> 0x20);
      uVar22 = (int)local_98;
      uVar24 = (int)((ulong)local_98 >> 0x20);
      uVar25 = (int)pSStack_90;
      uVar26 = (int)((ulong)pSStack_90 >> 0x20);
      uVar27 = (int)local_88;
      uVar28 = (int)((ulong)local_88 >> 0x20);
      fVar23 = auStack_80._0_4_;
      fVar20 = auStack_80._4_4_;
      uVar29 = (int)local_78;
      uVar30 = (int)((ulong)local_78 >> 0x20);
      fVar31 = UStack_70.r;
      fVar32 = UStack_70.g;
      fVar33 = UStack_70.b;
      fVar34 = UStack_70.a;
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        local_148 = pUStack_a0;
        uStack_140 = 0;
        local_e8 = local_98;
        uStack_e0 = 0;
        local_108 = pSStack_90;
        uStack_100 = 0;
        local_128 = local_88;
        uStack_120 = 0;
        local_c8.r = (float)auStack_80._0_4_;
        local_c8.g = (float)auStack_80._4_4_;
        local_c8.b = 0.0;
        local_c8.a = 0.0;
        local_d8 = local_78;
        uStack_d0 = 0;
        local_48.r = UStack_70.r;
        local_48.g = UStack_70.g;
        local_48.b = 0.0;
        local_48.a = 0.0;
        local_58 = UStack_70.b;
        fStack_54 = UStack_70.a;
        uStack_50 = 0;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        uVar19 = (undefined4)local_148;
        uVar21 = local_148._4_4_;
        uVar22 = (undefined4)local_e8;
        uVar24 = local_e8._4_4_;
        uVar25 = (undefined4)local_108;
        uVar26 = local_108._4_4_;
        uVar27 = (undefined4)local_128;
        uVar28 = local_128._4_4_;
        fVar23 = local_c8.r;
        fVar20 = local_c8.g;
        uVar29 = (undefined4)local_d8;
        uVar30 = local_d8._4_4_;
        fVar31 = local_48.r;
        fVar32 = local_48.g;
        fVar33 = local_58;
        fVar34 = fStack_54;
      }
      UVar35.fields.g = (float)uVar21;
      UVar35.fields.r = (float)uVar19;
      UVar35.fields.a = (float)uVar24;
      UVar35.fields.b = (float)uVar22;
      colorB.fields.g = (float)uVar26;
      colorB.fields.r = (float)uVar25;
      colorB.fields.a = (float)uVar28;
      colorB.fields.b = (float)uVar27;
      colorC.fields.g = fVar20;
      colorC.fields.r = fVar23;
      colorC.fields.a = (float)uVar30;
      colorC.fields.b = (float)uVar29;
      colorD.fields.g = fVar32;
      colorD.fields.r = fVar31;
      colorD.fields.a = fVar34;
      colorD.fields.b = fVar33;
      local_f0 = PatreonEffects_EffectText__Compose
                           (local_f0,effect,UVar35,colorB,colorC,colorD,(MethodInfo *)0x0);
    }
    if ((__this_04 != (System_String_o *)0x0) &&
       (pUVar10 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"Name",(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_Transform_o *)0x0)) {
      __this_03 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar10,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_EffectText);
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      value_00 = PatreonEffects_NameFontCatalog__FontForPlayer(__this_05,false,(MethodInfo *)0x0);
      if (__this_03 != (PatreonEffects_EffectText_o *)0x0) {
        PatreonEffects_EffectText__set_font(__this_03,value_00,(MethodInfo *)0x0);
        __this_00 = (local_130->fields)._view;
        pSVar5 = System_String__Concat_52f0320(pSVar5,local_f0,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          pSVar5 = Gisketch_Aottg2UI_Game_AottgInGameView__Readable(__this_00,pSVar5,(MethodInfo *)0x0);
          PatreonEffects_EffectText__set_text(__this_03,pSVar5,(MethodInfo *)0x0);
          pUVar10 = local_110;
          pUVar15 = UnityEngine_Transform__Find(local_110,"Score",(MethodInfo *)0x0);
          if ((pUVar15 != (UnityEngine_Transform_o *)0x0) &&
             (pTVar16 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar15,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_TMP_Text),
             pTVar16 != (TMPro_TMP_Text_o *)0x0)) {
            (*(pTVar16->klass->vtable)._66_set_text.methodPtr)
                      (pTVar16,local_b0,(pTVar16->klass->vtable)._66_set_text.method);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
            }
            fVar20 = Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight(pTVar16,40.0,(MethodInfo *)0x0);
            fVar23 = 58.0;
            if (58.0 <= fVar20 + 12.0) {
              fVar23 = fVar20 + 12.0;
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight(pUVar10,fVar23,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_Transform__Find(pUVar10,"Actions",(MethodInfo *)0x0);
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar17 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                (pUVar15 = UnityEngine_Transform__Find(pUVar10,"Mute",(MethodInfo *)0x0),
                pUVar15 != (UnityEngine_Transform_o *)0x0)) &&
               (pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
               pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar12,pPVar17 != __this_05,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_Transform__Find(pUVar10,"Kick",(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                bVar4 = false;
                pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                pUVar10 = local_110;
                if (pPVar17 != __this_05) {
                  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                  }
                  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                }
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar12,bVar4,(MethodInfo *)0x0);
                  pUVar10 = UnityEngine_Transform__Find(pUVar10,"Ping",(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    pTVar16 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar10,
                                         (MethodInfo_34B0830 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
                    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                    }
                    local_14c = PhotonExtensions__GetIntProperty
                                          (__this_05,TypeInfo_GameManagers_PlayerProperty->static_fields->Ping
                                           ,0,(MethodInfo *)0x0);
                    pSVar5 = System_Int32__ToString(&local_14c,(MethodInfo *)0x0);
                    if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
                      (*(pTVar16->klass->vtable)._66_set_text.methodPtr)
                                (pTVar16,pSVar5,(pTVar16->klass->vtable)._66_set_text.method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05d4e2ec:
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$OnClickProfile
// il2cpp: void UI_ScoreboardScorePanel__OnClickProfile (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d4e310

void UI_ScoreboardScorePanel__OnClickProfile
               (UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Photon_Realtime_Player_array *pPVar3;
  UI_BasePanel_o *pUVar4;
  UI_ScoreboardProfilePopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardPopup);
    Il2CppMethodInitialized_07547ee8 = '\x01';
  }
  pPVar3 = (__this->fields)._lastPlayers;
  if (((pPVar3 == (Photon_Realtime_Player_array *)0x0) || (index < 0)) ||
     (uVar2 = (uint)pPVar3->max_length, (int)uVar2 <= index)) {
    return;
  }
  if (uVar2 <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  pUVar4 = (__this->fields).Parent;
  if (pUVar4 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_ScoreboardPopup->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
        (Il2CppClass *)TypeInfo_UI_ScoreboardPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (UI_ScoreboardProfilePopup_o *)(*(uint64_t *)((char *)pUVar4 + 0xb0));
    if (__this_00 != (UI_ScoreboardProfilePopup_o *)0x0) {
      UI_ScoreboardProfilePopup__Show(__this_00,pPVar3->m_Items[(uint)index],(MethodInfo *)(ulong)bVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$OnClickKick
// il2cpp: void UI_ScoreboardScorePanel__OnClickKick (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d4e3c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4e4dc: jmp 0x5d4e501

void UI_ScoreboardScorePanel__OnClickKick(UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Photon_Realtime_Player_array *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  UI_BasePanel_o *obj;
  UI_ScoreboardKickPopup_o *__this_00;
  bool bVar4;
  UI_ScoreboardScorePanel___c__DisplayClass18_0_o *__this_01;
  Il2CppObject *pIVar5;
  System_String_o *message;
  UnityEngine_Events_UnityAction_o *__this_02;
  MethodInfo *method_00;
  Photon_Realtime_Player_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0_OnClickKick_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"KickPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ee9 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0);
  UI_ScoreboardScorePanel___c__DisplayClass18_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UI_ScoreboardScorePanel___c__DisplayClass18_0_o *)0x0) {
label_05d4e5d1:
    ThrowNullReferenceException();
  }
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  pPVar2 = (__this->fields)._lastPlayers;
  if (((pPVar2 != (Photon_Realtime_Player_array *)0x0) && (-1 < index)) &&
     (uVar1 = (uint)pPVar2->max_length, index < (int)uVar1)) {
    if (uVar1 <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    targetAddress = &(__this_01->fields).player;
    (__this_01->fields).player = pPVar2->m_Items[(uint)index];
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    if (bVar4) {
      pPVar3 = *targetAddress;
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        if ((pPVar3->fields).IsLocal != false) {
          return;
        }
        obj = (__this->fields).Parent;
        pIVar5 = il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_ScoreboardPopup);
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_codegen_is_inst_class
                             ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_ScoreboardPopup);
          __this_00 = pIVar5[0xb].monitor;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          message = UI_UIManager__GetLocale
                              ("ScoreboardPopup","KickPopup","Confirm",
                               "","",(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          method_00 = (MethodInfo *)0x0;
          UnityEngine_Events_UnityAction___ctor
                    (__this_02,(Il2CppObject *)__this_01,
                     (intptr_t)MethodInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0_OnClickKick_b__0,
                     (MethodInfo *)0x0);
          if (__this_00 != (UI_ScoreboardKickPopup_o *)0x0) {
            UI_ScoreboardKickPopup__Show(__this_00,message,__this_02,method_00);
            return;
          }
        }
      }
      goto label_05d4e5d1;
    }
  }
  return;
}


// UI.ScoreboardScorePanel$$FinishKickPlayer
// il2cpp: void UI_ScoreboardScorePanel__FinishKickPlayer (UI_ScoreboardScorePanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d4e5e0

void UI_ScoreboardScorePanel__FinishKickPlayer
               (UI_ScoreboardScorePanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07547eea = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__KickPlayer(player,true,false,".",(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$OnClickMute
// il2cpp: void UI_ScoreboardScorePanel__OnClickMute (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d4e650

void UI_ScoreboardScorePanel__OnClickMute(UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Photon_Realtime_Player_array *pPVar3;
  UI_BasePanel_o *pUVar4;
  UI_ScoreboardMutePopup_o *__this_00;
  
  if (Il2CppMethodInitialized_07547eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardPopup);
    Il2CppMethodInitialized_07547eeb = '\x01';
  }
  pPVar3 = (__this->fields)._lastPlayers;
  if (((pPVar3 == (Photon_Realtime_Player_array *)0x0) || (index < 0)) ||
     (uVar2 = (uint)pPVar3->max_length, (int)uVar2 <= index)) {
    return;
  }
  if (uVar2 <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  pUVar4 = (__this->fields).Parent;
  if (pUVar4 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_ScoreboardPopup->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
        (Il2CppClass *)TypeInfo_UI_ScoreboardPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (UI_ScoreboardMutePopup_o *)(*(uint64_t *)((char *)pUVar4 + 0xc0));
    if (__this_00 != (UI_ScoreboardMutePopup_o *)0x0) {
      UI_ScoreboardMutePopup__Show(__this_00,pPVar3->m_Items[(uint)index],(MethodInfo *)(ulong)bVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___ctor (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x5d4e700

void UI_ScoreboardScorePanel___ctor(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Transform__o *__this_00;
  
  if (Il2CppMethodInitialized_07547eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    Il2CppMethodInitialized_07547eec = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._rows = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  (__this->fields)._currentSyncDelay = 1.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


