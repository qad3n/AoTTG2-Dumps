// Type: NextSongPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/NextSongPanel.cs
// Prior source: NEW in this update
// --------------------------------

// NextSongPanel$$get_Width
// il2cpp: float NextSongPanel__get_Width (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e330

float NextSongPanel__get_Width(NextSongPanel_o *__this,MethodInfo *method)

{
  return 400.0;
}


// NextSongPanel$$get_Height
// il2cpp: float NextSongPanel__get_Height (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e340

float NextSongPanel__get_Height(NextSongPanel_o *__this,MethodInfo *method)

{
  return 100.0;
}


// NextSongPanel$$get_DoublePanel
// il2cpp: bool NextSongPanel__get_DoublePanel (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e350

bool_conflict NextSongPanel__get_DoublePanel(NextSongPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// NextSongPanel$$get_DoublePanelDivider
// il2cpp: bool NextSongPanel__get_DoublePanelDivider (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e360

bool_conflict NextSongPanel__get_DoublePanelDivider(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// NextSongPanel$$get_VerticalSpacing
// il2cpp: float NextSongPanel__get_VerticalSpacing (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e370

float NextSongPanel__get_VerticalSpacing(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// NextSongPanel$$get_VerticalPadding
// il2cpp: int32_t NextSongPanel__get_VerticalPadding (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e380

int32_t NextSongPanel__get_VerticalPadding(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// NextSongPanel$$get_HorizontalPadding
// il2cpp: int32_t NextSongPanel__get_HorizontalPadding (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e390

int32_t NextSongPanel__get_HorizontalPadding(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// NextSongPanel$$Setup
// il2cpp: void NextSongPanel__Setup (NextSongPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x3d6e3a0

void NextSongPanel__Setup(NextSongPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_LayoutGroup_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UI_ElementStyle_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Component_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  
  if (DAT_057025ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Sprites/ost_cover");
    DAT_057025ff = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).DoublePanelLeft;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pIVar1 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar1 != (Il2CppObject *)0x0) {
      (*pIVar1->klass->vtable[0x24].methodPtr)(0x42c80000,pIVar1,pIVar1->klass->vtable[0x24].method)
      ;
      (*(__this->klass->vtable)._6_get_Height.methodPtr)
                (__this,(__this->klass->vtable)._6_get_Height.method);
      (*pIVar1->klass->vtable[0x26].methodPtr)(pIVar1,pIVar1->klass->vtable[0x26].method);
      pUVar2 = (__this->fields).DoublePanelLeft;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar2,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
        if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    (__this_00,0,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    (__this_00,0,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).DoublePanelRight;
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pIVar1 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar1 != (Il2CppObject *)0x0) {
              (*pIVar1->klass->vtable[0x24].methodPtr)
                        (0x43960000,pIVar1,pIVar1->klass->vtable[0x24].method);
              (*(__this->klass->vtable)._6_get_Height.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_Height.method);
              (*pIVar1->klass->vtable[0x26].methodPtr)(pIVar1,pIVar1->klass->vtable[0x26].method);
              pUVar2 = (__this->fields).DoublePanelRight;
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                __this_01 = (UnityEngine_UI_LayoutGroup_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar2,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
                if (__this_01 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment(__this_01,4,(MethodInfo *)0x0);
                  (__this->fields).Parent = parent;
                  il2cpp_runtime_glue(&(__this->fields).Parent);
                  pUVar2 = (__this->fields).DoublePanelLeft;
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                    pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                    UI_ElementStyle___ctor(pUVar3,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                    pUVar4 = UI_ElementFactory__CreateRawImage
                                       (pUVar2,pUVar3,"Sprites/ost_cover",32.0,32.0,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      __this_02 = (UnityEngine_Component_o *)
                                  UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
                      if (__this_02 != (UnityEngine_Component_o *)0x0) {
                        __this_03 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_Component__GetComponent<object>
                                              (__this_02,MethodInfo_RectTransform_GetComponent_RectTransform);
                        if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (__this_03,(UnityEngine_Vector2_o)0x42a0000042a00000,
                                     (MethodInfo *)0x0);
                          pUVar2 = (__this->fields).DoublePanelRight;
                          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                            pUVar2 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
                            ;
                            pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                            UI_ElementStyle___ctor
                                      (pUVar3,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                            pUVar4 = UI_ElementFactory__CreateDefaultLabel
                                               (pUVar2,pUVar3,"",0,4,(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar5 = (UnityEngine_UI_Text_o *)
                                       UnityEngine_GameObject__GetComponent<object>
                                                 (pUVar4,MethodInfo_Text_GetComponent_Text);
                              (__this->fields)._nextSongPanelLabel = pUVar5;
                              il2cpp_runtime_glue(&(__this->fields)._nextSongPanelLabel,pUVar5);
                              pUVar5 = (__this->fields)._nextSongPanelLabel;
                              if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                                (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                          (0x3f800000,0x3f800000);
                                pUVar6 = UnityEngine_Component__get_gameObject
                                                   (__this_02,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar6,4,4,(UnityEngine_Vector2_o)0x41a00000,
                                           (MethodInfo *)0x0);
                                pUVar6 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,
                                                    (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar6,8,8,(UnityEngine_Vector2_o)0x42200000c1f00000,
                                           (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar4,3,3,(UnityEngine_Vector2_o)0x437a0000,
                                           (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// NextSongPanel$$ChangeSongText
// il2cpp: void NextSongPanel__ChangeSongText (NextSongPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3d6e7c0

void NextSongPanel__ChangeSongText(NextSongPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._nextSongPanelLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,name,(pUVar1->klass->vtable)._75_set_text.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// NextSongPanel$$.ctor
// il2cpp: void NextSongPanel___ctor (NextSongPanel_o* __this, const MethodInfo* method);
// 0x3d6e7f0

void NextSongPanel___ctor(NextSongPanel_o *__this,MethodInfo *method)

{
  UI_SimplePanel___ctor((UI_SimplePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


