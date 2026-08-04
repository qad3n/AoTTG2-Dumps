// Type: UI.ScoreboardPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// --------------------------------

// UI.ScoreboardPopup.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_ScoreboardPopup___c__DisplayClass22_0___ctor (UI_ScoreboardPopup___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x43e53b0

void UI_ScoreboardPopup___c__DisplayClass22_0___ctor
               (UI_ScoreboardPopup___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup.<>c__DisplayClass22_0$$<SetupTopButtons>b__0
// il2cpp: void UI_ScoreboardPopup___c__DisplayClass22_0___SetupTopButtons_b__0 (UI_ScoreboardPopup___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x43e5930

void UI_ScoreboardPopup___c__DisplayClass22_0___SetupTopButtons_b__0
               (UI_ScoreboardPopup___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardPopup_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_ScoreboardPopup_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae4d0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocaleCommon("Profile",(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardPopup__get_Title (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4bb0

System_String_o * UI_ScoreboardPopup__get_Title(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.ScoreboardPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_ScoreboardPopup__get_PopupAnimationType (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4bd0

int32_t UI_ScoreboardPopup__get_PopupAnimationType(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.ScoreboardPopup$$get_MinFadeAlpha
// il2cpp: float UI_ScoreboardPopup__get_MinFadeAlpha (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4be0

float UI_ScoreboardPopup__get_MinFadeAlpha(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.ScoreboardPopup$$get_Width
// il2cpp: float UI_ScoreboardPopup__get_Width (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4bf0

float UI_ScoreboardPopup__get_Width(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1400.0;
}


// UI.ScoreboardPopup$$get_Height
// il2cpp: float UI_ScoreboardPopup__get_Height (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4c00

float UI_ScoreboardPopup__get_Height(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.ScoreboardPopup$$get_CategoryPanel
// il2cpp: bool UI_ScoreboardPopup__get_CategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4c10

bool_conflict UI_ScoreboardPopup__get_CategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardPopup$$get_CategoryButtons
// il2cpp: bool UI_ScoreboardPopup__get_CategoryButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4c20

bool_conflict UI_ScoreboardPopup__get_CategoryButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_ScoreboardPopup__get_DefaultCategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4c30

System_String_o *
UI_ScoreboardPopup__get_DefaultCategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae4c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c5 = '\x01';
  }
  return "Scoreboard";
}


// UI.ScoreboardPopup$$Setup
// il2cpp: void UI_ScoreboardPopup__Setup (UI_ScoreboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43e4c60

void UI_ScoreboardPopup__Setup(UI_ScoreboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (g_data_057ae4cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__27_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4cc = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$Show
// il2cpp: void UI_ScoreboardPopup__Show (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4db0

void UI_ScoreboardPopup__Show(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  bool_conflict bVar4;
  int32_t iVar5;
  UI_ScoreboardScorePanel_o *__this_01;
  System_String_o *pSVar6;
  MethodInfo *__this_02;
  long lVar7;
  Il2CppObject *pIVar8;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_03;
  System_String_array *array;
  UI_ScoreboardPopup_o *__this_04;
  MethodInfo *method_00;
  ulong uVar9;
  
  if (g_data_057ae4c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardScorePanel_GetComponent_ScoreboardScorePanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c6 = '\x01';
  }
  __this_04 = __this;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._currentCategoryPanelName;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    bVar4 = System_String__op_Equality((pSVar3->fields)._value,"Scoreboard",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    __this_04 = (UI_ScoreboardPopup_o *)(__this->fields)._currentCategoryPanel;
    if ((__this_04 != (UI_ScoreboardPopup_o *)0x0) &&
       (__this_01 = (UI_ScoreboardScorePanel_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_04,MethodInfo_ScoreboardScorePanel_GetComponent_ScoreboardScorePanel),
       __this_01 != (UI_ScoreboardScorePanel_o *)0x0)) {
      UI_ScoreboardScorePanel__Sync(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Moderation");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"GameInfo");
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c7 = '\x01';
  }
  pSVar6 = (System_String_o *)
           (*(__this_04->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_04,(__this_04->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  method_00 = __this_02;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_02,0x1c,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  bVar4 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00);
  if ((char)bVar4 == '\0') {
    lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(System_String_o **)(lVar7 + 0x20) = "Scoreboard";
        il2cpp_runtime_helper_022b4080(lVar7 + 0x20);
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x28) = "GameInfo";
          il2cpp_runtime_helper_022b4080(lVar7 + 0x28);
          iVar2 = *(int *)(lVar7 + 0x18);
joined_r0x043e5066:
          if (0 < iVar2) {
            uVar9 = 0;
            do {
              pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
              if (pIVar8 == (Il2CppObject *)0x0) goto label_043e51e9;
              pIVar8[1].monitor = __this_04;
              il2cpp_runtime_helper_022b4080(&pIVar8[1].monitor,__this_04);
              if (*(uint *)(lVar7 + 0x18) <= uVar9) goto label_043e51ee;
              pIVar8[1].klass = *(Il2CppClass **)(lVar7 + 0x20 + uVar9 * 8);
              il2cpp_runtime_helper_022b4080(pIVar8 + 1);
              parent = (__this_04->fields).TopBar;
              pSVar6 = (__this_04->fields).LocaleCategory;
              item = System_String__Concat_3ae5ba0
                               ((System_String_o *)pIVar8[1].klass,"Button",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = UI_UIManager__GetLocale
                                 (pSVar6,"Top",item,"","",(MethodInfo *)0x0);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              __this_03 = UI_ElementFactory__CreateCategoryButton
                                    (parent,(UI_ElementStyle_o *)__this_02,pSVar6,onClick,(MethodInfo *)0x0);
              if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_043e51e9;
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this_04->fields)._topButtons;
              key = pIVar8[1].klass;
              pIVar8 = UnityEngine_GameObject__GetComponent_object_(__this_03,MethodInfo_Button_GetComponent_Button);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_043e51e9;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_00,(Il2CppObject *)key,pIVar8,MethodInfo_Void_Add);
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)*(int *)(lVar7 + 0x18));
          }
          UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_04,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043e51ee;
    }
  }
  else {
    lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(System_String_o **)(lVar7 + 0x20) = "Scoreboard";
        il2cpp_runtime_helper_022b4080(lVar7 + 0x20);
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x28) = "GameInfo";
          il2cpp_runtime_helper_022b4080(lVar7 + 0x28);
          if (2 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x30) = "Moderation";
            il2cpp_runtime_helper_022b4080(lVar7 + 0x30);
            iVar2 = *(int *)(lVar7 + 0x18);
            goto joined_r0x043e5066;
          }
        }
      }
      goto label_043e51ee;
    }
  }
label_043e51e9:
  il2cpp_runtime_helper_022b2c90();
label_043e51ee:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae4ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"admin");
    il2cpp_runtime_helper_023445d0(&"moderator");
    g_data_057ae4ca = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      else {
        array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      if ((array != (System_String_array *)0x0) &&
         (iVar5 = System_Array__IndexOf_object_((System_Object_array *)array,"admin",MethodInfo_Int32_IndexOf_String),
         iVar5 < 0)) {
        System_Array__IndexOf_object_((System_Object_array *)array,"moderator",MethodInfo_Int32_IndexOf_String);
      }
    }
  }
  return;
}


// UI.ScoreboardPopup$$SetupTopButtons
// il2cpp: void UI_ScoreboardPopup__SetupTopButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4e50

void UI_ScoreboardPopup__SetupTopButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  MethodInfo *__this_01;
  long lVar6;
  Il2CppObject *pIVar7;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  System_String_array *array;
  MethodInfo *method_00;
  ulong uVar8;
  
  if (g_data_057ae4c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Moderation");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"GameInfo");
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c7 = '\x01';
  }
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  method_00 = __this_01;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x1c,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  bVar3 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00);
  if ((char)bVar3 == '\0') {
    lVar6 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = "Scoreboard";
        il2cpp_runtime_helper_022b4080(lVar6 + 0x20);
        if (1 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x28) = "GameInfo";
          il2cpp_runtime_helper_022b4080(lVar6 + 0x28);
          iVar2 = *(int *)(lVar6 + 0x18);
joined_r0x043e5066:
          if (0 < iVar2) {
            uVar8 = 0;
            do {
              pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
              System_Object___ctor(pIVar7,(MethodInfo *)0x0);
              if (pIVar7 == (Il2CppObject *)0x0) goto label_043e51e9;
              pIVar7[1].monitor = __this;
              il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor,__this);
              if (*(uint *)(lVar6 + 0x18) <= uVar8) goto label_043e51ee;
              pIVar7[1].klass = *(Il2CppClass **)(lVar6 + 0x20 + uVar8 * 8);
              il2cpp_runtime_helper_022b4080(pIVar7 + 1);
              parent = (__this->fields).TopBar;
              pSVar5 = (__this->fields).LocaleCategory;
              item = System_String__Concat_3ae5ba0
                               ((System_String_o *)pIVar7[1].klass,"Button",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar5 = UI_UIManager__GetLocale
                                 (pSVar5,"Top",item,"","",(MethodInfo *)0x0);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              __this_02 = UI_ElementFactory__CreateCategoryButton
                                    (parent,(UI_ElementStyle_o *)__this_01,pSVar5,onClick,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_043e51e9;
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._topButtons;
              key = pIVar7[1].klass;
              pIVar7 = UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_Button_GetComponent_Button);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_043e51e9;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_00,(Il2CppObject *)key,pIVar7,MethodInfo_Void_Add);
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)*(int *)(lVar6 + 0x18));
          }
          UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043e51ee;
    }
  }
  else {
    lVar6 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = "Scoreboard";
        il2cpp_runtime_helper_022b4080(lVar6 + 0x20);
        if (1 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x28) = "GameInfo";
          il2cpp_runtime_helper_022b4080(lVar6 + 0x28);
          if (2 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x30) = "Moderation";
            il2cpp_runtime_helper_022b4080(lVar6 + 0x30);
            iVar2 = *(int *)(lVar6 + 0x18);
            goto joined_r0x043e5066;
          }
        }
      }
      goto label_043e51ee;
    }
  }
label_043e51e9:
  il2cpp_runtime_helper_022b2c90();
label_043e51ee:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae4ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"admin");
    il2cpp_runtime_helper_023445d0(&"moderator");
    g_data_057ae4ca = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      else {
        array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      if ((array != (System_String_array *)0x0) &&
         (iVar4 = System_Array__IndexOf_object_((System_Object_array *)array,"admin",MethodInfo_Int32_IndexOf_String),
         iVar4 < 0)) {
        System_Array__IndexOf_object_((System_Object_array *)array,"moderator",MethodInfo_Int32_IndexOf_String);
      }
    }
  }
  return;
}


// UI.ScoreboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_ScoreboardPopup__RegisterCategoryPanels (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e53c0

void UI_ScoreboardPopup__RegisterCategoryPanels(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  System_Type_o *pSVar3;
  MethodInfo *a;
  MethodInfo *pMVar4;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae4c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_ScoreboardInfoPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_ScoreboardModerationPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_ScoreboardScorePanel);
    il2cpp_runtime_helper_023445d0(&"Moderation");
    il2cpp_runtime_helper_023445d0(&"GameInfo");
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c8 = '\x01';
  }
  handle.fields.value = TypeRef_ScoreboardScorePanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (MethodInfo *)0x0;
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Scoreboard",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
    pMVar4 = (MethodInfo *)(__this->fields)._categoryPanelTypes;
    a = (MethodInfo *)0x0;
    handle.fields.value = TypeRef_ScoreboardInfoPanel.fields.value;
    pSVar3 = System_Type__GetTypeFromHandle(TypeRef_ScoreboardInfoPanel,(MethodInfo *)0x0);
    if (pMVar4 != (MethodInfo *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar4,"GameInfo",
                 (Il2CppObject *)pSVar3,MethodInfo_Void_Add);
      bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab(pMVar4);
      handle.fields.value = TypeRef_ScoreboardModerationPanel.fields.value;
      if ((char)bVar2 == '\0') {
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      a = (MethodInfo *)0x0;
      pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Moderation",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Moderation");
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c9 = '\x01';
  }
  pMVar4 = a;
  bVar2 = System_String__op_Equality((System_String_o *)a,"Moderation",(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') ||
     (bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab(pMVar4), pMVar4 = "Scoreboard", (char)bVar2 != '\0')
     ) {
    pMVar4 = a;
  }
  UI_BasePanel__SetCategoryPanel
            ((UI_BasePanel_o *)handle.fields.value,(System_String_o *)pMVar4,(MethodInfo *)0x0);
  vtableDispatch = ((UI_BasePanel_o *)handle.fields.value)->klass[1]._1.fields;
  (*vtableDispatch)
            (handle.fields.value,pMVar4,((UI_BasePanel_o *)handle.fields.value)->klass[1]._1.events,
             vtableDispatch);
  return;
}


// UI.ScoreboardPopup$$SetCategoryPanel
// il2cpp: void UI_ScoreboardPopup__SetCategoryPanel (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43e5540

void UI_ScoreboardPopup__SetCategoryPanel
               (UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  System_String_o *name_00;
  MethodInfo *method_00;
  
  if (g_data_057ae4c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Moderation");
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4c9 = '\x01';
  }
  method_00 = (MethodInfo *)name;
  bVar1 = System_String__op_Equality(name,"Moderation",(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') ||
     (bVar1 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00), name_00 = "Scoreboard",
     (char)bVar1 != '\0')) {
    name_00 = name;
  }
  UI_BasePanel__SetCategoryPanel((UI_BasePanel_o *)__this,name_00,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._43_SetTopButton.methodPtr;
  (*vtableDispatch)
            (__this,name_00,(__this->klass->vtable)._43_SetTopButton.method,vtableDispatch);
  return;
}


// UI.ScoreboardPopup$$ShouldShowModerationTab
// il2cpp: bool UI_ScoreboardPopup__ShouldShowModerationTab (const MethodInfo* method);
// 0x43e5200

bool_conflict UI_ScoreboardPopup__ShouldShowModerationTab(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_array *array;
  
  if (g_data_057ae4ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"admin");
    il2cpp_runtime_helper_023445d0(&"moderator");
    g_data_057ae4ca = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0x557be01;
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    else {
      array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    if (array != (System_String_array *)0x0) {
      iVar4 = System_Array__IndexOf_object_((System_Object_array *)array,"admin",MethodInfo_Int32_IndexOf_String);
      if (-1 < iVar4) {
        return 0x557be01;
      }
      iVar4 = System_Array__IndexOf_object_((System_Object_array *)array,"moderator",MethodInfo_Int32_IndexOf_String);
      return (bool_conflict)CONCAT71(0x557be,-1 < iVar4);
    }
  }
  return 0;
}


// UI.ScoreboardPopup$$SetupPopups
// il2cpp: void UI_ScoreboardPopup__SetupPopups (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e55c0

void UI_ScoreboardPopup__SetupPopups(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  UI_BasePopup_array *pUVar5;
  long lVar6;
  bool_conflict bVar7;
  UnityEngine_Transform_o *pUVar8;
  UI_ScoreboardProfilePopup_o *pUVar9;
  UI_ConfirmPopup_o *pUVar10;
  UI_ScoreboardMutePopup_o *a;
  UI_InGameMenu_o *__this_00;
  
  if (g_data_057ae4cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardMutePopup_CreateDefaultPopup_ScoreboardMutePop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardProfilePopup_CreateDefaultPopup_ScoreboardProf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae4cb = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = (UI_ScoreboardProfilePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar8,0,MethodInfo_ScoreboardProfilePopup_CreateDefaultPopup_ScoreboardProf)
  ;
  (__this->fields)._profilePopup = pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._profilePopup);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar10 = (UI_ConfirmPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar8,0,MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
  (__this->fields)._kickPopup = pUVar10;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._kickPopup);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  a = (UI_ScoreboardMutePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar8,0,MethodInfo_ScoreboardMutePopup_CreateDefaultPopup_ScoreboardMutePop);
  (__this->fields)._mutePopup = a;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._mutePopup);
  lVar6 = MethodInfo_Void_Add;
  pSVar4 = (__this->fields)._popups;
  if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    a = (UI_ScoreboardMutePopup_o *)(__this->fields)._profilePopup;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 != (UI_BasePopup_array *)0x0) {
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pUVar5->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)a;
        il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar3);
        pSVar4 = (__this->fields)._popups;
        lVar6 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)a,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        pSVar4 = (__this->fields)._popups;
        lVar6 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar6;
      if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        a = (__this->fields)._mutePopup;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UI_BasePopup_array *)0x0) {
          uVar3 = (pSVar4->fields)._size;
          if (uVar3 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar3 + 1;
            pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)a;
            il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar3);
            pSVar4 = (__this->fields)._popups;
            lVar6 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)a,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            pSVar4 = (__this->fields)._popups;
            lVar6 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar6;
          if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            a = (UI_ScoreboardMutePopup_o *)(__this->fields)._kickPopup;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 != (UI_BasePopup_array *)0x0) {
              uVar3 = (pSVar4->fields)._size;
              if (uVar3 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar3 + 1;
                pUVar5->m_Items[(int)uVar3] = (UI_BasePopup_o *)a;
                il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar3);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)a,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4cd = '\x01';
  }
  bVar7 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar2 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__SetScoreboardMenu(__this_00,0,1,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2fd0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae4ce == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
      g_data_057ae4ce = '\x01';
    }
    (__this_00->fields).CharacterInfoHandler = "ScoreboardPopup";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).CharacterInfoHandler);
    UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardPopup$$SetupBottomButtons
// il2cpp: void UI_ScoreboardPopup__SetupBottomButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e4c80

void UI_ScoreboardPopup__SetupBottomButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae4cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__27_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4cc = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$OnBottomBarButtonClick
// il2cpp: void UI_ScoreboardPopup__OnBottomBarButtonClick (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43e57f0

void UI_ScoreboardPopup__OnBottomBarButtonClick
               (UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  UI_InGameMenu_o *__this_00;
  
  if (g_data_057ae4cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4cd = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__SetScoreboardMenu(__this_00,0,1,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2fd0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae4ce == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
      g_data_057ae4ce = '\x01';
    }
    (__this_00->fields).CharacterInfoHandler = "ScoreboardPopup";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).CharacterInfoHandler);
    UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardPopup$$.ctor
// il2cpp: void UI_ScoreboardPopup___ctor (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e58b0

void UI_ScoreboardPopup___ctor(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae4ce == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
    g_data_057ae4ce = '\x01';
  }
  (__this->fields).LocaleCategory = "ScoreboardPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$<SetupBottomButtons>b__27_0
// il2cpp: void UI_ScoreboardPopup___SetupBottomButtons_b__27_0 (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x43e5900

void UI_ScoreboardPopup___SetupBottomButtons_b__27_0(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_String_o *a;
  bool_conflict bVar2;
  UI_InGameMenu_o *__this_00;
  
  if (g_data_057ae4cf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4cf = '\x01';
  }
  a = "Back";
  if (g_data_057ae4cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4cd = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__SetScoreboardMenu(__this_00,0,1,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2fd0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae4ce == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
      g_data_057ae4ce = '\x01';
    }
    (__this_00->fields).CharacterInfoHandler = "ScoreboardPopup";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).CharacterInfoHandler);
    UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


