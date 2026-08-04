// Type: UI.EmoteTextPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EmoteTextPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteTextPopup.cs
// --------------------------------

// UI.EmoteTextPopup$$get_AnimationTime
// il2cpp: float UI_EmoteTextPopup__get_AnimationTime (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x43bf330

float UI_EmoteTextPopup__get_AnimationTime(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 0.25;
}


// UI.EmoteTextPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_EmoteTextPopup__get_PopupAnimationType (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x43bf340

int32_t UI_EmoteTextPopup__get_PopupAnimationType(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.EmoteTextPopup$$Setup
// il2cpp: void UI_EmoteTextPopup__Setup (UI_EmoteTextPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43bf350

void UI_EmoteTextPopup__Setup(UI_EmoteTextPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_EmoteTextPopup_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Characters_BaseCharacter_o *extraout_RDX;
  UI_EmoteTextPopup_o *pUVar3;
  float fVar4;
  undefined8 extraout_XMM1_Qa;
  float in_XMM2_Da;
  
  if (g_data_057ae3c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"Panel/Text/Label");
    g_data_057ae3c8 = '\x01';
  }
  pUVar3 = __this;
  __this_00 = (UI_EmoteTextPopup_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UI_EmoteTextPopup_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)__this_00,"Panel/Text/Label",(MethodInfo *)0x0);
    pUVar3 = __this_00;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._text = pUVar2;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._text);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._transform,pUVar1);
      return;
    }
  }
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (pUVar3->fields)._text;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)();
    (pUVar3->fields).ShowTimeLeft = fVar4;
    (pUVar3->fields).Character = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).Character,extraout_RDX);
    (pUVar3->fields).Offset.fields.x = (float)(int)extraout_XMM1_Qa;
    (pUVar3->fields).Offset.fields.y = (float)(int)((ulong)extraout_XMM1_Qa >> 0x20);
    (pUVar3->fields).Offset.fields.z = in_XMM2_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ChatPanel");
    g_data_057ae3c9 = '\x01';
  }
  return;
}


// UI.EmoteTextPopup$$Load
// il2cpp: void UI_EmoteTextPopup__Load (UI_EmoteTextPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x43bf400

void UI_EmoteTextPopup__Load
               (UI_EmoteTextPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o offset,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  pUVar1 = (__this->fields)._text;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)(pUVar1,text,(pUVar1->klass->vtable)._75_set_text.method)
    ;
    (__this->fields).ShowTimeLeft = showTime;
    (__this->fields).Character = character;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Character,character);
    (__this->fields).Offset.fields.x = (float)(int)offset.fields._0_8_;
    (__this->fields).Offset.fields.y = (float)(int)((ulong)offset.fields._0_8_ >> 0x20);
    (__this->fields).Offset.fields.z = offset.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ChatPanel");
    g_data_057ae3c9 = '\x01';
  }
  return;
}


// UI.EmoteTextPopup$$.ctor
// il2cpp: void UI_EmoteTextPopup___ctor (UI_EmoteTextPopup_o* __this, const MethodInfo* method);
// 0x43bc790

void UI_EmoteTextPopup___ctor(UI_EmoteTextPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *defaultValue;
  UI_BasePopup_AnimationKeyframe_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar7;
  undefined4 uVar8;
  undefined4 in_XMM1_Da;
  
  if (g_data_057ae0e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Transform,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AnimationKeyframe);
    g_data_057ae0e4 = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Transform);
  System_Collections_Generic_HashSet_object____ctor(__this_02,MethodInfo_HashSet_1_UnityEngine_Transform);
  (__this->fields)._staticTransforms = (System_Collections_Generic_HashSet_Transform__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._staticTransforms,__this_02);
  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AnimationKeyframe);
  pSVar7 = pSVar5;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
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
        pSVar7 = pSVar5;
        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                   *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
          pSVar7 = pSVar5;
          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3fa666663e19999a,
                     *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
            pSVar7 = pSVar5;
            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3e99999a,
                       *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
              pSVar7 = pSVar5;
              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8ccccd3ee66666,
                         *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                pSVar7 = pSVar5;
                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f7333333f19999a,
                           *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                  pSVar7 = pSVar5;
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                            (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8666663f400000,
                             *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                    System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                              (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                               *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).killPopupKeyframesIn = pSVar5;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).killPopupKeyframesIn,pSVar5);
                  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_List_AnimationKeyframe);
                  pSVar7 = pSVar5;
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
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
                        pSVar7 = pSVar5;
                        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                                   *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
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
                          pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                        }
                        else {
                          pSVar7 = pSVar5;
                          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f19999a,
                                     *(MethodInfo_36B7030 **)
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
                            pSVar7 = pSVar5;
                            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f59999a3f333333,
                                       *(MethodInfo_36B7030 **)
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
                              pSVar7 = pSVar5;
                              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3f59999a,
                                         *(MethodInfo_36B7030 **)
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
                                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                                           *(MethodInfo_36B7030 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              (__this->fields).killPopupKeyframesOut = pSVar5;
                              il2cpp_runtime_helper_022b4080(&(__this->fields).killPopupKeyframesOut,pSVar5);
                              if (g_data_057ae115 == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Button);
                                g_data_057ae115 = '\x01';
                              }
                              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Button);
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (pSVar6,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                              (__this->fields)._topButtons =
                                   (System_Collections_Generic_Dictionary_string__Button__o *)pSVar6;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._topButtons,pSVar6);
                              if (g_data_057ae02c == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
                                il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
                                g_data_057ae02c = '\x01';
                              }
                              __this_00 = (System_Collections_Generic_List_BasePopup__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
                              System_Collections_Generic_List_object____ctor
                                        ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
                              (__this->fields)._popups = __this_00;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
                              defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                              __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                              Settings_StringSetting___ctor_40f74f0
                                        (__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
                              (__this->fields)._currentCategoryPanelName = __this_01;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
                              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (pSVar6,MethodInfo_Dictionary_2_System_String_System_Type);
                              (__this->fields)._categoryPanelTypes =
                                   (System_Collections_Generic_Dictionary_string__Type__o *)pSVar6;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
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
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&pSVar7->klass = uVar8;
  *(undefined4 *)((long)&pSVar7->klass + 4) = in_XMM1_Da;
  return;
}


