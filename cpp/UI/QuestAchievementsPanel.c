// Type: UI.QuestAchievementsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestAchievementsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestAchievementsPanel.cs
// --------------------------------

// UI.QuestAchievementsPanel$$get_ScrollBar
// il2cpp: bool UI_QuestAchievementsPanel__get_ScrollBar (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_QuestAchievementsPanel__get_ScrollBar(UI_QuestAchievementsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.QuestAchievementsPanel$$Setup
// il2cpp: void UI_QuestAchievementsPanel__Setup (UI_QuestAchievementsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182296f30
// eh: try 0x1822978e0..0x182297a75 -> pad 0x183317e10 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822979de: mov rdx, qword ptr [rip + 0x1ddbbb3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x1822979e5: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822979ea: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822979ef: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822979f4: test rcx, rcx
// asm:   0x1822979f7: jne 0x182297a75
// asm:   0x1822979f9: mov r14, qword ptr [rsp + 0xb0]
// asm:   0x182297a01: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x182297a75: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317e10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317e15: push rbp
// asm:   0x183317e16: sub rsp, 0x30
// asm:   0x183317e1a: mov rbp, rdx
// asm:   0x183317e1d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183317e21: mov rcx, qword ptr [rax]
// asm:   0x183317e24: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317e28: movabs rax, 0
// asm:   0x183317e32: add rsp, 0x30
// asm:   0x183317e36: pop rbp
// asm:   0x183317e37: ret 

void UI_QuestAchievementsPanel__Setup
               (UI_QuestAchievementsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  GameProgress_GameProgressContainer_o *pGVar2;
  GameProgress_AchievementContainer_o *pGVar3;
  Settings_ListSetting_AchievementItem__o *pSVar4;
  System_Collections_Generic_List_T__o *__this_00;
  Settings_StringSetting_o *pSVar5;
  Il2CppObject *__this_01;
  bool bVar6;
  int32_t top;
  int32_t bottom;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_LayoutElement_o *pUVar10;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_03;
  UnityEngine_Transform_o *pUVar11;
  GameProgress_AchievementCount_o *pGVar12;
  UnityEngine_UI_Text_o *pUVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  UnityEngine_UI_Image_o *pUVar16;
  UnityEngine_Color_o *pUVar17;
  System_Collections_Generic_List_QuestItem__o *items;
  undefined1 local_68 [16];
  GameProgress_QuestItem_o *local_58;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184347475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_QuestItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_QuestPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_AchievementItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BronzeColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"RightPanel/TrophyCountBronze/Label");
    il2cpp_codegen_initialize_runtime_metadata(&"GoldColor");
    il2cpp_codegen_initialize_runtime_metadata(&"RightPanel/TrophyCountSilver/Image");
    il2cpp_codegen_initialize_runtime_metadata(&"SilverColor");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"RightPanel/TrophyCountGold/Image");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/AchievementHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"RightPanel/TrophyCountBronze/Image");
    il2cpp_codegen_initialize_runtime_metadata(&"RightPanel/TrophyCountSilver/Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Completed");
    il2cpp_codegen_initialize_runtime_metadata(&"In Progress");
    il2cpp_codegen_initialize_runtime_metadata(&"RightPanel/TrophyCountGold/Label");
    Il2CppMethodInitialized_184347475 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).SinglePanel;
  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar9,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)(__this);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)(__this);
    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
    UnityEngine_RectOffset___ctor_2ed1030(pUVar7,10,0x19,top,bottom,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding
                ((UnityEngine_UI_LayoutGroup_o *)__this_02,pUVar7,(MethodInfo *)0x0);
      pUVar8 = UI_ElementFactory__InstantiateAndBind
                         ((__this->fields).SinglePanel,"Prefabs/MainMenu/AchievementHeader",(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          pUVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar9,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar10->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar10,(__this->fields).QuestItemWidth,
                       (pUVar10->klass->vtable)._36_set_preferredWidth.method);
            __this_03 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar9,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
            pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
            UnityEngine_RectOffset___ctor_2ed1030(pUVar7,10,10,0,0,(MethodInfo *)0x0);
            if (__this_03 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
              UnityEngine_UI_LayoutGroup__set_padding
                        ((UnityEngine_UI_LayoutGroup_o *)__this_03,pUVar7,(MethodInfo *)0x0);
              if (parent == (UI_BasePanel_o *)0x0) {
                UnityEngine_Transform__Find(pUVar9,"LeftPanel",(MethodInfo *)0x0);
              }
              else {
                bVar1 = (TypeInfo_UI_QuestPopup->_2).typeHierarchyDepth;
                if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_UI_QuestPopup)) {
                  il2cpp_codegen_raise_invalid_cast_exception(parent);
                }
                pUVar11 = UnityEngine_Transform__Find(pUVar9,"LeftPanel",(MethodInfo *)0x0);
                UI_QuestPopup__CreateAchievementDropdowns((UI_QuestPopup_o *)parent,pUVar11,(MethodInfo *)0x0)
                ;
                if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
                }
                pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
                if ((pGVar2 != (GameProgress_GameProgressContainer_o *)0x0) &&
                   (pGVar3 = (pGVar2->fields).Achievement,
                   pGVar3 != (GameProgress_AchievementContainer_o *)0x0)) {
                  pGVar12 = GameProgress_AchievementContainer__GetAchievementCount(pGVar3,(MethodInfo *)0x0);
                  pUVar11 = UnityEngine_Transform__Find(pUVar9,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0);
                  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                    pUVar13 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar11,
                                         (MethodInfo_6651A0 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_Text);
                    if (pGVar12 != (GameProgress_AchievementCount_o *)0x0) {
                      pSVar14 = System_Int32__ToString(&(pGVar12->fields).FinishedBronze,(MethodInfo *)0x0);
                      pSVar15 = System_Int32__ToString(&(pGVar12->fields).TotalBronze,(MethodInfo *)0x0);
                      pSVar14 = System_String__Concat_1969b70
                                          (pSVar14,"/",pSVar15,(MethodInfo *)0x0);
                      if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar13,pSVar14,(pUVar13->klass->vtable)._75_set_text.method);
                        pUVar11 = UnityEngine_Transform__Find(pUVar9,"RightPanel/TrophyCountSilver/Label",(MethodInfo *)0x0);
                        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                          pUVar13 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar11,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_Text);
                          pSVar14 = System_Int32__ToString
                                              (&(pGVar12->fields).FinishedSilver,(MethodInfo *)0x0);
                          pSVar15 = System_Int32__ToString(&(pGVar12->fields).TotalSilver,(MethodInfo *)0x0);
                          pSVar14 = System_String__Concat_1969b70
                                              (pSVar14,"/",pSVar15,(MethodInfo *)0x0);
                          if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                            (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
                                      (pUVar13,pSVar14,(pUVar13->klass->vtable)._75_set_text.method);
                            pUVar11 = UnityEngine_Transform__Find
                                                (pUVar9,"RightPanel/TrophyCountGold/Label",(MethodInfo *)0x0);
                            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                              pUVar13 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)pUVar11,
                                                   (MethodInfo_6651A0 *)
                                                   MethodInfo_UnityEngine_Component_GetComponent_Text);
                              pSVar14 = System_Int32__ToString
                                                  (&(pGVar12->fields).FinishedGold,(MethodInfo *)0x0);
                              pSVar15 = System_Int32__ToString(&(pGVar12->fields).TotalGold,(MethodInfo *)0x0)
                              ;
                              pSVar14 = System_String__Concat_1969b70
                                                  (pSVar14,"/",pSVar15,(MethodInfo *)0x0);
                              if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
                                          (pUVar13,pSVar14,(pUVar13->klass->vtable)._75_set_text.method);
                                pUVar11 = UnityEngine_Transform__Find
                                                    (pUVar9,"RightPanel/TrophyCountBronze/Image",(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar16 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar11,
                                                       (MethodInfo_6651A0 *)
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                  pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method
                                                      );
                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                  }
                                  pUVar17 = UI_UIManager__GetThemeColor
                                                      ((UnityEngine_Color_o *)local_68,pSVar14,
                                                       "Trophy","BronzeColor",
                                                       "DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
                                    local_68._0_8_ = *(undefined8 *)&pUVar17->fields;
                                    local_68._8_4_ = (pUVar17->fields).b;
                                    local_68._12_4_ = (pUVar17->fields).a;
                                    (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                                              (pUVar16,(UnityEngine_Color_o *)local_68,
                                               (pUVar16->klass->vtable)._23_set_color.method);
                                    pUVar11 = UnityEngine_Transform__Find
                                                        (pUVar9,"RightPanel/TrophyCountSilver/Image",(MethodInfo *)0x0);
                                    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar16 = UnityEngine_Component__GetComponent_object_
                                                          ((UnityEngine_Component_o *)pUVar11,
                                                           (MethodInfo_6651A0 *)
                                                           MethodInfo_UnityEngine_Component_GetComponent_Image
                                                          );
                                      pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                          (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                                  method);
                                      pUVar17 = UI_UIManager__GetThemeColor
                                                          ((UnityEngine_Color_o *)local_68,pSVar14,
                                                           "Trophy","SilverColor",
                                                           "DefaultPanel",(MethodInfo *)0x0);
                                      if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
                                        local_68._0_8_ = *(undefined8 *)&pUVar17->fields;
                                        local_68._8_4_ = (pUVar17->fields).b;
                                        local_68._12_4_ = (pUVar17->fields).a;
                                        (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                                                  (pUVar16,(UnityEngine_Color_o *)local_68,
                                                   (pUVar16->klass->vtable)._23_set_color.method);
                                        pUVar11 = UnityEngine_Transform__Find
                                                            (pUVar9,"RightPanel/TrophyCountGold/Image",(MethodInfo *)0x0);
                                        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar16 = UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)pUVar11,
                                                               (MethodInfo_6651A0 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                          pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                              (__this,(__this->klass->vtable).
                                                                      _4_get_ThemePanel.method);
                                          pUVar17 = UI_UIManager__GetThemeColor
                                                              ((UnityEngine_Color_o *)local_68,pSVar14,
                                                               "Trophy","GoldColor",
                                                               "DefaultPanel",(MethodInfo *)0x0);
                                          if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
                                            local_68._0_8_ = *(undefined8 *)&pUVar17->fields;
                                            local_68._8_4_ = (pUVar17->fields).b;
                                            local_68._12_4_ = (pUVar17->fields).a;
                                            (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                                                      (pUVar16,(UnityEngine_Color_o *)local_68,
                                                       (pUVar16->klass->vtable)._23_set_color.method);
                                            pUVar11 = UnityEngine_Transform__Find
                                                                (pUVar9,"RightPanel/TrophyCountBronze/Label",
                                                                 (MethodInfo *)0x0);
                                            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar13 = UnityEngine_Component__GetComponent_object_
                                                                  ((UnityEngine_Component_o *)pUVar11,
                                                                   (MethodInfo_6651A0 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                              pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                                  (__this,(__this->klass->vtable).
                                                                          _4_get_ThemePanel.method);
                                              pUVar17 = UI_UIManager__GetThemeColor
                                                                  ((UnityEngine_Color_o *)local_68,pSVar14,
                                                                   "Trophy","TextColor"
                                                                   ,"DefaultPanel",(MethodInfo *)0x0);
                                              if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                                local_68._0_8_ = *(undefined8 *)&pUVar17->fields;
                                                local_68._8_4_ = (pUVar17->fields).b;
                                                local_68._12_4_ = (pUVar17->fields).a;
                                                (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                                                          (pUVar13,(UnityEngine_Color_o *)local_68,
                                                           (pUVar13->klass->vtable)._23_set_color.method);
                                                pUVar11 = UnityEngine_Transform__Find
                                                                    (pUVar9,"RightPanel/TrophyCountSilver/Label",
                                                                     (MethodInfo *)0x0);
                                                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                                  pUVar13 = UnityEngine_Component__GetComponent_object_
                                                                      ((UnityEngine_Component_o *)pUVar11,
                                                                       (MethodInfo_6651A0 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                                  pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.
                                                              methodPtr)(__this,(__this->klass->vtable).
                                                                                _4_get_ThemePanel.method);
                                                  pUVar17 = UI_UIManager__GetThemeColor
                                                                      ((UnityEngine_Color_o *)local_68,pSVar14
                                                                       ,"Trophy",
                                                                       "TextColor",
                                                                       "DefaultPanel",(MethodInfo *)0x0
                                                                      );
                                                  if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                                    local_68._0_8_ = *(undefined8 *)&pUVar17->fields;
                                                    local_68._8_4_ = (pUVar17->fields).b;
                                                    local_68._12_4_ = (pUVar17->fields).a;
                                                    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                                                              (pUVar13,(UnityEngine_Color_o *)local_68,
                                                               (pUVar13->klass->vtable)._23_set_color.method);
                                                    pUVar9 = UnityEngine_Transform__Find
                                                                       (pUVar9,"RightPanel/TrophyCountGold/Label",
                                                                        (MethodInfo *)0x0);
                                                    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar13 = UnityEngine_Component__GetComponent_object_
                                                                          ((UnityEngine_Component_o *)pUVar9,
                                                                           (MethodInfo_6651A0 *)
                                                                                                                                                      
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                                      pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.
                                                                  methodPtr)(__this,(__this->klass->vtable).
                                                                                    _4_get_ThemePanel.method);
                                                      pUVar17 = UI_UIManager__GetThemeColor
                                                                          ((UnityEngine_Color_o *)local_68,
                                                                           pSVar14,"Trophy",
                                                                           "TextColor",
                                                                           "DefaultPanel",
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                                        local_68._0_8_ = *(undefined8 *)&pUVar17->fields;
                                                        local_68._8_4_ = (pUVar17->fields).b;
                                                        local_68._12_4_ = (pUVar17->fields).a;
                                                        (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                                                                  (pUVar13,(UnityEngine_Color_o *)local_68,
                                                                   (pUVar13->klass->vtable)._23_set_color.
                                                                   method);
                                                        items = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_System_Collections_Generic_List_QuestItem);
                                                       System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                                                                 ((
                                                       System_Collections_Generic_LowLevelList_T__o *)items,
                                                       (MethodInfo_92A240 *)
                                                       MethodInfo_System_Collections_Generic_List_QuestItem_ctor
                                                       );
                                                       pGVar2 = TypeInfo_GameProgress_GameProgressManager->
                                                                static_fields->GameProgress;
                                                       if ((((pGVar2 != (GameProgress_GameProgressContainer_o
                                                                         *)0x0) &&
                                                            (pGVar3 = (pGVar2->fields).Achievement,
                                                            pGVar3 != (GameProgress_AchievementContainer_o *)
                                                                      0x0)) &&
                                                           (pSVar4 = (pGVar3->fields).AchievementItems,
                                                           pSVar4 != (Settings_ListSetting_AchievementItem__o
                                                                      *)0x0)) &&
                                                          (__this_00 = (pSVar4->fields)._value,
                                                          __this_00 !=
                                                          (System_Collections_Generic_List_T__o *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                                                 ((
                                                       System_Collections_Generic_List_Enumerator_T__o *)
                                                       local_68,__this_00,
                                                       (MethodInfo_91F180 *)
                                                       MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator
                                                       );
                                                       local_48.fields._list =
                                                            (System_Collections_Generic_List_T__o *)
                                                            local_68._0_8_;
                                                       local_48.fields._index = local_68._8_4_;
                                                       local_48.fields._version = local_68._12_4_;
                                                       local_48.fields._current = (Il2CppObject *)local_58;
                                                       local_68._0_8_ =
                                                            (System_Collections_Generic_List_T__o *)0x0;
                                                       local_68._8_8_ = &local_48;
label_1822978e0:
                                                       do {
                                                         bVar6 = 
                                                       System_Collections_Generic_List_Enumerator_object___MoveNext
                                                                 (&local_48,
                                                                  (MethodInfo_153A2A0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext
                                                       );
                                                       __this_01 = local_48.fields._current;
                                                       if (!bVar6) {
                                                                                                                  
                                                       System_Collections_Generic_List_Enumerator_object___Dispose
                                                                 ((
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       *)&local_48,
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
                                                       );
                                                       UI_QuestCategoryPanel__CreateQuestItems
                                                                 ((UI_QuestCategoryPanel_o *)__this,items,
                                                                  (MethodInfo *)0x0);
                                                       return;
                                                       }
                                                       pUVar8 = (*(uint64_t *)((char *)parent + 0xa8));
                                                       if (pUVar8 == (UnityEngine_GameObject_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       if ((GameProgress_QuestItem_o *)
                                                           local_48.fields._current ==
                                                           (GameProgress_QuestItem_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       if (((GameProgress_QuestItem_o *)
                                                           ((longlong)local_48.fields._current + 0x80))->klass
                                                           == (GameProgress_QuestItem_c *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       bVar6 = System_String__op_Inequality
                                                                         ((*(uint64_t *)((char *)pUVar8 + 0x20)),
                                                                          (((GameProgress_QuestItem_o *)
                                                                           ((longlong)local_48.fields._current
                                                                           + 0x80))->klass->_1).byval_arg.data
                                                                          ,(MethodInfo *)0x0);
                                                       } while (bVar6);
                                                       pSVar5 = (*(uint64_t *)((char *)parent + 0xb0));
                                                       if (pSVar5 == (Settings_StringSetting_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       bVar6 = System_String__op_Equality
                                                                         ((pSVar5->fields)._value,
                                                                          "Completed",
                                                                          (MethodInfo *)0x0);
                                                       if (bVar6) goto code_r0x000182297962;
                                                       goto label_182297974;
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
  ThrowNullReferenceException();
code_r0x000182297962:
  bVar6 = GameProgress_QuestItem__Finished((GameProgress_QuestItem_o *)__this_01,(MethodInfo *)0x0);
  if (bVar6) {
label_182297974:
    pSVar5 = (*(uint64_t *)((char *)parent + 0xb0));
    if (pSVar5 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_String__op_Equality((pSVar5->fields)._value,"In Progress",(MethodInfo *)0x0);
    if (bVar6) {
      bVar6 = GameProgress_QuestItem__Finished((GameProgress_QuestItem_o *)__this_01,(MethodInfo *)0x0);
      if (bVar6) goto label_1822978e0;
    }
    if (items == (System_Collections_Generic_List_QuestItem__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(items,__this_01);
  }
  goto label_1822978e0;
}


// UI.QuestAchievementsPanel$$.ctor
// il2cpp: void UI_QuestAchievementsPanel___ctor (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x182297a80

void
UI_QuestAchievementsPanel___ctor(UI_QuestAchievementsPanel_o* __this, MethodInfo* method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


