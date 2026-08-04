// Type: UI.MultiplayerFilterPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerFilterPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerFilterPopup.cs
// --------------------------------

// UI.MultiplayerFilterPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerFilterPopup__get_Title (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408bd0

System_String_o * UI_MultiplayerFilterPopup__get_Title(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae5b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Filters");
    g_data_057ae5b6 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Filters",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerFilterPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_VerticalPadding (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408c30

int32_t UI_MultiplayerFilterPopup__get_VerticalPadding(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MultiplayerFilterPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_HorizontalPadding (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408c40

int32_t UI_MultiplayerFilterPopup__get_HorizontalPadding
                  (UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MultiplayerFilterPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerFilterPopup__get_VerticalSpacing (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408c50

float UI_MultiplayerFilterPopup__get_VerticalSpacing(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MultiplayerFilterPopup$$get_Width
// il2cpp: float UI_MultiplayerFilterPopup__get_Width (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408c60

float UI_MultiplayerFilterPopup__get_Width(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 370.0;
}


// UI.MultiplayerFilterPopup$$get_Height
// il2cpp: float UI_MultiplayerFilterPopup__get_Height (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408c70

float UI_MultiplayerFilterPopup__get_Height(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 245.0;
}


// UI.MultiplayerFilterPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_PanelAlignment (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x4408c80

int32_t UI_MultiplayerFilterPopup__get_PanelAlignment(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerFilterPopup$$Setup
// il2cpp: void UI_MultiplayerFilterPopup__Setup (UI_MultiplayerFilterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4408c90

void UI_MultiplayerFilterPopup__Setup
               (UI_MultiplayerFilterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Threading_CancellationTokenSource_o *setting;
  UnityEngine_Transform_o *setting_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_UI_Text_o *pUVar5;
  Settings_IntSetting_o *pSVar6;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar7;
  long lVar8;
  char cVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_UI_ColorBlock_o value;
  int32_t iVar10;
  bool_conflict bVar11;
  System_String_o *pSVar12;
  UI_ElementStyle_o *__this_06;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  Photon_Realtime_RoomInfo_array *pPVar14;
  System_String_o *pSVar15;
  Il2CppClass *method_00;
  System_Collections_Generic_List_RoomInfo__o *pSVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Events_UnityAction_o *call;
  UI_MultiplayerRoomListPopup_o *__this_07;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_UI_Selectable_o *__this_08;
  long *plVar21;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int iVar22;
  Il2CppClass *unaff_RBX;
  Il2CppClass *pIVar23;
  UI_BasePanel_o *pUVar24;
  UI_MultiplayerRoomListPopup_o *pUVar25;
  System_String_o *unaff_R13;
  UnityEngine_Events_UnityAction_o *unaff_R14;
  Il2CppObject *pIVar26;
  UI_BasePanel_o *unaff_R15;
  float fVar27;
  undefined1 auVar28 [12];
  UnityEngine_Color_o UVar29;
  undefined8 in_stack_fffffffffffffe28;
  undefined8 in_stack_fffffffffffffe30;
  Il2CppClass *in_stack_fffffffffffffe38;
  int iStack_17c;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  Il2CppClass *pIStack_148;
  Il2CppRGCTXData *pIStack_140;
  _union_249689 _Stack_138;
  float fStack_130;
  float fStack_12c;
  UnityEngine_Color_Fields UStack_128;
  UnityEngine_Color_Fields aUStack_118 [2];
  undefined1 auStack_f8 [24];
  Il2CppRGCTXData *pIStack_e0;
  void *pvStack_d8;
  float fStack_d0;
  float fStack_cc;
  UnityEngine_Color_Fields UStack_c8;
  UnityEngine_Color_Fields UStack_b8;
  float fStack_a8;
  float fStack_a4;
  Il2CppClass *pIStack_a0;
  UI_MultiplayerFilterPopup_o *pUStack_98;
  System_String_o *pSStack_90;
  UI_BasePanel_o *pUStack_88;
  UI_BasePanel_o *pUStack_80;
  UI_BasePanel_o *pUStack_78;
  undefined8 uStack_70;
  Il2CppClass *pIStack_68;
  UnityEngine_Events_UnityAction_o *pUStack_60;
  
  if (g_data_057ae5b7 == '\0') {
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408cbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408cc9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_0);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408cd5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408ce1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408ced;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408cf9;
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408d05;
    il2cpp_runtime_helper_023445d0(&"Confirm");
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408d11;
    il2cpp_runtime_helper_023445d0(&"MultiplayerFilterPopup");
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408d1d;
    il2cpp_runtime_helper_023445d0(&"ShowFull");
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408d29;
    il2cpp_runtime_helper_023445d0(&"");
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408d35;
    il2cpp_runtime_helper_023445d0(&"ShowPassword");
    g_data_057ae5b7 = '\x01';
  }
  pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408d49;
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar15 = "MultiplayerFilterPopup";
  pSVar13 = "MainMenu";
  if (parent == (UI_BasePanel_o *)0x0) {
label_04408d81:
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408db3;
    iVar10 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408dca;
    pSVar12 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408ddc;
    unaff_RBX = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408dff;
    UI_ElementStyle___ctor((UI_ElementStyle_o *)unaff_RBX,iVar10,120.0,20.0,pSVar12,(MethodInfo *)0x0);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e13;
    pSVar12 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e1e;
    __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e45;
    UI_ElementStyle___ctor(__this_06,0x18,240.0,20.0,pSVar12,(MethodInfo *)0x0);
    unaff_R15 = (UI_BasePanel_o *)(__this->fields).BottomBar;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e62;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e73;
    pSVar12 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e85;
    unaff_R14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408e9f;
    UnityEngine_Events_UnityAction___ctor();
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408eb6;
    pIVar23 = unaff_RBX;
    pUVar24 = unaff_R15;
    UI_ElementFactory__CreateTextButton
              ((UnityEngine_Transform_o *)unaff_R15,(UI_ElementStyle_o *)unaff_RBX,pSVar12,0.0,unaff_R14,
               (MethodInfo *)0x0);
    unaff_R13 = pSVar13;
    if (parent != (UI_BasePanel_o *)0x0) {
      pUVar18 = (__this->fields).SinglePanel;
      setting = parent[2].fields.m_CancellationTokenSource;
      pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408efa;
      pSVar12 = UI_UIManager__GetLocale
                          (pSVar13,pSVar15,"ShowFull","","",(MethodInfo *)0x0);
      pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408f30;
      UI_ElementFactory__CreateToggleSetting
                (pUVar18,__this_06,(Settings_BaseSetting_o *)setting,pSVar12,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar18 = (__this->fields).SinglePanel;
      setting_00 = parent[2].fields.SinglePanel;
      pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408f61;
      pSVar13 = UI_UIManager__GetLocale
                          (pSVar13,pSVar15,"ShowPassword","","",(MethodInfo *)0x0);
      pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408f92;
      UI_ElementFactory__CreateToggleSetting
                (pUVar18,__this_06,(Settings_BaseSetting_o *)setting_00,pSVar13,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar2 = (TypeInfo_MultiplayerRoomListPopup->_2).naturalAligment;
    if ((bVar2 <= (parent->klass->_2).naturalAligment) &&
       ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MultiplayerRoomListPopup)) goto label_04408d81;
    pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408fa9;
    pIVar23 = TypeInfo_MultiplayerRoomListPopup;
    pUVar24 = parent;
    il2cpp_runtime_helper_022b2fd0();
  }
  pUStack_60 = (UnityEngine_Events_UnityAction_o *)0x4408fae;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pIStack_68 = unaff_RBX;
  pUStack_60 = unaff_R14;
  if (g_data_057ae5b8 == '\0') {
    pUStack_78 = (UI_BasePanel_o *)0x4408fcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    pUStack_78 = (UI_BasePanel_o *)0x4408fdb;
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae5b8 = '\x01';
  }
  pUStack_78 = (UI_BasePanel_o *)0x4408ff6;
  bVar11 = System_String__op_Equality((System_String_o *)pIVar23,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  method_00 = (Il2CppClass *)(pUVar24->klass->vtable)._22_Hide.method;
  pUStack_78 = (UI_BasePanel_o *)0x440900d;
  (*(pUVar24->klass->vtable)._22_Hide.methodPtr)(pUVar24);
  pUVar25 = (UI_MultiplayerRoomListPopup_o *)(pUVar24->fields).Parent;
  if (pUVar25 != (UI_MultiplayerRoomListPopup_o *)0x0) {
    bVar2 = (TypeInfo_MultiplayerRoomListPopup->_2).naturalAligment;
    if ((bVar2 <= (pUVar25->klass->_2).naturalAligment) &&
       ((pUVar25->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MultiplayerRoomListPopup)) {
      UI_MultiplayerRoomListPopup__RefreshList(pUVar25,1,method_01);
      return;
    }
    pUStack_78 = (UI_BasePanel_o *)0x440905b;
    method_00 = TypeInfo_MultiplayerRoomListPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  pUStack_78 = (UI_BasePanel_o *)UI_MultiplayerRoomListPopup__RefreshList;
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)method_00;
  pIStack_a0 = pIVar23;
  pUStack_98 = __this;
  pSStack_90 = unaff_R13;
  pUStack_88 = pUVar24;
  pUStack_80 = unaff_R15;
  pUStack_78 = parent;
  if (g_data_057ae5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_P);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_ToArray_RoomInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Photon_Realtime_RoomInfo_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshList_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Requires user account to join");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomButton");
    il2cpp_runtime_helper_023445d0(&"PasswordIcon");
    il2cpp_runtime_helper_023445d0(&"RoomButton");
    il2cpp_runtime_helper_023445d0(&"VerificationIcon");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"0/0");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"PlayersOnline");
    g_data_057ae5d2 = '\x01';
  }
  iStack_17c = 0;
  auStack_178._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_178._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_178._16_8_ = (Il2CppClass *)0x0;
  (pUVar25->fields)._currentUpdateDelay = (pUVar25->fields)._maxUpdateDelay;
  if (cVar9 != '\0') {
    if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04409bc5;
    source = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_P);
    pPVar14 = (Photon_Realtime_RoomInfo_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_RoomInfo_ToArray_RoomInfo);
    (pUVar25->fields)._rooms = pPVar14;
    il2cpp_runtime_helper_022b4080(&(pUVar25->fields)._rooms);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar10 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
    iStack_17c = iVar10 / 2;
    pSVar13 = System_Int32__ToString((int32_t)&iStack_17c,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = UI_UIManager__GetLocale
                        ("MainMenu","MultiplayerRoomListPopup","PlayersOnline","","",(MethodInfo *)0x0);
    method_00 = (Il2CppClass *)System_String__Concat_3af7150(pSVar13," ",pSVar15,(MethodInfo *)0x0);
    pUVar5 = (pUVar25->fields)._playersOnlineLabel;
    if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_04409bc5;
    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
              (pUVar5,method_00,(pUVar5->klass->vtable)._75_set_text.method);
  }
  UI_MultiplayerRoomListPopup__ClearRoomButtons(pUVar25,(MethodInfo *)method_00);
  pSVar16 = UI_MultiplayerRoomListPopup__GetFilteredRooms(pUVar25,(MethodInfo *)method_00);
  if ((pSVar16 != (System_Collections_Generic_List_RoomInfo__o *)0x0) &&
     (pUVar19 = (pUVar25->fields)._noRoomsLabel, pUVar19 != (UnityEngine_GameObject_o *)0x0)) {
    if ((pSVar16->fields)._size == 0) {
      UnityEngine_GameObject__SetActive(pUVar19,1,(MethodInfo *)0x0);
      pUVar5 = (pUVar25->fields)._pageLabel;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,"0/0",(pUVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
    else {
      iVar22 = 0;
      UnityEngine_GameObject__SetActive(pUVar19,0,(MethodInfo *)0x0);
      if (g_data_057ae5d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057ae5d5 = '\x01';
      }
      iVar3 = (pSVar16->fields)._size;
      if (iVar3 != 0) {
        iVar22 = (iVar3 + -1) / (pUVar25->fields)._roomsPerPage + 1;
      }
      (pUVar25->fields)._lastPageCount = iVar22;
      pSVar6 = (pUVar25->fields)._currentPage;
      auStack_178._24_8_ = pUVar25;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        iVar10 = (pSVar6->fields)._value;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar10 = System_Math__Min_3cb7d70(iVar10,iVar22 + -1,(MethodInfo *)0x0);
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,iVar10,MethodInfo_Void_set_Value);
        pUVar25 = (UI_MultiplayerRoomListPopup_o *)auStack_178._24_8_;
        pSVar6 = ((UI_MultiplayerRoomListPopup_Fields *)(auStack_178._24_8_ + 0x10))->_currentPage;
        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
          iVar22 = (int)auStack_178._24_8_;
          pUVar5 = ((UI_MultiplayerRoomListPopup_Fields *)(auStack_178._24_8_ + 0x10))->_pageLabel;
          iStack_17c = (pSVar6->fields)._value + 1;
          pSVar13 = System_Int32__ToString((int32_t)&iStack_17c,(MethodInfo *)0x0);
          pSVar15 = System_Int32__ToString(iVar22 + 0x120,(MethodInfo *)0x0);
          pSVar13 = System_String__Concat_3af7150(pSVar13,"/",pSVar15,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                      (pUVar5,pSVar13,(pUVar5->klass->vtable)._75_set_text.method);
            pSVar16 = UI_MultiplayerRoomListPopup__GetCurrentPageRooms(pUVar25,pSVar16,method_02);
            if (pSVar16 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_158,
                         (System_Collections_Generic_List_object__o *)pSVar16,MethodInfo_List_1_T_Enumerator_Photon_Realtime_RoomInfo_GetEnumerat);
              auStack_178._16_8_ = pIStack_148;
              auStack_178._0_8_ = CONCAT44(auStack_158._4_4_,auStack_158._0_4_);
              auStack_178._8_8_ = CONCAT44(fStack_14c,fStack_150);
              while( true ) {
                __this_02.fields._index = (int)in_stack_fffffffffffffe30;
                __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe28;
                __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffe38;
                bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_02,(MethodInfo_321A1D0 *)auStack_178);
                if ((char)bVar11 == '\0') {
                  __this_03.fields._index = (int)in_stack_fffffffffffffe30;
                  __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
                  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe28;
                  __this_03.fields._current = (Il2CppObject *)in_stack_fffffffffffffe38;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_03,(MethodInfo_321A1C0 *)auStack_178);
                  return;
                }
                pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
                System_Object___ctor(pIVar17,(MethodInfo *)0x0);
                if (pIVar17 == (Il2CppObject *)0x0) break;
                pIVar17[1].monitor = pUVar25;
                il2cpp_runtime_helper_022b4080(&pIVar17[1].monitor,pUVar25);
                pIVar26 = pIVar17 + 1;
                pIVar17[1].klass = (Il2CppClass *)auStack_178._16_8_;
                il2cpp_runtime_helper_022b4080(pIVar26);
                pUVar19 = (pUVar25->fields)._roomList;
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_04409b52;
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                pUVar19 = UI_ElementFactory__InstantiateAndBind(pUVar18,"Prefabs/MainMenu/MultiplayerRoomButton",(MethodInfo *)0x0);
                lVar8 = MethodInfo_Void_Add;
                __this_01 = (pUVar25->fields)._roomButtons;
                if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04409b57;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar7 = (__this_01->fields)._items;
                if (pUVar7 == (UnityEngine_GameObject_array *)0x0) goto label_04409b5c;
                uVar4 = (__this_01->fields)._size;
                if (uVar4 < (uint)pUVar7->max_length) {
                  (__this_01->fields)._size = uVar4 + 1;
                  pUVar7->m_Items[(int)uVar4] = pUVar19;
                  il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar4,pUVar19);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar19,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_04409b61;
                pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Button_GetComponent_Button);
                if (pIVar17 == (Il2CppObject *)0x0) goto label_04409b66;
                pIVar23 = pIVar17[0x10].klass;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (pIVar23 == (Il2CppClass *)0x0) goto label_04409b6b;
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)pIVar23,call,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                pUVar25 = (UI_MultiplayerRoomListPopup_o *)auStack_178._24_8_;
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b70;
                __this_07 = (UI_MultiplayerRoomListPopup_o *)
                            UnityEngine_Transform__Find(pUVar18,"Text",(MethodInfo *)0x0);
                if (__this_07 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_04409b75;
                pIVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_07,MethodInfo_Text_GetComponent_Text);
                pSVar13 = UI_MultiplayerRoomListPopup__GetRoomFormattedName
                                    (__this_07,(Photon_Realtime_RoomInfo_o *)pIVar26->klass,method_03);
                if (pIVar17 == (Il2CppObject *)0x0) goto label_04409b7a;
                (*pIVar17->klass->vtable[0x4b].methodPtr)(pIVar17,pSVar13,pIVar17->klass->vtable[0x4b].method)
                ;
                pIVar23 = pIVar26->klass;
                if (g_data_057ae5d8 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
                  il2cpp_runtime_helper_023445d0(&"");
                  g_data_057ae5d8 = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar13 = PhotonExtensions__GetStringProperty_3f67f30
                                    ((Photon_Realtime_RoomInfo_o *)pIVar23,
                                     *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),""
                                     ,(MethodInfo *)0x0);
                bVar11 = System_String__op_Equality
                                   (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b9d;
                  pUVar18 = UnityEngine_Transform__Find(pUVar18,"PasswordIcon",(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409ba2;
                  pUVar20 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                  if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
                    goto label_044097e0;
                  }
                  goto label_04409ba7;
                }
label_044097e0:
                pIVar23 = pIVar26->klass;
                if (g_data_057ae5d9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
                  g_data_057ae5d9 = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = PhotonExtensions__GetBoolProperty_3f67fc0
                                   ((Photon_Realtime_RoomInfo_o *)pIVar23,
                                    *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409bac;
                  pUVar18 = UnityEngine_Transform__Find(pUVar18,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409bb1;
                  pUVar20 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_04409bb6;
                  UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
                  pIVar17 = UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
                  if (pIVar17 != (Il2CppObject *)0x0) {
                    pIVar17[2].klass = "Requires user account to join";
                    il2cpp_runtime_helper_022b4080(pIVar17 + 2);
                    goto label_0440991f;
                  }
                  goto label_04409bbb;
                }
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b93;
                pUVar18 = UnityEngine_Transform__Find(pUVar18,"VerificationIcon",(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b98;
                pUVar20 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_04409bc0;
                UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
label_0440991f:
                __this_08 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Button_GetComponent_Button);
                pSVar13 = (System_String_o *)
                          (*((*&pUVar25->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (pUVar25,((*&pUVar25->klass)->vtable)._4_get_ThemePanel.method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)auStack_f8,pSVar13,"RoomButton","",
                           "DefaultPanel",(MethodInfo *)0x0);
                aUStack_118[1].r = fStack_a8;
                aUStack_118[1].g = fStack_a4;
                aUStack_118[0].r = UStack_b8.r;
                aUStack_118[0].g = UStack_b8.g;
                aUStack_118[0].b = UStack_b8.b;
                aUStack_118[0].a = UStack_b8.a;
                UStack_128.r = UStack_c8.r;
                UStack_128.g = UStack_c8.g;
                UStack_128.b = UStack_c8.b;
                UStack_128.a = UStack_c8.a;
                _Stack_138.genericMethod = pvStack_d8;
                fStack_130 = fStack_d0;
                fStack_12c = fStack_cc;
                pIStack_148 = (Il2CppClass *)auStack_f8._16_8_;
                pIStack_140 = pIStack_e0;
                auStack_158._0_4_ = auStack_f8._0_4_;
                auStack_158._4_4_ = auStack_f8._4_4_;
                fStack_150 = (float)auStack_f8._8_4_;
                fStack_14c = (float)auStack_f8._12_4_;
                if (__this_08 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04409b7f;
                in_stack_fffffffffffffe28 = CONCAT44(auStack_f8._4_4_,auStack_f8._0_4_);
                in_stack_fffffffffffffe30 = CONCAT44(auStack_f8._12_4_,auStack_f8._8_4_);
                value.fields.m_NormalColor.fields.b = (float)auStack_f8._8_4_;
                value.fields.m_NormalColor.fields.a = (float)auStack_f8._12_4_;
                value.fields.m_NormalColor.fields.r = (float)auStack_f8._0_4_;
                value.fields.m_NormalColor.fields.g = (float)auStack_f8._4_4_;
                value.fields.m_HighlightedColor.fields.r = (float)auStack_f8._16_4_;
                value.fields.m_HighlightedColor.fields.g = (float)auStack_f8._20_4_;
                value.fields.m_HighlightedColor.fields._8_8_ = pIStack_e0;
                value.fields.m_PressedColor.fields._0_8_ = pvStack_d8;
                value.fields.m_PressedColor.fields.b = fStack_d0;
                value.fields.m_PressedColor.fields.a = fStack_cc;
                value.fields.m_SelectedColor.fields.r = UStack_c8.r;
                value.fields.m_SelectedColor.fields.g = UStack_c8.g;
                value.fields.m_SelectedColor.fields.b = UStack_c8.b;
                value.fields.m_SelectedColor.fields.a = UStack_c8.a;
                value.fields.m_DisabledColor.fields.r = UStack_b8.r;
                value.fields.m_DisabledColor.fields.g = UStack_b8.g;
                value.fields.m_DisabledColor.fields.b = UStack_b8.b;
                value.fields.m_DisabledColor.fields.a = UStack_b8.a;
                value.fields.m_ColorMultiplier = fStack_a8;
                value.fields.m_FadeDuration = fStack_a4;
                in_stack_fffffffffffffe38 = (Il2CppClass *)auStack_f8._16_8_;
                UnityEngine_UI_Selectable__set_colors(__this_08,value,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b84;
                pUVar18 = UnityEngine_Transform__Find(pUVar18,"Text",(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b89;
                pIVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar18,MethodInfo_Text_GetComponent_Text);
                pSVar13 = (System_String_o *)
                          (*((*&pUVar25->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (pUVar25,((*&pUVar25->klass)->vtable)._4_get_ThemePanel.method);
                UVar29 = UI_UIManager__GetThemeColor
                                   (pSVar13,"RoomButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
                fVar27 = UVar29.fields.r;
                if (pIVar17 == (Il2CppObject *)0x0) goto label_04409b8e;
                (*pIVar17->klass->vtable[0x17].methodPtr)
                          (fVar27,UVar29.fields.b,pIVar17,pIVar17->klass->vtable[0x17].method);
              }
              il2cpp_runtime_helper_022b2c90();
label_04409b52:
              il2cpp_runtime_helper_022b2c90();
label_04409b57:
              il2cpp_runtime_helper_022b2c90();
label_04409b5c:
              il2cpp_runtime_helper_022b2c90();
label_04409b61:
              il2cpp_runtime_helper_022b2c90();
label_04409b66:
              il2cpp_runtime_helper_022b2c90();
label_04409b6b:
              il2cpp_runtime_helper_022b2c90();
label_04409b70:
              il2cpp_runtime_helper_022b2c90();
label_04409b75:
              il2cpp_runtime_helper_022b2c90();
label_04409b7a:
              il2cpp_runtime_helper_022b2c90();
label_04409b7f:
              il2cpp_runtime_helper_022b2c90();
label_04409b84:
              il2cpp_runtime_helper_022b2c90();
label_04409b89:
              fVar27 = (float)il2cpp_runtime_helper_022b2c90();
label_04409b8e:
              il2cpp_runtime_helper_022b2c90(fVar27);
label_04409b93:
              il2cpp_runtime_helper_022b2c90();
label_04409b98:
              il2cpp_runtime_helper_022b2c90();
label_04409b9d:
              il2cpp_runtime_helper_022b2c90();
label_04409ba2:
              il2cpp_runtime_helper_022b2c90();
label_04409ba7:
              il2cpp_runtime_helper_022b2c90();
label_04409bac:
              il2cpp_runtime_helper_022b2c90();
label_04409bb1:
              il2cpp_runtime_helper_022b2c90();
label_04409bb6:
              il2cpp_runtime_helper_022b2c90();
label_04409bbb:
              il2cpp_runtime_helper_022b2c90();
label_04409bc0:
              il2cpp_runtime_helper_022b2c90();
            }
          }
        }
      }
    }
  }
label_04409bc5:
  auVar28 = il2cpp_runtime_helper_022b2c90();
  if (auVar28._8_4_ == 1) {
    plVar21 = (long *)__cxa_begin_catch(auVar28._0_8_);
    lVar8 = *plVar21;
    __cxa_end_catch();
    __this_04.fields._index = (int)in_stack_fffffffffffffe30;
    __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe28;
    __this_04.fields._current = (Il2CppObject *)in_stack_fffffffffffffe38;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_178);
    if (lVar8 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_05.fields._index = (int)in_stack_fffffffffffffe30;
  __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe30 >> 0x20);
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe28;
  __this_05.fields._current = (Il2CppObject *)in_stack_fffffffffffffe38;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_178);
  _Unwind_Resume(auVar28._0_8_);
}


// UI.MultiplayerFilterPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerFilterPopup__OnButtonClick (UI_MultiplayerFilterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4408fb0

void UI_MultiplayerFilterPopup__OnButtonClick
               (UI_MultiplayerFilterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_UI_Text_o *pUVar5;
  Settings_IntSetting_o *pSVar6;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar7;
  long lVar8;
  char cVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar10;
  int32_t iVar11;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  Photon_Realtime_RoomInfo_array *pPVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  Il2CppClass *pIVar15;
  System_Collections_Generic_List_RoomInfo__o *pSVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Events_UnityAction_o *call;
  UI_MultiplayerRoomListPopup_o *__this_06;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_UI_Selectable_o *__this_07;
  long *plVar21;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar22;
  UI_MultiplayerRoomListPopup_o *pUVar23;
  Il2CppObject *pIVar24;
  float fVar25;
  undefined1 auVar26 [12];
  UnityEngine_Color_o UVar27;
  undefined8 in_stack_fffffffffffffe80;
  undefined8 in_stack_fffffffffffffe88;
  Il2CppClass *in_stack_fffffffffffffe90;
  int iStack_124;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [8];
  float fStack_f8;
  float fStack_f4;
  Il2CppClass *pIStack_f0;
  Il2CppRGCTXData *pIStack_e8;
  _union_249689 _Stack_e0;
  float fStack_d8;
  float fStack_d4;
  UnityEngine_Color_Fields UStack_d0;
  UnityEngine_Color_Fields aUStack_c0 [2];
  undefined1 auStack_a0 [24];
  Il2CppRGCTXData *pIStack_88;
  void *pvStack_80;
  float fStack_78;
  float fStack_74;
  UnityEngine_Color_Fields UStack_70;
  UnityEngine_Color_Fields UStack_60;
  float fStack_50;
  float fStack_4c;
  System_String_o *pSStack_48;
  
  if (g_data_057ae5b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae5b8 = '\x01';
  }
  bVar10 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  pIVar15 = (Il2CppClass *)(__this->klass->vtable)._22_Hide.method;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this);
  pUVar23 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).Parent;
  if (pUVar23 != (UI_MultiplayerRoomListPopup_o *)0x0) {
    bVar2 = (TypeInfo_MultiplayerRoomListPopup->_2).naturalAligment;
    if ((bVar2 <= (pUVar23->klass->_2).naturalAligment) &&
       ((pUVar23->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MultiplayerRoomListPopup)) {
      UI_MultiplayerRoomListPopup__RefreshList(pUVar23,1,method_00);
      return;
    }
    pIVar15 = TypeInfo_MultiplayerRoomListPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)pIVar15;
  pSStack_48 = name;
  if (g_data_057ae5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_P);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_ToArray_RoomInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Photon_Realtime_RoomInfo_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshList_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Requires user account to join");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomButton");
    il2cpp_runtime_helper_023445d0(&"PasswordIcon");
    il2cpp_runtime_helper_023445d0(&"RoomButton");
    il2cpp_runtime_helper_023445d0(&"VerificationIcon");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"0/0");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"PlayersOnline");
    g_data_057ae5d2 = '\x01';
  }
  iStack_124 = 0;
  auStack_120._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_120._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_120._16_8_ = (Il2CppClass *)0x0;
  (pUVar23->fields)._currentUpdateDelay = (pUVar23->fields)._maxUpdateDelay;
  if (cVar9 != '\0') {
    if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04409bc5;
    source = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_P);
    pPVar12 = (Photon_Realtime_RoomInfo_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_RoomInfo_ToArray_RoomInfo);
    (pUVar23->fields)._rooms = pPVar12;
    il2cpp_runtime_helper_022b4080(&(pUVar23->fields)._rooms);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar11 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
    iStack_124 = iVar11 / 2;
    pSVar13 = System_Int32__ToString((int32_t)&iStack_124,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = UI_UIManager__GetLocale
                        ("MainMenu","MultiplayerRoomListPopup","PlayersOnline","","",(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)System_String__Concat_3af7150(pSVar13," ",pSVar14,(MethodInfo *)0x0);
    pUVar5 = (pUVar23->fields)._playersOnlineLabel;
    if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_04409bc5;
    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
              (pUVar5,pIVar15,(pUVar5->klass->vtable)._75_set_text.method);
  }
  UI_MultiplayerRoomListPopup__ClearRoomButtons(pUVar23,(MethodInfo *)pIVar15);
  pSVar16 = UI_MultiplayerRoomListPopup__GetFilteredRooms(pUVar23,(MethodInfo *)pIVar15);
  if ((pSVar16 != (System_Collections_Generic_List_RoomInfo__o *)0x0) &&
     (pUVar19 = (pUVar23->fields)._noRoomsLabel, pUVar19 != (UnityEngine_GameObject_o *)0x0)) {
    if ((pSVar16->fields)._size == 0) {
      UnityEngine_GameObject__SetActive(pUVar19,1,(MethodInfo *)0x0);
      pUVar5 = (pUVar23->fields)._pageLabel;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,"0/0",(pUVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
    else {
      iVar22 = 0;
      UnityEngine_GameObject__SetActive(pUVar19,0,(MethodInfo *)0x0);
      if (g_data_057ae5d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057ae5d5 = '\x01';
      }
      iVar3 = (pSVar16->fields)._size;
      if (iVar3 != 0) {
        iVar22 = (iVar3 + -1) / (pUVar23->fields)._roomsPerPage + 1;
      }
      (pUVar23->fields)._lastPageCount = iVar22;
      pSVar6 = (pUVar23->fields)._currentPage;
      auStack_120._24_8_ = pUVar23;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        iVar11 = (pSVar6->fields)._value;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar11 = System_Math__Min_3cb7d70(iVar11,iVar22 + -1,(MethodInfo *)0x0);
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,iVar11,MethodInfo_Void_set_Value);
        pUVar23 = (UI_MultiplayerRoomListPopup_o *)auStack_120._24_8_;
        pSVar6 = ((UI_MultiplayerRoomListPopup_Fields *)(auStack_120._24_8_ + 0x10))->_currentPage;
        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
          iVar22 = (int)auStack_120._24_8_;
          pUVar5 = ((UI_MultiplayerRoomListPopup_Fields *)(auStack_120._24_8_ + 0x10))->_pageLabel;
          iStack_124 = (pSVar6->fields)._value + 1;
          pSVar13 = System_Int32__ToString((int32_t)&iStack_124,(MethodInfo *)0x0);
          pSVar14 = System_Int32__ToString(iVar22 + 0x120,(MethodInfo *)0x0);
          pSVar13 = System_String__Concat_3af7150(pSVar13,"/",pSVar14,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                      (pUVar5,pSVar13,(pUVar5->klass->vtable)._75_set_text.method);
            pSVar16 = UI_MultiplayerRoomListPopup__GetCurrentPageRooms(pUVar23,pSVar16,method_01);
            if (pSVar16 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_100,
                         (System_Collections_Generic_List_object__o *)pSVar16,MethodInfo_List_1_T_Enumerator_Photon_Realtime_RoomInfo_GetEnumerat);
              auStack_120._16_8_ = pIStack_f0;
              auStack_120._0_8_ = CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
              auStack_120._8_8_ = CONCAT44(fStack_f4,fStack_f8);
              while( true ) {
                __this_02.fields._index = (int)in_stack_fffffffffffffe88;
                __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
                __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffe90;
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_02,(MethodInfo_321A1D0 *)auStack_120);
                if ((char)bVar10 == '\0') {
                  __this_03.fields._index = (int)in_stack_fffffffffffffe88;
                  __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
                  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
                  __this_03.fields._current = (Il2CppObject *)in_stack_fffffffffffffe90;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_03,(MethodInfo_321A1C0 *)auStack_120);
                  return;
                }
                pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
                System_Object___ctor(pIVar17,(MethodInfo *)0x0);
                if (pIVar17 == (Il2CppObject *)0x0) break;
                pIVar17[1].monitor = pUVar23;
                il2cpp_runtime_helper_022b4080(&pIVar17[1].monitor,pUVar23);
                pIVar24 = pIVar17 + 1;
                pIVar17[1].klass = (Il2CppClass *)auStack_120._16_8_;
                il2cpp_runtime_helper_022b4080(pIVar24);
                pUVar19 = (pUVar23->fields)._roomList;
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_04409b52;
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                pUVar19 = UI_ElementFactory__InstantiateAndBind(pUVar18,"Prefabs/MainMenu/MultiplayerRoomButton",(MethodInfo *)0x0);
                lVar8 = MethodInfo_Void_Add;
                __this_01 = (pUVar23->fields)._roomButtons;
                if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04409b57;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar7 = (__this_01->fields)._items;
                if (pUVar7 == (UnityEngine_GameObject_array *)0x0) goto label_04409b5c;
                uVar4 = (__this_01->fields)._size;
                if (uVar4 < (uint)pUVar7->max_length) {
                  (__this_01->fields)._size = uVar4 + 1;
                  pUVar7->m_Items[(int)uVar4] = pUVar19;
                  il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar4,pUVar19);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar19,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_04409b61;
                pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Button_GetComponent_Button);
                if (pIVar17 == (Il2CppObject *)0x0) goto label_04409b66;
                pIVar15 = pIVar17[0x10].klass;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (pIVar15 == (Il2CppClass *)0x0) goto label_04409b6b;
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)pIVar15,call,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                pUVar23 = (UI_MultiplayerRoomListPopup_o *)auStack_120._24_8_;
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b70;
                __this_06 = (UI_MultiplayerRoomListPopup_o *)
                            UnityEngine_Transform__Find(pUVar18,"Text",(MethodInfo *)0x0);
                if (__this_06 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_04409b75;
                pIVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_06,MethodInfo_Text_GetComponent_Text);
                pSVar13 = UI_MultiplayerRoomListPopup__GetRoomFormattedName
                                    (__this_06,(Photon_Realtime_RoomInfo_o *)pIVar24->klass,method_02);
                if (pIVar17 == (Il2CppObject *)0x0) goto label_04409b7a;
                (*pIVar17->klass->vtable[0x4b].methodPtr)(pIVar17,pSVar13,pIVar17->klass->vtable[0x4b].method)
                ;
                pIVar15 = pIVar24->klass;
                if (g_data_057ae5d8 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
                  il2cpp_runtime_helper_023445d0(&"");
                  g_data_057ae5d8 = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar13 = PhotonExtensions__GetStringProperty_3f67f30
                                    ((Photon_Realtime_RoomInfo_o *)pIVar15,
                                     *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),""
                                     ,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b9d;
                  pUVar18 = UnityEngine_Transform__Find(pUVar18,"PasswordIcon",(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409ba2;
                  pUVar20 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                  if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
                    goto label_044097e0;
                  }
                  goto label_04409ba7;
                }
label_044097e0:
                pIVar15 = pIVar24->klass;
                if (g_data_057ae5d9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
                  g_data_057ae5d9 = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = PhotonExtensions__GetBoolProperty_3f67fc0
                                   ((Photon_Realtime_RoomInfo_o *)pIVar15,
                                    *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409bac;
                  pUVar18 = UnityEngine_Transform__Find(pUVar18,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409bb1;
                  pUVar20 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_04409bb6;
                  UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
                  pIVar17 = UnityEngine_GameObject__AddComponent_object_(pUVar20,MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
                  if (pIVar17 != (Il2CppObject *)0x0) {
                    pIVar17[2].klass = "Requires user account to join";
                    il2cpp_runtime_helper_022b4080(pIVar17 + 2);
                    goto label_0440991f;
                  }
                  goto label_04409bbb;
                }
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b93;
                pUVar18 = UnityEngine_Transform__Find(pUVar18,"VerificationIcon",(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b98;
                pUVar20 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto label_04409bc0;
                UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
label_0440991f:
                __this_07 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Button_GetComponent_Button);
                pSVar13 = (System_String_o *)
                          (*((*&pUVar23->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (pUVar23,((*&pUVar23->klass)->vtable)._4_get_ThemePanel.method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)auStack_a0,pSVar13,"RoomButton","",
                           "DefaultPanel",(MethodInfo *)0x0);
                aUStack_c0[1].r = fStack_50;
                aUStack_c0[1].g = fStack_4c;
                aUStack_c0[0].r = UStack_60.r;
                aUStack_c0[0].g = UStack_60.g;
                aUStack_c0[0].b = UStack_60.b;
                aUStack_c0[0].a = UStack_60.a;
                UStack_d0.r = UStack_70.r;
                UStack_d0.g = UStack_70.g;
                UStack_d0.b = UStack_70.b;
                UStack_d0.a = UStack_70.a;
                _Stack_e0.genericMethod = pvStack_80;
                fStack_d8 = fStack_78;
                fStack_d4 = fStack_74;
                pIStack_f0 = (Il2CppClass *)auStack_a0._16_8_;
                pIStack_e8 = pIStack_88;
                auStack_100._0_4_ = auStack_a0._0_4_;
                auStack_100._4_4_ = auStack_a0._4_4_;
                fStack_f8 = (float)auStack_a0._8_4_;
                fStack_f4 = (float)auStack_a0._12_4_;
                if (__this_07 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04409b7f;
                in_stack_fffffffffffffe80 = CONCAT44(auStack_a0._4_4_,auStack_a0._0_4_);
                in_stack_fffffffffffffe88 = CONCAT44(auStack_a0._12_4_,auStack_a0._8_4_);
                value.fields.m_NormalColor.fields.b = (float)auStack_a0._8_4_;
                value.fields.m_NormalColor.fields.a = (float)auStack_a0._12_4_;
                value.fields.m_NormalColor.fields.r = (float)auStack_a0._0_4_;
                value.fields.m_NormalColor.fields.g = (float)auStack_a0._4_4_;
                value.fields.m_HighlightedColor.fields.r = (float)auStack_a0._16_4_;
                value.fields.m_HighlightedColor.fields.g = (float)auStack_a0._20_4_;
                value.fields.m_HighlightedColor.fields._8_8_ = pIStack_88;
                value.fields.m_PressedColor.fields._0_8_ = pvStack_80;
                value.fields.m_PressedColor.fields.b = fStack_78;
                value.fields.m_PressedColor.fields.a = fStack_74;
                value.fields.m_SelectedColor.fields.r = UStack_70.r;
                value.fields.m_SelectedColor.fields.g = UStack_70.g;
                value.fields.m_SelectedColor.fields.b = UStack_70.b;
                value.fields.m_SelectedColor.fields.a = UStack_70.a;
                value.fields.m_DisabledColor.fields.r = UStack_60.r;
                value.fields.m_DisabledColor.fields.g = UStack_60.g;
                value.fields.m_DisabledColor.fields.b = UStack_60.b;
                value.fields.m_DisabledColor.fields.a = UStack_60.a;
                value.fields.m_ColorMultiplier = fStack_50;
                value.fields.m_FadeDuration = fStack_4c;
                in_stack_fffffffffffffe90 = (Il2CppClass *)auStack_a0._16_8_;
                UnityEngine_UI_Selectable__set_colors(__this_07,value,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b84;
                pUVar18 = UnityEngine_Transform__Find(pUVar18,"Text",(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_04409b89;
                pIVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar18,MethodInfo_Text_GetComponent_Text);
                pSVar13 = (System_String_o *)
                          (*((*&pUVar23->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (pUVar23,((*&pUVar23->klass)->vtable)._4_get_ThemePanel.method);
                UVar27 = UI_UIManager__GetThemeColor
                                   (pSVar13,"RoomButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
                fVar25 = UVar27.fields.r;
                if (pIVar17 == (Il2CppObject *)0x0) goto label_04409b8e;
                (*pIVar17->klass->vtable[0x17].methodPtr)
                          (fVar25,UVar27.fields.b,pIVar17,pIVar17->klass->vtable[0x17].method);
              }
              il2cpp_runtime_helper_022b2c90();
label_04409b52:
              il2cpp_runtime_helper_022b2c90();
label_04409b57:
              il2cpp_runtime_helper_022b2c90();
label_04409b5c:
              il2cpp_runtime_helper_022b2c90();
label_04409b61:
              il2cpp_runtime_helper_022b2c90();
label_04409b66:
              il2cpp_runtime_helper_022b2c90();
label_04409b6b:
              il2cpp_runtime_helper_022b2c90();
label_04409b70:
              il2cpp_runtime_helper_022b2c90();
label_04409b75:
              il2cpp_runtime_helper_022b2c90();
label_04409b7a:
              il2cpp_runtime_helper_022b2c90();
label_04409b7f:
              il2cpp_runtime_helper_022b2c90();
label_04409b84:
              il2cpp_runtime_helper_022b2c90();
label_04409b89:
              fVar25 = (float)il2cpp_runtime_helper_022b2c90();
label_04409b8e:
              il2cpp_runtime_helper_022b2c90(fVar25);
label_04409b93:
              il2cpp_runtime_helper_022b2c90();
label_04409b98:
              il2cpp_runtime_helper_022b2c90();
label_04409b9d:
              il2cpp_runtime_helper_022b2c90();
label_04409ba2:
              il2cpp_runtime_helper_022b2c90();
label_04409ba7:
              il2cpp_runtime_helper_022b2c90();
label_04409bac:
              il2cpp_runtime_helper_022b2c90();
label_04409bb1:
              il2cpp_runtime_helper_022b2c90();
label_04409bb6:
              il2cpp_runtime_helper_022b2c90();
label_04409bbb:
              il2cpp_runtime_helper_022b2c90();
label_04409bc0:
              il2cpp_runtime_helper_022b2c90();
            }
          }
        }
      }
    }
  }
label_04409bc5:
  auVar26 = il2cpp_runtime_helper_022b2c90();
  if (auVar26._8_4_ == 1) {
    plVar21 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar8 = *plVar21;
    __cxa_end_catch();
    __this_04.fields._index = (int)in_stack_fffffffffffffe88;
    __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
    __this_04.fields._current = (Il2CppObject *)in_stack_fffffffffffffe90;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_120);
    if (lVar8 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_05.fields._index = (int)in_stack_fffffffffffffe88;
  __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe88 >> 0x20);
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe80;
  __this_05.fields._current = (Il2CppObject *)in_stack_fffffffffffffe90;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_120);
  _Unwind_Resume(auVar26._0_8_);
}


// UI.MultiplayerFilterPopup$$.ctor
// il2cpp: void UI_MultiplayerFilterPopup___ctor (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x440a0b0

void UI_MultiplayerFilterPopup___ctor(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerFilterPopup$$<Setup>b__14_0
// il2cpp: void UI_MultiplayerFilterPopup___Setup_b__14_0 (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x440a0c0

void UI_MultiplayerFilterPopup___Setup_b__14_0(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae5b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae5b9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerFilterPopup__OnButtonClick(__this,"Confirm",in_RDX);
  return;
}


