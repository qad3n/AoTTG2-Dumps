// Type: UI.SettingsAbilityPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsAbilityPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsAbilityPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsAbilityPanel.<>c$$.cctor
// il2cpp: void UI_SettingsAbilityPanel___c___cctor (const MethodInfo* method);
// 0x412d570

void UI_SettingsAbilityPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704940 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704940 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.SettingsAbilityPanel.<>c$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___c___ctor (UI_SettingsAbilityPanel___c_o* __this, const MethodInfo* method);
// 0x412d5e0

void UI_SettingsAbilityPanel_<>c___ctor(UI_SettingsAbilityPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel.<>c$$<Setup>b__7_0
// il2cpp: bool UI_SettingsAbilityPanel___c___Setup_b__7_0 (UI_SettingsAbilityPanel___c_o* __this, const MethodInfo* method);
// 0x412d5f0

bool_conflict
UI_SettingsAbilityPanel_<>c__<Setup>b__7_0(UI_SettingsAbilityPanel___c_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_05704941 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704941 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if ((((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(lVar1 + 0x30) != 0)) &&
     ((*(long *)(lVar1 + 0x38) != 0 && (lVar2 = *(long *)(lVar1 + 0x40), lVar2 != 0)))) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)lVar2 >> 8),
                    *(int *)(*(long *)(lVar1 + 0x28) + 0x14) +
                    *(int *)(*(long *)(lVar1 + 0x30) + 0x14) +
                    *(int *)(*(long *)(lVar1 + 0x38) + 0x14) + *(int *)(lVar2 + 0x14) < 0x15);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___ctor (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x412c7a0

void UI_SettingsAbilityPanel_<>c__DisplayClass7_0___ctor
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__1
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__1 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x412d670

void UI_SettingsAbilityPanel_<>c__DisplayClass7_0__<Setup>b__1
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__2
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__2 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x412d690

void UI_SettingsAbilityPanel_<>c__DisplayClass7_0__<Setup>b__2
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__3
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__3 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x412d6b0

void UI_SettingsAbilityPanel_<>c__DisplayClass7_0__<Setup>b__3
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__4
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__4 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x412d6d0

void UI_SettingsAbilityPanel_<>c__DisplayClass7_0__<Setup>b__4
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel$$get_PanelAlignment
// il2cpp: int32_t UI_SettingsAbilityPanel__get_PanelAlignment (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x412bd90

int32_t UI_SettingsAbilityPanel__get_PanelAlignment
                  (UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SettingsAbilityPanel$$Setup
// il2cpp: void UI_SettingsAbilityPanel__Setup (UI_SettingsAbilityPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x412bda0

void UI_SettingsAbilityPanel__Setup
               (UI_SettingsAbilityPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  UnityEngine_Transform_o *pUVar2;
  Settings_BaseSetting_o *pSVar3;
  long lVar4;
  Il2CppObject *__this_00;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  System_String_o *pSVar9;
  void **ppvVar10;
  MethodInfo *in_R9;
  MethodInfo *pMVar11;
  MethodInfo *method_01;
  System_Func_bool__o *pSStack_58;
  
  if (DAT_0570493c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_Func_bool);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Setup_b__7_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__4);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"UseOldEffect");
    il2cpp_init_method_metadata(&"UnusedPoints");
    il2cpp_init_method_metadata(&"k");
    il2cpp_init_method_metadata(&"BombCooldown");
    il2cpp_init_method_metadata(&"BombRadius");
    il2cpp_init_method_metadata(&"BombColor");
    il2cpp_init_method_metadata(&"BombSpeed");
    il2cpp_init_method_metadata(&"ShowBombColors");
    il2cpp_init_method_metadata(&"BombCollision");
    il2cpp_init_method_metadata(&"Ability");
    il2cpp_init_method_metadata(&"CursorCooldown");
    il2cpp_init_method_metadata(&"m");
    il2cpp_init_method_metadata(&"BombRange");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"s");
    DAT_0570493c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass7_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
    pSVar9 = "Ability";
    if (parent != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
      if (((parent->klass->_2).naturalAligment < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(parent);
      }
      category = (System_String_o *)parent[1].fields._currentCategoryPanel;
      ppvVar10 = &__this_00[1].monitor;
      __this_00[1].monitor = *(void **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
      il2cpp_runtime_glue();
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor
                ((UI_ElementStyle_o *)method_00,0x18,200.0,20.0,pSVar5,(MethodInfo *)0x0);
      if (__this_00[1].monitor != (void *)0x0) {
        pUVar2 = (__this->fields).DoublePanelRight;
        pSVar3 = *(Settings_BaseSetting_o **)((long)__this_00[1].monitor + 0x48);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar9,"CursorCooldown","","",in_R9);
        pMVar11 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        if (*ppvVar10 != (void *)0x0) {
          pUVar2 = (__this->fields).DoublePanelRight;
          pSVar3 = *(Settings_BaseSetting_o **)((long)*ppvVar10 + 0x50);
          pSVar5 = UI_UIManager__GetLocale
                             (category,pSVar9,"ShowBombColors","","",pMVar11);
          pMVar11 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          if (*ppvVar10 != (void *)0x0) {
            pUVar2 = (__this->fields).DoublePanelRight;
            pSVar3 = *(Settings_BaseSetting_o **)((long)*ppvVar10 + 0x58);
            pSVar5 = UI_UIManager__GetLocale
                               (category,pSVar9,"UseOldEffect","","",pMVar11);
            pMVar11 = (MethodInfo *)0x0;
            UI_ElementFactory__CreateToggleSetting
                      (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,"",30.0,30.0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
            if (*ppvVar10 != (void *)0x0) {
              pUVar2 = (__this->fields).DoublePanelRight;
              pSVar3 = *(Settings_BaseSetting_o **)((long)*ppvVar10 + 0x60);
              pSVar5 = UI_UIManager__GetLocale
                                 (category,pSVar9,"BombCollision","","",pMVar11);
              method_01 = (MethodInfo *)0x0;
              pMVar11 = (MethodInfo *)0x0;
              UI_ElementFactory__CreateToggleSetting
                        (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,"",30.0,30.0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).DoublePanelLeft;
              pSVar5 = UI_UIManager__GetLocale
                                 (category,pSVar9,"UnusedPoints","","",pMVar11);
              pUVar6 = UI_ElementFactory__CreateDefaultLabel
                                 (pUVar2,(UI_ElementStyle_o *)method_00,pSVar5,0,4,(MethodInfo *)0x0
                                 );
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar7 = (UnityEngine_UI_Text_o *)
                         UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_Text_GetComponent_Text);
                (__this->fields)._pointsLeftLabel = pUVar7;
                il2cpp_runtime_glue(&(__this->fields)._pointsLeftLabel,pUVar7);
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSStack_58 = *(System_Func_bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
                if (pSStack_58 == (System_Func_bool__o *)0x0) {
                  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSStack_58 = (System_Func_bool__o *)il2cpp_runtime_glue(TypeInfo_Func_bool);
                  System_Func<bool>___ctor();
                  lVar4 = *(long *)(TypeInfo_c + 0xb8);
                  *(System_Func_bool__o **)(lVar4 + 8) = pSStack_58;
                  il2cpp_runtime_glue(lVar4 + 8,pSStack_58);
                }
                if ((*ppvVar10 != (void *)0x0) &&
                   (pSVar3 = *(Settings_BaseSetting_o **)((long)*ppvVar10 + 0x28),
                   pSVar3 != (Settings_BaseSetting_o *)0x0)) {
                  pUVar2 = (__this->fields).DoublePanelLeft;
                  pSVar5 = UI_SettingsAbilityPanel__GetBombStatLabel
                                     (__this,category,pSVar9,"BombRadius",
                                      *(int32_t *)((long)&pSVar3[1].klass + 4),5.4,7.4,7.0,
                                      "m",1.0,method_01);
                  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pUVar6 = UI_ElementFactory__CreateIncrementSetting
                                     (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,
                                      "",33.0,30.0,(System_String_array *)0x0,pUVar8,
                                      pSStack_58,(MethodInfo *)0x0);
                  (__this->fields)._radiusElement = pUVar6;
                  il2cpp_runtime_glue(&(__this->fields)._radiusElement,pUVar6);
                  if ((__this_00[1].monitor != (void *)0x0) &&
                     (pSVar3 = *(Settings_BaseSetting_o **)((long)__this_00[1].monitor + 0x30),
                     pSVar3 != (Settings_BaseSetting_o *)0x0)) {
                    pUVar2 = (__this->fields).DoublePanelLeft;
                    pSVar5 = UI_SettingsAbilityPanel__GetBombStatLabel
                                       (__this,category,pSVar9,"BombRange",
                                        *(int32_t *)((long)&pSVar3[1].klass + 4),0.0,4.0,7.0,
                                        "m",1.0,(MethodInfo *)pUVar8);
                    pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    pUVar6 = UI_ElementFactory__CreateIncrementSetting
                                       (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,
                                        "",33.0,30.0,(System_String_array *)0x0,pUVar8,
                                        pSStack_58,(MethodInfo *)0x0);
                    (__this->fields)._rangeElement = pUVar6;
                    il2cpp_runtime_glue(&(__this->fields)._rangeElement,pUVar6);
                    if ((__this_00[1].monitor != (void *)0x0) &&
                       (pSVar3 = *(Settings_BaseSetting_o **)((long)__this_00[1].monitor + 0x38),
                       pSVar3 != (Settings_BaseSetting_o *)0x0)) {
                      pUVar2 = (__this->fields).DoublePanelLeft;
                      pSVar5 = UI_SettingsAbilityPanel__GetBombStatLabel
                                         (__this,category,pSVar9,"BombSpeed",
                                          *(int32_t *)((long)&pSVar3[1].klass + 4),3.0,10.5,10.5,
                                          "k",100.0,(MethodInfo *)pUVar8);
                      pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      pUVar6 = UI_ElementFactory__CreateIncrementSetting
                                         (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,
                                          "",33.0,30.0,(System_String_array *)0x0,pUVar8,
                                          pSStack_58,(MethodInfo *)0x0);
                      (__this->fields)._speedElement = pUVar6;
                      il2cpp_runtime_glue(&(__this->fields)._speedElement,pUVar6);
                      if ((__this_00[1].monitor != (void *)0x0) &&
                         (pSVar3 = *(Settings_BaseSetting_o **)((long)__this_00[1].monitor + 0x40),
                         pSVar3 != (Settings_BaseSetting_o *)0x0)) {
                        pUVar2 = (__this->fields).DoublePanelLeft;
                        pSVar5 = UI_SettingsAbilityPanel__GetBombStatLabel
                                           (__this,category,pSVar9,"BombCooldown",
                                            *(int32_t *)((long)&pSVar3[1].klass + 4),4.0,7.0,7.0,
                                            "s",1.0,(MethodInfo *)pUVar8);
                        pUVar8 = (UnityEngine_Events_UnityAction_o *)
                                 il2cpp_runtime_glue(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pMVar11 = (MethodInfo *)0x0;
                        pUVar6 = UI_ElementFactory__CreateIncrementSetting
                                           (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar5,
                                            "",33.0,30.0,(System_String_array *)0x0,pUVar8
                                            ,pSStack_58,(MethodInfo *)0x0);
                        (__this->fields)._cooldownElement = pUVar6;
                        il2cpp_runtime_glue(&(__this->fields)._cooldownElement,pUVar6);
                        if (__this_00[1].monitor != (void *)0x0) {
                          pUVar2 = (__this->fields).DoublePanelLeft;
                          pSVar3 = *(Settings_BaseSetting_o **)((long)__this_00[1].monitor + 0x20);
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar9 = UI_UIManager__GetLocale
                                             (category,pSVar9,"BombColor","",""
                                              ,pMVar11);
                          lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                          if (lVar4 != 0) {
                            UI_ElementFactory__CreateColorSetting
                                      (pUVar2,(UI_ElementStyle_o *)method_00,pSVar3,pSVar9,
                                       *(UI_ColorPickPopup_o **)(lVar4 + 0x48),"",90.0,
                                       30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                       (MethodInfo *)0x0);
                            if (*ppvVar10 != (void *)0x0) {
                              UI_SettingsAbilityPanel__RefreshBombStatLabels(__this,method_00);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel$$GetBombStatLabel
// il2cpp: System_String_o* UI_SettingsAbilityPanel__GetBombStatLabel (UI_SettingsAbilityPanel_o* __this, System_String_o* cat, System_String_o* sub, System_String_o* statName, int32_t pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, System_String_o* unit, float divisor, const MethodInfo* method);
// 0x412cc00

System_String_o *
UI_SettingsAbilityPanel__GetBombStatLabel
          (UI_SettingsAbilityPanel_o *__this,System_String_o *cat,System_String_o *sub,
          System_String_o *statName,int32_t pointsSpent,float oldMinCost,float oldMaxCost,
          float cutoff,System_String_o *unit,float divisor,MethodInfo *method)

{
  int32_t val2;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str0;
  System_String_array *values;
  System_String_o *str2;
  int iVar5;
  MethodInfo *method_00;
  float cooldown;
  float __this_00;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  method_00 = (MethodInfo *)unit;
  local_40 = divisor;
  local_3c = oldMinCost;
  local_38 = oldMaxCost;
  if (DAT_0570493d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"BombCooldown");
    il2cpp_init_method_metadata(&"BombRadius");
    il2cpp_init_method_metadata(&"0.##");
    il2cpp_init_method_metadata(&"BombSpeed");
    il2cpp_init_method_metadata(&") (");
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"BombRange");
    il2cpp_init_method_metadata(&"");
    DAT_0570493d = '\x01';
  }
  local_44 = 0.0;
  local_34 = 0.0;
  bVar1 = System_String__op_Equality(statName,"BombRadius",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(statName,"BombRange",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(statName,"BombSpeed",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(statName,"BombCooldown",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          local_44 = 0.0;
          cooldown = 0.0;
        }
        else {
          cooldown = BombUtil__GetBombCooldown
                               ((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
          local_44 = BombUtil__GetOldCooldownCost(cooldown,(MethodInfo *)0x0);
        }
      }
      else {
        cooldown = BombUtil__GetBombSpeed
                             ((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
        local_44 = BombUtil__GetOldSpeedCost(cooldown,(MethodInfo *)0x0);
      }
    }
    else {
      cooldown = BombUtil__GetBombRange
                           ((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
      local_44 = BombUtil__GetOldRangeCost(cooldown,(MethodInfo *)0x0);
    }
  }
  else {
    cooldown = BombUtil__GetBombRadius
                         ((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
    local_44 = BombUtil__GetOldRadiusCost(cooldown,(MethodInfo *)0x0);
  }
  local_34 = cooldown / local_40;
  pSVar3 = System_Single__ToString(local_40,(System_String_o *)&local_34,"0.##");
  pSVar4 = System_Single__ToString(__this_00,(System_String_o *)&local_44,"0.##");
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  str0 = UI_UIManager__GetLocale(cat,sub,statName,"","",method_00);
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if (values == (System_String_array *)0x0) {
LAB_0412d02e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "(";
    il2cpp_runtime_glue(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar4;
      il2cpp_runtime_glue(values->m_Items + 1,pSVar4);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ") (";
        il2cpp_runtime_glue(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar3;
          il2cpp_runtime_glue(values->m_Items + 3,pSVar3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = unit;
            il2cpp_runtime_glue(values->m_Items + 4,unit);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = ")";
              il2cpp_runtime_glue(values->m_Items + 5);
              pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
              if ((str0 != (System_String_o *)0x0) && (pSVar3 != (System_String_o *)0x0)) {
                iVar2 = (str0->fields)._stringLength;
                val2 = (pSVar3->fields)._stringLength;
                if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                iVar2 = System_Math__Max(iVar2,val2,(MethodInfo *)0x0);
                iVar5 = iVar2 - (pSVar3->fields)._stringLength;
                if (iVar5 != 0 && (pSVar3->fields)._stringLength <= iVar2) {
                  pSVar4 = System_String__CreateString
                                     ((System_String_o *)0x0,0x20,iVar5 / 2,(MethodInfo *)0x0);
                  str2 = System_String__CreateString
                                   ((System_String_o *)0x0,0x20,iVar5 - iVar5 / 2,(MethodInfo *)0x0)
                  ;
                  pSVar3 = System_String__Concat(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
                }
                pSVar3 = System_String__Concat(str0,"\n",pSVar3,(MethodInfo *)0x0);
                return pSVar3;
              }
              goto LAB_0412d02e;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel$$CenterString
// il2cpp: System_String_o* UI_SettingsAbilityPanel__CenterString (UI_SettingsAbilityPanel_o* __this, System_String_o* text, int32_t totalWidth, const MethodInfo* method);
// 0x412d050

System_String_o *
UI_SettingsAbilityPanel__CenterString
          (UI_SettingsAbilityPanel_o *__this,System_String_o *text,int32_t totalWidth,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  int count;
  int iVar2;
  
  if (text == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = (text->fields)._stringLength;
  if (iVar2 < totalWidth) {
    iVar2 = totalWidth - iVar2;
    count = iVar2 / 2;
    pSVar1 = System_String__CreateString((System_String_o *)0x0,0x20,count,(MethodInfo *)0x0);
    str2 = System_String__CreateString((System_String_o *)0x0,0x20,iVar2 - count,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,text,str2,(MethodInfo *)0x0);
    return pSVar1;
  }
  return text;
}


// UI.SettingsAbilityPanel$$OnStatChanged
// il2cpp: void UI_SettingsAbilityPanel__OnStatChanged (UI_SettingsAbilityPanel_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x412d040

void UI_SettingsAbilityPanel__OnStatChanged(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel__RefreshBombStatLabels(__this,method);
  return;
}


// UI.SettingsAbilityPanel$$RefreshBombStatLabels
// il2cpp: void UI_SettingsAbilityPanel__RefreshBombStatLabels (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x412d0c0

void UI_SettingsAbilityPanel__RefreshBombStatLabels
               (UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_String_o *cat;
  System_String_o *pSVar8;
  System_String_o *str2;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  UI_SettingsAbilityPanel_o *pUVar11;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_44;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (DAT_0570493e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"UnusedPoints");
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"k");
    il2cpp_init_method_metadata(&"BombCooldown");
    il2cpp_init_method_metadata(&"BombRadius");
    il2cpp_init_method_metadata(&"BombSpeed");
    il2cpp_init_method_metadata(&"Ability");
    il2cpp_init_method_metadata(&"m");
    il2cpp_init_method_metadata(&"BombRange");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"s");
    DAT_0570493e = '\x01';
  }
  local_44 = 0;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if ((((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) && (*(long *)(lVar5 + 0x30) != 0)) &&
     ((*(long *)(lVar5 + 0x38) != 0 && (*(long *)(lVar5 + 0x40) != 0)))) {
    local_38 = "SettingsPopup";
    local_40 = "Ability";
    iVar1 = *(int *)(*(long *)(lVar5 + 0x28) + 0x14);
    iVar2 = *(int *)(*(long *)(lVar5 + 0x30) + 0x14);
    iVar3 = *(int *)(*(long *)(lVar5 + 0x38) + 0x14);
    iVar4 = *(int *)(*(long *)(lVar5 + 0x40) + 0x14);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_44 = System_Math__Max(0,0x14 - (iVar1 + iVar2 + iVar3 + iVar4),(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._pointsLeftLabel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    cat = local_38;
    pSVar9 = local_40;
    pSVar8 = UI_UIManager__GetLocale(local_38,local_40,"UnusedPoints","","",in_R9)
    ;
    str2 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat(pSVar8,": ",str2,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                (pUVar6,pSVar8,(pUVar6->klass->vtable)._75_set_text.method);
      if (*(long *)(lVar5 + 0x28) != 0) {
        pUVar7 = (__this->fields)._radiusElement;
        pMVar10 = "BombRadius";
        pUVar11 = __this;
        pSVar8 = UI_SettingsAbilityPanel__GetBombStatLabel
                           (__this,cat,pSVar9,(System_String_o *)"BombRadius",
                            *(int32_t *)(*(long *)(lVar5 + 0x28) + 0x14),5.4,7.4,7.0,"m",
                            1.0,in_stack_ffffffffffffffa8);
        UI_SettingsAbilityPanel__UpdateElementLabel(pUVar11,pUVar7,pSVar8,pMVar10);
        if (*(long *)(lVar5 + 0x30) != 0) {
          pUVar7 = (__this->fields)._rangeElement;
          pMVar10 = "BombRange";
          pUVar11 = __this;
          pSVar8 = UI_SettingsAbilityPanel__GetBombStatLabel
                             (__this,cat,pSVar9,(System_String_o *)"BombRange",
                              *(int32_t *)(*(long *)(lVar5 + 0x30) + 0x14),0.0,4.0,7.0,"m",
                              1.0,in_stack_ffffffffffffffa8);
          UI_SettingsAbilityPanel__UpdateElementLabel(pUVar11,pUVar7,pSVar8,pMVar10);
          if (*(long *)(lVar5 + 0x38) != 0) {
            pUVar7 = (__this->fields)._speedElement;
            pMVar10 = "BombSpeed";
            pUVar11 = __this;
            pSVar8 = UI_SettingsAbilityPanel__GetBombStatLabel
                               (__this,cat,pSVar9,(System_String_o *)"BombSpeed",
                                *(int32_t *)(*(long *)(lVar5 + 0x38) + 0x14),3.0,10.5,10.5,
                                "k",100.0,in_stack_ffffffffffffffa8);
            UI_SettingsAbilityPanel__UpdateElementLabel(pUVar11,pUVar7,pSVar8,pMVar10);
            if (*(long *)(lVar5 + 0x40) != 0) {
              pUVar7 = (__this->fields)._cooldownElement;
              pMVar10 = "BombCooldown";
              pSVar9 = UI_SettingsAbilityPanel__GetBombStatLabel
                                 (__this,cat,pSVar9,(System_String_o *)"BombCooldown",
                                  *(int32_t *)(*(long *)(lVar5 + 0x40) + 0x14),4.0,7.0,7.0,
                                  "s",1.0,in_stack_ffffffffffffffa8);
              UI_SettingsAbilityPanel__UpdateElementLabel(__this,pUVar7,pSVar9,pMVar10);
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


// UI.SettingsAbilityPanel$$UpdateElementLabel
// il2cpp: void UI_SettingsAbilityPanel__UpdateElementLabel (UI_SettingsAbilityPanel_o* __this, UnityEngine_GameObject_o* element, System_String_o* newText, const MethodInfo* method);
// 0x412d480

void UI_SettingsAbilityPanel__UpdateElementLabel
               (UI_SettingsAbilityPanel_o *__this,UnityEngine_GameObject_o *element,
               System_String_o *newText,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  
  if (DAT_0570493f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570493f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)element,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (element != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponentInChildren<object>(element,MethodInfo_Text_GetComponentInChildren_Text);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      vtable_dispatch = x->klass[4]._1.gc_desc;
      (*vtable_dispatch)(x,newText,x->klass[4]._1.name,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsAbilityPanel$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___ctor (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x412d550

void UI_SettingsAbilityPanel___ctor(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


