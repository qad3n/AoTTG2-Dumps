// Type: NextSongPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/NextSongPanel.cs
// Prior real C# source: none
// --------------------------------

// NextSongPanel$$get_Width
// il2cpp: float NextSongPanel__get_Width (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063c80

float NextSongPanel__get_Width(NextSongPanel_o *__this,MethodInfo *method)

{
  return 400.0;
}


// NextSongPanel$$get_Height
// il2cpp: float NextSongPanel__get_Height (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063c90

float NextSongPanel__get_Height(NextSongPanel_o *__this,MethodInfo *method)

{
  return 100.0;
}


// NextSongPanel$$get_DoublePanel
// il2cpp: bool NextSongPanel__get_DoublePanel (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063ca0

bool_conflict NextSongPanel__get_DoublePanel(NextSongPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// NextSongPanel$$get_DoublePanelDivider
// il2cpp: bool NextSongPanel__get_DoublePanelDivider (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063cb0

bool_conflict NextSongPanel__get_DoublePanelDivider(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// NextSongPanel$$get_VerticalSpacing
// il2cpp: float NextSongPanel__get_VerticalSpacing (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063cc0

float NextSongPanel__get_VerticalSpacing(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// NextSongPanel$$get_VerticalPadding
// il2cpp: int32_t NextSongPanel__get_VerticalPadding (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063cd0

int32_t NextSongPanel__get_VerticalPadding(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// NextSongPanel$$get_HorizontalPadding
// il2cpp: int32_t NextSongPanel__get_HorizontalPadding (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4063ce0

int32_t NextSongPanel__get_HorizontalPadding(NextSongPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// NextSongPanel$$Setup
// il2cpp: void NextSongPanel__Setup (NextSongPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4063cf0

void NextSongPanel__Setup(NextSongPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_String_o *defaultValue;
  Il2CppObject *pIVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_LayoutGroup_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  UI_ElementStyle_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Threading_CancellationTokenSource_o *__this_05;
  Settings_StringSetting_o *__this_06;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  UnityEngine_MonoBehaviour_o *__this_08;
  
  if (g_data_057ac2af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Sprites/ost_cover");
    g_data_057ac2af = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = (__this->fields).DoublePanelLeft;
  if (parent_00 != (UnityEngine_Transform_o *)0x0) {
    pIVar1 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)parent_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar1 != (Il2CppObject *)0x0) {
      (*pIVar1->klass->vtable[0x24].methodPtr)(0x42c80000,pIVar1,pIVar1->klass->vtable[0x24].method);
      (*(__this->klass->vtable)._6_get_Height.methodPtr)(__this,(__this->klass->vtable)._6_get_Height.method);
      (*pIVar1->klass->vtable[0x26].methodPtr)(pIVar1,pIVar1->klass->vtable[0x26].method);
      parent_00 = (__this->fields).DoublePanelLeft;
      if (parent_00 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)parent_00,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    (__this_00,0,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(__this_00,0,(MethodInfo *)0x0)
          ;
          parent_00 = (__this->fields).DoublePanelRight;
          if (parent_00 != (UnityEngine_Transform_o *)0x0) {
            pIVar1 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)parent_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar1 != (Il2CppObject *)0x0) {
              (*pIVar1->klass->vtable[0x24].methodPtr)(0x43960000,pIVar1,pIVar1->klass->vtable[0x24].method);
              (*(__this->klass->vtable)._6_get_Height.methodPtr)
                        (__this,(__this->klass->vtable)._6_get_Height.method);
              (*pIVar1->klass->vtable[0x26].methodPtr)(pIVar1,pIVar1->klass->vtable[0x26].method);
              parent_00 = (__this->fields).DoublePanelRight;
              if (parent_00 != (UnityEngine_Transform_o *)0x0) {
                __this_01 = (UnityEngine_UI_LayoutGroup_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)parent_00,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
                if (__this_01 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment(__this_01,4,(MethodInfo *)0x0);
                  (__this->fields).Parent = parent;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).Parent);
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  parent_00 = (UnityEngine_Transform_o *)0x0;
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    parent_00 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                    pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                    UI_ElementStyle___ctor(pUVar2,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                    pUVar3 = (UnityEngine_Transform_o *)
                             UI_ElementFactory__CreateRawImage
                                       (parent_00,pUVar2,"Sprites/ost_cover",32.0,32.0,(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      __this_02 = (UnityEngine_Transform_o *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
                      parent_00 = pUVar3;
                      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                        parent_00 = __this_02;
                        __this_03 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_02,MethodInfo_RectTransform_GetComponent_RectTransform);
                        if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (__this_03,(UnityEngine_Vector2_o)0x42a0000042a00000,(MethodInfo *)0x0);
                          pUVar3 = (__this->fields).DoublePanelRight;
                          parent_00 = (UnityEngine_Transform_o *)0x0;
                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                            parent_00 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                            pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                            UI_ElementStyle___ctor(pUVar2,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                            __this_04 = UI_ElementFactory__CreateDefaultLabel
                                                  (parent_00,pUVar2,"",0,4,(MethodInfo *)0x0);
                            if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar4 = (UnityEngine_UI_Text_o *)
                                       UnityEngine_GameObject__GetComponent_object_(__this_04,MethodInfo_Text_GetComponent_Text);
                              (__this->fields)._nextSongPanelLabel = pUVar4;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._nextSongPanelLabel,pUVar4);
                              pUVar4 = (__this->fields)._nextSongPanelLabel;
                              parent_00 = (UnityEngine_Transform_o *)0x0;
                              if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                                (*(pUVar4->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
                                pUVar5 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar5,4,4,(UnityEngine_Vector2_o)0x41a00000,(MethodInfo *)0x0);
                                pUVar5 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar5,8,8,(UnityEngine_Vector2_o)0x42200000c1f00000,
                                           (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (__this_04,3,3,(UnityEngine_Vector2_o)0x437a0000,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  __this_08 = parent_00[4].monitor;
  if (__this_08 != (UnityEngine_MonoBehaviour_o *)0x0) {
    (*__this_08->klass[4]._1.gc_desc)();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_05 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_UI_BasePopup);
  __this_08[1].fields.m_CancellationTokenSource = __this_05;
  il2cpp_runtime_helper_022b4080(&__this_08[1].fields.m_CancellationTokenSource,__this_05);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_06 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_06,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  __this_08[2].monitor = __this_06;
  il2cpp_runtime_helper_022b4080(&__this_08[2].monitor,__this_06);
  __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_07,MethodInfo_Dictionary_2_System_String_System_Type);
  __this_08[2].fields.m_CachedPtr = (intptr_t)__this_07;
  il2cpp_runtime_helper_022b4080(&__this_08[2].fields);
  UnityEngine_MonoBehaviour___ctor(__this_08,(MethodInfo *)0x0);
  return;
}


// NextSongPanel$$ChangeSongText
// il2cpp: void NextSongPanel__ChangeSongText (NextSongPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4064110

void NextSongPanel__ChangeSongText(NextSongPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *defaultValue;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  
  __this_03 = (__this->fields)._nextSongPanelLabel;
  if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._75_set_text.methodPtr;
    (*vtableDispatch)
              (__this_03,name,(__this_03->klass->vtable)._75_set_text.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
  *(System_Collections_Generic_List_object__o **)&(__this_03->fields).m_SkipLayoutUpdate = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).m_SkipLayoutUpdate,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  *(Settings_StringSetting_o **)&(__this_03->fields).m_RaycastPadding.fields = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).m_RaycastPadding,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_03->fields).m_RaycastPadding.fields.z
       = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).m_RaycastPadding.fields.z);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// NextSongPanel$$.ctor
// il2cpp: void NextSongPanel___ctor (NextSongPanel_o* __this, const MethodInfo* method);
// 0x4064140

void NextSongPanel___ctor(NextSongPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


