// Type: UI.SongPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/SongPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.SongPopup.<ShowNextSongPopup>d__36$$.ctor
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__36___ctor (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d50700

void UI_SongPopup__ShowNextSongPopup_d__36___ctor
               (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.IDisposable.Dispose
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__36__System_IDisposable_Dispose (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x5d50730

void UI_SongPopup__ShowNextSongPopup_d__36__System_IDisposable_Dispose
               (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,MethodInfo *method)

{
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$MoveNext
// il2cpp: bool UI_SongPopup__ShowNextSongPopup_d__36__MoveNext (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x5d50740

bool UI_SongPopup__ShowNextSongPopup_d__36__MoveNext
               (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,MethodInfo *method)

{
  uint16_t *puVar1;
  int iVar2;
  UI_SongPopup_o *__this_00;
  System_String_o *name;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547efc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547efc = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    name = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    if (__this_00 == (UI_SongPopup_o *)0x0) {
label_05d5082a:
      ThrowNullReferenceException();
    }
    UI_SongPopup__ChangeSongInfo(__this_00,name,method_00);
    puVar1 = &(__this_00->fields).ienumCount;
    *puVar1 = *puVar1 + 1;
    (*(__this_00->klass->vtable)._21_Show.methodPtr)(__this_00,(__this_00->klass->vtable)._21_Show.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,5.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_SongPopup_o *)0x0) goto label_05d5082a;
    puVar1 = &(__this_00->fields).ienumCount;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      (*(__this_00->klass->vtable)._22_Hide.methodPtr)(__this_00,(__this_00->klass->vtable)._22_Hide.method);
    }
  }
  return iVar2 == 0;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x5d50830

Il2CppObject *
UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_IEnumerator_Reset (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x5d50840

void UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_IEnumerator_Reset
               (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_SongPopup_ShowNextSongPopup_d__36_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_IEnumerator_get_Current (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x5d50880

Il2CppObject *
UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_IEnumerator_get_Current
          (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_SongPopup__get_EscapeBehavior (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb20

int32_t UI_SongPopup__get_EscapeBehavior(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.SongPopup$$get_Width
// il2cpp: float UI_SongPopup__get_Width (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb30

float UI_SongPopup__get_Width(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 275.0;
}


// UI.SongPopup$$get_Height
// il2cpp: float UI_SongPopup__get_Height (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb40

float UI_SongPopup__get_Height(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.SongPopup$$get_DoublePanel
// il2cpp: bool UI_SongPopup__get_DoublePanel (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb50

bool UI_SongPopup__get_DoublePanel(UI_SongPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.SongPopup$$get_DoublePanelDivider
// il2cpp: bool UI_SongPopup__get_DoublePanelDivider (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb60

bool UI_SongPopup__get_DoublePanelDivider(UI_SongPopup_o *__this,MethodInfo *method)

{
  return false;
}


// UI.SongPopup$$get_VerticalSpacing
// il2cpp: float UI_SongPopup__get_VerticalSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb70

float UI_SongPopup__get_VerticalSpacing(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SongPopup__get_VerticalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb80

int32_t UI_SongPopup__get_VerticalPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SongPopup__get_HorizontalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fb90

int32_t UI_SongPopup__get_HorizontalPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_TopBarHeight
// il2cpp: float UI_SongPopup__get_TopBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fba0

float UI_SongPopup__get_TopBarHeight(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarHeight
// il2cpp: float UI_SongPopup__get_BottomBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fbb0

float UI_SongPopup__get_BottomBarHeight(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarSpacing
// il2cpp: float UI_SongPopup__get_BottomBarSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fbc0

float UI_SongPopup__get_BottomBarSpacing(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarPadding
// il2cpp: int32_t UI_SongPopup__get_BottomBarPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fbd0

int32_t UI_SongPopup__get_BottomBarPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_TitleFontSize
// il2cpp: int32_t UI_SongPopup__get_TitleFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fbe0

int32_t UI_SongPopup__get_TitleFontSize(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_SongPopup__get_ButtonFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fbf0

int32_t UI_SongPopup__get_ButtonFontSize(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SongPopup__get_PopupAnimationType (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d4fc00

int32_t UI_SongPopup__get_PopupAnimationType(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SongPopup$$Setup
// il2cpp: void UI_SongPopup__Setup (UI_SongPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d4fc10

void UI_SongPopup__Setup(UI_SongPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_GeneralSettings_o *pSVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UI_ElementStyle_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Text_o *pUVar11;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_GameObject_o *pUVar12;
  float fVar13;
  UnityEngine_Vector2_Fields UStack_48;
  
  if (Il2CppMethodInitialized_07547ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/ost_cover");
    Il2CppMethodInitialized_07547ef8 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).DoublePanelLeft;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar8,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar6,55.0,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
      fVar13 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                         (__this,(__this->klass->vtable)._6_get_Height.method);
      (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar6,fVar13,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
      pUVar8 = (__this->fields).DoublePanelLeft;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar8,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
        if (pUVar7 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)pUVar7,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar7,false,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar7,false,(MethodInfo *)0x0);
          pUVar8 = (__this->fields).DoublePanelRight;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar6,200.0,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
              fVar13 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                                 (__this,(__this->klass->vtable)._6_get_Height.method);
              (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar6,fVar13,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
              pUVar8 = (__this->fields).DoublePanelRight;
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                pUVar7 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar8,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
                if (pUVar7 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)pUVar7,4,(MethodInfo *)0x0);
                  pUVar8 = (__this->fields).DoublePanelLeft;
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                      pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                        __this_00 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar8,
                                               (MethodInfo_34B0830 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup
                                              );
                        if (__this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,10.0,
                                     (MethodInfo *)0x0);
                          (__this->fields).Parent = parent;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
                          pUVar8 = (__this->fields).DoublePanelLeft;
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            pUVar8 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                            pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                            UI_ElementStyle___ctor
                                      (pUVar9,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                            pUVar10 = UI_ElementFactory__CreateRawImage
                                                (pUVar8,pUVar9,"Sprites/ost_cover",32.0,32.0,
                                                 (MethodInfo *)0x0);
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                                    (pUVar10,(MethodInfo_353B730 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                                                    );
                              if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
                                __this_02 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)__this_01,
                                                       (MethodInfo_34B0830 *)
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                      );
                                if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (__this_02,(UnityEngine_Vector2_o)0x425c0000425c0000,
                                             (MethodInfo *)0x0);
                                  pUVar8 = (__this->fields).DoublePanelRight;
                                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar8 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                                    pUVar9 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)TypeInfo_UI_ElementStyle);
                                    UI_ElementStyle___ctor
                                              (pUVar9,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0)
                                    ;
                                    pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                        (pUVar8,pUVar9,"",0,4,
                                                         (MethodInfo *)0x0);
                                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar10,(MethodInfo_353B730 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                      ppUVar1 = &(__this->fields)._songName;
                                      (__this->fields)._songName = pUVar11;
                                      Il2CppCodeGenWriteBarrier(ppUVar1);
                                      pUVar11 = (__this->fields)._songName;
                                      if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                                        UnityEngine_UI_Text__set_fontSize(pUVar11,0x12,(MethodInfo *)0x0);
                                        pUVar11 = *ppUVar1;
                                        if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                                          UnityEngine_UI_Text__set_alignment(pUVar11,0,(MethodInfo *)0x0);
                                          pUVar8 = (__this->fields).DoublePanelRight;
                                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                            pUVar8 = UnityEngine_Component__get_transform
                                                               ((UnityEngine_Component_o *)pUVar8,
                                                                (MethodInfo *)0x0);
                                            pUVar9 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)TypeInfo_UI_ElementStyle);
                                            UI_ElementStyle___ctor
                                                      (pUVar9,0x18,120.0,20.0,"DefaultPanel",
                                                       (MethodInfo *)0x0);
                                            __this_03 = UI_ElementFactory__CreateDefaultLabel
                                                                  (pUVar8,pUVar9,"",0,4,
                                                                   (MethodInfo *)0x0);
                                            if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                                  (__this_03,
                                                                   (MethodInfo_353B730 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                              ppUVar1 = &(__this->fields)._authorName;
                                              (__this->fields)._authorName = pUVar11;
                                              Il2CppCodeGenWriteBarrier(ppUVar1);
                                              pUVar11 = (__this->fields)._authorName;
                                              if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                                                UnityEngine_UI_Text__set_fontSize
                                                          (pUVar11,0xe,(MethodInfo *)0x0);
                                                pUVar11 = *ppUVar1;
                                                if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                                                  UnityEngine_UI_Text__set_alignment
                                                            (pUVar11,8,(MethodInfo *)0x0);
                                                  pUVar12 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)__this_01,
                                                                       (MethodInfo *)0x0);
                                                  UI_ElementFactory__SetAnchor
                                                            (pUVar12,4,4,(UnityEngine_Vector2_o)0x41a00000,
                                                             (MethodInfo *)0x0);
                                                  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->
                                                           InGameCurrent;
                                                  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
                                                      (pSVar3 = (pSVar2->fields).Misc,
                                                      pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
                                                     (pSVar4 = (pSVar3->fields).GlobalMinimapDisable,
                                                     pSVar4 != (Settings_BoolSetting_o *)0x0)) {
                                                    UStack_48.x = -15.0;
                                                    UStack_48.y = -10.0;
                                                    if ((pSVar4->fields)._value == false) {
                                                      pSVar4 = (pSVar3->fields).RealismMode;
                                                      if (pSVar4 == (Settings_BoolSetting_o *)0x0)
                                                      goto label_05d50226;
                                                      if ((pSVar4->fields)._value == false) {
                                                        pSVar5 = TypeInfo_Settings_SettingsManager->
                                                                 static_fields->GeneralSettings;
                                                        if ((pSVar5 == (Settings_GeneralSettings_o *)0x0) ||
                                                           (pSVar4 = (pSVar5->fields).MinimapEnabled,
                                                           pSVar4 == (Settings_BoolSetting_o *)0x0))
                                                        goto label_05d50226;
                                                        if ((pSVar4->fields)._value == false) {
                                                          UStack_48.x = -15.0;
                                                        }
                                                        else {
                                                          UStack_48.x = -350.0;
                                                        }
                                                        UStack_48.y = -10.0;
                                                      }
                                                    }
                                                    pUVar12 = UnityEngine_Component__get_gameObject
                                                                        ((UnityEngine_Component_o *)__this,
                                                                         (MethodInfo *)0x0);
                                                    UI_ElementFactory__SetAnchor
                                                              (pUVar12,2,2,(UnityEngine_Vector2_o)UStack_48,
                                                               (MethodInfo *)0x0);
                                                    UI_ElementFactory__SetAnchor
                                                              (pUVar10,0,0,(UnityEngine_Vector2_o)0x0,
                                                               (MethodInfo *)0x0);
                                                    UI_ElementFactory__SetAnchor
                                                              (__this_03,8,8,(UnityEngine_Vector2_o)0x0,
                                                               (MethodInfo *)0x0);
                                                    (*(__this->klass->vtable)._22_Hide.methodPtr)
                                                              (__this,(__this->klass->vtable)._22_Hide.method)
                                                    ;
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
  }
label_05d50226:
  ThrowNullReferenceException();
}


// UI.SongPopup$$ChangeSongInfo
// il2cpp: void UI_SongPopup__ChangeSongInfo (UI_SongPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d50230

void UI_SongPopup__ChangeSongInfo(UI_SongPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *str0;
  System_String_o *str2;
  MethodInfo *in_RCX;
  System_String_o **ppSVar2;
  int32_t index;
  System_Collections_Generic_List_string__o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&" and ");
    il2cpp_codegen_initialize_runtime_metadata(&"by ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547ef9 = '\x01';
  }
  local_40 = (System_Collections_Generic_List_string__o *)0x0;
  local_38 = (System_String_o *)0x0;
  UI_SongPopup__ParseMusicString(name,&local_40,&local_38,in_RCX);
  pUVar1 = (__this->fields)._songName;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,local_38,(pUVar1->klass->vtable)._75_set_text.method);
    if (local_40 != (System_Collections_Generic_List_string__o *)0x0) {
      index = 0;
      str0 = "";
      do {
        if ((local_40->fields)._size <= index) {
          pUVar1 = (__this->fields)._authorName;
          if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                      (pUVar1,str0,(pUVar1->klass->vtable)._75_set_text.method);
            return;
          }
          break;
        }
        str2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)local_40,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        ppSVar2 = &" and ";
        if (index == 0) {
          ppSVar2 = &"by ";
        }
        str0 = System_String__Concat_5301f10(str0,*ppSVar2,str2,(MethodInfo *)0x0);
        index = index + 1;
      } while (local_40 != (System_Collections_Generic_List_string__o *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// UI.SongPopup$$ParseMusicString
// il2cpp: void UI_SongPopup__ParseMusicString (System_String_o* input, System_Collections_Generic_List_string__o** authors, System_String_o** song, const MethodInfo* method);
// 0x5d50380

void UI_SongPopup__ParseMusicString
               (System_String_o *input,System_Collections_Generic_List_string__o **authors,
               System_String_o **song,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  uint uVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Char_array *separator;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_07547efa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    Il2CppMethodInitialized_07547efa = '\x01';
  }
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  *authors = pSVar7;
  Il2CppCodeGenWriteBarrier(authors);
  *song = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(song);
  bVar5 = System_String__IsNullOrWhiteSpace(input,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if (separator == (System_Char_array *)0x0) {
label_05d50678:
    ThrowNullReferenceException();
  }
  if ((int)separator->max_length != 0) {
    separator->m_Items[0] = 0x5f;
    if ((input == (System_String_o *)0x0) ||
       (pSVar8 = System_String__Split_5304fb0(input,separator,2,(MethodInfo *)0x0),
       pSVar8 == (System_String_array *)0x0)) goto label_05d50678;
    iVar2 = (int)pSVar8->max_length;
    if (iVar2 != 0) {
      pSVar10 = pSVar8->m_Items[0];
      if (1 < iVar2) {
        if ((pSVar8->m_Items[1] == (System_String_o *)0x0) ||
           (pSVar9 = System_String__Replace_5304550
                               (pSVar8->m_Items[1],"-"," ",
                                (MethodInfo *)0x0), pSVar9 == (System_String_o *)0x0)) goto label_05d50678;
        pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
        *song = pSVar9;
        Il2CppCodeGenWriteBarrier(song);
      }
      pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
      if (pSVar8 == (System_String_array *)0x0) goto label_05d50678;
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = "--";
        Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
        if ((pSVar10 == (System_String_o *)0x0) ||
           (pSVar8 = System_String__Split_5306040(pSVar10,pSVar8,1,(MethodInfo *)0x0),
           pSVar8 == (System_String_array *)0x0)) goto label_05d50678;
        uVar6 = (uint)pSVar8->max_length;
        if ((int)uVar6 < 1) {
          return;
        }
        uVar11 = 0;
        while (uVar11 < uVar6) {
          if ((pSVar8->m_Items[(int)uVar11] == (System_String_o *)0x0) ||
             (pSVar10 = System_String__Replace_5304550
                                  (pSVar8->m_Items[(int)uVar11],"-"," ",
                                   (MethodInfo *)0x0), pSVar10 == (System_String_o *)0x0)) goto label_05d50678;
          pSVar10 = System_String__Trim(pSVar10,(MethodInfo *)0x0);
          bVar5 = System_String__IsNullOrWhiteSpace(pSVar10,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (!bVar5) {
            pSVar7 = *authors;
            if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d50678;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar7->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto label_05d50678;
            uVar6 = (pSVar7->fields)._size;
            if (uVar6 < (uint)pSVar3->max_length) {
              (pSVar7->fields)._size = uVar6 + 1;
              pSVar3->m_Items[(int)uVar6] = pSVar10;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar6);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar10,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          uVar11 = uVar11 + 1;
          uVar6 = (uint)pSVar8->max_length;
          if ((int)uVar6 <= (int)uVar11) {
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.SongPopup$$ShowNextSongPopup
// il2cpp: System_Collections_IEnumerator_o* UI_SongPopup__ShowNextSongPopup (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d50690

System_Collections_IEnumerator_o * UI_SongPopup__ShowNextSongPopup(UI_SongPopup_o *__this,MethodInfo *method)

{
  UI_SongPopup__ShowNextSongPopup_d__36_o *__this_00;
  
  if (Il2CppMethodInitialized_07547efb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SongPopup_ShowNextSongPopup_d__36);
    Il2CppMethodInitialized_07547efb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SongPopup_ShowNextSongPopup_d__36);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SongPopup$$.ctor
// il2cpp: void UI_SongPopup___ctor (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x5d50720

void UI_SongPopup___ctor(UI_SongPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


