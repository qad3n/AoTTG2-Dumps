// Type: UI.HeadedPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HeadedPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HeadedPanel.cs
// --------------------------------

// UI.HeadedPanel$$get_Title
// il2cpp: System_String_o* UI_HeadedPanel__get_Title (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821c3390

System_String_o * UI_HeadedPanel__get_Title(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184346f0b = '\x01';
  }
  return "Default";
}


// UI.HeadedPanel$$get_TopBarHeight
// il2cpp: float UI_HeadedPanel__get_TopBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821c3380

float
UI_HeadedPanel__get_TopBarHeight(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarHeight
// il2cpp: float UI_HeadedPanel__get_BottomBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821c3380

float
UI_HeadedPanel__get_BottomBarHeight(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarSpacing
// il2cpp: float UI_HeadedPanel__get_BottomBarSpacing (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_HeadedPanel__get_BottomBarSpacing(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.HeadedPanel$$get_BottomBarPadding
// il2cpp: int32_t UI_HeadedPanel__get_BottomBarPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_HeadedPanel__get_BottomBarPadding(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_VerticalPadding
// il2cpp: int32_t UI_HeadedPanel__get_VerticalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_HeadedPanel__get_VerticalPadding(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_HeadedPanel__get_HorizontalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_HeadedPanel__get_HorizontalPadding(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_TitleFontSize
// il2cpp: int32_t UI_HeadedPanel__get_TitleFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_HeadedPanel__get_TitleFontSize(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_ButtonFontSize
// il2cpp: int32_t UI_HeadedPanel__get_ButtonFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x180846fb0

int32_t
UI_HeadedPanel__get_ButtonFontSize(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return 0x1c;
}


// UI.HeadedPanel$$get_CategoryButtons
// il2cpp: bool UI_HeadedPanel__get_CategoryButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_HeadedPanel__get_CategoryButtons(UI_HeadedPanel_o* __this, MethodInfo* method)

{
  return false;
}


// UI.HeadedPanel$$Setup
// il2cpp: void UI_HeadedPanel__Setup (UI_HeadedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c2b50

void UI_HeadedPanel__Setup(UI_HeadedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t right;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar5;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_Text_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar9;
  UnityEngine_Texture_o *pUVar10;
  UnityEngine_UI_Image_o *pUVar11;
  float fVar12;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184346f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"TitleColor");
    il2cpp_codegen_initialize_runtime_metadata(&"HeaderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"HeaderTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Background/TopBar");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    il2cpp_codegen_initialize_runtime_metadata(&"Background/BottomBar");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_184346f0c = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background/TopBar",(MethodInfo *)0x0);
    (__this->fields).TopBar = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TopBar,pUVar3);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background/BottomBar",(MethodInfo *)0x0);
      (__this->fields).BottomBar = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).BottomBar,pUVar3);
      pUVar3 = (__this->fields).TopBar;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        fVar12 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar4,1,fVar12,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).BottomBar;
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar3,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            fVar12 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                               (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar4,1,fVar12,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).BottomBar;
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar3,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                fVar12 = (*(__this->klass->vtable)._38_get_BottomBarSpacing.methodPtr)
                                   (__this,(__this->klass->vtable)._38_get_BottomBarSpacing.method);
                if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar5,fVar12,
                             (MethodInfo *)0x0);
                  pUVar3 = (__this->fields).BottomBar;
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar3,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                    iVar2 = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)(__this);
                    right = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)(__this);
                    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
                    UnityEngine_RectOffset___ctor_2ed1030(__this_00,iVar2,right,0,0,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                      UnityEngine_UI_LayoutGroup__set_padding
                                ((UnityEngine_UI_LayoutGroup_o *)pUVar5,__this_00,(MethodInfo *)0x0);
                      pUVar3 = (__this->fields).TopBar;
                      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Label",(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar1 = UnityEngine_Object__op_Inequality
                                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if (bVar1) {
                          bVar1 = (*(__this->klass->vtable)._42_get_CategoryButtons.methodPtr)
                                            (__this,(__this->klass->vtable)._42_get_CategoryButtons.method);
                          pUVar3 = (__this->fields).TopBar;
                          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1821c32fa;
                          if (bVar1) {
                            pUVar3 = UnityEngine_Transform__Find
                                               (pUVar3,"Label",(MethodInfo *)0x0);
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1821c32fa;
                            __this_01 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_1821c32fa;
                            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                          }
                          else {
                            pUVar3 = UnityEngine_Transform__Find
                                               (pUVar3,"Label",(MethodInfo *)0x0);
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1821c32fa;
                            pUVar6 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar3,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            iVar2 = (*(__this->klass->vtable)._40_get_TitleFontSize.methodPtr)
                                              (__this,(__this->klass->vtable)._40_get_TitleFontSize.method);
                            if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_1821c32fa;
                            UnityEngine_UI_Text__set_fontSize(pUVar6,iVar2,(MethodInfo *)0x0);
                            pUVar3 = (__this->fields).TopBar;
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1821c32fa;
                            pUVar3 = UnityEngine_Transform__Find
                                               (pUVar3,"Label",(MethodInfo *)0x0);
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1821c32fa;
                            pUVar6 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar3,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                            }
                            pUVar8 = UI_UIManager__GetThemeColor
                                               ((UnityEngine_Color_o *)&local_28,pSVar7,"MainBody",
                                                "TitleColor","DefaultPanel",(MethodInfo *)0x0)
                            ;
                            if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_1821c32fa;
                            local_28.r = (pUVar8->fields).r;
                            local_28.g = (pUVar8->fields).g;
                            local_28.b = (pUVar8->fields).b;
                            local_28.a = (pUVar8->fields).a;
                            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar6,(UnityEngine_Color_o *)&local_28,
                                       (pUVar6->klass->vtable)._23_set_color.method);
                            pSVar7 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                                               (__this,(__this->klass->vtable)._35_get_Title.method);
                            UI_HeadedPanel__SetTitle(__this,pSVar7,(MethodInfo *)0x0);
                          }
                        }
                        pUVar3 = (__this->fields).TopBar;
                        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                          pUVar9 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar3,
                                              (MethodInfo_6651A0 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                          pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pUVar10 = (UnityEngine_Texture_o *)
                                    UI_UIManager__GetThemeTexture
                                              (pSVar7,"MainBody","HeaderTexture",
                                               "DefaultPanel",(MethodInfo *)0x0);
                          if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                            UnityEngine_UI_RawImage__set_texture(pUVar9,pUVar10,(MethodInfo *)0x0);
                            pUVar3 = (__this->fields).TopBar;
                            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                              pUVar9 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar3,
                                                  (MethodInfo_6651A0 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                              pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                              pUVar8 = UI_UIManager__GetThemeColor
                                                 ((UnityEngine_Color_o *)&local_28,pSVar7,
                                                  "MainBody","HeaderColor",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                                local_28.r = (pUVar8->fields).r;
                                local_28.g = (pUVar8->fields).g;
                                local_28.b = (pUVar8->fields).b;
                                local_28.a = (pUVar8->fields).a;
                                (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar9,(UnityEngine_Color_o *)&local_28,
                                           (pUVar9->klass->vtable)._23_set_color.method);
                                pUVar3 = (__this->fields).BottomBar;
                                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar9 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar3,
                                                      (MethodInfo_6651A0 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                                  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method)
                                  ;
                                  pUVar10 = (UnityEngine_Texture_o *)
                                            UI_UIManager__GetThemeTexture
                                                      (pSVar7,"MainBody","HeaderTexture",
                                                       "DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                                    UnityEngine_UI_RawImage__set_texture(pUVar9,pUVar10,(MethodInfo *)0x0);
                                    pUVar3 = (__this->fields).BottomBar;
                                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar9 = UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)pUVar3,
                                                          (MethodInfo_6651A0 *)
                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RawImage)
                                      ;
                                      pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                         (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                                 method);
                                      pUVar8 = UI_UIManager__GetThemeColor
                                                         ((UnityEngine_Color_o *)&local_28,pSVar7,
                                                          "MainBody","HeaderColor",
                                                          "DefaultPanel",(MethodInfo *)0x0);
                                      if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                                        local_28.r = (pUVar8->fields).r;
                                        local_28.g = (pUVar8->fields).g;
                                        local_28.b = (pUVar8->fields).b;
                                        local_28.a = (pUVar8->fields).a;
                                        (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                  (pUVar9,(UnityEngine_Color_o *)&local_28,
                                                   (pUVar9->klass->vtable)._23_set_color.method);
                                        pUVar3 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this,
                                                            (MethodInfo *)0x0);
                                        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar3 = UnityEngine_Transform__Find
                                                             (pUVar3,"Border",(MethodInfo *)0x0);
                                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                            pUVar11 = UnityEngine_Component__GetComponent_object_
                                                                ((UnityEngine_Component_o *)pUVar3,
                                                                 (MethodInfo_6651A0 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                            pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                               (__this,(__this->klass->vtable).
                                                                       _4_get_ThemePanel.method);
                                            pUVar8 = UI_UIManager__GetThemeColor
                                                               ((UnityEngine_Color_o *)&local_28,pSVar7,
                                                                "MainBody","BorderColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                                              local_28.r = (pUVar8->fields).r;
                                              local_28.g = (pUVar8->fields).g;
                                              local_28.b = (pUVar8->fields).b;
                                              local_28.a = (pUVar8->fields).a;
                                              (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar11,(UnityEngine_Color_o *)&local_28,
                                                         (pUVar11->klass->vtable)._23_set_color.method);
                                              bVar1 = (*(__this->klass->vtable)._42_get_CategoryButtons.
                                                        methodPtr)(__this,(__this->klass->vtable).
                                                                          _42_get_CategoryButtons.method);
                                              if (bVar1) {
                                                (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
                                                          (__this,(__this->klass->vtable)._44_SetupTopButtons.
                                                                  method);
                                              }
                                              UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,
                                                                  (MethodInfo *)0x0);
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
label_1821c32fa:
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$SetCategoryPanel
// il2cpp: void UI_HeadedPanel__SetCategoryPanel (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c2640

void UI_HeadedPanel__SetCategoryPanel(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BasePanel__SetCategoryPanel((UI_BasePanel_o *)__this,name,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._43_SetTopButton.methodPtr)
            (__this,name,(__this->klass->vtable)._43_SetTopButton.method);
  return;
}


// UI.HeadedPanel$$SetTopButton
// il2cpp: void UI_HeadedPanel__SetTopButton (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c2710
// eh: try 0x1821c2822..0x1821c28cf -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c2862: mov rdx, qword ptr [rip + 0x1ef7357]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
// asm:   0x1821c2869: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c286e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c2873: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821c2878: test rcx, rcx
// asm:   0x1821c287b: jne 0x1821c28cf
// asm:   0x1821c287d: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x1821c2882: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1821c28cf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_HeadedPanel__SetTopButton(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Button__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  UnityEngine_UI_Button_o *__this_02;
  undefined1 local_40 [16];
  UnityEngine_UI_Selectable_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_UI_Selectable_o *local_18;
  
  if (Il2CppMethodInitialized_184346f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Button_GetEnumerator);
    Il2CppMethodInitialized_184346f0d = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_UI_Selectable_o *)0x0;
  pSVar1 = (__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Count);
    if (iVar3 < 1) {
      return;
    }
    pSVar1 = (__this->fields)._topButtons;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) &&
       (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                               (MethodInfo_13C65A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Values),
       __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Button_GetEnumerator)
      ;
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while (bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                               ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                 *)local_28,
                                (MethodInfo_155CFB0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_MoveNext
                               ), bVar2) {
        if (local_18 == (UnityEngine_UI_Selectable_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_UI_Selectable__set_interactable(local_18,true,(MethodInfo *)0x0);
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
                );
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
      if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_00,(Il2CppObject *)name,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item),
         __this_02 != (UnityEngine_UI_Button_o *)0x0)) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$SetTitle
// il2cpp: void UI_HeadedPanel__SetTitle (UI_HeadedPanel_o* __this, System_String_o* title, const MethodInfo* method);
// 0x1821c2680

void UI_HeadedPanel__SetTitle(UI_HeadedPanel_o *__this,System_String_o *title,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (Il2CppMethodInitialized_184346f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_184346f0e = '\x01';
  }
  pUVar1 = (__this->fields).TopBar;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,title,(pUVar2->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$SetupTopButtons
// il2cpp: void UI_HeadedPanel__SetupTopButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821c28e0
// eh: try 0x1821c2a00..0x1821c2b4a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c2a82: mov rdx, qword ptr [rip + 0x1ef7137]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
// asm:   0x1821c2a89: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c2a8e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c2a93: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821c2a98: test rcx, rcx
// asm:   0x1821c2a9b: jne 0x1821c2b4a
// asm:   0x1821c2aa1: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1821c2aa9: movss xmm6, dword ptr [rsp + 0xb0]
// asm:   0x1821c2b4a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_HeadedPanel__SetupTopButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Button__o *pSVar1;
  UnityEngine_Transform_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_03;
  float fVar5;
  float fVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_60;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48 [2];
  
  if (Il2CppMethodInitialized_184346f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Button_GetEnumerator);
    Il2CppMethodInitialized_184346f0f = '\x01';
  }
  local_48[0].fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48[0].fields._index = 0;
  local_48[0].fields._version = 0;
  local_48[0].fields._currentValue = (Il2CppObject *)0x0;
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  pSVar1 = (__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      fVar6 = 0.0;
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                (&local_60,__this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Button_GetEnumerator)
      ;
      local_48[0].fields._dictionary = local_60.fields._dictionary;
      local_48[0].fields._index = local_60.fields._index;
      local_48[0].fields._version = local_60.fields._version;
      local_48[0].fields._currentValue = local_60.fields._currentValue;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (local_48,(MethodInfo_155CFB0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_MoveNext
                          );
        if (!bVar2) break;
        if ((UnityEngine_Component_o *)local_48[0].fields._currentValue == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)local_48[0].fields._currentValue,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar4 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_Rect_o *)&local_60,__this_02,(MethodInfo *)0x0);
        fVar5 = (pUVar4->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar6 = fVar6 + fVar5;
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
                );
      __this_00 = (__this->fields).TopBar;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        __this_03 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
        fVar5 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                 (__this,(__this->klass->vtable)._33_GetWidth.method);
        pSVar1 = (__this->fields)._topButtons;
        if (pSVar1 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
          iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                             (MethodInfo_13CDEB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Count);
          if (__this_03 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,
                       (fVar5 - fVar6) / (float)(iVar3 + 1),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$GetPanelHeight
// il2cpp: float UI_HeadedPanel__GetPanelHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821c2530

float UI_HeadedPanel__GetPanelHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  MethodInfo *in_R8;
  float fVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184346f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_184346f10 = '\x01';
  }
  pUVar1 = (__this->fields).TopBar;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      fStackX_c = UVar3.fields.y;
      fVar6 = fStackX_c;
      fVar4 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
      pUVar1 = (__this->fields).BottomBar;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
          fVar5 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                            (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
          fStackX_c = UVar3.fields.y;
          if (fStackX_c <= fVar5) {
            fStackX_c = fVar5;
          }
          if (fVar6 <= fVar4) {
            fVar6 = fVar4;
          }
          (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(System_Int32_array *)(__this->klass->vtable)._34_GetHeight.method,in_R8);
          return (extraout_XMM0_Da - fVar6) - fStackX_c;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$.ctor
// il2cpp: void UI_HeadedPanel___ctor (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x1821c3300

void UI_HeadedPanel___ctor(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Button__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Button);
    Il2CppMethodInitialized_184346f11 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
  (__this->fields)._topButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topButtons,__this_00);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


