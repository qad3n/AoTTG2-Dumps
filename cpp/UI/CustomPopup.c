// Type: UI.CustomPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CustomPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomPopup.cs
// --------------------------------

// UI.CustomPopup.<>c__DisplayClass11_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___ctor (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5d1cf10

void UI_CustomPopup___c__DisplayClass11_0___ctor
               (UI_CustomPopup___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass11_0$$<AddBottomButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0 (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5d1d5b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1d5bd: mov rsi, qword ptr [rax + 0x18]
// asm:   0x5d1d5c1: pop rax
// asm:   0x5d1d5c2: jmp 0x5d1d420  ; UI_CustomPopup__OnButtonClick()

void UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0
               (UI_CustomPopup___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UI_CustomPopup_o *pUVar2;
  System_String_o *a;
  bool bVar3;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_CustomPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (__this->fields).name;
  if (Il2CppMethodInitialized_07547db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547db1 = '\x01';
  }
  bVar3 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if (bVar3) {
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_00,a,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___ctor (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5d1d310

void UI_CustomPopup___c__DisplayClass16_0___ctor
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass16_0$$<AddButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0 (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5d1d5d0

void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CustomPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CustomPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CustomPopup__OnButtonClick(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CustomPopup$$get_Title
// il2cpp: System_String_o* UI_CustomPopup__get_Title (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1cc20

System_String_o * UI_CustomPopup__get_Title(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.CustomPopup$$get_VerticalSpacing
// il2cpp: float UI_CustomPopup__get_VerticalSpacing (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1cc40

float UI_CustomPopup__get_VerticalSpacing(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CustomPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomPopup__get_VerticalPadding (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1cc50

int32_t UI_CustomPopup__get_VerticalPadding(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CustomPopup$$Setup
// il2cpp: void UI_CustomPopup__Setup (UI_CustomPopup_o* __this, UI_BasePanel_o* parent, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x5d1cc60

void UI_CustomPopup__Setup
               (UI_CustomPopup_o *__this,UI_BasePanel_o *parent,System_String_o *title,float width,
               float height,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_07547dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomPopup_Setup_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547dab = '\x01';
  }
  (__this->fields)._width = width;
  (__this->fields)._height = height;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  (__this->fields)._style = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
  parent_00 = (__this->fields).BottomBar;
  pUVar2 = (__this->fields)._style;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CustomPopup_Setup_b__10_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,pUVar2,pSVar1,0.0,__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$AddBottomButton
// il2cpp: void UI_CustomPopup__AddBottomButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x5d1ce00

void UI_CustomPopup__AddBottomButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,MethodInfo *method)

{
  UI_ElementStyle_o *style;
  UI_CustomPopup___c__DisplayClass11_0_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CustomPopup_c__DisplayClass11_0_AddBottomButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547dac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CustomPopup_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_CustomPopup___c__DisplayClass11_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
    pUVar1 = (__this->fields).BottomBar;
    style = (__this->fields)._style;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass11_0_AddBottomButton_b__0,(MethodInfo *)0x0)
    ;
    __this_02 = UI_ElementFactory__CreateTextButton(pUVar1,style,title,0.0,__this_01,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$GetHeight
// il2cpp: float UI_CustomPopup__GetHeight (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1cf20

float UI_CustomPopup__GetHeight(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._height;
}


// UI.CustomPopup$$GetWidth
// il2cpp: float UI_CustomPopup__GetWidth (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1cf30

float UI_CustomPopup__GetWidth(UI_CustomPopup_o *__this,MethodInfo *method)

{
  return (__this->fields)._width;
}


// UI.CustomPopup$$Clear
// il2cpp: void UI_CustomPopup__Clear (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1cf40
// eh: try 0x5d1d000..0x5d1d031 -> pad 0x5d1d084 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1d09c..0x5d1d0a1 -> pad 0x5d1d0c0 cleanup
// eh: try 0x5d1d0c3..0x5d1d0cd -> pad 0x5d1d0d5 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1d082: jmp 0x5d1d084
// asm:   0x5d1d084: mov rbx, rax
// asm:   0x5d1d087: cmp edx, 1
// asm:   0x5d1d08a: jne 0x5d1d0c3
// asm:   0x5d1d08c: mov rdi, rbx
// asm:   0x5d1d08f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1d094: mov rbx, qword ptr [rax]
// asm:   0x5d1d097: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d1d09c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1d0a1: lea rax, [rip + 0x1570cd0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5d1d0a8: mov rsi, qword ptr [rax]
// asm:   0x5d1d0ab: mov rdi, rsp
// asm:   0x5d1d0ae: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1d0b3: test rbx, rbx
// asm:   0x5d1d0b6: je 0x5d1d045
// asm:   0x5d1d0b8: mov rdi, rbx
// asm:   0x5d1d0bb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1d0c0: mov rbx, rax
// asm:   0x5d1d0c3: lea rdi, [rsp + 0x20]
// asm:   0x5d1d0c8: call 0x2fdbef0  ; il2cpp_runtime_helper_02fdbef0()
// asm:   0x5d1d0cd: mov rdi, rbx
// asm:   0x5d1d0d0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1d0d5: mov rdi, rax
// asm:   0x5d1d0d8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CustomPopup__Clear(UI_CustomPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  Il2CppObject *obj;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547dad = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
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
  ThrowNullReferenceException();
}


// UI.CustomPopup$$AddLabel
// il2cpp: void UI_CustomPopup__AddLabel (UI_CustomPopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x5d1d0e0

void UI_CustomPopup__AddLabel(UI_CustomPopup_o *__this,System_String_o *label,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_07547dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    Il2CppMethodInitialized_07547dae = '\x01';
  }
  item = UI_ElementFactory__CreateDefaultLabel
                   ((__this->fields).SinglePanel,(__this->fields)._style,label,0,4,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
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
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$AddButton
// il2cpp: void UI_CustomPopup__AddButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x5d1d1a0

void UI_CustomPopup__AddButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *parent;
  UI_ElementStyle_o *style;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UI_CustomPopup___c__DisplayClass16_0_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_07547daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547daf = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CustomPopup_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_CustomPopup___c__DisplayClass16_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).name);
    parent = (__this->fields).SinglePanel;
    style = (__this->fields)._style;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0,(MethodInfo *)0x0);
    item = UI_ElementFactory__CreateDefaultButton(parent,style,title,0.0,0.0,__this_02,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
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
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$AddButtons
// il2cpp: void UI_CustomPopup__AddButtons (UI_CustomPopup_o* __this, System_Collections_Generic_List_object__o* names, System_Collections_Generic_List_object__o* titles, const MethodInfo* method);
// 0x5d1d320

void UI_CustomPopup__AddButtons
               (UI_CustomPopup_o *__this,System_Collections_Generic_List_object__o *names,
               System_Collections_Generic_List_object__o *titles,MethodInfo *method)

{
  System_String_o *name;
  System_String_o *title;
  int iVar1;
  
  if (Il2CppMethodInitialized_07547db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    Il2CppMethodInitialized_07547db0 = '\x01';
  }
  if (names == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (names->fields)._size;
  if (titles == (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < iVar1) {
      System_Collections_Generic_List_object___get_Item
                (names,0,(MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      ThrowNullReferenceException();
    }
  }
  else if (0 < iVar1) {
    iVar1 = 0;
    do {
      name = (System_String_o *)
             System_Collections_Generic_List_object___get_Item
                       (names,iVar1,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      title = (System_String_o *)
              System_Collections_Generic_List_object___get_Item
                        (titles,iVar1,
                         (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      if ((name != (System_String_o *)0x0) && (name->klass != g_data_07556758)) {
        il2cpp_codegen_raise_invalid_cast_exception(name);
      }
      if ((title != (System_String_o *)0x0) && (title->klass != g_data_07556758)) {
        il2cpp_codegen_raise_invalid_cast_exception(title);
      }
      UI_CustomPopup__AddButton(__this,name,title,(MethodInfo *)&g_data_075566c8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (names->fields)._size);
  }
  return;
}


// UI.CustomPopup$$OnButtonClick
// il2cpp: void UI_CustomPopup__OnButtonClick (UI_CustomPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d1d420

void UI_CustomPopup__OnButtonClick(UI_CustomPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547db1 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_00,name,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$.ctor
// il2cpp: void UI_CustomPopup___ctor (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1d4f0

void UI_CustomPopup___ctor(UI_CustomPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547db2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$<Setup>b__10_0
// il2cpp: void UI_CustomPopup___Setup_b__10_0 (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x5d1d570

void UI_CustomPopup___Setup_b__10_0(UI_CustomPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547db3 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CustomPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


