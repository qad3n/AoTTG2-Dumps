// Type: UI.CharacterChangePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterChangePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterChangePopup$$SetAllowedCategories
// il2cpp: void UI_CharacterChangePopup__SetAllowedCategories (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x408d9b0

void UI_CharacterChangePopup__SetAllowedCategories
               (UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *item;
  
  if (DAT_05704582 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Human");
    DAT_05704582 = '\x01';
  }
  item = "Human";
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterChangePopup$$SetupBottomButtons
// il2cpp: void UI_CharacterChangePopup__SetupBottomButtons (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x408da50

void UI_CharacterChangePopup__SetupBottomButtons
               (UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (DAT_05704583 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__1_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__1_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Join");
    DAT_05704583 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.CharacterChangePopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterChangePopup__OnBottomBarButtonClick (UI_CharacterChangePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x408dc00

void UI_CharacterChangePopup__OnBottomBarButtonClick
               (UI_CharacterChangePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  GameManagers_InGameManager_o *__this_00;
  long lVar6;
  Settings_TypedSetting_int__o *__this_01;
  UnityEngine_Object_o *x;
  Characters_Human_o *__this_02;
  long lVar7;
  char cVar8;
  bool_conflict bVar9;
  MethodInfo *method_00;
  UI_CharacterPopup_o *__this_03;
  
  if (DAT_05704584 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Join");
    DAT_05704584 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0408dc32;
LAB_0408dd06:
    il2cpp_init_class();
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_0408dd06;
LAB_0408dc32:
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (plVar5 == (long *)0x0) goto LAB_0408e024;
  if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
     (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
      TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  *(undefined1 *)(plVar5 + 0x2e) = 1;
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
  bVar9 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') goto LAB_0408dfc6;
  bVar9 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if ((lVar6 == 0) ||
     (__this_01 = *(Settings_TypedSetting_int__o **)(lVar6 + 0x20),
     __this_01 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_0408e024;
  Settings_TypedSetting<int>__set_Value(__this_01,2,MethodInfo_Void_set_Value);
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar5 == (long *)0x0) goto LAB_0408e024;
  bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
  if ((*(byte *)(*plVar5 + 0x130) < bVar3) ||
     (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(plVar5);
  }
  x = (UnityEngine_Object_o *)plVar5[0xe];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar9 == '\0') ||
     (__this_02 = (Characters_Human_o *)plVar5[0xe], __this_02 == (Characters_Human_o *)0x0)) {
LAB_0408dec8:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    else {
      bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    if (cVar8 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if ((((lVar6 == 0) || (lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar7 == 0))
          || (lVar7 = *(long *)(lVar7 + 0x58), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_0408e024;
      fVar2 = *(float *)(lVar7 + 0x14);
      pfVar1 = (float *)(lVar6 + 0x20);
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto LAB_0408dfa1;
    }
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
LAB_0408e024:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)((long)&(__this_00->fields)._gameSettingsLoaded + 1) == '\0') {
      method_00 = (MethodInfo *)0x0;
      GameManagers_InGameManager__SpawnPlayer(__this_00,0,(MethodInfo *)0x0);
    }
LAB_0408dfa1:
    iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
  }
  else {
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if (((__this_02->klass->_2).naturalAligment < bVar3) ||
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) goto LAB_0408dec8;
    if ((*(char *)&(__this_02->fields).FeedVictimName != '\0') ||
       ((__this_02->fields).FinishSetup == 7)) goto LAB_0408dfa1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_0408e024;
    method_00 = (MethodInfo *)
                GameManagers_InGameManager__GetSetHumanSettings(__this_00,(MethodInfo *)0x0);
    Characters_Human__ReloadHuman
              (__this_02,(Settings_InGameCharacterSettings_o *)method_00,(MethodInfo *)0x0);
    iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  __this_03 = (UI_CharacterPopup_o *)0x0;
  GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
  UI_CharacterPopup__SaveLastCharacter(__this_03,method_00);
LAB_0408dfc6:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterChangePopup$$.ctor
// il2cpp: void UI_CharacterChangePopup___ctor (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x408e320

void UI_CharacterChangePopup___ctor(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057045b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"CharacterPopup");
    DAT_057045b1 = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._allowedCategories = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._allowedCategories);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterChangePopup$$<SetupBottomButtons>b__1_0
// il2cpp: void UI_CharacterChangePopup___SetupBottomButtons_b__1_0 (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x408e3e0

void UI_CharacterChangePopup__<SetupBottomButtons>b__1_0
               (UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704585 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704585 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterChangePopup__OnBottomBarButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.CharacterChangePopup$$<SetupBottomButtons>b__1_1
// il2cpp: void UI_CharacterChangePopup___SetupBottomButtons_b__1_1 (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x408e420

void UI_CharacterChangePopup__<SetupBottomButtons>b__1_1
               (UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704586 == '\0') {
    il2cpp_init_method_metadata(&"Join");
    DAT_05704586 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterChangePopup__OnBottomBarButtonClick(__this,"Join",in_RDX);
  return;
}


