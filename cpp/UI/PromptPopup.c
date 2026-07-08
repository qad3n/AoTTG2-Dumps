// Type: UI.PromptPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/PromptPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/PromptPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.PromptPopup$$get_TopBarHeight
// il2cpp: float UI_PromptPopup__get_TopBarHeight (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4026c70

float UI_PromptPopup__get_TopBarHeight(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.PromptPopup$$get_BottomBarHeight
// il2cpp: float UI_PromptPopup__get_BottomBarHeight (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4026c80

float UI_PromptPopup__get_BottomBarHeight(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.PromptPopup$$get_TitleFontSize
// il2cpp: int32_t UI_PromptPopup__get_TitleFontSize (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4026c90

int32_t UI_PromptPopup__get_TitleFontSize(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.PromptPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_PromptPopup__get_ButtonFontSize (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4026ca0

int32_t UI_PromptPopup__get_ButtonFontSize(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.PromptPopup$$Setup
// il2cpp: void UI_PromptPopup__Setup (UI_PromptPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x401d770

void UI_PromptPopup__Setup(UI_PromptPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704322 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&"Prefabs/Panels/BackgroundDim");
    DAT_05704322 = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_01 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/Panels/BackgroundDim",(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Image_GetComponent_Image);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (*pIVar2->klass->vtable[0x17].methodPtr)(0,0,pIVar2,pIVar2->klass->vtable[0x17].method);
      UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetSiblingIndex(pUVar1,0,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_HashSet_object__o *)
                    (__this->fields)._staticTransforms;
        pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Add
                    (__this_00,(Il2CppObject *)pUVar1,MethodInfo_Boolean_Add);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PromptPopup$$Update
// il2cpp: void UI_PromptPopup__Update (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4026cb0

void UI_PromptPopup__Update(UI_PromptPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  undefined8 extraout_RDX;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && ((char)(__this->fields).IsActive != '\0')) {
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
  return;
}


// UI.PromptPopup$$.ctor
// il2cpp: void UI_PromptPopup___ctor (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4021460

void UI_PromptPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_BasePopup_AnimationKeyframe_array *pUVar3;
  long lVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (DAT_057042ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Transform);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
    il2cpp_init_method_metadata(&TypeInfo_List_AnimationKeyframe);
    DAT_057042ce = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Transform);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_UnityEngine_Transform);
  (__this->fields)._staticTransforms = (System_Collections_Generic_HashSet_Transform__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._staticTransforms,__this_00);
  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
           il2cpp_runtime_glue(TypeInfo_List_AnimationKeyframe);
  System_Collections_Generic_List<BasePopup_AnimationKeyframe>___ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
  lVar4 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (pSVar5->fields)._items;
    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
      }
      else {
        System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                   *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (pSVar5->fields)._items;
      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2].fields.time = 0.15;
          pUVar3->m_Items[(int)uVar2].fields.scale = 1.3;
        }
        else {
          System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3fa666663e19999a,
                     *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (pSVar5->fields)._items;
        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2].fields.time = 0.3;
            pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
          }
          else {
            System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3e99999a,
                       *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (pSVar5->fields)._items;
          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2].fields.time = 0.45;
              pUVar3->m_Items[(int)uVar2].fields.scale = 1.1;
            }
            else {
              System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8ccccd3ee66666,
                         *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar4 = MethodInfo_Void_Add;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (pSVar5->fields)._items;
            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                pUVar3->m_Items[(int)uVar2].fields.scale = 0.95;
              }
              else {
                System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f7333333f19999a,
                           *(MethodInfo_3632160 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              lVar4 = MethodInfo_Void_Add;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar3 = (pSVar5->fields)._items;
              if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                uVar2 = (pSVar5->fields)._size;
                if (uVar2 < (uint)pUVar3->max_length) {
                  (pSVar5->fields)._size = uVar2 + 1;
                  pUVar3->m_Items[(int)uVar2].fields.time = 0.75;
                  pUVar3->m_Items[(int)uVar2].fields.scale = 1.05;
                }
                else {
                  System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                            (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8666663f400000,
                             *(MethodInfo_3632160 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                lVar4 = MethodInfo_Void_Add;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar3 = (pSVar5->fields)._items;
                if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                  uVar2 = (pSVar5->fields)._size;
                  if (uVar2 < (uint)pUVar3->max_length) {
                    (pSVar5->fields)._size = uVar2 + 1;
                    pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                    pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                  }
                  else {
                    System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                              (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                               *(MethodInfo_3632160 **)
                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).killPopupKeyframesIn = pSVar5;
                  il2cpp_runtime_glue(&(__this->fields).killPopupKeyframesIn,pSVar5);
                  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                           il2cpp_runtime_glue(TypeInfo_List_AnimationKeyframe);
                  System_Collections_Generic_List<BasePopup_AnimationKeyframe>___ctor
                            (pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
                  lVar4 = MethodInfo_Void_Add;
                  if (pSVar5 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                                0x0) {
                    piVar1 = &(pSVar5->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (pSVar5->fields)._items;
                    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                      uVar2 = (pSVar5->fields)._size;
                      if (uVar2 < (uint)pUVar3->max_length) {
                        (pSVar5->fields)._size = uVar2 + 1;
                        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
                        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                      }
                      else {
                        System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                                   *(MethodInfo_3632160 **)
                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar4 = MethodInfo_Void_Add;
                      piVar1 = &(pSVar5->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar3 = (pSVar5->fields)._items;
                      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                        uVar2 = (pSVar5->fields)._size;
                        if (uVar2 < (uint)pUVar3->max_length) {
                          (pSVar5->fields)._size = uVar2 + 1;
                          pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                          pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                        }
                        else {
                          System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f19999a,
                                     *(MethodInfo_3632160 **)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar4 = MethodInfo_Void_Add;
                        piVar1 = &(pSVar5->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar3 = (pSVar5->fields)._items;
                        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                          uVar2 = (pSVar5->fields)._size;
                          if (uVar2 < (uint)pUVar3->max_length) {
                            (pSVar5->fields)._size = uVar2 + 1;
                            pUVar3->m_Items[(int)uVar2].fields.time = 0.7;
                            pUVar3->m_Items[(int)uVar2].fields.scale = 0.85;
                          }
                          else {
                            System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f59999a3f333333,
                                       *(MethodInfo_3632160 **)
                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar4 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar5->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pUVar3 = (pSVar5->fields)._items;
                          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                            uVar2 = (pSVar5->fields)._size;
                            if (uVar2 < (uint)pUVar3->max_length) {
                              (pSVar5->fields)._size = uVar2 + 1;
                              pUVar3->m_Items[(int)uVar2].fields.time = 0.85;
                              pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
                            }
                            else {
                              System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3f59999a
                                         ,*(MethodInfo_3632160 **)
                                           (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar4 = MethodInfo_Void_Add;
                            piVar1 = &(pSVar5->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar3 = (pSVar5->fields)._items;
                            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                              uVar2 = (pSVar5->fields)._size;
                              if (uVar2 < (uint)pUVar3->max_length) {
                                (pSVar5->fields)._size = uVar2 + 1;
                                pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                                pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                              }
                              else {
                                System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)
                                                  0x3f8000003f800000,
                                           *(MethodInfo_3632160 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              (__this->fields).killPopupKeyframesOut = pSVar5;
                              il2cpp_runtime_glue(&(__this->fields).killPopupKeyframesOut,pSVar5);
                              if (DAT_057042ff == '\0') {
                                il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                                il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Button);
                                DAT_057042ff = '\x01';
                              }
                              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *
                                          )il2cpp_runtime_glue(TypeInfo_Dictionary_string__Button);
                              System_Collections_Generic_Dictionary<object__object>___ctor
                                        (__this_01,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                              (__this->fields)._topButtons =
                                   (System_Collections_Generic_Dictionary_string__Button__o *)
                                   __this_01;
                              il2cpp_runtime_glue(&(__this->fields)._topButtons);
                              UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
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


