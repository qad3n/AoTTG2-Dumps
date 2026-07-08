// Type: UI.QuestAchievementsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/QuestAchievementsPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/QuestAchievementsPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.QuestAchievementsPanel$$get_ScrollBar
// il2cpp: bool UI_QuestAchievementsPanel__get_ScrollBar (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x40fad10

bool_conflict
UI_QuestAchievementsPanel__get_ScrollBar(UI_QuestAchievementsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestAchievementsPanel$$Setup
// il2cpp: void UI_QuestAchievementsPanel__Setup (UI_QuestAchievementsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fad20

void UI_QuestAchievementsPanel__Setup
               (UI_QuestAchievementsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  GameProgress_AchievementContainer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_StringSetting_o *pSVar5;
  GameProgress_QuestItem_array *pGVar6;
  int iVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t top;
  int32_t bottom;
  bool_conflict bVar8;
  UnityEngine_UI_LayoutGroup_o *pUVar9;
  UnityEngine_RectOffset_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Transform_o *pUVar14;
  GameProgress_AchievementCount_o *pGVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_Collections_Generic_List_QuestItem__o *items;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o UVar18;
  undefined8 in_stack_ffffffffffffff88;
  UI_QuestAchievementsPanel_o *pUVar19;
  UI_QuestAchievementsPanel_o *__this_05;
  System_Collections_Generic_List_Enumerator_T__c *pSVar20;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_0570484c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AchievementItem_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_List_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_QuestPopup);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem__get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"BronzeColor");
    il2cpp_init_method_metadata(&"Trophy");
    il2cpp_init_method_metadata(&"LeftPanel");
    il2cpp_init_method_metadata(&"RightPanel/TrophyCountBronze/Label");
    il2cpp_init_method_metadata(&"GoldColor");
    il2cpp_init_method_metadata(&"RightPanel/TrophyCountSilver/Image");
    il2cpp_init_method_metadata(&"SilverColor");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"RightPanel/TrophyCountGold/Image");
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/AchievementHeader");
    il2cpp_init_method_metadata(&"RightPanel/TrophyCountBronze/Image");
    il2cpp_init_method_metadata(&"RightPanel/TrophyCountSilver/Label");
    il2cpp_init_method_metadata(&"Completed");
    il2cpp_init_method_metadata(&"In Progress");
    il2cpp_init_method_metadata(&"RightPanel/TrophyCountGold/Label");
    DAT_0570484c = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar12 = (__this->fields).SinglePanel;
  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
    pUVar9 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar12,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    pUVar10 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor(pUVar10,10,0x19,top,bottom,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar9,pUVar10,(MethodInfo *)0x0);
      pUVar11 = UI_ElementFactory__InstantiateAndBind
                          ((__this->fields).SinglePanel,"Prefabs/MainMenu/AchievementHeader",(MethodInfo *)0x0);
      if (((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
          (pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
          pUVar12 != (UnityEngine_Transform_o *)0x0)) &&
         (pIVar13 = UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement),
         pIVar13 != (Il2CppObject *)0x0)) {
        (*pIVar13->klass->vtable[0x24].methodPtr)
                  ((__this->fields).QuestItemWidth,pIVar13,pIVar13->klass->vtable[0x24].method);
        pUVar9 = (UnityEngine_UI_LayoutGroup_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar12,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
        pUVar10 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
        UnityEngine_RectOffset___ctor(pUVar10,10,10,0,0,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_padding(pUVar9,pUVar10,(MethodInfo *)0x0);
          if (parent == (UI_BasePanel_o *)0x0) {
            UnityEngine_Transform__Find(pUVar12,"LeftPanel",(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar2 = (TypeInfo_QuestPopup->_2).naturalAligment;
          if (((parent->klass->_2).naturalAligment < bVar2) ||
             ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_QuestPopup)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(parent);
          }
          pUVar14 = UnityEngine_Transform__Find(pUVar12,"LeftPanel",(MethodInfo *)0x0);
          UI_QuestPopup__CreateAchievementDropdowns((UI_QuestPopup_o *)parent,pUVar14,method_00);
          if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar4 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
          if ((lVar4 != 0) &&
             (__this_00 = *(GameProgress_AchievementContainer_o **)(lVar4 + 0x20),
             __this_00 != (GameProgress_AchievementContainer_o *)0x0)) {
            pGVar15 = GameProgress_AchievementContainer__GetAchievementCount
                                (__this_00,(MethodInfo *)0x0);
            pUVar14 = UnityEngine_Transform__Find(pUVar12,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0);
            if ((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
               (pIVar13 = UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar14,MethodInfo_Text_GetComponent_Text),
               pGVar15 != (GameProgress_AchievementCount_o *)0x0)) {
              iVar7 = (int)pGVar15;
              pSVar16 = System_Int32__ToString(iVar7 + 0x10,(MethodInfo *)0x0);
              pSVar17 = System_Int32__ToString(iVar7 + 0x14,(MethodInfo *)0x0);
              pSVar16 = System_String__Concat(pSVar16,"/",pSVar17,(MethodInfo *)0x0);
              if (pIVar13 != (Il2CppObject *)0x0) {
                (*pIVar13->klass->vtable[0x4b].methodPtr)
                          (pIVar13,pSVar16,pIVar13->klass->vtable[0x4b].method);
                pUVar14 = UnityEngine_Transform__Find(pUVar12,"RightPanel/TrophyCountSilver/Label",(MethodInfo *)0x0);
                if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                  pIVar13 = UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar14,MethodInfo_Text_GetComponent_Text);
                  pSVar16 = System_Int32__ToString(iVar7 + 0x18,(MethodInfo *)0x0);
                  pSVar17 = System_Int32__ToString(iVar7 + 0x1c,(MethodInfo *)0x0);
                  pSVar16 = System_String__Concat(pSVar16,"/",pSVar17,(MethodInfo *)0x0);
                  if (pIVar13 != (Il2CppObject *)0x0) {
                    (*pIVar13->klass->vtable[0x4b].methodPtr)
                              (pIVar13,pSVar16,pIVar13->klass->vtable[0x4b].method);
                    pUVar14 = UnityEngine_Transform__Find(pUVar12,"RightPanel/TrophyCountGold/Label",(MethodInfo *)0x0);
                    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                      pIVar13 = UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pUVar14,MethodInfo_Text_GetComponent_Text);
                      pSVar16 = System_Int32__ToString(iVar7 + 0x20,(MethodInfo *)0x0);
                      pSVar17 = System_Int32__ToString(iVar7 + 0x24,(MethodInfo *)0x0);
                      pSVar16 = System_String__Concat
                                          (pSVar16,"/",pSVar17,(MethodInfo *)0x0);
                      if (pIVar13 != (Il2CppObject *)0x0) {
                        (*pIVar13->klass->vtable[0x4b].methodPtr)
                                  (pIVar13,pSVar16,pIVar13->klass->vtable[0x4b].method);
                        pUVar14 = UnityEngine_Transform__Find
                                            (pUVar12,"RightPanel/TrophyCountBronze/Image",(MethodInfo *)0x0);
                        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                          pUVar19 = __this;
                          pIVar13 = UnityEngine_Component__GetComponent<object>
                                              ((UnityEngine_Component_o *)pUVar14,MethodInfo_Image_GetComponent_Image);
                          pSVar16 = (System_String_o *)
                                    (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                              (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                      method);
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          UVar18 = UI_UIManager__GetThemeColor
                                             (pSVar16,"Trophy","BronzeColor","DefaultPanel",
                                              (MethodInfo *)0x0);
                          if (pIVar13 != (Il2CppObject *)0x0) {
                            (*pIVar13->klass->vtable[0x17].methodPtr)
                                      (UVar18.fields.r,UVar18.fields._8_8_,pIVar13,
                                       pIVar13->klass->vtable[0x17].method);
                            pUVar14 = UnityEngine_Transform__Find
                                                (pUVar12,"RightPanel/TrophyCountSilver/Image",(MethodInfo *)0x0);
                            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                              __this_05 = pUVar19;
                              pIVar13 = UnityEngine_Component__GetComponent<object>
                                                  ((UnityEngine_Component_o *)pUVar14,MethodInfo_Image_GetComponent_Image);
                              pSVar16 = (System_String_o *)
                                        (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                  (pUVar19,(pUVar19->klass->vtable).
                                                           _4_get_ThemePanel.method);
                              UVar18 = UI_UIManager__GetThemeColor
                                                 (pSVar16,"Trophy","SilverColor","DefaultPanel",
                                                  (MethodInfo *)0x0);
                              if (pIVar13 != (Il2CppObject *)0x0) {
                                (*pIVar13->klass->vtable[0x17].methodPtr)
                                          (UVar18.fields.r,UVar18.fields._8_8_,pIVar13,
                                           pIVar13->klass->vtable[0x17].method);
                                pUVar14 = UnityEngine_Transform__Find
                                                    (pUVar12,"RightPanel/TrophyCountGold/Image",(MethodInfo *)0x0);
                                if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                  pIVar13 = UnityEngine_Component__GetComponent<object>
                                                      ((UnityEngine_Component_o *)pUVar14,
                                                       MethodInfo_Image_GetComponent_Image);
                                  pSVar16 = (System_String_o *)
                                            (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                      (pUVar19,(pUVar19->klass->vtable).
                                                               _4_get_ThemePanel.method);
                                  UVar18 = UI_UIManager__GetThemeColor
                                                     (pSVar16,"Trophy","GoldColor","DefaultPanel"
                                                      ,(MethodInfo *)0x0);
                                  if (pIVar13 != (Il2CppObject *)0x0) {
                                    (*pIVar13->klass->vtable[0x17].methodPtr)
                                              (UVar18.fields.r,UVar18.fields._8_8_,pIVar13,
                                               pIVar13->klass->vtable[0x17].method);
                                    pUVar14 = UnityEngine_Transform__Find
                                                        (pUVar12,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0);
                                    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                      pIVar13 = UnityEngine_Component__GetComponent<object>
                                                          ((UnityEngine_Component_o *)pUVar14,
                                                           MethodInfo_Text_GetComponent_Text);
                                      pSVar16 = (System_String_o *)
                                                (*(pUVar19->klass->vtable)._4_get_ThemePanel.
                                                  methodPtr)(pUVar19,(pUVar19->klass->vtable).
                                                                     _4_get_ThemePanel.method);
                                      UVar18 = UI_UIManager__GetThemeColor
                                                         (pSVar16,"Trophy","TextColor",
                                                          "DefaultPanel",(MethodInfo *)0x0);
                                      if (pIVar13 != (Il2CppObject *)0x0) {
                                        (*pIVar13->klass->vtable[0x17].methodPtr)
                                                  (UVar18.fields.r,UVar18.fields._8_8_,pIVar13,
                                                   pIVar13->klass->vtable[0x17].method);
                                        pUVar14 = UnityEngine_Transform__Find
                                                            (pUVar12,"RightPanel/TrophyCountSilver/Label",(MethodInfo *)0x0)
                                        ;
                                        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                          pIVar13 = UnityEngine_Component__GetComponent<object>
                                                              ((UnityEngine_Component_o *)pUVar14,
                                                               MethodInfo_Text_GetComponent_Text);
                                          pSVar16 = (System_String_o *)
                                                    (*(pUVar19->klass->vtable)._4_get_ThemePanel.
                                                      methodPtr)(pUVar19,(pUVar19->klass->vtable).
                                                                         _4_get_ThemePanel.method);
                                          UVar18 = UI_UIManager__GetThemeColor
                                                             (pSVar16,"Trophy","TextColor",
                                                              "DefaultPanel",(MethodInfo *)0x0);
                                          if (pIVar13 != (Il2CppObject *)0x0) {
                                            (*pIVar13->klass->vtable[0x17].methodPtr)
                                                      (UVar18.fields.r,UVar18.fields._8_8_,pIVar13,
                                                       pIVar13->klass->vtable[0x17].method);
                                            pUVar12 = UnityEngine_Transform__Find
                                                                (pUVar12,"RightPanel/TrophyCountGold/Label",
                                                                 (MethodInfo *)0x0);
                                            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                                              pIVar13 = UnityEngine_Component__GetComponent<object>
                                                                  ((UnityEngine_Component_o *)
                                                                   pUVar12,MethodInfo_Text_GetComponent_Text);
                                              pSVar16 = (System_String_o *)
                                                        (*(pUVar19->klass->vtable)._4_get_ThemePanel
                                                          .methodPtr)(pUVar19,(pUVar19->klass->
                                                                              vtable).
                                                  _4_get_ThemePanel.method);
                                              UVar18 = UI_UIManager__GetThemeColor
                                                                 (pSVar16,"Trophy","TextColor",
                                                                  "DefaultPanel",(MethodInfo *)0x0);
                                              if (pIVar13 != (Il2CppObject *)0x0) {
                                                (*pIVar13->klass->vtable[0x17].methodPtr)
                                                          (UVar18.fields.r,UVar18.fields._8_8_,
                                                           pIVar13,pIVar13->klass->vtable[0x17].
                                                                   method);
                                                items = (
                                                  System_Collections_Generic_List_QuestItem__o *)
                                                  il2cpp_runtime_glue(TypeInfo_List_QuestItem);
                                                System_Collections_Generic_List<object>___ctor
                                                          ((
                                                  System_Collections_Generic_List_object__o *)items,
                                                  MethodInfo_List_1_GameProgress_QuestItem);
                                                lVar4 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8
                                                                 );
                                                if ((((lVar4 != 0) &&
                                                     (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0))
                                                    && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)
                                                    ) && (__this_01 = *(
                                                  System_Collections_Generic_List_object__o **)
                                                  (lVar4 + 0x18),
                                                  __this_01 !=
                                                  (System_Collections_Generic_List_object__o *)0x0))
                                                {
                                                  System_Collections_Generic_List<object>__GetEnumerator
                                                            (&SStack_48,__this_01,MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
                                                  pSVar20 = (
                                                  System_Collections_Generic_List_Enumerator_T__c *)
                                                  SStack_48.fields._list;
                                                  if (items == (
                                                  System_Collections_Generic_List_QuestItem__o *)0x0
                                                  ) {
                                                    while (__this_02.fields._8_8_ = __this_05,
                                                          __this_02.fields._list =
                                                               (System_Collections_Generic_List_T__o
                                                                *)in_stack_ffffffffffffff88,
                                                          __this_02.fields._current =
                                                               (Il2CppObject *)pSVar20,
                                                          bVar8 = 
                                                  System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                            (__this_02,
                                                             (MethodInfo_3185E20 *)
                                                             &stack0xffffffffffffff98),
                                                  (char)bVar8 != '\0') {
                                                    pUVar11 = parent[1].fields._currentCategoryPanel
                                                    ;
                                                    if (pUVar11 == (UnityEngine_GameObject_o *)0x0)
                                                    {
LAB_040fb8a8:
                    /* WARNING: Subroutine does not return */
                                                      il2cpp_raise_exception();
                                                    }
                                                    if ((GameProgress_QuestItem_o *)
                                                        SStack_48.fields._current ==
                                                        (GameProgress_QuestItem_o *)0x0) {
LAB_040fb8ad:
                    /* WARNING: Subroutine does not return */
                                                      il2cpp_raise_exception();
                                                    }
                                                    if (((GameProgress_QuestItem_o *)
                                                        ((long)SStack_48.fields._current + 0x70))->
                                                        klass == (GameProgress_QuestItem_c *)0x0) {
LAB_040fb8a3:
                    /* WARNING: Subroutine does not return */
                                                      il2cpp_raise_exception();
                                                    }
                                                    bVar8 = System_String__op_Inequality
                                                                      ((System_String_o *)
                                                                       pUVar11[1].klass,
                                                                       (System_String_o *)
                                                                       (((GameProgress_QuestItem_o *
                                                                         )((long)SStack_48.fields.
                                                                                 _current + 0x70))->
                                                                        klass->_1).namespaze,
                                                                       (MethodInfo *)0x0);
                                                    if ((char)bVar8 == '\0') {
                                                      pSVar5 = parent[1].fields.
                                                               _currentCategoryPanelName;
                                                      if (pSVar5 == (Settings_StringSetting_o *)0x0)
                                                      {
LAB_040fb8b2:
                    /* WARNING: Subroutine does not return */
                                                        il2cpp_raise_exception();
                                                      }
                                                      bVar8 = System_String__op_Equality
                                                                        ((pSVar5->fields)._value,
                                                                         "Completed",
                                                                         (MethodInfo *)0x0);
                                                      if (((char)bVar8 == '\0') ||
                                                         (bVar8 = GameProgress_QuestItem__Finished
                                                                            ((
                                                  GameProgress_QuestItem_o *)
                                                  SStack_48.fields._current,(MethodInfo *)0x0),
                                                  (char)bVar8 != '\0')) {
                                                    pSVar5 = parent[1].fields.
                                                             _currentCategoryPanelName;
                                                    if (pSVar5 == (Settings_StringSetting_o *)0x0) {
LAB_040fb8b7:
                    /* WARNING: Subroutine does not return */
                                                      il2cpp_raise_exception();
                                                    }
                                                    bVar8 = System_String__op_Equality
                                                                      ((pSVar5->fields)._value,
                                                                       "In Progress",
                                                                       (MethodInfo *)0x0);
                                                    if (((char)bVar8 == '\0') ||
                                                       (bVar8 = GameProgress_QuestItem__Finished
                                                                          ((GameProgress_QuestItem_o
                                                                            *)SStack_48.fields.
                                                                              _current,
                                                                           (MethodInfo *)0x0),
                                                       (char)bVar8 == '\0')) {
                    /* WARNING: Subroutine does not return */
                                                      il2cpp_raise_exception();
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    while (__this_03.fields._8_8_ = __this_05,
                                                          __this_03.fields._list =
                                                               (System_Collections_Generic_List_T__o
                                                                *)in_stack_ffffffffffffff88,
                                                          __this_03.fields._current =
                                                               (Il2CppObject *)pSVar20,
                                                          bVar8 = 
                                                  System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                            (__this_03,
                                                             (MethodInfo_3185E20 *)
                                                             &stack0xffffffffffffff98),
                                                  (char)bVar8 != '\0') {
                                                    pUVar11 = parent[1].fields._currentCategoryPanel
                                                    ;
                                                    if (pUVar11 == (UnityEngine_GameObject_o *)0x0)
                                                    goto LAB_040fb8a8;
                                                    if ((GameProgress_QuestItem_o *)
                                                        SStack_48.fields._current ==
                                                        (GameProgress_QuestItem_o *)0x0)
                                                    goto LAB_040fb8ad;
                                                    if (((GameProgress_QuestItem_o *)
                                                        ((long)SStack_48.fields._current + 0x70))->
                                                        klass == (GameProgress_QuestItem_c *)0x0)
                                                    goto LAB_040fb8a3;
                                                    bVar8 = System_String__op_Inequality
                                                                      ((System_String_o *)
                                                                       pUVar11[1].klass,
                                                                       (System_String_o *)
                                                                       (((GameProgress_QuestItem_o *
                                                                         )((long)SStack_48.fields.
                                                                                 _current + 0x70))->
                                                                        klass->_1).namespaze,
                                                                       (MethodInfo *)0x0);
                                                    if ((char)bVar8 == '\0') {
                                                      pSVar5 = parent[1].fields.
                                                               _currentCategoryPanelName;
                                                      if (pSVar5 == (Settings_StringSetting_o *)0x0)
                                                      goto LAB_040fb8b2;
                                                      bVar8 = System_String__op_Equality
                                                                        ((pSVar5->fields)._value,
                                                                         "Completed",
                                                                         (MethodInfo *)0x0);
                                                      if (((char)bVar8 == '\0') ||
                                                         (bVar8 = GameProgress_QuestItem__Finished
                                                                            ((
                                                  GameProgress_QuestItem_o *)
                                                  SStack_48.fields._current,(MethodInfo *)0x0),
                                                  (char)bVar8 != '\0')) {
                                                    pSVar5 = parent[1].fields.
                                                             _currentCategoryPanelName;
                                                    if (pSVar5 == (Settings_StringSetting_o *)0x0)
                                                    goto LAB_040fb8b7;
                                                    bVar8 = System_String__op_Equality
                                                                      ((pSVar5->fields)._value,
                                                                       "In Progress",
                                                                       (MethodInfo *)0x0);
                                                    if (((char)bVar8 == '\0') ||
                                                       (bVar8 = GameProgress_QuestItem__Finished
                                                                          ((GameProgress_QuestItem_o
                                                                            *)SStack_48.fields.
                                                                              _current,
                                                                           (MethodInfo *)0x0),
                                                       (char)bVar8 == '\0')) {
                                                      lVar4 = MethodInfo_Void_Add;
                                                      piVar1 = &(items->fields)._version;
                                                      *piVar1 = *piVar1 + 1;
                                                      pGVar6 = (items->fields)._items;
                                                      if (pGVar6 == (GameProgress_QuestItem_array *)
                                                                    0x0) {
                    /* WARNING: Subroutine does not return */
                                                        il2cpp_raise_exception();
                                                      }
                                                      uVar3 = (items->fields)._size;
                                                      if (uVar3 < (uint)pGVar6->max_length) {
                                                        (items->fields)._size = uVar3 + 1;
                                                        pGVar6->m_Items[(int)uVar3] =
                                                             (GameProgress_QuestItem_o *)
                                                             SStack_48.fields._current;
                                                        il2cpp_runtime_glue(pGVar6->m_Items +
                                                                           (int)uVar3,
                                                                           SStack_48.fields._current
                                                                          );
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)items,
                                                  SStack_48.fields._current,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  __this_04.fields._8_8_ = __this_05;
                                                  __this_04.fields._list =
                                                       (System_Collections_Generic_List_T__o *)
                                                       in_stack_ffffffffffffff88;
                                                  __this_04.fields._current =
                                                       (Il2CppObject *)pSVar20;
                                                  System_Collections_Generic_List_Enumerator<object>__Dispose
                                                            (__this_04,
                                                             (MethodInfo_3185E10 *)
                                                             &stack0xffffffffffffff98);
                                                  UI_QuestCategoryPanel__CreateQuestItems
                                                            ((UI_QuestCategoryPanel_o *)__this_05,
                                                             items,method_01);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestAchievementsPanel$$.ctor
// il2cpp: void UI_QuestAchievementsPanel___ctor (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x40fce50

void UI_QuestAchievementsPanel___ctor(UI_QuestAchievementsPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


