// Type: UI.CutsceneDialoguePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CutsceneDialoguePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs
// --------------------------------

// UI.CutsceneDialoguePanel$$get_Title
// il2cpp: System_String_o* UI_CutsceneDialoguePanel__get_Title (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bba90

System_String_o * UI_CutsceneDialoguePanel__get_Title(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.CutsceneDialoguePanel$$get_Width
// il2cpp: float UI_CutsceneDialoguePanel__get_Width (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbab0

float UI_CutsceneDialoguePanel__get_Width(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.CutsceneDialoguePanel$$get_Height
// il2cpp: float UI_CutsceneDialoguePanel__get_Height (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbac0

float UI_CutsceneDialoguePanel__get_Height(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 224.0;
}


// UI.CutsceneDialoguePanel$$get_TopBarHeight
// il2cpp: float UI_CutsceneDialoguePanel__get_TopBarHeight (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbad0

float UI_CutsceneDialoguePanel__get_TopBarHeight(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CutsceneDialoguePanel$$get_BottomBarHeight
// il2cpp: float UI_CutsceneDialoguePanel__get_BottomBarHeight (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbae0

float UI_CutsceneDialoguePanel__get_BottomBarHeight(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CutsceneDialoguePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_VerticalPadding (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbaf0

int32_t UI_CutsceneDialoguePanel__get_VerticalPadding(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.CutsceneDialoguePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_HorizontalPadding (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbb00

int32_t UI_CutsceneDialoguePanel__get_HorizontalPadding(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CutsceneDialoguePanel$$get_VerticalSpacing
// il2cpp: float UI_CutsceneDialoguePanel__get_VerticalSpacing (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbb10

float UI_CutsceneDialoguePanel__get_VerticalSpacing(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.CutsceneDialoguePanel$$get_PanelAlignment
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_PanelAlignment (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbb20

int32_t UI_CutsceneDialoguePanel__get_PanelAlignment(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CutsceneDialoguePanel$$get_PopupAnimationType
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_PopupAnimationType (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbb30

int32_t UI_CutsceneDialoguePanel__get_PopupAnimationType
                  (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CutsceneDialoguePanel$$get_AnimationTime
// il2cpp: float UI_CutsceneDialoguePanel__get_AnimationTime (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbb40

float UI_CutsceneDialoguePanel__get_AnimationTime(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.CutsceneDialoguePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_CutsceneDialoguePanel__get_ThemePanel (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bbb50

System_String_o *
UI_CutsceneDialoguePanel__get_ThemePanel(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae3b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CutsceneDialoguePanel");
    g_data_057ae3b3 = '\x01';
  }
  return "CutsceneDialoguePanel";
}


// UI.CutsceneDialoguePanel$$Setup
// il2cpp: void UI_CutsceneDialoguePanel__Setup (UI_CutsceneDialoguePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43bbb80

void UI_CutsceneDialoguePanel__Setup
               (UI_CutsceneDialoguePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  long lVar2;
  long *plVar3;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *path;
  int iVar4;
  System_String_o *pSVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar11;
  UI_TooltipPopup_o *__this_02;
  Il2CppClass *pIVar12;
  undefined8 extraout_RDX;
  System_String_o *title;
  UnityEngine_UI_Text_o *pUVar13;
  uint in_R8D;
  float fVar14;
  
  if (g_data_057ae3b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/Levi1Icon");
    il2cpp_runtime_helper_023445d0(&"Press ");
    il2cpp_runtime_helper_023445d0(&" to skip");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3b4 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pIVar12 = (Il2CppClass *)0x0;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar6,0x18,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_UI_Text_o *)(__this->fields).SinglePanel;
  pUVar13 = (UnityEngine_UI_Text_o *)0x3;
  pUVar7 = UI_ElementFactory__CreateHorizontalGroup
                     ((UnityEngine_Transform_o *)pUVar10,20.0,3,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    UI_ElementFactory__CreateHorizontalGroup((UnityEngine_Transform_o *)pUVar8,0.0,0,(MethodInfo *)0x0);
    pIVar12 = (Il2CppClass *)0x0;
    in_R8D = 3;
    pUVar13 = pUVar6;
    pUVar10 = pUVar8;
    pUVar7 = UI_ElementFactory__CreateDefaultLabel
                       ((UnityEngine_Transform_o *)pUVar8,(UI_ElementStyle_o *)pUVar6,"",0,3,
                        (MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0xc0), pUVar10 = (UnityEngine_UI_Text_o *)0x0, plVar3 != (long *)0x0)) {
      pSVar5 = (System_String_o *)(**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      pSVar5 = System_String__Concat_3af7150("Press ",pSVar5," to skip",(MethodInfo *)0x0);
      pIVar12 = (Il2CppClass *)0x0;
      in_R8D = 5;
      __this_00 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pUVar8,(UI_ElementStyle_o *)pUVar6,pSVar5,0,5,
                             (MethodInfo *)0x0);
      pUVar13 = (UnityEngine_UI_Text_o *)0x0;
      UI_ElementFactory__CreateHorizontalGroup((UnityEngine_Transform_o *)pUVar8,0.0,0,(MethodInfo *)0x0);
      pUVar10 = pUVar8;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar13 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._30_GetPanelWidth.method;
        pUVar10 = (UnityEngine_UI_Text_o *)__this;
        fVar14 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
        if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar13 = (UnityEngine_UI_Text_o *)(pUVar8->klass->vtable)._36_OnCullingChanged.method;
          (*(pUVar8->klass->vtable)._36_OnCullingChanged.methodPtr)(fVar14 * 0.5 + -30.0);
          pUVar10 = pUVar8;
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            pIVar9 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            pUVar13 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._30_GetPanelWidth.method;
            pUVar10 = (UnityEngine_UI_Text_o *)__this;
            fVar14 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
            if (pIVar9 != (Il2CppObject *)0x0) {
              (*pIVar9->klass->vtable[0x24].methodPtr)
                        (fVar14 * 0.5 + -30.0,pIVar9,pIVar9->klass->vtable[0x24].method);
              (__this->fields)._labelRight = __this_00;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._labelRight,__this_00);
              pUVar10 = (UnityEngine_UI_Text_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._titleLabel = pUVar10;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._titleLabel,pUVar10);
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
              UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
              pUVar10 = (UnityEngine_UI_Text_o *)(__this->fields).SinglePanel;
              pUVar13 = (UnityEngine_UI_Text_o *)0x3;
              pUVar8 = (UnityEngine_UI_Text_o *)
                       UI_ElementFactory__CreateHorizontalGroup
                                 ((UnityEngine_Transform_o *)pUVar10,10.0,3,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                pUVar13 = (UnityEngine_UI_Text_o *)0x0;
                __this_01 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
                pUVar10 = pUVar8;
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  pUVar10 = (UnityEngine_UI_Text_o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  pIVar12 = (Il2CppClass *)0x0;
                  pUVar13 = pUVar6;
                  pUVar7 = UI_ElementFactory__CreateRawImage
                                     ((UnityEngine_Transform_o *)pUVar10,(UI_ElementStyle_o *)pUVar6,
                                      "Icons/Profile/Levi1Icon",128.0,128.0,(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar11 = (UnityEngine_UI_RawImage_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
                    (__this->fields)._image = pUVar11;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._image);
                    pUVar10 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    pIVar12 = (Il2CppClass *)0x0;
                    in_R8D = 3;
                    pUVar7 = UI_ElementFactory__CreateDefaultLabel
                                       ((UnityEngine_Transform_o *)pUVar10,(UI_ElementStyle_o *)pUVar6,
                                        "",0,3,(MethodInfo *)0x0);
                    pUVar13 = pUVar6;
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar13 = (UnityEngine_UI_Text_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Text_GetComponent_Text);
                      ppUVar1 = &(__this->fields)._contentLabel;
                      (__this->fields)._contentLabel = pUVar13;
                      il2cpp_runtime_helper_022b4080(ppUVar1);
                      pUVar10 = (__this->fields)._contentLabel;
                      if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                        pUVar13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                        pIVar9 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar10,
                                            (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        if (pIVar9 != (Il2CppObject *)0x0) {
                          pIVar12 = pIVar9->klass;
                          pUVar13 = (UnityEngine_UI_Text_o *)pIVar12->vtable[0x26].method;
                          (*pIVar12->vtable[0x26].methodPtr)(0x43000000,pIVar9);
                          pUVar6 = *ppUVar1;
                          pUVar10 = (UnityEngine_UI_Text_o *)0x0;
                          if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                            pIVar9 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar6,
                                                (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            fVar14 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                                      (__this,(__this->klass->vtable)._30_GetPanelWidth.method
                                                      );
                            pUVar13 = (UnityEngine_UI_Text_o *)
                                      (__this->klass->vtable)._10_get_HorizontalPadding.method;
                            iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)();
                            pUVar10 = (UnityEngine_UI_Text_o *)__this;
                            if (pIVar9 != (Il2CppObject *)0x0) {
                              vtableDispatch = pIVar9->klass->vtable[0x24].methodPtr;
                              (*vtableDispatch)
                                        ((fVar14 - ((float)iVar4 + (float)iVar4)) + -128.0 + -10.0,pIVar9,
                                         pIVar9->klass->vtable[0x24].method,extraout_RDX,vtableDispatch
                                        );
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    g_data_057ae3b5 = '\x01';
  }
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pUVar10,title,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetProfileIcon((System_String_o *)pUVar13,(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_UI_RawImage_o *)(pUVar10->fields).m_ParentMask;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  pSVar5 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_TooltipPopup_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar5,1,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((__this_02 != (UI_TooltipPopup_o *)0x0) && (__this_02->klass != TypeInfo_Texture2D)) goto label_043bc1ff;
    UnityEngine_UI_RawImage__set_texture(pUVar11,(UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_UI_Text_o *)(pUVar10->fields).m_MaskMaterial;
    if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
                (pUVar13,title,(pUVar13->klass->vtable)._75_set_text.method);
      pUVar13 = *(UnityEngine_UI_Text_o **)&(pUVar10->fields)._useLegacyMeshGeneration_k__BackingField;
      if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
                  (pUVar13,pIVar12,(pUVar13->klass->vtable)._75_set_text.method);
        UI_BasePopup__Show((UI_BasePopup_o *)pUVar10,(MethodInfo *)0x0);
        pUVar7 = *(UnityEngine_GameObject_o **)&(pUVar10->fields).m_Maskable;
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar7,in_R8D & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  __this_02 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
label_043bc1ff:
  il2cpp_runtime_helper_022b2fd0();
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CutsceneDialoguePanel$$Show
// il2cpp: void UI_CutsceneDialoguePanel__Show (UI_CutsceneDialoguePanel_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x43bc050

void UI_CutsceneDialoguePanel__Show
               (UI_CutsceneDialoguePanel_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,bool_conflict full,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *path;
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  System_String_o *pSVar2;
  UI_TooltipPopup_o *__this_02;
  
  if (g_data_057ae3b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    g_data_057ae3b5 = '\x01';
  }
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetProfileIcon(icon,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._image;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  pSVar2 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_TooltipPopup_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar2,1,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((__this_02 != (UI_TooltipPopup_o *)0x0) && (__this_02->klass != TypeInfo_Texture2D)) goto label_043bc1ff;
    UnityEngine_UI_RawImage__set_texture(__this_00,(UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
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
  __this_02 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
label_043bc1ff:
  il2cpp_runtime_helper_022b2fd0();
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CutsceneDialoguePanel$$.ctor
// il2cpp: void UI_CutsceneDialoguePanel___ctor (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x43bc210

void UI_CutsceneDialoguePanel___ctor(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


