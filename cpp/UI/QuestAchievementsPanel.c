// Type: UI.QuestAchievementsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestAchievementsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestAchievementsPanel.cs
// --------------------------------

// UI.QuestAchievementsPanel$$get_ScrollBar
// il2cpp: bool UI_QuestAchievementsPanel__get_ScrollBar (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x440f050

bool_conflict UI_QuestAchievementsPanel__get_ScrollBar(UI_QuestAchievementsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestAchievementsPanel$$Setup
// il2cpp: void UI_QuestAchievementsPanel__Setup (UI_QuestAchievementsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440f060

void UI_QuestAchievementsPanel__Setup
               (UI_QuestAchievementsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  GameProgress_AchievementContainer_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_StringSetting_o *pSVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  long lVar7;
  int32_t top;
  int32_t bottom;
  bool_conflict bVar8;
  UnityEngine_RectOffset_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_LayoutGroup_o *__this_07;
  Il2CppObject *pIVar11;
  UnityEngine_UI_LayoutGroup_o *__this_08;
  UnityEngine_Transform_o *pUVar12;
  GameProgress_AchievementCount_o *pGVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  long *plVar16;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  UnityEngine_UI_LayoutGroup_o *unaff_R15;
  UnityEngine_Color_o UVar17;
  undefined1 auVar18 [12];
  undefined8 in_stack_ffffffffffffff88;
  UI_QuestAchievementsPanel_o *in_stack_ffffffffffffff90;
  UI_QuestAchievementsPanel_o *pUVar19;
  System_Collections_Generic_List_Enumerator_T__c *pSVar20;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057ae5e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AchievementItem_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_QuestItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BronzeColor");
    il2cpp_runtime_helper_023445d0(&"Trophy");
    il2cpp_runtime_helper_023445d0(&"LeftPanel");
    il2cpp_runtime_helper_023445d0(&"RightPanel/TrophyCountBronze/Label");
    il2cpp_runtime_helper_023445d0(&"GoldColor");
    il2cpp_runtime_helper_023445d0(&"RightPanel/TrophyCountSilver/Image");
    il2cpp_runtime_helper_023445d0(&"SilverColor");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"RightPanel/TrophyCountGold/Image");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/AchievementHeader");
    il2cpp_runtime_helper_023445d0(&"RightPanel/TrophyCountBronze/Image");
    il2cpp_runtime_helper_023445d0(&"RightPanel/TrophyCountSilver/Label");
    il2cpp_runtime_helper_023445d0(&"Completed");
    il2cpp_runtime_helper_023445d0(&"In Progress");
    il2cpp_runtime_helper_023445d0(&"RightPanel/TrophyCountGold/Label");
    g_data_057ae5e7 = '\x01';
  }
  pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar12 = (__this->fields).SinglePanel;
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
label_0440fbde:
    il2cpp_runtime_helper_022b2c90();
label_0440fbe3:
    il2cpp_runtime_helper_022b2c90();
label_0440fbe8:
    il2cpp_runtime_helper_022b2c90();
label_0440fbed:
    il2cpp_runtime_helper_022b2c90();
label_0440fbf2:
    il2cpp_runtime_helper_022b2c90();
label_0440fbf7:
    il2cpp_runtime_helper_022b2c90();
label_0440fbfc:
    il2cpp_runtime_helper_022b2c90();
label_0440fc01:
    il2cpp_runtime_helper_022b2c90();
label_0440fc06:
    il2cpp_runtime_helper_022b2fd0(parent);
  }
  else {
    unaff_R15 = (UnityEngine_UI_LayoutGroup_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    pUVar9 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(pUVar9,10,0x19,top,bottom,(MethodInfo *)0x0);
    if (unaff_R15 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto label_0440fbde;
    UnityEngine_UI_LayoutGroup__set_padding(unaff_R15,pUVar9,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__InstantiateAndBind
                        ((__this->fields).SinglePanel,"Prefabs/MainMenu/AchievementHeader",(MethodInfo *)0x0);
    if (((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
        (__this_07 = (UnityEngine_UI_LayoutGroup_o *)
                     UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
        __this_07 == (UnityEngine_UI_LayoutGroup_o *)0x0)) ||
       (pIVar11 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_07,MethodInfo_LayoutElement_GetComponent_LayoutElement), unaff_R15 = __this_07,
       pIVar11 == (Il2CppObject *)0x0)) goto label_0440fbde;
    (*pIVar11->klass->vtable[0x24].methodPtr)
              ((__this->fields).QuestItemWidth,pIVar11,pIVar11->klass->vtable[0x24].method);
    __this_08 = (UnityEngine_UI_LayoutGroup_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_07,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup)
    ;
    pUVar9 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(pUVar9,10,10,0,0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff90 = __this;
    if (__this_08 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto label_0440fbde;
    UnityEngine_UI_LayoutGroup__set_padding(__this_08,pUVar9,(MethodInfo *)0x0);
    in_stack_ffffffffffffff90 = __this;
    if (parent != (UI_BasePanel_o *)0x0) {
      bVar2 = (TypeInfo_QuestPopup->_2).naturalAligment;
      if ((bVar2 <= (parent->klass->_2).naturalAligment) &&
         ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_QuestPopup)) {
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"LeftPanel",(MethodInfo *)0x0);
        UI_QuestPopup__CreateAchievementDropdowns((UI_QuestPopup_o *)parent,pUVar12,method_00);
        if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar4 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
        in_stack_ffffffffffffff90 = __this;
        if ((lVar4 == 0) ||
           (__this_00 = *(GameProgress_AchievementContainer_o **)(lVar4 + 0x20),
           __this_00 == (GameProgress_AchievementContainer_o *)0x0)) goto label_0440fbde;
        pGVar13 = GameProgress_AchievementContainer__GetAchievementCount(__this_00,(MethodInfo *)0x0);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
           (pIVar11 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text),
           in_stack_ffffffffffffff90 = __this, pGVar13 == (GameProgress_AchievementCount_o *)0x0))
        goto label_0440fbde;
        iVar6 = (int)pGVar13;
        pSVar14 = System_Int32__ToString(iVar6 + 0x10,(MethodInfo *)0x0);
        pSVar15 = System_Int32__ToString(iVar6 + 0x14,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar15,(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x4b].methodPtr)(pIVar11,pSVar14,pIVar11->klass->vtable[0x4b].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountSilver/Label",(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text)
        ;
        pSVar14 = System_Int32__ToString(iVar6 + 0x18,(MethodInfo *)0x0);
        pSVar15 = System_Int32__ToString(iVar6 + 0x1c,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar15,(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x4b].methodPtr)(pIVar11,pSVar14,pIVar11->klass->vtable[0x4b].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountGold/Label",(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text)
        ;
        pSVar14 = System_Int32__ToString(iVar6 + 0x20,(MethodInfo *)0x0);
        pSVar15 = System_Int32__ToString(iVar6 + 0x24,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar15,(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x4b].methodPtr)(pIVar11,pSVar14,pIVar11->klass->vtable[0x4b].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountBronze/Image",(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = __this;
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pUVar19 = __this;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Image_GetComponent_Image)
        ;
        pSVar14 = (System_String_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar17 = UI_UIManager__GetThemeColor(pSVar14,"Trophy","BronzeColor","DefaultPanel",(MethodInfo *)0x0)
        ;
        in_stack_ffffffffffffff90 = pUVar19;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x17].methodPtr)
                  (UVar17.fields.r,UVar17.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountSilver/Image",(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = pUVar19;
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Image_GetComponent_Image)
        ;
        pSVar14 = (System_String_o *)
                  (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (pUVar19,(pUVar19->klass->vtable)._4_get_ThemePanel.method);
        UVar17 = UI_UIManager__GetThemeColor(pSVar14,"Trophy","SilverColor","DefaultPanel",(MethodInfo *)0x0)
        ;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x17].methodPtr)
                  (UVar17.fields.r,UVar17.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountGold/Image",(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Image_GetComponent_Image)
        ;
        pSVar14 = (System_String_o *)
                  (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (pUVar19,(pUVar19->klass->vtable)._4_get_ThemePanel.method);
        UVar17 = UI_UIManager__GetThemeColor(pSVar14,"Trophy","GoldColor","DefaultPanel",(MethodInfo *)0x0)
        ;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x17].methodPtr)
                  (UVar17.fields.r,UVar17.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text)
        ;
        pSVar14 = (System_String_o *)
                  (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (pUVar19,(pUVar19->klass->vtable)._4_get_ThemePanel.method);
        UVar17 = UI_UIManager__GetThemeColor(pSVar14,"Trophy","TextColor","DefaultPanel",(MethodInfo *)0x0)
        ;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x17].methodPtr)
                  (UVar17.fields.r,UVar17.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountSilver/Label",(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text)
        ;
        pSVar14 = (System_String_o *)
                  (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (pUVar19,(pUVar19->klass->vtable)._4_get_ThemePanel.method);
        UVar17 = UI_UIManager__GetThemeColor(pSVar14,"Trophy","TextColor","DefaultPanel",(MethodInfo *)0x0)
        ;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x17].methodPtr)
                  (UVar17.fields.r,UVar17.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method);
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_07,"RightPanel/TrophyCountGold/Label",(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_0440fbde;
        pIVar11 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text)
        ;
        pSVar14 = (System_String_o *)
                  (*(pUVar19->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (pUVar19,(pUVar19->klass->vtable)._4_get_ThemePanel.method);
        UVar17 = UI_UIManager__GetThemeColor(pSVar14,"Trophy","TextColor","DefaultPanel",(MethodInfo *)0x0)
        ;
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0440fbde;
        (*pIVar11->klass->vtable[0x17].methodPtr)
                  (UVar17.fields.r,UVar17.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method);
        unaff_R15 = (UnityEngine_UI_LayoutGroup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_QuestItem);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)unaff_R15,MethodInfo_List_1_GameProgress_QuestItem);
        lVar4 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
        if ((((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
            (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
           (__this_01 = *(System_Collections_Generic_List_object__o **)(lVar4 + 0x18),
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0440fbde;
        System_Collections_Generic_List_object___GetEnumerator(&SStack_48,__this_01,MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
        pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
        if (unaff_R15 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          while (__this_03.fields._8_8_ = in_stack_ffffffffffffff90,
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
                __this_03.fields._current = (Il2CppObject *)pSVar20,
                bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar8 != '\0') {
            pUVar10 = parent[1].fields._currentCategoryPanel;
            if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_0440fbe8;
            if ((GameProgress_QuestItem_o *)SStack_48.fields._current == (GameProgress_QuestItem_o *)0x0)
            goto label_0440fbed;
            if (((GameProgress_QuestItem_o *)((long)SStack_48.fields._current + 0x70))->klass ==
                (GameProgress_QuestItem_c *)0x0) goto label_0440fbe3;
            bVar8 = System_String__op_Inequality
                              ((System_String_o *)pUVar10[1].klass,
                               (System_String_o *)
                               (((GameProgress_QuestItem_o *)((long)SStack_48.fields._current + 0x70))->klass
                               ->_1).namespaze,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              pSVar5 = parent[1].fields._currentCategoryPanelName;
              if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0440fbf2;
              bVar8 = System_String__op_Equality((pSVar5->fields)._value,"Completed",(MethodInfo *)0x0);
              if (((char)bVar8 == '\0') ||
                 (bVar8 = GameProgress_QuestItem__Finished
                                    ((GameProgress_QuestItem_o *)SStack_48.fields._current,(MethodInfo *)0x0),
                 (char)bVar8 != '\0')) {
                pSVar5 = parent[1].fields._currentCategoryPanelName;
                if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0440fbf7;
                bVar8 = System_String__op_Equality((pSVar5->fields)._value,"In Progress",(MethodInfo *)0x0);
                if (((char)bVar8 == '\0') ||
                   (bVar8 = GameProgress_QuestItem__Finished
                                      ((GameProgress_QuestItem_o *)SStack_48.fields._current,(MethodInfo *)0x0
                                      ), (char)bVar8 == '\0')) {
                  lVar7 = MethodInfo_Void_Add;
                  piVar1 = (int *)((long)&(unaff_R15->fields).m_CancellationTokenSource + 4);
                  *piVar1 = *piVar1 + 1;
                  lVar4 = (unaff_R15->fields).m_CachedPtr;
                  if (lVar4 == 0) goto label_0440fc01;
                  uVar3 = *(uint *)&(unaff_R15->fields).m_CancellationTokenSource;
                  if (uVar3 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)&(unaff_R15->fields).m_CancellationTokenSource = uVar3 + 1;
                    *(Il2CppObject **)(lVar4 + 0x20 + (long)(int)uVar3 * 8) = SStack_48.fields._current;
                    il2cpp_runtime_helper_022b4080(lVar4 + (long)(int)uVar3 * 8 + 0x20,SStack_48.fields._current);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)unaff_R15,
                               SStack_48.fields._current,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
          }
label_0440fbae:
          __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
          __this_04.fields._current = (Il2CppObject *)pSVar20;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          method_01 = extraout_RDX;
          goto label_0440fbc2;
        }
        do {
          do {
            do {
              __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
              __this_02.fields._current = (Il2CppObject *)pSVar20;
              bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
              if ((char)bVar8 == '\0') goto label_0440fbae;
              pUVar10 = parent[1].fields._currentCategoryPanel;
              if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_0440fbe8;
              if ((GameProgress_QuestItem_o *)SStack_48.fields._current == (GameProgress_QuestItem_o *)0x0)
              goto label_0440fbed;
              if (((GameProgress_QuestItem_o *)((long)SStack_48.fields._current + 0x70))->klass ==
                  (GameProgress_QuestItem_c *)0x0) goto label_0440fbe3;
              bVar8 = System_String__op_Inequality
                                ((System_String_o *)pUVar10[1].klass,
                                 (System_String_o *)
                                 (((GameProgress_QuestItem_o *)((long)SStack_48.fields._current + 0x70))->
                                  klass->_1).namespaze,(MethodInfo *)0x0);
            } while ((char)bVar8 != '\0');
            pSVar5 = parent[1].fields._currentCategoryPanelName;
            if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0440fbf2;
            bVar8 = System_String__op_Equality((pSVar5->fields)._value,"Completed",(MethodInfo *)0x0);
          } while (((char)bVar8 != '\0') &&
                  (bVar8 = GameProgress_QuestItem__Finished
                                     ((GameProgress_QuestItem_o *)SStack_48.fields._current,(MethodInfo *)0x0)
                  , (char)bVar8 == '\0'));
          pSVar5 = parent[1].fields._currentCategoryPanelName;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0440fbf7;
          bVar8 = System_String__op_Equality((pSVar5->fields)._value,"In Progress",(MethodInfo *)0x0);
        } while (((char)bVar8 != '\0') &&
                (bVar8 = GameProgress_QuestItem__Finished
                                   ((GameProgress_QuestItem_o *)SStack_48.fields._current,(MethodInfo *)0x0),
                (char)bVar8 != '\0'));
        goto label_0440fbfc;
      }
      goto label_0440fc06;
    }
  }
  UnityEngine_Transform__Find((UnityEngine_Transform_o *)unaff_R15,"LeftPanel",(MethodInfo *)0x0);
  auVar18 = il2cpp_runtime_helper_022b2c90();
  if (auVar18._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar4 = *plVar16;
    __cxa_end_catch();
    __this_05.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_05.fields._current = (Il2CppObject *)pSVar20;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    method_01 = extraout_RDX_00;
    if (lVar4 == 0) {
label_0440fbc2:
      UI_QuestCategoryPanel__CreateQuestItems
                ((UI_QuestCategoryPanel_o *)in_stack_ffffffffffffff90,
                 (System_Collections_Generic_List_QuestItem__o *)unaff_R15,method_01);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_06.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_06.fields._current = (Il2CppObject *)pSVar20;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar18._0_8_);
}


// UI.QuestAchievementsPanel$$.ctor
// il2cpp: void UI_QuestAchievementsPanel___ctor (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x4411190

void UI_QuestAchievementsPanel___ctor(UI_QuestAchievementsPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


