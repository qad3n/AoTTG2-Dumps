// Type: UI.MultiplayerRoomListPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerRoomListPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerRoomListPopup.cs
// --------------------------------

// UI.MultiplayerRoomListPopup.<>c__DisplayClass35_0$$.ctor
// il2cpp: void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___ctor (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MultiplayerRoomListPopup___c__DisplayClass35_0___ctor(UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup.<>c__DisplayClass35_0$$<RefreshList>b__0
// il2cpp: void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___RefreshList_b__0 (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x18229d1e0

void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___RefreshList_b__0
               (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  UI_MultiplayerRoomListPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MultiplayerRoomListPopup_o *)0x0) {
    UI_MultiplayerRoomListPopup__OnRoomClick(__this_00,(__this->fields).room,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__get_ThemePanel (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182296890

System_String_o *
UI_MultiplayerRoomListPopup__get_ThemePanel(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434745b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerRoomListPopup");
    Il2CppMethodInitialized_18434745b = '\x01';
  }
  return "MultiplayerRoomListPopup";
}


// UI.MultiplayerRoomListPopup$$get_HasPremadeContent
// il2cpp: bool UI_MultiplayerRoomListPopup__get_HasPremadeContent (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MultiplayerRoomListPopup__get_HasPremadeContent(UI_MultiplayerRoomListPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MultiplayerRoomListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerRoomListPopup__get_HorizontalPadding (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_MultiplayerRoomListPopup__get_HorizontalPadding(UI_MultiplayerRoomListPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.MultiplayerRoomListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerRoomListPopup__get_VerticalPadding (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_MultiplayerRoomListPopup__get_VerticalPadding(UI_MultiplayerRoomListPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.MultiplayerRoomListPopup$$get_Width
// il2cpp: float UI_MultiplayerRoomListPopup__get_Width (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x18210fa90

float
UI_MultiplayerRoomListPopup__get_Width(UI_MultiplayerRoomListPopup_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// UI.MultiplayerRoomListPopup$$get_Height
// il2cpp: float UI_MultiplayerRoomListPopup__get_Height (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182296880

float UI_MultiplayerRoomListPopup__get_Height(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 660.0;
}


// UI.MultiplayerRoomListPopup$$Setup
// il2cpp: void UI_MultiplayerRoomListPopup__Setup (UI_MultiplayerRoomListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822955e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182295f50: mov ebx, r12d
// asm:   0x182295f53: mov eax, r12d

void UI_MultiplayerRoomListPopup__Setup
               (UI_MultiplayerRoomListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_StringSetting_o *setting;
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_UI_Selectable_o *__this_00;
  System_String_o *category;
  bool bVar2;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_InputSettingElement_o *__this_02;
  UI_ElementStyle_o *__this_03;
  System_String_o *title;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  System_String_o *pSVar9;
  System_Object_array *pSVar10;
  UnityEngine_UI_ColorBlock_o *pUVar11;
  UnityEngine_Color_o *pUVar12;
  UnityEngine_UI_RawImage_o *pUVar13;
  UnityEngine_Texture_o *value;
  uint uVar14;
  UnityEngine_Color_Fields local_118;
  UnityEngine_Color_o local_108;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_18434745c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"0 ");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomList");
    il2cpp_codegen_initialize_runtime_metadata(&"Page/RightButton");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerRoomListPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"NoRoomsLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Page/LeftButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SearchInputSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Page/PageLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomButton");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayersOnlineLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Filters");
    il2cpp_codegen_initialize_runtime_metadata(&"FilterButton");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayersOnline");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"NoRooms");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    il2cpp_codegen_initialize_runtime_metadata(&"RefreshButton");
    Il2CppMethodInitialized_18434745c = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar9 = "MultiplayerRoomListPopup";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Create",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar5,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar5,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).TopBar;
  if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
      (pUVar5 = UnityEngine_Transform__Find(pUVar5,"SearchInputSetting",(MethodInfo *)0x0),
      pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar6,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_InputSettingElement);
    setting = (__this->fields)._filterQuery;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_03,0x18,0.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    title = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_2,(MethodInfo *)0x0);
    if (__this_02 != (UI_InputSettingElement_o *)0x0) {
      UI_InputSettingElement__Setup
                (__this_02,(Settings_BaseSetting_o *)setting,__this_03,title,pSVar3,160.0,40.0,false,
                 (UnityEngine_Events_UnityAction_o *)0x0,pUVar4,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).TopBar;
      if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar5 = UnityEngine_Transform__Find(pUVar5,"FilterButton",(MethodInfo *)0x0),
          pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar7 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar5,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button),
         pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
        pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_3,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).TopBar;
          if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
              (pUVar5 = UnityEngine_Transform__Find(pUVar5,"RefreshButton",(MethodInfo *)0x0),
              pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
             (pUVar7 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar5,
                                  (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button),
             pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
            pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
            pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_4,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).TopBar;
              if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                  (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Page/LeftButton",(MethodInfo *)0x0),
                  pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar7 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar5,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Button),
                 pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
                pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_5,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
                  pUVar5 = (__this->fields).TopBar;
                  if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                      (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Page/RightButton",(MethodInfo *)0x0),
                      pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
                     (pUVar7 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar5,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Button),
                     pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
                    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction)
                    ;
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                               (intptr_t)MethodInfo_UI_MultiplayerRoomListPopup_Setup_b__29_6,
                               (MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar4,(MethodInfo *)0x0);
                      pUVar5 = (__this->fields).TopBar;
                      if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                         (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Page/PageLabel",(MethodInfo *)0x0)
                         , pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar8 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar5,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Text);
                        (__this->fields)._pageLabel = pUVar8;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._pageLabel,pUVar8);
                        pUVar5 = (__this->fields).SinglePanel;
                        if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                           (pUVar5 = UnityEngine_Transform__Find
                                               (pUVar5,"RoomList",(MethodInfo *)0x0),
                           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                          pUVar6 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                          (__this->fields)._roomList = pUVar6;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._roomList,pUVar6);
                          pUVar6 = (__this->fields)._roomList;
                          if (((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                              (pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
                              pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
                             (pUVar5 = UnityEngine_Transform__Find
                                                 (pUVar5,"NoRoomsLabel",(MethodInfo *)0x0),
                             pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                            pUVar6 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                            (__this->fields)._noRoomsLabel = pUVar6;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._noRoomsLabel,pUVar6);
                            pUVar6 = (__this->fields)._noRoomsLabel;
                            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                 (pUVar6,(MethodInfo_6F5650 *)
                                                         MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                              uVar14 = 0;
                              pSVar3 = UI_UIManager__GetLocale
                                                 (category,pSVar9,"NoRooms","",
                                                  "",(MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                          (pUVar8,pSVar3,(pUVar8->klass->vtable)._75_set_text.method);
                                pUVar5 = (__this->fields).TopBar;
                                if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                   (pUVar5 = UnityEngine_Transform__Find
                                                       (pUVar5,"PlayersOnlineLabel",(MethodInfo *)0x0),
                                   pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                                  pUVar8 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar5,
                                                      (MethodInfo_6651A0 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_Text);
                                  (__this->fields)._playersOnlineLabel = pUVar8;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields)._playersOnlineLabel,pUVar8);
                                  pUVar8 = (__this->fields)._playersOnlineLabel;
                                  pSVar9 = UI_UIManager__GetLocale
                                                     (category,pSVar9,"PlayersOnline",
                                                      "","",
                                                      (MethodInfo *)0x0);
                                  pSVar9 = System_String__Concat_1969e50
                                                     ("0 ",pSVar9,(MethodInfo *)0x0);
                                  if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                              (pUVar8,pSVar9,(pUVar8->klass->vtable)._75_set_text.method);
                                    pUVar5 = (__this->fields).TopBar;
                                    if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                        (pUVar5 = UnityEngine_Transform__Find
                                                            (pUVar5,"FilterButton",(MethodInfo *)0x0),
                                        pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
                                       (pUVar5 = UnityEngine_Transform__Find
                                                           (pUVar5,"Text",(MethodInfo *)0x0),
                                       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                                      pUVar8 = UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)pUVar5,
                                                          (MethodInfo_6651A0 *)
                                                          MethodInfo_UnityEngine_Component_GetComponent_Text);
                                      pSVar9 = UI_UIManager__GetLocaleCommon
                                                         ("Filters",(MethodInfo *)0x0);
                                      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                                  (pUVar8,pSVar9,(pUVar8->klass->vtable)._75_set_text.method);
                                        pUVar5 = (__this->fields).TopBar;
                                        if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                           (pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__665370
                                                                ((UnityEngine_Component_o *)pUVar5,
                                                                 (MethodInfo_665370 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponentsInChildren_Button
                                                       ), pSVar10 != (System_Object_array *)0x0)) {
                                          for (; (int)uVar14 < (int)pSVar10->max_length; uVar14 = uVar14 + 1)
                                          {
                                            if ((uint)pSVar10->max_length <= uVar14) {
                                              ThrowIndexOutOfRangeException();
                                            }
                                            if (__this_01 == (UI_ElementStyle_o *)0x0) goto label_1822963dd;
                                            pSVar9 = (__this_01->fields).ThemePanel;
                                            __this_00 = (UnityEngine_UI_Selectable_o *)
                                                        pSVar10->m_Items[(int)uVar14];
                                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_UI_UIManager);
                                            }
                                            pUVar11 = UI_UIManager__GetThemeColorBlock
                                                                (&local_98,pSVar9,"DefaultButton",
                                                                 "","DefaultPanel",
                                                                 (MethodInfo *)0x0);
                                            if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0)
                                            goto label_1822963dd;
                                            local_f8.fields.m_NormalColor.fields.r =
                                                 (pUVar11->fields).m_NormalColor.fields.r;
                                            local_f8.fields.m_NormalColor.fields.g =
                                                 (pUVar11->fields).m_NormalColor.fields.g;
                                            local_f8.fields.m_NormalColor.fields.b =
                                                 (pUVar11->fields).m_NormalColor.fields.b;
                                            local_f8.fields.m_NormalColor.fields.a =
                                                 (pUVar11->fields).m_NormalColor.fields.a;
                                            local_f8.fields.m_HighlightedColor.fields.r =
                                                 (pUVar11->fields).m_HighlightedColor.fields.r;
                                            local_f8.fields.m_HighlightedColor.fields.g =
                                                 (pUVar11->fields).m_HighlightedColor.fields.g;
                                            local_f8.fields.m_HighlightedColor.fields.b =
                                                 (pUVar11->fields).m_HighlightedColor.fields.b;
                                            local_f8.fields.m_HighlightedColor.fields.a =
                                                 (pUVar11->fields).m_HighlightedColor.fields.a;
                                            local_f8.fields.m_PressedColor.fields.r =
                                                 (pUVar11->fields).m_PressedColor.fields.r;
                                            local_f8.fields.m_PressedColor.fields.g =
                                                 (pUVar11->fields).m_PressedColor.fields.g;
                                            local_f8.fields.m_PressedColor.fields.b =
                                                 (pUVar11->fields).m_PressedColor.fields.b;
                                            local_f8.fields.m_PressedColor.fields.a =
                                                 (pUVar11->fields).m_PressedColor.fields.a;
                                            local_f8.fields.m_SelectedColor.fields.r =
                                                 (pUVar11->fields).m_SelectedColor.fields.r;
                                            local_f8.fields.m_SelectedColor.fields.g =
                                                 (pUVar11->fields).m_SelectedColor.fields.g;
                                            local_f8.fields.m_SelectedColor.fields.b =
                                                 (pUVar11->fields).m_SelectedColor.fields.b;
                                            local_f8.fields.m_SelectedColor.fields.a =
                                                 (pUVar11->fields).m_SelectedColor.fields.a;
                                            local_f8.fields.m_DisabledColor.fields.r =
                                                 (pUVar11->fields).m_DisabledColor.fields.r;
                                            local_f8.fields.m_DisabledColor.fields.g =
                                                 (pUVar11->fields).m_DisabledColor.fields.g;
                                            local_f8.fields.m_DisabledColor.fields.b =
                                                 (pUVar11->fields).m_DisabledColor.fields.b;
                                            local_f8.fields.m_DisabledColor.fields.a =
                                                 (pUVar11->fields).m_DisabledColor.fields.a;
                                            local_f8.fields.m_ColorMultiplier =
                                                 (pUVar11->fields).m_ColorMultiplier;
                                            local_f8.fields.m_FadeDuration = (pUVar11->fields).m_FadeDuration;
                                            UnityEngine_UI_Selectable__set_colors
                                                      (__this_00,&local_f8,(MethodInfo *)0x0);
                                            pUVar5 = UnityEngine_Component__get_transform
                                                               ((UnityEngine_Component_o *)__this_00,
                                                                (MethodInfo *)0x0);
                                            if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1822963dd;
                                            pUVar5 = UnityEngine_Transform__Find
                                                               (pUVar5,"Text",(MethodInfo *)0x0
                                                               );
                                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor
                                                == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                            }
                                            bVar2 = UnityEngine_Object__op_Inequality
                                                              ((UnityEngine_Object_o *)pUVar5,
                                                               (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                            if (bVar2) {
                                              pUVar5 = UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                              if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
                                                 (pUVar5 = UnityEngine_Transform__Find
                                                                     (pUVar5,"Text",
                                                                      (MethodInfo *)0x0),
                                                 pUVar5 == (UnityEngine_Transform_o *)0x0))
                                              goto label_1822963dd;
                                              pUVar8 = UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar5,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                              pSVar9 = (__this_01->fields).ThemePanel;
                                              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0)
                                              {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_UI_UIManager);
                                              }
                                              pUVar12 = UI_UIManager__GetThemeColor
                                                                  (&local_108,pSVar9,"DefaultButton",
                                                                   "TextColor","DefaultPanel"
                                                                   ,(MethodInfo *)0x0);
                                              if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_1822963dd;
                                              local_118.r = (pUVar12->fields).r;
                                              local_118.g = (pUVar12->fields).g;
                                              local_118.b = (pUVar12->fields).b;
                                              local_118.a = (pUVar12->fields).a;
                                              (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar8,(UnityEngine_Color_o *)&local_118,
                                                         (pUVar8->klass->vtable)._23_set_color.method);
                                            }
                                          }
                                          pUVar5 = (__this->fields).TopBar;
                                          if (((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                              (pUVar5 = UnityEngine_Transform__Find
                                                                  (pUVar5,"Page/PageLabel",
                                                                   (MethodInfo *)0x0),
                                              pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
                                             (pUVar8 = UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar5,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text),
                                             __this_01 != (UI_ElementStyle_o *)0x0)) {
                                            pSVar9 = (__this_01->fields).ThemePanel;
                                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_UI_UIManager);
                                            }
                                            pUVar12 = UI_UIManager__GetThemeColor
                                                                (&local_108,pSVar9,"DefaultLabel",
                                                                 "TextColor","DefaultPanel",
                                                                 (MethodInfo *)0x0);
                                            if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                              local_118.r = (pUVar12->fields).r;
                                              local_118.g = (pUVar12->fields).g;
                                              local_118.b = (pUVar12->fields).b;
                                              local_118.a = (pUVar12->fields).a;
                                              (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar8,(UnityEngine_Color_o *)&local_118,
                                                         (pUVar8->klass->vtable)._23_set_color.method);
                                              pUVar5 = (__this->fields).TopBar;
                                              if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                                 (pUVar5 = UnityEngine_Transform__Find
                                                                     (pUVar5,"PlayersOnlineLabel",
                                                                      (MethodInfo *)0x0),
                                                 pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                                                pUVar8 = UnityEngine_Component__GetComponent_object_
                                                                   ((UnityEngine_Component_o *)pUVar5,
                                                                    (MethodInfo_6651A0 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                                pUVar12 = UI_UIManager__GetThemeColor
                                                                    (&local_108,(__this_01->fields).ThemePanel
                                                                     ,"DefaultLabel",
                                                                     "TextColor",
                                                                     "DefaultPanel",(MethodInfo *)0x0);
                                                if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                                  local_118.r = (pUVar12->fields).r;
                                                  local_118.g = (pUVar12->fields).g;
                                                  local_118.b = (pUVar12->fields).b;
                                                  local_118.a = (pUVar12->fields).a;
                                                  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                            (pUVar8,(UnityEngine_Color_o *)&local_118,
                                                             (pUVar8->klass->vtable)._23_set_color.method);
                                                  pUVar6 = (__this->fields)._noRoomsLabel;
                                                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                                       (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                    pUVar12 = UI_UIManager__GetThemeColor
                                                                        (&local_108,
                                                                         (__this_01->fields).ThemePanel,
                                                                         "RoomButton",
                                                                         "TextColor",
                                                                         "DefaultPanel",
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                                      local_118.r = (pUVar12->fields).r;
                                                      local_118.g = (pUVar12->fields).g;
                                                      local_118.b = (pUVar12->fields).b;
                                                      local_118.a = (pUVar12->fields).a;
                                                      (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                                (pUVar8,(UnityEngine_Color_o *)&local_118,
                                                                 (pUVar8->klass->vtable)._23_set_color.method)
                                                      ;
                                                      pUVar6 = (__this->fields)._roomList;
                                                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                                            (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                                                       );
                                                       value = (UnityEngine_Texture_o *)
                                                               UI_UIManager__GetThemeTexture
                                                                         ((__this_01->fields).ThemePanel,
                                                                          "MainBody",
                                                                          "BackgroundTexture",
                                                                          "DefaultPanel",
                                                                          (MethodInfo *)0x0);
                                                       if (pUVar13 != (UnityEngine_UI_RawImage_o *)0x0) {
                                                         UnityEngine_UI_RawImage__set_texture
                                                                   (pUVar13,value,(MethodInfo *)0x0);
                                                         pUVar6 = (__this->fields)._roomList;
                                                         if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUVar13 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                                                       );
                                                       pUVar12 = UI_UIManager__GetThemeColor
                                                                           (&local_108,
                                                                            (__this_01->fields).ThemePanel,
                                                                            "MainBody",
                                                                            "BackgroundColor",
                                                                            "DefaultPanel",
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar13 != (UnityEngine_UI_RawImage_o *)0x0) {
                                                         local_118.r = (pUVar12->fields).r;
                                                         local_118.g = (pUVar12->fields).g;
                                                         local_118.b = (pUVar12->fields).b;
                                                         local_118.a = (pUVar12->fields).a;
                                                         (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                                                                   (pUVar13,(UnityEngine_Color_o *)&local_118,
                                                                    (pUVar13->klass->vtable)._23_set_color.
                                                                    method);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1822963dd:
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$Show
// il2cpp: void UI_MultiplayerRoomListPopup__Show (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822963f0

void UI_MultiplayerRoomListPopup__Show(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_18434745d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434745d = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._currentPage;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,0,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    UI_MultiplayerRoomListPopup__RefreshList(__this,true,(MethodInfo *)0x0);
    (__this->fields)._currentUpdateDelay = 0.5;
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$Hide
// il2cpp: void UI_MultiplayerRoomListPopup__Hide (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182293e20

void UI_MultiplayerRoomListPopup__Hide(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_18434745e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434745e = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_MultiplayerSettings__Disconnect(__this_00,(MethodInfo *)0x0);
  }
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$HideNoDisconnect
// il2cpp: void UI_MultiplayerRoomListPopup__HideNoDisconnect (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182293e10

void UI_MultiplayerRoomListPopup__HideNoDisconnect(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$Update
// il2cpp: void UI_MultiplayerRoomListPopup__Update (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822965f0

void UI_MultiplayerRoomListPopup__Update(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentUpdateDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentUpdateDelay = fVar2;
  if (fVar2 <= 0.0) {
    UI_MultiplayerRoomListPopup__RefreshList(__this,true,(MethodInfo *)0x0);
    (__this->fields)._currentUpdateDelay = (__this->fields)._maxUpdateDelay;
  }
  return;
}


// UI.MultiplayerRoomListPopup$$SetupPopups
// il2cpp: void UI_MultiplayerRoomListPopup__SetupPopups (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182295400

void UI_MultiplayerRoomListPopup__SetupPopups(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  UI_BasePopup_o *item;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_MultiplayerPasswordPopup_o *pUVar7;
  UI_MultiplayerFilterPopup_o *pUVar8;
  
  if (Il2CppMethodInitialized_18434745f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MultiplayerFilterPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MultiplayerPasswordPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerFilterPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerPasswordPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_18434745f = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerPasswordPopup);
  if (pUVar7 != (UI_MultiplayerPasswordPopup_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar7,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_MultiplayerPasswordPopup);
    (__this->fields)._multiplayerPasswordPopup = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._multiplayerPasswordPopup,pUVar7);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar6,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerFilterPopup);
    if (pUVar8 == (UI_MultiplayerFilterPopup_o *)0x0) goto label_1822955c9;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar8,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_MultiplayerFilterPopup);
    (__this->fields)._multiplayerFilterPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._multiplayerFilterPopup,pUVar8);
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1822955c9;
    pUVar7 = (__this->fields)._multiplayerPasswordPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1822955c9;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1822955cf;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      item = (UI_BasePopup_o *)(__this->fields)._multiplayerFilterPopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar4->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,item);
          return;
        }
label_1822955cf:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822955c9:
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$RefreshList
// il2cpp: void UI_MultiplayerRoomListPopup__RefreshList (UI_MultiplayerRoomListPopup_o* __this, bool refetch, const MethodInfo* method);
// 0x1822947c0
// eh: try 0x182294da1..0x182294db5 -> pad 0x180358950 cleanup
// eh: try 0x182294dec..0x1822952ee -> pad 0x183338370 catch Il2CppExceptionWrapper
// eh: try 0x18229531e..0x182295322 -> pad 0x180358950 cleanup
// eh: try 0x182295373..0x1822953f2 -> pad 0x183338370 catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182294d0c: nop dword ptr [rax]
// asm:   0x182294da1: jmp 0x182294da6
// asm:   0x182294da3: mov rbx, r14
// asm:   0x182294ddf: nop 
// asm:   0x1822952ff: mov rdx, qword ptr [rip + 0x1dff6f2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RoomInfo_Dispose
// asm:   0x182295306: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18229530b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182295310: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182295315: test rcx, rcx
// asm:   0x182295318: jne 0x1822953f2
// asm:   0x18229531e: jmp 0x18229534a
// asm:   0x1822953f2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183338370: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338375: push rbp
// asm:   0x183338376: sub rsp, 0x30
// asm:   0x18333837a: mov rbp, rdx
// asm:   0x18333837d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183338381: mov rcx, qword ptr [rax]
// asm:   0x183338384: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183338388: movabs rax, 0
// asm:   0x183338392: add rsp, 0x30
// asm:   0x183338396: pop rbp
// asm:   0x183338397: ret 

void UI_MultiplayerRoomListPopup__RefreshList
               (UI_MultiplayerRoomListPopup_o *__this,bool refetch,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__RoomInfo__o *__this_00;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar4;
  UnityEngine_Events_UnityEvent_o *__this_02;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  int iVar9;
  System_Collections_Generic_IEnumerable_TValue__o *source;
  Photon_Realtime_RoomInfo_array *pPVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_List_RoomInfo__o *__this_03;
  System_Collections_Generic_List_RoomInfo__o *__this_04;
  Photon_Realtime_RoomInfo_o *pPVar13;
  UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *object;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_UI_Button_o *pUVar16;
  UnityEngine_Events_UnityAction_o *__this_05;
  UnityEngine_UI_Text_o *pUVar17;
  UnityEngine_GameObject_o *pUVar18;
  UI_HoverTooltip_o *pUVar19;
  UnityEngine_UI_ColorBlock_o *pUVar20;
  UnityEngine_Color_o *pUVar21;
  int32_t local_res10 [2];
  System_Collections_Generic_List_Enumerator_object__o local_138;
  System_Collections_Generic_List_Enumerator_T__o local_120;
  UnityEngine_Color_Fields local_f8;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_184347460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_get_Values);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RoomInfo_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RoomInfo_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RoomInfo_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RoomInfo_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MultiplayerRoomListPopup_c__DisplayClass35_0_RefreshList_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MultiplayerRoomListPopup_c__DisplayClass35_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerRoomListPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Requires user account to join");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MultiplayerRoomButton");
    il2cpp_codegen_initialize_runtime_metadata(&"PasswordIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomButton");
    il2cpp_codegen_initialize_runtime_metadata(&"VerificationIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"0/0");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayersOnline");
    Il2CppMethodInitialized_184347460 = '\x01';
  }
  iVar9 = 0;
  local_res10[0] = 0;
  local_138.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.fields._index = 0;
  local_138.fields._version = 0;
  local_138.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._currentUpdateDelay = (__this->fields)._maxUpdateDelay;
  if (refetch) {
    if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
    }
    __this_00 = TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__RoomInfo__o *)0x0) goto label_182295367;
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        (MethodInfo_13C65A0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_get_Values);
    pPVar10 = (Photon_Realtime_RoomInfo_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_RoomInfo);
    (__this->fields)._rooms = pPVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rooms,pPVar10);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    iVar7 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
    local_res10[0] = iVar7 / 2;
    pSVar11 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar12 = UI_UIManager__GetLocale
                        ("MainMenu","MultiplayerRoomListPopup","PlayersOnline",
                         "","",(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_1969b70(pSVar11," ",pSVar12,(MethodInfo *)0x0);
    pUVar17 = (__this->fields)._playersOnlineLabel;
    if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_182295367;
    (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
              (pUVar17,pSVar11,(pUVar17->klass->vtable)._75_set_text.method);
  }
  UI_MultiplayerRoomListPopup__ClearRoomButtons(__this,(MethodInfo *)0x0);
  __this_03 = UI_MultiplayerRoomListPopup__GetFilteredRooms(__this,(MethodInfo *)0x0);
  if ((__this_03 != (System_Collections_Generic_List_RoomInfo__o *)0x0) &&
     (pUVar15 = (__this->fields)._noRoomsLabel, pUVar15 != (UnityEngine_GameObject_o *)0x0)) {
    if ((__this_03->fields)._size == 0) {
      UnityEngine_GameObject__SetActive(pUVar15,true,(MethodInfo *)0x0);
      pUVar17 = (__this->fields)._pageLabel;
      if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                  (pUVar17,"0/0",(pUVar17->klass->vtable)._75_set_text.method);
        return;
      }
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar15,false,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184347463 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count);
        Il2CppMethodInitialized_184347463 = '\x01';
      }
      if ((__this_03->fields)._size == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = ((__this_03->fields)._size + -1) / (__this->fields)._roomsPerPage;
        iVar9 = iVar8 + 1;
      }
      (__this->fields)._lastPageCount = iVar9;
      pSVar3 = (__this->fields)._currentPage;
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        iVar7 = (pSVar3->fields)._value;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        iVar7 = System_Math__Min_1b2c2d0(iVar7,iVar8,(MethodInfo *)0x0);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar3,iVar7,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar3 = (__this->fields)._currentPage;
        if (pSVar3 != (Settings_IntSetting_o *)0x0) {
          pUVar17 = (__this->fields)._pageLabel;
          local_res10[0] = (pSVar3->fields)._value + 1;
          pSVar11 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
          pSVar12 = System_Int32__ToString(&(__this->fields)._lastPageCount,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat_1969b70(pSVar11,"/",pSVar12,(MethodInfo *)0x0);
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                      (pUVar17,pSVar11,(pUVar17->klass->vtable)._75_set_text.method);
            if (Il2CppMethodInitialized_184347461 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_RoomInfo_Add);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RoomInfo);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
              Il2CppMethodInitialized_184347461 = '\x01';
            }
            __this_04 = __this_03;
            if ((__this_03->fields)._size <= (__this->fields)._roomsPerPage) {
label_182294da6:
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        (&local_120,(System_Collections_Generic_List_T__o *)__this_04,
                         (MethodInfo_91F180 *)
                         MethodInfo_System_Collections_Generic_List_RoomInfo_GetEnumerator);
              local_138.fields._list = local_120.fields._list;
              local_138.fields._index = local_120.fields._index;
              local_138.fields._version = local_120.fields._version;
              local_138.fields._current = local_120.fields._current;
              while( true ) {
                bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (&local_138,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_RoomInfo_MoveNext);
                if (!bVar6) {
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_138,
                             MethodInfo_System_Collections_Generic_List_Enumerator_RoomInfo_Dispose);
                  return;
                }
                object = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_UI_MultiplayerRoomListPopup_c__DisplayClass35_0);
                System_Object___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                           (MethodInfo *)0x0);
                if (object == (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (object->fields).__4__this = __this;
                Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
                (object->fields).room = (Photon_Realtime_RoomInfo_o *)local_138.fields._current;
                Il2CppCodeGenWriteBarrier(&(object->fields).room,local_138.fields._current);
                pUVar15 = (__this->fields)._roomList;
                if (pUVar15 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar14 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                pUVar15 = UI_ElementFactory__InstantiateAndBind
                                    (pUVar14,"Prefabs/MainMenu/MultiplayerRoomButton",(MethodInfo *)0x0);
                pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                __this_01 = (__this->fields)._roomButtons;
                if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                  ThrowNullReferenceException();
                }
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar4 = (__this_01->fields)._items;
                if (pUVar4 == (UnityEngine_GameObject_array *)0x0) {
                  ThrowNullReferenceException();
                }
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  if ((uint)pUVar4->max_length <= uVar2) {
                    ThrowIndexOutOfRangeException();
                  }
                  pUVar4->m_Items[(int)uVar2] = pUVar15;
                  Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar15);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar15,
                             (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                if (pUVar15 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar15,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                if (pUVar16 == (UnityEngine_UI_Button_o *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_02 = (UnityEngine_Events_UnityEvent_o *)(pUVar16->fields).m_OnClick;
                __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,(Il2CppObject *)object,
                           (intptr_t)
                           MethodInfo_UI_MultiplayerRoomListPopup_c__DisplayClass35_0_RefreshList_b__0,
                           (MethodInfo *)0x0);
                if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
                UnityEngine_Events_UnityEvent__AddListener(__this_02,__this_05,(MethodInfo *)0x0);
                pUVar14 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar14 = UnityEngine_Transform__Find(pUVar14,"Text",(MethodInfo *)0x0);
                if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar14,
                                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
                pSVar11 = UI_MultiplayerRoomListPopup__GetRoomFormattedName
                                    (__this,(object->fields).room,(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                          (pUVar17,pSVar11,(pUVar17->klass->vtable)._75_set_text.method);
                pPVar13 = (object->fields).room;
                if (Il2CppMethodInitialized_184347466 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
                  il2cpp_codegen_initialize_runtime_metadata(&"");
                  Il2CppMethodInitialized_184347466 = '\x01';
                }
                if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
                }
                pSVar11 = PhotonExtensions__GetStringProperty_1dacb40
                                    (pPVar13,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                                     "",(MethodInfo *)0x0);
                bVar6 = System_String__op_Equality
                                  (pSVar11,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pUVar14 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar14 = UnityEngine_Transform__Find(pUVar14,"PasswordIcon",(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_GameObject__SetActive(pUVar18,false,(MethodInfo *)0x0);
                }
                bVar6 = UI_MultiplayerRoomListPopup__GetAccountRequired
                                  (__this,(object->fields).room,(MethodInfo *)0x0);
                if (bVar6) {
                  pUVar14 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar14 = UnityEngine_Transform__Find(pUVar14,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_GameObject__SetActive(pUVar18,true,(MethodInfo *)0x0);
                  pUVar19 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar18,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
                  if (pUVar19 == (UI_HoverTooltip_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (pUVar19->fields).Message = "Requires user account to join";
                  Il2CppCodeGenWriteBarrier(&(pUVar19->fields).Message,"Requires user account to join");
                }
                else {
                  pUVar14 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar14 = UnityEngine_Transform__Find(pUVar14,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_GameObject__SetActive(pUVar18,false,(MethodInfo *)0x0);
                }
                pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar15,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar20 = UI_UIManager__GetThemeColorBlock
                                    (&local_88,pSVar11,"RoomButton","",
                                     "DefaultPanel",(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_UI_Button_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_e8.fields.m_NormalColor.fields.r = (pUVar20->fields).m_NormalColor.fields.r;
                local_e8.fields.m_NormalColor.fields.g = (pUVar20->fields).m_NormalColor.fields.g;
                local_e8.fields.m_NormalColor.fields.b = (pUVar20->fields).m_NormalColor.fields.b;
                local_e8.fields.m_NormalColor.fields.a = (pUVar20->fields).m_NormalColor.fields.a;
                local_e8.fields.m_HighlightedColor.fields.r = (pUVar20->fields).m_HighlightedColor.fields.r;
                local_e8.fields.m_HighlightedColor.fields.g = (pUVar20->fields).m_HighlightedColor.fields.g;
                local_e8.fields.m_HighlightedColor.fields.b = (pUVar20->fields).m_HighlightedColor.fields.b;
                local_e8.fields.m_HighlightedColor.fields.a = (pUVar20->fields).m_HighlightedColor.fields.a;
                local_e8.fields.m_PressedColor.fields.r = (pUVar20->fields).m_PressedColor.fields.r;
                local_e8.fields.m_PressedColor.fields.g = (pUVar20->fields).m_PressedColor.fields.g;
                local_e8.fields.m_PressedColor.fields.b = (pUVar20->fields).m_PressedColor.fields.b;
                local_e8.fields.m_PressedColor.fields.a = (pUVar20->fields).m_PressedColor.fields.a;
                local_e8.fields.m_SelectedColor.fields.r = (pUVar20->fields).m_SelectedColor.fields.r;
                local_e8.fields.m_SelectedColor.fields.g = (pUVar20->fields).m_SelectedColor.fields.g;
                local_e8.fields.m_SelectedColor.fields.b = (pUVar20->fields).m_SelectedColor.fields.b;
                local_e8.fields.m_SelectedColor.fields.a = (pUVar20->fields).m_SelectedColor.fields.a;
                local_e8.fields.m_DisabledColor.fields.r = (pUVar20->fields).m_DisabledColor.fields.r;
                local_e8.fields.m_DisabledColor.fields.g = (pUVar20->fields).m_DisabledColor.fields.g;
                local_e8.fields.m_DisabledColor.fields.b = (pUVar20->fields).m_DisabledColor.fields.b;
                local_e8.fields.m_DisabledColor.fields.a = (pUVar20->fields).m_DisabledColor.fields.a;
                local_e8.fields.m_ColorMultiplier = (pUVar20->fields).m_ColorMultiplier;
                local_e8.fields.m_FadeDuration = (pUVar20->fields).m_FadeDuration;
                UnityEngine_UI_Selectable__set_colors
                          ((UnityEngine_UI_Selectable_o *)pUVar16,&local_e8,(MethodInfo *)0x0);
                pUVar14 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar14 = UnityEngine_Transform__Find(pUVar14,"Text",(MethodInfo *)0x0);
                if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar14,
                                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
                pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                pUVar21 = UI_UIManager__GetThemeColor
                                    ((UnityEngine_Color_o *)&local_120,pSVar11,"RoomButton",
                                     "TextColor","DefaultPanel",(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_f8.r = (pUVar21->fields).r;
                local_f8.g = (pUVar21->fields).g;
                local_f8.b = (pUVar21->fields).b;
                local_f8.a = (pUVar21->fields).a;
                (*(pUVar17->klass->vtable)._23_set_color.methodPtr)
                          (pUVar17,(UnityEngine_Color_o *)&local_f8,
                           (pUVar17->klass->vtable)._23_set_color.method);
              }
              ThrowNullReferenceException();
            }
            __this_04 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomInfo);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
            pSVar3 = (__this->fields)._currentPage;
            if (pSVar3 != (Settings_IntSetting_o *)0x0) {
              iVar8 = (__this->fields)._roomsPerPage * (pSVar3->fields)._value;
              iVar9 = (__this->fields)._roomsPerPage;
              iVar7 = (__this_03->fields)._size;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              iVar7 = System_Math__Min_1b2c2d0(iVar9 + iVar8,iVar7,(MethodInfo *)0x0);
              for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
                pPVar13 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_03,iVar8,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
                pMVar5 = MethodInfo_System_Collections_Generic_List_RoomInfo_Add;
                if (__this_04 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_182295367;
                piVar1 = &(__this_04->fields)._version;
                *piVar1 = *piVar1 + 1;
                pPVar10 = (__this_04->fields)._items;
                if (pPVar10 == (Photon_Realtime_RoomInfo_array *)0x0) goto label_182295367;
                uVar2 = (__this_04->fields)._size;
                if (uVar2 < (uint)pPVar10->max_length) {
                  (__this_04->fields)._size = uVar2 + 1;
                  if ((uint)pPVar10->max_length <= uVar2) {
                    ThrowIndexOutOfRangeException();
                  }
                  pPVar10->m_Items[(int)uVar2] = pPVar13;
                  Il2CppCodeGenWriteBarrier(pPVar10->m_Items + (int)uVar2,pPVar13);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pPVar13,
                             (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                }
              }
              if (__this_04 != (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_182294da6;
            }
          }
        }
      }
    }
  }
label_182295367:
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$GetCurrentPageRooms
// il2cpp: System_Collections_Generic_List_RoomInfo__o* UI_MultiplayerRoomListPopup__GetCurrentPageRooms (UI_MultiplayerRoomListPopup_o* __this, System_Collections_Generic_List_RoomInfo__o* rooms, const MethodInfo* method);
// 0x182293200
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229330b: nop dword ptr [rax + rax]
// asm:   0x182293387: mov rax, rbx
// asm:   0x18229339f: mov rax, rsi
// asm:   0x1822933a2: jmp 0x18229338a

System_Collections_Generic_List_RoomInfo__o *
UI_MultiplayerRoomListPopup__GetCurrentPageRooms
          (UI_MultiplayerRoomListPopup_o *__this,System_Collections_Generic_List_RoomInfo__o *rooms,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Settings_IntSetting_o *pSVar4;
  Photon_Realtime_RoomInfo_array *pPVar5;
  MethodInfo *pMVar6;
  int32_t iVar7;
  System_Collections_Generic_List_RoomInfo__o *__this_00;
  Photon_Realtime_RoomInfo_o *item;
  int index;
  
  if (Il2CppMethodInitialized_184347461 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347461 = '\x01';
  }
  if (rooms != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    __this_00 = rooms;
    if ((__this->fields)._roomsPerPage < (rooms->fields)._size) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomInfo);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
      pSVar4 = (__this->fields)._currentPage;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1822933a4;
      index = (__this->fields)._roomsPerPage * (pSVar4->fields)._value;
      iVar2 = (__this->fields)._roomsPerPage;
      iVar7 = (rooms->fields)._size;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar7 = System_Math__Min_1b2c2d0(iVar2 + index,iVar7,(MethodInfo *)0x0);
      for (; index < iVar7; index = index + 1) {
        item = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)rooms,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
        pMVar6 = MethodInfo_System_Collections_Generic_List_RoomInfo_Add;
        if (__this_00 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_1822933a4;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar5 = (__this_00->fields)._items;
        if (pPVar5 == (Photon_Realtime_RoomInfo_array *)0x0) goto label_1822933a4;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pPVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pPVar5->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pPVar5->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
    }
    return __this_00;
  }
label_1822933a4:
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$GetFilteredRooms
// il2cpp: System_Collections_Generic_List_RoomInfo__o* UI_MultiplayerRoomListPopup__GetFilteredRooms (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822933b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182293479: nop dword ptr [rax]

System_Collections_Generic_List_RoomInfo__o *
UI_MultiplayerRoomListPopup__GetFilteredRooms(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  Photon_Realtime_RoomInfo_array *pPVar1;
  Photon_Realtime_RoomInfo_o *room;
  Settings_StringSetting_o *pSVar2;
  ExitGames_Client_Photon_Hashtable_o *pEVar3;
  System_String_o *__this_00;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  System_Collections_Generic_List_RoomInfo__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184347462 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347462 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomInfo);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RoomInfo_ctor);
  pPVar1 = (__this->fields)._rooms;
  if (pPVar1 == (Photon_Realtime_RoomInfo_array *)0x0) {
label_18229380d:
    ThrowNullReferenceException();
  }
  uVar10 = 0;
label_182293480:
  do {
    if ((int)pPVar1->max_length <= (int)uVar10) {
      return __this_01;
    }
    if ((uint)pPVar1->max_length <= uVar10) {
      ThrowIndexOutOfRangeException();
    }
    room = pPVar1->m_Items[(int)uVar10];
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar6 = PhotonExtensions__GetStringProperty_1dacb40
                       (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto label_18229380d;
    pSVar6 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
    pSVar7 = PhotonExtensions__GetStringProperty_1dacb40
                       (room,TypeInfo_GameManagers_RoomProperty->static_fields->Map,"",
                        (MethodInfo *)0x0);
    if (pSVar7 == (System_String_o *)0x0) goto label_18229380d;
    pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0);
    pSVar8 = PhotonExtensions__GetStringProperty_1dacb40
                       (room,TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,""
                        ,(MethodInfo *)0x0);
    if (pSVar8 == (System_String_o *)0x0) goto label_18229380d;
    pSVar8 = System_String__ToLower(pSVar8,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._filterQuery;
    if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
       (pSVar9 = (pSVar2->fields)._value, pSVar9 == (System_String_o *)0x0)) goto label_18229380d;
    pSVar9 = System_String__ToLower(pSVar9,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347465 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"vc");
      Il2CppMethodInitialized_184347465 = '\x01';
    }
    if (room == (Photon_Realtime_RoomInfo_o *)0x0) goto label_18229380d;
    pEVar3 = (room->fields).customProperties;
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    if (pEVar3 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_18229380d;
    bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar3,
                       (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar5) {
      pEVar3 = (room->fields).customProperties;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      if (pEVar3 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_18229380d;
      bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar3,
                         (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
      if (bVar5) {
        pEVar3 = (room->fields).customProperties;
        if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
        }
        if (pEVar3 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_18229380d;
        bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar3,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        if (bVar5) {
          __this_00 = (room->fields).name;
          if (__this_00 == (System_String_o *)0x0) goto label_18229380d;
          bVar5 = System_String__EndsWith(__this_00,"vc",(MethodInfo *)0x0);
          if (!bVar5) {
            bVar5 = System_String__op_Inequality
                              (pSVar9,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                               (MethodInfo *)0x0);
            if (bVar5) {
              if (pSVar6 == (System_String_o *)0x0) goto label_18229380d;
              bVar5 = System_String__Contains(pSVar6,pSVar9,(MethodInfo *)0x0);
              if (!bVar5) {
                if (pSVar7 == (System_String_o *)0x0) goto label_18229380d;
                bVar5 = System_String__Contains(pSVar7,pSVar9,(MethodInfo *)0x0);
                if (!bVar5) {
                  if (pSVar8 == (System_String_o *)0x0) goto label_18229380d;
                  bVar5 = System_String__Contains(pSVar8,pSVar9,(MethodInfo *)0x0);
                  if (!bVar5) goto label_1822937d1;
                }
              }
            }
            pSVar4 = (__this->fields)._filterShowFull;
            if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_18229380d;
            if (((pSVar4->fields)._value != false) ||
               ((room->fields)._PlayerCount_k__BackingField < (room->fields).maxPlayers)) {
              pSVar4 = (__this->fields)._filterShowPassword;
              if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_18229380d;
              if ((pSVar4->fields)._value == false) {
                pSVar6 = UI_MultiplayerRoomListPopup__GetPasswordHash(__this,room,(MethodInfo *)0x0);
                bVar5 = System_String__op_Inequality
                                  (pSVar6,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                   (MethodInfo *)0x0);
                if (bVar5) goto label_1822937d1;
              }
              if (__this_01 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_18229380d;
              il2cpp_runtime_helper_180012890(__this_01,room,MethodInfo_System_Collections_Generic_List_RoomInfo_Add);
              uVar10 = uVar10 + 1;
              goto label_182293480;
            }
          }
        }
      }
    }
label_1822937d1:
    uVar10 = uVar10 + 1;
  } while( true );
}


// UI.MultiplayerRoomListPopup$$GetPageCount
// il2cpp: int32_t UI_MultiplayerRoomListPopup__GetPageCount (UI_MultiplayerRoomListPopup_o* __this, System_Collections_Generic_List_RoomInfo__o* rooms, const MethodInfo* method);
// 0x182293820

int32_t UI_MultiplayerRoomListPopup__GetPageCount
                  (UI_MultiplayerRoomListPopup_o *__this,System_Collections_Generic_List_RoomInfo__o *rooms,
                  MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347463 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    Il2CppMethodInitialized_184347463 = '\x01';
  }
  if (rooms != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    if ((rooms->fields)._size != 0) {
      return ((rooms->fields)._size + -1) / (__this->fields)._roomsPerPage + 1;
    }
    return 0;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$ClearRoomButtons
// il2cpp: void UI_MultiplayerRoomListPopup__ClearRoomButtons (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182293000
// eh: try 0x1822930d0..0x18229310b -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229311c: mov rdx, qword ptr [rip + 0x1ded3c5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x182293123: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182293128: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229312d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182293132: test rcx, rcx
// asm:   0x182293135: jne 0x182293182
// asm:   0x182293137: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182293182: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MultiplayerRoomListPopup__ClearRoomButtons(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184347464 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347464 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._roomButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar2 = (__this->fields)._roomButtons;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$IsValidRoom
// il2cpp: bool UI_MultiplayerRoomListPopup__IsValidRoom (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x182293e80

bool UI_MultiplayerRoomListPopup__IsValidRoom
               (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  System_String_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347465 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"vc");
    Il2CppMethodInitialized_184347465 = '\x01';
  }
  if (info != (Photon_Realtime_RoomInfo_o *)0x0) {
    pEVar1 = (info->fields).customProperties;
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,
                         (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
      if (!bVar2) {
        return false;
      }
      pEVar1 = (info->fields).customProperties;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
        if (!bVar2) {
          return false;
        }
        pEVar1 = (info->fields).customProperties;
        if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
        }
        if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pEVar1,
                             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
          if (!bVar2) {
            return false;
          }
          __this_00 = (info->fields).name;
          if (__this_00 != (System_String_o *)0x0) {
            bVar2 = System_String__EndsWith(__this_00,"vc",(MethodInfo *)0x0);
            return !bVar2;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$GetPasswordHash
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__GetPasswordHash (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x182293890

System_String_o *
UI_MultiplayerRoomListPopup__GetPasswordHash
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347466 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty_1dacb40
                     (info,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerRoomListPopup$$GetAccountRequired
// il2cpp: bool UI_MultiplayerRoomListPopup__GetAccountRequired (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x182293190

bool UI_MultiplayerRoomListPopup__GetAccountRequired
               (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    Il2CppMethodInitialized_184347467 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  bVar1 = PhotonExtensions__GetBoolProperty_1dac5e0
                    (info,TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,false,
                     (MethodInfo *)0x0);
  return bVar1;
}


// UI.MultiplayerRoomListPopup$$GetRoomFormattedName
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__GetRoomFormattedName (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x182293910
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182293a66: mov rdi, qword ptr [rip + 0x1dfc5bb]  ; " [SANDBOX]"
// asm:   0x182293a6d: jmp 0x182293a80
// asm:   0x182293b2f: mov rax, qword ptr [rip + 0x1df4d12]  ; " / "
// asm:   0x182293bab: mov rax, qword ptr [rip + 0x1df4c96]  ; " / "
// asm:   0x182293c27: mov rax, qword ptr [rip + 0x1df0d1a]  ; "   "
// asm:   0x182293cc7: mov rax, qword ptr [rip + 0x1e5180a]  ; "/"

System_String_o *
UI_MultiplayerRoomListPopup__GetRoomFormattedName
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *obj;
  System_String_o *obj_00;
  System_String_o *obj_01;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t local_res10 [4];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184347468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"   ");
    il2cpp_codegen_initialize_runtime_metadata(&" [SANDBOX]");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347468 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar2 = PhotonExtensions__GetStringProperty_1dacb40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  obj = MiscExtensions__HexColor(pSVar2,(MethodInfo *)0x0);
  obj_00 = PhotonExtensions__GetStringProperty_1dacb40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->Map,"",
                      (MethodInfo *)0x0);
  obj_01 = PhotonExtensions__GetStringProperty_1dacb40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,"",
                      (MethodInfo *)0x0);
  bVar1 = PhotonExtensions__GetBoolProperty_1dac5e0
                    (room,TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox,false,(MethodInfo *)0x0);
  pSVar2 = " [SANDBOX]";
  if (!bVar1) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,10);
  if (args == (System_Object_array *)0x0) {
label_182293d55:
    ThrowNullReferenceException();
  }
  if ((obj != (System_String_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((args->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(args->m_Items,obj);
    if ((pSVar2 != (System_String_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((args->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar2;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1,pSVar2);
      if ((" / " != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)" / ",(((args->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      pSVar2 = " / ";
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)" / ";
        Il2CppCodeGenWriteBarrier(args->m_Items + 2,pSVar2);
        if ((obj_00 != (System_String_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((args->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)obj_00;
          Il2CppCodeGenWriteBarrier(args->m_Items + 3,obj_00);
          if ((" / " != (System_String_o *)0x0) &&
             (pIVar3 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)" / ",
                                  (((args->obj).klass)->_1).element_class), pIVar3 == (Il2CppObject *)0x0)) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
          pSVar2 = " / ";
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = (Il2CppObject *)" / ";
            Il2CppCodeGenWriteBarrier(args->m_Items + 4,pSVar2);
            if ((obj_01 != (System_String_o *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)obj_01,(((args->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = (Il2CppObject *)obj_01;
              Il2CppCodeGenWriteBarrier(args->m_Items + 5,obj_01);
              if (("   " != (System_String_o *)0x0) &&
                 (pIVar3 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)"   ",
                                      (((args->obj).klass)->_1).element_class), pIVar3 == (Il2CppObject *)0x0)
                 ) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
              pSVar2 = "   ";
              if (6 < (uint)args->max_length) {
                args->m_Items[6] = (Il2CppObject *)"   ";
                Il2CppCodeGenWriteBarrier(args->m_Items + 6,pSVar2);
                if (room == (Photon_Realtime_RoomInfo_o *)0x0) goto label_182293d55;
                local_res10[0] = (room->fields)._PlayerCount_k__BackingField;
                pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
                if ((pIVar3 != (Il2CppObject *)0x0) &&
                   (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class),
                   pIVar4 == (Il2CppObject *)0x0)) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
                if (7 < (uint)args->max_length) {
                  args->m_Items[7] = pIVar3;
                  Il2CppCodeGenWriteBarrier(args->m_Items + 7,pIVar3);
                  if (("/" != (System_String_o *)0x0) &&
                     (pIVar3 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)"/",
                                          (((args->obj).klass)->_1).element_class),
                     pIVar3 == (Il2CppObject *)0x0)) {
                    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                  }
                  pSVar2 = "/";
                  if (8 < (uint)args->max_length) {
                    args->m_Items[8] = (Il2CppObject *)"/";
                    Il2CppCodeGenWriteBarrier(args->m_Items + 8,pSVar2);
                    local_res20[0] = (room->fields).maxPlayers;
                    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
                    if ((pIVar3 != (Il2CppObject *)0x0) &&
                       (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class),
                       pIVar4 == (Il2CppObject *)0x0)) {
                      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                    }
                    if (9 < (uint)args->max_length) {
                      args->m_Items[9] = pIVar3;
                      Il2CppCodeGenWriteBarrier(args->m_Items + 9,pIVar3);
                      pSVar2 = System_String__Concat_1969fd0(args,(MethodInfo *)0x0);
                      return pSVar2;
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
  ThrowIndexOutOfRangeException();
}


// UI.MultiplayerRoomListPopup$$OnRoomClick
// il2cpp: void UI_MultiplayerRoomListPopup__OnRoomClick (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x182294410
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229469b: mov r8, qword ptr [rip + 0x20c07ae]
// asm:   0x1822946a2: mov rdx, rsi
// asm:   0x1822946a5: mov rcx, rdi
// asm:   0x1822946a8: mov qword ptr [rsp + 0x20], 0
// asm:   0x1822946b1: mov r9, qword ptr [r8 + 0xb8]
// asm:   0x1822946b8: mov r8, rax
// asm:   0x1822946bb: mov r9, qword ptr [r9]
// asm:   0x1822946be: call 0x181f22a20  ; Settings_MultiplayerSettings__JoinRoom()
// asm:   0x1822946c3: jmp 0x182294555
// asm:   0x182294796: xor r8d, r8d
// asm:   0x182294799: xor edx, edx
// asm:   0x18229479b: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x1822947a0: xor edx, edx
// asm:   0x1822947a2: mov rcx, rdi
// asm:   0x1822947a5: call 0x1821bc290  ; UI_BasePopup__Show()
// asm:   0x1822947aa: jmp 0x182294555

void UI_MultiplayerRoomListPopup__OnRoomClick
               (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_MessagePopup_o *__this_00;
  Settings_MultiplayerSettings_o *__this_01;
  UI_MultiplayerPasswordPopup_o *__this_02;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_03;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184347469 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Requires user account to join");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347469 = '\x01';
  }
  if (Il2CppMethodInitialized_184347467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    Il2CppMethodInitialized_184347467 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  bVar2 = PhotonExtensions__GetBoolProperty_1dac5e0
                    (room,TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,false,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (__this_00 = (pUVar1->fields).MessagePopup, __this_00 != (UI_MessagePopup_o *)0x0)) {
        UI_MessagePopup__Show(__this_00,"Requires user account to join",true,(MethodInfo *)0x0);
        return;
      }
      goto label_1822947af;
    }
  }
  if (Il2CppMethodInitialized_184347466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347466 = '\x01';
  }
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar3 = PhotonExtensions__GetStringProperty_1dacb40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                      "",(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  pSVar4 = PhotonExtensions__GetStringProperty_1dacb40
                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt,
                      "",(MethodInfo *)0x0);
  bVar2 = System_String__op_Inequality
                    (pSVar3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
              (__this,(__this->klass->vtable)._26_HideAllPopups.method);
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_02 = (__this->fields)._multiplayerPasswordPopup;
      value = (room->fields).name;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      value_00 = PhotonExtensions__GetStringProperty_1dacb40
                           (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,""
                            ,(MethodInfo *)0x0);
      if (__this_02 != (UI_MultiplayerPasswordPopup_o *)0x0) {
        (__this_02->fields)._actualPasswordHash = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields)._actualPasswordHash,pSVar3);
        (__this_02->fields)._passwordSalt = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields)._passwordSalt,pSVar4);
        (__this_02->fields)._roomName = value_00;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields)._roomName,value_00);
        (__this_02->fields)._roomId = value;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields)._roomId,value);
        __this_03 = (__this_02->fields)._incorrectPasswordLabel;
        if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
          UI_BasePopup__Show((UI_BasePopup_o *)__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
    pSVar3 = (room->fields).name;
    __this_01 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar4 = PhotonExtensions__GetStringProperty_1dacb40
                       (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if (__this_01 != (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__JoinRoom
                (__this_01,pSVar3,pSVar4,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo *)0x0);
      return;
    }
  }
label_1822947af:
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerRoomListPopup__OnButtonClick (UI_MultiplayerRoomListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182293fe0

void UI_MultiplayerRoomListPopup__OnButtonClick
               (UI_MultiplayerRoomListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  UI_BaseMenu_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  System_Collections_Generic_List_BasePopup__c *pSVar5;
  bool bVar6;
  uint32_t uVar7;
  UI_BaseMenu_c *pUVar8;
  Settings_IntSetting_o *__this_00;
  int32_t iVar9;
  
  if (Il2CppMethodInitialized_18434746a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DuelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"RightPage");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftPage");
    il2cpp_codegen_initialize_runtime_metadata(&"Filter");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Duel");
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh");
    Il2CppMethodInitialized_18434746a = '\x01';
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  uVar7 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar7 < 0x990de47e) {
    if (uVar7 == 0x815aad4) {
      bVar6 = System_String__op_Equality(name,"Refresh",(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      UI_MultiplayerRoomListPopup__RefreshList(__this,true,(MethodInfo *)0x0);
      return;
    }
    if (uVar7 != 0x479b753b) {
      if (uVar7 != 0x990de47d) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate(true,false,(MethodInfo *)0x0);
      return;
    }
    bVar6 = System_String__op_Equality(name,"Duel",(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_MainMenu->_2).typeHierarchyDepth;
      if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MainMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
      pSVar4 = (*(uint64_t *)((char *)pUVar3 + 0xb8));
      if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pSVar5 = pSVar4->klass;
        bVar1 = (TypeInfo_UI_DuelPopup->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar5->_2).typeHierarchyDepth) &&
           ((pSVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_DuelPopup)) {
          (*(pSVar5->vtable)._21_System_Collections_IList_Contains.methodPtr)
                    (pSVar4,(pSVar5->vtable)._21_System_Collections_IList_Contains.method);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pSVar4,TypeInfo_UI_DuelPopup);
      }
    }
    goto label_1822943fc;
  }
  if (uVar7 < 0xc2954bc3) {
    if (uVar7 == 0xb60645db) {
      bVar6 = System_String__op_Equality(name,"LeftPage",(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      __this_00 = (__this->fields)._currentPage;
      if (__this_00 != (Settings_IntSetting_o *)0x0) {
        if ((__this_00->fields)._value < 1) {
          iVar9 = (__this->fields)._lastPageCount;
        }
        else {
          iVar9 = (__this_00->fields)._value;
        }
        iVar9 = iVar9 + -1;
        goto label_1822941be;
      }
      goto label_1822943fc;
    }
    if (uVar7 != 0xc2954bc2) {
      return;
    }
    bVar6 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_1822943fc;
    pUVar8 = pUVar3->klass;
    bVar1 = (TypeInfo_UI_MainMenu->_2).typeHierarchyDepth;
    if (((pUVar8->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar8->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MainMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    (*(pUVar8->vtable)._6_HideAllPopups.methodPtr)(pUVar3,(pUVar8->vtable)._6_HideAllPopups.method);
    pUVar8 = (*(uint64_t *)((char *)pUVar3 + 0x98));
  }
  else {
    if (uVar7 == 0xcad5d456) {
      bVar6 = System_String__op_Equality(name,"RightPage",(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      __this_00 = (__this->fields)._currentPage;
      if (__this_00 != (Settings_IntSetting_o *)0x0) {
        if ((__this_00->fields)._value < (__this->fields)._lastPageCount + -1) {
          iVar9 = (__this_00->fields)._value + 1;
        }
        else {
          iVar9 = 0;
        }
label_1822941be:
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_00,iVar9,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        UI_MultiplayerRoomListPopup__RefreshList(__this,false,(MethodInfo *)0x0);
        return;
      }
      goto label_1822943fc;
    }
    if (uVar7 != 0xf4a9c097) {
      return;
    }
    bVar6 = System_String__op_Equality(name,"Filter",(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pUVar8 = (UI_BaseMenu_c *)(__this->fields)._multiplayerFilterPopup;
  }
  if (pUVar8 != (UI_BaseMenu_c *)0x0) {
    pvVar2 = (pUVar8->_1).image;
    (**(code **)((longlong)pvVar2 + 0x288))(pUVar8,*(undefined8 *)((longlong)pvVar2 + 0x290));
    return;
  }
label_1822943fc:
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$.ctor
// il2cpp: void UI_MultiplayerRoomListPopup___ctor (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182296650

void UI_MultiplayerRoomListPopup___ctor(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  uint16_t uVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *__this_02;
  System_Char_array *value;
  
  if (Il2CppMethodInitialized_18434746b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"`");
    Il2CppMethodInitialized_18434746b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._roomButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._roomButtons,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._filterQuery = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._filterQuery,__this_01);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar2,true,(MethodInfo *)0x0);
  (__this->fields)._filterShowFull = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._filterShowFull,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar2,true,(MethodInfo *)0x0);
  (__this->fields)._filterShowPassword = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._filterShowPassword,pSVar2);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(__this_02,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentPage = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPage,__this_02);
  (__this->fields)._maxUpdateDelay = 5.0;
  (__this->fields)._currentUpdateDelay = 5.0;
  (__this->fields)._roomsPerPage = 10;
  value = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if ("`" != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars("`",0,(MethodInfo *)0x0);
    if (value != (System_Char_array *)0x0) {
      if ((int)value->max_length != 0) {
        value->m_Items[0] = uVar1;
        (__this->fields)._roomSeperator = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._roomSeperator,value);
        UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_0
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_0 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182296460

void UI_MultiplayerRoomListPopup___Setup_b__29_0(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434746c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    Il2CppMethodInitialized_18434746c = '\x01';
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Create",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_1
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_1 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822964a0

void UI_MultiplayerRoomListPopup___Setup_b__29_1(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434746d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434746d = '\x01';
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_2
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_2 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822964e0

void UI_MultiplayerRoomListPopup___Setup_b__29_2(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  UI_MultiplayerRoomListPopup__RefreshList(__this,true,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_3
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_3 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822964f0

void UI_MultiplayerRoomListPopup___Setup_b__29_3(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434746e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Filter");
    Il2CppMethodInitialized_18434746e = '\x01';
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Filter",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_4
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_4 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182296530

void UI_MultiplayerRoomListPopup___Setup_b__29_4(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434746f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh");
    Il2CppMethodInitialized_18434746f = '\x01';
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Refresh",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_5
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_5 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x182296570

void UI_MultiplayerRoomListPopup___Setup_b__29_5(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LeftPage");
    Il2CppMethodInitialized_184347470 = '\x01';
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"LeftPage",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_6
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_6 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x1822965b0

void UI_MultiplayerRoomListPopup___Setup_b__29_6(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RightPage");
    Il2CppMethodInitialized_184347471 = '\x01';
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"RightPage",(MethodInfo *)0x0);
  return;
}


