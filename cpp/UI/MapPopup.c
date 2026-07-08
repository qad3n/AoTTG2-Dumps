// Type: UI.MapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/MapPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapPopup$$get_Title
// il2cpp: System_String_o* UI_MapPopup__get_Title (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf1c0

System_String_o * UI_MapPopup__get_Title(UI_MapPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570469f == '\0') {
    il2cpp_init_method_metadata(&"Map");
    DAT_0570469f = '\x01';
  }
  return "Map";
}


// UI.MapPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_MapPopup__get_PopupAnimationType (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf1f0

int32_t UI_MapPopup__get_PopupAnimationType(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.MapPopup$$get_MinFadeAlpha
// il2cpp: float UI_MapPopup__get_MinFadeAlpha (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf200

float UI_MapPopup__get_MinFadeAlpha(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.MapPopup$$get_Width
// il2cpp: float UI_MapPopup__get_Width (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf210

float UI_MapPopup__get_Width(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 900.0;
}


// UI.MapPopup$$get_Height
// il2cpp: float UI_MapPopup__get_Height (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf220

float UI_MapPopup__get_Height(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1030.0;
}


// UI.MapPopup$$Setup
// il2cpp: void UI_MapPopup__Setup (UI_MapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40bf230

void UI_MapPopup__Setup(UI_MapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar2;
  UI_ElementStyle_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Text_o *pUVar7;
  float fVar8;
  
  if (DAT_057046a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"");
    DAT_057046a0 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_MapPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar8 = (float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
  pUVar4 = UI_ElementFactory__CreateRawImage
                     (pUVar2,pUVar3,"",fVar8,fVar8,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_UI_RawImage_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_RawImage_GetComponent_RawImage);
    ppUVar1 = &(__this->fields)._background;
    (__this->fields)._background = pUVar5;
    il2cpp_runtime_glue(ppUVar1,pUVar5);
    pUVar5 = (__this->fields)._background;
    if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
      pIVar6 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar6 != (Il2CppObject *)0x0) {
        (*pIVar6->klass->vtable[0x1c].methodPtr)(pIVar6,1,pIVar6->klass->vtable[0x1c].method);
        pUVar5 = *ppUVar1;
        if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
          __this_00 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            fVar8 = (float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
            value.fields.y = fVar8;
            value.fields.x = fVar8;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
            UI_ElementStyle___ctor(pUVar3,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
            pUVar4 = UI_ElementFactory__CreateWhiteLabel
                               (pUVar2,pUVar3,"",0,4,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = (UnityEngine_UI_Text_o *)
                       UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._label = pUVar7;
              il2cpp_runtime_glue(&(__this->fields)._label);
              pUVar7 = (__this->fields)._label;
              if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar4,2,2,(UnityEngine_Vector2_o)0xc2960000c1700000,(MethodInfo *)0x0);
                return;
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


// UI.MapPopup$$Show
// il2cpp: void UI_MapPopup__Show (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf6e0

void UI_MapPopup__Show(UI_MapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  UI_MapPopup__Sync(__this,method_00);
  (__this->fields)._syncTimeLeft = 1.0;
  return;
}


// UI.MapPopup$$Update
// il2cpp: void UI_MapPopup__Update (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf950

void UI_MapPopup__Update(UI_MapPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *x;
  long lVar3;
  UnityEngine_UI_Text_o *pUVar4;
  bool_conflict bVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  float __this_00;
  float fVar7;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  
  if (DAT_057046a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"F0");
    il2cpp_init_method_metadata(&", ");
    DAT_057046a1 = '\x01';
  }
  UStack_40 = (UnityEngine_Vector3_Fields)ZEXT812(0);
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
        TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar1);
    }
    if ((plVar1[5] != 0) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(plVar1[5] + 0x10),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UStack_40 = (UnityEngine_Vector3_Fields)
                  UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)plVar1[7];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (((plVar1[7] == 0) || (lVar3 = *(long *)(plVar1[7] + 0x70), lVar3 == 0)) ||
           (pUVar2 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
           pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_040bfc1a;
        UStack_40 = (UnityEngine_Vector3_Fields)
                    UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      }
      pUVar4 = (__this->fields)._label;
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      pSVar6 = System_Single__ToString(__this_00,(System_String_o *)&UStack_40,"F0");
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = pSVar6;
          il2cpp_runtime_glue(values->m_Items,pSVar6);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = ", ";
            fVar7 = (float)il2cpp_runtime_glue(values->m_Items + 1);
            pSVar6 = System_Single__ToString(fVar7,(System_String_o *)&UStack_40.y,"F0");
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 2,pSVar6);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = ", ";
                fVar7 = (float)il2cpp_runtime_glue(values->m_Items + 3);
                pSVar6 = System_Single__ToString(fVar7,(System_String_o *)&UStack_40.z,"F0")
                ;
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = pSVar6;
                  il2cpp_runtime_glue(values->m_Items + 4);
                  method_00 = (MethodInfo *)System_String__Concat(values,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                    (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                              (pUVar4,method_00,(pUVar4->klass->vtable)._75_set_text.method);
                    fStack_34 = (__this->fields)._syncTimeLeft;
                    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                    (__this->fields)._syncTimeLeft = fStack_34 - fVar7;
                    if (fStack_34 - fVar7 <= 0.0) {
                      UI_MapPopup__Sync(__this,method_00);
                      (__this->fields)._syncTimeLeft = 1.0;
                    }
                    UI_MapPopup__UpdateIcons(__this,method_00);
                    return;
                  }
                  goto LAB_040bfc1a;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_040bfc1a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapPopup$$UpdateIcons
// il2cpp: void UI_MapPopup__UpdateIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bfc30

void UI_MapPopup__UpdateIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  int32_t length;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_Transform__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UnityEngine_Transform_array *pUVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar8;
  undefined1 auVar9 [16];
  bool_conflict bVar10;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  char cVar13;
  bool bVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar16;
  undefined8 in_stack_ffffffffffffff18;
  UI_MapPopup_o *pUVar17;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar18;
  undefined1 local_b8 [32];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [12];
  float fStack_7c;
  undefined1 local_78 [16];
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  uVar2 = in_XMM1_Db;
  if (DAT_057046a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Transform__GetE);
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057046a2 = '\x01';
    uVar2 = in_XMM1_Db;
  }
  local_b8._0_8_ =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  local_b8._8_8_ = (Il2CppType *)0x0;
  local_b8._16_8_ = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields)._iconsToRemove;
  if (pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
    if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              (pSVar6,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng),
       __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                (&local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      pUVar17 = __this;
      pSVar18 = local_48.fields._dictionary;
      while (__this_00.fields._8_8_ = pUVar17,
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff18,
            __this_00.fields._currentKey = (Il2CppObject *)pSVar18,
            bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                               (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff28),
            (char)bVar10 != '\0') {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_05 = (UnityEngine_Transform_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar6,local_48.fields._currentKey,MethodInfo_Transform_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)local_48.fields._currentKey,
                            (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          bVar14 = false;
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          if ((UnityEngine_Transform_o *)local_48.fields._currentKey ==
              (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar11 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)local_48.fields._currentKey,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             (pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          cVar13 = '\0';
          if ((char)bVar10 != '\0') {
            if (pUVar11 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            cVar13 = *(char *)&pUVar11[4].monitor;
          }
          bVar14 = cVar13 != '\0';
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
          __this = pUVar17;
        }
        if (iVar3 == 0) {
          il2cpp_init_class();
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)local_48.fields._currentKey,
                            (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        if (bVar14 || (char)bVar10 != '\0') {
          pSVar5 = (__this->fields)._iconsToRemove;
          if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar5->fields)._items;
          if (pUVar7 == (UnityEngine_Transform_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar4 = (pSVar5->fields)._size;
          if (uVar4 < (uint)pUVar7->max_length) {
            (pSVar5->fields)._size = uVar4 + 1;
            pUVar7->m_Items[(int)uVar4] = (UnityEngine_Transform_o *)local_48.fields._currentKey;
            il2cpp_runtime_glue(pUVar7->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       local_48.fields._currentKey,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (__this_05 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar11 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__Destroy(pUVar11,(MethodInfo *)0x0);
        }
        else {
          if ((UnityEngine_Transform_o *)local_48.fields._currentKey ==
              (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar16 = UnityEngine_Transform__get_position
                             ((UnityEngine_Transform_o *)local_48.fields._currentKey,
                              (MethodInfo *)0x0);
          fStack_90 = (float)extraout_XMM0_Dc;
          local_98 = (undefined1  [8])UVar16.fields._0_8_;
          fStack_8c = (float)extraout_XMM0_Dd;
          local_58 = ZEXT416((uint)(__this->fields)._syncPosition.fields.x);
          UVar16 = UnityEngine_Transform__get_position
                             ((UnityEngine_Transform_o *)local_48.fields._currentKey,
                              (MethodInfo *)0x0);
          local_68 = UVar16.fields.z;
          local_78 = ZEXT416((uint)(__this->fields)._syncPosition.fields.z);
          uStack_64 = uVar2;
          uStack_60 = in_XMM1_Dc;
          uStack_5c = in_XMM1_Dd;
          if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
            il2cpp_init_class();
          }
          _local_88 = ZEXT416((uint)((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) /
                                    (__this->fields)._height));
          if (DAT_056fde1c == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fde1c = '\x01';
            iVar3 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_init_class();
          }
          local_98._0_4_ = (float)local_88._0_4_ * ((float)local_98._0_4_ - (float)local_58._0_4_);
          local_98._4_4_ = (float)local_88._0_4_ * (local_68 - (float)local_78._0_4_);
          local_88._0_4_ = (float)local_88._0_4_ * 0.0;
          fStack_90 = (float)local_88._8_4_ * (fStack_90 - (float)local_58._4_4_);
          fStack_8c = fStack_7c * (fStack_8c - (float)local_78._4_4_);
          fVar15 = (float)local_88._0_4_ * (float)local_88._0_4_ +
                   (float)local_98._4_4_ * (float)local_98._4_4_ +
                   (float)local_98._0_4_ * (float)local_98._0_4_;
          if (fVar15 < 0.0) {
            fVar15 = sqrtf(fVar15);
          }
          else {
            fVar15 = SQRT(fVar15);
          }
          uVar2 = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          if (fVar15 <= (float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) * 0.5) {
            if (__this_05 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
            }
            auVar9 = _local_98;
            UVar16.fields.z = (float)local_88._0_4_;
            UVar16.fields.x = (float)local_98._0_4_;
            UVar16.fields.y = (float)local_98._4_4_;
            _local_98 = auVar9;
            UnityEngine_Transform__set_localPosition(__this_05,UVar16,(MethodInfo *)0x0);
            if (DAT_056fde1e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
            }
            uVar2 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->w;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            UnityEngine_Transform__set_rotation
                      (__this_05,
                       (UnityEngine_Quaternion_o)
                       **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
          }
          else {
            if (__this_05 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
            }
          }
        }
      }
      __this_01.fields._8_8_ = pUVar17;
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff18;
      __this_01.fields._currentKey = (Il2CppObject *)pSVar18;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffff28);
      pSVar5 = (__this->fields)._iconsToRemove;
      if (pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                   (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T__Enumerator_UnityEngine_Transform__GetE);
        while( true ) {
          __this_02.fields._8_8_ = pUVar17;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18
          ;
          __this_02.fields._current = (Il2CppObject *)pSVar18;
          bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (__this_02,(MethodInfo_3185E20 *)local_b8);
          if ((char)bVar10 == '\0') {
            __this_03.fields._8_8_ = pUVar17;
            __this_03.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
            __this_03.fields._current = (Il2CppObject *)pSVar18;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_03,(MethodInfo_3185E10 *)local_b8);
            return;
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._icons;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar6,(Il2CppObject *)local_b8._16_8_,MethodInfo_Boolean_Remove);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapPopup$$Sync
// il2cpp: void UI_MapPopup__Sync (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf700

void UI_MapPopup__Sync(UI_MapPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o **ppUVar1;
  float height;
  int32_t width;
  Cameras_MinimapCamera_o *pCVar2;
  long *plVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  bool_conflict bVar4;
  UnityEngine_Texture2D_o *pUVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o position;
  
  if (DAT_057046a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057046a3 = '\x01';
  }
  UI_MapPopup__SyncIcons(__this,method);
  pCVar2 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
  if (pCVar2 != (Cameras_MinimapCamera_o *)0x0) {
    bVar4 = Cameras_MinimapCamera__Ready(pCVar2,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pUVar5 = (__this->fields)._texture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields)._texture;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar5 = *ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
      il2cpp_init_class();
    }
    width = *(int32_t *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
    pUVar5 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar5,width,width,3,0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar5;
    il2cpp_runtime_glue(ppUVar1,pUVar5);
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
          TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      if ((plVar3[5] != 0) &&
         (__this_00 = *(UnityEngine_Transform_o **)(plVar3[5] + 0x10),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UVar6 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        position.fields.z = UVar6.fields.z;
        pCVar2 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
        if (pCVar2 != (Cameras_MinimapCamera_o *)0x0) {
          position.fields.x = UVar6.fields.x;
          height = (__this->fields)._height;
          position.fields.y = height;
          Cameras_MinimapCamera__TakeSnapshot
                    (pCVar2,position,height,(__this->fields)._texture,0,1,(MethodInfo *)0x0);
          __this_01 = (__this->fields)._background;
          if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
            UnityEngine_UI_RawImage__set_texture
                      (__this_01,(UnityEngine_Texture_o *)(__this->fields)._texture,
                       (MethodInfo *)0x0);
            (__this->fields)._syncPosition.fields.x = (float)(int)UVar6.fields._0_8_;
            (__this->fields)._syncPosition.fields.y =
                 (float)(int)((ulong)UVar6.fields._0_8_ >> 0x20);
            (__this->fields)._syncPosition.fields.z = position.fields.z;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapPopup$$SyncIcons
// il2cpp: void UI_MapPopup__SyncIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40c05c0

void UI_MapPopup__SyncIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  UnityEngine_Component_o *__this_05;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *p;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_057046a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_Instantiate_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057046a4 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_MinimapHandler[2].parameters + 4) == 0) {
    method_00 = TypeInfo_MinimapHandler;
    il2cpp_init_class();
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                UI_MinimapHandler__GetIcons(method_00);
  }
  else {
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                UI_MinimapHandler__GetIcons(TypeInfo_MinimapHandler);
  }
  if (__this_03 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                          (__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
    if (__this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              (&local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    pSVar5 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
             local_48.fields._dictionary;
    while (__this_01.fields._8_8_ = __this,
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88,
          __this_01.fields._currentKey = (Il2CppObject *)pSVar5,
          bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
          (char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)local_48.fields._currentKey,
                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar1,local_48.fields._currentKey,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar2 == '\0') {
          __this_05 = (UnityEngine_Component_o *)
                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                (__this_03,local_48.fields._currentKey,MethodInfo_Transform_get_Item);
          if (__this_05 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar3 = UnityEngine_Component__get_gameObject(__this_05,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar3 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>((Il2CppObject *)pUVar3,MethodInfo_GameObject_Instantiate_GameObject);
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._background;
          if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          p = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Transform__SetParent(pUVar4,p,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Transform__set_localPosition
                    (pUVar4,(UnityEngine_Vector3_o)
                            **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                    );
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Transform__set_localScale
                    (pUVar4,(UnityEngine_Vector3_o)
                            *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                     (MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (DAT_056fde1e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Quaternion);
            DAT_056fde1e = '\x01';
          }
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Transform__set_rotation
                    (pUVar4,(UnityEngine_Quaternion_o)
                            **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                     (MethodInfo *)0x0);
          UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._icons;
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar1,local_48.fields._currentKey,(Il2CppObject *)pUVar4,MethodInfo_Void_Add);
        }
      }
    }
    __this_02.fields._8_8_ = __this;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
    __this_02.fields._currentKey = (Il2CppObject *)pSVar5;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
  }
  return;
}


// UI.MapPopup$$SetupBottomButtons
// il2cpp: void UI_MapPopup__SetupBottomButtons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40bf4e0

void UI_MapPopup__SetupBottomButtons(UI_MapPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (DAT_057046a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__26_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__26_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__26_2);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Zoom Out");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Zoom In");
    DAT_057046a5 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,"Zoom In",0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,"Zoom Out",0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapPopup__OnBottomBarButtonClick (UI_MapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40c0c90

void UI_MapPopup__OnBottomBarButtonClick
               (UI_MapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  float fVar3;
  
  if (DAT_057046a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Plus");
    il2cpp_init_method_metadata(&"Minus");
    DAT_057046a6 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    method_00 = "Plus";
    bVar2 = System_String__op_Equality(name,(System_String_o *)"Plus",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      method_00 = "Minus";
      bVar2 = System_String__op_Equality(name,(System_String_o *)"Minus",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      fVar3 = (__this->fields)._height + 500.0;
    }
    else {
      fVar3 = (__this->fields)._height + -500.0;
      if (fVar3 <= 100.0) {
        fVar3 = 100.0;
      }
    }
    (__this->fields)._height = fVar3;
    UI_MapPopup__Sync(__this,method_00);
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
  if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
    UI_InGameMenu__SetMapMenu(__this_00,0,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// UI.MapPopup$$.ctor
// il2cpp: void UI_MapPopup___ctor (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40c0e00

void UI_MapPopup___ctor(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_Transform__o *__this_01;
  
  if (DAT_057046a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_T);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Transform__Transform);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&TypeInfo_List_Transform);
    il2cpp_init_method_metadata(&"MapPopup");
    DAT_057046a7 = '\x01';
  }
  (__this->fields).LocaleCategory = "MapPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  (__this->fields)._height = 2000.0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_Transform__Transform);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_T);
  (__this->fields)._icons =
       (System_Collections_Generic_Dictionary_Transform__Transform__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._icons,__this_00);
  (__this->fields)._syncTimeLeft = 1.0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._syncPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._syncPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._syncPosition.fields.z = fVar1;
  __this_01 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._iconsToRemove = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._iconsToRemove);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$<SetupBottomButtons>b__26_0
// il2cpp: void UI_MapPopup___SetupBottomButtons_b__26_0 (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40c0f50

void UI_MapPopup__<SetupBottomButtons>b__26_0(UI_MapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057046a8 == '\0') {
    il2cpp_init_method_metadata(&"Plus");
    DAT_057046a8 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapPopup__OnBottomBarButtonClick(__this,"Plus",in_RDX);
  return;
}


// UI.MapPopup$$<SetupBottomButtons>b__26_1
// il2cpp: void UI_MapPopup___SetupBottomButtons_b__26_1 (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40c0f90

void UI_MapPopup__<SetupBottomButtons>b__26_1(UI_MapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057046a9 == '\0') {
    il2cpp_init_method_metadata(&"Minus");
    DAT_057046a9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapPopup__OnBottomBarButtonClick(__this,"Minus",in_RDX);
  return;
}


// UI.MapPopup$$<SetupBottomButtons>b__26_2
// il2cpp: void UI_MapPopup___SetupBottomButtons_b__26_2 (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x40c0fd0

void UI_MapPopup__<SetupBottomButtons>b__26_2(UI_MapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057046aa == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057046aa = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapPopup__OnBottomBarButtonClick(__this,"Back",in_RDX);
  return;
}


