// Type: UI.SongPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/SongPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.SongPopup.<ShowNextSongPopup>d__36$$.ctor
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__36___ctor (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_SongPopup__ShowNextSongPopup_d__36___ctor(UI_SongPopup__ShowNextSongPopup_d__36_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.IDisposable.Dispose
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__36__System_IDisposable_Dispose (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_SongPopup__ShowNextSongPopup_d__36__System_IDisposable_Dispose(UI_SongPopup__ShowNextSongPopup_d__36_o* __this, MethodInfo* method)

{
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$MoveNext
// il2cpp: bool UI_SongPopup__ShowNextSongPopup_d__36__MoveNext (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x182283060
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228316d: nop dword ptr [rax]
// asm:   0x1822831e3: jmp 0x182283170

bool UI_SongPopup__ShowNextSongPopup_d__36__MoveNext
               (UI_SongPopup__ShowNextSongPopup_d__36_o *__this,MethodInfo *method)

{
  uint16_t *puVar1;
  UI_SongPopup_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UI_SongPopup_c *pUVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  System_String_o *str1;
  int iVar6;
  System_Collections_Generic_List_string__o *local_res8;
  System_String_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184347383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184347383 = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  if (iVar6 == 0) {
    (__this->fields).__1__state = -1;
    pSVar5 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    if (pUVar2 != (UI_SongPopup_o *)0x0) {
      if (Il2CppMethodInitialized_184347380 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Item);
        il2cpp_codegen_initialize_runtime_metadata(&" and ");
        il2cpp_codegen_initialize_runtime_metadata(&"by ");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_184347380 = '\x01';
      }
      local_res8 = (System_Collections_Generic_List_string__o *)0x0;
      local_res18[0] = (System_String_o *)0x0;
      UI_SongPopup__ParseMusicString(pSVar5,&local_res8,local_res18,(MethodInfo *)0x0);
      pUVar3 = (pUVar2->fields)._songName;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,local_res18[0],(pUVar3->klass->vtable)._75_set_text.method);
        iVar6 = 0;
        pSVar5 = "";
        while (local_res8 != (System_Collections_Generic_List_string__o *)0x0) {
          if ((local_res8->fields)._size <= iVar6) {
            pUVar3 = (pUVar2->fields)._authorName;
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                        (pUVar3,pSVar5,(pUVar3->klass->vtable)._75_set_text.method);
              pUVar4 = pUVar2->klass;
              puVar1 = &(pUVar2->fields).ienumCount;
              *puVar1 = *puVar1 + 1;
              (*(pUVar4->vtable)._21_Show.methodPtr)(pUVar2,(pUVar4->vtable)._21_Show.method);
              __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(__this_00,5.0,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
              (__this->fields).__1__state = 1;
              return true;
            }
            break;
          }
          if (iVar6 == 0) {
            if (local_res8 == (System_Collections_Generic_List_string__o *)0x0) break;
            str2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)local_res8,0,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
            ;
            str1 = "by ";
          }
          else {
            if (local_res8 == (System_Collections_Generic_List_string__o *)0x0) break;
            str2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)local_res8,iVar6,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
            ;
            str1 = " and ";
          }
          pSVar5 = System_String__Concat_1969b70(pSVar5,str1,str2,(MethodInfo *)0x0);
          iVar6 = iVar6 + 1;
        }
      }
      ThrowNullReferenceException();
    }
label_1822832a9:
    ThrowNullReferenceException();
  }
  if (iVar6 == 1) {
    (__this->fields).__1__state = -1;
    if (pUVar2 == (UI_SongPopup_o *)0x0) goto label_1822832a9;
    puVar1 = &(pUVar2->fields).ienumCount;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    }
  }
  return false;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_SongPopup__ShowNextSongPopup_d__36_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_IEnumerator_Reset (UI_SongPopup__ShowNextSongPopup_d__36_o* __this, const MethodInfo* method);
// 0x1822832c0

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
// 0x180573e90

Il2CppObject*
UI_SongPopup__ShowNextSongPopup_d__36__System_Collections_IEnumerator_get_Current(UI_SongPopup__ShowNextSongPopup_d__36_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_SongPopup__get_EscapeBehavior (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_SongPopup__get_EscapeBehavior(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.SongPopup$$get_Width
// il2cpp: float UI_SongPopup__get_Width (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18227fd70

float UI_SongPopup__get_Width(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 275.0;
}


// UI.SongPopup$$get_Height
// il2cpp: float UI_SongPopup__get_Height (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x1821c3380

float
UI_SongPopup__get_Height(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 65.0;
}


// UI.SongPopup$$get_DoublePanel
// il2cpp: bool UI_SongPopup__get_DoublePanel (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SongPopup__get_DoublePanel(UI_SongPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SongPopup$$get_DoublePanelDivider
// il2cpp: bool UI_SongPopup__get_DoublePanelDivider (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_SongPopup__get_DoublePanelDivider(UI_SongPopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.SongPopup$$get_VerticalSpacing
// il2cpp: float UI_SongPopup__get_VerticalSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_SongPopup__get_VerticalSpacing(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.SongPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SongPopup__get_VerticalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_SongPopup__get_VerticalPadding(UI_SongPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.SongPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SongPopup__get_HorizontalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_SongPopup__get_HorizontalPadding(UI_SongPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.SongPopup$$get_TopBarHeight
// il2cpp: float UI_SongPopup__get_TopBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_SongPopup__get_TopBarHeight(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarHeight
// il2cpp: float UI_SongPopup__get_BottomBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_SongPopup__get_BottomBarHeight(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarSpacing
// il2cpp: float UI_SongPopup__get_BottomBarSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_SongPopup__get_BottomBarSpacing(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarPadding
// il2cpp: int32_t UI_SongPopup__get_BottomBarPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_SongPopup__get_BottomBarPadding(UI_SongPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.SongPopup$$get_TitleFontSize
// il2cpp: int32_t UI_SongPopup__get_TitleFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_SongPopup__get_TitleFontSize(UI_SongPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.SongPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_SongPopup__get_ButtonFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_SongPopup__get_ButtonFontSize(UI_SongPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.SongPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SongPopup__get_PopupAnimationType (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_SongPopup__get_PopupAnimationType(UI_SongPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.SongPopup$$Setup
// il2cpp: void UI_SongPopup__Setup (UI_SongPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18227f5e0

void UI_SongPopup__Setup(UI_SongPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_GeneralSettings_o *pSVar4;
  UnityEngine_Vector2_o offset;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UI_ElementStyle_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_GameObject_o *pUVar11;
  float fVar12;
  UnityEngine_Color_Fields local_58 [4];
  
  if (Il2CppMethodInitialized_18434737f == '\0') {
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
    Il2CppMethodInitialized_18434737f = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).DoublePanelLeft;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
label_18227fcf0:
    ThrowNullReferenceException();
  }
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar7,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18227fcf0;
  (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar5,55.0,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
  fVar12 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar5,fVar12,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
  pUVar7 = (__this->fields).DoublePanelLeft;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar7,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
  if (pUVar6 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_LayoutGroup__set_childAlignment((UnityEngine_UI_LayoutGroup_o *)pUVar6,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,false,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).DoublePanelRight;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar7,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18227fcf0;
  (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar5,200.0,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
  fVar12 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar5,fVar12,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
  pUVar7 = (__this->fields).DoublePanelRight;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar7,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
  if (pUVar6 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_LayoutGroup__set_childAlignment((UnityEngine_UI_LayoutGroup_o *)pUVar6,4,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).DoublePanelLeft;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar7 = UnityEngine_Transform__GetParent(pUVar7,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar7,
                         (MethodInfo_6651A0 *)
                         MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
  if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,10.0,(MethodInfo *)0x0);
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar7 = (__this->fields).DoublePanelLeft;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar8,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateRawImage(pUVar7,pUVar8,"Sprites/ost_cover",32.0,32.0,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_18227fcf0;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
  if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) goto label_18227fcf0;
  __this_02 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this_01,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_18227fcf0;
  UnityEngine_RectTransform__set_sizeDelta
            (__this_02,(UnityEngine_Vector2_o)0x425c0000425c0000,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).DoublePanelRight;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar8,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateDefaultLabel(pUVar7,pUVar8,"",0,4,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_18227fcf0;
  pUVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar9,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
  (__this->fields)._songName = pUVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._songName,pUVar10);
  pUVar10 = (__this->fields)._songName;
  if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_18227fcf0;
  local_58[0].r = 1.0;
  local_58[0].g = 1.0;
  local_58[0].b = 1.0;
  local_58[0].a = 1.0;
  (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
            (pUVar10,(UnityEngine_Color_o *)local_58,(pUVar10->klass->vtable)._23_set_color.method);
  pUVar10 = (__this->fields)._songName;
  if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_Text__set_fontSize(pUVar10,0x12,(MethodInfo *)0x0);
  pUVar10 = (__this->fields)._songName;
  if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_Text__set_alignment(pUVar10,0,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).DoublePanelRight;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18227fcf0;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar8,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_03 = UI_ElementFactory__CreateDefaultLabel(pUVar7,pUVar8,"",0,4,(MethodInfo *)0x0)
  ;
  if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_18227fcf0;
  pUVar10 = UnityEngine_GameObject__GetComponent_object_
                      (__this_03,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
  (__this->fields)._authorName = pUVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._authorName,pUVar10);
  pUVar10 = (__this->fields)._authorName;
  if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_18227fcf0;
  local_58[0].r = 1.0;
  local_58[0].g = 1.0;
  local_58[0].b = 1.0;
  local_58[0].a = 1.0;
  (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
            (pUVar10,(UnityEngine_Color_o *)local_58,(pUVar10->klass->vtable)._23_set_color.method);
  pUVar10 = (__this->fields)._authorName;
  if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_Text__set_fontSize(pUVar10,0xe,(MethodInfo *)0x0);
  pUVar10 = (__this->fields)._authorName;
  if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) goto label_18227fcf0;
  UnityEngine_UI_Text__set_alignment(pUVar10,8,(MethodInfo *)0x0);
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar11,4,4,(UnityEngine_Vector2_o)0x41a00000,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).GlobalMinimapDisable, pSVar3 == (Settings_BoolSetting_o *)0x0))
  goto label_18227fcf0;
  if ((pSVar3->fields)._value == false) {
    pSVar3 = (((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->fields).
             RealismMode;
    if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_18227fcf0;
    if ((pSVar3->fields)._value == false) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar4 == (Settings_GeneralSettings_o *)0x0) ||
         (pSVar3 = (pSVar4->fields).MinimapEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
      goto label_18227fcf0;
      if ((pSVar3->fields)._value != false) {
        fVar12 = -350.0;
        goto label_18227fc3e;
      }
    }
  }
  fVar12 = -15.0;
label_18227fc3e:
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  offset.fields.y = -10.0;
  offset.fields.x = fVar12;
  UI_ElementFactory__SetAnchor(pUVar11,2,2,offset,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar9,0,0,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(__this_03,8,8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.SongPopup$$ChangeSongInfo
// il2cpp: void UI_SongPopup__ChangeSongInfo (UI_SongPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18227f1f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227f2b9: nop dword ptr [rax]
// asm:   0x18227f32b: jmp 0x18227f2c0

void UI_SongPopup__ChangeSongInfo(UI_SongPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *str2;
  System_String_o *str0;
  System_String_o *str1;
  int index;
  System_Collections_Generic_List_string__o *local_res8;
  System_String_o *local_res10;
  
  if (Il2CppMethodInitialized_184347380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&" and ");
    il2cpp_codegen_initialize_runtime_metadata(&"by ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347380 = '\x01';
  }
  local_res8 = (System_Collections_Generic_List_string__o *)0x0;
  local_res10 = (System_String_o *)0x0;
  UI_SongPopup__ParseMusicString(name,&local_res8,&local_res10,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._songName;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,local_res10,(pUVar1->klass->vtable)._75_set_text.method);
    index = 0;
    str0 = "";
    while (local_res8 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((local_res8->fields)._size <= index) {
        pUVar1 = (__this->fields)._authorName;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,str0,(pUVar1->klass->vtable)._75_set_text.method);
          return;
        }
        break;
      }
      if (index == 0) {
        if (local_res8 == (System_Collections_Generic_List_string__o *)0x0) break;
        str2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)local_res8,0,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        str1 = "by ";
      }
      else {
        if (local_res8 == (System_Collections_Generic_List_string__o *)0x0) break;
        str2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)local_res8,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        str1 = " and ";
      }
      str0 = System_String__Concat_1969b70(str0,str1,str2,(MethodInfo *)0x0);
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.SongPopup$$ParseMusicString
// il2cpp: void UI_SongPopup__ParseMusicString (System_String_o* input, System_Collections_Generic_List_string__o** authors, System_String_o** song, const MethodInfo* method);
// 0x18227f370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227f55f: nop 

void UI_SongPopup__ParseMusicString
               (System_String_o *input,System_Collections_Generic_List_string__o **authors,
               System_String_o **song,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this;
  System_Char_array *separator;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184347381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    Il2CppMethodInitialized_184347381 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  *authors = __this;
  Il2CppCodeGenWriteBarrier(authors,__this);
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  *song = pSVar4;
  Il2CppCodeGenWriteBarrier(song,pSVar4);
  bVar1 = System_String__IsNullOrWhiteSpace(input,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length != 0) {
      separator->m_Items[0] = 0x5f;
      if ((input == (System_String_o *)0x0) ||
         (pSVar2 = System_String__Split_19720e0(input,separator,2,(MethodInfo *)0x0),
         pSVar2 == (System_String_array *)0x0)) goto label_18227f5da;
      if ((int)pSVar2->max_length != 0) {
        uVar5 = (uint)pSVar2->max_length;
        pSVar4 = pSVar2->m_Items[0];
        if (1 < (int)uVar5) {
          if (uVar5 < 2) goto label_18227f5d4;
          if ((pSVar2->m_Items[1] == (System_String_o *)0x0) ||
             (pSVar3 = System_String__Replace_1970e80
                                 (pSVar2->m_Items[1],"-"," ",
                                  (MethodInfo *)0x0), pSVar3 == (System_String_o *)0x0)) goto label_18227f5da;
          pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
          *song = pSVar3;
          Il2CppCodeGenWriteBarrier(song,pSVar3);
        }
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
        pSVar3 = "--";
        if (pSVar2 == (System_String_array *)0x0) goto label_18227f5da;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "--";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
          if ((pSVar4 == (System_String_o *)0x0) ||
             (pSVar2 = System_String__Split_1971fe0(pSVar4,pSVar2,1,(MethodInfo *)0x0),
             pSVar2 == (System_String_array *)0x0)) goto label_18227f5da;
          uVar5 = 0;
          while( true ) {
            if ((int)pSVar2->max_length <= (int)uVar5) {
              return;
            }
            if ((uint)pSVar2->max_length <= uVar5) break;
            if ((pSVar2->m_Items[(int)uVar5] == (System_String_o *)0x0) ||
               (pSVar4 = System_String__Replace_1970e80
                                   (pSVar2->m_Items[(int)uVar5],"-"," ",
                                    (MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0)) goto label_18227f5da;
            pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
            bVar1 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
            if (!bVar1) {
              if (*authors == (System_Collections_Generic_List_string__o *)0x0) goto label_18227f5da;
              il2cpp_runtime_helper_180012890(*authors,pSVar4,MethodInfo_System_Collections_Generic_List_string_Add);
            }
            uVar5 = uVar5 + 1;
          }
        }
      }
    }
label_18227f5d4:
    ThrowIndexOutOfRangeException();
  }
label_18227f5da:
  ThrowNullReferenceException();
}


// UI.SongPopup$$ShowNextSongPopup
// il2cpp: System_Collections_IEnumerator_o* UI_SongPopup__ShowNextSongPopup (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x18227fd00

System_Collections_IEnumerator_o * UI_SongPopup__ShowNextSongPopup(UI_SongPopup_o *__this,MethodInfo *method)

{
  UI_SongPopup__ShowNextSongPopup_d__36_o *__this_00;
  
  if (Il2CppMethodInitialized_184347382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SongPopup_ShowNextSongPopup_d__36);
    Il2CppMethodInitialized_184347382 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SongPopup_ShowNextSongPopup_d__36);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SongPopup$$.ctor
// il2cpp: void UI_SongPopup___ctor (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_SongPopup___ctor(UI_SongPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


