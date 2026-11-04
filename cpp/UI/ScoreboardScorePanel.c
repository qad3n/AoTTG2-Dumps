// Type: UI.ScoreboardScorePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardScorePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs
// --------------------------------

// UI.ScoreboardScorePanel.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass18_0___ctor (UI_ScoreboardScorePanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ScoreboardScorePanel___c__DisplayClass18_0___ctor(UI_ScoreboardScorePanel___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass18_0$$<OnClickKick>b__0
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass18_0___OnClickKick_b__0 (UI_ScoreboardScorePanel___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x1822833b0

void UI_ScoreboardScorePanel___c__DisplayClass18_0___OnClickKick_b__0
               (UI_ScoreboardScorePanel___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  
  if ((__this->fields).__4__this != (UI_ScoreboardScorePanel_o *)0x0) {
    player = (__this->fields).player;
    if (Il2CppMethodInitialized_184347375 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
      il2cpp_codegen_initialize_runtime_metadata(&".");
      Il2CppMethodInitialized_184347375 = '\x01';
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__KickPlayer(player,true,false,".",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardScorePanel__get_VerticalSpacing (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x18227df10

float UI_ScoreboardScorePanel__get_VerticalSpacing(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 6.0;
}


// UI.ScoreboardScorePanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardScorePanel__get_VerticalPadding (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x180846ee0

int32_t
UI_ScoreboardScorePanel__get_VerticalPadding(UI_ScoreboardScorePanel_o* __this, MethodInfo* method)

{
  return 0x18;
}


// UI.ScoreboardScorePanel$$Setup
// il2cpp: void UI_ScoreboardScorePanel__Setup (UI_ScoreboardScorePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18227dc10

void UI_ScoreboardScorePanel__Setup
               (UI_ScoreboardScorePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  
  if (Il2CppMethodInitialized_18434736d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Il2CppMethodInitialized_18434736d = '\x01';
  }
  UI_ScoreboardCategoryPanel__SetupGisketch((UI_ScoreboardCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._view = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view,__this_00);
  UI_ScoreboardScorePanel__Sync(__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$Update
// il2cpp: void UI_ScoreboardScorePanel__Update (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x18227de30

void UI_ScoreboardScorePanel__Update(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (fVar2 <= 0.0) {
    UI_ScoreboardScorePanel__Sync(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.ScoreboardScorePanel$$Sync
// il2cpp: void UI_ScoreboardScorePanel__Sync (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x18227dc90

void UI_ScoreboardScorePanel__Sync(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Photon_Realtime_Player_array *pPVar2;
  Il2CppObject *obj;
  Il2CppObject *value;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  Photon_Realtime_Room_o *pPVar3;
  
  if (Il2CppMethodInitialized_18434736e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_Player_array);
    Il2CppMethodInitialized_18434736e = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
    obj = System_Collections_Hashtable_HashtableEnumerator__Clone
                    ((System_Collections_Hashtable_HashtableEnumerator_o *)pPVar2,(MethodInfo *)0x0);
    pIVar1 = TypeInfo_Photon_Realtime_Player_array;
    if (obj == (Il2CppObject *)0x0) {
      (__this->fields)._lastPlayers = (Photon_Realtime_Player_array *)0x0;
      value = (Il2CppObject *)0x0;
    }
    else {
      pPVar2 = (Photon_Realtime_Player_array *)
               il2cpp_vm_Object_IsInst(obj,TypeInfo_Photon_Realtime_Player_array);
      if (pPVar2 == (Photon_Realtime_Player_array *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar1);
      }
      (__this->fields)._lastPlayers = pPVar2;
      pIVar1 = TypeInfo_Photon_Realtime_Player_array;
      value = il2cpp_vm_Object_IsInst(obj,TypeInfo_Photon_Realtime_Player_array);
      if (value == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar1);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastPlayers,value);
    themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x20,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._lastPlayers;
    if (pPVar2 != (Photon_Realtime_Player_array *)0x0) {
      pPVar3 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar3 != (Photon_Realtime_Room_o *)0x0) {
        UI_ScoreboardScorePanel__SetHeader
                  (__this,__this_00,(int32_t)pPVar2->max_length,(pPVar3->fields).maxPlayers,(MethodInfo *)0x0)
        ;
        UI_ScoreboardScorePanel__SetRows(__this,__this_00,(MethodInfo *)0x0);
        (__this->fields)._currentSyncDelay = 1.0;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$SetRows
// il2cpp: void UI_ScoreboardScorePanel__SetRows (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x18227d990
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227dada: jmp 0x18227da32
// asm:   0x18227db7d: jmp 0x18227dbfd
// asm:   0x18227db8c: nop dword ptr [rax]
// asm:   0x18227dbe0: jmp 0x18227dbfd

void UI_ScoreboardScorePanel__SetRows
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_Transform__o *pSVar3;
  UnityEngine_Transform_array *pUVar4;
  MethodInfo *pMVar5;
  Photon_Realtime_Player_array *pPVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *obj;
  int iVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_18434736f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_RemoveAt)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434736f = '\x01';
  }
  pSVar3 = (__this->fields)._rows;
  if ((pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) &&
     (pPVar6 = (__this->fields)._lastPlayers, pPVar6 != (Photon_Realtime_Player_array *)0x0)) {
    iVar2 = (pSVar3->fields)._size;
    iVar8 = (int)pPVar6->max_length;
    if (iVar8 < iVar2) {
      iVar8 = 0;
      do {
        if (iVar2 - (int)pPVar6->max_length <= iVar8) goto label_18227db7f;
        pSVar3 = (__this->fields)._rows;
        if ((pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) ||
           (pUVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)(__this->fields)._rows,
                                (pSVar3->fields)._size + -1,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Transform_get_Item),
           pUVar7 == (UnityEngine_Transform_o *)0x0)) break;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
        pSVar3 = (__this->fields)._rows;
        if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)(__this->fields)._rows,
                   (pSVar3->fields)._size + -1,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Transform_RemoveAt);
        pPVar6 = (__this->fields)._lastPlayers;
        iVar8 = iVar8 + 1;
      } while (pPVar6 != (Photon_Realtime_Player_array *)0x0);
    }
    else if (iVar2 < iVar8) {
      iVar8 = 0;
      do {
        if ((int)pPVar6->max_length - iVar2 <= iVar8) goto label_18227db7f;
        pSVar3 = (__this->fields)._rows;
        if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        pUVar7 = UI_ScoreboardScorePanel__CreateRow(__this,style,(pSVar3->fields)._size,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_Transform_Add;
        pUVar4 = (pSVar3->fields)._items;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pUVar4 == (UnityEngine_Transform_array *)0x0) break;
        uVar9 = (pSVar3->fields)._size;
        if (uVar9 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar9 + 1;
          if ((uint)pUVar4->max_length <= uVar9) goto label_18227dc03;
          pUVar4->m_Items[(int)uVar9] = pUVar7;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar9,pUVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pPVar6 = (__this->fields)._lastPlayers;
        iVar8 = iVar8 + 1;
      } while (pPVar6 != (Photon_Realtime_Player_array *)0x0);
    }
    else {
label_18227db7f:
      uVar9 = 0;
      pSVar3 = (__this->fields)._rows;
      while (pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) {
        if ((pSVar3->fields)._size <= (int)uVar9) {
          return;
        }
        pSVar3 = (__this->fields)._rows;
        if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) break;
        pUVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,uVar9,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Transform_get_Item
                           );
        pPVar6 = (__this->fields)._lastPlayers;
        if (pPVar6 == (Photon_Realtime_Player_array *)0x0) break;
        if ((uint)pPVar6->max_length <= uVar9) {
label_18227dc03:
          ThrowIndexOutOfRangeException();
        }
        UI_ScoreboardScorePanel__SetRow(__this,pUVar7,pPVar6->m_Items[(int)uVar9],(MethodInfo *)0x0);
        uVar9 = uVar9 + 1;
        pSVar3 = (__this->fields)._rows;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$SetHeader
// il2cpp: void UI_ScoreboardScorePanel__SetHeader (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t currentPlayers, int32_t maxPlayers, const MethodInfo* method);
// 0x18227bd30
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227c2c8: movss xmm6, dword ptr [rip + 0x10dca18]
// asm:   0x18227c2d0: mov ebx, ebp
// asm:   0x18227c2d2: mov eax, ebp

void UI_ScoreboardScorePanel__SetHeader
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t currentPlayers,
               int32_t maxPlayers,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  TMPro_TMP_Text_o *pTVar4;
  System_String_o *pSVar5;
  System_String_array *values;
  System_Object_array *pSVar6;
  System_String_o **ppSVar7;
  uint uVar8;
  float fVar9;
  float height;
  int32_t local_res18 [2];
  int32_t local_res20 [2];
  
  local_res18[0] = currentPlayers;
  local_res20[0] = maxPlayers;
  if (Il2CppMethodInitialized_184347370 == '\0') {
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
    Il2CppMethodInitialized_184347370 = '\x01';
  }
  pUVar3 = (__this->fields)._header;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  height = 48.0;
  uVar8 = 0;
  if (bVar2) {
    __this_00 = (__this->fields)._view;
    pUVar3 = (__this->fields).SinglePanel;
    fVar9 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                      (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_18227c367;
    pUVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,pUVar3,"inGameTableHeader",fVar9 - 80.0,48.0,true,
                        (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
    (__this->fields)._header = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._header,pUVar3);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,(__this->fields)._header,"",440.0,40.0,
                        "inGameColumnHeading",(MethodInfo *)0x0);
    if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_18227c367;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pTVar4,"Player",(MethodInfo *)0x0);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,(__this->fields)._header,"",440.0,40.0,
                        "inGameColumnHeading",(MethodInfo *)0x0);
    if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_18227c367;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)pTVar4,"Score",(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._header;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Action",
                        "","",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar3,pSVar5,220.0,40.0,"inGameColumnHeading",(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._header;
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Ping",
                        "","",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar3,pSVar5,220.0,40.0,"inGameColumnHeading",(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._header;
  if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar3 = UnityEngine_Transform__Find(pUVar3,"Player",(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pTVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Scoreboard","Player",
                        "","",(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar5;
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar5);
        pSVar5 = " (";
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = " (";
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar5);
          pSVar5 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar5;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar5);
            pSVar5 = "/";
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = "/";
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar5);
              pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar5;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar5);
                pSVar5 = ")";
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = ")";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar5);
                  pSVar5 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                  if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
                    (*(pTVar4->klass->vtable)._66_set_text.methodPtr)
                              (pTVar4,pSVar5,(pTVar4->klass->vtable)._66_set_text.method);
                    pUVar3 = (__this->fields)._header;
                    if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
                       (pUVar3 = UnityEngine_Transform__Find(pUVar3,"Score",(MethodInfo *)0x0),
                       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                      pTVar4 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar3,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
                      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                      }
                      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
                          (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                        ppSVar7 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
                      }
                      else {
                        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                        }
                        pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                        if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18227c367;
                        ppSVar7 = &(pCVar1->fields).ScoreboardHeader;
                      }
                      if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
                        (*(pTVar4->klass->vtable)._66_set_text.methodPtr)
                                  (pTVar4,*ppSVar7,(pTVar4->klass->vtable)._66_set_text.method);
                        pUVar3 = (__this->fields)._header;
                        if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
                           (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__665370
                                               ((UnityEngine_Component_o *)pUVar3,
                                                (MethodInfo_665370 *)
                                                MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text
                                               ), pSVar6 != (System_Object_array *)0x0)) {
                          while( true ) {
                            if ((int)pSVar6->max_length <= (int)uVar8) {
                              pUVar3 = (__this->fields)._header;
                              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
                              }
                              Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight
                                        (pUVar3,height,(MethodInfo *)0x0);
                              return;
                            }
                            if ((uint)pSVar6->max_length <= uVar8) break;
                            pTVar4 = (TMPro_TMP_Text_o *)pSVar6->m_Items[(int)uVar8];
                            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
                            }
                            fVar9 = Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight
                                              (pTVar4,40.0,(MethodInfo *)0x0);
                            if (height <= fVar9 + 8.0) {
                              height = fVar9 + 8.0;
                            }
                            uVar8 = uVar8 + 1;
                          }
                          goto label_18227c36d;
                        }
                      }
                    }
                  }
                  goto label_18227c367;
                }
              }
            }
          }
        }
      }
label_18227c36d:
      ThrowIndexOutOfRangeException();
    }
  }
label_18227c367:
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$CreateRow
// il2cpp: UnityEngine_Transform_o* UI_ScoreboardScorePanel__CreateRow (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t index, const MethodInfo* method);
// 0x18227b450

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
  UnityEngine_UI_Button_o *pUVar6;
  uint uVar7;
  float fVar8;
  System_Nullable_float__Fields local_res8;
  uint local_res18 [2];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameRow");
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"Actions");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameRowAlternate");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.mute");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347371 = '\x01';
  }
  __this_00 = (__this->fields)._view;
  pUVar1 = (__this->fields).SinglePanel;
  uVar7 = local_res18[0] & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  pSVar5 = "inGameRowAlternate";
  if (uVar7 == 0) {
    pSVar5 = "inGameRow";
  }
  fVar8 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,pUVar1,pSVar5,fVar8 - 80.0,58.0,true,(System_Nullable_float__o)0x0,
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
                               (__this_00,pUVar1,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                440.0,40.0,"inGameText",(MethodInfo *)0x0);
            if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
              UnityEngine_Object__set_name
                        ((UnityEngine_Object_o *)pTVar4,"Score",(MethodInfo *)0x0);
              local_res8.hasValue = false;
              local_res8._1_3_ = 0;
              local_res8.value = 0.0;
              System_Nullable_float____ctor
                        ((System_Nullable_float__o *)&local_res8,4.0,
                         (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
              pUVar2 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                                 (__this_00,pUVar1,"clear",220.0,58.0,true,
                                  (System_Nullable_float__o)local_res8,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Object__set_name
                          ((UnityEngine_Object_o *)pUVar2,"Actions",(MethodInfo *)0x0);
                pSVar5 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                pUVar6 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                   (__this_00,pUVar2,"Profile","ingame.player.profile",pSVar5,68.0,
                                    36.0,3,(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                  UnityEngine_Object__set_name
                            ((UnityEngine_Object_o *)pUVar6,"Profile",(MethodInfo *)0x0);
                  pSVar5 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                  pUVar6 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                     (__this_00,pUVar2,"Mute","ingame.player.mute",pSVar5,68.0
                                      ,36.0,3,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                    UnityEngine_Object__set_name
                              ((UnityEngine_Object_o *)pUVar6,"Mute",(MethodInfo *)0x0);
                    pSVar5 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                    pUVar6 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                       (__this_00,pUVar2,"Kick","ingame.player.kick",pSVar5,
                                        68.0,36.0,3,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                      UnityEngine_Object__set_name
                                ((UnityEngine_Object_o *)pUVar6,"Kick",(MethodInfo *)0x0);
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
// 0x18227c380
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227cba4: mov r9, qword ptr [rip + 0x1e258b5]  ; "DeadColor"
// asm:   0x18227cccf: mov r9, qword ptr [rip + 0x1e30d72]  ; "SpectateColor"
// asm:   0x18227ccd6: jmp 0x18227cbab
// asm:   0x18227cf41: jmp 0x18227d489
// asm:   0x18227d040: jmp 0x18227d489
// asm:   0x18227d2a8: jmp 0x18227d489
// asm:   0x18227d322: jmp 0x18227d489
// asm:   0x18227d39c: jmp 0x18227d489
// asm:   0x18227d416: jmp 0x18227d489
// asm:   0x18227d577: mov r12, qword ptr [rsp + 0x70]
// asm:   0x18227d57c: jmp 0x18227d640

void UI_ScoreboardScorePanel__SetRow
               (UI_ScoreboardScorePanel_o *__this,UnityEngine_Transform_o *row,
               Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t id;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool includeMC;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  Il2CppObject *pIVar18;
  System_Collections_Generic_List_string__o *__this_01;
  Il2CppObject *pIVar19;
  undefined8 uVar20;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  UnityEngine_UI_RawImage_o *pUVar23;
  UnityEngine_GameObject_o *pUVar24;
  UnityEngine_Texture_o *pUVar25;
  System_String_o *panel;
  UnityEngine_Color_o *pUVar26;
  System_String_o *pSVar27;
  PatreonEffects_EffectText_o *__this_02;
  TMPro_TMP_FontAsset_o *value_00;
  TMPro_TMP_Text_o *pTVar28;
  Photon_Realtime_Player_o *pPVar29;
  UnityEngine_Texture_o *pUVar30;
  char cVar31;
  float fVar32;
  float height;
  uint local_res18 [4];
  UnityEngine_Color_Fields local_128;
  UnityEngine_Transform_o *local_118;
  System_String_o *local_110;
  UnityEngine_Color_Fields local_108;
  System_String_o *local_f8;
  System_String_o *local_e8 [2];
  undefined1 local_d8 [40];
  System_String_o *pSStack_b0;
  undefined8 local_a8;
  UnityEngine_Color_Fields UStack_a0;
  UnityEngine_Color_Fields local_88 [5];
  
  if (Il2CppMethodInitialized_184347372 == '\0') {
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
    Il2CppMethodInitialized_184347372 = '\x01';
  }
  local_d8[0] = false;
  local_d8._1_3_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_4_ = 0.0;
  local_d8._12_4_ = 0.0;
  UStack_a0.b = 0.0;
  UStack_a0.a = 0.0;
  local_d8._16_4_ = 0.0;
  local_d8._20_4_ = 0.0;
  local_d8._24_4_ = 0.0;
  local_d8._28_4_ = 0.0;
  local_res18[0] = 0;
  local_d8._32_4_ = 0.0;
  local_d8._36_4_ = 0.0;
  pSStack_b0 = (System_String_o *)0x0;
  local_a8._0_4_ = 0.0;
  local_a8._4_4_ = 0.0;
  UStack_a0.r = 0.0;
  UStack_a0.g = 0.0;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar16 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                       (MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  local_f8 = MiscExtensions__TruncateRichText(pSVar16,0xf,(MethodInfo *)0x0);
  local_e8[0] = PhotonExtensions__GetStringProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                           "",(MethodInfo *)0x0);
  pSVar16 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       "",(MethodInfo *)0x0);
  pSVar17 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                       "",(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_18227c833:
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pIVar18 = SZArrayNew(TypeInfo_string_array,4);
    pSVar27 = "Kills";
    if (pIVar18 == (Il2CppObject *)0x0) goto label_18227d910;
    if (*(int *)&pIVar18[1].monitor == 0) {
label_18227d982:
      ThrowIndexOutOfRangeException();
    }
    pIVar18[2].klass = (Il2CppClass *)"Kills";
    Il2CppCodeGenWriteBarrier(&pIVar18[2].klass,pSVar27);
    pSVar27 = "Deaths";
    if (*(uint *)&pIVar18[1].monitor < 2) goto label_18227d982;
    pIVar18[2].monitor = "Deaths";
    Il2CppCodeGenWriteBarrier(&pIVar18[2].monitor,pSVar27);
    pSVar27 = "HighestDamage";
    if (*(uint *)&pIVar18[1].monitor < 3) goto label_18227d982;
    pIVar18[3].klass = (Il2CppClass *)"HighestDamage";
    Il2CppCodeGenWriteBarrier(&pIVar18[3].klass,pSVar27);
    pSVar27 = "TotalDamage";
    if (*(uint *)&pIVar18[1].monitor < 4) goto label_18227d982;
    pIVar18[3].monitor = "TotalDamage";
    Il2CppCodeGenWriteBarrier(&pIVar18[3].monitor,pSVar27);
    for (local_res18[0] = 0; (int)local_res18[0] < *(int *)&pIVar18[1].monitor;
        local_res18[0] = local_res18[0] + 1) {
      if (*(uint *)&pIVar18[1].monitor <= local_res18[0]) goto label_18227d982;
      pIVar19 = PhotonExtensions__GetCustomProperty
                          (player,(System_String_o *)(&pIVar18[2].klass)[(int)local_res18[0]],
                           (MethodInfo *)0x0);
      if (pIVar19 == (Il2CppObject *)0x0) {
        uVar20 = **(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        uVar20 = (*pIVar19->klass->vtable[3].methodPtr)(pIVar19,pIVar19->klass->vtable[3].method);
      }
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_18227d910;
      il2cpp_runtime_helper_180012890(__this_01,uVar20);
    }
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_18227d910;
    value = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)__this_01,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    local_110 = System_String__Join(" / ",(System_String_array *)value,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18227d910;
    bVar15 = System_String__op_Inequality
                       ((pCVar1->fields).ScoreboardProperty,
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (!bVar15) goto label_18227c833;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18227d910;
    pIVar18 = PhotonExtensions__GetCustomProperty
                        (player,(pCVar1->fields).ScoreboardProperty,(MethodInfo *)0x0);
    if (pIVar18 == (Il2CppObject *)0x0) {
      local_110 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      local_110 = (System_String_o *)
                  (*pIVar18->klass->vtable[3].methodPtr)(pIVar18,pIVar18->klass->vtable[3].method);
    }
  }
  if (((row == (UnityEngine_Transform_o *)0x0) ||
      (pUVar21 = UnityEngine_Transform__Find(row,"Player",(MethodInfo *)0x0), local_118 = pUVar21
      , pUVar21 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar22 = UnityEngine_Transform__Find(pUVar21,"Status",(MethodInfo *)0x0),
     pUVar22 == (UnityEngine_Transform_o *)0x0)) goto label_18227d910;
  pUVar23 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar22,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_18227ccdb:
    if ((pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
       pUVar24 == (UnityEngine_GameObject_o *)0x0)) goto label_18227d910;
    UnityEngine_GameObject__SetActive(pUVar24,false,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18227d910;
    if ((pCVar1->fields).ShowScoreboardStatus == false) goto label_18227ccdb;
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    pSVar27 = local_e8[0];
    bVar15 = System_String__op_Equality
                       (local_e8[0],TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
                        (MethodInfo *)0x0);
    if (bVar15) {
      if ((pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar24 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
         pUVar24 == (UnityEngine_GameObject_o *)0x0)) goto label_18227d910;
      UnityEngine_GameObject__SetActive(pUVar24,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar27 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar25 = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar27,"Icons/Game/SpectateIcon",true,(MethodInfo *)0x0);
      pUVar30 = (UnityEngine_Texture_o *)0x0;
      if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
        if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          pUVar30 = pUVar25;
        }
        if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
        }
      }
      UnityEngine_UI_RawImage__set_texture(pUVar23,pUVar30,(MethodInfo *)0x0);
      panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pSVar27 = "SpectateColor";
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pSVar27 = "SpectateColor";
      }
    }
    else {
      if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
      }
      bVar15 = System_String__op_Equality
                         (pSVar27,TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,(MethodInfo *)0x0);
      if (!bVar15) goto label_18227ccdb;
      if ((pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar24 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
         pUVar24 == (UnityEngine_GameObject_o *)0x0)) goto label_18227d910;
      UnityEngine_GameObject__SetActive(pUVar24,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar27 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar25 = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar27,"Icons/Quests/Skull1Icon",true,(MethodInfo *)0x0);
      pUVar30 = (UnityEngine_Texture_o *)0x0;
      if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
        if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          pUVar30 = pUVar25;
        }
        if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
        }
      }
      UnityEngine_UI_RawImage__set_texture(pUVar23,pUVar30,(MethodInfo *)0x0);
      panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pSVar27 = "DeadColor";
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pSVar27 = "DeadColor";
      }
    }
    pUVar26 = UI_UIManager__GetThemeColor
                        ((UnityEngine_Color_o *)&local_108,panel,"Icon",pSVar27,
                         "DefaultPanel",(MethodInfo *)0x0);
    local_128.r = (pUVar26->fields).r;
    local_128.g = (pUVar26->fields).g;
    local_128.b = (pUVar26->fields).b;
    local_128.a = (pUVar26->fields).a;
    (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
              (pUVar23,(UnityEngine_Color_o *)&local_128,(pUVar23->klass->vtable)._23_set_color.method);
    pUVar21 = local_118;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    cVar31 = '\0';
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18227d910;
    cVar31 = (pCVar1->fields).ShowScoreboardLoadout;
  }
  pUVar21 = UnityEngine_Transform__Find(pUVar21,"Loadout",(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_18227d910;
  pUVar23 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar21,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar15 = System_String__op_Equality
                     (pSVar16,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar15) {
    pSVar16 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar26 = UI_UIManager__GetThemeColor
                        ((UnityEngine_Color_o *)&local_108,pSVar16,"Icon","LoadoutHuman"
                         ,"DefaultPanel",(MethodInfo *)0x0);
    if (pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) goto label_18227d910;
    local_128.r = (pUVar26->fields).r;
    local_128.g = (pUVar26->fields).g;
    local_128.b = (pUVar26->fields).b;
    local_128.a = (pUVar26->fields).a;
    (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
              (pUVar23,(UnityEngine_Color_o *)&local_128,(pUVar23->klass->vtable)._23_set_color.method);
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar15 = System_String__op_Equality
                       (pSVar17,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,(MethodInfo *)0x0);
    if (bVar15) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar25 = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar16,"Icons/Game/BladeIcon",true,(MethodInfo *)0x0);
      pUVar30 = (UnityEngine_Texture_o *)0x0;
      if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
        pUVar30 = (UnityEngine_Texture_o *)0x0;
        if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          pUVar30 = pUVar25;
        }
        if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
        }
      }
    }
    else {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar15 = System_String__op_Equality
                         (pSVar17,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
      if (bVar15) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar25 = (UnityEngine_Texture_o *)
                  ApplicationManagers_ResourceManager__LoadAsset
                            (pSVar16,"Icons/Game/AHSSIcon",true,(MethodInfo *)0x0);
        pUVar30 = (UnityEngine_Texture_o *)0x0;
        if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
          pUVar30 = (UnityEngine_Texture_o *)0x0;
          if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar30 = pUVar25;
          }
          if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
          }
        }
      }
      else {
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        bVar15 = System_String__op_Equality
                           (pSVar17,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
        if (bVar15) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar25 = (UnityEngine_Texture_o *)
                    ApplicationManagers_ResourceManager__LoadAsset
                              (pSVar16,"Icons/Game/APGIcon",true,(MethodInfo *)0x0);
          pUVar30 = (UnityEngine_Texture_o *)0x0;
          if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
            pUVar30 = (UnityEngine_Texture_o *)0x0;
            if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
              pUVar30 = pUVar25;
            }
            if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
            }
          }
        }
        else {
          if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
          }
          bVar15 = System_String__op_Equality
                             (pSVar17,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                              (MethodInfo *)0x0);
          if (bVar15) {
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pUVar25 = (UnityEngine_Texture_o *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                (pSVar16,"Icons/Game/ThunderspearIcon",true,(MethodInfo *)0x0);
            pUVar30 = (UnityEngine_Texture_o *)0x0;
            if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
              pUVar30 = (UnityEngine_Texture_o *)0x0;
              if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                pUVar30 = pUVar25;
              }
              if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
              }
            }
          }
          else {
            if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
            }
            bVar15 = System_String__op_Equality
                               (pSVar17,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,
                                (MethodInfo *)0x0);
            if (!bVar15) {
              if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
              }
              bVar15 = System_String__op_Equality
                                 (pSVar17,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,
                                  (MethodInfo *)0x0);
              if (!bVar15) goto label_18227d494;
            }
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pUVar25 = (UnityEngine_Texture_o *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                (pSVar16,"Icons/Specials/NoneSpecialIcon",true,(MethodInfo *)0x0);
            pUVar30 = (UnityEngine_Texture_o *)0x0;
            if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
              if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                pUVar30 = pUVar25;
              }
              if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
              }
            }
          }
        }
      }
    }
label_18227d489:
    UnityEngine_UI_RawImage__set_texture(pUVar23,pUVar30,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar15 = System_String__op_Equality
                       (pSVar16,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0)
    ;
    if (bVar15) {
      pSVar16 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar26 = UI_UIManager__GetThemeColor
                          ((UnityEngine_Color_o *)&local_108,pSVar16,"Icon",
                           "LoadoutTitan","DefaultPanel",(MethodInfo *)0x0);
      if (pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) goto label_18227d910;
      local_128.r = (pUVar26->fields).r;
      local_128.g = (pUVar26->fields).g;
      local_128.b = (pUVar26->fields).b;
      local_128.a = (pUVar26->fields).a;
      (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                (pUVar23,(UnityEngine_Color_o *)&local_128,(pUVar23->klass->vtable)._23_set_color.method);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar25 = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar16,"Icons/Game/TitanIcon",true,(MethodInfo *)0x0);
      pUVar30 = (UnityEngine_Texture_o *)0x0;
      if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
        if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          pUVar30 = pUVar25;
        }
        if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
        }
      }
      goto label_18227d489;
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar15 = System_String__op_Equality
                       (pSVar16,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                        (MethodInfo *)0x0);
    if (bVar15) {
      pSVar16 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar26 = UI_UIManager__GetThemeColor
                          ((UnityEngine_Color_o *)&local_108,pSVar16,"Icon",
                           "LoadoutShifter","DefaultPanel",(MethodInfo *)0x0);
      if (pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) goto label_18227d910;
      local_128.r = (pUVar26->fields).r;
      local_128.g = (pUVar26->fields).g;
      local_128.b = (pUVar26->fields).b;
      local_128.a = (pUVar26->fields).a;
      (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                (pUVar23,(UnityEngine_Color_o *)&local_128,(pUVar23->klass->vtable)._23_set_color.method);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar25 = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar16,"Icons/Game/ShifterIcon",true,(MethodInfo *)0x0);
      pUVar30 = (UnityEngine_Texture_o *)0x0;
      if (pUVar25 != (UnityEngine_Texture_o *)0x0) {
        if (pUVar25->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          pUVar30 = pUVar25;
        }
        if (pUVar30 == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar25,TypeInfo_UnityEngine_Texture2D);
        }
      }
      goto label_18227d489;
    }
  }
label_18227d494:
  if (cVar31 == '\0') {
label_18227d4f3:
    if ((pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
       pUVar24 == (UnityEngine_GameObject_o *)0x0)) goto label_18227d910;
    bVar15 = false;
  }
  else {
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar15 = System_String__op_Equality
                       (local_e8[0],TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
                        (MethodInfo *)0x0);
    if (bVar15) goto label_18227d4f3;
    if ((pUVar23 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
       pUVar24 == (UnityEngine_GameObject_o *)0x0)) goto label_18227d910;
    bVar15 = true;
  }
  UnityEngine_GameObject__SetActive(pUVar24,bVar15,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    id = (player->fields).actorNumber;
    includeMC = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
    bVar15 = (player->fields).IsLocal;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar27 = GameManagers_ChatManager__GetIDString(id,includeMC,bVar15,(MethodInfo *)0x0);
    bVar15 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                       (player,(PatreonEffects_ResolvedNameEffect_o *)local_d8,(MethodInfo *)0x0);
    uVar13 = UStack_a0._8_8_;
    uVar11 = UStack_a0._0_8_;
    uVar10 = local_a8;
    pSVar16 = pSStack_b0;
    uVar8 = local_d8._32_8_;
    uVar6 = local_d8._24_8_;
    uVar4 = local_d8._16_8_;
    uVar2 = local_d8._8_8_;
    uVar20 = local_d8._0_8_;
    pSVar17 = local_f8;
    if (bVar15) {
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
      }
      uVar14 = UStack_a0._8_8_;
      uVar12 = UStack_a0._0_8_;
      uVar9 = local_d8._32_8_;
      uVar7 = local_d8._24_8_;
      uVar5 = local_d8._16_8_;
      uVar3 = local_d8._8_8_;
      UStack_a0.r = (float)uVar11;
      UStack_a0.g = SUB84(uVar11,4);
      local_128.r = UStack_a0.r;
      local_128.g = UStack_a0.g;
      UStack_a0.b = (float)uVar13;
      UStack_a0.a = SUB84(uVar13,4);
      local_128.b = UStack_a0.b;
      local_128.a = UStack_a0.a;
      local_e8[0] = pSVar16;
      local_e8[1] = (System_String_o *)uVar10;
      local_d8._24_4_ = (undefined4)uVar6;
      local_d8._28_4_ = SUB84(uVar6,4);
      local_88[0].r = (float)local_d8._24_4_;
      local_88[0].g = (float)local_d8._28_4_;
      local_d8._32_4_ = (undefined4)uVar8;
      local_d8._36_4_ = SUB84(uVar8,4);
      local_88[0].b = (float)local_d8._32_4_;
      local_88[0].a = (float)local_d8._36_4_;
      local_d8._8_4_ = (undefined4)uVar2;
      local_d8._12_4_ = SUB84(uVar2,4);
      local_108.r = (float)local_d8._8_4_;
      local_108.g = (float)local_d8._12_4_;
      local_d8._16_4_ = (undefined4)uVar4;
      local_d8._20_4_ = SUB84(uVar4,4);
      local_108.b = (float)local_d8._16_4_;
      local_108.a = (float)local_d8._20_4_;
      local_d8._8_8_ = uVar3;
      local_d8._16_8_ = uVar5;
      local_d8._24_8_ = uVar7;
      local_d8._32_8_ = uVar9;
      UStack_a0._0_8_ = uVar12;
      UStack_a0._8_8_ = uVar14;
      pSVar17 = PatreonEffects_EffectText__Compose
                          (local_f8,SUB84(uVar20,4),(UnityEngine_Color_o *)&local_108,
                           (UnityEngine_Color_o *)local_88,(UnityEngine_Color_o *)local_e8,
                           (UnityEngine_Color_o *)&local_128,(MethodInfo *)0x0);
    }
    pUVar21 = UnityEngine_Transform__Find(local_118,"Name",(MethodInfo *)0x0);
    if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar21,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_EffectText);
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      value_00 = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,(MethodInfo *)0x0);
      if (__this_02 != (PatreonEffects_EffectText_o *)0x0) {
        PatreonEffects_EffectText__set_font(__this_02,value_00,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._view;
        pSVar16 = System_String__Concat_1969e50(pSVar27,pSVar17,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          pSVar16 = Gisketch_Aottg2UI_Game_AottgInGameView__Readable(__this_00,pSVar16,(MethodInfo *)0x0);
          PatreonEffects_EffectText__set_text(__this_02,pSVar16,(MethodInfo *)0x0);
          pUVar21 = UnityEngine_Transform__Find(row,"Score",(MethodInfo *)0x0);
          if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
             (pTVar28 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar21,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text
                                  ), pTVar28 != (TMPro_TMP_Text_o *)0x0)) {
            (*(pTVar28->klass->vtable)._66_set_text.methodPtr)
                      (pTVar28,local_110,(pTVar28->klass->vtable)._66_set_text.method);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
            }
            fVar32 = Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight(pTVar28,40.0,(MethodInfo *)0x0);
            height = 58.0;
            if (58.0 <= fVar32 + 12.0) {
              height = fVar32 + 12.0;
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__SetHeight(row,height,(MethodInfo *)0x0);
            pUVar21 = UnityEngine_Transform__Find(row,"Actions",(MethodInfo *)0x0);
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar29 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
                (pUVar22 = UnityEngine_Transform__Find(pUVar21,"Mute",(MethodInfo *)0x0),
                pUVar22 != (UnityEngine_Transform_o *)0x0)) &&
               (pUVar24 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0),
               pUVar24 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar24,pPVar29 != player,(MethodInfo *)0x0);
              pUVar21 = UnityEngine_Transform__Find(pUVar21,"Kick",(MethodInfo *)0x0);
              if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                pUVar24 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0);
                if (pPVar29 == player) {
                  bVar15 = false;
                }
                else {
                  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                  }
                  bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                }
                if (pUVar24 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar24,bVar15,(MethodInfo *)0x0);
                  pUVar21 = UnityEngine_Transform__Find(row,"Ping",(MethodInfo *)0x0);
                  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
                    pTVar28 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar21,
                                         (MethodInfo_6651A0 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
                    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                    }
                    local_res18[0] =
                         PhotonExtensions__GetIntProperty
                                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Ping,0,
                                    (MethodInfo *)0x0);
                    pSVar16 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                    if (pTVar28 != (TMPro_TMP_Text_o *)0x0) {
                      (*(pTVar28->klass->vtable)._66_set_text.methodPtr)
                                (pTVar28,pSVar16,(pTVar28->klass->vtable)._66_set_text.method);
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
label_18227d910:
  ThrowNullReferenceException();
}


// UI.ScoreboardScorePanel$$OnClickProfile
// il2cpp: void UI_ScoreboardScorePanel__OnClickProfile (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x18227bc70

void UI_ScoreboardScorePanel__OnClickProfile
               (UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Photon_Realtime_Player_array *pPVar3;
  UI_BasePanel_o *pUVar4;
  UI_ScoreboardProfilePopup_o *__this_00;
  
  if (Il2CppMethodInitialized_184347373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardPopup);
    Il2CppMethodInitialized_184347373 = '\x01';
  }
  if (((__this->fields)._lastPlayers != (Photon_Realtime_Player_array *)0x0) && (-1 < index)) {
    pPVar3 = (__this->fields)._lastPlayers;
    uVar1 = (uint)pPVar3->max_length;
    if (index < (int)uVar1) {
      if (uVar1 <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      pUVar4 = (__this->fields).Parent;
      if (pUVar4 != (UI_BasePanel_o *)0x0) {
        bVar2 = (TypeInfo_UI_ScoreboardPopup->_2).typeHierarchyDepth;
        if (((pUVar4->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UI_ScoreboardPopup)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
        }
        __this_00 = (UI_ScoreboardProfilePopup_o *)(*(uint64_t *)((char *)pUVar4 + 0xb0));
        if (__this_00 != (UI_ScoreboardProfilePopup_o *)0x0) {
          UI_ScoreboardProfilePopup__Show(__this_00,pPVar3->m_Items[index],(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ScoreboardScorePanel$$OnClickKick
// il2cpp: void UI_ScoreboardScorePanel__OnClickKick (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x18227b9f0

void UI_ScoreboardScorePanel__OnClickKick(UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Photon_Realtime_Player_array *pPVar3;
  Photon_Realtime_Player_o *pPVar4;
  UI_BasePanel_o *pUVar5;
  UI_ScoreboardKickPopup_o *__this_00;
  bool bVar6;
  UI_ScoreboardScorePanel___c__DisplayClass18_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184347374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0_OnClickKick_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Kick this player?");
    Il2CppMethodInitialized_184347374 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (UI_ScoreboardScorePanel___c__DisplayClass18_0_o *)0x0) {
label_18227bb91:
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  if (((__this->fields)._lastPlayers != (Photon_Realtime_Player_array *)0x0) && (-1 < index)) {
    pPVar3 = (__this->fields)._lastPlayers;
    uVar1 = (uint)pPVar3->max_length;
    if (index < (int)uVar1) {
      if (uVar1 <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      pPVar4 = pPVar3->m_Items[index];
      (object->fields).player = pPVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).player,pPVar4);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (bVar6) {
        pPVar4 = (object->fields).player;
        if (pPVar4 != (Photon_Realtime_Player_o *)0x0) {
          if ((pPVar4->fields).IsLocal != false) {
            return;
          }
          pUVar5 = (__this->fields).Parent;
          if (pUVar5 != (UI_BasePanel_o *)0x0) {
            bVar2 = (TypeInfo_UI_ScoreboardPopup->_2).typeHierarchyDepth;
            if (((pUVar5->klass->_2).typeHierarchyDepth < bVar2) ||
               ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_UI_ScoreboardPopup)) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
            }
            __this_00 = (UI_ScoreboardKickPopup_o *)(*(uint64_t *)((char *)pUVar5 + 0xb8));
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0_OnClickKick_b__0,
                       (MethodInfo *)0x0);
            if (__this_00 != (UI_ScoreboardKickPopup_o *)0x0) {
              UI_ScoreboardKickPopup__Show(__this_00,"Kick this player?",__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_18227bb91;
      }
    }
  }
  return;
}


// UI.ScoreboardScorePanel$$FinishKickPlayer
// il2cpp: void UI_ScoreboardScorePanel__FinishKickPlayer (UI_ScoreboardScorePanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18227b980

void UI_ScoreboardScorePanel__FinishKickPlayer
               (UI_ScoreboardScorePanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347375 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__KickPlayer(player,true,false,".",(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$OnClickMute
// il2cpp: void UI_ScoreboardScorePanel__OnClickMute (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x18227bbb0

void UI_ScoreboardScorePanel__OnClickMute(UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Photon_Realtime_Player_array *pPVar3;
  UI_BasePanel_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this_00;
  
  if (Il2CppMethodInitialized_184347376 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardPopup);
    Il2CppMethodInitialized_184347376 = '\x01';
  }
  if (((__this->fields)._lastPlayers != (Photon_Realtime_Player_array *)0x0) && (-1 < index)) {
    pPVar3 = (__this->fields)._lastPlayers;
    uVar1 = (uint)pPVar3->max_length;
    if (index < (int)uVar1) {
      if (uVar1 <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      pUVar4 = (__this->fields).Parent;
      if (pUVar4 != (UI_BasePanel_o *)0x0) {
        bVar2 = (TypeInfo_UI_ScoreboardPopup->_2).typeHierarchyDepth;
        if (((pUVar4->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UI_ScoreboardPopup)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
        }
        __this_00 = (*(uint64_t *)((char *)pUVar4 + 0xc0));
        if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
          UI_ScoreboardMutePopup__Show
                    ((UI_ScoreboardMutePopup_o *)__this_00,pPVar3->m_Items[index],(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ScoreboardScorePanel$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___ctor (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x18227de80

void UI_ScoreboardScorePanel___ctor(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Transform__o *__this_00;
  
  if (Il2CppMethodInitialized_184347377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    Il2CppMethodInitialized_184347377 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
  (__this->fields)._rows = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,__this_00);
  (__this->fields)._currentSyncDelay = 1.0;
  UI_ScoreboardCategoryPanel___ctor((UI_SettingsSkinsHumanPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


