// Type: UI.IconPickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IconPickPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/IconPickPopup.cs
// --------------------------------

// UI.IconPickPopup.<>c__DisplayClass24_0$$.ctor
// il2cpp: void UI_IconPickPopup___c__DisplayClass24_0___ctor (UI_IconPickPopup___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x434e310

void UI_IconPickPopup___c__DisplayClass24_0___ctor
               (UI_IconPickPopup___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup.<>c__DisplayClass24_0$$<CreateRow>b__0
// il2cpp: void UI_IconPickPopup___c__DisplayClass24_0___CreateRow_b__0 (UI_IconPickPopup___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x434e520

void UI_IconPickPopup___c__DisplayClass24_0___CreateRow_b__0
               (UI_IconPickPopup___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_IconPickPopup_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_IconPickPopup_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._59_OnSelectObject.methodPtr;
    (*vtableDispatch)
              (pUVar1,(__this->fields).itemName,(ulong)(uint)(__this->fields).index,
               (pUVar1->klass->vtable)._59_OnSelectObject.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae11f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Import");
    g_data_057ae11f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocaleCommon("Import",(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup$$get_Title
// il2cpp: System_String_o* UI_IconPickPopup__get_Title (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d390

System_String_o * UI_IconPickPopup__get_Title(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.IconPickPopup$$get_Width
// il2cpp: float UI_IconPickPopup__get_Width (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d3b0

float UI_IconPickPopup__get_Width(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.IconPickPopup$$get_Height
// il2cpp: float UI_IconPickPopup__get_Height (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d3c0

float UI_IconPickPopup__get_Height(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.IconPickPopup$$get_ScrollBar
// il2cpp: bool UI_IconPickPopup__get_ScrollBar (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d3d0

bool_conflict UI_IconPickPopup__get_ScrollBar(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.IconPickPopup$$get_VerticalSpacing
// il2cpp: float UI_IconPickPopup__get_VerticalSpacing (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d3e0

float UI_IconPickPopup__get_VerticalSpacing(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.IconPickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_IconPickPopup__get_HorizontalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d3f0

int32_t UI_IconPickPopup__get_HorizontalPadding(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.IconPickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_IconPickPopup__get_VerticalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434d400

int32_t UI_IconPickPopup__get_VerticalPadding(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.IconPickPopup$$Setup
// il2cpp: void UI_IconPickPopup__Setup (UI_IconPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434d410

void UI_IconPickPopup__Setup(UI_IconPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae119 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae119 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup$$Show
// il2cpp: void UI_IconPickPopup__Show (UI_IconPickPopup_o* __this, Settings_BaseSetting_o* setting, UnityEngine_UI_Text_o* label, System_String_array* options, System_String_array* icons, System_String_array* tooltips, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x434d540

void UI_IconPickPopup__Show
               (UI_IconPickPopup_o *__this,Settings_BaseSetting_o *setting,UnityEngine_UI_Text_o *label,
               System_String_array *options,System_String_array *icons,System_String_array *tooltips,
               UnityEngine_Events_UnityAction_o *onSelect,UI_TooltipPopup_o *tooltipPopup,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_TSource__o *pSVar6;
  System_String_array *__this_04;
  System_Collections_Generic_List_List_T___o *__this_05;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  undefined8 uVar9;
  System_Exception_o *__this_06;
  System_String_o *message;
  long *plVar10;
  int iVar11;
  MethodInfo *method_00;
  undefined4 *puVar12;
  System_String_array *method_01;
  undefined1 auVar13 [12];
  UI_IconPickPopup_o *__this_07;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_01 = tooltips;
  if (g_data_057ae11a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupItems_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae11a = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  (__this->fields)._setting = setting;
  __this_07 = __this;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
  (__this->fields)._onSelect = onSelect;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onSelect,onSelect);
  (__this->fields)._options = options;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._options,options);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  pSVar3 = (__this->fields)._groups;
  __this_04 = tooltips;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0434da1b;
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
  while (__this_00.fields._8_8_ = icons,
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)__this_07,
        __this_00.fields._current = (Il2CppObject *)pSVar14,
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)local_48.fields._current,(MethodInfo *)0x0);
  }
  __this_01.fields._8_8_ = icons;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this_07;
  __this_01.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  do {
    pSVar3 = (__this_07->fields)._groups;
    __this_04 = tooltips;
    if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_0434da1b:
      il2cpp_runtime_helper_022b2c90();
label_0434da20:
      uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      __this_06 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
      puVar12 = (undefined4 *)&"Options and icons not equal length";
      tooltips = __this_04;
    }
    else {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar11 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar11) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar11,(MethodInfo *)0x0);
      }
      if ((options == (System_String_array *)0x0) || (icons == (System_String_array *)0x0)) goto label_0434da1b;
      iVar11 = (int)options->max_length;
      if (iVar11 != (int)icons->max_length) goto label_0434da20;
      if ((tooltips == (System_String_array *)0x0) || (iVar11 == (int)tooltips->max_length)) {
        pSVar6 = System_Linq_Enumerable__ToList_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)options,MethodInfo_List_1_System_String_ToList_String);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        options = (System_String_array *)
                  Utility_Util__GroupItems_object_
                            ((System_Collections_Generic_List_T__o *)pSVar6,7,MethodInfo_List_1_List_1_System_String_GroupItems_String);
        pSVar6 = System_Linq_Enumerable__ToList_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)icons,MethodInfo_List_1_System_String_ToList_String);
        method_00 = (MethodInfo *)0x7;
        __this_04 = (System_String_array *)
                    Utility_Util__GroupItems_object_
                              ((System_Collections_Generic_List_T__o *)pSVar6,7,MethodInfo_List_1_List_1_System_String_GroupItems_String);
        if (tooltips == (System_String_array *)0x0) {
          __this_05 = (System_Collections_Generic_List_List_T___o *)0x0;
          (__this_07->fields)._currentIndex = 0;
        }
        else {
          pSVar6 = System_Linq_Enumerable__ToList_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)tooltips,MethodInfo_List_1_System_String_ToList_String);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x7;
          __this_05 = Utility_Util__GroupItems_object_
                                ((System_Collections_Generic_List_T__o *)pSVar6,7,MethodInfo_List_1_List_1_System_String_GroupItems_String);
          (__this_07->fields)._currentIndex = 0;
        }
        if (options != (System_String_array *)0x0) {
          iVar11 = (int)options->max_length;
          if (__this_05 != (System_Collections_Generic_List_List_T___o *)0x0) {
            if (0 < iVar11) {
              iVar11 = 0;
              icons = options;
              do {
                iVar2 = (__this_05->fields)._size;
                method_00 = (MethodInfo *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)options,iVar11,
                                       MethodInfo_List_1_System_String_get_Item);
                if (iVar11 < iVar2) {
                  if (__this_04 == (System_String_array *)0x0) goto label_0434da1b;
                  pSVar7 = (System_Collections_Generic_List_string__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_04,iVar11,
                                      MethodInfo_List_1_System_String_get_Item);
                  pSVar8 = (System_Collections_Generic_List_string__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_05,iVar11,
                                      MethodInfo_List_1_System_String_get_Item);
                  UI_IconPickPopup__CreateRow
                            (__this_07,(System_Collections_Generic_List_string__o *)method_00,pSVar7,pSVar8,
                             tooltipPopup,(MethodInfo *)method_01);
                }
                else {
                  if (__this_04 == (System_String_array *)0x0) goto label_0434da1b;
                  pSVar7 = (System_Collections_Generic_List_string__o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_04,iVar11,
                                      MethodInfo_List_1_System_String_get_Item);
                  pSVar8 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_System_String);
                  options = icons;
                  UI_IconPickPopup__CreateRow
                            (__this_07,(System_Collections_Generic_List_string__o *)method_00,pSVar7,pSVar8,
                             tooltipPopup,(MethodInfo *)method_01);
                  icons = options;
                }
                iVar11 = iVar11 + 1;
                if ((int)options->max_length <= iVar11) break;
              } while( true );
            }
label_0434da03:
            UI_BasePopup__Show((UI_BasePopup_o *)__this_07,method_00);
            return;
          }
          if (iVar11 < 1) goto label_0434da03;
          iVar11 = 0;
          while (icons = options,
                method_00 = (MethodInfo *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)options,iVar11,
                                       MethodInfo_List_1_System_String_get_Item), __this_04 != (System_String_array *)0x0) {
            pSVar7 = (System_Collections_Generic_List_string__o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_04,iVar11,MethodInfo_List_1_System_String_get_Item);
            pSVar8 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_System_String);
            UI_IconPickPopup__CreateRow
                      (__this_07,(System_Collections_Generic_List_string__o *)method_00,pSVar7,pSVar8,
                       tooltipPopup,(MethodInfo *)method_01);
            iVar11 = iVar11 + 1;
            options = icons;
            if ((int)icons->max_length <= iVar11) goto label_0434da03;
          }
        }
        goto label_0434da1b;
      }
      uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      __this_06 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
      puVar12 = &"Options and tooltips not equal length";
    }
    message = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar12);
    System_Exception___ctor_3cf6120(__this_06,message,(MethodInfo *)0x0);
    uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Show);
    auVar13 = il2cpp_runtime_helper_022b2b10(__this_06,uVar9);
    if (auVar13._8_4_ != 1) goto label_0434dace;
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar4 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._8_8_ = icons;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)__this_07;
    __this_02.fields._current = (Il2CppObject *)pSVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar4 == 0);
  il2cpp_runtime_helper_022fefe0(lVar4);
label_0434dace:
  __this_03.fields._8_8_ = icons;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)__this_07;
  __this_03.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar13._0_8_);
}


// UI.IconPickPopup$$OnBottomBarButtonClick
// il2cpp: void UI_IconPickPopup__OnBottomBarButtonClick (UI_IconPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434e2f0

void UI_IconPickPopup__OnBottomBarButtonClick
               (UI_IconPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.IconPickPopup$$CreateRow
// il2cpp: void UI_IconPickPopup__CreateRow (UI_IconPickPopup_o* __this, System_Collections_Generic_List_string__o* items, System_Collections_Generic_List_string__o* icons, System_Collections_Generic_List_string__o* tooltips, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x434db10

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
  Il2CppClass *__this_01;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *uo;
  Il2CppClass *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar10;
  System_String_o *name;
  UnityEngine_UI_RawImage_o *__this_02;
  undefined8 *puVar11;
  int index;
  float spacing;
  UnityEngine_Color_o UVar12;
  
  if (g_data_057ae11b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoverTooltip_GetOrAddComponent_HoverTooltip);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass24_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    g_data_057ae11b = '\x01';
  }
  pIVar8 = (Il2CppClass *)(__this->fields).SinglePanel;
  spacing = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                             (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_01 = (Il2CppClass *)
              UI_ElementFactory__CreateHorizontalGroup
                        ((UnityEngine_Transform_o *)pIVar8,spacing,3,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._groups;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    pIVar8 = __this_01;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)__this_01;
        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      if (items != (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (items->fields)._size) {
          index = 0;
          do {
            pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass24_0);
            System_Object___ctor(pIVar6,(MethodInfo *)0x0);
            pIVar8 = __this_01;
            if (pIVar6 == (Il2CppObject *)0x0) goto label_0434e2aa;
            pIVar6[2].klass = (Il2CppClass *)__this;
            il2cpp_runtime_helper_022b4080(pIVar6 + 2);
            if (__this_01 == (Il2CppClass *)0x0) goto label_0434e2aa;
            pUVar7 = UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
            uo = (UnityEngine_Object_o *)
                 UI_ElementFactory__InstantiateAndBind(pUVar7,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
            pIVar8 = (Il2CppClass *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)items,index,MethodInfo_String_get_Item);
            pIVar6[1].klass = pIVar8;
            il2cpp_runtime_helper_022b4080(pIVar6 + 1,pIVar8);
            *(int32_t *)&pIVar6[1].monitor = (__this->fields)._currentIndex;
            pIVar8 = __this_01;
            if ((uo == (UnityEngine_Object_o *)0x0) ||
               (pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)uo,MethodInfo_Button_GetComponent_Button),
               pIVar9 == (Il2CppObject *)0x0)) goto label_0434e2aa;
            pIVar8 = pIVar9[0x10].klass;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pIVar8 == (Il2CppClass *)0x0) goto label_0434e2aa;
            UnityEngine_Events_UnityEvent__AddListener
                      ((UnityEngine_Events_UnityEvent_o *)pIVar8,call,(MethodInfo *)0x0);
            piVar1 = &(__this->fields)._currentIndex;
            *piVar1 = *piVar1 + 1;
            if (icons == (System_Collections_Generic_List_string__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0434e2af;
            }
            pSVar10 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)icons,index,MethodInfo_String_get_Item);
            bVar5 = System_String__op_Inequality
                              (pSVar10,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              name = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)icons,index,MethodInfo_String_get_Item);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar8 = (Il2CppClass *)
                       ApplicationManagers_ResourceManager__LoadAsset(pSVar10,name,1,(MethodInfo *)0x0);
              if ((pIVar8 != (Il2CppClass *)0x0) && ((pIVar8->_1).image != TypeInfo_Texture2D)) {
                il2cpp_runtime_helper_022b2fd0(pIVar8);
                goto label_0434e2af;
              }
              pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0)
              ;
              if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0434e2af;
              }
              pUVar7 = UnityEngine_Transform__Find(pUVar7,"Icon",(MethodInfo *)0x0);
              if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0434e2af;
              }
              __this_02 = (UnityEngine_UI_RawImage_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
              if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0434e2af;
              }
              UnityEngine_UI_RawImage__set_texture
                        (__this_02,(UnityEngine_Texture_o *)pIVar8,(MethodInfo *)0x0);
              if (tooltips == (System_Collections_Generic_List_string__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0434e2af;
              }
              if (index < (tooltips->fields)._size) {
                pSVar10 = (System_String_o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)tooltips,index,MethodInfo_String_get_Item)
                ;
                bVar5 = System_String__op_Inequality
                                  (pSVar10,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                   (MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  pIVar8 = (Il2CppClass *)
                           Unity_VisualScripting_ComponentHolderProtocol__GetOrAddComponent_object_
                                     (uo,MethodInfo_HoverTooltip_GetOrAddComponent_HoverTooltip);
                  pIVar9 = System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)tooltips,index,MethodInfo_String_get_Item
                                     );
                  if (pIVar8 == (Il2CppClass *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0434e2af;
                  }
                  (pIVar8->_1).byval_arg.data = pIVar9;
                  il2cpp_runtime_helper_022b4080(&(pIVar8->_1).byval_arg,pIVar9);
                  (pIVar8->_1).this_arg.data = tooltipPopup;
                  il2cpp_runtime_helper_022b4080(&(pIVar8->_1).this_arg);
                }
              }
            }
            pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if (((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0),
                pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
               (pIVar9 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text),
               pIVar9 == (Il2CppObject *)0x0)) goto label_0434e2aa;
            (*pIVar9->klass->vtable[0x4b].methodPtr)
                      (pIVar9,pIVar6[1].klass,pIVar9->klass->vtable[0x4b].method);
            pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
               (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_0434e2aa;
            pIVar6 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UVar12 = UI_UIManager__GetThemeColor
                               ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
            pIVar8 = (Il2CppClass *)0x0;
            if (pIVar6 == (Il2CppObject *)0x0) goto label_0434e2aa;
            (*pIVar6->klass->vtable[0x17].methodPtr)(UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar6);
            index = index + 1;
          } while (index < (items->fields)._size);
        }
        return;
      }
    }
  }
label_0434e2aa:
  il2cpp_runtime_helper_022b2c90();
label_0434e2af:
  puVar11 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar11 = (pIVar8->_1).image;
  __cxa_throw(puVar11,&PTR_PTR_05215060,0);
}


// UI.IconPickPopup$$OnSelectObject
// il2cpp: void UI_IconPickPopup__OnSelectObject (UI_IconPickPopup_o* __this, System_String_o* name, int32_t index, const MethodInfo* method);
// 0x434e320

void UI_IconPickPopup__OnSelectObject
               (UI_IconPickPopup_o *__this,System_String_o *name,int32_t index,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_T__c *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *__this_01;
  
  if (g_data_057ae11c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae11c = '\x01';
  }
  __this_01 = (__this->fields)._label;
  if (__this_01 == (UnityEngine_UI_Text_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae11d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ae11d = '\x01';
    }
    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
    *(MethodInfo **)&(__this_01->fields).m_IncludeForMasking = method_00;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).m_IncludeForMasking);
    UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_01,method_00);
    return;
  }
  (*(__this_01->klass->vtable)._75_set_text.methodPtr)
            (__this_01,name,(__this_01->klass->vtable)._75_set_text.method);
  __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
    pSVar3 = __this_00->klass;
    bVar1 = (pSVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting_object___set_Value(__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
      pUVar4 = (__this->fields)._onSelect;
      goto joined_r0x0434e40c;
    }
    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,index,MethodInfo_Void_set_Value);
    }
  }
  pUVar4 = (__this->fields)._onSelect;
joined_r0x0434e40c:
  if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.IconPickPopup$$.ctor
// il2cpp: void UI_IconPickPopup___ctor (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434e460

void UI_IconPickPopup___ctor(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057ae11d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae11d = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._groups = (System_Collections_Generic_List_GameObject__o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._groups);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.IconPickPopup$$<Setup>b__21_0
// il2cpp: void UI_IconPickPopup___Setup_b__21_0 (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x434e4e0

void UI_IconPickPopup___Setup_b__21_0(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae11e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae11e = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


