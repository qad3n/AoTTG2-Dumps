// Type: UI.RoleSpritePickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/RoleSpritePickPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4351730

void UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__0
// il2cpp: bool UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x43518d0

bool_conflict
UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0
          (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o definition,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__op_Equality(definition.fields.RoleName,(__this->fields).value,(MethodInfo *)0x0);
  return bVar1;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__1
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x43518f0

void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  System_String_o *value;
  UI_RoleSpritePickPopup_o *__this_00;
  System_String_o *displayText;
  MethodInfo *in_RCX;
  
  pTVar1 = (__this->fields).tmp;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    value = (__this->fields).value;
    __this_00 = (__this->fields).__4__this;
    displayText = (System_String_o *)
                  (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                            (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
    if (__this_00 != (UI_RoleSpritePickPopup_o *)0x0) {
      UI_RoleSpritePickPopup__OnSelect(__this_00,value,displayText,in_RCX);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae13f == '\0') {
    il2cpp_runtime_helper_023445d0(&"SelectListPopup");
    g_data_057ae13f = '\x01';
  }
  return;
}


// UI.RoleSpritePickPopup$$get_Title
// il2cpp: System_String_o* UI_RoleSpritePickPopup__get_Title (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x43504a0

System_String_o * UI_RoleSpritePickPopup__get_Title(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.RoleSpritePickPopup$$get_Width
// il2cpp: float UI_RoleSpritePickPopup__get_Width (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x43504c0

float UI_RoleSpritePickPopup__get_Width(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 760.0;
}


// UI.RoleSpritePickPopup$$get_Height
// il2cpp: float UI_RoleSpritePickPopup__get_Height (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x43504d0

float UI_RoleSpritePickPopup__get_Height(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 620.0;
}


// UI.RoleSpritePickPopup$$get_ScrollBar
// il2cpp: bool UI_RoleSpritePickPopup__get_ScrollBar (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x43504e0

bool_conflict UI_RoleSpritePickPopup__get_ScrollBar(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.RoleSpritePickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_HorizontalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x43504f0

int32_t UI_RoleSpritePickPopup__get_HorizontalPadding(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_VerticalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4350500

int32_t UI_RoleSpritePickPopup__get_VerticalPadding(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalSpacing
// il2cpp: float UI_RoleSpritePickPopup__get_VerticalSpacing (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4350510

float UI_RoleSpritePickPopup__get_VerticalSpacing(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.RoleSpritePickPopup$$Setup
// il2cpp: void UI_RoleSpritePickPopup__Setup (UI_RoleSpritePickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4350520

void UI_RoleSpritePickPopup__Setup(UI_RoleSpritePickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae139 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae139 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
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


// UI.RoleSpritePickPopup$$Show
// il2cpp: void UI_RoleSpritePickPopup__Show (UI_RoleSpritePickPopup_o* __this, Settings_StringSetting_o* setting, TMPro_TextMeshProUGUI_o* label, UnityEngine_Events_UnityAction_o* onSelect, const MethodInfo* method);
// 0x4350640

void UI_RoleSpritePickPopup__Show
               (UI_RoleSpritePickPopup_o *__this,Settings_StringSetting_o *setting,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_Events_UnityAction_o *onSelect,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ae13a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae13a = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._onSelect = onSelect;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onSelect,onSelect);
  pSVar2 = (__this->fields)._items;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043507ce;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar9;
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)obj;
  method_00 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar2 = (__this->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        method_00 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      UI_RoleSpritePickPopup__BuildItems(__this,method_00);
      UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
      return;
    }
label_043507ce:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_04350818;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)obj;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_04350818:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.RoleSpritePickPopup$$BuildItems
// il2cpp: void UI_RoleSpritePickPopup__BuildItems (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4350850

void UI_RoleSpritePickPopup__BuildItems(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_String_c *pSVar8;
  char cVar9;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *pSVar10;
  VirtualInvokeData *pVVar11;
  System_String_o *displayName;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  MethodInfo *in_R8;
  undefined1 auVar16 [12];
  
  if (g_data_057ae13b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_RoleSpriteDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_RoleSpriteDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae13b = '\x01';
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x1a,120.0,20.0,themePanel,(MethodInfo *)0x0);
  UI_RoleSpritePickPopup__CreateItem
            (__this,__this_00,"None",(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),in_R8);
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                      ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
  if (pSVar10 == (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IEnumerable_RoleSpriteDefinition) {
          pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
          goto label_043509c1;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar14);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerable_RoleSpriteDefinition,0);
label_043509c1:
    themePanel = (System_String_o *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (themePanel != (System_String_o *)0x0) {
      lVar14 = 0;
      do {
        pSVar8 = themePanel->klass;
        uVar2._0_1_ = (pSVar8->_2).rank;
        uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar7 = (pSVar8->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
              pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar15);
              goto label_04350a43;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar15);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(themePanel,TypeInfo_IEnumerator,0);
label_04350a43:
        cVar9 = (*pVVar11->methodPtr)(themePanel,pVVar11->method);
        if (cVar9 == '\0') goto label_04350b1f;
        pSVar8 = themePanel->klass;
        uVar3._0_1_ = (pSVar8->_2).rank;
        uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar8->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator_RoleSpriteDefinition) {
              pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar15);
              goto label_04350ab3;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar15);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(themePanel,TypeInfo_IEnumerator_RoleSpriteDefinition,0);
label_04350ab3:
        displayName = (System_String_o *)(*pVVar11->methodPtr)(themePanel,pVVar11->method);
        UI_RoleSpritePickPopup__CreateItem(__this,__this_00,displayName,displayName,in_R8);
      } while( true );
    }
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uVar13 = auVar16._0_8_;
  if (auVar16._8_4_ != 1) {
    lVar14 = 0;
    if (themePanel == (System_String_o *)0x0) goto label_04350c06;
    goto label_04350ba6;
  }
  plVar12 = (long *)__cxa_begin_catch();
  lVar14 = *plVar12;
  __cxa_end_catch();
label_04350b1f:
  if (themePanel != (System_String_o *)0x0) {
    pSVar8 = themePanel->klass;
    uVar4._0_1_ = (pSVar8->_2).rank;
    uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar8->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IDisposable) {
          pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar15);
          goto label_04350b7d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(themePanel,TypeInfo_IDisposable,0);
label_04350b7d:
    (*pVVar11->methodPtr)(themePanel,pVVar11->method);
  }
  if (lVar14 == 0) {
    return;
  }
  do {
    uVar13 = il2cpp_runtime_helper_022fefe0();
    if (themePanel != (System_String_o *)0x0) {
label_04350ba6:
      pSVar8 = themePanel->klass;
      uVar5._0_1_ = (pSVar8->_2).rank;
      uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar7 = (pSVar8->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IDisposable) {
            pVVar11 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar15);
            goto label_04350bfd;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar15);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(themePanel,TypeInfo_IDisposable,0);
label_04350bfd:
      (*pVVar11->methodPtr)(themePanel,pVVar11->method);
    }
label_04350c06:
    if (lVar14 == 0) {
      _Unwind_Resume(uVar13);
    }
    il2cpp_runtime_helper_022fefe0(lVar14);
  } while( true );
}


// UI.RoleSpritePickPopup$$CreateItem
// il2cpp: void UI_RoleSpritePickPopup__CreateItem (UI_RoleSpritePickPopup_o* __this, UI_ElementStyle_o* style, System_String_o* displayName, System_String_o* value, const MethodInfo* method);
// 0x4350c40

void UI_RoleSpritePickPopup__CreateItem
               (UI_RoleSpritePickPopup_o *__this,UI_ElementStyle_o *style,System_String_o *displayName,
               System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  void *pvVar4;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_UI_ColorBlock_o value_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  System_Type_array *pSVar7;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Il2CppObject *pIVar12;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  Il2CppClass *pIVar13;
  TMPro_TMP_FontAsset_o *value_01;
  TMPro_TMP_SpriteAsset_o *value_02;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar14;
  UnityEngine_Events_UnityAction_o *call;
  PatreonEffects_RoleSpriteDefinition_o PVar15;
  int32_t local_a4;
  System_String_o *local_a0;
  Il2CppObject *local_98;
  UI_ElementStyle_o *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_90 = style;
  if (g_data_057ae13c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Button);
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoleSpriteDefinition_First_RoleSpriteDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_RoleSpriteDefinition_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CreateItem_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateItem_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"<sprite={0}> {1}");
    il2cpp_runtime_helper_023445d0(&"RoleSpriteButton");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae13c = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 == (Il2CppObject *)0x0) {
label_0435170a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    local_98 = pIVar6 + 1;
    pIVar6[1].klass = (Il2CppClass *)value;
    il2cpp_runtime_helper_022b4080(local_98,value);
    pIVar6[1].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pIVar6[1].monitor,__this);
    pSVar7 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pSVar7 == (System_Type_array *)0x0) goto label_0435170a;
    if ((pSVar8 != (System_Type_o *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0))
    goto label_04351714;
    if ((int)pSVar7->max_length != 0) {
      pSVar7->m_Items[0] = pSVar8;
      il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
      pSVar8 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
      if ((pSVar8 != (System_Type_o *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0))
      goto label_04351714;
      if (1 < (uint)pSVar7->max_length) {
        pSVar7->m_Items[1] = pSVar8;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 1);
        pSVar8 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
        if ((pSVar8 != (System_Type_o *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0))
        goto label_04351714;
        if (2 < (uint)pSVar7->max_length) {
          pSVar7->m_Items[2] = pSVar8;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 2);
          pSVar8 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
          if ((pSVar8 != (System_Type_o *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0))
          goto label_04351714;
          if (3 < (uint)pSVar7->max_length) {
            pSVar7->m_Items[3] = pSVar8;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 3);
            pSVar8 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if ((pSVar8 != (System_Type_o *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0))
            goto label_04351714;
            local_a0 = displayName;
            if (4 < (uint)pSVar7->max_length) {
              pSVar7->m_Items[4] = pSVar8;
              il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 4,pSVar8);
              __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440(__this_02,"RoleSpriteButton",pSVar7,(MethodInfo *)0x0);
              if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                pUVar10 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                pUVar11 = (__this->fields).SinglePanel;
                if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                   (pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar11,0,(MethodInfo *)0x0);
                  lVar9 = MethodInfo_Void_Add;
                  __this_00 = (__this->fields)._items;
                  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (__this_00->fields)._items;
                    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
                      uVar2 = (__this_00->fields)._size;
                      if (uVar2 < (uint)pUVar3->max_length) {
                        (__this_00->fields)._size = uVar2 + 1;
                        pUVar3->m_Items[(int)uVar2] = __this_02;
                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2,__this_02);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                   (Il2CppObject *)__this_02,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
                        ;
                      }
                      pIVar12 = UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      if (pIVar12 != (Il2CppObject *)0x0) {
                        (*pIVar12->klass->vtable[0x24].methodPtr)
                                  (0x442a0000,pIVar12,pIVar12->klass->vtable[0x24].method);
                        (*pIVar12->klass->vtable[0x26].methodPtr)
                                  (0x42280000,pIVar12,pIVar12->klass->vtable[0x26].method);
                        pIVar12 = UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_Image_GetComponent_Image);
                        if (pIVar12 != (Il2CppObject *)0x0) {
                          (*pIVar12->klass->vtable[0x17].methodPtr)
                                    (0x3f800000,0x3f800000,pIVar12,pIVar12->klass->vtable[0x17].method);
                          __this_03 = (UnityEngine_UI_Selectable_o *)
                                      UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_Button_GetComponent_Button);
                          if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                            local_88 = 0x3f8000003f800000;
                            uStack_80 = 0x3da3d70a3f800000;
                            local_78 = 0x3f8000003f800000;
                            uStack_70 = 0x3e23d70a3f800000;
                            local_68 = 0x3f8000003f800000;
                            uStack_60 = 0x3e75c28f3f800000;
                            local_58 = 0x3f8000003f800000;
                            uStack_50 = 0x3e23d70a3f800000;
                            local_48 = 0x3f8000003f800000;
                            uStack_40 = 0x3d4ccccd3f800000;
                            local_38 = 0x3dcccccd3f800000;
                            value_00.fields.m_NormalColor.fields.b = 1.0;
                            value_00.fields.m_NormalColor.fields.a = 0.08;
                            value_00.fields.m_NormalColor.fields.r = 1.0;
                            value_00.fields.m_NormalColor.fields.g = 1.0;
                            value_00.fields.m_HighlightedColor.fields.r = 1.0;
                            value_00.fields.m_HighlightedColor.fields.g = 1.0;
                            value_00.fields.m_HighlightedColor.fields.b = 1.0;
                            value_00.fields.m_HighlightedColor.fields.a = 0.16;
                            value_00.fields.m_PressedColor.fields.r = 1.0;
                            value_00.fields.m_PressedColor.fields.g = 1.0;
                            value_00.fields.m_PressedColor.fields.b = 1.0;
                            value_00.fields.m_PressedColor.fields.a = 0.24;
                            value_00.fields.m_SelectedColor.fields.r = 1.0;
                            value_00.fields.m_SelectedColor.fields.g = 1.0;
                            value_00.fields.m_SelectedColor.fields.b = 1.0;
                            value_00.fields.m_SelectedColor.fields.a = 0.16;
                            value_00.fields.m_DisabledColor.fields.r = 1.0;
                            value_00.fields.m_DisabledColor.fields.g = 1.0;
                            value_00.fields.m_DisabledColor.fields.b = 1.0;
                            value_00.fields.m_DisabledColor.fields.a = 0.05;
                            value_00.fields.m_ColorMultiplier = 1.0;
                            value_00.fields.m_FadeDuration = 0.1;
                            UnityEngine_UI_Selectable__set_colors(__this_03,value_00,(MethodInfo *)0x0);
                            pSVar7 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                            pSVar8 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                            if (pSVar7 != (System_Type_array *)0x0) {
                              if ((pSVar8 != (System_Type_o *)0x0) &&
                                 (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0)) goto label_04351714;
                              if ((int)pSVar7->max_length != 0) {
                                pSVar7->m_Items[0] = pSVar8;
                                il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
                                pSVar8 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                                if ((pSVar8 != (System_Type_o *)0x0) &&
                                   (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0)) goto label_04351714;
                                if (1 < (uint)pSVar7->max_length) {
                                  pSVar7->m_Items[1] = pSVar8;
                                  il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 1);
                                  pSVar8 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                  if ((pSVar8 != (System_Type_o *)0x0) &&
                                     (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8), lVar9 == 0)) goto label_04351714;
                                  if (2 < (uint)pSVar7->max_length) {
                                    pSVar7->m_Items[2] = pSVar8;
                                    il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 2,pSVar8);
                                    __this_04 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                    UnityEngine_GameObject___ctor_4dfc440
                                              (__this_04,"Text",pSVar7,(MethodInfo *)0x0);
                                    if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar11 = UnityEngine_GameObject__get_transform
                                                          (__this_04,(MethodInfo *)0x0);
                                      pUVar10 = UnityEngine_GameObject__get_transform
                                                          (__this_02,(MethodInfo *)0x0);
                                      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                        UnityEngine_Transform__SetParent_4e09e30
                                                  (pUVar11,pUVar10,0,(MethodInfo *)0x0);
                                        __this_05 = (UnityEngine_RectTransform_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              (__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (__this_05,
                                                     (UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                                     (MethodInfo *)0x0);
                                          if (g_data_057a9c86 == '\0') {
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                            g_data_057a9c86 = '\x01';
                                          }
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (__this_05,
                                                     (UnityEngine_Vector2_o)
                                                     *(UnityEngine_Vector2_Fields *)
                                                      (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_offsetMin
                                                    (__this_05,(UnityEngine_Vector2_o)0x41600000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_offsetMax
                                                    (__this_05,(UnityEngine_Vector2_o)0xc1600000,
                                                     (MethodInfo *)0x0);
                                          pIVar13 = (Il2CppClass *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              (__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                          pIVar12 = pIVar6 + 2;
                                          pIVar6[2].klass = pIVar13;
                                          il2cpp_runtime_helper_022b4080(pIVar12);
                                          if (((pIVar6[2].klass != (Il2CppClass *)0x0) &&
                                              (TMPro_TMP_Text__set_richText
                                                         ((TMPro_TMP_Text_o *)pIVar6[2].klass,1,
                                                          (MethodInfo *)0x0),
                                              local_90 != (UI_ElementStyle_o *)0x0)) &&
                                             (pIVar12->klass != (Il2CppClass *)0x0)) {
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)pIVar12->klass,
                                                       (float)(local_90->fields).FontSize,(MethodInfo *)0x0);
                                            if (pIVar12->klass != (Il2CppClass *)0x0) {
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)pIVar12->klass,1,
                                                         (MethodInfo *)0x0);
                                              if (pIVar12->klass != (Il2CppClass *)0x0) {
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)pIVar12->klass,0x1001,
                                                           (MethodInfo *)0x0);
                                                pIVar13 = pIVar12->klass;
                                                if (pIVar13 != (Il2CppClass *)0x0) {
                                                  pvVar4 = (pIVar13->_1).image;
                                                  (**(code **)((long)pvVar4 + 0x2a8))
                                                            (0x3f800000,0x3f800000,pIVar13,
                                                             *(undefined8 *)((long)pvVar4 + 0x2b0));
                                                  value_01 = (TMPro_TMP_FontAsset_o *)
                                                             UnityEngine_Resources__Load_object_
                                                                       ("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  bVar5 = UnityEngine_Object__op_Inequality
                                                                    ((UnityEngine_Object_o *)value_01,
                                                                     (UnityEngine_Object_o *)0x0,
                                                                     (MethodInfo *)0x0);
                                                  if ((char)bVar5 != '\0') {
                                                    if (pIVar12->klass == (Il2CppClass *)0x0)
                                                    goto label_0435170a;
                                                    TMPro_TMP_Text__set_font
                                                              ((TMPro_TMP_Text_o *)pIVar12->klass,value_01,
                                                               (MethodInfo *)0x0);
                                                  }
                                                  value_02 = (TMPro_TMP_SpriteAsset_o *)
                                                             UnityEngine_Resources__Load_object_
                                                                       ("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  bVar5 = UnityEngine_Object__op_Inequality
                                                                    ((UnityEngine_Object_o *)value_02,
                                                                     (UnityEngine_Object_o *)0x0,
                                                                     (MethodInfo *)0x0);
                                                  if ((char)bVar5 != '\0') {
                                                    if (pIVar12->klass == (Il2CppClass *)0x0)
                                                    goto label_0435170a;
                                                    TMPro_TMP_Text__set_spriteAsset
                                                              ((TMPro_TMP_Text_o *)pIVar12->klass,value_02,
                                                               (MethodInfo *)0x0);
                                                  }
                                                  pIVar13 = pIVar12->klass;
                                                  bVar5 = System_String__IsNullOrEmpty
                                                                    ((System_String_o *)local_98->klass,
                                                                     (MethodInfo *)0x0);
                                                  pSVar14 = "None";
                                                  if ((char)bVar5 == '\0') {
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    source = *(
                                                       System_Collections_Generic_IEnumerable_TSource__o **)
                                                       (*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
                                                    predicate = (System_Func_TSource__bool__o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_Func_RoleSpriteDefinition_bool);
                                                    System_Func_RoleSpriteDefinition__bool____ctor();
                                                    PVar15 = 
                                                       System_Linq_Enumerable__First_RoleSpriteDefinition_
                                                                 (source,predicate,MethodInfo_RoleSpriteDefinition_First_RoleSpriteDefinition);
                                                    local_a4 = PVar15.fields.SpriteIndex;
                                                    pIVar6 = (Il2CppObject *)
                                                             il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_a4);
                                                    pSVar14 = System_String__Format_3af78e0
                                                                        ("<sprite={0}> {1}",pIVar6,
                                                                         (Il2CppObject *)local_a0,
                                                                         (MethodInfo *)0x0);
                                                  }
                                                  if (pIVar13 != (Il2CppClass *)0x0) {
                                                    pvVar4 = (pIVar13->_1).image;
                                                    (**(code **)((long)pvVar4 + 0x558))
                                                              (pIVar13,pSVar14,
                                                               *(undefined8 *)((long)pvVar4 + 0x560));
                                                    __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                                                (__this_03->fields).m_CanvasGroupCache;
                                                    call = (UnityEngine_Events_UnityAction_o *)
                                                           il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                    UnityEngine_Events_UnityAction___ctor();
                                                    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                      UnityEngine_Events_UnityEvent__AddListener
                                                                (__this_01,call,(MethodInfo *)0x0);
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
                                    goto label_0435170a;
                                  }
                                }
                              }
                              goto label_0435170f;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto label_0435170a;
            }
          }
        }
      }
    }
  }
label_0435170f:
  il2cpp_runtime_helper_022b2ca0();
label_04351714:
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup$$OnSelect
// il2cpp: void UI_RoleSpritePickPopup__OnSelect (UI_RoleSpritePickPopup_o* __this, System_String_o* value, System_String_o* displayText, const MethodInfo* method);
// 0x4351740

void UI_RoleSpritePickPopup__OnSelect
               (UI_RoleSpritePickPopup_o *__this,System_String_o *value,System_String_o *displayText,
               MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_UI_Text_o *method_00;
  
  if (g_data_057ae13d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae13d = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar1 = (__this->fields)._label;
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae13e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
        g_data_057ae13e = '\x01';
      }
      method_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
      (((UI_TooltipPopup_o *)value)->fields)._label = method_00;
      il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)value)->fields)._label);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)value,(MethodInfo *)method_00);
      return;
    }
    if ((char)bVar3 != '\0') {
      displayText = "None";
    }
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,displayText,(pTVar1->klass->vtable)._66_set_text.method);
  }
  pUVar2 = (__this->fields)._onSelect;
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.RoleSpritePickPopup$$.ctor
// il2cpp: void UI_RoleSpritePickPopup___ctor (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4351850

void UI_RoleSpritePickPopup___ctor(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057ae13e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae13e = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = (System_Collections_Generic_List_GameObject__o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


