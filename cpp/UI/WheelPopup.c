// Type: UI.WheelPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/WheelPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/WheelPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.WheelPopup.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_WheelPopup___c__DisplayClass8_0___ctor (UI_WheelPopup___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x40dba30

void UI_WheelPopup_<>c__DisplayClass8_0___ctor
               (UI_WheelPopup___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.WheelPopup.<>c__DisplayClass8_0$$<Setup>b__0
// il2cpp: void UI_WheelPopup___c__DisplayClass8_0___Setup_b__0 (UI_WheelPopup___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x40dc150

void UI_WheelPopup_<>c__DisplayClass8_0__<Setup>b__0
               (UI_WheelPopup___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  code *vtable_dispatch;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_WheelPopup_o *)0x0) {
    (pUVar1->fields).SelectedItem = (__this->fields).index;
    pUVar2 = (pUVar1->fields)._callback;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtable_dispatch = (code *)(pUVar2->fields).invoke_impl;
      (*vtable_dispatch)
                ((pUVar2->fields).method_code,(pUVar2->fields).method,in_RDX,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.WheelPopup$$get_AnimationTime
// il2cpp: float UI_WheelPopup__get_AnimationTime (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x40db590

float UI_WheelPopup__get_AnimationTime(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.WheelPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_WheelPopup__get_PopupAnimationType (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x40db5a0

int32_t UI_WheelPopup__get_PopupAnimationType(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.WheelPopup$$Setup
// il2cpp: void UI_WheelPopup__Setup (UI_WheelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40db5b0

void UI_WheelPopup__Setup(UI_WheelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  Il2CppClass *__this_00;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Events_UnityAction_o *call;
  int index;
  
  if (DAT_05704775 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass8_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Panel/Center/Label");
    il2cpp_init_method_metadata(&"Panel/Buttons");
    il2cpp_init_method_metadata(&"Prefabs/InGame/WheelButton");
    DAT_05704775 = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    index = 0;
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Panel/Center/Label",(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._centerText = pUVar7;
      il2cpp_runtime_glue(&(__this->fields)._centerText);
      do {
        pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass8_0);
        System_Object___ctor(pIVar8,(MethodInfo *)0x0);
        if (pIVar8 == (Il2CppObject *)0x0) goto LAB_040dba1d;
        pIVar8[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar8[1].monitor);
        pSVar3 = (__this->fields)._buttons;
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040dba1d;
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"Panel/Buttons",(MethodInfo *)0x0);
        pUVar9 = UI_ElementFactory__InstantiateAndBind(pUVar6,"Prefabs/InGame/WheelButton",(MethodInfo *)0x0);
        if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar9 = UnityEngine_GameObject__get_gameObject(pUVar9,(MethodInfo *)0x0),
           lVar5 = MethodInfo_Void_Add, pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0))
        goto LAB_040dba1d;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto LAB_040dba1d;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar9;
          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,pUVar9);
          *(int *)&pIVar8[1].klass = index;
          pSVar3 = (__this->fields)._buttons;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          *(int *)&pIVar8[1].klass = index;
          pSVar3 = (__this->fields)._buttons;
        }
        if (((pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
            (pUVar9 = (UnityEngine_GameObject_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 MethodInfo_GameObject_get_Item), pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
           (pIVar8 = UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Button_GetComponent_Button),
           pIVar8 == (Il2CppObject *)0x0)) goto LAB_040dba1d;
        __this_00 = pIVar8[0x10].klass;
        call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 == (Il2CppClass *)0x0) goto LAB_040dba1d;
        UnityEngine_Events_UnityEvent__AddListener
                  ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
        index = index + 1;
      } while (index != 8);
      pSVar3 = (__this->fields)._buttons;
      if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        pUVar9 = (UnityEngine_GameObject_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_GameObject_get_Item);
        UI_ElementFactory__SetAnchor
                  (pUVar9,4,7,(UnityEngine_Vector2_o)0x4334000000000000,(MethodInfo *)0x0);
        pSVar3 = (__this->fields)._buttons;
        if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          pUVar9 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,1,MethodInfo_GameObject_get_Item);
          UI_ElementFactory__SetAnchor
                    (pUVar9,4,6,(UnityEngine_Vector2_o)0x42b4000043070000,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._buttons;
          if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
            pUVar9 = (UnityEngine_GameObject_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,2,MethodInfo_GameObject_get_Item);
            UI_ElementFactory__SetAnchor
                      (pUVar9,4,3,(UnityEngine_Vector2_o)0x43340000,(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._buttons;
            if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              pUVar9 = (UnityEngine_GameObject_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,3,MethodInfo_GameObject_get_Item
                                 );
              UI_ElementFactory__SetAnchor
                        (pUVar9,4,0,(UnityEngine_Vector2_o)0xc2b4000043070000,(MethodInfo *)0x0);
              pSVar3 = (__this->fields)._buttons;
              if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                pUVar9 = (UnityEngine_GameObject_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,4,
                                    MethodInfo_GameObject_get_Item);
                UI_ElementFactory__SetAnchor
                          (pUVar9,4,1,(UnityEngine_Vector2_o)0xc334000000000000,(MethodInfo *)0x0);
                pSVar3 = (__this->fields)._buttons;
                if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                  pUVar9 = (UnityEngine_GameObject_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar3,5,
                                      MethodInfo_GameObject_get_Item);
                  UI_ElementFactory__SetAnchor
                            (pUVar9,4,2,(UnityEngine_Vector2_o)0xc2b40000c3070000,(MethodInfo *)0x0)
                  ;
                  pSVar3 = (__this->fields)._buttons;
                  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                    pUVar9 = (UnityEngine_GameObject_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar3,6,
                                        MethodInfo_GameObject_get_Item);
                    UI_ElementFactory__SetAnchor
                              (pUVar9,4,5,(UnityEngine_Vector2_o)0xc3340000,(MethodInfo *)0x0);
                    pSVar3 = (__this->fields)._buttons;
                    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                      pUVar9 = (UnityEngine_GameObject_o *)
                               System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar3,7,
                                          MethodInfo_GameObject_get_Item);
                      UI_ElementFactory__SetAnchor
                                (pUVar9,4,8,(UnityEngine_Vector2_o)0x42b40000c3070000,
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
LAB_040dba1d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.WheelPopup$$Show
// il2cpp: void UI_WheelPopup__Show (UI_WheelPopup_o* __this, System_String_o* openKey, System_Collections_Generic_List_string__o* options, UnityEngine_Events_UnityAction_o* callback, const MethodInfo* method);
// 0x40dba40

void UI_WheelPopup__Show(UI_WheelPopup_o *__this,System_String_o *openKey,
                        System_Collections_Generic_List_string__o *options,
                        UnityEngine_Events_UnityAction_o *callback,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  uint in_EAX;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  System_String_o *str2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int index;
  int index_00;
  float alpha;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_05704776 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&" - ");
    il2cpp_init_method_metadata(&"QuickSelect");
    DAT_05704776 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pUVar5 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((char)bVar4 != '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines
                ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      alpha = (float)(*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this);
      UI_BasePopup__SetTransformAlpha((UI_BasePopup_o *)__this,alpha,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    UI_WheelPopup__SetCenterText(__this,openKey,method_00);
    (__this->fields)._callback = callback;
    il2cpp_runtime_glue(&(__this->fields)._callback);
    if (options != (System_Collections_Generic_List_string__o *)0x0) {
      index_00 = (options->fields)._size;
      if (0 < index_00) {
        index = 0;
        do {
          pSVar2 = (__this->fields)._buttons;
          if ((pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
             (pUVar5 = (UnityEngine_GameObject_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                  MethodInfo_GameObject_get_Item), pUVar5 == (UnityEngine_GameObject_o *)0x0))
          goto LAB_040dbd6f;
          UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
          if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x48), lVar3 == 0)) goto LAB_040dbd6f;
          __this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar3 + 0x10);
          uStack_38 = CONCAT44(index + 1,(uint)uStack_38);
          pSVar6 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat("QuickSelect",pSVar6,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)
          goto LAB_040dbd6f;
          pIVar7 = System_Collections_Specialized_OrderedDictionary__get_Item
                             (__this_00,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          if (pIVar7 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
            if (((pIVar7->klass->_2).naturalAligment < bVar1) ||
               ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar7);
            }
          }
          pSVar2 = (__this->fields)._buttons;
          if ((((pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
               (pUVar5 = (UnityEngine_GameObject_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                    MethodInfo_GameObject_get_Item), pUVar5 == (UnityEngine_GameObject_o *)0x0)) ||
              (pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
              pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
             ((pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
              pUVar8 == (UnityEngine_Transform_o *)0x0 ||
              (pIVar9 = UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text),
              pIVar7 == (Il2CppObject *)0x0)))) goto LAB_040dbd6f;
          pSVar6 = (System_String_o *)
                   (*pIVar7->klass->vtable[3].methodPtr)(pIVar7,pIVar7->klass->vtable[3].method);
          str2 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)options,index,MethodInfo_String_get_Item)
          ;
          pSVar6 = System_String__Concat(pSVar6," - ",str2,(MethodInfo *)0x0);
          if (pIVar9 == (Il2CppObject *)0x0) goto LAB_040dbd6f;
          (*pIVar9->klass->vtable[0x4b].methodPtr)(pIVar9,pSVar6,pIVar9->klass->vtable[0x4b].method)
          ;
          index_00 = (options->fields)._size;
          index = index + 1;
        } while (index < index_00);
      }
      pSVar2 = (__this->fields)._buttons;
      while (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        if ((pSVar2->fields)._size <= index_00) {
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
        pUVar5 = (UnityEngine_GameObject_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,index_00,
                            MethodInfo_GameObject_get_Item);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
        index_00 = index_00 + 1;
        pSVar2 = (__this->fields)._buttons;
      }
    }
  }
LAB_040dbd6f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.WheelPopup$$SetCenterText
// il2cpp: void UI_WheelPopup__SetCenterText (UI_WheelPopup_o* __this, System_String_o* openKey, const MethodInfo* method);
// 0x40dbda0

void UI_WheelPopup__SetCenterText
               (UI_WheelPopup_o *__this,System_String_o *openKey,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Text_c *pUVar4;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704777 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"Next");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&" - ");
    DAT_05704777 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
     (plVar2 = *(long **)(lVar1 + 0x48), plVar2 != (long *)0x0)) {
    pUVar3 = (__this->fields)._centerText;
    pSVar5 = (System_String_o *)
             (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170),method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(pSVar5," - ",pSVar6,"\n",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar5,(pUVar3->klass->vtable)._75_set_text.method);
      pUVar3 = (__this->fields)._centerText;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        pSVar5 = (System_String_o *)(*(pUVar3->klass->vtable)._74_get_text.methodPtr)(pUVar3);
        pSVar6 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,openKey," - ",pSVar6,(MethodInfo *)0x0);
        pUVar4 = pUVar3->klass;
        vtable_dispatch = (pUVar4->vtable)._75_set_text.methodPtr;
        (*vtable_dispatch)
                  (pUVar3,pSVar5,(pUVar4->vtable)._75_set_text.method,pUVar4,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.WheelPopup$$OnButtonClick
// il2cpp: void UI_WheelPopup__OnButtonClick (UI_WheelPopup_o* __this, int32_t index, const MethodInfo* method);
// 0x40dbf40

void UI_WheelPopup__OnButtonClick(UI_WheelPopup_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtable_dispatch;
  
  (__this->fields).SelectedItem = index;
  pUVar1 = (__this->fields)._callback;
  if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
    vtable_dispatch = (code *)(pUVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pUVar1->fields).method_code,(pUVar1->fields).method,method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.WheelPopup$$Update
// il2cpp: void UI_WheelPopup__Update (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x40dbf70

void UI_WheelPopup__Update(UI_WheelPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  uint in_EAX;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Settings_KeybindSetting_o *__this_01;
  int iVar6;
  int iVar7;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_05704778 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"QuickSelect");
    DAT_05704778 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  iVar6 = 0;
  while ((lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38), lVar2 != 0 &&
         (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0))) {
    __this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar2 + 0x10);
    iVar7 = iVar6 + 1;
    uStack_38 = CONCAT44(iVar7,(uint)uStack_38);
    pSVar5 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat("QuickSelect",pSVar5,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) break;
    __this_01 = (Settings_KeybindSetting_o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_00,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    if (__this_01 == (Settings_KeybindSetting_o *)0x0) break;
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_01);
    }
    bVar4 = Settings_KeybindSetting__GetKeyDown(__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      (__this->fields).SelectedItem = iVar6;
      pUVar3 = (__this->fields)._callback;
      if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) break;
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code);
    }
    iVar6 = iVar7;
    if (iVar7 == 8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.WheelPopup$$.ctor
// il2cpp: void UI_WheelPopup___ctor (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x40dc0d0

void UI_WheelPopup___ctor(UI_WheelPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_05704779 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05704779 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._buttons = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._buttons);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


