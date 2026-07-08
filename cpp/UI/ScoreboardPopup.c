// Type: UI.ScoreboardPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ScoreboardPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ScoreboardPopup.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_ScoreboardPopup___c__DisplayClass22_0___ctor (UI_ScoreboardPopup___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40d2b40

void UI_ScoreboardPopup_<>c__DisplayClass22_0___ctor
               (UI_ScoreboardPopup___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup.<>c__DisplayClass22_0$$<SetupTopButtons>b__0
// il2cpp: void UI_ScoreboardPopup___c__DisplayClass22_0___SetupTopButtons_b__0 (UI_ScoreboardPopup___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40d30c0

void UI_ScoreboardPopup_<>c__DisplayClass22_0__<SetupTopButtons>b__0
               (UI_ScoreboardPopup___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_ScoreboardPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardPopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardPopup__get_Title (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d21b0

System_String_o * UI_ScoreboardPopup__get_Title(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.ScoreboardPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_ScoreboardPopup__get_PopupAnimationType (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d21d0

int32_t UI_ScoreboardPopup__get_PopupAnimationType(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.ScoreboardPopup$$get_MinFadeAlpha
// il2cpp: float UI_ScoreboardPopup__get_MinFadeAlpha (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d21e0

float UI_ScoreboardPopup__get_MinFadeAlpha(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.ScoreboardPopup$$get_Width
// il2cpp: float UI_ScoreboardPopup__get_Width (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d21f0

float UI_ScoreboardPopup__get_Width(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1400.0;
}


// UI.ScoreboardPopup$$get_Height
// il2cpp: float UI_ScoreboardPopup__get_Height (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2200

float UI_ScoreboardPopup__get_Height(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.ScoreboardPopup$$get_CategoryPanel
// il2cpp: bool UI_ScoreboardPopup__get_CategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2210

bool_conflict UI_ScoreboardPopup__get_CategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardPopup$$get_CategoryButtons
// il2cpp: bool UI_ScoreboardPopup__get_CategoryButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2220

bool_conflict
UI_ScoreboardPopup__get_CategoryButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_ScoreboardPopup__get_DefaultCategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2230

System_String_o *
UI_ScoreboardPopup__get_DefaultCategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704734 == '\0') {
    il2cpp_init_method_metadata(&"Scoreboard");
    DAT_05704734 = '\x01';
  }
  return "Scoreboard";
}


// UI.ScoreboardPopup$$Setup
// il2cpp: void UI_ScoreboardPopup__Setup (UI_ScoreboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40d2260

void UI_ScoreboardPopup__Setup
               (UI_ScoreboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (DAT_0570473b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_0570473b = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$Show
// il2cpp: void UI_ScoreboardPopup__Show (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d23b0

void UI_ScoreboardPopup__Show(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UI_ScoreboardScorePanel_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05704735 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ScoreboardScorePanel_GetComponent_ScoreboardScor);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Scoreboard");
    DAT_05704735 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Scoreboard",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = (__this->fields)._currentCategoryPanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = MethodInfo_ScoreboardScorePanel_GetComponent_ScoreboardScor;
      __this_01 = (UI_ScoreboardScorePanel_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_00,(MethodInfo_24F0F80 *)MethodInfo_ScoreboardScorePanel_GetComponent_ScoreboardScor);
      if (__this_01 != (UI_ScoreboardScorePanel_o *)0x0) {
        UI_ScoreboardScorePanel__Sync(__this_01,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardPopup$$SetupTopButtons
// il2cpp: void UI_ScoreboardPopup__SetupTopButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d25e0

void UI_ScoreboardPopup__SetupTopButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *__this_01;
  long lVar4;
  Il2CppObject *pIVar5;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  ulong uVar6;
  
  if (DAT_05704736 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass22_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"Moderation");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"GameInfo");
    il2cpp_init_method_metadata(&"Scoreboard");
    DAT_05704736 = '\x01';
  }
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  method_00 = __this_01;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x1c,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00);
  if ((char)bVar2 == '\0') {
    lVar4 = il2cpp_glue_02274930(TypeInfo_string,2);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = "Scoreboard";
        il2cpp_runtime_glue(lVar4 + 0x20);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = "GameInfo";
          il2cpp_runtime_glue(lVar4 + 0x28);
          iVar1 = *(int *)(lVar4 + 0x18);
joined_r0x040d27f6:
          if (0 < iVar1) {
            uVar6 = 0;
            do {
              pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass22_0);
              System_Object___ctor(pIVar5,(MethodInfo *)0x0);
              if (pIVar5 == (Il2CppObject *)0x0) goto LAB_040d2979;
              pIVar5[1].monitor = __this;
              il2cpp_runtime_glue(&pIVar5[1].monitor,__this);
              if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_040d297e;
              pIVar5[1].klass = *(Il2CppClass **)(lVar4 + 0x20 + uVar6 * 8);
              il2cpp_runtime_glue(pIVar5 + 1);
              parent = (__this->fields).TopBar;
              pSVar3 = (__this->fields).LocaleCategory;
              item = System_String__Concat
                               ((System_String_o *)pIVar5[1].klass,"Button",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar3 = UI_UIManager__GetLocale
                                 (pSVar3,"Top",item,"","",
                                  (MethodInfo *)0x0);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              __this_02 = UI_ElementFactory__CreateCategoryButton
                                    (parent,(UI_ElementStyle_o *)__this_01,pSVar3,onClick,
                                     (MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_040d2979;
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._topButtons;
              key = pIVar5[1].klass;
              pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_040d2979;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this_00,(Il2CppObject *)key,pIVar5,MethodInfo_Void_Add);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x18));
          }
          UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_040d297e;
    }
  }
  else {
    lVar4 = il2cpp_glue_02274930(TypeInfo_string,3);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = "Scoreboard";
        il2cpp_runtime_glue(lVar4 + 0x20);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = "GameInfo";
          il2cpp_runtime_glue(lVar4 + 0x28);
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = "Moderation";
            il2cpp_runtime_glue(lVar4 + 0x30);
            iVar1 = *(int *)(lVar4 + 0x18);
            goto joined_r0x040d27f6;
          }
        }
      }
LAB_040d297e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_040d2979:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_ScoreboardPopup__RegisterCategoryPanels (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2b50

void UI_ScoreboardPopup__RegisterCategoryPanels(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o SVar2;
  bool_conflict bVar3;
  System_Type_o *pSVar4;
  MethodInfo *method_00;
  
  if (DAT_05704737 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_ScoreboardInfoPanel);
    il2cpp_init_method_metadata(&TypeRef_ScoreboardModerationPanel);
    il2cpp_init_method_metadata(&TypeRef_ScoreboardScorePanel);
    il2cpp_init_method_metadata(&"Moderation");
    il2cpp_init_method_metadata(&"GameInfo");
    il2cpp_init_method_metadata(&"Scoreboard");
    DAT_05704737 = '\x01';
  }
  SVar2.fields.value = TypeRef_ScoreboardScorePanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Scoreboard",(Il2CppObject *)pSVar4,MethodInfo_Void_Add);
    method_00 = (MethodInfo *)(__this->fields)._categoryPanelTypes;
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_ScoreboardInfoPanel,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                ((System_Collections_Generic_Dictionary_object__object__o *)method_00,"GameInfo",
                 (Il2CppObject *)pSVar4,MethodInfo_Void_Add);
      bVar3 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00);
      SVar2.fields.value = TypeRef_ScoreboardModerationPanel.fields.value;
      if ((char)bVar3 == '\0') {
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Moderation",(Il2CppObject *)pSVar4,MethodInfo_Void_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardPopup$$SetCategoryPanel
// il2cpp: void UI_ScoreboardPopup__SetCategoryPanel (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40d2cd0

void UI_ScoreboardPopup__SetCategoryPanel
               (UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *name_00;
  MethodInfo *method_00;
  
  if (DAT_05704738 == '\0') {
    il2cpp_init_method_metadata(&"Moderation");
    il2cpp_init_method_metadata(&"Scoreboard");
    DAT_05704738 = '\x01';
  }
  method_00 = (MethodInfo *)name;
  bVar1 = System_String__op_Equality(name,"Moderation",(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') ||
     (bVar1 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00), name_00 = "Scoreboard",
     (char)bVar1 != '\0')) {
    name_00 = name;
  }
  UI_HeadedPanel__SetCategoryPanel((UI_HeadedPanel_o *)__this,name_00,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$ShouldShowModerationTab
// il2cpp: bool UI_ScoreboardPopup__ShouldShowModerationTab (const MethodInfo* method);
// 0x40d2990

/* WARNING: Type propagation algorithm not settling */

bool_conflict UI_ScoreboardPopup__ShouldShowModerationTab(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_array *array;
  
  if (DAT_05704739 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_IndexOf_String);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"admin");
    il2cpp_init_method_metadata(&"moderator");
    DAT_05704739 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0x54d7001;
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    else {
      array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    if (array != (System_String_array *)0x0) {
      iVar4 = System_Array__IndexOf<object>((System_Object_array *)array,"admin",MethodInfo_Int32_IndexOf_String);
      if (-1 < iVar4) {
        return 0x54d7001;
      }
      iVar4 = System_Array__IndexOf<object>((System_Object_array *)array,"moderator",MethodInfo_Int32_IndexOf_String);
      return (bool_conflict)CONCAT71(0x54d70,-1 < iVar4);
    }
  }
  return 0;
}


// UI.ScoreboardPopup$$SetupPopups
// il2cpp: void UI_ScoreboardPopup__SetupPopups (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2d50

void UI_ScoreboardPopup__SetupPopups(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_ScoreboardProfilePopup_o *pUVar7;
  UI_ConfirmPopup_o *pUVar8;
  UI_ScoreboardMutePopup_o *pUVar9;
  
  if (DAT_0570473a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
    il2cpp_init_method_metadata(&MethodInfo_ScoreboardMutePopup_CreateDefaultPopup_Scoreboar);
    il2cpp_init_method_metadata(&MethodInfo_ScoreboardProfilePopup_CreateDefaultPopup_Scoreb);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570473a = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar7 = (UI_ScoreboardProfilePopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar6,0,MethodInfo_ScoreboardProfilePopup_CreateDefaultPopup_Scoreb);
  (__this->fields)._profilePopup = pUVar7;
  il2cpp_runtime_glue(&(__this->fields)._profilePopup);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar8 = (UI_ConfirmPopup_o *)UI_ElementFactory__CreateDefaultPopup<object>(pUVar6,0,MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup)
  ;
  (__this->fields)._kickPopup = pUVar8;
  il2cpp_runtime_glue(&(__this->fields)._kickPopup);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar9 = (UI_ScoreboardMutePopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar6,0,MethodInfo_ScoreboardMutePopup_CreateDefaultPopup_Scoreboar);
  (__this->fields)._mutePopup = pUVar9;
  il2cpp_runtime_glue(&(__this->fields)._mutePopup,pUVar9);
  lVar5 = MethodInfo_Void_Add;
  pSVar3 = (__this->fields)._popups;
  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    pUVar7 = (__this->fields)._profilePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 != (UI_BasePopup_array *)0x0) {
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
        il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
        pSVar3 = (__this->fields)._popups;
        lVar5 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        pSVar3 = (__this->fields)._popups;
        lVar5 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar5;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar9 = (__this->fields)._mutePopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
            pSVar3 = (__this->fields)._popups;
            lVar5 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            pSVar3 = (__this->fields)._popups;
            lVar5 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar5;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar8 = (__this->fields)._kickPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
                il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardPopup$$SetupBottomButtons
// il2cpp: void UI_ScoreboardPopup__SetupBottomButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d2280

void UI_ScoreboardPopup__SetupBottomButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_0570473b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_0570473b = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$OnBottomBarButtonClick
// il2cpp: void UI_ScoreboardPopup__OnBottomBarButtonClick (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40d2f80

void UI_ScoreboardPopup__OnBottomBarButtonClick
               (UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_0570473c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    DAT_0570473c = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__SetScoreboardMenu(__this_00,0,1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardPopup$$.ctor
// il2cpp: void UI_ScoreboardPopup___ctor (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d3040

void UI_ScoreboardPopup___ctor(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570473d == '\0') {
    il2cpp_init_method_metadata(&"ScoreboardPopup");
    DAT_0570473d = '\x01';
  }
  (__this->fields).LocaleCategory = "ScoreboardPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$<SetupBottomButtons>b__27_0
// il2cpp: void UI_ScoreboardPopup___SetupBottomButtons_b__27_0 (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x40d3090

void UI_ScoreboardPopup__<SetupBottomButtons>b__27_0
               (UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  System_String_o *a;
  bool_conflict bVar2;
  
  if (DAT_0570473e == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570473e = '\x01';
  }
  a = "Back";
  if (DAT_0570473c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    DAT_0570473c = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__SetScoreboardMenu(__this_00,0,1,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


