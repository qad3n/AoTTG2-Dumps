// Type: NextSongPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/NextSongPanel.cs
// Prior real C# source: none
// --------------------------------

// NextSongPanel$$get_Width
// il2cpp: float NextSongPanel__get_Width (NextSongPanel_o* __this, const MethodInfo* method);
// 0x181da8b00

float
NextSongPanel__get_Width(NextSongPanel_o* __this, MethodInfo* method)

{
  return 400.0;
}


// NextSongPanel$$get_Height
// il2cpp: float NextSongPanel__get_Height (NextSongPanel_o* __this, const MethodInfo* method);
// 0x181da8af0

float
NextSongPanel__get_Height(NextSongPanel_o* __this, MethodInfo* method)

{
  return 100.0;
}


// NextSongPanel$$get_DoublePanel
// il2cpp: bool NextSongPanel__get_DoublePanel (NextSongPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
NextSongPanel__get_DoublePanel(NextSongPanel_o* __this, MethodInfo* method)

{
  return true;
}


// NextSongPanel$$get_DoublePanelDivider
// il2cpp: bool NextSongPanel__get_DoublePanelDivider (NextSongPanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
NextSongPanel__get_DoublePanelDivider(NextSongPanel_o* __this, MethodInfo* method)

{
  return false;
}


// NextSongPanel$$get_VerticalSpacing
// il2cpp: float NextSongPanel__get_VerticalSpacing (NextSongPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
NextSongPanel__get_VerticalSpacing(NextSongPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// NextSongPanel$$get_VerticalPadding
// il2cpp: int32_t NextSongPanel__get_VerticalPadding (NextSongPanel_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
NextSongPanel__get_VerticalPadding(NextSongPanel_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// NextSongPanel$$get_HorizontalPadding
// il2cpp: int32_t NextSongPanel__get_HorizontalPadding (NextSongPanel_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
NextSongPanel__get_HorizontalPadding(NextSongPanel_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// NextSongPanel$$Setup
// il2cpp: void NextSongPanel__Setup (NextSongPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x181da8640

void NextSongPanel__Setup(NextSongPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  float fVar8;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_1843448de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/ost_cover");
    Il2CppMethodInitialized_1843448de = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).DoublePanelLeft;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,100.0,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
      fVar8 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_Height.method);
      (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar1,fVar8,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
      pUVar3 = (__this->fields).DoublePanelLeft;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
        if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)pUVar2,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,false,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,false,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).DoublePanelRight;
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar3,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar1,300.0,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
              fVar8 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                                (__this,(__this->klass->vtable)._6_get_Height.method);
              (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar1,fVar8,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
              pUVar3 = (__this->fields).DoublePanelRight;
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pUVar2 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar3,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
                if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)pUVar2,4,(MethodInfo *)0x0);
                  (__this->fields).Parent = parent;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                    UI_ElementStyle___ctor(pUVar4,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                    pUVar5 = UI_ElementFactory__CreateRawImage
                                       (pUVar3,pUVar4,"Sprites/ost_cover",32.0,32.0,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      __this_00 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar5,(MethodInfo_6F5650 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
                      if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
                        __this_01 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_00,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (__this_01,(UnityEngine_Vector2_o)0x42a0000042a00000,(MethodInfo *)0x0);
                          pUVar3 = (__this->fields).DoublePanelRight;
                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                            pUVar3 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                            pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                            UI_ElementStyle___ctor
                                      (pUVar4,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                            pUVar5 = UI_ElementFactory__CreateDefaultLabel
                                               (pUVar3,pUVar4,"",0,4,(MethodInfo *)0x0);
                            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                                 (pUVar5,(MethodInfo_6F5650 *)
                                                         MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                              (__this->fields)._nextSongPanelLabel = pUVar6;
                              Il2CppCodeGenWriteBarrier(&(__this->fields)._nextSongPanelLabel,pUVar6);
                              pUVar6 = (__this->fields)._nextSongPanelLabel;
                              if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                                local_48[0].r = 1.0;
                                local_48[0].g = 1.0;
                                local_48[0].b = 1.0;
                                local_48[0].a = 1.0;
                                (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar6,(UnityEngine_Color_o *)local_48,
                                           (pUVar6->klass->vtable)._23_set_color.method);
                                pUVar7 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar7,4,4,(UnityEngine_Vector2_o)0x41a00000,(MethodInfo *)0x0);
                                pUVar7 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar7,8,8,(UnityEngine_Vector2_o)0x42200000c1f00000,
                                           (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar5,3,3,(UnityEngine_Vector2_o)0x437a0000,(MethodInfo *)0x0);
                                (*(__this->klass->vtable)._22_Hide.methodPtr)
                                          (__this,(__this->klass->vtable)._22_Hide.method);
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
  ThrowNullReferenceException();
}


// NextSongPanel$$ChangeSongText
// il2cpp: void NextSongPanel__ChangeSongText (NextSongPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181da8610

void NextSongPanel__ChangeSongText(NextSongPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields)._nextSongPanelLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)(pUVar1,name,(pUVar1->klass->vtable)._75_set_text.method)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// NextSongPanel$$.ctor
// il2cpp: void NextSongPanel___ctor (NextSongPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
NextSongPanel___ctor(NextSongPanel_o* __this, MethodInfo* method)

{
  UI_SimplePanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


