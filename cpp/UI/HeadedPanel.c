// Type: UI.HeadedPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HeadedPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HeadedPanel.cs
// --------------------------------

// UI.HeadedPanel$$get_Title
// il2cpp: System_String_o* UI_HeadedPanel__get_Title (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbdff0

System_String_o * UI_HeadedPanel__get_Title(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07547b05 = '\x01';
  }
  return "Default";
}


// UI.HeadedPanel$$get_TopBarHeight
// il2cpp: float UI_HeadedPanel__get_TopBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe020

float UI_HeadedPanel__get_TopBarHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarHeight
// il2cpp: float UI_HeadedPanel__get_BottomBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe030

float UI_HeadedPanel__get_BottomBarHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarSpacing
// il2cpp: float UI_HeadedPanel__get_BottomBarSpacing (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe040

float UI_HeadedPanel__get_BottomBarSpacing(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.HeadedPanel$$get_BottomBarPadding
// il2cpp: int32_t UI_HeadedPanel__get_BottomBarPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe050

int32_t UI_HeadedPanel__get_BottomBarPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_VerticalPadding
// il2cpp: int32_t UI_HeadedPanel__get_VerticalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe060

int32_t UI_HeadedPanel__get_VerticalPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_HeadedPanel__get_HorizontalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe070

int32_t UI_HeadedPanel__get_HorizontalPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_TitleFontSize
// il2cpp: int32_t UI_HeadedPanel__get_TitleFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe080

int32_t UI_HeadedPanel__get_TitleFontSize(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_ButtonFontSize
// il2cpp: int32_t UI_HeadedPanel__get_ButtonFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe090

int32_t UI_HeadedPanel__get_ButtonFontSize(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1c;
}


// UI.HeadedPanel$$get_CategoryButtons
// il2cpp: bool UI_HeadedPanel__get_CategoryButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cbe0a0

bool UI_HeadedPanel__get_CategoryButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return false;
}


// UI.HeadedPanel$$Setup
// il2cpp: void UI_HeadedPanel__Setup (UI_HeadedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cbe0b0

void UI_HeadedPanel__Setup(UI_HeadedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Transform_o **targetAddress_00;
  bool bVar1;
  int32_t iVar2;
  int32_t right;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar5;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  System_String_o *pSVar8;
  UnityEngine_Texture_o *pUVar9;
  UnityEngine_UI_Image_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  float fVar11;
  UnityEngine_Color_o UVar12;
  
  if (Il2CppMethodInitialized_07547b06 == '\0') {
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
    Il2CppMethodInitialized_07547b06 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background/TopBar",(MethodInfo *)0x0);
    targetAddress = &(__this->fields).TopBar;
    (__this->fields).TopBar = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background/BottomBar",(MethodInfo *)0x0);
      targetAddress_00 = &(__this->fields).BottomBar;
      (__this->fields).BottomBar = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      pUVar3 = (__this->fields).TopBar;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        fVar11 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar4,1,fVar11,(MethodInfo *)0x0);
          if (*targetAddress_00 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)*targetAddress_00,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            fVar11 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                               (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar4,1,fVar11,(MethodInfo *)0x0);
              if (*targetAddress_00 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)*targetAddress_00,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                fVar11 = (*(__this->klass->vtable)._38_get_BottomBarSpacing.methodPtr)
                                   (__this,(__this->klass->vtable)._38_get_BottomBarSpacing.method);
                if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar5,fVar11,
                             (MethodInfo *)0x0);
                  if (*targetAddress_00 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)*targetAddress_00,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                    iVar2 = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)
                                      (__this,(__this->klass->vtable)._39_get_BottomBarPadding.method);
                    right = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)
                                      (__this,(__this->klass->vtable)._39_get_BottomBarPadding.method);
                    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
                    UnityEngine_RectOffset___ctor_68cd0a0(__this_00,iVar2,right,0,0,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                      UnityEngine_UI_LayoutGroup__set_padding
                                ((UnityEngine_UI_LayoutGroup_o *)pUVar5,__this_00,(MethodInfo *)0x0);
                      if (*targetAddress != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = UnityEngine_Transform__Find
                                           (*targetAddress,"Label",(MethodInfo *)0x0);
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
                          if (bVar1) {
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cbe7e0;
                            pUVar3 = UnityEngine_Transform__Find
                                               (pUVar3,"Label",(MethodInfo *)0x0);
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cbe7e0;
                            __this_01 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05cbe7e0;
                            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                          }
                          else {
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cbe7e0;
                            pUVar3 = UnityEngine_Transform__Find
                                               (pUVar3,"Label",(MethodInfo *)0x0);
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cbe7e0;
                            pUVar6 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar3,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            iVar2 = (*(__this->klass->vtable)._40_get_TitleFontSize.methodPtr)
                                              (__this,(__this->klass->vtable)._40_get_TitleFontSize.method);
                            if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_05cbe7e0;
                            UnityEngine_UI_Text__set_fontSize(pUVar6,iVar2,(MethodInfo *)0x0);
                            if (*targetAddress == (UnityEngine_Transform_o *)0x0) goto label_05cbe7e0;
                            pUVar3 = UnityEngine_Transform__Find
                                               (*targetAddress,"Label",(MethodInfo *)0x0);
                            if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cbe7e0;
                            pUVar6 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar3,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                            }
                            UVar12 = UI_UIManager__GetThemeColor
                                               (pSVar8,"MainBody","TitleColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_05cbe7e0;
                            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar6,UVar12,(pUVar6->klass->vtable)._23_set_color.method);
                            pSVar8 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                                               (__this,(__this->klass->vtable)._35_get_Title.method);
                            UI_HeadedPanel__SetTitle(__this,pSVar8,method_00);
                          }
                        }
                        if (*targetAddress != (UnityEngine_Transform_o *)0x0) {
                          pUVar7 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)*targetAddress,
                                              (MethodInfo_34B0830 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                          pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pUVar9 = (UnityEngine_Texture_o *)
                                   UI_UIManager__GetThemeTexture
                                             (pSVar8,"MainBody","HeaderTexture",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                            UnityEngine_UI_RawImage__set_texture(pUVar7,pUVar9,(MethodInfo *)0x0);
                            if (*targetAddress != (UnityEngine_Transform_o *)0x0) {
                              pUVar7 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)*targetAddress,
                                                  (MethodInfo_34B0830 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                              pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                              UVar12 = UI_UIManager__GetThemeColor
                                                 (pSVar8,"MainBody","HeaderColor",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                                (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar7,UVar12,(pUVar7->klass->vtable)._23_set_color.method);
                                if (*targetAddress_00 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar7 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)*targetAddress_00,
                                                      (MethodInfo_34B0830 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_RawImage);
                                  pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method)
                                  ;
                                  pUVar9 = (UnityEngine_Texture_o *)
                                           UI_UIManager__GetThemeTexture
                                                     (pSVar8,"MainBody","HeaderTexture",
                                                      "DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                                    UnityEngine_UI_RawImage__set_texture(pUVar7,pUVar9,(MethodInfo *)0x0);
                                    if (*targetAddress_00 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar7 = UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)*targetAddress_00,
                                                          (MethodInfo_34B0830 *)
                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RawImage)
                                      ;
                                      pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                         (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                                 method);
                                      UVar12 = UI_UIManager__GetThemeColor
                                                         (pSVar8,"MainBody","HeaderColor",
                                                          "DefaultPanel",(MethodInfo *)0x0);
                                      if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                                        (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                                                  (pUVar7,UVar12,(pUVar7->klass->vtable)._23_set_color.method)
                                        ;
                                        pUVar3 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this,
                                                            (MethodInfo *)0x0);
                                        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar3 = UnityEngine_Transform__Find
                                                             (pUVar3,"Border",(MethodInfo *)0x0);
                                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                            pUVar10 = UnityEngine_Component__GetComponent_object_
                                                                ((UnityEngine_Component_o *)pUVar3,
                                                                 (MethodInfo_34B0830 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                            pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                               (__this,(__this->klass->vtable).
                                                                       _4_get_ThemePanel.method);
                                            UVar12 = UI_UIManager__GetThemeColor
                                                               (pSVar8,"MainBody",
                                                                "BorderColor","DefaultPanel",
                                                                (MethodInfo *)0x0);
                                            if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                                              (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar10,UVar12,
                                                         (pUVar10->klass->vtable)._23_set_color.method);
                                              bVar1 = (*(__this->klass->vtable)._42_get_CategoryButtons.
                                                        methodPtr)(__this,(__this->klass->vtable).
                                                                          _42_get_CategoryButtons.method);
                                              method_01 = extraout_RDX;
                                              if (bVar1) {
                                                (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
                                                          (__this,(__this->klass->vtable)._44_SetupTopButtons.
                                                                  method);
                                                method_01 = extraout_RDX_00;
                                              }
                                              UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,method_01);
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
label_05cbe7e0:
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$SetCategoryPanel
// il2cpp: void UI_HeadedPanel__SetCategoryPanel (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cbe7f0

void UI_HeadedPanel__SetCategoryPanel(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BasePanel__SetCategoryPanel((UI_BasePanel_o *)__this,name,method);
  (*(__this->klass->vtable)._43_SetTopButton.methodPtr)
            (__this,name,(__this->klass->vtable)._43_SetTopButton.method);
  return;
}


// UI.HeadedPanel$$SetTopButton
// il2cpp: void UI_HeadedPanel__SetTopButton (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cbe820
// eh: try 0x5cbe923..0x5cbe996 -> pad 0x5cbe99f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cbe9b7..0x5cbe9bc -> pad 0x5cbe9db cleanup
// eh: try 0x5cbe9de..0x5cbe9e8 -> pad 0x5cbe9f0 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbe99b: jmp 0x5cbe99f
// asm:   0x5cbe99d: jmp 0x5cbe99f
// asm:   0x5cbe99f: mov rbx, rax
// asm:   0x5cbe9a2: cmp edx, 1
// asm:   0x5cbe9a5: jne 0x5cbe9de
// asm:   0x5cbe9a7: mov rdi, rbx
// asm:   0x5cbe9aa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cbe9af: mov rbx, qword ptr [rax]
// asm:   0x5cbe9b2: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5cbe9b7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cbe9bc: lea rax, [rip + 0x15d14fd]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
// asm:   0x5cbe9c3: mov rsi, qword ptr [rax]
// asm:   0x5cbe9c6: mov rdi, rsp
// asm:   0x5cbe9c9: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5cbe9ce: test rbx, rbx
// asm:   0x5cbe9d1: je 0x5cbe959
// asm:   0x5cbe9d3: mov rdi, rbx
// asm:   0x5cbe9d6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cbe9db: mov rbx, rax
// asm:   0x5cbe9de: lea rdi, [rsp + 0x18]
// asm:   0x5cbe9e3: call 0x2fdb200  ; il2cpp_runtime_helper_02fdb200()
// asm:   0x5cbe9e8: mov rdi, rbx
// asm:   0x5cbe9eb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cbe9f0: mov rdi, rax
// asm:   0x5cbe9f3: call 0x2ab61e0  ; __clang_call_terminate()

void UI_HeadedPanel__SetTopButton(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  UnityEngine_UI_Selectable_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07547b07 == '\0') {
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
    Il2CppMethodInitialized_07547b07 = '\x01';
  }
  SStack_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._currentValue = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                      (pSVar1,(MethodInfo_4AAD0E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Count);
    if (iVar3 < 1) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (pSVar1,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Values)
      ;
      if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  (&SStack_48,__this_00,
                   (MethodInfo_43F93D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Button_GetEnumerator
                  );
        uStack_30 = 0;
        puStack_28 = (undefined1 *)&SStack_48;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (&SStack_48,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_MoveNext
                            );
          if (!bVar2) break;
          if ((UnityEngine_UI_Selectable_o *)SStack_48.fields._currentValue ==
              (UnityEngine_UI_Selectable_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)SStack_48.fields._currentValue,true,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (&SStack_48,
                   (MethodInfo_4CE71F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
                  );
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
        if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (__this_01 = (UnityEngine_UI_Selectable_o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar1,(Il2CppObject *)name,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item),
           __this_01 != (UnityEngine_UI_Selectable_o *)0x0)) {
          UnityEngine_UI_Selectable__set_interactable(__this_01,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$SetTitle
// il2cpp: void UI_HeadedPanel__SetTitle (UI_HeadedPanel_o* __this, System_String_o* title, const MethodInfo* method);
// 0x5cbca90

void UI_HeadedPanel__SetTitle(UI_HeadedPanel_o *__this,System_String_o *title,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07547b08 = '\x01';
  }
  pUVar1 = (__this->fields).TopBar;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
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
// 0x5cbea00
// eh: try 0x5cbeb35..0x5cbec27 -> pad 0x5cbec36 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cbec4e..0x5cbec53 -> pad 0x5cbec78 cleanup
// eh: try 0x5cbec7b..0x5cbec85 -> pad 0x5cbec8d catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbec2c: jmp 0x5cbec36
// asm:   0x5cbec2e: jmp 0x5cbec36
// asm:   0x5cbec30: jmp 0x5cbec36
// asm:   0x5cbec32: jmp 0x5cbec36
// asm:   0x5cbec34: jmp 0x5cbec36
// asm:   0x5cbec36: mov rbx, rax
// asm:   0x5cbec39: cmp edx, 1
// asm:   0x5cbec3c: jne 0x5cbec7b
// asm:   0x5cbec3e: mov rdi, rbx
// asm:   0x5cbec41: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cbec46: mov rbx, qword ptr [rax]
// asm:   0x5cbec49: mov qword ptr [rsp + 8], rbx
// asm:   0x5cbec4e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cbec53: lea rax, [rip + 0x15d1266]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
// asm:   0x5cbec5a: mov rsi, qword ptr [rax]
// asm:   0x5cbec5d: lea rdi, [rsp + 0x30]
// asm:   0x5cbec62: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5cbec67: test rbx, rbx
// asm:   0x5cbec6a: je 0x5cbeb97
// asm:   0x5cbec70: mov rdi, rbx
// asm:   0x5cbec73: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cbec78: mov rbx, rax
// asm:   0x5cbec7b: lea rdi, [rsp + 8]
// asm:   0x5cbec80: call 0x2fdb230  ; il2cpp_runtime_helper_02fdb230()
// asm:   0x5cbec85: mov rdi, rbx
// asm:   0x5cbec88: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cbec8d: mov rdi, rax
// asm:   0x5cbec90: call 0x2ab61e0  ; __clang_call_terminate()

void UI_HeadedPanel__SetupTopButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Transform_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_03;
  float fVar4;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar5;
  float local_74;
  undefined1 local_70 [16];
  UnityEngine_Component_o *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  UnityEngine_Component_o *local_38;
  
  if (Il2CppMethodInitialized_07547b09 == '\0') {
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
    Il2CppMethodInitialized_07547b09 = '\x01';
  }
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (pSVar1,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_70,
                 __this_01,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_Button_GetEnumerator)
      ;
      local_38 = local_60;
      local_48._0_8_ = local_70._0_8_;
      local_48._8_8_ = local_70._8_8_;
      local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_74 = 0.0;
      local_70._8_8_ =
           (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_48,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_MoveNext
                          );
        if (!bVar2) break;
        if (local_38 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = UnityEngine_Component__GetComponent_object_
                              (local_38,(MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar5 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
        local_58._8_4_ = in_XMM1_Dc;
        local_58._0_8_ = UVar5.fields._8_8_;
        local_58._12_4_ = in_XMM1_Dd;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        local_74 = local_74 + (float)local_58._0_4_;
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_Button_Dispose
                );
      __this_00 = (__this->fields).TopBar;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        __this_03 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
        fVar4 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                          (__this,(__this->klass->vtable)._33_GetWidth.method);
        local_58._0_4_ = fVar4;
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count
                            (pSVar1,(MethodInfo_4AAD0E0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Count);
          if (__this_03 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,
                       ((float)local_58._0_4_ - local_74) / (float)(iVar3 + 1),(MethodInfo *)0x0);
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
// 0x5cbeca0

float UI_HeadedPanel__GetPanelHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  float fVar5;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07547b0a = '\x01';
  }
  pUVar1 = (__this->fields).TopBar;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      fVar4 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
      pUVar1 = (__this->fields).BottomBar;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          fStack_24 = UVar2.fields.y;
          if (fStack_24 <= fVar4) {
            fStack_24 = fVar4;
          }
          UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          fVar5 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                            (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
          fVar4 = UVar2.fields.y;
          if (UVar2.fields.y <= fVar5) {
            fVar4 = fVar5;
          }
          fVar5 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                            (__this,(__this->klass->vtable)._34_GetHeight.method);
          return (fVar5 - fStack_24) - fVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HeadedPanel$$.ctor
// il2cpp: void UI_HeadedPanel___ctor (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x5cb76e0

void UI_HeadedPanel___ctor(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Button);
    Il2CppMethodInitialized_07547b0b = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
  (__this->fields)._topButtons = (System_Collections_Generic_Dictionary_string__Button__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topButtons);
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,method_00);
  return;
}


