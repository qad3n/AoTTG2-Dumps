// Type: UI.CutsceneDialoguePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CutsceneDialoguePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CutsceneDialoguePanel$$get_Title
// il2cpp: System_String_o* UI_CutsceneDialoguePanel__get_Title (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a99a0

System_String_o *
UI_CutsceneDialoguePanel__get_Title(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.CutsceneDialoguePanel$$get_Width
// il2cpp: float UI_CutsceneDialoguePanel__get_Width (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a99c0

float UI_CutsceneDialoguePanel__get_Width(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.CutsceneDialoguePanel$$get_Height
// il2cpp: float UI_CutsceneDialoguePanel__get_Height (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a99d0

float UI_CutsceneDialoguePanel__get_Height(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 224.0;
}


// UI.CutsceneDialoguePanel$$get_TopBarHeight
// il2cpp: float UI_CutsceneDialoguePanel__get_TopBarHeight (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a99e0

float UI_CutsceneDialoguePanel__get_TopBarHeight
                (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CutsceneDialoguePanel$$get_BottomBarHeight
// il2cpp: float UI_CutsceneDialoguePanel__get_BottomBarHeight (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a99f0

float UI_CutsceneDialoguePanel__get_BottomBarHeight
                (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CutsceneDialoguePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_VerticalPadding (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a00

int32_t UI_CutsceneDialoguePanel__get_VerticalPadding
                  (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.CutsceneDialoguePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_HorizontalPadding (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a10

int32_t UI_CutsceneDialoguePanel__get_HorizontalPadding
                  (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CutsceneDialoguePanel$$get_VerticalSpacing
// il2cpp: float UI_CutsceneDialoguePanel__get_VerticalSpacing (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a20

float UI_CutsceneDialoguePanel__get_VerticalSpacing
                (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.CutsceneDialoguePanel$$get_PanelAlignment
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_PanelAlignment (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a30

int32_t UI_CutsceneDialoguePanel__get_PanelAlignment
                  (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CutsceneDialoguePanel$$get_PopupAnimationType
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_PopupAnimationType (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a40

int32_t UI_CutsceneDialoguePanel__get_PopupAnimationType
                  (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CutsceneDialoguePanel$$get_AnimationTime
// il2cpp: float UI_CutsceneDialoguePanel__get_AnimationTime (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a50

float UI_CutsceneDialoguePanel__get_AnimationTime
                (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.CutsceneDialoguePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_CutsceneDialoguePanel__get_ThemePanel (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40a9a60

System_String_o *
UI_CutsceneDialoguePanel__get_ThemePanel(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  if (DAT_05704622 == '\0') {
    il2cpp_init_method_metadata(&"CutsceneDialoguePanel");
    DAT_05704622 = '\x01';
  }
  return "CutsceneDialoguePanel";
}


// UI.CutsceneDialoguePanel$$Setup
// il2cpp: void UI_CutsceneDialoguePanel__Setup (UI_CutsceneDialoguePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40a9a90

void UI_CutsceneDialoguePanel__Setup
               (UI_CutsceneDialoguePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  long lVar2;
  long *plVar3;
  Il2CppMethodPointer vtable_dispatch;
  int iVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_RawImage_o *pUVar10;
  undefined8 extraout_RDX;
  float fVar11;
  
  if (DAT_05704623 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Icons/Profile/Levi1Icon");
    il2cpp_init_method_metadata(&"Press ");
    il2cpp_init_method_metadata(&" to skip");
    il2cpp_init_method_metadata(&"");
    DAT_05704623 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                     ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    UI_ElementFactory__CreateHorizontalGroup(pUVar7,0.0,0,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar7,__this_00,"",0,3,(MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0xc0), plVar3 != (long *)0x0)) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      pSVar5 = System_String__Concat("Press ",pSVar5," to skip",(MethodInfo *)0x0);
      __this_01 = UI_ElementFactory__CreateDefaultLabel
                            (pUVar7,__this_00,pSVar5,0,5,(MethodInfo *)0x0);
      UI_ElementFactory__CreateHorizontalGroup(pUVar7,0.0,0,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pIVar8 = UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        fVar11 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                  (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)
                    (fVar11 * 0.5 + -30.0,pIVar8,pIVar8->klass->vtable[0x24].method);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            pIVar8 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            fVar11 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                      (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
            if (pIVar8 != (Il2CppObject *)0x0) {
              (*pIVar8->klass->vtable[0x24].methodPtr)
                        (fVar11 * 0.5 + -30.0,pIVar8,pIVar8->klass->vtable[0x24].method);
              (__this->fields)._labelRight = __this_01;
              il2cpp_runtime_glue(&(__this->fields)._labelRight,__this_01);
              pUVar9 = (UnityEngine_UI_Text_o *)
                       UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._titleLabel = pUVar9;
              il2cpp_runtime_glue(&(__this->fields)._titleLabel,pUVar9);
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0
                        );
              UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
              pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                                 ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  parent_00 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                  pUVar6 = UI_ElementFactory__CreateRawImage
                                     (parent_00,__this_00,"Icons/Profile/Levi1Icon",128.0,128.0,(MethodInfo *)0x0
                                     );
                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar10 = (UnityEngine_UI_RawImage_o *)
                              UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_RawImage_GetComponent_RawImage);
                    (__this->fields)._image = pUVar10;
                    il2cpp_runtime_glue(&(__this->fields)._image);
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                    pUVar6 = UI_ElementFactory__CreateDefaultLabel
                                       (pUVar7,__this_00,"",0,3,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = (UnityEngine_UI_Text_o *)
                               UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_Text_GetComponent_Text);
                      ppUVar1 = &(__this->fields)._contentLabel;
                      (__this->fields)._contentLabel = pUVar9;
                      il2cpp_runtime_glue(ppUVar1,pUVar9);
                      pUVar9 = (__this->fields)._contentLabel;
                      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                        pIVar8 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          (*pIVar8->klass->vtable[0x26].methodPtr)
                                    (0x43000000,pIVar8,pIVar8->klass->vtable[0x26].method);
                          pUVar9 = *ppUVar1;
                          if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                            pIVar8 = UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            fVar11 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                                      (__this,(__this->klass->vtable).
                                                              _30_GetPanelWidth.method);
                            iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                                              (__this,(__this->klass->vtable).
                                                      _10_get_HorizontalPadding.method);
                            if (pIVar8 != (Il2CppObject *)0x0) {
                              vtable_dispatch = pIVar8->klass->vtable[0x24].methodPtr;
                              (*vtable_dispatch)
                                        ((fVar11 - ((float)iVar4 + (float)iVar4)) + -128.0 + -10.0,
                                         pIVar8,pIVar8->klass->vtable[0x24].method,extraout_RDX,
                                         vtable_dispatch);
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


// UI.CutsceneDialoguePanel$$Show
// il2cpp: void UI_CutsceneDialoguePanel__Show (UI_CutsceneDialoguePanel_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x40a9f60

void UI_CutsceneDialoguePanel__Show
               (UI_CutsceneDialoguePanel_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,bool_conflict full,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *path;
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  System_String_o *pSVar2;
  UnityEngine_Texture_o *value;
  
  if (DAT_05704624 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Icons/Profile/");
    DAT_05704624 = '\x01';
  }
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetProfileIcon(icon,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._image;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  pSVar2 = System_String__Concat("Icons/Profile/",pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(path,pSVar2,1,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._titleLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,title,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar1 = (__this->fields)._contentLabel;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,content,(pUVar1->klass->vtable)._75_set_text.method);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._labelRight;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_01,full & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CutsceneDialoguePanel$$.ctor
// il2cpp: void UI_CutsceneDialoguePanel___ctor (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x40aa120

void UI_CutsceneDialoguePanel___ctor(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


