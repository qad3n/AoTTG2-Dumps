// Type: UI.QuestAchievementsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestAchievementsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestAchievementsPanel.cs
// --------------------------------

// UI.QuestAchievementsPanel$$get_ScrollBar
// il2cpp: bool UI_QuestAchievementsPanel__get_ScrollBar (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x5d58590

bool UI_QuestAchievementsPanel__get_ScrollBar(UI_QuestAchievementsPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.QuestAchievementsPanel$$Setup
// il2cpp: void UI_QuestAchievementsPanel__Setup (UI_QuestAchievementsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d585a0
// eh: try 0x5d58ef3..0x5d59068 -> pad 0x5d5908d (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d590b9..0x5d590be -> pad 0x5d590e3 cleanup
// eh: try 0x5d590e6..0x5d590f0 -> pad 0x5d590f8 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d58efe: nop 
// asm:   0x5d59089: jmp 0x5d590a1
// asm:   0x5d5908b: jmp 0x5d590a1
// asm:   0x5d5908d: jmp 0x5d590a1
// asm:   0x5d5908f: jmp 0x5d590a1
// asm:   0x5d59091: jmp 0x5d590a1
// asm:   0x5d59093: jmp 0x5d590a1
// asm:   0x5d59095: jmp 0x5d590a1
// asm:   0x5d59097: jmp 0x5d590a1
// asm:   0x5d59099: jmp 0x5d590a1
// asm:   0x5d5909b: jmp 0x5d590a1
// asm:   0x5d5909d: jmp 0x5d590a1
// asm:   0x5d5909f: jmp 0x5d590a1
// asm:   0x5d590a1: mov rbx, rax
// asm:   0x5d590a4: cmp edx, 1
// asm:   0x5d590a7: jne 0x5d590e6
// asm:   0x5d590a9: mov rdi, rbx
// asm:   0x5d590ac: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d590b1: mov rbx, qword ptr [rax]
// asm:   0x5d590b4: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d590b9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d590be: lea rax, [rip + 0x153451b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x5d590c5: mov rsi, qword ptr [rax]
// asm:   0x5d590c8: lea rdi, [rsp + 0x10]
// asm:   0x5d590cd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d590d2: test rbx, rbx
// asm:   0x5d590d5: je 0x5d59029
// asm:   0x5d590db: mov rdi, rbx
// asm:   0x5d590de: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d590e3: mov rbx, rax
// asm:   0x5d590e6: lea rdi, [rsp + 0x30]
// asm:   0x5d590eb: call 0x2fdcb10  ; il2cpp_runtime_helper_02fdcb10()
// asm:   0x5d590f0: mov rdi, rbx
// asm:   0x5d590f3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d590f8: mov rdi, rax
// asm:   0x5d590fb: call 0x2ab61e0  ; __clang_call_terminate()

void UI_QuestAchievementsPanel__Setup
               (UI_QuestAchievementsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameProgress_GameProgressContainer_o *pGVar4;
  GameProgress_AchievementContainer_o *pGVar5;
  Settings_ListSetting_AchievementItem__o *pSVar6;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_StringSetting_o *pSVar7;
  GameProgress_QuestItem_array *pGVar8;
  MethodInfo *pMVar9;
  Il2CppObject *__this_01;
  bool bVar10;
  int32_t top;
  int32_t bottom;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_UI_LayoutElement_o *pUVar14;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_03;
  UnityEngine_Transform_o *pUVar15;
  GameProgress_AchievementCount_o *pGVar16;
  UnityEngine_UI_Text_o *pUVar17;
  System_String_o *pSVar18;
  System_String_o *pSVar19;
  UnityEngine_UI_Image_o *pUVar20;
  System_Collections_Generic_List_QuestItem__o *items;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o UVar21;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (Il2CppMethodInitialized_07547f45 == '\0') {
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
    Il2CppMethodInitialized_07547f45 = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar13 = (__this->fields).SinglePanel;
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar13,
                           (MethodInfo_34B0830 *)
                           MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
    UnityEngine_RectOffset___ctor_68cd0a0(pUVar11,10,0x19,top,bottom,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding
                ((UnityEngine_UI_LayoutGroup_o *)__this_02,pUVar11,(MethodInfo *)0x0);
      pUVar12 = UI_ElementFactory__InstantiateAndBind
                          ((__this->fields).SinglePanel,"Prefabs/MainMenu/AchievementHeader",(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          pUVar14 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar13,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          if (pUVar14 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar14->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar14,(__this->fields).QuestItemWidth,
                       (pUVar14->klass->vtable)._36_set_preferredWidth.method);
            __this_03 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar13,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
            pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
            UnityEngine_RectOffset___ctor_68cd0a0(pUVar11,10,10,0,0,(MethodInfo *)0x0);
            if (__this_03 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
              UnityEngine_UI_LayoutGroup__set_padding
                        ((UnityEngine_UI_LayoutGroup_o *)__this_03,pUVar11,(MethodInfo *)0x0);
              if (parent == (UI_BasePanel_o *)0x0) {
                UnityEngine_Transform__Find(pUVar13,"LeftPanel",(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
              bVar2 = (TypeInfo_UI_QuestPopup->_2).typeHierarchyDepth;
              if (((parent->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_QuestPopup
                 )) {
                il2cpp_codegen_raise_invalid_cast_exception(parent);
              }
              pUVar15 = UnityEngine_Transform__Find(pUVar13,"LeftPanel",(MethodInfo *)0x0);
              UI_QuestPopup__CreateAchievementDropdowns((UI_QuestPopup_o *)parent,pUVar15,method_00);
              if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
              }
              pGVar4 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
              if ((pGVar4 != (GameProgress_GameProgressContainer_o *)0x0) &&
                 (pGVar5 = (pGVar4->fields).Achievement, pGVar5 != (GameProgress_AchievementContainer_o *)0x0)
                 ) {
                pGVar16 = GameProgress_AchievementContainer__GetAchievementCount(pGVar5,(MethodInfo *)0x0);
                pUVar15 = UnityEngine_Transform__Find(pUVar13,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0);
                if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                  pUVar17 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar15,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                  if (pGVar16 != (GameProgress_AchievementCount_o *)0x0) {
                    pSVar18 = System_Int32__ToString(&(pGVar16->fields).FinishedBronze,(MethodInfo *)0x0);
                    pSVar19 = System_Int32__ToString(&(pGVar16->fields).TotalBronze,(MethodInfo *)0x0);
                    pSVar18 = System_String__Concat_5301f10
                                        (pSVar18,"/",pSVar19,(MethodInfo *)0x0);
                    if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                                (pUVar17,pSVar18,(pUVar17->klass->vtable)._75_set_text.method);
                      pUVar15 = UnityEngine_Transform__Find(pUVar13,"RightPanel/TrophyCountSilver/Label",(MethodInfo *)0x0);
                      if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                        pUVar17 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar15,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Text);
                        pSVar18 = System_Int32__ToString(&(pGVar16->fields).FinishedSilver,(MethodInfo *)0x0);
                        pSVar19 = System_Int32__ToString(&(pGVar16->fields).TotalSilver,(MethodInfo *)0x0);
                        pSVar18 = System_String__Concat_5301f10
                                            (pSVar18,"/",pSVar19,(MethodInfo *)0x0);
                        if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                                    (pUVar17,pSVar18,(pUVar17->klass->vtable)._75_set_text.method);
                          pUVar15 = UnityEngine_Transform__Find
                                              (pUVar13,"RightPanel/TrophyCountGold/Label",(MethodInfo *)0x0);
                          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                            pUVar17 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar15,
                                                 (MethodInfo_34B0830 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_Text);
                            pSVar18 = System_Int32__ToString
                                                (&(pGVar16->fields).FinishedGold,(MethodInfo *)0x0);
                            pSVar19 = System_Int32__ToString(&(pGVar16->fields).TotalGold,(MethodInfo *)0x0);
                            pSVar18 = System_String__Concat_5301f10
                                                (pSVar18,"/",pSVar19,(MethodInfo *)0x0);
                            if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar17,pSVar18,(pUVar17->klass->vtable)._75_set_text.method);
                              pUVar15 = UnityEngine_Transform__Find
                                                  (pUVar13,"RightPanel/TrophyCountBronze/Image",(MethodInfo *)0x0);
                              if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                pUVar20 = UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar15,
                                                     (MethodInfo_34B0830 *)
                                                     MethodInfo_UnityEngine_Component_GetComponent_Image);
                                pSVar18 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                }
                                UVar21 = UI_UIManager__GetThemeColor
                                                   (pSVar18,"Trophy","BronzeColor",
                                                    "DefaultPanel",(MethodInfo *)0x0);
                                if (pUVar20 != (UnityEngine_UI_Image_o *)0x0) {
                                  (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar20,UVar21,(pUVar20->klass->vtable)._23_set_color.method);
                                  pUVar15 = UnityEngine_Transform__Find
                                                      (pUVar13,"RightPanel/TrophyCountSilver/Image",(MethodInfo *)0x0);
                                  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar20 = UnityEngine_Component__GetComponent_object_
                                                        ((UnityEngine_Component_o *)pUVar15,
                                                         (MethodInfo_34B0830 *)
                                                         MethodInfo_UnityEngine_Component_GetComponent_Image);
                                    pSVar18 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                        (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                                method);
                                    UVar21 = UI_UIManager__GetThemeColor
                                                       (pSVar18,"Trophy","SilverColor",
                                                        "DefaultPanel",(MethodInfo *)0x0);
                                    if (pUVar20 != (UnityEngine_UI_Image_o *)0x0) {
                                      (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                                                (pUVar20,UVar21,(pUVar20->klass->vtable)._23_set_color.method)
                                      ;
                                      pUVar15 = UnityEngine_Transform__Find
                                                          (pUVar13,"RightPanel/TrophyCountGold/Image",(MethodInfo *)0x0);
                                      if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                        pUVar20 = UnityEngine_Component__GetComponent_object_
                                                            ((UnityEngine_Component_o *)pUVar15,
                                                             (MethodInfo_34B0830 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                        pSVar18 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                            (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                                    method);
                                        UVar21 = UI_UIManager__GetThemeColor
                                                           (pSVar18,"Trophy",
                                                            "GoldColor","DefaultPanel",
                                                            (MethodInfo *)0x0);
                                        if (pUVar20 != (UnityEngine_UI_Image_o *)0x0) {
                                          (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                                                    (pUVar20,UVar21,
                                                     (pUVar20->klass->vtable)._23_set_color.method);
                                          pUVar15 = UnityEngine_Transform__Find
                                                              (pUVar13,"RightPanel/TrophyCountBronze/Label",(MethodInfo *)0x0
                                                              );
                                          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                            pUVar17 = UnityEngine_Component__GetComponent_object_
                                                                ((UnityEngine_Component_o *)pUVar15,
                                                                 (MethodInfo_34B0830 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                            pSVar18 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                                (__this,(__this->klass->vtable).
                                                                        _4_get_ThemePanel.method);
                                            UVar21 = UI_UIManager__GetThemeColor
                                                               (pSVar18,"Trophy",
                                                                "TextColor","DefaultPanel",
                                                                (MethodInfo *)0x0);
                                            if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                                              (*(pUVar17->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar17,UVar21,
                                                         (pUVar17->klass->vtable)._23_set_color.method);
                                              pUVar15 = UnityEngine_Transform__Find
                                                                  (pUVar13,"RightPanel/TrophyCountSilver/Label",
                                                                   (MethodInfo *)0x0);
                                              if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                                pUVar17 = UnityEngine_Component__GetComponent_object_
                                                                    ((UnityEngine_Component_o *)pUVar15,
                                                                     (MethodInfo_34B0830 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                                pSVar18 = (*(__this->klass->vtable)._4_get_ThemePanel.
                                                            methodPtr)(__this,(__this->klass->vtable).
                                                                              _4_get_ThemePanel.method);
                                                UVar21 = UI_UIManager__GetThemeColor
                                                                   (pSVar18,"Trophy",
                                                                    "TextColor",
                                                                    "DefaultPanel",(MethodInfo *)0x0);
                                                if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                                                  (*(pUVar17->klass->vtable)._23_set_color.methodPtr)
                                                            (pUVar17,UVar21,
                                                             (pUVar17->klass->vtable)._23_set_color.method);
                                                  pUVar13 = UnityEngine_Transform__Find
                                                                      (pUVar13,"RightPanel/TrophyCountGold/Label",
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                                    pUVar17 = UnityEngine_Component__GetComponent_object_
                                                                        ((UnityEngine_Component_o *)pUVar13,
                                                                         (MethodInfo_34B0830 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                                    pSVar18 = (*(__this->klass->vtable)._4_get_ThemePanel.
                                                                methodPtr)(__this,(__this->klass->vtable).
                                                                                  _4_get_ThemePanel.method);
                                                    UVar21 = UI_UIManager__GetThemeColor
                                                                       (pSVar18,"Trophy",
                                                                        "TextColor",
                                                                        "DefaultPanel",
                                                                        (MethodInfo *)0x0);
                                                    if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                                                      (*(pUVar17->klass->vtable)._23_set_color.methodPtr)
                                                                (pUVar17,UVar21,
                                                                 (pUVar17->klass->vtable)._23_set_color.method
                                                                );
                                                      items = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)
                                                                                                                                                  
                                                       TypeInfo_System_Collections_Generic_List_QuestItem);
                                                      System_Collections_Generic_List_object____ctor
                                                                ((System_Collections_Generic_List_object__o *)
                                                                 items,(MethodInfo_395C910 *)
                                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_List_QuestItem_ctor
                                                       );
                                                      pGVar4 = TypeInfo_GameProgress_GameProgressManager->
                                                               static_fields->GameProgress;
                                                      if ((((pGVar4 != (GameProgress_GameProgressContainer_o *
                                                                       )0x0) &&
                                                           (pGVar5 = (pGVar4->fields).Achievement,
                                                           pGVar5 != (GameProgress_AchievementContainer_o *)
                                                                     0x0)) &&
                                                          (pSVar6 = (pGVar5->fields).AchievementItems,
                                                          pSVar6 != (Settings_ListSetting_AchievementItem__o *
                                                                    )0x0)) &&
                                                         (__this_00 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (pSVar6->fields)._value,
                                                       __this_00 !=
                                                       (System_Collections_Generic_List_object__o *)0x0)) {
                                                        System_Collections_Generic_List_object___GetEnumerator
                                                                  ((
                                                       System_Collections_Generic_List_Enumerator_T__o *)
                                                       auStack_48,__this_00,
                                                       (MethodInfo_395E050 *)
                                                       MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator
                                                       );
                                                       SStack_68.fields._current = (Il2CppObject *)pGStack_38;
                                                       SStack_68.fields._list =
                                                            (System_Collections_Generic_List_T__o *)
                                                            auStack_48._0_8_;
                                                       SStack_68.fields._index = auStack_48._8_4_;
                                                       SStack_68.fields._version = auStack_48._12_4_;
                                                       auStack_48._0_8_ =
                                                            (System_Collections_Generic_List_T__o *)0x0;
                                                       auStack_48._8_8_ = &SStack_68;
label_05d58f00:
                                                       do {
                                                         bVar10 = 
                                                       System_Collections_Generic_List_Enumerator_object___MoveNext
                                                                 (&SStack_68,
                                                                  (MethodInfo_4C45C50 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext
                                                       );
                                                       __this_01 = SStack_68.fields._current;
                                                       if (!bVar10) {
                                                                                                                  
                                                       System_Collections_Generic_List_Enumerator_object___Dispose
                                                                 (&SStack_68,
                                                                  (MethodInfo_4C45C40 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
                                                       );
                                                       UI_QuestCategoryPanel__CreateQuestItems
                                                                 ((UI_QuestCategoryPanel_o *)__this,items,
                                                                  method_01);
                                                       return;
                                                       }
                                                       pUVar12 = (*(uint64_t *)((char *)parent + 0xa8));
                                                       if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       if ((GameProgress_QuestItem_o *)
                                                           SStack_68.fields._current ==
                                                           (GameProgress_QuestItem_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       if (((GameProgress_QuestItem_o *)
                                                           ((long)SStack_68.fields._current + 0x80))->klass ==
                                                           (GameProgress_QuestItem_c *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       bVar10 = System_String__op_Inequality
                                                                          ((*(uint64_t *)((char *)pUVar12 + 0x20)),
                                                                           (((GameProgress_QuestItem_o *)
                                                                            ((long)SStack_68.fields._current +
                                                                            0x80))->klass->_1).byval_arg.data,
                                                                           (MethodInfo *)0x0);
                                                       } while (bVar10);
                                                       pSVar7 = (*(uint64_t *)((char *)parent + 0xb0));
                                                       if (pSVar7 == (Settings_StringSetting_o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       bVar10 = System_String__op_Equality
                                                                          ((pSVar7->fields)._value,
                                                                           "Completed",
                                                                           (MethodInfo *)0x0);
                                                       if (bVar10) goto code_r0x05d58f79;
                                                       goto label_05d58f8b;
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
code_r0x05d58f79:
  bVar10 = GameProgress_QuestItem__Finished((GameProgress_QuestItem_o *)__this_01,(MethodInfo *)0x0);
  if (bVar10) {
label_05d58f8b:
    pSVar7 = (*(uint64_t *)((char *)parent + 0xb0));
    if (pSVar7 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar10 = System_String__op_Equality((pSVar7->fields)._value,"In Progress",(MethodInfo *)0x0);
    if (bVar10) {
      bVar10 = GameProgress_QuestItem__Finished((GameProgress_QuestItem_o *)__this_01,(MethodInfo *)0x0);
      if (bVar10) goto label_05d58f00;
    }
    pMVar9 = MethodInfo_System_Collections_Generic_List_QuestItem_Add;
    if (items != (System_Collections_Generic_List_QuestItem__o *)0x0) {
      piVar1 = &(items->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar8 = (items->fields)._items;
      if (pGVar8 != (GameProgress_QuestItem_array *)0x0) {
        uVar3 = (items->fields)._size;
        if (uVar3 < (uint)pGVar8->max_length) {
          (items->fields)._size = uVar3 + 1;
          pGVar8->m_Items[(int)uVar3] = (GameProgress_QuestItem_o *)__this_01;
          Il2CppCodeGenWriteBarrier(pGVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)items,__this_01,
                     (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
        }
        goto label_05d58f00;
      }
    }
    ThrowNullReferenceException();
  }
  goto label_05d58f00;
}


// UI.QuestAchievementsPanel$$.ctor
// il2cpp: void UI_QuestAchievementsPanel___ctor (UI_QuestAchievementsPanel_o* __this, const MethodInfo* method);
// 0x5d5a030

void UI_QuestAchievementsPanel___ctor(UI_QuestAchievementsPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


