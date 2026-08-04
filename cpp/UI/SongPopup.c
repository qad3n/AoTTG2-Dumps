// Type: UI.SongPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SongPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.SongPopup.<ShowNextSongPopup>d__34$$.ctor
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__34___ctor (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43ea780

void UI_SongPopup__ShowNextSongPopup_d__34___ctor
               (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.IDisposable.Dispose
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__34__System_IDisposable_Dispose (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x43ea7b0

void UI_SongPopup__ShowNextSongPopup_d__34__System_IDisposable_Dispose
               (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$MoveNext
// il2cpp: bool UI_SongPopup__ShowNextSongPopup_d__34__MoveNext (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x43ea7c0

bool_conflict
UI_SongPopup__ShowNextSongPopup_d__34__MoveNext
          (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  uint16_t *puVar1;
  int iVar2;
  UI_SongPopup_o *__this_00;
  System_String_o *name;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar3;
  MethodInfo *method_00;
  UI_SongPopup__ShowNextSongPopup_d__34_o *pUVar4;
  
  pUVar4 = __this;
  if (g_data_057ae4ec == '\0') {
    pUVar4 = (UI_SongPopup__ShowNextSongPopup_d__34_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ec = '\x01';
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
      (*(__this_00->klass->vtable)._22_Hide.methodPtr)(__this_00,(__this_00->klass->vtable)._22_Hide.method);
      return 0;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar4 = (UI_SongPopup__ShowNextSongPopup_d__34_o *)0x0;
    name = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    if (__this_00 != (UI_SongPopup_o *)0x0) {
      UI_SongPopup__ChangeSongInfo(__this_00,name,method_00);
      puVar1 = &(__this_00->fields).ienumCount;
      *puVar1 = *puVar1 + 1;
      (*(__this_00->klass->vtable)._21_Show.methodPtr)(__this_00);
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,5.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pUVar4->fields).__2__current;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x43ea8c0

Il2CppObject *
UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_IEnumerator_Reset (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x43ea8d0

void UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_IEnumerator_Reset
               (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.SongPopup.<ShowNextSongPopup>d__34$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_IEnumerator_get_Current (UI_SongPopup__ShowNextSongPopup_d__34_o* __this, const MethodInfo* method);
// 0x43ea910

Il2CppObject *
UI_SongPopup__ShowNextSongPopup_d__34__System_Collections_IEnumerator_get_Current
          (UI_SongPopup__ShowNextSongPopup_d__34_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SongPopup$$get_Width
// il2cpp: float UI_SongPopup__get_Width (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9b50

float UI_SongPopup__get_Width(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 275.0;
}


// UI.SongPopup$$get_Height
// il2cpp: float UI_SongPopup__get_Height (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9b60

float UI_SongPopup__get_Height(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.SongPopup$$get_DoublePanel
// il2cpp: bool UI_SongPopup__get_DoublePanel (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9b70

bool_conflict UI_SongPopup__get_DoublePanel(UI_SongPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SongPopup$$get_DoublePanelDivider
// il2cpp: bool UI_SongPopup__get_DoublePanelDivider (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9b80

bool_conflict UI_SongPopup__get_DoublePanelDivider(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_VerticalSpacing
// il2cpp: float UI_SongPopup__get_VerticalSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9b90

float UI_SongPopup__get_VerticalSpacing(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SongPopup__get_VerticalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9ba0

int32_t UI_SongPopup__get_VerticalPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SongPopup__get_HorizontalPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9bb0

int32_t UI_SongPopup__get_HorizontalPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_TopBarHeight
// il2cpp: float UI_SongPopup__get_TopBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9bc0

float UI_SongPopup__get_TopBarHeight(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarHeight
// il2cpp: float UI_SongPopup__get_BottomBarHeight (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9bd0

float UI_SongPopup__get_BottomBarHeight(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarSpacing
// il2cpp: float UI_SongPopup__get_BottomBarSpacing (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9be0

float UI_SongPopup__get_BottomBarSpacing(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.SongPopup$$get_BottomBarPadding
// il2cpp: int32_t UI_SongPopup__get_BottomBarPadding (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9bf0

int32_t UI_SongPopup__get_BottomBarPadding(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_TitleFontSize
// il2cpp: int32_t UI_SongPopup__get_TitleFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9c00

int32_t UI_SongPopup__get_TitleFontSize(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_SongPopup__get_ButtonFontSize (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9c10

int32_t UI_SongPopup__get_ButtonFontSize(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SongPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_SongPopup__get_PopupAnimationType (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43e9c20

int32_t UI_SongPopup__get_PopupAnimationType(UI_SongPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SongPopup$$Setup
// il2cpp: void UI_SongPopup__Setup (UI_SongPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43e9c30

void UI_SongPopup__Setup(UI_SongPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Text_c *pUVar6;
  long lVar7;
  Settings_StringSetting_o *pSVar8;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar9;
  System_String_array *pSVar10;
  UnityEngine_Vector2_o offset;
  bool_conflict bVar11;
  uint uVar12;
  System_String_Fields SVar13;
  UnityEngine_UI_LayoutGroup_o *__this_00;
  UI_BasePanel_o *pUVar14;
  UI_BasePanel_o *pUVar15;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  System_String_Fields input;
  UI_BasePanel_o *__this_03;
  UI_BasePanel_o *__this_04;
  UnityEngine_GameObject_o *obj;
  System_String_o *str2;
  System_String_c *__this_05;
  System_Char_array *separator;
  System_String_array *pSVar16;
  System_String_o *pSVar17;
  Il2CppClass *pIVar18;
  Il2CppObject *__this_06;
  System_String_Fields *in_RCX;
  undefined8 *puVar19;
  undefined8 *extraout_RDX;
  int32_t index;
  uint uVar20;
  System_String_Fields unaff_RBX;
  System_String_Fields *unaff_RBP;
  undefined4 uVar21;
  System_String_o *str1;
  Il2CppClass *__this_07;
  Il2CppObject *__this_08;
  UI_BasePanel_o *unaff_R12;
  UI_BasePanel_o *unaff_R15;
  float fVar22;
  System_String_o SStack_78;
  UI_BasePanel_o *pUStack_60;
  UI_SongPopup_o *pUStack_58;
  UI_BasePanel_o *pUStack_50;
  UI_BasePanel_o *pUStack_48;
  System_String_Fields *pSStack_40;
  
  if (g_data_057ae4e8 == '\0') {
    pSStack_40 = (System_String_Fields *)0x43e9c5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    pSStack_40 = (System_String_Fields *)0x43e9c66;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_40 = (System_String_Fields *)0x43e9c72;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_40 = (System_String_Fields *)0x43e9c7e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pSStack_40 = (System_String_Fields *)0x43e9c8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pSStack_40 = (System_String_Fields *)0x43e9c96;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    pSStack_40 = (System_String_Fields *)0x43e9ca2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pSStack_40 = (System_String_Fields *)0x43e9cae;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_40 = (System_String_Fields *)0x43e9cba;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pSStack_40 = (System_String_Fields *)0x43e9cc6;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pSStack_40 = (System_String_Fields *)0x43e9cd2;
    il2cpp_runtime_helper_023445d0(&"");
    pSStack_40 = (System_String_Fields *)0x43e9cde;
    il2cpp_runtime_helper_023445d0(&"Sprites/ost_cover");
    g_data_057ae4e8 = '\x01';
  }
  pSStack_40 = (System_String_Fields *)0x43e9cf2;
  input = (System_String_Fields)parent;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_04 = (UI_BasePanel_o *)(__this->fields).DoublePanelLeft;
  if (__this_04 != (UI_BasePanel_o *)0x0) {
    pSStack_40 = (System_String_Fields *)0x43e9d0e;
    input = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    SVar13 = (System_String_Fields)
             UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_04,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
    unaff_R15 = (UI_BasePanel_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (SVar13 != (System_String_Fields)0x0) {
      pSStack_40 = (System_String_Fields *)0x43e9d35;
      (**(code **)(*(long *)SVar13 + 0x378))(0x425c0000,SVar13,*(undefined8 *)(*(long *)SVar13 + 0x380));
      pSStack_40 = (System_String_Fields *)0x43e9d49;
      (*(__this->klass->vtable)._6_get_Height.methodPtr)(__this,(__this->klass->vtable)._6_get_Height.method);
      input = *(System_String_Fields *)(*(long *)SVar13 + 0x3a0);
      pSStack_40 = (System_String_Fields *)0x43e9d5c;
      (**(code **)(*(long *)SVar13 + 0x398))(SVar13);
      __this_04 = (UI_BasePanel_o *)(__this->fields).DoublePanelLeft;
      unaff_RBX = SVar13;
      if (__this_04 != (UI_BasePanel_o *)0x0) {
        unaff_RBP = &MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
        pSStack_40 = (System_String_Fields *)0x43e9d79;
        input = MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
        SVar13 = (System_String_Fields)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_04,(MethodInfo_24E7B40 *)MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        if (SVar13 != (System_String_Fields)0x0) {
          pSStack_40 = (System_String_Fields *)0x43e9d94;
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)SVar13,4,(MethodInfo *)0x0);
          pSStack_40 = (System_String_Fields *)0x43e9da0;
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)SVar13,0,(MethodInfo *)0x0);
          input._stringLength = 0;
          input._firstChar = 0;
          input._6_2_ = 0;
          pSStack_40 = (System_String_Fields *)0x43e9dac;
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)SVar13,0,(MethodInfo *)0x0);
          __this_04 = (UI_BasePanel_o *)(__this->fields).DoublePanelRight;
          unaff_RBX = SVar13;
          if (__this_04 != (UI_BasePanel_o *)0x0) {
            pSStack_40 = (System_String_Fields *)0x43e9dc1;
            input = MethodInfo_LayoutElement_GetComponent_LayoutElement;
            SVar13 = (System_String_Fields)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_04,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (SVar13 != (System_String_Fields)0x0) {
              pSStack_40 = (System_String_Fields *)0x43e9de8;
              (**(code **)(*(long *)SVar13 + 0x378))
                        (0x43480000,SVar13,*(undefined8 *)(*(long *)SVar13 + 0x380));
              pSStack_40 = (System_String_Fields *)0x43e9dfc;
              (*(__this->klass->vtable)._6_get_Height.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_Height.method);
              input = *(System_String_Fields *)(*(long *)SVar13 + 0x3a0);
              pSStack_40 = (System_String_Fields *)0x43e9e0f;
              (**(code **)(*(long *)SVar13 + 0x398))(SVar13);
              __this_04 = (UI_BasePanel_o *)(__this->fields).DoublePanelRight;
              unaff_RBX = SVar13;
              if (__this_04 != (UI_BasePanel_o *)0x0) {
                pSStack_40 = (System_String_Fields *)0x43e9e25;
                input = MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
                __this_00 = (UnityEngine_UI_LayoutGroup_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo_24E7B40 *)MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup
                                      );
                if (__this_00 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
                  input._stringLength = 4;
                  input._firstChar = 0;
                  input._6_2_ = 0;
                  pSStack_40 = (System_String_Fields *)0x43e9e3d;
                  UnityEngine_UI_LayoutGroup__set_childAlignment(__this_00,4,(MethodInfo *)0x0);
                  __this_04 = (UI_BasePanel_o *)(__this->fields).DoublePanelLeft;
                  if (__this_04 != (UI_BasePanel_o *)0x0) {
                    input._stringLength = 0;
                    input._firstChar = 0;
                    input._6_2_ = 0;
                    pSStack_40 = (System_String_Fields *)0x43e9e51;
                    pUVar14 = (UI_BasePanel_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                    if (pUVar14 != (UI_BasePanel_o *)0x0) {
                      input._stringLength = 0;
                      input._firstChar = 0;
                      input._6_2_ = 0;
                      pSStack_40 = (System_String_Fields *)0x43e9e64;
                      pUVar15 = (UI_BasePanel_o *)
                                UnityEngine_Transform__get_parent
                                          ((UnityEngine_Transform_o *)pUVar14,(MethodInfo *)0x0);
                      __this_04 = pUVar14;
                      if (pUVar15 != (UI_BasePanel_o *)0x0) {
                        in_RCX = &MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup;
                        pSStack_40 = (System_String_Fields *)0x43e9e7f;
                        input = MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup;
                        __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                    UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar15,
                                               (MethodInfo_24E7B40 *)MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                        __this_04 = pUVar15;
                        if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                          pSStack_40 = (System_String_Fields *)0x43e9e9a;
                          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                    (__this_01,10.0,(MethodInfo *)0x0);
                          (__this->fields).Parent = parent;
                          pSStack_40 = (System_String_Fields *)0x43e9eaa;
                          input = (System_String_Fields)parent;
                          il2cpp_runtime_helper_022b4080(&(__this->fields).Parent);
                          pUVar4 = (__this->fields).DoublePanelLeft;
                          __this_04 = (UI_BasePanel_o *)0x0;
                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                            pSStack_40 = (System_String_Fields *)0x43e9ebe;
                            parent = (UI_BasePanel_o *)
                                     UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                            pSStack_40 = (System_String_Fields *)0x43e9ed1;
                            unaff_RBX = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                            pSStack_40 = (System_String_Fields *)0x43e9efe;
                            UI_ElementStyle___ctor
                                      ((UI_ElementStyle_o *)unaff_RBX,0x18,120.0,20.0,"DefaultPanel",
                                       (MethodInfo *)0x0);
                            in_RCX = (System_String_Fields *)0x0;
                            pSStack_40 = (System_String_Fields *)0x43e9f20;
                            input = unaff_RBX;
                            __this_04 = parent;
                            pUVar14 = (UI_BasePanel_o *)
                                      UI_ElementFactory__CreateRawImage
                                                ((UnityEngine_Transform_o *)parent,
                                                 (UI_ElementStyle_o *)unaff_RBX,"Sprites/ost_cover",32.0,32.0,
                                                 (MethodInfo *)0x0);
                            unaff_RBP = (System_String_Fields *)&"DefaultPanel";
                            unaff_R12 = (UI_BasePanel_o *)&TypeInfo_ElementStyle;
                            if (pUVar14 != (UI_BasePanel_o *)0x0) {
                              in_RCX = &MethodInfo_RawImage_GetComponent_RawImage;
                              pSStack_40 = (System_String_Fields *)0x43e9f3b;
                              input = MethodInfo_RawImage_GetComponent_RawImage;
                              pUVar15 = (UI_BasePanel_o *)
                                        UnityEngine_GameObject__GetComponent_object_
                                                  ((UnityEngine_GameObject_o *)pUVar14,
                                                   (MethodInfo_255A0F0 *)MethodInfo_RawImage_GetComponent_RawImage);
                              __this_04 = pUVar14;
                              if (pUVar15 != (UI_BasePanel_o *)0x0) {
                                pSStack_40 = (System_String_Fields *)0x43e9f59;
                                input = MethodInfo_RectTransform_GetComponent_RectTransform;
                                __this_04 = pUVar15;
                                __this_02 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar15,
                                                       (MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                                unaff_R15 = pUVar15;
                                if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                                  input._stringLength = 0;
                                  input._firstChar = 0;
                                  input._6_2_ = 0;
                                  pSStack_40 = (System_String_Fields *)0x43e9f73;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (__this_02,(UnityEngine_Vector2_o)0x425c0000425c0000,
                                             (MethodInfo *)0x0);
                                  pUVar4 = (__this->fields).DoublePanelRight;
                                  __this_04 = (UI_BasePanel_o *)0x0;
                                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                    pSStack_40 = (System_String_Fields *)0x43e9f87;
                                    parent = (UI_BasePanel_o *)
                                             UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                                    pSStack_40 = (System_String_Fields *)0x43e9f93;
                                    unaff_RBX = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                    pSStack_40 = (System_String_Fields *)0x43e9fb9;
                                    UI_ElementStyle___ctor
                                              ((UI_ElementStyle_o *)unaff_RBX,0x18,120.0,20.0,"DefaultPanel",
                                               (MethodInfo *)0x0);
                                    in_RCX = (System_String_Fields *)0x0;
                                    pSStack_40 = (System_String_Fields *)0x43e9fd9;
                                    input = unaff_RBX;
                                    __this_04 = parent;
                                    pUVar14 = (UI_BasePanel_o *)
                                              UI_ElementFactory__CreateDefaultLabel
                                                        ((UnityEngine_Transform_o *)parent,
                                                         (UI_ElementStyle_o *)unaff_RBX,"",0,4,
                                                         (MethodInfo *)0x0);
                                    if (pUVar14 != (UI_BasePanel_o *)0x0) {
                                      pSStack_40 = (System_String_Fields *)0x43e9ff8;
                                      input = (System_String_Fields)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_Text_GetComponent_Text);
                                      unaff_RBX = (System_String_Fields)&(__this->fields)._songName;
                                      (__this->fields)._songName = (UnityEngine_UI_Text_o *)input;
                                      pSStack_40 = (System_String_Fields *)0x43ea011;
                                      il2cpp_runtime_helper_022b4080(unaff_RBX);
                                      pUVar5 = (__this->fields)._songName;
                                      __this_04 = (UI_BasePanel_o *)0x0;
                                      unaff_RBP = (System_String_Fields *)&MethodInfo_Text_GetComponent_Text;
                                      parent = pUVar14;
                                      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                                        pUVar6 = pUVar5->klass;
                                        input = (System_String_Fields)(pUVar6->vtable)._23_set_color.method;
                                        pSStack_40 = (System_String_Fields *)0x43ea03b;
                                        (*(pUVar6->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
                                        __this_04 = (UI_BasePanel_o *)0x0;
                                        if (*(UnityEngine_UI_Text_o **)unaff_RBX !=
                                            (UnityEngine_UI_Text_o *)0x0) {
                                          input._stringLength = 0x12;
                                          input._firstChar = 0;
                                          input._6_2_ = 0;
                                          pSStack_40 = (System_String_Fields *)0x43ea053;
                                          UnityEngine_UI_Text__set_fontSize
                                                    (*(UnityEngine_UI_Text_o **)unaff_RBX,0x12,
                                                     (MethodInfo *)0x0);
                                          pUVar5 = *(UnityEngine_UI_Text_o **)unaff_RBX;
                                          __this_04 = (UI_BasePanel_o *)0x0;
                                          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                                            unaff_RBX = (System_String_Fields)&TypeInfo_ElementStyle;
                                            input._stringLength = 0;
                                            input._firstChar = 0;
                                            input._6_2_ = 0;
                                            pSStack_40 = (System_String_Fields *)0x43ea06b;
                                            UnityEngine_UI_Text__set_alignment(pUVar5,0,(MethodInfo *)0x0);
                                            pUVar4 = (__this->fields).DoublePanelRight;
                                            __this_04 = (UI_BasePanel_o *)0x0;
                                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                              pSStack_40 = (System_String_Fields *)0x43ea07f;
                                              unaff_R12 = (UI_BasePanel_o *)
                                                          UnityEngine_Component__get_transform
                                                                    ((UnityEngine_Component_o *)pUVar4,
                                                                     (MethodInfo *)0x0);
                                              pSStack_40 = (System_String_Fields *)0x43ea08a;
                                              unaff_RBX = (System_String_Fields)
                                                          il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                              pSStack_40 = (System_String_Fields *)0x43ea0b6;
                                              UI_ElementStyle___ctor
                                                        ((UI_ElementStyle_o *)unaff_RBX,0x18,120.0,20.0,
                                                         "DefaultPanel",(MethodInfo *)0x0);
                                              in_RCX = (System_String_Fields *)0x0;
                                              pSStack_40 = (System_String_Fields *)0x43ea0d6;
                                              input = unaff_RBX;
                                              __this_04 = unaff_R12;
                                              __this_03 = (UI_BasePanel_o *)
                                                          UI_ElementFactory__CreateDefaultLabel
                                                                    ((UnityEngine_Transform_o *)unaff_R12,
                                                                     (UI_ElementStyle_o *)unaff_RBX,
                                                                     "",0,4,(MethodInfo *)0x0);
                                              if (__this_03 != (UI_BasePanel_o *)0x0) {
                                                pSStack_40 = (System_String_Fields *)0x43ea0ee;
                                                input = (System_String_Fields)
                                                        UnityEngine_GameObject__GetComponent_object_
                                                                  ((UnityEngine_GameObject_o *)__this_03,
                                                                   MethodInfo_Text_GetComponent_Text);
                                                unaff_RBX = (System_String_Fields)
                                                            &(__this->fields)._authorName;
                                                (__this->fields)._authorName = (UnityEngine_UI_Text_o *)input;
                                                pSStack_40 = (System_String_Fields *)0x43ea107;
                                                il2cpp_runtime_helper_022b4080(unaff_RBX);
                                                pUVar5 = (__this->fields)._authorName;
                                                __this_04 = (UI_BasePanel_o *)0x0;
                                                unaff_R12 = __this_03;
                                                if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                                                  pUVar6 = pUVar5->klass;
                                                  input = (System_String_Fields)
                                                          (pUVar6->vtable)._23_set_color.method;
                                                  pSStack_40 = (System_String_Fields *)0x43ea131;
                                                  (*(pUVar6->vtable)._23_set_color.methodPtr)
                                                            (0x3f800000,0x3f800000);
                                                  __this_04 = (UI_BasePanel_o *)0x0;
                                                  if (*(UnityEngine_UI_Text_o **)unaff_RBX !=
                                                      (UnityEngine_UI_Text_o *)0x0) {
                                                    input._stringLength = 0xe;
                                                    input._firstChar = 0;
                                                    input._6_2_ = 0;
                                                    pSStack_40 = (System_String_Fields *)0x43ea149;
                                                    UnityEngine_UI_Text__set_fontSize
                                                              (*(UnityEngine_UI_Text_o **)unaff_RBX,0xe,
                                                               (MethodInfo *)0x0);
                                                    __this_04 = (UI_BasePanel_o *)0x0;
                                                    if (*(UnityEngine_UI_Text_o **)unaff_RBX !=
                                                        (UnityEngine_UI_Text_o *)0x0) {
                                                      pSStack_40 = (System_String_Fields *)0x43ea161;
                                                      UnityEngine_UI_Text__set_alignment
                                                                (*(UnityEngine_UI_Text_o **)unaff_RBX,8,
                                                                 (MethodInfo *)0x0);
                                                      pSStack_40 = (System_String_Fields *)0x43ea16b;
                                                      __this_04 = (UI_BasePanel_o *)
                                                                  UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pUVar15,(MethodInfo *)0x0);
                                                      input._stringLength = 4;
                                                      input._firstChar = 0;
                                                      input._6_2_ = 0;
                                                      pSStack_40 = (System_String_Fields *)0x43ea187;
                                                      UI_ElementFactory__SetAnchor
                                                                ((UnityEngine_GameObject_o *)__this_04,4,4,
                                                                 (UnityEngine_Vector2_o)0x41a00000,
                                                                 (MethodInfo *)0x0);
                                                      lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50)
                                                      ;
                                                      in_RCX = (System_String_Fields *)0x0;
                                                      if (((lVar7 != 0) &&
                                                          (in_RCX = *(System_String_Fields **)(lVar7 + 0x58),
                                                          (MethodInfo *)in_RCX != (MethodInfo *)0x0)) &&
                                                         (((MethodInfo *)((long)in_RCX + 0xb0))->
                                                          invoker_method != (InvokerMethod)0x0)) {
                                                        if (((MethodInfo *)((long)in_RCX + 0xb0))->
                                                            invoker_method[0x11] == (InvokerMethod)0x0) {
                                                          in_RCX = (System_String_Fields *)
                                                                   ((MethodInfo *)((long)in_RCX + 0xb0))->name
                                                          ;
                                                          if ((MethodInfo *)in_RCX == (MethodInfo *)0x0)
                                                          goto label_043ea283;
                                                          if (*(char *)((long)&((MethodInfo *)in_RCX)->
                                                                               invoker_method + 1) != '\0')
                                                          goto label_043ea1de;
                                                          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                           0x20);
                                                          if ((lVar7 == 0) ||
                                                             (lVar7 = *(long *)(lVar7 + 0x70), lVar7 == 0))
                                                          goto label_043ea283;
                                                          cVar2 = *(char *)(lVar7 + 0x11);
                                                          pSStack_40 = (System_String_Fields *)0x43ea26f;
                                                          obj = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)__this,
                                                                           (MethodInfo *)0x0);
                                                          if (cVar2 != '\0') {
                                                            fVar22 = -350.0;
                                                            goto label_043ea1ef;
                                                          }
                                                        }
                                                        else {
label_043ea1de:
                                                          pSStack_40 = (System_String_Fields *)0x43ea1e8;
                                                          obj = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)__this,
                                                                           (MethodInfo *)0x0);
                                                        }
                                                        fVar22 = -15.0;
label_043ea1ef:
                                                        pSStack_40 = (System_String_Fields *)0x43ea203;
                                                        offset.fields.y = -10.0;
                                                        offset.fields.x = fVar22;
                                                        UI_ElementFactory__SetAnchor
                                                                  (obj,2,2,offset,(MethodInfo *)0x0);
                                                        pSStack_40 = (System_String_Fields *)0x43ea214;
                                                        UI_ElementFactory__SetAnchor
                                                                  ((UnityEngine_GameObject_o *)pUVar14,0,0,
                                                                   (UnityEngine_Vector2_o)0x0,
                                                                   (MethodInfo *)0x0);
                                                        pSStack_40 = (System_String_Fields *)0x43ea22b;
                                                        UI_ElementFactory__SetAnchor
                                                                  ((UnityEngine_GameObject_o *)__this_03,8,8,
                                                                   (UnityEngine_Vector2_o)0x0,
                                                                   (MethodInfo *)0x0);
                                                        (*(__this->klass->vtable)._22_Hide.methodPtr)
                                                                  (__this,(__this->klass->vtable)._22_Hide.
                                                                          method);
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
    }
  }
label_043ea283:
  pSStack_40 = (System_String_Fields *)0x43ea288;
  il2cpp_runtime_helper_022b2c90();
  SStack_78.fields = unaff_RBX;
  pUStack_60 = unaff_R12;
  pUStack_58 = __this;
  pUStack_50 = parent;
  pUStack_48 = unaff_R15;
  pSStack_40 = unaff_RBP;
  if (g_data_057ae4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&" and ");
    il2cpp_runtime_helper_023445d0(&"by ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae4e9 = '\x01';
  }
  SStack_78.klass = (System_String_c *)0x0;
  SStack_78.monitor = (System_String_o *)0x0;
  str1 = &SStack_78;
  UI_SongPopup__ParseMusicString
            ((System_String_o *)input,(System_Collections_Generic_List_string__o **)str1,&SStack_78.monitor,
             (MethodInfo *)in_RCX);
  pSVar8 = __this_04[1].fields._currentCategoryPanelName;
  if ((pSVar8 != (Settings_StringSetting_o *)0x0) &&
     (str1 = SStack_78.monitor,
     (*pSVar8->klass[3]._1.this_arg.data)
               (pSVar8,SStack_78.monitor,*(undefined8 *)&pSVar8->klass[3]._1.this_arg.bits),
     SStack_78.klass != (System_String_c *)0x0)) {
    index = 0;
    pSVar17 = "";
    if (0 < *(int *)&((SStack_78.klass)->_1).namespaze) {
      do {
        str2 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)SStack_78.klass,index,MethodInfo_String_get_Item);
        puVar19 = &" and ";
        if (index == 0) {
          puVar19 = &"by ";
        }
        str1 = (System_String_o *)*puVar19;
        pSVar17 = System_String__Concat_3af7150(pSVar17,str1,str2,(MethodInfo *)0x0);
        index = index + 1;
        if (SStack_78.klass == (System_String_c *)0x0) goto label_043ea3dc;
      } while (index < *(int *)&((SStack_78.klass)->_1).namespaze);
    }
    pSVar9 = __this_04[1].fields._categoryPanelTypes;
    if (pSVar9 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      (*(code *)pSVar9->klass[1].vtable._9_Add.method)
                (pSVar9,pSVar17,pSVar9->klass[1].vtable._10_Remove.methodPtr);
      return;
    }
  }
label_043ea3dc:
  pIVar18 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"--");
    g_data_057ae4ea = '\x01';
  }
  __this_05 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
  str1->klass = __this_05;
  il2cpp_runtime_helper_022b4080(str1,__this_05);
  *extraout_RDX = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(extraout_RDX);
  bVar11 = System_String__IsNullOrWhiteSpace((System_String_o *)pIVar18,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  __this_07 = TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) goto label_043ea6fd;
    separator->m_Items[0] = 0x5f;
    if ((pIVar18 != (Il2CppClass *)0x0) &&
       (pSVar16 = System_String__Split_3af9ad0((System_String_o *)pIVar18,separator,2,(MethodInfo *)0x0),
       __this_07 = pIVar18, pSVar16 != (System_String_array *)0x0)) {
      iVar3 = (int)pSVar16->max_length;
      if (iVar3 == 0) goto label_043ea6fd;
      pIVar18 = (Il2CppClass *)pSVar16->m_Items[0];
      if (1 < iVar3) {
        __this_07 = (Il2CppClass *)pSVar16->m_Items[1];
        if ((__this_07 == (Il2CppClass *)0x0) ||
           (pSVar17 = System_String__Replace_3af9030
                                ((System_String_o *)__this_07,"-"," ",(MethodInfo *)0x0),
           pSVar17 == (System_String_o *)0x0)) goto label_043ea6f8;
        pSVar17 = System_String__Trim(pSVar17,(MethodInfo *)0x0);
        *extraout_RDX = pSVar17;
        il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar17);
      }
      __this_07 = TypeInfo_string;
      pSVar16 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      if (pSVar16 != (System_String_array *)0x0) {
        if ((int)pSVar16->max_length == 0) goto label_043ea6fd;
        __this_07 = (Il2CppClass *)pSVar16->m_Items;
        pSVar16->m_Items[0] = "--";
        il2cpp_runtime_helper_022b4080();
        if ((pIVar18 != (Il2CppClass *)0x0) &&
           (pSVar16 = System_String__Split_3afab90((System_String_o *)pIVar18,pSVar16,1,(MethodInfo *)0x0),
           __this_07 = pIVar18, pSVar16 != (System_String_array *)0x0)) {
          iVar3 = (int)pSVar16->max_length;
          if (iVar3 < 1) {
            return;
          }
          uVar20 = 0;
          if (iVar3 != 0) {
            do {
              __this_07 = (Il2CppClass *)pSVar16->m_Items[(int)uVar20];
              if ((__this_07 == (Il2CppClass *)0x0) ||
                 (pSVar17 = System_String__Replace_3af9030
                                      ((System_String_o *)__this_07,"-"," ",
                                       (MethodInfo *)0x0), pSVar17 == (System_String_o *)0x0))
              goto label_043ea6f8;
              pIVar18 = (Il2CppClass *)System_String__Trim(pSVar17,(MethodInfo *)0x0);
              __this_07 = pIVar18;
              bVar11 = System_String__IsNullOrWhiteSpace((System_String_o *)pIVar18,(MethodInfo *)0x0);
              lVar7 = MethodInfo_Void_Add;
              if ((char)bVar11 == '\0') {
                __this_07 = (Il2CppClass *)str1->klass;
                if (__this_07 == (Il2CppClass *)0x0) goto label_043ea6f8;
                piVar1 = (int32_t *)((long)&(__this_07->_1).namespaze + 4);
                *piVar1 = *piVar1 + 1;
                pSVar10 = ((System_Collections_Generic_List_string__Fields *)&(__this_07->_1).name)->_items;
                if (pSVar10 == (System_String_array *)0x0) goto label_043ea6f8;
                uVar12 = *(uint *)&(__this_07->_1).namespaze;
                if ((uint)pSVar10->max_length <= uVar12) {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_07,(Il2CppObject *)pIVar18,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  goto label_043ea637;
                }
                *(uint *)&(__this_07->_1).namespaze = uVar12 + 1;
                __this_07 = (Il2CppClass *)(pSVar10->m_Items + (int)uVar12);
                pSVar10->m_Items[(int)uVar12] = (System_String_o *)pIVar18;
                il2cpp_runtime_helper_022b4080();
                uVar12 = (uint)pSVar16->max_length;
                if ((int)uVar12 <= (int)(uVar20 + 1)) {
                  return;
                }
              }
              else {
label_043ea637:
                uVar12 = (uint)pSVar16->max_length;
                if ((int)uVar12 <= (int)(uVar20 + 1)) {
                  return;
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar12);
          }
          goto label_043ea6fd;
        }
      }
    }
  }
label_043ea6f8:
  il2cpp_runtime_helper_022b2c90();
label_043ea6fd:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae4eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShowNextSongPopup_d__34);
    g_data_057ae4eb = '\x01';
  }
  __this_06 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ShowNextSongPopup_d__34);
  uVar21 = 0;
  __this_08 = __this_06;
  System_Object___ctor(__this_06,(MethodInfo *)0x0);
  *(undefined4 *)&__this_06[1].klass = 0;
  if (__this_06 != (Il2CppObject *)0x0) {
    __this_06[2].klass = __this_07;
    il2cpp_runtime_helper_022b4080(__this_06 + 2,__this_07);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_08,(MethodInfo *)0x0);
  *(undefined4 *)&__this_08[1].klass = uVar21;
  return;
}


// UI.SongPopup$$ChangeSongInfo
// il2cpp: void UI_SongPopup__ChangeSongInfo (UI_SongPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43ea290

void UI_SongPopup__ChangeSongInfo(UI_SongPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_String_array *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  uint uVar7;
  System_String_o *str2;
  System_String_c *__this_00;
  System_Char_array *separator;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_01;
  MethodInfo *in_RCX;
  undefined8 *puVar11;
  undefined8 *extraout_RDX;
  int32_t index;
  uint uVar12;
  undefined4 uVar13;
  System_String_o *str1;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  System_String_c *local_40;
  System_String_o *local_38;
  
  if (g_data_057ae4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&" and ");
    il2cpp_runtime_helper_023445d0(&"by ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae4e9 = '\x01';
  }
  local_40 = (System_String_c *)0x0;
  local_38 = (System_String_o *)0x0;
  str1 = (System_String_o *)&local_40;
  UI_SongPopup__ParseMusicString(name,(System_Collections_Generic_List_string__o **)str1,&local_38,in_RCX);
  pUVar3 = (__this->fields)._songName;
  if ((pUVar3 != (UnityEngine_UI_Text_o *)0x0) &&
     (str1 = local_38,
     (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
               (pUVar3,local_38,(pUVar3->klass->vtable)._75_set_text.method),
     local_40 != (System_String_c *)0x0)) {
    index = 0;
    pSVar9 = "";
    if (0 < *(int *)&(local_40->_1).namespaze) {
      do {
        str2 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)local_40,index,MethodInfo_String_get_Item);
        puVar11 = &" and ";
        if (index == 0) {
          puVar11 = &"by ";
        }
        str1 = (System_String_o *)*puVar11;
        pSVar9 = System_String__Concat_3af7150(pSVar9,str1,str2,(MethodInfo *)0x0);
        index = index + 1;
        if (local_40 == (System_String_c *)0x0) goto label_043ea3dc;
      } while (index < *(int *)&(local_40->_1).namespaze);
    }
    pUVar3 = (__this->fields)._authorName;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar9,(pUVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
label_043ea3dc:
  pIVar10 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"--");
    g_data_057ae4ea = '\x01';
  }
  __this_00 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  str1->klass = __this_00;
  il2cpp_runtime_helper_022b4080(str1,__this_00);
  *extraout_RDX = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(extraout_RDX);
  bVar6 = System_String__IsNullOrWhiteSpace((System_String_o *)pIVar10,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  __this_02 = TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) goto label_043ea6fd;
    separator->m_Items[0] = 0x5f;
    if ((pIVar10 != (Il2CppClass *)0x0) &&
       (pSVar8 = System_String__Split_3af9ad0((System_String_o *)pIVar10,separator,2,(MethodInfo *)0x0),
       __this_02 = pIVar10, pSVar8 != (System_String_array *)0x0)) {
      iVar2 = (int)pSVar8->max_length;
      if (iVar2 == 0) goto label_043ea6fd;
      pIVar10 = (Il2CppClass *)pSVar8->m_Items[0];
      if (1 < iVar2) {
        __this_02 = (Il2CppClass *)pSVar8->m_Items[1];
        if ((__this_02 == (Il2CppClass *)0x0) ||
           (pSVar9 = System_String__Replace_3af9030
                               ((System_String_o *)__this_02,"-"," ",(MethodInfo *)0x0),
           pSVar9 == (System_String_o *)0x0)) goto label_043ea6f8;
        pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
        *extraout_RDX = pSVar9;
        il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar9);
      }
      __this_02 = TypeInfo_string;
      pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      if (pSVar8 != (System_String_array *)0x0) {
        if ((int)pSVar8->max_length == 0) goto label_043ea6fd;
        __this_02 = (Il2CppClass *)pSVar8->m_Items;
        pSVar8->m_Items[0] = "--";
        il2cpp_runtime_helper_022b4080();
        if ((pIVar10 != (Il2CppClass *)0x0) &&
           (pSVar8 = System_String__Split_3afab90((System_String_o *)pIVar10,pSVar8,1,(MethodInfo *)0x0),
           __this_02 = pIVar10, pSVar8 != (System_String_array *)0x0)) {
          iVar2 = (int)pSVar8->max_length;
          if (iVar2 < 1) {
            return;
          }
          uVar12 = 0;
          if (iVar2 != 0) {
            do {
              __this_02 = (Il2CppClass *)pSVar8->m_Items[(int)uVar12];
              if ((__this_02 == (Il2CppClass *)0x0) ||
                 (pSVar9 = System_String__Replace_3af9030
                                     ((System_String_o *)__this_02,"-"," ",(MethodInfo *)0x0
                                     ), pSVar9 == (System_String_o *)0x0)) goto label_043ea6f8;
              pIVar10 = (Il2CppClass *)System_String__Trim(pSVar9,(MethodInfo *)0x0);
              __this_02 = pIVar10;
              bVar6 = System_String__IsNullOrWhiteSpace((System_String_o *)pIVar10,(MethodInfo *)0x0);
              lVar5 = MethodInfo_Void_Add;
              if ((char)bVar6 == '\0') {
                __this_02 = (Il2CppClass *)str1->klass;
                if (__this_02 == (Il2CppClass *)0x0) goto label_043ea6f8;
                piVar1 = (int32_t *)((long)&(__this_02->_1).namespaze + 4);
                *piVar1 = *piVar1 + 1;
                pSVar4 = ((System_Collections_Generic_List_string__Fields *)&(__this_02->_1).name)->_items;
                if (pSVar4 == (System_String_array *)0x0) goto label_043ea6f8;
                uVar7 = *(uint *)&(__this_02->_1).namespaze;
                if ((uint)pSVar4->max_length <= uVar7) {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pIVar10,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  goto label_043ea637;
                }
                *(uint *)&(__this_02->_1).namespaze = uVar7 + 1;
                __this_02 = (Il2CppClass *)(pSVar4->m_Items + (int)uVar7);
                pSVar4->m_Items[(int)uVar7] = (System_String_o *)pIVar10;
                il2cpp_runtime_helper_022b4080();
                uVar7 = (uint)pSVar8->max_length;
                if ((int)uVar7 <= (int)(uVar12 + 1)) {
                  return;
                }
              }
              else {
label_043ea637:
                uVar7 = (uint)pSVar8->max_length;
                if ((int)uVar7 <= (int)(uVar12 + 1)) {
                  return;
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar7);
          }
          goto label_043ea6fd;
        }
      }
    }
  }
label_043ea6f8:
  il2cpp_runtime_helper_022b2c90();
label_043ea6fd:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae4eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShowNextSongPopup_d__34);
    g_data_057ae4eb = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ShowNextSongPopup_d__34);
  uVar13 = 0;
  __this_03 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = __this_02;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,__this_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar13;
  return;
}


// UI.SongPopup$$ParseMusicString
// il2cpp: void UI_SongPopup__ParseMusicString (System_String_o* input, System_Collections_Generic_List_string__o** authors, System_String_o** song, const MethodInfo* method);
// 0x43ea3f0

void UI_SongPopup__ParseMusicString
               (System_String_o *input,System_Collections_Generic_List_string__o **authors,
               System_String_o **song,MethodInfo *method)

{
  int iVar1;
  System_Object_array *pSVar2;
  int32_t *piVar3;
  long lVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_Collections_Generic_List_string__o *__this;
  System_Char_array *separator;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  Il2CppClass *pIVar9;
  Il2CppObject *__this_00;
  uint uVar10;
  undefined4 uVar11;
  Il2CppClass *__this_01;
  Il2CppObject *__this_02;
  
  if (g_data_057ae4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"--");
    g_data_057ae4ea = '\x01';
  }
  __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  *authors = __this;
  il2cpp_runtime_helper_022b4080(authors,__this);
  *song = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(song);
  bVar5 = System_String__IsNullOrWhiteSpace(input,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  __this_01 = TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) goto label_043ea6fd;
    separator->m_Items[0] = 0x5f;
    if ((input != (System_String_o *)0x0) &&
       (pSVar7 = System_String__Split_3af9ad0(input,separator,2,(MethodInfo *)0x0),
       __this_01 = (Il2CppClass *)input, pSVar7 != (System_String_array *)0x0)) {
      iVar1 = (int)pSVar7->max_length;
      if (iVar1 == 0) goto label_043ea6fd;
      pIVar9 = (Il2CppClass *)pSVar7->m_Items[0];
      if (1 < iVar1) {
        __this_01 = (Il2CppClass *)pSVar7->m_Items[1];
        if ((__this_01 == (Il2CppClass *)0x0) ||
           (pSVar8 = System_String__Replace_3af9030
                               ((System_String_o *)__this_01,"-"," ",(MethodInfo *)0x0),
           pSVar8 == (System_String_o *)0x0)) goto label_043ea6f8;
        pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
        *song = pSVar8;
        il2cpp_runtime_helper_022b4080(song,pSVar8);
      }
      __this_01 = TypeInfo_string;
      pSVar7 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
      if (pSVar7 != (System_String_array *)0x0) {
        if ((int)pSVar7->max_length == 0) goto label_043ea6fd;
        __this_01 = (Il2CppClass *)pSVar7->m_Items;
        pSVar7->m_Items[0] = "--";
        il2cpp_runtime_helper_022b4080();
        if ((pIVar9 != (Il2CppClass *)0x0) &&
           (pSVar7 = System_String__Split_3afab90((System_String_o *)pIVar9,pSVar7,1,(MethodInfo *)0x0),
           __this_01 = pIVar9, pSVar7 != (System_String_array *)0x0)) {
          iVar1 = (int)pSVar7->max_length;
          if (iVar1 < 1) {
            return;
          }
          uVar10 = 0;
          if (iVar1 != 0) {
            do {
              __this_01 = (Il2CppClass *)pSVar7->m_Items[(int)uVar10];
              if ((__this_01 == (Il2CppClass *)0x0) ||
                 (pSVar8 = System_String__Replace_3af9030
                                     ((System_String_o *)__this_01,"-"," ",(MethodInfo *)0x0
                                     ), pSVar8 == (System_String_o *)0x0)) goto label_043ea6f8;
              pIVar9 = (Il2CppClass *)System_String__Trim(pSVar8,(MethodInfo *)0x0);
              __this_01 = pIVar9;
              bVar5 = System_String__IsNullOrWhiteSpace((System_String_o *)pIVar9,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              if ((char)bVar5 == '\0') {
                __this_01 = (Il2CppClass *)*authors;
                if (__this_01 == (Il2CppClass *)0x0) goto label_043ea6f8;
                piVar3 = (int32_t *)((long)&(__this_01->_1).namespaze + 4);
                *piVar3 = *piVar3 + 1;
                pSVar2 = ((System_Collections_Generic_List_object__Fields *)&(__this_01->_1).name)->_items;
                if (pSVar2 == (System_Object_array *)0x0) goto label_043ea6f8;
                uVar6 = *(uint *)&(__this_01->_1).namespaze;
                if ((uint)pSVar2->max_length <= uVar6) {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pIVar9,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  goto label_043ea637;
                }
                *(uint *)&(__this_01->_1).namespaze = uVar6 + 1;
                __this_01 = (Il2CppClass *)(pSVar2->m_Items + (int)uVar6);
                pSVar2->m_Items[(int)uVar6] = (Il2CppObject *)pIVar9;
                il2cpp_runtime_helper_022b4080();
                uVar6 = (uint)pSVar7->max_length;
                if ((int)uVar6 <= (int)(uVar10 + 1)) {
                  return;
                }
              }
              else {
label_043ea637:
                uVar6 = (uint)pSVar7->max_length;
                if ((int)uVar6 <= (int)(uVar10 + 1)) {
                  return;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar6);
          }
          goto label_043ea6fd;
        }
      }
    }
  }
label_043ea6f8:
  il2cpp_runtime_helper_022b2c90();
label_043ea6fd:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae4eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShowNextSongPopup_d__34);
    g_data_057ae4eb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ShowNextSongPopup_d__34);
  uVar11 = 0;
  __this_02 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar11;
  return;
}


// UI.SongPopup$$ShowNextSongPopup
// il2cpp: System_Collections_IEnumerator_o* UI_SongPopup__ShowNextSongPopup (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43ea710

System_Collections_IEnumerator_o * UI_SongPopup__ShowNextSongPopup(UI_SongPopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae4eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShowNextSongPopup_d__34);
    g_data_057ae4eb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ShowNextSongPopup_d__34);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.SongPopup$$.ctor
// il2cpp: void UI_SongPopup___ctor (UI_SongPopup_o* __this, const MethodInfo* method);
// 0x43ea7a0

void UI_SongPopup___ctor(UI_SongPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


