// Type: UI.SongPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SongPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.SongPopup.<ShowNextSongPopup>d__34$$.ctor
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__34___ctor (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40d7d60

void UI_SongPopup_<ShowNextSongPopup>d__34___ctor
               (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.IDisposable.Dispose
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__34__System_IDisposable_Dispose (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x40d7d90

void UI_SongPopup_<ShowNextSongPopup>d__34__System_IDisposable_Dispose
               (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$MoveNext
// il2cpp: bool UI_SongPopup__ShowNextSongPopup_d__34__MoveNext (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x40d7da0

bool_conflict
UI_SongPopup_<ShowNextSongPopup>d__34__MoveNext
          (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  uint16_t *puVar1;
  int iVar2;
  UI_SongPopup_o *__this_00;
  System_String_o *name;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if (DAT_0570475b == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570475b = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_SongPopup_o *)0x0) {
      puVar1 = &(__this_00->fields).ienumCount;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 != 0) {
        return 0;
      }
      (*(__this_00->klass->vtable)._22_Hide.methodPtr)
                (__this_00,(__this_00->klass->vtable)._22_Hide.method);
      return 0;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    name = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    if (__this_00 != (UI_SongPopup_o *)0x0) {
      UI_SongPopup__ChangeSongInfo(__this_00,name,method_00);
      puVar1 = &(__this_00->fields).ienumCount;
      *puVar1 = *puVar1 + 1;
      (*(__this_00->klass->vtable)._21_Show.methodPtr)(__this_00);
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,5.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x40d7ea0

Il2CppObject *
UI_SongPopup_<ShowNextSongPopup>d__34__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_IEnumerator_Reset (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x40d7eb0

void UI_SongPopup_<ShowNextSongPopup>d__34__System_Collections_IEnumerator_Reset
               (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_IEnumerator_get_Current (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x40d7ef0

Il2CppObject *
UI_SongPopup_<ShowNextSongPopup>d__34__System_Collections_IEnumerator_get_Current
          (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup$$get_Width
// il2cpp: float UI_SongPopup__get_Width (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7130

float UI_SongPopup__get_Width(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 275.0;
}


// UI.SongPopup$$get_Height
// il2cpp: float UI_SongPopup__get_Height (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7140

float UI_SongPopup__get_Height(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.SongPopup$$get_DoublePanel
// il2cpp: bool UI_SongPopup__get_DoublePanel (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7150

bool_conflict UI_SongPopup__get_DoublePanel(UI_SongPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SongPopup$$get_DoublePanelDivider
// il2cpp: bool UI_SongPopup__get_DoublePanelDivider (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7160

bool_conflict UI_SongPopup__get_DoublePanelDivider(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_VerticalSpacing
// il2cpp: float UI_SongPopup__get_VerticalSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7170

float UI_SongPopup__get_VerticalSpacing(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SongPopup__get_VerticalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7180

int32_t UI_SongPopup__get_VerticalPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SongPopup__get_HorizontalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7190

int32_t UI_SongPopup__get_HorizontalPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_TopBarHeight
// il2cpp: float UI_SongPopup__get_TopBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d71a0

float UI_SongPopup__get_TopBarHeight(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarHeight
// il2cpp: float UI_SongPopup__get_BottomBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d71b0

float UI_SongPopup__get_BottomBarHeight(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarSpacing
// il2cpp: float UI_SongPopup__get_BottomBarSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d71c0

float UI_SongPopup__get_BottomBarSpacing(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarPadding
// il2cpp: int32_t UI_SongPopup__get_BottomBarPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d71d0

int32_t UI_SongPopup__get_BottomBarPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_TitleFontSize
// il2cpp: int32_t UI_SongPopup__get_TitleFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d71e0

int32_t UI_SongPopup__get_TitleFontSize(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_SongPopup__get_ButtonFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d71f0

int32_t UI_SongPopup__get_ButtonFontSize(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SongPopup__get_PopupAnimationType (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7200

int32_t UI_SongPopup__get_PopupAnimationType(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SongPopup$$Setup
// il2cpp: void UI_SongPopup__Setup (UI_SongPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40d7210

void UI_SongPopup__Setup(UI_SongPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  char cVar2;
  long lVar3;
  UnityEngine_Vector2_o offset;
  Il2CppObject *pIVar4;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar5;
  UnityEngine_UI_LayoutGroup_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UI_ElementStyle_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Component_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_GameObject_o *pUVar10;
  float fVar11;
  
  if (DAT_05704757 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Sprites/ost_cover");
    DAT_05704757 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).DoublePanelLeft;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
LAB_040d7863:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar4 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_040d7863;
  (*pIVar4->klass->vtable[0x24].methodPtr)(0x425c0000,pIVar4,pIVar4->klass->vtable[0x24].method);
  (*(__this->klass->vtable)._6_get_Height.methodPtr)
            (__this,(__this->klass->vtable)._6_get_Height.method);
  (*pIVar4->klass->vtable[0x26].methodPtr)(pIVar4,pIVar4->klass->vtable[0x26].method);
  pUVar6 = (__this->fields).DoublePanelLeft;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar5 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
  if (pUVar5 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)pUVar5,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar5,0,(MethodInfo *)0x0)
  ;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar5,0,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).DoublePanelRight;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pIVar4 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_040d7863;
  (*pIVar4->klass->vtable[0x24].methodPtr)(0x43480000,pIVar4,pIVar4->klass->vtable[0x24].method);
  (*(__this->klass->vtable)._6_get_Height.methodPtr)
            (__this,(__this->klass->vtable)._6_get_Height.method);
  (*pIVar4->klass->vtable[0x26].methodPtr)(pIVar4,pIVar4->klass->vtable[0x26].method);
  pUVar6 = (__this->fields).DoublePanelRight;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  __this_00 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar6,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
  if (__this_00 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_LayoutGroup__set_childAlignment(__this_00,4,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).DoublePanelLeft;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar6 = UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar5 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  if (pUVar5 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar5,10.0,(MethodInfo *)0x0);
  (__this->fields).Parent = parent;
  il2cpp_runtime_glue(&(__this->fields).Parent);
  pUVar6 = (__this->fields).DoublePanelLeft;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
  ;
  pUVar7 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar7,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateRawImage(pUVar6,pUVar7,"Sprites/ost_cover",32.0,32.0,(MethodInfo *)0x0)
  ;
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_040d7863;
  __this_01 = (UnityEngine_Component_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_RawImage_GetComponent_RawImage);
  if (__this_01 == (UnityEngine_Component_o *)0x0) goto LAB_040d7863;
  __this_02 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040d7863;
  UnityEngine_RectTransform__set_sizeDelta
            (__this_02,(UnityEngine_Vector2_o)0x425c0000425c0000,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).DoublePanelRight;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
  ;
  pUVar7 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar7,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUVar7,"",0,4,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_040d7863;
  pUVar9 = (UnityEngine_UI_Text_o *)
           UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
  ppUVar1 = &(__this->fields)._songName;
  (__this->fields)._songName = pUVar9;
  il2cpp_runtime_glue(ppUVar1,pUVar9);
  pUVar9 = (__this->fields)._songName;
  if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040d7863;
  (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,pUVar9,(pUVar9->klass->vtable)._23_set_color.method);
  if (*ppUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_Text__set_fontSize(*ppUVar1,0x12,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_Text__set_alignment(*ppUVar1,0,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).DoublePanelRight;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040d7863;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
  ;
  pUVar7 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar7,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_03 = UI_ElementFactory__CreateDefaultLabel
                        (pUVar6,pUVar7,"",0,4,(MethodInfo *)0x0);
  if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto LAB_040d7863;
  pUVar9 = (UnityEngine_UI_Text_o *)
           UnityEngine_GameObject__GetComponent<object>(__this_03,MethodInfo_Text_GetComponent_Text);
  ppUVar1 = &(__this->fields)._authorName;
  (__this->fields)._authorName = pUVar9;
  il2cpp_runtime_glue(ppUVar1,pUVar9);
  pUVar9 = (__this->fields)._authorName;
  if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040d7863;
  (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,pUVar9,(pUVar9->klass->vtable)._23_set_color.method);
  if (*ppUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_Text__set_fontSize(*ppUVar1,0xe,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040d7863;
  UnityEngine_UI_Text__set_alignment(*ppUVar1,8,(MethodInfo *)0x0);
  pUVar10 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar10,4,4,(UnityEngine_Vector2_o)0x41a00000,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
     (*(long *)(lVar3 + 0xc0) == 0)) goto LAB_040d7863;
  if (*(char *)(*(long *)(lVar3 + 0xc0) + 0x11) == '\0') {
    if (*(long *)(lVar3 + 200) == 0) goto LAB_040d7863;
    if (*(char *)(*(long *)(lVar3 + 200) + 0x11) != '\0') goto LAB_040d77be;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x70), lVar3 == 0)) goto LAB_040d7863;
    cVar2 = *(char *)(lVar3 + 0x11);
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (cVar2 != '\0') {
      fVar11 = -350.0;
      goto LAB_040d77cf;
    }
  }
  else {
LAB_040d77be:
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  }
  fVar11 = -15.0;
LAB_040d77cf:
  offset.fields.y = -10.0;
  offset.fields.x = fVar11;
  UI_ElementFactory__SetAnchor(pUVar10,2,2,offset,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar8,0,0,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(__this_03,8,8,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.SongPopup$$ChangeSongInfo
// il2cpp: void UI_SongPopup__ChangeSongInfo (UI_SongPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40d7870

void UI_SongPopup__ChangeSongInfo(UI_SongPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *str0;
  System_String_o *str2;
  MethodInfo *in_RCX;
  undefined8 *puVar2;
  int index;
  System_Collections_Generic_List_string__o *local_40;
  System_String_o *local_38;
  
  if (DAT_05704758 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&" and ");
    il2cpp_init_method_metadata(&"by ");
    il2cpp_init_method_metadata(&"");
    DAT_05704758 = '\x01';
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
      if (0 < (local_40->fields)._size) {
        do {
          str2 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)local_40,index,MethodInfo_String_get_Item
                           );
          puVar2 = &" and ";
          if (index == 0) {
            puVar2 = &"by ";
          }
          str0 = System_String__Concat(str0,(System_String_o *)*puVar2,str2,(MethodInfo *)0x0);
          index = index + 1;
          if (local_40 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040d79bc;
        } while (index < (local_40->fields)._size);
      }
      pUVar1 = (__this->fields)._authorName;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,str0,(pUVar1->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
LAB_040d79bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SongPopup$$ParseMusicString
// il2cpp: void UI_SongPopup__ParseMusicString (System_String_o* input, System_Collections_Generic_List_string__o** authors, System_String_o** song, const MethodInfo* method);
// 0x40d79d0

void UI_SongPopup__ParseMusicString
               (System_String_o *input,System_Collections_Generic_List_string__o **authors,
               System_String_o **song,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_String_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Char_array *separator;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  uint uVar11;
  
  if (DAT_05704759 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"-");
    il2cpp_init_method_metadata(&"--");
    DAT_05704759 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
  *authors = pSVar7;
  il2cpp_runtime_glue(authors,pSVar7);
  *song = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(song);
  bVar5 = System_String__IsNullOrWhiteSpace(input,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  separator = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char,1);
  if (separator == (System_Char_array *)0x0) {
LAB_040d7cd8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)separator->max_length != 0) {
    separator->m_Items[0] = 0x5f;
    if ((input == (System_String_o *)0x0) ||
       (pSVar8 = System_String__Split(input,separator,2,(MethodInfo *)0x0),
       pSVar8 == (System_String_array *)0x0)) goto LAB_040d7cd8;
    iVar2 = (int)pSVar8->max_length;
    if (iVar2 != 0) {
      pSVar10 = pSVar8->m_Items[0];
      if (1 < iVar2) {
        if ((pSVar8->m_Items[1] == (System_String_o *)0x0) ||
           (pSVar9 = System_String__Replace
                               (pSVar8->m_Items[1],"-"," ",(MethodInfo *)0x0),
           pSVar9 == (System_String_o *)0x0)) goto LAB_040d7cd8;
        pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
        *song = pSVar9;
        il2cpp_runtime_glue(song,pSVar9);
      }
      pSVar8 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
      if (pSVar8 == (System_String_array *)0x0) goto LAB_040d7cd8;
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = "--";
        il2cpp_runtime_glue(pSVar8->m_Items);
        if ((pSVar10 == (System_String_o *)0x0) ||
           (pSVar8 = System_String__Split(pSVar10,pSVar8,1,(MethodInfo *)0x0),
           pSVar8 == (System_String_array *)0x0)) goto LAB_040d7cd8;
        iVar2 = (int)pSVar8->max_length;
        if (iVar2 < 1) {
          return;
        }
        uVar11 = 0;
        if (iVar2 != 0) {
          do {
            if ((pSVar8->m_Items[(int)uVar11] == (System_String_o *)0x0) ||
               (pSVar10 = System_String__Replace
                                    (pSVar8->m_Items[(int)uVar11],"-"," ",
                                     (MethodInfo *)0x0), pSVar10 == (System_String_o *)0x0))
            goto LAB_040d7cd8;
            pSVar10 = System_String__Trim(pSVar10,(MethodInfo *)0x0);
            bVar5 = System_String__IsNullOrWhiteSpace(pSVar10,(MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar5 == '\0') {
              pSVar7 = *authors;
              if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040d7cd8;
              piVar1 = &(pSVar7->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar7->fields)._items;
              if (pSVar3 == (System_String_array *)0x0) goto LAB_040d7cd8;
              uVar6 = (pSVar7->fields)._size;
              if ((uint)pSVar3->max_length <= uVar6) {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,
                           (Il2CppObject *)pSVar10,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                goto LAB_040d7c17;
              }
              (pSVar7->fields)._size = uVar6 + 1;
              pSVar3->m_Items[(int)uVar6] = pSVar10;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar6,pSVar10);
              uVar6 = (uint)pSVar8->max_length;
              if ((int)uVar6 <= (int)(uVar11 + 1)) {
                return;
              }
            }
            else {
LAB_040d7c17:
              uVar6 = (uint)pSVar8->max_length;
              if ((int)uVar6 <= (int)(uVar11 + 1)) {
                return;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SongPopup$$ShowNextSongPopup
// il2cpp: System_Collections_IEnumerator_o* UI_SongPopup__ShowNextSongPopup (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7cf0

System_Collections_IEnumerator_o *
UI_SongPopup__ShowNextSongPopup(UI_SongPopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570475a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShowNextSongPopup_d__34);
    DAT_0570475a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ShowNextSongPopup_d__34);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SongPopup$$.ctor
// il2cpp: void UI_SongPopup___ctor (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x40d7d80

void UI_SongPopup___ctor(UI_SongPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


