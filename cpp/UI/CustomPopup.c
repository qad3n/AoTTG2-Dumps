// Type: UI.CustomPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CustomPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CustomPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CustomPopup.<>c__DisplayClass11_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___ctor (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x40a92b0

void UI_CustomPopup_<>c__DisplayClass11_0___ctor
               (UI_CustomPopup___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass11_0$$<AddBottomButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0 (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x40a9960

void UI_CustomPopup_<>c__DisplayClass11_0__<AddBottomButton>b__0
               (UI_CustomPopup___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  UI_CustomPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CustomPopup_o *)0x0) {
    UI_CustomPopup__OnButtonClick(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___ctor (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x40a96c0

void UI_CustomPopup_<>c__DisplayClass16_0___ctor
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass16_0$$<AddButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0 (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x40a9980

void UI_CustomPopup_<>c__DisplayClass16_0__<AddButton>b__0
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CustomPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CustomPopup_o *)0x0) {
    UI_CustomPopup__OnButtonClick(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup$$get_Title
// il2cpp: System_String_o* UI_CustomPopup__get_Title (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a8fc0

System_String_o * UI_CustomPopup__get_Title(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.CustomPopup$$get_VerticalSpacing
// il2cpp: float UI_CustomPopup__get_VerticalSpacing (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a8fe0

float UI_CustomPopup__get_VerticalSpacing(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CustomPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomPopup__get_VerticalPadding (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a8ff0

int32_t UI_CustomPopup__get_VerticalPadding(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CustomPopup$$Setup
// il2cpp: void UI_CustomPopup__Setup (UI_CustomPopup_o* __this, UI_BasePanel_o* parent, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x40a9000

void UI_CustomPopup__Setup
               (UI_CustomPopup_o *__this,UI_BasePanel_o *parent,System_String_o *title,float width,
               float height,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_05704619 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704619 = '\x01';
  }
  (__this->fields)._width = width;
  (__this->fields)._height = height;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  (__this->fields)._style = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._style);
  parent_00 = (__this->fields).BottomBar;
  pUVar2 = (__this->fields)._style;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,pUVar2,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$AddBottomButton
// il2cpp: void UI_CustomPopup__AddBottomButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x40a91a0

void UI_CustomPopup__AddBottomButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,
               MethodInfo *method)

{
  UI_ElementStyle_o *style;
  Il2CppObject *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_0570461a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__AddBottomButton_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass11_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_0570461a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass11_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    __this_00[1].monitor = name;
    il2cpp_runtime_glue(&__this_00[1].monitor,name);
    pUVar1 = (__this->fields).BottomBar;
    style = (__this->fields)._style;
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    __this_01 = UI_ElementFactory__CreateTextButton
                          (pUVar1,style,title,0.0,onClick,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup$$GetHeight
// il2cpp: float UI_CustomPopup__GetHeight (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a92c0

float UI_CustomPopup__GetHeight(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._height;
}


// UI.CustomPopup$$GetWidth
// il2cpp: float UI_CustomPopup__GetWidth (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a92d0

float UI_CustomPopup__GetWidth(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._width;
}


// UI.CustomPopup$$Clear
// il2cpp: void UI_CustomPopup__Clear (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a92e0

void UI_CustomPopup__Clear(UI_CustomPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_0570461b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570461b = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
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
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    pSVar2 = (__this->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup$$AddLabel
// il2cpp: void UI_CustomPopup__AddLabel (UI_CustomPopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x40a9490

void UI_CustomPopup__AddLabel(UI_CustomPopup_o *__this,System_String_o *label,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  UnityEngine_GameObject_o *item;
  
  if (DAT_0570461c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570461c = '\x01';
  }
  item = UI_ElementFactory__CreateDefaultLabel
                   ((__this->fields).SinglePanel,(__this->fields)._style,label,0,4,(MethodInfo *)0x0
                   );
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup$$AddButton
// il2cpp: void UI_CustomPopup__AddButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x40a9550

void UI_CustomPopup__AddButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *parent;
  UI_ElementStyle_o *style;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  Il2CppObject *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *item;
  
  if (DAT_0570461d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddButton_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_0570461d = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_01 + 1,__this);
    __this_01[1].monitor = name;
    il2cpp_runtime_glue(&__this_01[1].monitor,name);
    parent = (__this->fields).SinglePanel;
    style = (__this->fields)._style;
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    item = UI_ElementFactory__CreateDefaultButton
                     (parent,style,title,0.0,0.0,onClick,(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._items;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup$$AddButtons
// il2cpp: void UI_CustomPopup__AddButtons (UI_CustomPopup_o* __this, System_Collections_Generic_List_object__o* names, System_Collections_Generic_List_object__o* titles, const MethodInfo* method);
// 0x40a96d0

void UI_CustomPopup__AddButtons
               (UI_CustomPopup_o *__this,System_Collections_Generic_List_object__o *names,
               System_Collections_Generic_List_object__o *titles,MethodInfo *method)

{
  System_String_o *name;
  System_String_o *title;
  int iVar1;
  
  if (DAT_0570461e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    DAT_0570461e = '\x01';
  }
  if (names == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (names->fields)._size;
  if (titles == (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < iVar1) {
      System_Collections_Generic_List<object>__get_Item(names,0,MethodInfo_Object_get_Item);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else if (0 < iVar1) {
    iVar1 = 0;
    do {
      name = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item(names,iVar1,MethodInfo_Object_get_Item);
      title = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item(titles,iVar1,MethodInfo_Object_get_Item);
      if ((name != (System_String_o *)0x0) && (name->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(name);
      }
      if ((title != (System_String_o *)0x0) && (title->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(title);
      }
      UI_CustomPopup__AddButton(__this,name,title,(MethodInfo *)&DAT_05711020);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (names->fields)._size);
  }
  return;
}


// UI.CustomPopup$$OnButtonClick
// il2cpp: void UI_CustomPopup__OnButtonClick (UI_CustomPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40a97d0

void UI_CustomPopup__OnButtonClick
               (UI_CustomPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_0570461f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&"Back");
    DAT_0570461f = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_00,name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomPopup$$.ctor
// il2cpp: void UI_CustomPopup___ctor (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a98a0

void UI_CustomPopup___ctor(UI_CustomPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_05704620 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05704620 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._items);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$<Setup>b__10_0
// il2cpp: void UI_CustomPopup___Setup_b__10_0 (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x40a9920

void UI_CustomPopup__<Setup>b__10_0(UI_CustomPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704621 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704621 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CustomPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


