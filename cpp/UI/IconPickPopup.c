// Type: UI.IconPickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/IconPickPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/IconPickPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.IconPickPopup.<>c__DisplayClass24_0$$.ctor
// il2cpp: void UI_IconPickPopup___c__DisplayClass24_0___ctor (UI_IconPickPopup___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x4024b60

void UI_IconPickPopup_<>c__DisplayClass24_0___ctor
               (UI_IconPickPopup___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup.<>c__DisplayClass24_0$$<CreateRow>b__0
// il2cpp: void UI_IconPickPopup___c__DisplayClass24_0___CreateRow_b__0 (UI_IconPickPopup___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x4024d70

void UI_IconPickPopup_<>c__DisplayClass24_0__<CreateRow>b__0
               (UI_IconPickPopup___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_IconPickPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_IconPickPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._59_OnSelectObject.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).itemName,(ulong)(uint)(__this->fields).index,
               (pUVar1->klass->vtable)._59_OnSelectObject.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickPopup$$get_Title
// il2cpp: System_String_o* UI_IconPickPopup__get_Title (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023be0

System_String_o * UI_IconPickPopup__get_Title(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.IconPickPopup$$get_Width
// il2cpp: float UI_IconPickPopup__get_Width (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023c00

float UI_IconPickPopup__get_Width(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.IconPickPopup$$get_Height
// il2cpp: float UI_IconPickPopup__get_Height (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023c10

float UI_IconPickPopup__get_Height(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.IconPickPopup$$get_ScrollBar
// il2cpp: bool UI_IconPickPopup__get_ScrollBar (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023c20

bool_conflict UI_IconPickPopup__get_ScrollBar(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.IconPickPopup$$get_VerticalSpacing
// il2cpp: float UI_IconPickPopup__get_VerticalSpacing (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023c30

float UI_IconPickPopup__get_VerticalSpacing(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.IconPickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_IconPickPopup__get_HorizontalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023c40

int32_t UI_IconPickPopup__get_HorizontalPadding(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.IconPickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_IconPickPopup__get_VerticalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4023c50

int32_t UI_IconPickPopup__get_VerticalPadding(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.IconPickPopup$$Setup
// il2cpp: void UI_IconPickPopup__Setup (UI_IconPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4023c60

void UI_IconPickPopup__Setup(UI_IconPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704303 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704303 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup$$Show
// il2cpp: void UI_IconPickPopup__Show (UI_IconPickPopup_o* __this, Settings_BaseSetting_o* setting, UnityEngine_UI_Text_o* label, System_String_array* options, System_String_array* icons, System_String_array* tooltips, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x4023d90

void UI_IconPickPopup__Show
               (UI_IconPickPopup_o *__this,Settings_BaseSetting_o *setting,
               UnityEngine_UI_Text_o *label,System_String_array *options,System_String_array *icons,
               System_String_array *tooltips,UnityEngine_Events_UnityAction_o *onSelect,
               UI_TooltipPopup_o *tooltipPopup,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar4;
  System_Collections_Generic_List_TSource__o *pSVar5;
  System_Collections_Generic_List_List_T___o *__this_02;
  System_Collections_Generic_List_List_T___o *__this_03;
  System_Collections_Generic_List_List_T___o *__this_04;
  System_Collections_Generic_List_string__o *pSVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *__this_05;
  System_String_o *message;
  int iVar9;
  MethodInfo *method_00;
  undefined *puVar10;
  System_String_array *method_01;
  UI_IconPickPopup_o *__this_06;
  System_Collections_Generic_List_List_T___o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_01 = tooltips;
  if (DAT_05704304 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_List_1_System_String___GroupItems_String);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704304 = '\x01';
  }
  (__this->fields)._setting = setting;
  __this_06 = __this;
  il2cpp_runtime_glue(&(__this->fields)._setting,setting);
  (__this->fields)._onSelect = onSelect;
  il2cpp_runtime_glue(&(__this->fields)._onSelect,onSelect);
  (__this->fields)._options = options;
  il2cpp_runtime_glue(&(__this->fields)._options,options);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  pSVar3 = (__this->fields)._groups;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    while (__this_00.fields._8_8_ = icons,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)__this_06,
          __this_00.fields._current = (Il2CppObject *)pSVar12,
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
          (char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy
                ((UnityEngine_Object_o *)local_48.fields._current,(MethodInfo *)0x0);
    }
    __this_01.fields._8_8_ = icons;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this_06;
    __this_01.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar3 = (__this_06->fields)._groups;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar9 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar9) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar9,(MethodInfo *)0x0);
      }
      if ((options != (System_String_array *)0x0) && (icons != (System_String_array *)0x0)) {
        iVar9 = (int)options->max_length;
        if (iVar9 == (int)icons->max_length) {
          if ((tooltips == (System_String_array *)0x0) || (iVar9 == (int)tooltips->max_length)) {
            pSVar5 = System_Linq_Enumerable__ToList<object>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                                MethodInfo_List_1_System_String__ToList_String);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_02 = Utility_Util__GroupItems<object>
                                  ((System_Collections_Generic_List_T__o *)pSVar5,7,MethodInfo_List_1_List_1_System_String___GroupItems_String);
            pSVar5 = System_Linq_Enumerable__ToList<object>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)icons,
                                MethodInfo_List_1_System_String__ToList_String);
            method_00 = (MethodInfo *)0x7;
            __this_03 = Utility_Util__GroupItems<object>
                                  ((System_Collections_Generic_List_T__o *)pSVar5,7,MethodInfo_List_1_List_1_System_String___GroupItems_String);
            if (tooltips == (System_String_array *)0x0) {
              __this_04 = (System_Collections_Generic_List_List_T___o *)0x0;
              (__this_06->fields)._currentIndex = 0;
            }
            else {
              pSVar5 = System_Linq_Enumerable__ToList<object>
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)tooltips,
                                  MethodInfo_List_1_System_String__ToList_String);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_init_class();
              }
              method_00 = (MethodInfo *)0x7;
              __this_04 = Utility_Util__GroupItems<object>
                                    ((System_Collections_Generic_List_T__o *)pSVar5,7,MethodInfo_List_1_List_1_System_String___GroupItems_String);
              (__this_06->fields)._currentIndex = 0;
            }
            if (__this_02 != (System_Collections_Generic_List_List_T___o *)0x0) {
              iVar9 = (__this_02->fields)._size;
              if (__this_04 == (System_Collections_Generic_List_List_T___o *)0x0) {
                if (0 < iVar9) {
                  iVar9 = 0;
                  do {
                    method_00 = (MethodInfo *)
                                System_Collections_Generic_List<object>__get_Item
                                          ((System_Collections_Generic_List_object__o *)__this_02,
                                           iVar9,MethodInfo_List_1_System_String__get_Item);
                    if (__this_03 == (System_Collections_Generic_List_List_T___o *)0x0)
                    goto LAB_0402426b;
                    pSVar6 = (System_Collections_Generic_List_string__o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_03,iVar9
                                        ,MethodInfo_List_1_System_String__get_Item);
                    pSVar7 = (System_Collections_Generic_List_string__o *)
                             il2cpp_runtime_glue(TypeInfo_List_string);
                    System_Collections_Generic_List<object>___ctor
                              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
                    UI_IconPickPopup__CreateRow
                              (__this_06,(System_Collections_Generic_List_string__o *)method_00,
                               pSVar6,pSVar7,tooltipPopup,(MethodInfo *)method_01);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < (__this_02->fields)._size);
                }
              }
              else if (0 < iVar9) {
                iVar9 = 0;
                pSVar11 = __this_02;
                do {
                  iVar2 = (__this_04->fields)._size;
                  method_00 = (MethodInfo *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)__this_02,
                                         iVar9,MethodInfo_List_1_System_String__get_Item);
                  if (iVar9 < iVar2) {
                    if (__this_03 == (System_Collections_Generic_List_List_T___o *)0x0)
                    goto LAB_0402426b;
                    pSVar6 = (System_Collections_Generic_List_string__o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_03,iVar9
                                        ,MethodInfo_List_1_System_String__get_Item);
                    pSVar7 = (System_Collections_Generic_List_string__o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_04,iVar9
                                        ,MethodInfo_List_1_System_String__get_Item);
                    UI_IconPickPopup__CreateRow
                              (__this_06,(System_Collections_Generic_List_string__o *)method_00,
                               pSVar6,pSVar7,tooltipPopup,(MethodInfo *)method_01);
                  }
                  else {
                    if (__this_03 == (System_Collections_Generic_List_List_T___o *)0x0)
                    goto LAB_0402426b;
                    pSVar6 = (System_Collections_Generic_List_string__o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_03,iVar9
                                        ,MethodInfo_List_1_System_String__get_Item);
                    pSVar7 = (System_Collections_Generic_List_string__o *)
                             il2cpp_runtime_glue(TypeInfo_List_string);
                    System_Collections_Generic_List<object>___ctor
                              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
                    __this_02 = pSVar11;
                    UI_IconPickPopup__CreateRow
                              (__this_06,(System_Collections_Generic_List_string__o *)method_00,
                               pSVar6,pSVar7,tooltipPopup,(MethodInfo *)method_01);
                    pSVar11 = __this_02;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (__this_02->fields)._size);
              }
              UI_BasePopup__Show((UI_BasePopup_o *)__this_06,method_00);
              return;
            }
            goto LAB_0402426b;
          }
          uVar8 = il2cpp_init_method_metadata(&TypeInfo_Exception);
          __this_05 = (System_Exception_o *)il2cpp_runtime_glue(uVar8);
          puVar10 = &"Options and tooltips not equal length";
        }
        else {
          uVar8 = il2cpp_init_method_metadata(&TypeInfo_Exception);
          __this_05 = (System_Exception_o *)il2cpp_runtime_glue(uVar8);
          puVar10 = &"Options and icons not equal length";
        }
        message = (System_String_o *)il2cpp_init_method_metadata(puVar10);
        System_Exception___ctor(__this_05,message,(MethodInfo *)0x0);
        uVar8 = il2cpp_init_method_metadata(&MethodInfo_Void_Show);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_05,uVar8);
      }
    }
  }
LAB_0402426b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickPopup$$OnBottomBarButtonClick
// il2cpp: void UI_IconPickPopup__OnBottomBarButtonClick (UI_IconPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4024b40

void UI_IconPickPopup__OnBottomBarButtonClick
               (UI_IconPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.IconPickPopup$$CreateRow
// il2cpp: void UI_IconPickPopup__CreateRow (UI_IconPickPopup_o* __this, System_Collections_Generic_List_string__o* items, System_Collections_Generic_List_string__o* icons, System_Collections_Generic_List_string__o* tooltips, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x4024360

void UI_IconPickPopup__CreateRow
               (UI_IconPickPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_Collections_Generic_List_string__o *icons,
               System_Collections_Generic_List_string__o *tooltips,UI_TooltipPopup_o *tooltipPopup,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *uo;
  Il2CppClass *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar10;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *__this_02;
  int index;
  float spacing;
  UnityEngine_Color_o UVar11;
  
  if (DAT_05704305 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HoverTooltip_GetOrAddComponent_HoverTooltip);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateRow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass24_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_05704305 = '\x01';
  }
  pUVar7 = (__this->fields).SinglePanel;
  spacing = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                             (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_01 = UI_ElementFactory__CreateHorizontalGroup(pUVar7,spacing,3,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._groups;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = __this_01;
        il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      if (items != (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (items->fields)._size) {
          index = 0;
          do {
            pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass24_0);
            System_Object___ctor(pIVar6,(MethodInfo *)0x0);
            if (pIVar6 == (Il2CppObject *)0x0) goto LAB_04024afa;
            pIVar6[2].klass = (Il2CppClass *)__this;
            il2cpp_runtime_glue(pIVar6 + 2);
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_04024afa;
            pUVar7 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            uo = (UnityEngine_Object_o *)
                 UI_ElementFactory__InstantiateAndBind(pUVar7,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
            pIVar8 = (Il2CppClass *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)items,index,
                                MethodInfo_String_get_Item);
            pIVar6[1].klass = pIVar8;
            il2cpp_runtime_glue(pIVar6 + 1,pIVar8);
            *(int32_t *)&pIVar6[1].monitor = (__this->fields)._currentIndex;
            if ((uo == (UnityEngine_Object_o *)0x0) ||
               (pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                   ((UnityEngine_GameObject_o *)uo,MethodInfo_Button_GetComponent_Button),
               pIVar9 == (Il2CppObject *)0x0)) goto LAB_04024afa;
            pIVar8 = pIVar9[0x10].klass;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pIVar8 == (Il2CppClass *)0x0) goto LAB_04024afa;
            UnityEngine_Events_UnityEvent__AddListener
                      ((UnityEngine_Events_UnityEvent_o *)pIVar8,call,(MethodInfo *)0x0);
            piVar1 = &(__this->fields)._currentIndex;
            *piVar1 = *piVar1 + 1;
            if (icons == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10 = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)icons,index,
                                 MethodInfo_String_get_Item);
            bVar5 = System_String__op_Inequality
                              (pSVar10,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pSVar10 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              name = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)icons,index,
                                MethodInfo_String_get_Item);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              value = (UnityEngine_Texture_o *)
                      ApplicationManagers_ResourceManager__LoadAsset
                                (pSVar10,name,1,(MethodInfo *)0x0);
              if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(value);
              }
              pUVar7 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
              if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar7 = UnityEngine_Transform__Find(pUVar7,"Icon",(MethodInfo *)0x0);
              if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              __this_02 = (UnityEngine_UI_RawImage_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
              if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_UI_RawImage__set_texture(__this_02,value,(MethodInfo *)0x0);
              if (tooltips == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (index < (tooltips->fields)._size) {
                pSVar10 = (System_String_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)tooltips,index,
                                     MethodInfo_String_get_Item);
                bVar5 = System_String__op_Inequality
                                  (pSVar10,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
                                   ,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  pIVar9 = Unity_VisualScripting_ComponentHolderProtocol__GetOrAddComponent<object>
                                     (uo,MethodInfo_HoverTooltip_GetOrAddComponent_HoverTooltip);
                  pIVar8 = (Il2CppClass *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)tooltips,index,
                                      MethodInfo_String_get_Item);
                  if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pIVar9[2].klass = pIVar8;
                  il2cpp_runtime_glue(pIVar9 + 2,pIVar8);
                  pIVar9[3].klass = (Il2CppClass *)tooltipPopup;
                  il2cpp_runtime_glue(pIVar9 + 3);
                }
              }
            }
            pUVar7 = UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if (((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0),
                pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
               (pIVar9 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text),
               pIVar9 == (Il2CppObject *)0x0)) goto LAB_04024afa;
            (*pIVar9->klass->vtable[0x4b].methodPtr)
                      (pIVar9,pIVar6[1].klass,pIVar9->klass->vtable[0x4b].method);
            pUVar7 = UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
               (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_04024afa;
            pIVar6 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UVar11 = UI_UIManager__GetThemeColor
                               ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",
                                (MethodInfo *)0x0);
            if (pIVar6 == (Il2CppObject *)0x0) goto LAB_04024afa;
            (*pIVar6->klass->vtable[0x17].methodPtr)(UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar6)
            ;
            index = index + 1;
          } while (index < (items->fields)._size);
        }
        return;
      }
    }
  }
LAB_04024afa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickPopup$$OnSelectObject
// il2cpp: void UI_IconPickPopup__OnSelectObject (UI_IconPickPopup_o* __this, System_String_o* name, int32_t index, const MethodInfo* method);
// 0x4024b70

void UI_IconPickPopup__OnSelectObject
               (UI_IconPickPopup_o *__this,System_String_o *name,int32_t index,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_T__c *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (DAT_05704306 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704306 = '\x01';
  }
  pUVar3 = (__this->fields)._label;
  if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
            (pUVar3,name,(pUVar3->klass->vtable)._75_set_text.method);
  __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
    pSVar4 = __this_00->klass;
    bVar1 = (pSVar4->_2).naturalAligment;
    bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting<object>__set_Value(__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
      pUVar5 = (__this->fields)._onSelect;
      goto joined_r0x04024c5c;
    }
    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)__this_00,index,MethodInfo_Void_set_Value);
    }
  }
  pUVar5 = (__this->fields)._onSelect;
joined_r0x04024c5c:
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.IconPickPopup$$.ctor
// il2cpp: void UI_IconPickPopup___ctor (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4024cb0

void UI_IconPickPopup___ctor(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_05704307 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05704307 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._groups = (System_Collections_Generic_List_GameObject__o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._groups);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.IconPickPopup$$<Setup>b__21_0
// il2cpp: void UI_IconPickPopup___Setup_b__21_0 (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x4024d30

void UI_IconPickPopup__<Setup>b__21_0(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_05704308 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704308 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


