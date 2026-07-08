// Type: UI.RoleSpritePickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/RoleSpritePickPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4027f80

void UI_RoleSpritePickPopup_<>c__DisplayClass21_0___ctor
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__0
// il2cpp: bool UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x4028120

bool_conflict
UI_RoleSpritePickPopup_<>c__DisplayClass21_0__<CreateItem>b__0
          (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o definition,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__op_Equality
                    (definition.fields.RoleName,(__this->fields).value,(MethodInfo *)0x0);
  return bVar1;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__1
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4028140

void UI_RoleSpritePickPopup_<>c__DisplayClass21_0__<CreateItem>b__1
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.RoleSpritePickPopup$$get_Title
// il2cpp: System_String_o* UI_RoleSpritePickPopup__get_Title (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026cf0

System_String_o *
UI_RoleSpritePickPopup__get_Title(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.RoleSpritePickPopup$$get_Width
// il2cpp: float UI_RoleSpritePickPopup__get_Width (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026d10

float UI_RoleSpritePickPopup__get_Width(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 760.0;
}


// UI.RoleSpritePickPopup$$get_Height
// il2cpp: float UI_RoleSpritePickPopup__get_Height (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026d20

float UI_RoleSpritePickPopup__get_Height(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 620.0;
}


// UI.RoleSpritePickPopup$$get_ScrollBar
// il2cpp: bool UI_RoleSpritePickPopup__get_ScrollBar (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026d30

bool_conflict
UI_RoleSpritePickPopup__get_ScrollBar(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.RoleSpritePickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_HorizontalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026d40

int32_t UI_RoleSpritePickPopup__get_HorizontalPadding
                  (UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_VerticalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026d50

int32_t UI_RoleSpritePickPopup__get_VerticalPadding
                  (UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalSpacing
// il2cpp: float UI_RoleSpritePickPopup__get_VerticalSpacing (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x4026d60

float UI_RoleSpritePickPopup__get_VerticalSpacing
                (UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.RoleSpritePickPopup$$Setup
// il2cpp: void UI_RoleSpritePickPopup__Setup (UI_RoleSpritePickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4026d70

void UI_RoleSpritePickPopup__Setup
               (UI_RoleSpritePickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704323 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704323 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
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


// UI.RoleSpritePickPopup$$Show
// il2cpp: void UI_RoleSpritePickPopup__Show (UI_RoleSpritePickPopup_o* __this, Settings_StringSetting_o* setting, TMPro_TextMeshProUGUI_o* label, UnityEngine_Events_UnityAction_o* onSelect, const MethodInfo* method);
// 0x4026e90

void UI_RoleSpritePickPopup__Show
               (UI_RoleSpritePickPopup_o *__this,Settings_StringSetting_o *setting,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_Events_UnityAction_o *onSelect,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_05704324 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704324 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  (__this->fields)._setting = setting;
  il2cpp_runtime_glue(&(__this->fields)._setting,setting);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  (__this->fields)._onSelect = onSelect;
  il2cpp_runtime_glue(&(__this->fields)._onSelect,onSelect);
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)obj;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') break;
      pUVar6 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      obj = pUVar6;
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)obj;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.RoleSpritePickPopup$$BuildItems
// il2cpp: void UI_RoleSpritePickPopup__BuildItems (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x40270a0

/* WARNING: Removing unreachable block (ram,0x0402746b) */

void UI_RoleSpritePickPopup__BuildItems(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  MethodInfo *in_R8;
  
  if (DAT_05704325 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_RoleSpriteDefinition);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_RoleSpriteDefinition);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&"None");
    DAT_05704325 = '\x01';
  }
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x1a,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  UI_RoleSpritePickPopup__CreateItem
            (__this,__this_00,"None",(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
             ,in_R8);
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                     ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = pSVar6->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IEnumerable_RoleSpriteDefinition) {
        pVVar7 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
        goto LAB_04027211;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar10);
  }
  pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar6,TypeInfo_IEnumerable_RoleSpriteDefinition,0);
LAB_04027211:
  plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_04027293;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_04027293:
    cVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (cVar4 == '\0') break;
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator_RoleSpriteDefinition) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_04027303;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator_RoleSpriteDefinition,0);
LAB_04027303:
    pSVar5 = (System_String_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    UI_RoleSpritePickPopup__CreateItem(__this,__this_00,pSVar5,pSVar5,in_R8);
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar9 = (undefined8 *)
                   (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
          goto LAB_040273cd;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_040273cd:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  return;
}


// UI.RoleSpritePickPopup$$CreateItem
// il2cpp: void UI_RoleSpritePickPopup__CreateItem (UI_RoleSpritePickPopup_o* __this, UI_ElementStyle_o* style, System_String_o* displayName, System_String_o* value, const MethodInfo* method);
// 0x4027490

void UI_RoleSpritePickPopup__CreateItem
               (UI_RoleSpritePickPopup_o *__this,UI_ElementStyle_o *style,
               System_String_o *displayName,System_String_o *value,MethodInfo *method)

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
  undefined8 uVar15;
  PatreonEffects_RoleSpriteDefinition_o PVar16;
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
  if (DAT_05704326 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_RoleSpriteDefinition_First_RoleSpriteDefinition);
    il2cpp_init_method_metadata(&TypeInfo_Func_RoleSpriteDefinition__bool);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__CreateItem_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateItem_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"<sprite={0}> {1}");
    il2cpp_init_method_metadata(&"RoleSpriteButton");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    DAT_05704326 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 != (Il2CppObject *)0x0) {
    local_98 = pIVar6 + 1;
    pIVar6[1].klass = (Il2CppClass *)value;
    il2cpp_runtime_glue(local_98,value);
    pIVar6[1].monitor = __this;
    il2cpp_runtime_glue(&pIVar6[1].monitor,__this);
    pSVar7 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pSVar7 != (System_Type_array *)0x0) {
      if ((pSVar8 != (System_Type_o *)0x0) &&
         (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
      {
LAB_04027f64:
        uVar15 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar15,0);
      }
      if ((int)pSVar7->max_length != 0) {
        pSVar7->m_Items[0] = pSVar8;
        il2cpp_runtime_glue(pSVar7->m_Items);
        pSVar8 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar8 != (System_Type_o *)0x0) &&
           (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0
           )) goto LAB_04027f64;
        if (1 < (uint)pSVar7->max_length) {
          pSVar7->m_Items[1] = pSVar8;
          il2cpp_runtime_glue(pSVar7->m_Items + 1);
          pSVar8 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
          if ((pSVar8 != (System_Type_o *)0x0) &&
             (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).element_class),
             lVar9 == 0)) goto LAB_04027f64;
          if (2 < (uint)pSVar7->max_length) {
            pSVar7->m_Items[2] = pSVar8;
            il2cpp_runtime_glue(pSVar7->m_Items + 2);
            pSVar8 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
            if ((pSVar8 != (System_Type_o *)0x0) &&
               (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).element_class),
               lVar9 == 0)) goto LAB_04027f64;
            if (3 < (uint)pSVar7->max_length) {
              pSVar7->m_Items[3] = pSVar8;
              il2cpp_runtime_glue(pSVar7->m_Items + 3);
              pSVar8 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
              if ((pSVar8 != (System_Type_o *)0x0) &&
                 (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).element_class),
                 lVar9 == 0)) goto LAB_04027f64;
              local_a0 = displayName;
              if (4 < (uint)pSVar7->max_length) {
                pSVar7->m_Items[4] = pSVar8;
                il2cpp_runtime_glue(pSVar7->m_Items + 4,pSVar8);
                __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor(__this_02,"RoleSpriteButton",pSVar7,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar11 = (__this->fields).SinglePanel;
                  if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar11 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                     pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar10,pUVar11,0,(MethodInfo *)0x0);
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
                          il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,__this_02);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)__this_02,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        pIVar12 = UnityEngine_GameObject__GetComponent<object>
                                            (__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        if (pIVar12 != (Il2CppObject *)0x0) {
                          (*pIVar12->klass->vtable[0x24].methodPtr)
                                    (0x442a0000,pIVar12,pIVar12->klass->vtable[0x24].method);
                          (*pIVar12->klass->vtable[0x26].methodPtr)
                                    (0x42280000,pIVar12,pIVar12->klass->vtable[0x26].method);
                          pIVar12 = UnityEngine_GameObject__GetComponent<object>
                                              (__this_02,MethodInfo_Image_GetComponent_Image);
                          if (pIVar12 != (Il2CppObject *)0x0) {
                            (*pIVar12->klass->vtable[0x17].methodPtr)
                                      (0x3f800000,0x3f800000,pIVar12,
                                       pIVar12->klass->vtable[0x17].method);
                            __this_03 = (UnityEngine_UI_Selectable_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (__this_02,MethodInfo_Button_GetComponent_Button);
                            if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                              il2cpp_init_class();
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
                              UnityEngine_UI_Selectable__set_colors
                                        (__this_03,value_00,(MethodInfo *)0x0);
                              pSVar7 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                              pSVar8 = System_Type__GetTypeFromHandle
                                                 (TypeRef_RectTransform,(MethodInfo *)0x0);
                              if (pSVar7 != (System_Type_array *)0x0) {
                                if ((pSVar8 != (System_Type_o *)0x0) &&
                                   (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).
                                                                      element_class), lVar9 == 0))
                                goto LAB_04027f64;
                                if ((int)pSVar7->max_length != 0) {
                                  pSVar7->m_Items[0] = pSVar8;
                                  il2cpp_runtime_glue(pSVar7->m_Items);
                                  pSVar8 = System_Type__GetTypeFromHandle
                                                     (TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                                  if ((pSVar8 != (System_Type_o *)0x0) &&
                                     (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1).
                                                                        element_class), lVar9 == 0))
                                  goto LAB_04027f64;
                                  if (1 < (uint)pSVar7->max_length) {
                                    pSVar7->m_Items[1] = pSVar8;
                                    il2cpp_runtime_glue(pSVar7->m_Items + 1);
                                    pSVar8 = System_Type__GetTypeFromHandle
                                                       (TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                                    if ((pSVar8 != (System_Type_o *)0x0) &&
                                       (lVar9 = il2cpp_runtime_glue(pSVar8,(((pSVar7->obj).klass)->_1
                                                                          ).element_class),
                                       lVar9 == 0)) goto LAB_04027f64;
                                    if (2 < (uint)pSVar7->max_length) {
                                      pSVar7->m_Items[2] = pSVar8;
                                      il2cpp_runtime_glue(pSVar7->m_Items + 2,pSVar8);
                                      __this_04 = (UnityEngine_GameObject_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GameObject);
                                      UnityEngine_GameObject___ctor
                                                (__this_04,"Text",pSVar7,(MethodInfo *)0x0);
                                      if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar11 = UnityEngine_GameObject__get_transform
                                                            (__this_04,(MethodInfo *)0x0);
                                        pUVar10 = UnityEngine_GameObject__get_transform
                                                            (__this_02,(MethodInfo *)0x0);
                                        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                          UnityEngine_Transform__SetParent
                                                    (pUVar11,pUVar10,0,(MethodInfo *)0x0);
                                          __this_05 = (UnityEngine_RectTransform_o *)
                                                      UnityEngine_GameObject__GetComponent<object>
                                                                (__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
                                          if (DAT_056fe093 == '\0') {
                                            il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                            DAT_056fe093 = '\x01';
                                          }
                                          if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_anchorMin
                                                      (__this_05,
                                                       (UnityEngine_Vector2_o)
                                                       **(UnityEngine_Vector2_Fields **)
                                                         (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                            if (DAT_0570136e == '\0') {
                                              il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                              DAT_0570136e = '\x01';
                                            }
                                            UnityEngine_RectTransform__set_anchorMax
                                                      (__this_05,
                                                       (UnityEngine_Vector2_o)
                                                       *(UnityEngine_Vector2_Fields *)
                                                        (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                                                       (MethodInfo *)0x0);
                                            UnityEngine_RectTransform__set_offsetMin
                                                      (__this_05,(UnityEngine_Vector2_o)0x41600000,
                                                       (MethodInfo *)0x0);
                                            UnityEngine_RectTransform__set_offsetMax
                                                      (__this_05,(UnityEngine_Vector2_o)0xc1600000,
                                                       (MethodInfo *)0x0);
                                            pIVar13 = (Il2CppClass *)
                                                      UnityEngine_GameObject__GetComponent<object>
                                                                (__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                                            pIVar12 = pIVar6 + 2;
                                            pIVar6[2].klass = pIVar13;
                                            il2cpp_runtime_glue(pIVar12,pIVar13);
                                            if (((pIVar6[2].klass != (Il2CppClass *)0x0) &&
                                                (TMPro_TMP_Text__set_richText
                                                           ((TMPro_TMP_Text_o *)pIVar6[2].klass,1,
                                                            (MethodInfo *)0x0),
                                                local_90 != (UI_ElementStyle_o *)0x0)) &&
                                               (pIVar12->klass != (Il2CppClass *)0x0)) {
                                              TMPro_TMP_Text__set_fontSize
                                                        ((TMPro_TMP_Text_o *)pIVar12->klass,
                                                         (float)(local_90->fields).FontSize,
                                                         (MethodInfo *)0x0);
                                              if (pIVar12->klass != (Il2CppClass *)0x0) {
                                                TMPro_TMP_Text__set_fontStyle
                                                          ((TMPro_TMP_Text_o *)pIVar12->klass,1,
                                                           (MethodInfo *)0x0);
                                                if (pIVar12->klass != (Il2CppClass *)0x0) {
                                                  TMPro_TMP_Text__set_alignment
                                                            ((TMPro_TMP_Text_o *)pIVar12->klass,
                                                             0x1001,(MethodInfo *)0x0);
                                                  pIVar13 = pIVar12->klass;
                                                  if (pIVar13 != (Il2CppClass *)0x0) {
                                                    pvVar4 = (pIVar13->_1).image;
                                                    (**(code **)((long)pvVar4 + 0x2a8))
                                                              (0x3f800000,0x3f800000,pIVar13,
                                                               *(undefined8 *)((long)pvVar4 + 0x2b0)
                                                              );
                                                    value_01 = (TMPro_TMP_FontAsset_o *)
                                                               UnityEngine_Resources__Load<object>
                                                                         ("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset)
                                                    ;
                                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                      il2cpp_init_class();
                                                    }
                                                    bVar5 = UnityEngine_Object__op_Inequality
                                                                      ((UnityEngine_Object_o *)
                                                                       value_01,(
                                                  UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                                  if ((char)bVar5 != '\0') {
                                                    if (pIVar12->klass == (Il2CppClass *)0x0)
                                                    goto LAB_04027f5a;
                                                    TMPro_TMP_Text__set_font
                                                              ((TMPro_TMP_Text_o *)pIVar12->klass,
                                                               value_01,(MethodInfo *)0x0);
                                                  }
                                                  value_02 = (TMPro_TMP_SpriteAsset_o *)
                                                             UnityEngine_Resources__Load<object>
                                                                       ("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  bVar5 = UnityEngine_Object__op_Inequality
                                                                    ((UnityEngine_Object_o *)
                                                                     value_02,(UnityEngine_Object_o
                                                                               *)0x0,
                                                                     (MethodInfo *)0x0);
                                                  if ((char)bVar5 != '\0') {
                                                    if (pIVar12->klass == (Il2CppClass *)0x0)
                                                    goto LAB_04027f5a;
                                                    TMPro_TMP_Text__set_spriteAsset
                                                              ((TMPro_TMP_Text_o *)pIVar12->klass,
                                                               value_02,(MethodInfo *)0x0);
                                                  }
                                                  pIVar13 = pIVar12->klass;
                                                  bVar5 = System_String__IsNullOrEmpty
                                                                    ((System_String_o *)
                                                                     local_98->klass,
                                                                     (MethodInfo *)0x0);
                                                  pSVar14 = "None";
                                                  if ((char)bVar5 == '\0') {
                                                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                                      il2cpp_init_class();
                                                    }
                                                    source = *(
                                                  System_Collections_Generic_IEnumerable_TSource__o
                                                  **)(*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
                                                  predicate = (System_Func_TSource__bool__o *)
                                                              il2cpp_runtime_glue(TypeInfo_Func_RoleSpriteDefinition__bool);
                                                  System_Func<RoleSpriteDefinition__bool>___ctor();
                                                  PVar16 = 
                                                  System_Linq_Enumerable__First<RoleSpriteDefinition>
                                                            (source,predicate,MethodInfo_RoleSpriteDefinition_First_RoleSpriteDefinition);
                                                  local_a4 = PVar16.fields.SpriteIndex;
                                                  pIVar6 = (Il2CppObject *)
                                                           il2cpp_runtime_glue(DAT_05711068,&local_a4
                                                                             );
                                                  pSVar14 = System_String__Format
                                                                      ("<sprite={0}> {1}",pIVar6,
                                                                       (Il2CppObject *)local_a0,
                                                                       (MethodInfo *)0x0);
                                                  }
                                                  if (pIVar13 != (Il2CppClass *)0x0) {
                                                    pvVar4 = (pIVar13->_1).image;
                                                    (**(code **)((long)pvVar4 + 0x558))
                                                              (pIVar13,pSVar14,
                                                               *(undefined8 *)((long)pvVar4 + 0x560)
                                                              );
                                                    __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                                                (__this_03->fields).
                                                                m_CanvasGroupCache;
                                                    call = (UnityEngine_Events_UnityAction_o *)
                                                           il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                    UnityEngine_Events_UnityAction___ctor();
                                                    if (__this_01 !=
                                                        (UnityEngine_Events_UnityEvent_o *)0x0) {
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
                                      goto LAB_04027f5a;
                                    }
                                  }
                                }
                                goto LAB_04027f5f;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_04027f5a;
              }
            }
          }
        }
      }
LAB_04027f5f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_04027f5a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.RoleSpritePickPopup$$OnSelect
// il2cpp: void UI_RoleSpritePickPopup__OnSelect (UI_RoleSpritePickPopup_o* __this, System_String_o* value, System_String_o* displayText, const MethodInfo* method);
// 0x4027f90

void UI_RoleSpritePickPopup__OnSelect
               (UI_RoleSpritePickPopup_o *__this,System_String_o *value,System_String_o *displayText
               ,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  bool_conflict bVar3;
  
  if (DAT_05704327 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"None");
    DAT_05704327 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar1 = (__this->fields)._label;
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
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
// 0x40280a0

void UI_RoleSpritePickPopup___ctor(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_05704328 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05704328 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = (System_Collections_Generic_List_GameObject__o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._items);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


