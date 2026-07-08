// Type: UI.CharacterEditorStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorStatsPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorStatsPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorStatsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorStatsPanel__get_Title (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x40570a0

System_String_o *
UI_CharacterEditorStatsPanel__get_Title(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704446 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"");
    DAT_05704446 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Stats","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorStatsPanel$$get_Width
// il2cpp: float UI_CharacterEditorStatsPanel__get_Width (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057140

float UI_CharacterEditorStatsPanel__get_Width
                (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorStatsPanel$$get_Height
// il2cpp: float UI_CharacterEditorStatsPanel__get_Height (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057150

float UI_CharacterEditorStatsPanel__get_Height
                (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 360.0;
}


// UI.CharacterEditorStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorStatsPanel__get_VerticalSpacing (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057160

float UI_CharacterEditorStatsPanel__get_VerticalSpacing
                (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorStatsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057170

int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding
                  (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057180

int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding
                  (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$Setup
// il2cpp: void UI_CharacterEditorStatsPanel__Setup (UI_CharacterEditorStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4057190

void UI_CharacterEditorStatsPanel__Setup
               (UI_CharacterEditorStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_Hashtable_o *str;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *subCategory;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_01;
  Settings_BaseSetSetting_o *pSVar6;
  Characters_HumanStats_o *pCVar7;
  System_String_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  MethodInfo *pMVar10;
  
  if (DAT_05704447 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"EditPerks");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"Ammunition");
    il2cpp_init_method_metadata(&"EditStats");
    il2cpp_init_method_metadata(&"Gas");
    il2cpp_init_method_metadata(&"");
    DAT_05704447 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar5,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar6 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar6);
      }
    }
    pCVar7 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar7,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pSVar6 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar3 = pSVar6[4].fields.Settings,
       pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
      str = (pSVar3->fields)._objectsTable;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar7 = Characters_HumanStats__Deserialize(pCVar7,(System_String_o *)str,(MethodInfo *)0x0);
      subCategory = "Stats";
      pSVar5 = "CharacterEditor";
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar10 = "";
      pSVar8 = UI_UIManager__GetLocale
                         (pSVar5,subCategory,"Acceleration",(System_String_o *)"",
                          (System_String_o *)"",(MethodInfo *)0x0);
      if (pCVar7 != (Characters_HumanStats_o *)0x0) {
        UI_CharacterEditorStatsPanel__CreateStatBar
                  (__this,pSVar8,(pCVar7->fields).Acceleration,pMVar10);
        pMVar10 = "";
        pSVar8 = UI_UIManager__GetLocale
                           (pSVar5,subCategory,"Speed",(System_String_o *)"",
                            (System_String_o *)"",(MethodInfo *)0x0);
        UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar8,(pCVar7->fields).Speed,pMVar10);
        pMVar10 = "";
        pSVar8 = UI_UIManager__GetLocale
                           (pSVar5,subCategory,"Gas",(System_String_o *)"",
                            (System_String_o *)"",(MethodInfo *)0x0);
        UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar8,(pCVar7->fields).Gas,pMVar10);
        pMVar10 = "";
        pSVar8 = UI_UIManager__GetLocale
                           (pSVar5,subCategory,"Ammunition",(System_String_o *)"",
                            (System_String_o *)"",(MethodInfo *)0x0);
        UI_CharacterEditorStatsPanel__CreateStatBar
                  (__this,pSVar8,(pCVar7->fields).Ammunition,pMVar10);
        pUVar4 = (__this->fields).BottomBar;
        pSVar8 = UI_UIManager__GetLocale
                           (pSVar5,subCategory,"EditStats",(System_String_o *)"",
                            (System_String_o *)"",(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(pUVar4,__this_01,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).BottomBar;
        pSVar5 = UI_UIManager__GetLocale
                           (pSVar5,subCategory,"EditPerks",(System_String_o *)"",
                            (System_String_o *)"",(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(pUVar4,__this_01,pSVar5,0.0,pUVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorStatsPanel$$CreateStatBar
// il2cpp: void UI_CharacterEditorStatsPanel__CreateStatBar (UI_CharacterEditorStatsPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x40575b0

void UI_CharacterEditorStatsPanel__CreateStatBar
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *title,int32_t value,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  undefined1 local_34 [4];
  
  if (DAT_05704448 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"ProgressBar/Background");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"QuestPopup");
    il2cpp_init_method_metadata(&"ProgressBarFillColor");
    il2cpp_init_method_metadata(&"ProgressBar");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"QuestItem");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"ProgressBar/Fill Area/Fill");
    il2cpp_init_method_metadata(&"ProgressBarBackgroundColor");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"Prefabs/Misc/StatBar");
    DAT_05704448 = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind
                        ((__this->fields).SinglePanel,"Prefabs/Misc/StatBar",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pIVar4 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
        if (pIVar4 != (Il2CppObject *)0x0) {
          (*pIVar4->klass->vtable[0x4b].methodPtr)(pIVar4,title,pIVar4->klass->vtable[0x4b].method);
          pUVar3 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pIVar4 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
            pSVar5 = (System_String_o *)
                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UVar7 = UI_UIManager__GetThemeColor
                              (pSVar5,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
            if (pIVar4 != (Il2CppObject *)0x0) {
              (*pIVar4->klass->vtable[0x17].methodPtr)
                        (UVar7.fields._0_8_,UVar7.fields._8_8_,pIVar4,
                         pIVar4->klass->vtable[0x17].method);
              pUVar3 = UnityEngine_Transform__Find(pUVar2,"ProgressBar",(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pIVar4 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar3,MethodInfo_Slider_GetComponent_Slider);
                if (pIVar4 != (Il2CppObject *)0x0) {
                  fVar6 = ((float)value + -50.0) / 50.0;
                  fVar1 = 1.0;
                  if (fVar6 <= 1.0) {
                    fVar1 = fVar6;
                  }
                  (*pIVar4->klass->vtable[0x2f].methodPtr)
                            ((ulong)(-(uint)(0.0 <= fVar6) & (uint)fVar1),pIVar4,
                             pIVar4->klass->vtable[0x2f].method);
                  pUVar3 = UnityEngine_Transform__Find(pUVar2,"ProgressBar/Background",(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pIVar4 = UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar3,MethodInfo_Image_GetComponent_Image);
                    UVar7 = UI_UIManager__GetThemeColor
                                      ("QuestPopup","QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                                       (MethodInfo *)0x0);
                    if (pIVar4 != (Il2CppObject *)0x0) {
                      (*pIVar4->klass->vtable[0x17].methodPtr)
                                (UVar7.fields._0_8_,UVar7.fields._8_8_,pIVar4,
                                 pIVar4->klass->vtable[0x17].method);
                      pUVar3 = UnityEngine_Transform__Find(pUVar2,"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
                      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                        pIVar4 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar3,MethodInfo_Image_GetComponent_Image);
                        UVar7 = UI_UIManager__GetThemeColor
                                          ("QuestPopup","QuestItem","ProgressBarFillColor","DefaultPanel",
                                           (MethodInfo *)0x0);
                        if (pIVar4 != (Il2CppObject *)0x0) {
                          (*pIVar4->klass->vtable[0x17].methodPtr)
                                    (UVar7.fields._0_8_,UVar7.fields._8_8_,pIVar4,
                                     pIVar4->klass->vtable[0x17].method);
                          pUVar3 = UnityEngine_Transform__Find
                                             (pUVar2,"Value",(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                            pIVar4 = UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
                            pSVar5 = System_Int32__ToString((int32_t)local_34,(MethodInfo *)0x0);
                            if (pIVar4 != (Il2CppObject *)0x0) {
                              (*pIVar4->klass->vtable[0x4b].methodPtr)
                                        (pIVar4,pSVar5,pIVar4->klass->vtable[0x4b].method);
                              pUVar2 = UnityEngine_Transform__Find
                                                 (pUVar2,"Value",(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                pIVar4 = UnityEngine_Component__GetComponent<object>
                                                   ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
                                pSVar5 = (System_String_o *)
                                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this,(__this->klass->vtable)._4_get_ThemePanel
                                                           .method);
                                UVar7 = UI_UIManager__GetThemeColor
                                                  (pSVar5,"DefaultLabel","TextColor","DefaultPanel",
                                                   (MethodInfo *)0x0);
                                if (pIVar4 != (Il2CppObject *)0x0) {
                                  (*pIVar4->klass->vtable[0x17].methodPtr)
                                            (UVar7.fields._0_8_,UVar7.fields._8_8_,pIVar4,
                                             pIVar4->klass->vtable[0x17].method);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorStatsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorStatsPanel__OnButtonClick (UI_CharacterEditorStatsPanel_o* __this, System_String_o* button, const MethodInfo* method);
// 0x4057a10

void UI_CharacterEditorStatsPanel__OnButtonClick
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *button,MethodInfo *method)

{
  char cVar1;
  code *vtable_dispatch_00;
  bool_conflict bVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar4;
  long *plVar5;
  
  if (DAT_05704449 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"EditPerks");
    il2cpp_init_method_metadata(&"EditStats");
    DAT_05704449 = '\x01';
  }
  bVar2 = System_String__op_Equality(button,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(button,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_UIManager);
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + uVar3 * 8) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
      if (plVar5[0x19] != 0) {
        cVar1 = *(char *)(plVar5[0x19] + 0x90);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_UIManager);
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uVar3 = extraout_RDX_00;
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) !=
            TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
        if (cVar1 != '\0') {
          plVar5 = (long *)plVar5[0x19];
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
LAB_04057c5f:
          vtable_dispatch_00 = *(code **)(*plVar5 + 0x298);
          (*vtable_dispatch_00)
                    (plVar5,*(undefined8 *)(*plVar5 + 0x2a0),uVar3,vtable_dispatch_00);
          return;
        }
        plVar5 = (long *)plVar5[0x18];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar5 != (long *)0x0) {
            if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
               (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8
                         ) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
            plVar5 = (long *)plVar5[0x19];
            uVar4 = extraout_RDX_02;
            if (plVar5 == (long *)0x0) goto LAB_04057d68;
LAB_04057d4b:
            vtable_dispatch_00 = *(code **)(*plVar5 + 0x288);
            (*vtable_dispatch_00)
                      (plVar5,*(undefined8 *)(*plVar5 + 0x290),uVar4,vtable_dispatch_00);
            return;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_UIManager);
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + uVar3 * 8) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
      if (plVar5[0x18] != 0) {
        cVar1 = *(char *)(plVar5[0x18] + 0x90);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_UIManager);
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uVar3 = extraout_RDX;
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) !=
            TypeInfo_CharacterEditorHumanMenu)) {
LAB_04057d63:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        if (cVar1 == '\0') {
          plVar5 = (long *)plVar5[0x19];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
            plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + -8 +
                           (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) != TypeInfo_CharacterEditorHumanMenu))
              goto LAB_04057d63;
              plVar5 = (long *)plVar5[0x18];
              uVar4 = extraout_RDX_01;
              if (plVar5 != (long *)0x0) goto LAB_04057d4b;
            }
          }
        }
        else {
          plVar5 = (long *)plVar5[0x18];
          if (plVar5 != (long *)0x0) goto LAB_04057c5f;
        }
      }
    }
  }
LAB_04057d68:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorStatsPanel$$.ctor
// il2cpp: void UI_CharacterEditorStatsPanel___ctor (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057d70

void UI_CharacterEditorStatsPanel___ctor(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_0
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_0 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057d80

void UI_CharacterEditorStatsPanel__<Setup>b__12_0
               (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  code *vtable_dispatch_00;
  System_String_o *a;
  bool_conflict bVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar4;
  long *plVar5;
  
  if (DAT_0570444a == '\0') {
    il2cpp_init_method_metadata(&"EditStats");
    DAT_0570444a = '\x01';
  }
  a = "EditStats";
  if (DAT_05704449 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"EditPerks");
    il2cpp_init_method_metadata(&"EditStats");
    DAT_05704449 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(a,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_UIManager);
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + uVar3 * 8) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
      if (plVar5[0x19] != 0) {
        cVar1 = *(char *)(plVar5[0x19] + 0x90);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_UIManager);
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uVar3 = extraout_RDX_00;
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) !=
            TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
        if (cVar1 != '\0') {
          plVar5 = (long *)plVar5[0x19];
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
LAB_04057c5f:
          vtable_dispatch_00 = *(code **)(*plVar5 + 0x298);
          (*vtable_dispatch_00)
                    (plVar5,*(undefined8 *)(*plVar5 + 0x2a0),uVar3,vtable_dispatch_00);
          return;
        }
        plVar5 = (long *)plVar5[0x18];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar5 != (long *)0x0) {
            if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
               (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8
                         ) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
            plVar5 = (long *)plVar5[0x19];
            uVar4 = extraout_RDX_02;
            if (plVar5 == (long *)0x0) goto LAB_04057d68;
LAB_04057d4b:
            vtable_dispatch_00 = *(code **)(*plVar5 + 0x288);
            (*vtable_dispatch_00)
                      (plVar5,*(undefined8 *)(*plVar5 + 0x290),uVar4,vtable_dispatch_00);
            return;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_UIManager);
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + uVar3 * 8) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
      if (plVar5[0x18] != 0) {
        cVar1 = *(char *)(plVar5[0x18] + 0x90);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_UIManager);
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uVar3 = extraout_RDX;
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) !=
            TypeInfo_CharacterEditorHumanMenu)) {
LAB_04057d63:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        if (cVar1 == '\0') {
          plVar5 = (long *)plVar5[0x19];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
            plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + -8 +
                           (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) != TypeInfo_CharacterEditorHumanMenu))
              goto LAB_04057d63;
              plVar5 = (long *)plVar5[0x18];
              uVar4 = extraout_RDX_01;
              if (plVar5 != (long *)0x0) goto LAB_04057d4b;
            }
          }
        }
        else {
          plVar5 = (long *)plVar5[0x18];
          if (plVar5 != (long *)0x0) goto LAB_04057c5f;
        }
      }
    }
  }
LAB_04057d68:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_1
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_1 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x4057db0

void UI_CharacterEditorStatsPanel__<Setup>b__12_1
               (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  code *vtable_dispatch_00;
  System_String_o *a;
  bool_conflict bVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar4;
  long *plVar5;
  
  if (DAT_0570444b == '\0') {
    il2cpp_init_method_metadata(&"EditPerks");
    DAT_0570444b = '\x01';
  }
  a = "EditPerks";
  if (DAT_05704449 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"EditPerks");
    il2cpp_init_method_metadata(&"EditStats");
    DAT_05704449 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"EditStats",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(a,"EditPerks",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_UIManager);
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + uVar3 * 8) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
      if (plVar5[0x19] != 0) {
        cVar1 = *(char *)(plVar5[0x19] + 0x90);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_UIManager);
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uVar3 = extraout_RDX_00;
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) !=
            TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
        if (cVar1 != '\0') {
          plVar5 = (long *)plVar5[0x19];
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
LAB_04057c5f:
          vtable_dispatch_00 = *(code **)(*plVar5 + 0x298);
          (*vtable_dispatch_00)
                    (plVar5,*(undefined8 *)(*plVar5 + 0x2a0),uVar3,vtable_dispatch_00);
          return;
        }
        plVar5 = (long *)plVar5[0x18];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar5 != (long *)0x0) {
            if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
               (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8
                         ) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
            plVar5 = (long *)plVar5[0x19];
            uVar4 = extraout_RDX_02;
            if (plVar5 == (long *)0x0) goto LAB_04057d68;
LAB_04057d4b:
            vtable_dispatch_00 = *(code **)(*plVar5 + 0x288);
            (*vtable_dispatch_00)
                      (plVar5,*(undefined8 *)(*plVar5 + 0x290),uVar4,vtable_dispatch_00);
            return;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_UIManager);
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + uVar3 * 8) != TypeInfo_CharacterEditorHumanMenu)) goto LAB_04057d63;
      if (plVar5[0x18] != 0) {
        cVar1 = *(char *)(plVar5[0x18] + 0x90);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_UIManager);
          plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          uVar3 = extraout_RDX;
          if (plVar5 == (long *)0x0) goto LAB_04057d68;
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) !=
            TypeInfo_CharacterEditorHumanMenu)) {
LAB_04057d63:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        if (cVar1 == '\0') {
          plVar5 = (long *)plVar5[0x19];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
            plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130)) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + -8 +
                           (ulong)*(byte *)(TypeInfo_CharacterEditorHumanMenu + 0x130) * 8) != TypeInfo_CharacterEditorHumanMenu))
              goto LAB_04057d63;
              plVar5 = (long *)plVar5[0x18];
              uVar4 = extraout_RDX_01;
              if (plVar5 != (long *)0x0) goto LAB_04057d4b;
            }
          }
        }
        else {
          plVar5 = (long *)plVar5[0x18];
          if (plVar5 != (long *)0x0) goto LAB_04057c5f;
        }
      }
    }
  }
LAB_04057d68:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


