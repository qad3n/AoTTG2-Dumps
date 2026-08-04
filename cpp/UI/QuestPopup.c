// Type: UI.QuestPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestPopup.cs
// --------------------------------

// UI.QuestPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___ctor (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x44129c0

void UI_QuestPopup___c__DisplayClass18_0___ctor
               (UI_QuestPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4412c90

void UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0
               (UI_QuestPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Threading_CancellationTokenSource_o *pSVar1;
  System_Threading_CancellationTokenSource_c *pSVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar8;
  UI_CategoryPanel_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UI_QuestPopup_o *__this_03;
  UnityEngine_Color_o UVar9;
  
  __this_03 = (__this->fields).__4__this;
  if (__this_03 != (UI_QuestPopup_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (__this_03,(__this->fields).buttonName,(__this_03->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (__this_03->fields).m_CancellationTokenSource;
  if (pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
    pSVar7 = (System_String_o *)(__this_03->fields).m_CachedPtr;
    if (g_data_057ae5f4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Back");
      g_data_057ae5f4 = '\x01';
    }
    bVar6 = System_String__op_Equality(pSVar7,"Back",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pSVar2 = pSVar1->klass;
      uVar3._0_4_ = pSVar2[1]._2.static_fields_size;
      uVar3._4_4_ = pSVar2[1]._2.thread_static_fields_size;
      (**(code **)&pSVar2[1]._2.element_size)(pSVar1,uVar3);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ResetTextColor");
    il2cpp_runtime_helper_023445d0(&"QuestHeader");
    g_data_057ae5f6 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this_03,(UI_BasePanel_o *)method,(MethodInfo *)0x0);
  __this_02 = (UI_CategoryPanel_o *)(__this_03->fields).SinglePanel;
  pSVar7 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = GameProgress_QuestHandler__GetTimeToQuestReset(0,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_02,__this_00,pSVar7,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar8 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02 = (UI_CategoryPanel_o *)
                (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar9 = UI_UIManager__GetThemeColor
                      ((System_String_o *)__this_02,"QuestHeader","ResetTextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar8 != (Il2CppObject *)0x0) {
      (*pIVar8->klass->vtable[0x17].methodPtr)(UVar9.fields._0_8_,UVar9.fields._8_8_,pIVar8);
      method_00 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pvVar4 = (TypeInfo_GameProgressManager[1].fields._categoryPanelTypes)->monitor;
      __this_02 = TypeInfo_GameProgressManager;
      if (((pvVar4 != (void *)0x0) && (lVar5 = *(long *)((long)pvVar4 + 0x28), lVar5 != 0)) &&
         (lVar5 = *(long *)(lVar5 + 0x28), lVar5 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this_03,
                   *(System_Collections_Generic_List_QuestItem__o **)(lVar5 + 0x18),method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].klass = (UI_CategoryPanel_c *)0x42c80000446b0000;
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___ctor (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4412b20

void UI_QuestPopup___c__DisplayClass21_0___ctor
               (UI_QuestPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4412cc0

void UI_QuestPopup___c__DisplayClass21_0___SetupBottomButtons_b__0
               (UI_QuestPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_QuestPopup_o *pUVar1;
  void *pvVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar6;
  UI_CategoryPanel_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar7;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_QuestPopup_o *)0x0) {
    pSVar5 = (__this->fields).buttonName;
    if (g_data_057ae5f4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Back");
      g_data_057ae5f4 = '\x01';
    }
    bVar4 = System_String__op_Equality(pSVar5,"Back",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ResetTextColor");
    il2cpp_runtime_helper_023445d0(&"QuestHeader");
    g_data_057ae5f6 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)method,(MethodInfo *)0x0);
  __this_02 = (UI_CategoryPanel_o *)(((UI_QuestCategoryPanel_o *)__this)->fields).SinglePanel;
  pSVar5 = (System_String_o *)
           (*(((UI_QuestCategoryPanel_o *)__this)->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(((UI_QuestCategoryPanel_o *)__this)->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = GameProgress_QuestHandler__GetTimeToQuestReset(0,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_02,__this_00,pSVar5,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar6 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02 = (UI_CategoryPanel_o *)
                (*(((UI_QuestCategoryPanel_o *)__this)->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(((UI_QuestCategoryPanel_o *)__this)->klass->vtable)._4_get_ThemePanel.
                                  method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar7 = UI_UIManager__GetThemeColor
                      ((System_String_o *)__this_02,"QuestHeader","ResetTextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 != (Il2CppObject *)0x0) {
      (*pIVar6->klass->vtable[0x17].methodPtr)(UVar7.fields._0_8_,UVar7.fields._8_8_,pIVar6);
      method_00 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pvVar2 = (TypeInfo_GameProgressManager[1].fields._categoryPanelTypes)->monitor;
      __this_02 = TypeInfo_GameProgressManager;
      if (((pvVar2 != (void *)0x0) && (lVar3 = *(long *)((long)pvVar2 + 0x28), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this,
                   *(System_Collections_Generic_List_QuestItem__o **)(lVar3 + 0x18),method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].klass = (UI_CategoryPanel_c *)0x42c80000446b0000;
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$get_Title
// il2cpp: System_String_o* UI_QuestPopup__get_Title (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412340

System_String_o * UI_QuestPopup__get_Title(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.QuestPopup$$get_Width
// il2cpp: float UI_QuestPopup__get_Width (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412360

float UI_QuestPopup__get_Width(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 990.0;
}


// UI.QuestPopup$$get_Height
// il2cpp: float UI_QuestPopup__get_Height (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412370

float UI_QuestPopup__get_Height(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 740.0;
}


// UI.QuestPopup$$get_CategoryPanel
// il2cpp: bool UI_QuestPopup__get_CategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412380

bool_conflict UI_QuestPopup__get_CategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestPopup$$get_CategoryButtons
// il2cpp: bool UI_QuestPopup__get_CategoryButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412390

bool_conflict UI_QuestPopup__get_CategoryButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_QuestPopup__get_DefaultCategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x44123a0

System_String_o * UI_QuestPopup__get_DefaultCategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae5ef == '\0') {
    il2cpp_runtime_helper_023445d0(&"Daily");
    g_data_057ae5ef = '\x01';
  }
  return "Daily";
}


// UI.QuestPopup$$get_UseSound
// il2cpp: bool UI_QuestPopup__get_UseSound (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x44123d0

bool_conflict UI_QuestPopup__get_UseSound(UI_QuestPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestPopup$$Setup
// il2cpp: void UI_QuestPopup__Setup (UI_QuestPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x44123e0

void UI_QuestPopup__Setup(UI_QuestPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *pUVar3;
  long lVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UI_HeadedPanel_o *pUVar6;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_Fields *pUVar7;
  UI_HeadedPanel_o *__this_03;
  ulong uVar8;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (g_data_057ae5f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5f3 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar4 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
  if (lVar4 == 0) {
label_0441262a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = "Back";
    il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar8 = 0;
      do {
        pUVar6 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
        __this_03 = pUVar6;
        System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UI_HeadedPanel_o *)0x0) goto label_0441262a;
        __this_03 = (UI_HeadedPanel_o *)&(pUVar6->fields).m_CancellationTokenSource;
        (pUVar6->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(__this_03,__this);
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto label_0441262f;
        (pUVar6->fields).m_CachedPtr = *(intptr_t *)(lVar4 + 0x20 + uVar8 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar6->fields);
        parent_00 = (__this->fields).BottomBar;
        pSVar2 = (System_String_o *)(pUVar6->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent_00,pUVar3,pSVar2,0.0,pUVar5,(MethodInfo *)0x0);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(lVar4 + 0x18));
    }
    return;
  }
label_0441262f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae5f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Achievements");
    il2cpp_runtime_helper_023445d0(&"QuestsPopup");
    il2cpp_runtime_helper_023445d0(&"Daily");
    il2cpp_runtime_helper_023445d0(&"Weekly");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5f1 = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_string;
  lVar4 = il2cpp_runtime_helper_022b2a40();
  if (lVar4 == 0) {
label_044129b5:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar4 + 0x18) != 0) {
    pUVar6 = (UI_HeadedPanel_o *)(lVar4 + 0x20);
    *(System_String_o **)(lVar4 + 0x20) = "Daily";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar4 + 0x18)) {
      pUVar6 = (UI_HeadedPanel_o *)(lVar4 + 0x28);
      *(System_String_o **)(lVar4 + 0x28) = "Weekly";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = "Achievements";
        il2cpp_runtime_helper_022b4080(lVar4 + 0x30);
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar8 = 0;
          do {
            __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
            pUVar6 = __this_01;
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_044129b5;
            pUVar6 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
            (__this_01->fields).m_CancellationTokenSource =
                 (System_Threading_CancellationTokenSource_o *)__this_03;
            il2cpp_runtime_helper_022b4080();
            if (*(uint *)(lVar4 + 0x18) <= uVar8) goto label_044129ba;
            pUVar7 = &__this_01->fields;
            (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar4 + 0x20 + uVar8 * 8);
            il2cpp_runtime_helper_022b4080(pUVar7);
            bVar1 = System_String__op_Equality
                              ((System_String_o *)(__this_01->fields).m_CachedPtr,"Daily",
                               (MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality
                                ((System_String_o *)pUVar7->m_CachedPtr,"Weekly",(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') goto label_0441288a;
              pSVar2 = (System_String_o *)pUVar7->m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
            }
            else {
label_0441288a:
              pSVar2 = (System_String_o *)pUVar7->m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = UI_UIManager__GetLocale
                                 ("MainMenu","QuestsPopup",pSVar2,"","",(MethodInfo *)0x0
                                 );
            }
            pUVar6 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
            pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_02 = (UI_HeadedPanel_o *)
                        UI_ElementFactory__CreateCategoryButton
                                  ((UnityEngine_Transform_o *)pUVar6,pUVar3,pSVar2,pUVar5,(MethodInfo *)0x0);
            if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_044129b5;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_03->fields)._topButtons;
            key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
            value = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
            pUVar6 = __this_02;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_044129b5;
            System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)*(int *)(lVar4 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_044129ba:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$CreateAchievementDropdowns
// il2cpp: void UI_QuestPopup__CreateAchievementDropdowns (UI_QuestPopup_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x440fda0

void UI_QuestPopup__CreateAchievementDropdowns
               (UI_QuestPopup_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  uint uVar4;
  Il2CppRGCTXData *pIVar5;
  UI_ElementStyle_o *__this_04;
  Il2CppRGCTXData *options;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_RawImage_o *__this_05;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar11;
  long *plVar12;
  UnityEngine_Texture_c **method_00;
  MethodInfo *extraout_RDX;
  Il2CppRGCTXData __this_06;
  Il2CppRGCTXData IVar13;
  Il2CppRGCTXData IVar14;
  Il2CppRGCTXData *__this_07;
  _union_249395 setting;
  float fVar15;
  undefined1 auVar16 [12];
  UnityEngine_Color_o UVar17;
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  GameProgress_QuestItem_o *pGVar20;
  GameProgress_QuestItem_o *item;
  undefined1 auStack_80 [16];
  GameProgress_QuestItem_o *pGStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249395 _Stack_60;
  
  if (g_data_057ae5f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateAchievementDropdowns_b__17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateAchievementDropdowns_b__17_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Gold");
    il2cpp_runtime_helper_023445d0(&"Completed");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"In Progress");
    g_data_057ae5f0 = '\x01';
    method = extraout_RDX;
  }
  pIVar5 = (Il2CppRGCTXData *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_04,0x18,0.0,20.0,(System_String_o *)pIVar5,(MethodInfo *)0x0);
  setting = (_union_249395)(__this->fields).TierSelection;
  __this_06 = (Il2CppRGCTXData)0x3;
  __this_07 = TypeInfo_string;
  options = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  IVar13 = "Bronze";
  pIStack_68 = pIVar5;
  if (options != (Il2CppRGCTXData *)0x0) {
    pIVar5 = options;
    if (*(int *)(options + 3) != 0) {
      __this_07 = options + 4;
      options[4] = "Bronze";
      il2cpp_runtime_helper_022b4080();
      IVar14 = "Silver";
      __this_06 = IVar13;
      if (1 < *(uint *)(options + 3)) {
        __this_07 = options + 5;
        options[5] = "Silver";
        il2cpp_runtime_helper_022b4080();
        __this_06 = IVar14;
        if (2 < *(uint *)(options + 3)) {
          options[6] = "Gold";
          il2cpp_runtime_helper_022b4080(options + 6);
          pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          _Stack_60.genericMethod = (void *)0x440ff87;
          UI_ElementFactory__CreateDropdownSetting
                    (panel,__this_04,setting.genericMethod,"",(System_String_array *)options,
                     "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar6,(MethodInfo *)0x0);
          setting = (_union_249395)(__this->fields).CompletedSelection;
          __this_06 = (Il2CppRGCTXData)0x2;
          __this_07 = TypeInfo_string;
          pIVar5 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
          IVar13 = "In Progress";
          pIStack_68 = options;
          if (pIVar5 == (Il2CppRGCTXData *)0x0) goto label_0441006e;
          if (*(int *)(pIVar5 + 3) != 0) {
            __this_07 = pIVar5 + 4;
            pIVar5[4] = "In Progress";
            il2cpp_runtime_helper_022b4080();
            __this_06 = IVar13;
            if (1 < *(uint *)(pIVar5 + 3)) {
              pIVar5[5] = "Completed";
              il2cpp_runtime_helper_022b4080(pIVar5 + 5);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              _Stack_60.genericMethod = (void *)0x441005a;
              UI_ElementFactory__CreateDropdownSetting
                        (panel,__this_04,setting.genericMethod,"",(System_String_array *)pIVar5,
                         "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar6,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pIStack_68 = pIVar5;
  }
label_0441006e:
  il2cpp_runtime_helper_022b2c90();
  _Stack_60 = setting;
  if (g_data_057ae5e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"Panel/Icon");
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressLabel");
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressBar/Background");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/");
    il2cpp_runtime_helper_023445d0(&"QuestItem");
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressBar/Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"Panel/CheckIcon");
    il2cpp_runtime_helper_023445d0(&"Panel/RewardLabel");
    il2cpp_runtime_helper_023445d0(&"CheckColor");
    il2cpp_runtime_helper_023445d0(&"BorderColor");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"IconColor");
    il2cpp_runtime_helper_023445d0(&"Border");
    il2cpp_runtime_helper_023445d0(&"Panel/Title");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/QuestItemPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    g_data_057ae5e9 = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  pGVar20 = (GameProgress_QuestItem_o *)0x0;
  if (__this_06.rgctxDataDummy != (void *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
               (System_Collections_Generic_List_object__o *)__this_06.method,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_80._0_8_;
    pIVar19 = (Il2CppType *)auStack_80._8_8_;
    item = pGStack_70;
    while( true ) {
      __this_00.fields._8_8_ = pIVar19;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar19;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
        __this_01.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
        return;
      }
      pGVar20 = item;
      pUVar7 = UI_ElementFactory__InstantiateAndBind
                         ((UnityEngine_Transform_o *)__this_07[4].method,"Prefabs/MainMenu/QuestItemPanel",(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) break;
      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410a62;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410a67;
      (*pIVar9->klass->vtable[0x24].methodPtr)
                (*(undefined4 *)(__this_07 + 0xd),pIVar9,pIVar9->klass->vtable[0x24].method);
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410a6c;
      (*pIVar9->klass->vtable[0x26].methodPtr)
                (*(undefined4 *)((long)__this_07 + 0x6c),pIVar9,pIVar9->klass->vtable[0x26].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/Icon",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410a71;
      __this_05 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_RawImage_GetComponent_RawImage)
      ;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (item == (GameProgress_QuestItem_o *)0x0) goto label_04410a76;
      pSVar1 = (item->fields).Icon;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_04410a7b;
      pSVar11 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      name = System_String__Concat_3af7150
                       ("Icons/Quests/",(pSVar1->fields)._value,"Icon",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (UnityEngine_Texture_c **)0x0;
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar11,name,1,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04410a80;
      if ((value != (UnityEngine_Texture_o *)0x0) && (method_00 = &TypeInfo_Texture2D, value->klass != TypeInfo_Texture2D)
         ) goto label_04410af3;
      UnityEngine_UI_RawImage__set_texture(__this_05,value,(MethodInfo *)0x0);
      UI_QuestCategoryPanel__SetTitle
                ((UI_QuestCategoryPanel_o *)__this_07,item,pUVar8,(MethodInfo *)method_00);
      pIVar5 = __this_07;
      UI_QuestCategoryPanel__SetRewardLabel
                ((UI_QuestCategoryPanel_o *)__this_07,item,pUVar8,(MethodInfo *)method_00);
      UI_QuestCategoryPanel__SetProgress
                ((UI_QuestCategoryPanel_o *)pIVar5,item,pUVar8,(MethodInfo *)method_00);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Background",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410a85;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410a8a;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/CheckIcon",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410a8f;
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      uVar4 = GameProgress_QuestItem__Finished(item,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_04410a94;
      UnityEngine_GameObject__SetActive(pUVar7,uVar4 & 0xff,(MethodInfo *)0x0);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Border",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410a99;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","BorderColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410a9e;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/Icon",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410aa3;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_RawImage_GetComponent_RawImage);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","IconColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410aa8;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/CheckIcon",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410aad;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","CheckColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410ab2;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/Title",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410ab7;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410abc;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/ProgressLabel",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410ac1;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410ac6;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/RewardLabel",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410acb;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410ad0;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/CheckIcon",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410ad5;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","IconColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410ada;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar10 = UnityEngine_Transform__Find(pUVar8,"Panel/ProgressBar/Background",(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04410adf;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","ProgressBarBackgroundColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410ae4;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"Panel/ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410ae9;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      pSVar11 = (System_String_o *)
                (*__this_07->klass->vtable[4].methodPtr)(__this_07,__this_07->klass->vtable[4].method);
      UVar17 = UI_UIManager__GetThemeColor(pSVar11,"QuestItem","ProgressBarFillColor","DefaultPanel",(MethodInfo *)0x0);
      fVar15 = UVar17.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_04410aee;
      (*pIVar9->klass->vtable[0x17].methodPtr)
                (fVar15,UVar17.fields._8_8_,pIVar9,pIVar9->klass->vtable[0x17].method);
      item = pGVar20;
    }
    il2cpp_runtime_helper_022b2c90();
label_04410a62:
    il2cpp_runtime_helper_022b2c90();
label_04410a67:
    il2cpp_runtime_helper_022b2c90();
label_04410a6c:
    il2cpp_runtime_helper_022b2c90();
label_04410a71:
    il2cpp_runtime_helper_022b2c90();
label_04410a76:
    il2cpp_runtime_helper_022b2c90();
label_04410a7b:
    il2cpp_runtime_helper_022b2c90();
label_04410a80:
    il2cpp_runtime_helper_022b2c90();
label_04410a85:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410a8a:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410a8f:
    il2cpp_runtime_helper_022b2c90();
label_04410a94:
    il2cpp_runtime_helper_022b2c90();
label_04410a99:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410a9e:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410aa3:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410aa8:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410aad:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ab2:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410ab7:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410abc:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410ac1:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ac6:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410acb:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ad0:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410ad5:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ada:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410adf:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ae4:
    il2cpp_runtime_helper_022b2c90(fVar15);
label_04410ae9:
    fVar15 = (float)il2cpp_runtime_helper_022b2c90();
label_04410aee:
    value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90(fVar15);
label_04410af3:
    il2cpp_runtime_helper_022b2fd0(value);
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar2 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar19;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_02.fields._current = (Il2CppObject *)pGVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar19;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
  __this_03.fields._current = (Il2CppObject *)pGVar20;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar16._0_8_);
}


// UI.QuestPopup$$SetupTopButtons
// il2cpp: void UI_QuestPopup__SetupTopButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412640

void UI_QuestPopup__SetupTopButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  long lVar3;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_Fields *pUVar4;
  UnityEngine_Transform_o *parent;
  ulong uVar5;
  
  if (g_data_057ae5f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Achievements");
    il2cpp_runtime_helper_023445d0(&"QuestsPopup");
    il2cpp_runtime_helper_023445d0(&"Daily");
    il2cpp_runtime_helper_023445d0(&"Weekly");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5f1 = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40();
  if (lVar3 == 0) {
label_044129b5:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar3 + 0x20);
    *(System_String_o **)(lVar3 + 0x20) = "Daily";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar3 + 0x18)) {
      parent = (UnityEngine_Transform_o *)(lVar3 + 0x28);
      *(System_String_o **)(lVar3 + 0x28) = "Weekly";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = "Achievements";
        il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar5 = 0;
          do {
            __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
            parent = __this_02;
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_044129b5;
            parent = __this_02 + 1;
            __this_02[1].klass = (UnityEngine_Transform_c *)__this;
            il2cpp_runtime_helper_022b4080();
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto label_044129ba;
            pUVar4 = &__this_02->fields;
            (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar5 * 8);
            il2cpp_runtime_helper_022b4080(pUVar4);
            bVar1 = System_String__op_Equality
                              ((System_String_o *)(__this_02->fields).m_CachedPtr,"Daily",
                               (MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality
                                ((System_String_o *)pUVar4->m_CachedPtr,"Weekly",(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') goto label_0441288a;
              pSVar2 = (System_String_o *)pUVar4->m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
            }
            else {
label_0441288a:
              pSVar2 = (System_String_o *)pUVar4->m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = UI_UIManager__GetLocale
                                 ("MainMenu","QuestsPopup",pSVar2,"","",(MethodInfo *)0x0
                                 );
            }
            parent = (__this->fields).TopBar;
            onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_03 = (UnityEngine_Transform_o *)
                        UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar2,onClick,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_044129b5;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
            value = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
            parent = __this_03;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_044129b5;
            System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)*(int *)(lVar3 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_044129ba:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$RegisterCategoryPanels
// il2cpp: void UI_QuestPopup__RegisterCategoryPanels (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x44129d0

void UI_QuestPopup__RegisterCategoryPanels(UI_QuestPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae5f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_QuestAchievementsPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_QuestDailyPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_QuestWeeklyPanel);
    il2cpp_runtime_helper_023445d0(&"Achievements");
    il2cpp_runtime_helper_023445d0(&"Daily");
    il2cpp_runtime_helper_023445d0(&"Weekly");
    g_data_057ae5f2 = '\x01';
  }
  handle.fields.value = TypeRef_QuestDailyPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"Daily",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_QuestWeeklyPanel.fields.value;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_QuestWeeklyPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Weekly",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      handle.fields.value = TypeRef_QuestAchievementsPanel.fields.value;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_QuestAchievementsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,"Achievements",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$SetupPopups
// il2cpp: void UI_QuestPopup__SetupPopups (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412b10

void UI_QuestPopup__SetupPopups(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$SetupBottomButtons
// il2cpp: void UI_QuestPopup__SetupBottomButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412400

void UI_QuestPopup__SetupBottomButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *pUVar3;
  long lVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UI_HeadedPanel_o *pUVar6;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_Fields *pUVar7;
  UI_HeadedPanel_o *__this_03;
  ulong uVar8;
  
  if (g_data_057ae5f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5f3 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar4 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
  if (lVar4 == 0) {
label_0441262a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = "Back";
    il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar8 = 0;
      do {
        pUVar6 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
        __this_03 = pUVar6;
        System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UI_HeadedPanel_o *)0x0) goto label_0441262a;
        __this_03 = (UI_HeadedPanel_o *)&(pUVar6->fields).m_CancellationTokenSource;
        (pUVar6->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(__this_03,__this);
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto label_0441262f;
        (pUVar6->fields).m_CachedPtr = *(intptr_t *)(lVar4 + 0x20 + uVar8 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar6->fields);
        parent = (__this->fields).BottomBar;
        pSVar2 = (System_String_o *)(pUVar6->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,pUVar3,pSVar2,0.0,pUVar5,(MethodInfo *)0x0);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(lVar4 + 0x18));
    }
    return;
  }
label_0441262f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae5f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Achievements");
    il2cpp_runtime_helper_023445d0(&"QuestsPopup");
    il2cpp_runtime_helper_023445d0(&"Daily");
    il2cpp_runtime_helper_023445d0(&"Weekly");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5f1 = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_string;
  lVar4 = il2cpp_runtime_helper_022b2a40();
  if (lVar4 == 0) {
label_044129b5:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar4 + 0x18) != 0) {
    pUVar6 = (UI_HeadedPanel_o *)(lVar4 + 0x20);
    *(System_String_o **)(lVar4 + 0x20) = "Daily";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar4 + 0x18)) {
      pUVar6 = (UI_HeadedPanel_o *)(lVar4 + 0x28);
      *(System_String_o **)(lVar4 + 0x28) = "Weekly";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = "Achievements";
        il2cpp_runtime_helper_022b4080(lVar4 + 0x30);
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar8 = 0;
          do {
            __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
            pUVar6 = __this_01;
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_044129b5;
            pUVar6 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
            (__this_01->fields).m_CancellationTokenSource =
                 (System_Threading_CancellationTokenSource_o *)__this_03;
            il2cpp_runtime_helper_022b4080();
            if (*(uint *)(lVar4 + 0x18) <= uVar8) goto label_044129ba;
            pUVar7 = &__this_01->fields;
            (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar4 + 0x20 + uVar8 * 8);
            il2cpp_runtime_helper_022b4080(pUVar7);
            bVar1 = System_String__op_Equality
                              ((System_String_o *)(__this_01->fields).m_CachedPtr,"Daily",
                               (MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality
                                ((System_String_o *)pUVar7->m_CachedPtr,"Weekly",(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') goto label_0441288a;
              pSVar2 = (System_String_o *)pUVar7->m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
            }
            else {
label_0441288a:
              pSVar2 = (System_String_o *)pUVar7->m_CachedPtr;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = UI_UIManager__GetLocale
                                 ("MainMenu","QuestsPopup",pSVar2,"","",(MethodInfo *)0x0
                                 );
            }
            pUVar6 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
            pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_02 = (UI_HeadedPanel_o *)
                        UI_ElementFactory__CreateCategoryButton
                                  ((UnityEngine_Transform_o *)pUVar6,pUVar3,pSVar2,pUVar5,(MethodInfo *)0x0);
            if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_044129b5;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_03->fields)._topButtons;
            key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
            value = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
            pUVar6 = __this_02;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_044129b5;
            System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)*(int *)(lVar4 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_044129ba:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$OnBottomBarButtonClick
// il2cpp: void UI_QuestPopup__OnBottomBarButtonClick (UI_QuestPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4412b30

void UI_QuestPopup__OnBottomBarButtonClick(UI_QuestPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae5f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5f4 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.QuestPopup$$.ctor
// il2cpp: void UI_QuestPopup___ctor (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412ba0

void UI_QuestPopup___ctor(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (g_data_057ae5f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"In Progress");
    g_data_057ae5f5 = '\x01';
  }
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"Bronze",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TierSelection = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TierSelection,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"In Progress",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CompletedSelection = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CompletedSelection);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_0
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_0 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412c70

void UI_QuestPopup___CreateAchievementDropdowns_b__17_0(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_1
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_1 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x4412c80

void UI_QuestPopup___CreateAchievementDropdowns_b__17_1(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


